/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008d0494 | FUN_1008d0494 */

void FUN_1008d0494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1008ce644(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x1008d04bc | FUN_1008d04bc */

void FUN_1008d04bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1008ced6c(param_1,param_3,param_4);
  return;
}



/* Address: 0x1008d04e4 | FUN_1008d04e4 */

void FUN_1008d04e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1008d0494(param_1,param_2,*unaff_x20,param_3,param_4);
  return;
}



/* Address: 0x1008d0504 | FUN_1008d0504 */

void FUN_1008d0504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1008d04bc(param_1,*unaff_x20,param_2,param_3);
  return;
}



/* Address: 0x1008d0524 | FUN_1008d0524 */

void FUN_1008d0524(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x39) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0x100;
    _swift_beginAccess(param_1 + 0x50,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1008d05f0 | FUN_1008d05f0 */

undefined8 FUN_1008d05f0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x39) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined2 *)(unaff_x20 + 0x38) = 0x100;
    _swift_beginAccess(unaff_x20 + 0x50,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x1008d06a0 | FUN_1008d06a0 */

undefined8 FUN_1008d06a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(char *)(unaff_x20 + 0x18) = (char)param_2;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_100308524(param_1,param_2);
  }
  return uVar1;
}



/* Address: 0x1008d0748 | FUN_1008d0748 */

undefined8 FUN_1008d0748(undefined8 *param_1)

{
  undefined2 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  uVar3 = param_1[4];
  uVar1 = *(undefined2 *)(param_1 + 5);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar2 = 0;
  if (*(char *)(unaff_x20 + 0x39) == -1) {
    *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
    *(undefined2 *)(unaff_x20 + 0x38) = uVar1;
    _swift_beginAccess(unaff_x20 + 0x50,auStack_80,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    FUN_1000f8cac(param_1,auStack_b0,&DAT_100feb9c0,&DAT_100c83078);
  }
  return uVar2;
}



/* Address: 0x1008d0824 | FUN_1008d0824 */

void FUN_1008d0824(long *param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar10 = *unaff_x20;
  uVar6 = *(ulong *)(uVar10 + 0x10);
  if (uVar6 == 0) {
    lVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    lVar17 = 0;
    lVar19 = 0;
    lVar21 = 0;
    lVar23 = 0;
    goto LAB_1008d090c;
  }
  if (uVar6 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0aac);
    (*pcVar1)();
  }
  plVar9 = (long *)(uVar10 + 0x20 + param_2 * 0x38);
  lVar14 = *plVar9;
  lVar3 = plVar9[2];
  lVar19 = plVar9[2];
  lVar17 = plVar9[1];
  lVar23 = plVar9[4];
  lVar21 = plVar9[3];
  lVar7 = plVar9[4];
  uVar15 = plVar9[5];
  uVar16 = plVar9[6];
  if (uVar6 == 1) {
LAB_1008d08a8:
    _swift_retain(lVar3);
    _swift_retain(lVar7);
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1008d1028();
      lVar7 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar7 = *(long *)(uVar10 + 0x10);
    }
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0ac4);
      (*pcVar1)();
    }
  }
  else {
    lVar8 = uVar10 + 0x20 + uVar6 * 0x38;
    lVar13 = *(long *)(lVar8 + -0x38);
    if (lVar14 == lVar13) goto LAB_1008d08a8;
    uVar6 = *(ulong *)(lVar8 + -0x10);
    if ((long)(uVar6 | uVar15) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0ac8);
      (*pcVar1)();
    }
    uVar12 = *(ulong *)(lVar8 + -8);
    bVar2 = uVar16 < uVar12;
    if (uVar15 != uVar6) {
      bVar2 = uVar15 < uVar6;
    }
    if (bVar2) {
      uVar11 = *(undefined8 *)(lVar8 + -0x28);
      lVar24 = *(long *)(lVar8 + -0x28);
      lVar22 = *(long *)(lVar8 + -0x30);
      lVar20 = *(long *)(lVar8 + -0x18);
      lVar18 = *(long *)(lVar8 + -0x20);
      uVar4 = *(undefined8 *)(lVar8 + -0x18);
      _swift_retain(lVar3);
      _swift_retain(lVar7);
      _swift_retain(uVar11);
      _swift_retain(uVar4);
      uVar5 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_1008d1028();
      }
      if (*(ulong *)(uVar10 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0adc);
        (*pcVar1)();
      }
      plVar9 = (long *)(uVar10 + 0x20 + param_2 * 0x38);
      lVar3 = plVar9[2];
      lVar7 = plVar9[4];
      *plVar9 = lVar13;
      plVar9[2] = lVar24;
      plVar9[1] = lVar22;
      plVar9[4] = lVar20;
      plVar9[3] = lVar18;
      plVar9[5] = uVar6;
      plVar9[6] = uVar12;
      _swift_release(lVar7);
      _swift_release(lVar3);
      if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0ae4);
        (*pcVar1)();
      }
      lVar7 = *(long *)(uVar10 + 0x10) + -1;
      lVar3 = uVar10 + 0x20 + lVar7 * 0x38;
      uVar11 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      *(long *)(uVar10 + 0x10) = lVar7;
      _swift_release(uVar4);
      _swift_release(uVar11);
      *unaff_x20 = uVar10;
      FUN_1008d0d70(param_2);
      goto LAB_1008d090c;
    }
    uStack_88 = *(undefined8 *)(lVar8 + -0x20);
    uVar4 = *(undefined8 *)(lVar8 + -0x28);
    uStack_78 = *(undefined8 *)(lVar8 + -0x10);
    uVar11 = *(undefined8 *)(lVar8 + -0x18);
    uStack_98 = *(undefined8 *)(lVar8 + -0x30);
    local_a0 = *(long *)(lVar8 + -0x38);
    local_70 = *(undefined8 *)(lVar8 + -8);
    local_90 = uVar4;
    local_80 = uVar11;
    _swift_retain(lVar3);
    _swift_retain(lVar7);
    _swift_retain(uVar4);
    _swift_retain(uVar11);
    FUN_1008d0afc(param_2,&local_a0);
    _swift_release(uVar11);
    _swift_release(uVar4);
    uVar10 = *unaff_x20;
    if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0ae0);
      (*pcVar1)();
    }
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1008d1028();
      lVar7 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar7 = *(long *)(uVar10 + 0x10);
    }
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0aa8);
      (*pcVar1)();
    }
  }
  lVar3 = uVar10 + lVar7 * 0x38;
  uVar11 = *(undefined8 *)(lVar3 + -8);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  *(long *)(uVar10 + 0x10) = lVar7 + -1;
  _swift_release(uVar4);
  _swift_release(uVar11);
  *unaff_x20 = uVar10;
LAB_1008d090c:
  *param_1 = lVar14;
  param_1[2] = lVar19;
  param_1[1] = lVar17;
  param_1[4] = lVar23;
  param_1[3] = lVar21;
  param_1[5] = uVar15;
  param_1[6] = uVar16;
  return;
}



/* Address: 0x1008d0afc | FUN_1008d0afc */

void FUN_1008d0afc(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d54);
    (*pcVar1)();
  }
  uVar10 = *unaff_x20;
  if (*(ulong *)(uVar10 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d58);
    (*pcVar1)();
  }
  lVar4 = uVar10 + param_1 * 0x38;
  uVar6 = *(ulong *)(lVar4 + 0x48);
  uVar8 = param_2[5];
  if ((long)(uVar8 | uVar6) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d5c);
    (*pcVar1)();
  }
  if (uVar6 == uVar8) {
    if (*(ulong *)(lVar4 + 0x50) < (ulong)param_2[6]) {
LAB_1008d0cf8:
      SVar21.bridgeObject = (void *)0x2;
      SVar21.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000033,
                 0x8000000100dafbb0,0xdafbb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d44);
      (*pcVar1)();
    }
  }
  else if (uVar6 < uVar8) goto LAB_1008d0cf8;
  uVar6 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1008d1028();
  }
  if (*(ulong *)(uVar10 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d70);
    (*pcVar1)();
  }
  lVar4 = uVar10 + 0x20;
  uVar3 = param_2[2];
  uVar11 = param_2[4];
  puVar5 = (undefined8 *)(lVar4 + param_1 * 0x38);
  uVar12 = puVar5[2];
  uVar13 = puVar5[4];
  uVar18 = param_2[1];
  uVar17 = *param_2;
  uVar20 = param_2[3];
  uVar19 = param_2[2];
  puVar5[6] = param_2[6];
  puVar5[1] = uVar18;
  *puVar5 = uVar17;
  puVar5[3] = uVar20;
  puVar5[2] = uVar19;
  uVar17 = param_2[4];
  puVar5[5] = param_2[5];
  puVar5[4] = uVar17;
  _swift_retain(uVar3);
  _swift_retain(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  *unaff_x20 = uVar10;
  if (param_1 != 0) {
    do {
      if ((long)*(ulong *)(uVar10 + 0x10) <= (long)param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d48);
        (*pcVar1)();
      }
      uVar6 = param_1 - 1;
      uVar8 = uVar6 >> 1;
      if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d4c);
        (*pcVar1)();
      }
      puVar5 = (undefined8 *)(lVar4 + param_1 * 0x38);
      uVar14 = puVar5[5];
      puVar15 = (undefined8 *)(lVar4 + uVar8 * 0x38);
      uVar7 = puVar15[5];
      if ((long)(uVar7 | uVar14) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0d50);
        (*pcVar1)();
      }
      uVar16 = puVar5[6];
      uVar9 = puVar15[6];
      bVar2 = uVar16 < uVar9;
      if (uVar14 != uVar7) {
        bVar2 = uVar14 < uVar7;
      }
      if (!bVar2) break;
      if (param_1 != uVar8) {
        uVar12 = *puVar5;
        uVar20 = puVar5[2];
        uVar19 = puVar5[1];
        uVar18 = puVar5[4];
        uVar13 = puVar5[3];
        *puVar5 = *puVar15;
        uVar3 = puVar15[2];
        uVar11 = puVar15[1];
        puVar5[2] = puVar15[2];
        puVar5[1] = uVar11;
        uVar11 = puVar15[4];
        uVar17 = puVar15[3];
        puVar5[4] = puVar15[4];
        puVar5[3] = uVar17;
        puVar5[5] = uVar7;
        puVar5[6] = uVar9;
        uVar7 = *(ulong *)(uVar10 + 0x10);
        _swift_retain(uVar3);
        _swift_retain(uVar11);
        if (uVar7 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0ccc);
          (*pcVar1)();
        }
        uVar11 = puVar15[2];
        uVar3 = puVar15[4];
        *puVar15 = uVar12;
        puVar15[2] = uVar20;
        puVar15[1] = uVar19;
        puVar15[4] = uVar18;
        puVar15[3] = uVar13;
        puVar15[5] = uVar14;
        puVar15[6] = uVar16;
        _swift_release(uVar3);
        _swift_release(uVar11);
      }
      param_1 = uVar8;
    } while (1 < uVar6);
    *unaff_x20 = uVar10;
  }
  return;
}



/* Address: 0x1008d0d70 | FUN_1008d0d70 */

void FUN_1008d0d70(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x20;
  
  do {
    if ((long)(param_1 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e78);
      (*pcVar2)();
    }
    uVar1 = param_1 * 2 + 2;
    if (SCARRY8(param_1 * 2,2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e8c);
      (*pcVar2)();
    }
    uVar5 = param_1 << 1 | 1;
    lVar4 = *unaff_x20;
    uVar6 = *(ulong *)(lVar4 + 0x10);
    uVar7 = param_1;
    if ((long)uVar5 < (long)uVar6) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e90);
        (*pcVar2)();
      }
      if (uVar6 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e94);
        (*pcVar2)();
      }
      lVar9 = lVar4 + 0x20 + uVar5 * 0x38;
      uVar7 = *(ulong *)(lVar9 + 0x28);
      lVar10 = lVar4 + 0x20 + param_1 * 0x38;
      uVar8 = *(ulong *)(lVar10 + 0x28);
      if ((long)(uVar8 | uVar7) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e9c);
        (*pcVar2)();
      }
      bVar3 = *(ulong *)(lVar9 + 0x30) < *(ulong *)(lVar10 + 0x30);
      if (uVar7 != uVar8) {
        bVar3 = uVar7 < uVar8;
      }
      uVar7 = uVar5;
      if (!bVar3) {
        uVar7 = param_1;
      }
    }
    uVar5 = uVar7;
    if ((long)uVar1 < (long)uVar6) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0e98);
        (*pcVar2)();
      }
      if (uVar6 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0ea0);
        (*pcVar2)();
      }
      lVar9 = lVar4 + 0x20 + uVar1 * 0x38;
      uVar5 = *(ulong *)(lVar9 + 0x28);
      lVar4 = lVar4 + 0x20 + uVar7 * 0x38;
      uVar6 = *(ulong *)(lVar4 + 0x28);
      if ((long)(uVar6 | uVar5) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d0ea4);
        (*pcVar2)();
      }
      bVar3 = *(ulong *)(lVar9 + 0x30) < *(ulong *)(lVar4 + 0x30);
      if (uVar5 != uVar6) {
        bVar3 = uVar5 < uVar6;
      }
      uVar5 = uVar1;
      if (!bVar3) {
        uVar5 = uVar7;
      }
    }
    if (uVar5 == param_1) {
      return;
    }
    FUN_1008d0ea4(param_1,uVar5);
    param_1 = uVar5;
  } while( true );
}



/* Address: 0x1008d0ea4 | FUN_1008d0ea4 */

void FUN_1008d0ea4(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (param_1 != param_2) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d100c);
      (*pcVar3)();
    }
    uVar10 = *unaff_x20;
    if (*(ulong *)(uVar10 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d1010);
      (*pcVar3)();
    }
    if (*(ulong *)(uVar10 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d1014);
      (*pcVar3)();
    }
    puVar7 = (undefined8 *)(uVar10 + 0x20 + param_1 * 0x38);
    uVar9 = *puVar7;
    uVar21 = puVar7[2];
    uVar19 = puVar7[1];
    uVar17 = puVar7[4];
    uVar15 = puVar7[3];
    uVar8 = puVar7[6];
    uVar5 = puVar7[4];
    uVar1 = puVar7[5];
    puVar6 = (undefined8 *)(uVar10 + 0x20 + param_2 * 0x38);
    uVar13 = *puVar6;
    uVar12 = puVar6[2];
    uVar22 = puVar6[2];
    uVar20 = puVar6[1];
    uVar18 = puVar6[4];
    uVar16 = puVar6[3];
    uVar11 = puVar6[4];
    uVar2 = puVar6[5];
    uVar14 = puVar6[6];
    _swift_retain(puVar7[2]);
    _swift_retain(uVar5);
    _swift_retain(uVar12);
    _swift_retain(uVar11);
    uVar4 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_1008d1028();
    }
    puVar6 = (undefined8 *)(uVar10 + 0x20 + param_1 * 0x38);
    uVar11 = puVar6[2];
    uVar5 = puVar6[4];
    *puVar6 = uVar13;
    puVar6[2] = uVar22;
    puVar6[1] = uVar20;
    puVar6[4] = uVar18;
    puVar6[3] = uVar16;
    puVar6[5] = uVar2;
    puVar6[6] = uVar14;
    _swift_release(uVar5);
    _swift_release(uVar11);
    if (*(ulong *)(uVar10 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008d1028);
      (*pcVar3)();
    }
    puVar6 = (undefined8 *)(uVar10 + 0x20 + param_2 * 0x38);
    uVar11 = puVar6[2];
    uVar5 = puVar6[4];
    *puVar6 = uVar9;
    puVar6[2] = uVar21;
    puVar6[1] = uVar19;
    puVar6[4] = uVar17;
    puVar6[3] = uVar15;
    puVar6[5] = uVar1;
    puVar6[6] = uVar8;
    _swift_release(uVar5);
    _swift_release(uVar11);
    *unaff_x20 = uVar10;
  }
  return;
}



/* Address: 0x1008d1028 | FUN_1008d1028 */

void FUN_1008d1028(long param_1)

{
  FUN_1008d1050(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d103c | FUN_1008d103c */

void FUN_1008d103c(long param_1)

{
  FUN_1008d1174(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d1050 | FUN_1008d1050 */

undefined * FUN_1008d1050(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d1174);
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
    puVar3 = &DAT_100feb9a0;
    FUN_1000f7830(&DAT_100feb9a0,&DAT_100c83058);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f0e770);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008d1174 | FUN_1008d1174 */

undefined * FUN_1008d1174(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d12c0);
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
    puVar3 = &DAT_100feb950;
    FUN_1000f7830(&DAT_100feb950,&DAT_100c82ff8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100feb110;
    FUN_1000f7830(&DAT_100feb110,&DAT_100c826e0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008d12c0 | FUN_1008d12c0 */

undefined * FUN_1008d12c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100feb958;
    FUN_1000f7830(&DAT_100feb958,&DAT_100c83000);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x48) * 2;
  }
  return puVar1;
}



/* Address: 0x1008d1354 | FUN_1008d1354 */

void FUN_1008d1354(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d13e0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008d1370 | FUN_1008d1370 */

void FUN_1008d1370(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d1510();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008d138c | FUN_1008d138c */

void FUN_1008d138c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d1630();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008d13a8 | FUN_1008d13a8 */

void FUN_1008d13a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d177c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008d13c4 | FUN_1008d13c4 */

void FUN_1008d13c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d18c0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008d13e0 | FUN_1008d13e0 */

undefined * FUN_1008d13e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d1510);
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
    puVar3 = &DAT_100feb4f0;
    FUN_1000f7830(&DAT_100feb4f0,&DAT_100c82c60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100feb298;
    FUN_1000f7830(&DAT_100feb298,&DAT_100c83080);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008d1510 | FUN_1008d1510 */

undefined * FUN_1008d1510(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d1630);
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
    puVar3 = &DAT_100feb958;
    FUN_1000f7830(&DAT_100feb958,&DAT_100c83000);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ef1a40);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008d1630 | FUN_1008d1630 */

undefined * FUN_1008d1630(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d177c);
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
    puVar3 = &DAT_100feb9b8;
    FUN_1000f7830(&DAT_100feb9b8,&DAT_100c83070);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100feb4c8;
    FUN_1000f7830(&DAT_100feb4c8,&DAT_100c82bd0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008d177c | FUN_1008d177c */

undefined * FUN_1008d177c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d18c0);
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
    puVar3 = &DAT_100feb960;
    FUN_1000f7830(&DAT_100feb960,&DAT_100c83008);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100feb100;
    FUN_1000f7830(&DAT_100feb100,&DAT_100c826d0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008d18c0 | FUN_1008d18c0 */

undefined * FUN_1008d18c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d1a08);
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
    puVar3 = &DAT_100feb980;
    FUN_1000f7830(&DAT_100feb980,&DAT_100c83038);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100feb158;
    FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008d1a08 | FUN_1008d1a08 */

void FUN_1008d1a08(long param_1)

{
  FUN_1008d1630(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d1a1c | FUN_1008d1a1c */

void FUN_1008d1a1c(long param_1)

{
  FUN_1008d177c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d1a30 | FUN_1008d1a30 */

void FUN_1008d1a30(long param_1)

{
  FUN_1008d18c0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d1a54 | FUN_1008d1a54 */

void FUN_1008d1a54(void)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_a0 [11];
  undefined *local_48;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x10) * 2;
  if (lVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b70);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008d13a8(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b74);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b78);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_1008d1f88();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b80);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_1008d1f88();
    lVar4 = *(long *)(local_48 + 0x10);
    local_a0[8] = 0;
    local_a0[7] = 0;
    local_a0[6] = 0;
    local_a0[5] = 0;
    local_a0[4] = 0;
    local_a0[3] = 0;
    local_a0[2] = 0;
    local_a0[1] = 0;
    local_a0[9] = 0;
    local_a0[10] = 1;
    local_a0[0] = lVar3 - lVar4;
    if (-1 < local_a0[0]) {
      FUN_1008d2318(local_a0);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b84);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1b7c);
  (*pcVar1)();
}



/* Address: 0x1008d1b84 | FUN_1008d1b84 */

void FUN_1008d1b84(void)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_98 [9];
  undefined2 local_50;
  undefined *local_48;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x10) * 2;
  if (lVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1c9c);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008d13c4(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1ca0);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1ca4);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_1008d26d0();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1cac);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_1008d26d0();
    lVar4 = *(long *)(local_48 + 0x10);
    local_98[6] = 0;
    local_98[5] = 0;
    local_98[8] = 0;
    local_98[7] = 0;
    local_98[2] = 0;
    local_98[1] = 0;
    local_98[4] = 0;
    local_98[3] = 0;
    local_50 = 0xff00;
    local_98[0] = lVar3 - lVar4;
    if (-1 < local_98[0]) {
      FUN_1008d2a9c(local_98);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1cb0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1ca8);
  (*pcVar1)();
}



/* Address: 0x1008d1cb0 | FUN_1008d1cb0 */

void FUN_1008d1cb0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long local_d8;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = *param_1;
  lVar11 = *unaff_x20;
  lVar8 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar8,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1f7c);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar2 == 0) || (uVar4 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar4 < lVar8 + lVar7)) {
    FUN_1008d138c();
    lVar11 = *unaff_x20;
    uVar4 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar10 = (long *)(uVar4 - *(long *)(lVar11 + 0x10));
  plVar3 = &local_a8;
  FUN_1008d3578(plVar3,lVar11 + *(long *)(lVar11 + 0x10) * 0x38 + 0x20,plVar10);
  if ((long)plVar3 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1f80);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1f84);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + (long)plVar3;
  }
  if ((plVar3 == plVar10) && (local_68 != local_a8)) {
    if ((local_68 < 0) || (local_a8 <= local_68)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1f88);
      (*pcVar1)();
    }
    uVar4 = *(ulong *)(lVar11 + 0x10);
    local_d8 = local_68 + 1;
    FUN_1008d4b48(local_a0,uStack_98,local_90,uStack_88,local_80,uStack_78,local_70);
    lVar7 = local_d8;
    do {
      if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar4 + 1)) {
        FUN_1008d138c(1 < *(ulong *)(lVar11 + 0x18),uVar4 + 1,1);
      }
      lVar11 = *unaff_x20;
      uVar5 = *(ulong *)(lVar11 + 0x18) >> 1;
      lVar8 = lVar7;
      lVar2 = local_d8;
      if ((long)uVar4 < (long)uVar5) {
        puVar6 = (undefined8 *)(lVar11 + 0x20 + uVar4 * 0x38);
        *puVar6 = local_a0;
        puVar6[1] = uStack_98;
        puVar6[2] = local_90;
        puVar6[3] = uStack_88;
        puVar6[4] = local_80;
        puVar6[5] = uStack_78;
        puVar6[6] = local_70;
        uVar9 = uVar4 + 1;
        if (lVar7 == local_a8) {
LAB_1008d1f2c:
          *(ulong *)(lVar11 + 0x10) = uVar9;
          local_68 = local_d8;
          break;
        }
        lVar8 = (lVar7 + uVar5) - uVar4;
        local_d8 = lVar7;
        puVar6 = (undefined8 *)(lVar11 + uVar4 * 0x38 + 0x88);
        while( true ) {
          if ((lVar7 < 0) || (local_a8 <= local_d8)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d1f78);
            (*pcVar1)();
          }
          FUN_1008d4b48(local_a0,uStack_98,local_90,uStack_88,local_80,uStack_78,local_70);
          uVar4 = uVar5;
          lVar2 = lVar8;
          if (uVar5 == uVar9) break;
          local_d8 = local_d8 + 1;
          puVar6[-6] = local_a0;
          puVar6[-5] = uStack_98;
          puVar6[-4] = local_90;
          puVar6[-3] = uStack_88;
          uVar9 = uVar9 + 1;
          puVar6[-2] = local_80;
          puVar6[-1] = uStack_78;
          *puVar6 = local_70;
          puVar6 = puVar6 + 7;
          if (local_a8 == local_d8) goto LAB_1008d1f2c;
        }
      }
      local_d8 = lVar2;
      *(ulong *)(lVar11 + 0x10) = uVar4;
      lVar7 = lVar8;
    } while( true );
  }
  FUN_1000fb4c4(&local_a8,&DAT_100feb9b0,&DAT_100c83068);
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x1008d1f88 | FUN_1008d1f88 */

void FUN_1008d1f88(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2308);
    (*pcVar2)();
  }
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d230c);
    (*pcVar2)();
  }
  lVar3 = lVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar9;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar9 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_1008d13a8();
    lVar9 = *unaff_x20;
    uVar5 = *(ulong *)(lVar9 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar9 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2310);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_1008d20b4:
      uVar5 = *(ulong *)(lVar9 + 0x10);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_80 = 0;
      uStack_78 = 2;
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100feb998,&DAT_100c83050);
      while (lStack_c8 != 2) {
        FUN_1000fb4c4(&local_110,&DAT_100feb998,&DAT_100c83050);
        if ((long)(*(ulong *)(lVar9 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_1008d13a8(1 < *(ulong *)(lVar9 + 0x18),uVar5 + 1,1);
        }
        lVar9 = *unaff_x20;
        uVar6 = *(ulong *)(lVar9 + 0x18);
        FUN_1000f8cac(&local_c0,&local_160,&DAT_100feb998,&DAT_100c83050);
        if (lStack_118 != 2) {
          uVar6 = uVar6 >> 1;
          uVar10 = uVar5;
          if ((long)uVar5 <= (long)uVar6) {
            uVar10 = uVar6;
          }
          puVar8 = (undefined8 *)(lVar9 + uVar5 * 0x50 + 0x20);
          do {
            uStack_e8 = uStack_138;
            local_f0 = local_140;
            uStack_d8 = uStack_128;
            local_e0 = uStack_130;
            lStack_c8 = lStack_118;
            local_d0 = local_120;
            uStack_108 = uStack_158;
            local_110 = local_160;
            uStack_f8 = uStack_148;
            local_100 = uStack_150;
            if (uVar10 == uVar5) {
              FUN_1000fb4c4(&local_110,&DAT_100feb100,&DAT_100c826d0);
              goto LAB_1008d2178;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100feb998,&DAT_100c83050);
            puVar8[1] = uStack_108;
            *puVar8 = local_110;
            puVar8[7] = uStack_d8;
            puVar8[6] = local_e0;
            puVar8[9] = lStack_c8;
            puVar8[8] = local_d0;
            puVar8[3] = uStack_f8;
            puVar8[2] = local_100;
            puVar8[5] = uStack_e8;
            puVar8[4] = local_f0;
            if (uVar11 == param_4) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_80 = 0;
              uStack_78 = 2;
              uVar11 = param_4;
            }
            else {
              if (((long)uVar11 < (long)param_3) || ((long)param_4 <= (long)uVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2304);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x50,&local_c0,&DAT_100feb100,&DAT_100c826d0);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_160,&DAT_100feb998,&DAT_100c83050);
            puVar8 = puVar8 + 10;
            uVar5 = uVar5 + 1;
          } while (lStack_118 != 2);
        }
        FUN_1000fb4c4(&local_160,&DAT_100feb998,&DAT_100c83050);
        uVar10 = uVar5;
LAB_1008d2178:
        *(ulong *)(lVar9 + 0x10) = uVar10;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100feb998,&DAT_100c83050);
        uVar5 = uVar10;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100feb998,&DAT_100c83050);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100feb998,&DAT_100c83050);
      goto LAB_1008d212c;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2314);
      (*pcVar2)();
    }
    puVar4 = &DAT_100feb100;
    FUN_1000f7830(&DAT_100feb100,&DAT_100c826d0);
    _swift_arrayInitWithCopy(lVar9 + uVar6 * 0x50 + 0x20,param_2 + param_3 * 0x50,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar9 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2318);
        (*pcVar2)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_1008d20b4;
  }
  _swift_unknownObjectRelease(param_1);
LAB_1008d212c:
  *unaff_x20 = lVar9;
  return;
}



/* Address: 0x1008d2318 | FUN_1008d2318 */

void FUN_1008d2318(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined1 auStack_c0 [80];
  long local_70;
  
  lVar11 = *param_1;
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d26c4);
    (*pcVar1)();
  }
  lVar2 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar6 < lVar8 + lVar11)) {
    FUN_1008d13a8();
    lVar7 = *unaff_x20;
    uVar6 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  plVar9 = (long *)(uVar6 - *(long *)(lVar7 + 0x10));
  plVar3 = &local_c8;
  FUN_1008d2e7c(plVar3,param_1,lVar7 + *(long *)(lVar7 + 0x10) * 0x50 + 0x20,plVar9);
  FUN_1000fb4c4(param_1,&DAT_100feb988,&DAT_100c83040);
  if ((long)plVar3 < lVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d26c8);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d26cc);
      (*pcVar1)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar9) {
    uVar6 = *(ulong *)(lVar7 + 0x10);
    if (local_70 == local_c8) {
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      local_e0 = 0;
      uStack_d8 = 2;
      lVar8 = local_c8;
    }
    else {
      if ((local_70 < 0) || (local_c8 <= local_70)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d26d0);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_120,&DAT_100feb100,&DAT_100c826d0);
      lVar8 = local_70 + 1;
      local_70 = lVar8;
    }
    FUN_1000f8cac(&local_120,&local_170,&DAT_100feb998,&DAT_100c83050);
    while (lStack_128 != 2) {
      FUN_1000fb4c4(&local_170,&DAT_100feb998,&DAT_100c83050);
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_1008d13a8(1 < *(ulong *)(lVar7 + 0x18),uVar6 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar10 = *(ulong *)(lVar7 + 0x18);
      FUN_1000f8cac(&local_120,&local_1c0,&DAT_100feb998,&DAT_100c83050);
      if (lStack_178 != 2) {
        uVar10 = uVar10 >> 1;
        uVar12 = uVar6;
        if ((long)uVar6 <= (long)uVar10) {
          uVar12 = uVar10;
        }
        plVar3 = (long *)(lVar7 + uVar6 * 0x50 + 0x20);
        do {
          lStack_148 = lStack_198;
          local_150 = local_1a0;
          lStack_138 = lStack_188;
          local_140 = lStack_190;
          lStack_128 = lStack_178;
          local_130 = local_180;
          lStack_168 = lStack_1b8;
          local_170 = local_1c0;
          lStack_158 = lStack_1a8;
          local_160 = lStack_1b0;
          if (uVar12 == uVar6) {
            FUN_1000fb4c4(&local_170,&DAT_100feb100,&DAT_100c826d0);
            goto LAB_1008d2540;
          }
          FUN_1000fb4c4(&local_120,&DAT_100feb998,&DAT_100c83050);
          plVar3[1] = lStack_168;
          *plVar3 = local_170;
          plVar3[7] = lStack_138;
          plVar3[6] = local_140;
          plVar3[9] = lStack_128;
          plVar3[8] = local_130;
          plVar3[3] = lStack_158;
          plVar3[2] = local_160;
          plVar3[5] = lStack_148;
          plVar3[4] = local_150;
          if (lVar8 == local_c8) {
            uStack_f8 = 0;
            local_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            local_e0 = 0;
            uStack_d8 = 2;
            lVar8 = local_c8;
          }
          else {
            if ((lVar8 < 0) || (local_c8 <= lVar8)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d26c0);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_120,&DAT_100feb100,&DAT_100c826d0);
            local_70 = lVar8 + 1;
            lVar8 = local_70;
          }
          FUN_1000f8cac(&local_120,&local_1c0,&DAT_100feb998,&DAT_100c83050);
          plVar3 = plVar3 + 10;
          uVar6 = uVar6 + 1;
        } while (lStack_178 != 2);
      }
      FUN_1000fb4c4(&local_1c0,&DAT_100feb998,&DAT_100c83050);
      uVar12 = uVar6;
LAB_1008d2540:
      *(ulong *)(lVar7 + 0x10) = uVar12;
      FUN_1000f8cac(&local_120,&local_170,&DAT_100feb998,&DAT_100c83050);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100feb998;
    puVar5 = &DAT_100c83050;
    FUN_1000fb4c4(&local_120,&DAT_100feb998,&DAT_100c83050);
    FUN_1000fb4c4(&local_c8,&DAT_100feb990,&DAT_100c83048);
    plVar3 = &local_170;
  }
  else {
    puVar4 = &DAT_100feb990;
    puVar5 = &DAT_100c83048;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x1008d26d0 | FUN_1008d26d0 */

void FUN_1008d26d0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a8c);
    (*pcVar2)();
  }
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a90);
    (*pcVar2)();
  }
  lVar3 = lVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar10;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar10 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_1008d13c4();
    lVar10 = *unaff_x20;
    uVar5 = *(ulong *)(lVar10 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar10 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a94);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_1008d280c:
      uVar5 = *(ulong *)(lVar10 + 0x10);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_80 = 0xfe00;
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100feb978,&DAT_100c83030);
      while (local_d0._1_1_ != -2) {
        FUN_1000fb4c4(&local_110,&DAT_100feb978,&DAT_100c83030);
        if ((long)(*(ulong *)(lVar10 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_1008d13c4(1 < *(ulong *)(lVar10 + 0x18),uVar5 + 1,1);
        }
        lVar10 = *unaff_x20;
        uVar6 = *(ulong *)(lVar10 + 0x18);
        FUN_1000f8cac(&local_c0,&local_158,&DAT_100feb978,&DAT_100c83030);
        if (local_118._1_1_ != -2) {
          uVar6 = uVar6 >> 1;
          uVar8 = uVar5;
          if ((long)uVar5 <= (long)uVar6) {
            uVar8 = uVar6;
          }
          puVar9 = (undefined8 *)(lVar10 + uVar5 * 0x48 + 0x20);
          do {
            uStack_e8 = uStack_130;
            local_f0 = local_138;
            uStack_d8 = uStack_120;
            uStack_e0 = local_128;
            local_d0 = local_118;
            uStack_108 = uStack_150;
            local_110 = local_158;
            uStack_f8 = uStack_140;
            local_100 = local_148;
            if (uVar8 == uVar5) {
              FUN_1000fb4c4(&local_110,&DAT_100feb158,&DAT_100c82c40);
              goto LAB_1008d28e0;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100feb978,&DAT_100c83030);
            puVar9[1] = uStack_108;
            *puVar9 = local_110;
            *(undefined2 *)(puVar9 + 8) = local_d0;
            puVar9[5] = uStack_e8;
            puVar9[4] = local_f0;
            puVar9[7] = uStack_d8;
            puVar9[6] = uStack_e0;
            puVar9[3] = uStack_f8;
            puVar9[2] = local_100;
            if (uVar11 == param_4) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_80 = 0xfe00;
              uVar11 = param_4;
            }
            else {
              if (((long)uVar11 < (long)param_3) || ((long)param_4 <= (long)uVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a88);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x48,&local_c0,&DAT_100feb158,&DAT_100c82c40);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_158,&DAT_100feb978,&DAT_100c83030);
            puVar9 = puVar9 + 9;
            uVar5 = uVar5 + 1;
          } while (local_118._1_1_ != -2);
        }
        FUN_1000fb4c4(&local_158,&DAT_100feb978,&DAT_100c83030);
        uVar8 = uVar5;
LAB_1008d28e0:
        *(ulong *)(lVar10 + 0x10) = uVar8;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100feb978,&DAT_100c83030);
        uVar5 = uVar8;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100feb978,&DAT_100c83030);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100feb978,&DAT_100c83030);
      goto LAB_1008d2890;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a98);
      (*pcVar2)();
    }
    puVar4 = &DAT_100feb158;
    FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
    _swift_arrayInitWithCopy(lVar10 + uVar6 * 0x48 + 0x20,param_2 + param_3 * 0x48,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar10 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2a9c);
        (*pcVar2)();
      }
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_1008d280c;
  }
  _swift_unknownObjectRelease(param_1);
LAB_1008d2890:
  *unaff_x20 = lVar10;
  return;
}



/* Address: 0x1008d2a9c | FUN_1008d2a9c */

void FUN_1008d2a9c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined2 local_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined2 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  long local_c8;
  undefined1 auStack_c0 [72];
  long local_78;
  
  lVar7 = *param_1;
  lVar11 = *unaff_x20;
  lVar9 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d2e70);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar6 < lVar9 + lVar7)) {
    FUN_1008d13c4();
    lVar11 = *unaff_x20;
    uVar6 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar10 = (long *)(uVar6 - *(long *)(lVar11 + 0x10));
  plVar3 = &local_c8;
  FUN_1008d2fb8(plVar3,param_1,lVar11 + *(long *)(lVar11 + 0x10) * 0x48 + 0x20,plVar10);
  FUN_1000fb4c4(param_1,&DAT_100feb968,&DAT_100c83020);
  if ((long)plVar3 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d2e74);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d2e78);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar10) {
    uVar6 = *(ulong *)(lVar11 + 0x10);
    if (local_78 == local_c8) {
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_d0 = 0xfe00;
      lVar7 = local_c8;
    }
    else {
      if ((local_78 < 0) || (local_c8 <= local_78)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d2e7c);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_110,&DAT_100feb158,&DAT_100c82c40);
      lVar7 = local_78 + 1;
      local_78 = lVar7;
    }
    FUN_1000f8cac(&local_110,&local_160,&DAT_100feb978,&DAT_100c83030);
    while (local_120._1_1_ != -2) {
      FUN_1000fb4c4(&local_160,&DAT_100feb978,&DAT_100c83030);
      if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_1008d13c4(1 < *(ulong *)(lVar11 + 0x18),uVar6 + 1,1);
      }
      lVar11 = *unaff_x20;
      uVar8 = *(ulong *)(lVar11 + 0x18);
      FUN_1000f8cac(&local_110,&local_1a8,&DAT_100feb978,&DAT_100c83030);
      if (local_168._1_1_ != -2) {
        uVar8 = uVar8 >> 1;
        uVar12 = uVar6;
        if ((long)uVar6 <= (long)uVar8) {
          uVar12 = uVar8;
        }
        plVar3 = (long *)(lVar11 + uVar6 * 0x48 + 0x20);
        do {
          lStack_138 = lStack_180;
          local_140 = local_188;
          lStack_128 = lStack_170;
          lStack_130 = local_178;
          local_120 = local_168;
          lStack_158 = lStack_1a0;
          local_160 = local_1a8;
          lStack_148 = lStack_190;
          local_150 = local_198;
          if (uVar12 == uVar6) {
            FUN_1000fb4c4(&local_160,&DAT_100feb158,&DAT_100c82c40);
            goto LAB_1008d2cc8;
          }
          FUN_1000fb4c4(&local_110,&DAT_100feb978,&DAT_100c83030);
          plVar3[1] = lStack_158;
          *plVar3 = local_160;
          *(undefined2 *)(plVar3 + 8) = local_120;
          plVar3[5] = lStack_138;
          plVar3[4] = local_140;
          plVar3[7] = lStack_128;
          plVar3[6] = lStack_130;
          plVar3[3] = lStack_148;
          plVar3[2] = local_150;
          if (lVar7 == local_c8) {
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            local_d0 = 0xfe00;
            lVar7 = local_c8;
          }
          else {
            if ((lVar7 < 0) || (local_c8 <= lVar7)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d2e6c);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_110,&DAT_100feb158,&DAT_100c82c40);
            local_78 = lVar7 + 1;
            lVar7 = local_78;
          }
          FUN_1000f8cac(&local_110,&local_1a8,&DAT_100feb978,&DAT_100c83030);
          plVar3 = plVar3 + 9;
          uVar6 = uVar6 + 1;
        } while (local_168._1_1_ != -2);
      }
      FUN_1000fb4c4(&local_1a8,&DAT_100feb978,&DAT_100c83030);
      uVar12 = uVar6;
LAB_1008d2cc8:
      *(ulong *)(lVar11 + 0x10) = uVar12;
      FUN_1000f8cac(&local_110,&local_160,&DAT_100feb978,&DAT_100c83030);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100feb978;
    puVar5 = &DAT_100c83030;
    FUN_1000fb4c4(&local_110,&DAT_100feb978,&DAT_100c83030);
    FUN_1000fb4c4(&local_c8,&DAT_100feb970,&DAT_100c83028);
    plVar3 = &local_160;
  }
  else {
    puVar4 = &DAT_100feb970;
    puVar5 = &DAT_100c83028;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x1008d2e7c | FUN_1008d2e7c */

ulong FUN_1008d2e7c(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  FUN_1000f8cac(param_2,&local_c8,&DAT_100feb988,&DAT_100c83040);
  uVar1 = local_c8;
  uStack_70 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4;
    if (param_4 != 0) {
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2fb8);
        (*pcVar2)();
      }
      uVar3 = uVar1;
      if (local_c8 != 0) {
        uVar4 = local_c8 & ((long)local_c8 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = 1;
        uVar6 = local_c8;
        do {
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d2fb4);
            (*pcVar2)();
          }
          uStack_70 = uVar5;
          FUN_1000f8cac(&uStack_c0,&local_118,&DAT_100feb100,&DAT_100c826d0);
          param_3[1] = uStack_110;
          *param_3 = local_118;
          param_3[7] = uStack_e0;
          param_3[6] = local_e8;
          param_3[9] = uStack_d0;
          param_3[8] = local_d8;
          param_3[3] = uStack_100;
          param_3[2] = local_108;
          param_3[5] = uStack_f0;
          param_3[4] = local_f8;
          uVar3 = param_4;
          if (param_4 == uVar5) break;
          param_3 = param_3 + 10;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar1;
        } while (uVar6 != 0);
      }
    }
  }
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  return uVar3;
}



/* Address: 0x1008d2fb8 | FUN_1008d2fb8 */

ulong FUN_1008d2fb8(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  FUN_1000f8cac(param_2,&local_c0,&DAT_100feb968,&DAT_100c83020);
  uVar1 = local_c0;
  local_70 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4;
    if (param_4 != 0) {
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d30f4);
        (*pcVar2)();
      }
      uVar3 = uVar1;
      if (local_c0 != 0) {
        uVar4 = local_c0 & ((long)local_c0 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = 1;
        uVar6 = local_c0;
        do {
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d30f0);
            (*pcVar2)();
          }
          local_70 = uVar5;
          FUN_1000f8cac(&uStack_b8,&local_108,&DAT_100feb158,&DAT_100c82c40);
          param_3[1] = uStack_100;
          *param_3 = local_108;
          *(undefined2 *)(param_3 + 8) = local_c8;
          param_3[5] = uStack_e0;
          param_3[4] = local_e8;
          param_3[7] = uStack_d0;
          param_3[6] = local_d8;
          param_3[3] = uStack_f0;
          param_3[2] = local_f8;
          uVar3 = param_4;
          if (param_4 == uVar5) break;
          param_3 = param_3 + 9;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar1;
        } while (uVar6 != 0);
      }
    }
  }
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[10] = local_70;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return uVar3;
}



/* Address: 0x1008d30f4 | FUN_1008d30f4 */

void FUN_1008d30f4(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f0e7a8;
    _swift_allocObject(&DAT_100f0e7a8,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(thunk_FUN_1005dfd68,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x1008d31ec | FUN_1008d31ec */

void FUN_1008d31ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008d06a0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f0e848;
  _swift_allocObject(&DAT_100f0e848,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(thunk_FUN_1008d418c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008d32e4 | FUN_1008d32e4 */

void FUN_1008d32e4(void)

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
  puVar1 = &DAT_100feb278;
  FUN_1000f7830(&DAT_100feb278,&DAT_100c83010);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1008d3380(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1008d3380 | FUN_1008d3380 */

void FUN_1008d3380(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_3[2];
  lVar1 = *param_3 - lVar6;
  if (SBORROW8(*param_3,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008d3480);
    (*pcVar4)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar7 = lVar8 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008d3484);
      (*pcVar4)();
    }
  }
  else {
    lVar7 = 0;
    lVar2 = lVar8;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008d3488);
      (*pcVar4)();
    }
    puVar5 = &DAT_100feb280;
    FUN_1000f7830(&DAT_100feb280,&DAT_100c828e0);
    _swift_arrayInitWithCopy(param_2 + lVar6 * 0x10,param_4 + lVar6 * 0x10,lVar2,puVar5);
  }
  if (lVar1 < lVar8 && lVar7 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008d348c);
      (*pcVar4)();
    }
    puVar5 = &DAT_100feb280;
    FUN_1000f7830(&DAT_100feb280,&DAT_100c828e0);
    _swift_arrayInitWithCopy(param_2,lVar3,lVar7,puVar5);
  }
  return;
}



/* Address: 0x1008d348c | FUN_1008d348c */

undefined * FUN_1008d348c(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined ***)(puVar1 + 0x28) = &PTR_PTR_100f0e1a8;
  if (param_2 == '\x01') {
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    puVar1[0x18] = 1;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    puVar1[0x18] = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
  }
  _swift_retain();
  return puVar1;
}



/* Address: 0x1008d3528 | FUN_1008d3528 */

void FUN_1008d3528(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(byte *)(param_2 + 1);
  FUN_1008d06a0(uVar1,uVar2);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1008d3578 | FUN_1008d3578 */

ulong FUN_1008d3578(ulong *param_1,ulong *param_2,ulong param_3)

{
  code *pcVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_d8 [56];
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (param_2 == (ulong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    if (param_3 != 0) {
      uVar2 = *unaff_x20;
      uStack_98 = unaff_x20[2];
      local_a0 = unaff_x20[1];
      uStack_88 = unaff_x20[4];
      uStack_90 = unaff_x20[3];
      uStack_78 = unaff_x20[6];
      local_80 = unaff_x20[5];
      local_70 = unaff_x20[7];
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d36a4);
        (*pcVar1)();
      }
      if (uVar2 != 0) {
        uVar3 = 0;
        do {
          if ((uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) == uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d36a0);
            (*pcVar1)();
          }
          param_2[6] = local_70;
          param_2[3] = uStack_88;
          param_2[2] = uStack_90;
          param_2[5] = uStack_78;
          param_2[4] = local_80;
          param_2[1] = uStack_98;
          *param_2 = local_a0;
          if (param_3 - 1 == uVar3) {
            FUN_1000f8cac(&local_a0,auStack_d8,&DAT_100feb4c8,&DAT_100c82bd0);
            uVar2 = param_3;
            break;
          }
          FUN_1000f8cac(&local_a0,auStack_d8,&DAT_100feb4c8,&DAT_100c82bd0);
          uVar3 = uVar3 + 1;
          param_2 = param_2 + 7;
        } while (uVar2 != uVar3);
      }
    }
  }
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = unaff_x20[4];
  uVar5 = unaff_x20[7];
  uVar4 = unaff_x20[6];
  param_1[5] = unaff_x20[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[8] = uVar2;
  return uVar2;
}



/* Address: 0x1008d36a4 | FUN_1008d36a4 */

void FUN_1008d36a4(ulong *param_1,undefined8 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  lVar5 = param_6 - param_5;
  if ((long)param_6 < (long)param_5) {
    lVar5 = lVar5 + *(long *)(param_4 + 0x10);
  }
  if (param_3 < lVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d394c);
    (*pcVar1)();
  }
  if (param_2 == (undefined8 *)0x0) {
    if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d395c);
      (*pcVar1)();
    }
    if (param_5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3960);
      (*pcVar1)();
    }
    _swift_retain();
    uVar7 = 0;
    goto LAB_1008d3908;
  }
  if ((long)param_6 < (long)param_5) {
    lVar5 = *(long *)(param_4 + 0x10) - param_5;
    if (*(long *)(param_4 + 0x10) < (long)param_5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3964);
      (*pcVar1)();
    }
    if (lVar5 != 0) {
      lVar6 = param_4 + param_5 * 0x48 + 0x20;
      do {
        if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3940);
          (*pcVar1)();
        }
        FUN_1000f8cac(lVar6,&local_a8,&DAT_100feb158,&DAT_100c82c40);
        if (0xfe < local_68._1_1_) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3970);
          (*pcVar1)();
        }
        param_2[1] = uStack_a0;
        *param_2 = local_a8;
        *(undefined2 *)(param_2 + 8) = local_68;
        param_2[5] = uStack_80;
        param_2[4] = local_88;
        param_2[7] = uStack_70;
        param_2[6] = local_78;
        param_2[3] = uStack_90;
        param_2[2] = local_98;
        param_2 = param_2 + 9;
        lVar6 = lVar6 + 0x48;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3968);
      (*pcVar1)();
    }
    if (param_6 != 0) {
      lVar5 = param_4 + 0x20;
      uVar7 = param_6;
      do {
        FUN_1000f8cac(lVar5,&local_a8,&DAT_100feb158,&DAT_100c82c40);
        if (0xfe < local_68._1_1_) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d396c);
          (*pcVar1)();
        }
        param_2[1] = uStack_a0;
        *param_2 = local_a8;
        *(undefined2 *)(param_2 + 8) = local_68;
        param_2[5] = uStack_80;
        param_2[4] = local_88;
        param_2[7] = uStack_70;
        param_2[6] = local_78;
        param_2[3] = uStack_90;
        param_2[2] = local_98;
        param_2 = param_2 + 9;
        lVar5 = lVar5 + 0x48;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
LAB_1008d3818:
      if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3820);
        (*pcVar1)();
      }
      goto LAB_1008d38a8;
    }
  }
  else {
    if (param_6 == param_5) goto LAB_1008d3818;
    lVar5 = param_4 + param_5 * 0x48 + 0x20;
    uVar7 = param_5;
    do {
      if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3944);
        (*pcVar1)();
      }
      if (*(ulong *)(param_4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3948);
        (*pcVar1)();
      }
      FUN_1000f8cac(lVar5,&local_a8,&DAT_100feb158,&DAT_100c82c40);
      if (0xfe < local_68._1_1_) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3974);
        (*pcVar1)();
      }
      uVar7 = uVar7 + 1;
      param_2[1] = uStack_a0;
      *param_2 = local_a8;
      *(undefined2 *)(param_2 + 8) = local_68;
      param_2[5] = uStack_80;
      param_2[4] = local_88;
      param_2[7] = uStack_70;
      param_2[6] = local_78;
      param_2[3] = uStack_90;
      param_2[2] = local_98;
      param_2 = param_2 + 9;
      lVar5 = lVar5 + 0x48;
    } while (param_6 != uVar7);
LAB_1008d38a8:
    if (param_6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3950);
      (*pcVar1)();
    }
  }
  uVar7 = 0;
  if ((long)param_5 <= (long)param_6) {
    uVar7 = 0x100000000000000;
  }
  uVar2 = param_6 | uVar7 | 0xffffff00000000;
  uVar3 = param_6 | uVar7 | 0xffffff00000000;
  uVar4 = param_4;
  FUN_10060f490();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3954);
    (*pcVar1)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3958);
    (*pcVar1)();
  }
  uVar7 = param_6 - param_5;
  if ((long)param_6 < (long)param_5) {
    uVar7 = uVar7 + *(long *)(param_4 + 0x10);
  }
  _swift_retain();
  param_4 = uVar2;
  param_5 = uVar3;
  param_6 = uVar4;
LAB_1008d3908:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  *(int *)(param_1 + 3) = (int)param_5;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x1ffffff;
  param_1[4] = uVar7;
  return;
}



/* Address: 0x1008d3974 | FUN_1008d3974 */

void FUN_1008d3974(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d39a0 | FUN_1008d39a0 */

void FUN_1008d39a0(void)

{
  long unaff_x20;
  
  FUN_1008c97d8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008d39ac | FUN_1008d39ac */

void FUN_1008d39ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d39d0 | FUN_1008d39d0 */

void FUN_1008d39d0(void)

{
  long unaff_x20;
  
  FUN_1008c998c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008d39d8 | FUN_1008d39d8 */

void FUN_1008d39d8(void)

{
  long unaff_x20;
  
  FUN_1008c6704(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008d39f0 | FUN_1008d39f0 */

void FUN_1008d39f0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d3a00 | FUN_1008d3a00 */

void FUN_1008d3a00(long param_1,long param_2)

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



/* Address: 0x1008d3a14 | FUN_1008d3a14 */

void FUN_1008d3a14(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1008d3a1c | FUN_1008d3a1c */

void FUN_1008d3a1c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d3a40 | FUN_1008d3a40 */

void FUN_1008d3a40(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  pthread_t p_Var5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var5 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var5,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3af8);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3afc);
  (*pcVar1)();
}



/* Address: 0x1008d3afc | FUN_1008d3afc */

undefined1  [16] FUN_1008d3afc(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  pthread_t p_Var5;
  undefined1 auVar6 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var5 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var5,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d3bb8);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  auVar6._0_8_ = *(undefined8 *)(unaff_x20 + 0x50);
  auVar6._8_8_ = &PTR_PTR_100f0e1a8;
  return auVar6;
}



/* Address: 0x1008d3bb8 | FUN_1008d3bb8 */

void FUN_1008d3bb8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d3cc8);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      FUN_1008d138c();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d3c28);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d3cdc);
        (*pcVar2)();
      }
      puVar4 = &DAT_100feb4c8;
      FUN_1000f7830(&DAT_100feb4c8,&DAT_100c82bd0);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x38 + 0x20,param_2 + param_3 * 0x38,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d3ce0);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d3ccc);
  (*pcVar2)();
}



/* Address: 0x1008d3ce0 | FUN_1008d3ce0 */

void FUN_1008d3ce0(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  byte *pbVar16;
  undefined *local_a8 [8];
  undefined1 local_66;
  
  lVar14 = *(long *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  pbVar16 = *(byte **)(unaff_x20 + 0x30);
  pbVar1 = pbVar16;
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar14 + 0x10);
  pbVar2 = pbVar1;
  (*pcVar15)();
  if (((ulong)pbVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d4184);
    (*pcVar15)();
  }
  pcVar13 = *(code **)(**(long **)(unaff_x20 + 0x10) + 0x88);
  (*pcVar13)();
  if ((*pbVar2 & 1) == 0) {
    if (param_1 != 0) {
      FUN_1008c0f94();
      puVar6 = &DAT_100eeb710;
      uVar9 = 0;
      _swift_allocError(&DAT_100eeb710,pbVar2,0,0);
      pbVar2[0] = 3;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      pbVar2[8] = 3;
      uVar4 = *(ulong *)(param_1 + 0x20);
      lVar14 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar3 = uVar4;
      lVar8 = lVar14;
      (**(code **)(lVar14 + 0x10))();
      if ((uVar3 & 1) == 0) {
        puVar7 = &DAT_100f0e7f8;
        _swift_allocObject(&DAT_100f0e7f8,0x20,7);
        *(long *)(puVar7 + 0x10) = param_1;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        pcVar15 = *(code **)(lVar14 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar6);
        (*pcVar15)(thunk_FUN_1005dfd68,puVar7,uVar4,lVar14);
        _swift_release(puVar7);
      }
      else {
        puVar7 = puVar6;
        FUN_1005de8f4(puVar6);
        FUN_1006486f8();
        FUN_100004550(puVar7,lVar8);
        _swift_bridgeObjectRelease(uVar9);
      }
      _swift_errorRelease(puVar6);
      return;
    }
  }
  else {
    (*pcVar13)();
    *pbVar2 = 0;
    (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
    *pbVar2 = 0;
    if (param_1 != 0) {
      FUN_1008d31ec(0,0,param_1);
    }
    _swift_beginAccess(unaff_x20 + 0xb8,local_a8,0x21,0);
    uVar4 = *(ulong *)(unaff_x20 + 0xb8);
    if (0 < *(long *)(uVar4 + 0x18)) {
      do {
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar4 & 1) == 0) {
          FUN_1008d32e4();
        }
        lVar10 = *(long *)(unaff_x20 + 0xb8);
        lVar11 = *(long *)(lVar10 + 0x20);
        lVar8 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d4174);
          (*pcVar15)();
        }
        lVar11 = lVar10 + lVar11 * 0x10;
        pcVar13 = *(code **)(lVar11 + 0x28);
        uVar12 = *(undefined8 *)(lVar11 + 0x30);
        if (*(long *)(lVar10 + 0x10) <= lVar8) {
          lVar8 = 0;
        }
        *(long *)(lVar10 + 0x20) = lVar8;
        if (SBORROW8(*(long *)(lVar10 + 0x18),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d4178);
          (*pcVar15)();
        }
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + -1;
        ppuVar5 = local_a8;
        _swift_endAccess();
        FUN_1008c0f94();
        puVar6 = &DAT_100eeb710;
        _swift_allocError(&DAT_100eeb710,ppuVar5,0,0);
        *ppuVar5 = (undefined *)0x2;
        *(undefined1 *)(ppuVar5 + 1) = 3;
        local_66 = 1;
        local_a8[0] = puVar6;
        (*pcVar13)(local_a8);
        _swift_release(uVar12);
        FUN_1000fb4c4(local_a8,&DAT_100feb268,&DAT_100c828c8);
        _swift_beginAccess(unaff_x20 + 0xb8,local_a8,0x21,0);
        uVar4 = *(ulong *)(unaff_x20 + 0xb8);
      } while (0 < *(long *)(uVar4 + 0x18));
    }
    _swift_endAccess(local_a8);
    _swift_beginAccess(unaff_x20 + 0x70,local_a8,0x21,0);
    uVar4 = *(ulong *)(unaff_x20 + 0x70);
    if (0 < *(long *)(uVar4 + 0x18)) {
      do {
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar4 & 1) == 0) {
          FUN_1008d32e4();
        }
        lVar10 = *(long *)(unaff_x20 + 0x70);
        lVar11 = *(long *)(lVar10 + 0x20);
        lVar8 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d417c);
          (*pcVar15)();
        }
        lVar11 = lVar10 + lVar11 * 0x10;
        pcVar13 = *(code **)(lVar11 + 0x28);
        uVar12 = *(undefined8 *)(lVar11 + 0x30);
        if (*(long *)(lVar10 + 0x10) <= lVar8) {
          lVar8 = 0;
        }
        *(long *)(lVar10 + 0x20) = lVar8;
        if (SBORROW8(*(long *)(lVar10 + 0x18),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d4180);
          (*pcVar15)();
        }
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + -1;
        ppuVar5 = local_a8;
        _swift_endAccess();
        FUN_1008c0f94();
        puVar6 = &DAT_100eeb710;
        _swift_allocError(&DAT_100eeb710,ppuVar5,0,0);
        *ppuVar5 = (undefined *)0x2;
        *(undefined1 *)(ppuVar5 + 1) = 3;
        local_66 = 1;
        local_a8[0] = puVar6;
        (*pcVar13)(local_a8);
        _swift_release(uVar12);
        FUN_1000fb4c4(local_a8,&DAT_100feb268,&DAT_100c828c8);
        _swift_beginAccess(unaff_x20 + 0x70,local_a8,0x21,0);
        uVar4 = *(ulong *)(unaff_x20 + 0x70);
      } while (0 < *(long *)(uVar4 + 0x18));
    }
    _swift_endAccess(local_a8);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_retain(uVar12);
    FUN_10062cc1c();
    _swift_release(uVar12);
    _swift_retain(uVar12);
    FUN_10062cc10();
    _swift_release(uVar12);
    _swift_unknownObjectRetain(pbVar16);
    pbVar2 = pbVar1;
    (*pcVar15)(pbVar1,lVar14);
    if (((ulong)pbVar2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1008d4188);
      (*pcVar15)();
    }
    puVar6 = &DAT_100f0e820;
    _swift_allocObject(&DAT_100f0e820,0x28,7);
    *(undefined8 *)(puVar6 + 0x18) = uVar9;
    *(byte **)(puVar6 + 0x10) = pbVar16;
    *(long *)(puVar6 + 0x20) = unaff_x20;
    pcVar15 = *(code **)(lVar14 + 0x18);
    _swift_retain_n();
    _swift_unknownObjectRetain(pbVar16);
    (*pcVar15)(FUN_1008d4b20,puVar6,pbVar1,lVar14);
    _swift_release();
    _swift_unknownObjectRelease(pbVar16);
    _swift_release(puVar6);
  }
  return;
}



/* Address: 0x1008d4188 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x1008d418c | FUN_1008d418c */

void FUN_1008d418c(void)

{
  long unaff_x20;
  
  FUN_1008d3528(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1008d4198 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008d419c | FUN_1008d419c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008d419c(void)

{
  return ZEXT816(0x100feb610);
}


