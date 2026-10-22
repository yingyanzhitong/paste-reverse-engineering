/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a9fbbc | FUN_100a9fbbc */

ulong FUN_100a9fbbc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  ushort uVar13;
  ushort uVar14;
  byte bVar15;
  code *pcVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *unaff_x20;
  undefined8 uVar21;
  
  plVar1 = (long *)*unaff_x20;
  lVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar20 = unaff_x20[4];
  uVar12 = *(undefined2 *)(unaff_x20 + 5);
  bVar9 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar9 < 3) {
    bVar15 = (byte)*(ushort *)(unaff_x20 + 2);
    bVar10 = *(byte *)((long)unaff_x20 + 0x11);
    uVar14 = *(ushort *)(unaff_x20 + 2);
    if (bVar9 == 0) {
      plVar18 = plVar1;
      FUN_1009e8ec8(plVar1,lVar4);
      FUN_1006883ac();
      lVar19 = *plVar18;
      _swift_retain();
      FUN_100aa0954(param_1);
      bVar15 = *(long *)(lVar19 + 0x18) < lVar4 & bVar15;
      FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                    *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
      *unaff_x20 = plVar1;
      unaff_x20[1] = lVar4;
      *(byte *)(unaff_x20 + 2) = bVar15;
      unaff_x20[3] = lVar19;
      unaff_x20[4] = 0;
      *(byte *)(unaff_x20 + 5) = bVar15;
      *(byte *)((long)unaff_x20 + 0x29) = bVar10 & 1;
      uVar20 = (ulong)(bVar15 ^ 1);
      *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
    }
    else if (bVar9 == 1) {
      bVar9 = *(byte *)((long)unaff_x20 + 0x29);
      if (uVar20 == 0) {
        FUN_1009e8ec8(plVar1,lVar4);
        FUN_1009e8f30(plVar1,lVar4,uVar2,uVar5,0,uVar12,1);
        *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
        *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
        FUN_100aa0954(param_1);
        bVar15 = *(long *)(uVar5 + 0x18) < lVar4 & bVar15;
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = plVar1;
        unaff_x20[1] = lVar4;
        *(byte *)(unaff_x20 + 2) = bVar15;
        unaff_x20[3] = uVar5;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar15;
        *(byte *)((long)unaff_x20 + 0x29) = bVar9 & 1;
        uVar20 = (ulong)(bVar15 ^ 1);
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
      }
      else {
        bVar10 = *(byte *)(unaff_x20 + 5);
        if (*(long *)(uVar5 + 0x18) != 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9ffe0);
          (*pcVar16)();
        }
        FUN_1009e8ec8(plVar1,lVar4);
        FUN_1009e8f30(plVar1,lVar4,uVar2,uVar5,uVar20,uVar12,1);
        *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
        *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
        FUN_100aa0954(param_1);
        if (*(long *)(uVar5 + 0x18) < 1) {
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = plVar1;
          unaff_x20[1] = lVar4;
          *(byte *)(unaff_x20 + 2) = bVar15 & 1;
          unaff_x20[3] = uVar5;
          unaff_x20[4] = uVar20;
          *(char *)(unaff_x20 + 5) = (char)((ulong)bVar10 & 1);
          *(byte *)((long)unaff_x20 + 0x29) = bVar9 & 1;
          uVar20 = (ulong)bVar10 & 1 ^ 1;
          *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
        }
        else {
          uVar17 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar17 & 1) == 0) {
            FUN_100a9f20c();
          }
          lVar19 = *(long *)(uVar5 + 0x20) + 1;
          if (SCARRY8(*(long *)(uVar5 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9ffe4);
            (*pcVar16)();
          }
          if (*(long *)(uVar5 + 0x10) <= lVar19) {
            lVar19 = 0;
          }
          *(long *)(uVar5 + 0x20) = lVar19;
          lVar19 = *(long *)(uVar5 + 0x18) + -1;
          if (SBORROW8(*(long *)(uVar5 + 0x18),1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9ffe8);
            (*pcVar16)();
          }
          *(long *)(uVar5 + 0x18) = lVar19;
          bVar15 = lVar19 < lVar4 & bVar15;
          uVar2 = *unaff_x20;
          uVar6 = unaff_x20[1];
          uVar3 = unaff_x20[2];
          uVar7 = unaff_x20[3];
          uVar21 = unaff_x20[4];
          uVar11 = *(undefined1 *)((long)unaff_x20 + 0x2a);
          uVar12 = *(undefined2 *)(unaff_x20 + 5);
          _swift_retain(uVar5);
          FUN_1009e8f30(uVar2,uVar6,uVar3,uVar7,uVar21,uVar12,uVar11);
          *unaff_x20 = plVar1;
          unaff_x20[1] = lVar4;
          *(byte *)(unaff_x20 + 2) = bVar15;
          unaff_x20[3] = uVar5;
          unaff_x20[4] = 0;
          *(byte *)(unaff_x20 + 5) = bVar15;
          *(byte *)((long)unaff_x20 + 0x29) = bVar9 & 1;
          *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
          _swift_release(uVar5);
        }
      }
    }
    else {
      uVar13 = *(ushort *)((long)unaff_x20 + 0x16);
      uVar8 = *(uint *)((long)unaff_x20 + 0x12);
      FUN_1009e8ec8(plVar1,lVar4);
      _swift_release(plVar1);
      _swift_errorRelease((ulong)uVar14 | (ulong)uVar8 << 0x10 | (ulong)uVar13 << 0x30);
      uVar20 = 2;
    }
  }
  else if (bVar9 == 3) {
    FUN_1009e8ec8(plVar1,lVar4);
    uVar20 = 2;
  }
  else {
    if (bVar9 != 4) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100a9ffec);
      (*pcVar16)();
    }
    FUN_1009e8ec8(plVar1,lVar4);
    uVar20 = 2;
  }
  return uVar20;
}



/* Address: 0x100a9ffec | FUN_100a9ffec */

void FUN_100a9ffec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  ushort uVar16;
  ushort uVar17;
  byte bVar18;
  uint7 uVar19;
  code *pcVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 uVar25;
  
  plVar2 = (long *)*unaff_x20;
  lVar6 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar7 = unaff_x20[3];
  lVar23 = unaff_x20[4];
  uVar15 = *(undefined2 *)(unaff_x20 + 5);
  bVar12 = *(byte *)((long)unaff_x20 + 0x2a);
  if (2 < bVar12) {
    if ((bVar12 != 3) && (bVar12 != 4)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100aa0494);
      (*pcVar20)();
    }
    FUN_1009e8ec8(plVar2,lVar6);
LAB_100aa0304:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 2;
    *(undefined8 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)((long)param_1 + 0x1f) = 2;
    return;
  }
  bVar18 = (byte)*(ushort *)(unaff_x20 + 2);
  bVar13 = *(byte *)((long)unaff_x20 + 0x11);
  uVar17 = *(ushort *)(unaff_x20 + 2);
  if (bVar12 == 0) {
    plVar22 = plVar2;
    FUN_1009e8ec8(plVar2,lVar6);
    FUN_1006883ac();
    lVar23 = *plVar22;
    _swift_retain();
    FUN_100aa0ae0(param_2,param_3,param_4 & 0xffffffffffffff);
    bVar18 = *(long *)(lVar23 + 0x18) < lVar6 & bVar18;
    FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                  *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
    *unaff_x20 = plVar2;
    unaff_x20[1] = lVar6;
    *(byte *)(unaff_x20 + 2) = bVar18;
    unaff_x20[3] = lVar23;
    unaff_x20[4] = 0;
    *(byte *)(unaff_x20 + 5) = bVar18;
LAB_100aa03d4:
    *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
    if (bVar18 == 1) {
LAB_100aa03e8:
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined8 *)((long)param_1 + 0x17) = 0;
      param_1[2] = 0;
      goto LAB_100aa045c;
    }
  }
  else {
    if (bVar12 != 1) {
      uVar16 = *(ushort *)((long)unaff_x20 + 0x16);
      uVar11 = *(uint *)((long)unaff_x20 + 0x12);
      FUN_1009e8ec8(plVar2,lVar6);
      _swift_release(plVar2);
      _swift_errorRelease((ulong)uVar17 | (ulong)uVar11 << 0x10 | (ulong)uVar16 << 0x30);
      goto LAB_100aa0304;
    }
    bVar13 = *(byte *)((long)unaff_x20 + 0x29);
    if (lVar23 == 0) {
      FUN_1009e8ec8(plVar2,lVar6);
      FUN_1009e8f30(plVar2,lVar6,uVar3,uVar7,0,uVar15,1);
      *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
      *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
      FUN_100aa0ae0(param_2,param_3,param_4 & 0xffffffffffffff);
      bVar18 = *(long *)(uVar7 + 0x18) < lVar6 & bVar18;
      FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                    *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
      *unaff_x20 = plVar2;
      unaff_x20[1] = lVar6;
      *(byte *)(unaff_x20 + 2) = bVar18;
      unaff_x20[3] = uVar7;
      unaff_x20[4] = 0;
      *(byte *)(unaff_x20 + 5) = bVar18;
      goto LAB_100aa03d4;
    }
    bVar12 = *(byte *)(unaff_x20 + 5);
    if (*(long *)(uVar7 + 0x18) != 0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100aa0488);
      (*pcVar20)();
    }
    FUN_1009e8ec8(plVar2,lVar6);
    FUN_1009e8f30(plVar2,lVar6,uVar3,uVar7,lVar23,uVar15,1);
    *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
    *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
    FUN_100aa0ae0(param_2,param_3,param_4 & 0xffffffffffffff);
    if (0 < *(long *)(uVar7 + 0x18)) {
      uVar21 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar21 & 1) == 0) {
        FUN_100a9f2a8(&DAT_100ff7f20,&DAT_100c93378,FUN_1009ed678);
      }
      lVar24 = *(long *)(uVar7 + 0x20);
      lVar1 = lVar24 + 1;
      if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100aa048c);
        (*pcVar20)();
      }
      lVar24 = uVar7 + lVar24 * 0x18;
      uVar3 = *(undefined8 *)(lVar24 + 0x28);
      uVar8 = *(undefined8 *)(lVar24 + 0x30);
      uVar19 = *(uint7 *)(lVar24 + 0x38);
      if (*(long *)(uVar7 + 0x10) <= lVar1) {
        lVar1 = 0;
      }
      *(long *)(uVar7 + 0x20) = lVar1;
      lVar1 = *(long *)(uVar7 + 0x18) + -1;
      if (!SBORROW8(*(long *)(uVar7 + 0x18),1)) {
        *(long *)(uVar7 + 0x18) = lVar1;
        bVar18 = lVar1 < lVar6 & bVar18;
        uVar4 = *unaff_x20;
        uVar9 = unaff_x20[1];
        uVar5 = unaff_x20[2];
        uVar10 = unaff_x20[3];
        uVar25 = unaff_x20[4];
        uVar14 = *(undefined1 *)((long)unaff_x20 + 0x2a);
        uVar15 = *(undefined2 *)(unaff_x20 + 5);
        _swift_retain(uVar7);
        FUN_1009e8f30(uVar4,uVar9,uVar5,uVar10,uVar25,uVar15,uVar14);
        *unaff_x20 = plVar2;
        unaff_x20[1] = lVar6;
        *(byte *)(unaff_x20 + 2) = bVar18;
        unaff_x20[3] = uVar7;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar18;
        *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
        FUN_1009ed3d8(param_1,bVar18,lVar23,uVar3,uVar8,(ulong)uVar19);
        _swift_release(uVar7);
        return;
      }
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100aa0490);
      (*pcVar20)();
    }
    FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                  *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
    *unaff_x20 = plVar2;
    unaff_x20[1] = lVar6;
    *(byte *)(unaff_x20 + 2) = bVar18 & 1;
    unaff_x20[3] = uVar7;
    unaff_x20[4] = lVar23;
    *(byte *)(unaff_x20 + 5) = bVar12 & 1;
    *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
    if ((bVar12 & 1) != 0) goto LAB_100aa03e8;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 1;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
LAB_100aa045c:
  *(undefined1 *)((long)param_1 + 0x1f) = 2;
  return;
}



/* Address: 0x100aa0494 | FUN_100aa0494 */

void FUN_100aa0494(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined7 uVar4;
  code *pcVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar7 = (uint)*(byte *)((long)unaff_x20 + 0x12);
  if (*(byte *)((long)unaff_x20 + 0x12) < 3) {
    bVar2 = (byte)*unaff_x20;
    if (uVar7 == 0) {
      puVar6 = param_2;
      FUN_1006883ac();
      uVar8 = *puVar6;
      _swift_retain();
      FUN_100aa0cac(param_2,param_3,param_4);
      uVar12 = 0;
      *unaff_x20 = uVar8;
      unaff_x20[1] = 0;
      *(byte *)(unaff_x20 + 2) = 1;
      *(byte *)((long)unaff_x20 + 0x11) = bVar2 & 1;
      *(byte *)((long)unaff_x20 + 0x12) = 1;
    }
    else {
      uVar4 = *(undefined7 *)((long)unaff_x20 + 1);
      if (uVar7 != 1) {
        _swift_retain(*unaff_x20);
        _swift_release(CONCAT71(uVar4,bVar2));
        goto LAB_100aa0644;
      }
      uVar12 = unaff_x20[1];
      bVar3 = *(byte *)((long)unaff_x20 + 0x11);
      uVar8 = CONCAT71(uVar4,bVar2);
      if (uVar12 != 0) {
        uVar13 = unaff_x20[2];
        if (*(long *)(uVar8 + 0x18) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa06f8);
          (*pcVar5)();
        }
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        *(byte *)((long)unaff_x20 + 0x12) = 5;
        FUN_100aa0cac();
        if (*(long *)(uVar8 + 0x18) < 1) {
          uVar10 = 0;
          *unaff_x20 = uVar8;
          unaff_x20[1] = uVar12;
          uVar12 = (ulong)(byte)uVar13 & 1;
          *(byte *)(unaff_x20 + 2) = (byte)uVar12;
          *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
          uVar12 = uVar12 ^ 1;
          uVar11 = 2;
          *(byte *)((long)unaff_x20 + 0x12) = 1;
          uVar13 = 0;
          uVar14 = uVar13;
        }
        else {
          uVar13 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar13 & 1) == 0) {
            FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
          }
          lVar9 = *(long *)(uVar8 + 0x20);
          lVar1 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa06fc);
            (*pcVar5)();
          }
          lVar9 = uVar8 + lVar9 * 0x18;
          uVar14 = *(ulong *)(lVar9 + 0x30);
          uVar13 = *(ulong *)(lVar9 + 0x28);
          uVar10 = *(ulong *)(lVar9 + 0x38);
          if (*(long *)(uVar8 + 0x10) <= lVar1) {
            lVar1 = 0;
          }
          *(long *)(uVar8 + 0x20) = lVar1;
          if (SBORROW8(*(long *)(uVar8 + 0x18),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa0700);
            (*pcVar5)();
          }
          uVar11 = 0;
          *(long *)(uVar8 + 0x18) = *(long *)(uVar8 + 0x18) + -1;
          *unaff_x20 = uVar8;
          unaff_x20[1] = 0;
          *(byte *)(unaff_x20 + 2) = 1;
          *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
          *(byte *)((long)unaff_x20 + 0x12) = 1;
        }
        goto LAB_100aa0650;
      }
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      *(undefined2 *)(unaff_x20 + 2) = 0;
      *(byte *)((long)unaff_x20 + 0x12) = 5;
      FUN_100aa0cac();
      *unaff_x20 = uVar8;
      unaff_x20[1] = 0;
      *(byte *)(unaff_x20 + 2) = 1;
      *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
      *(byte *)((long)unaff_x20 + 0x12) = 1;
    }
  }
  else {
    if (1 < uVar7 - 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa05cc);
      (*pcVar5)();
    }
LAB_100aa0644:
    uVar12 = 2;
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar10 = 0;
  uVar11 = 2;
LAB_100aa0650:
  *param_1 = uVar12;
  param_1[2] = uVar14;
  param_1[1] = uVar13;
  param_1[3] = uVar10;
  *(undefined1 *)(param_1 + 4) = uVar11;
  return;
}



/* Address: 0x100aa0700 | FUN_100aa0700 */

void FUN_100aa0700(ulong *param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined7 uVar4;
  code *pcVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar7 = (uint)*(byte *)((long)unaff_x20 + 0x12);
  if (*(byte *)((long)unaff_x20 + 0x12) < 3) {
    bVar2 = (byte)*unaff_x20;
    if (uVar7 == 0) {
      puVar6 = param_2;
      FUN_1006883ac();
      uVar8 = *puVar6;
      _swift_retain();
      FUN_100aa0e64(param_2);
      uVar12 = 0;
      *unaff_x20 = uVar8;
      unaff_x20[1] = 0;
      *(byte *)(unaff_x20 + 2) = 1;
      *(byte *)((long)unaff_x20 + 0x11) = bVar2 & 1;
      *(byte *)((long)unaff_x20 + 0x12) = 1;
    }
    else {
      uVar4 = *(undefined7 *)((long)unaff_x20 + 1);
      if (uVar7 != 1) {
        _swift_retain(*unaff_x20);
        _swift_release(CONCAT71(uVar4,bVar2));
        goto LAB_100aa089c;
      }
      uVar12 = unaff_x20[1];
      bVar3 = *(byte *)((long)unaff_x20 + 0x11);
      uVar8 = CONCAT71(uVar4,bVar2);
      if (uVar12 != 0) {
        uVar13 = unaff_x20[2];
        if (*(long *)(uVar8 + 0x18) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa094c);
          (*pcVar5)();
        }
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        *(undefined2 *)(unaff_x20 + 2) = 0;
        *(byte *)((long)unaff_x20 + 0x12) = 5;
        FUN_100aa0e64();
        if (*(long *)(uVar8 + 0x18) < 1) {
          uVar10 = 0;
          *unaff_x20 = uVar8;
          unaff_x20[1] = uVar12;
          uVar12 = (ulong)(byte)uVar13 & 1;
          *(byte *)(unaff_x20 + 2) = (byte)uVar12;
          *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
          uVar12 = uVar12 ^ 1;
          uVar11 = 2;
          *(byte *)((long)unaff_x20 + 0x12) = 1;
          uVar13 = 0;
          uVar14 = uVar13;
        }
        else {
          uVar13 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar13 & 1) == 0) {
            FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
          }
          lVar9 = *(long *)(uVar8 + 0x20);
          lVar1 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa0950);
            (*pcVar5)();
          }
          lVar9 = uVar8 + lVar9 * 0x18;
          uVar14 = *(ulong *)(lVar9 + 0x30);
          uVar13 = *(ulong *)(lVar9 + 0x28);
          uVar10 = *(ulong *)(lVar9 + 0x38);
          if (*(long *)(uVar8 + 0x10) <= lVar1) {
            lVar1 = 0;
          }
          *(long *)(uVar8 + 0x20) = lVar1;
          if (SBORROW8(*(long *)(uVar8 + 0x18),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa0954);
            (*pcVar5)();
          }
          uVar11 = 0;
          *(long *)(uVar8 + 0x18) = *(long *)(uVar8 + 0x18) + -1;
          *unaff_x20 = uVar8;
          unaff_x20[1] = 0;
          *(byte *)(unaff_x20 + 2) = 1;
          *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
          *(byte *)((long)unaff_x20 + 0x12) = 1;
        }
        goto LAB_100aa08a8;
      }
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      *(undefined2 *)(unaff_x20 + 2) = 0;
      *(byte *)((long)unaff_x20 + 0x12) = 5;
      FUN_100aa0e64();
      *unaff_x20 = uVar8;
      unaff_x20[1] = 0;
      *(byte *)(unaff_x20 + 2) = 1;
      *(byte *)((long)unaff_x20 + 0x11) = bVar3 & 1;
      *(byte *)((long)unaff_x20 + 0x12) = 1;
    }
  }
  else {
    if (1 < uVar7 - 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100aa0834);
      (*pcVar5)();
    }
LAB_100aa089c:
    uVar12 = 2;
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar10 = 0;
  uVar11 = 2;
LAB_100aa08a8:
  *param_1 = uVar12;
  param_1[2] = uVar14;
  param_1[1] = uVar13;
  param_1[3] = uVar10;
  *(undefined1 *)(param_1 + 4) = uVar11;
  return;
}



/* Address: 0x100aa0954 | FUN_100aa0954 */

void FUN_100aa0954(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *unaff_x20;
  ulong uVar9;
  
  uVar4 = *unaff_x20;
  lVar5 = *(long *)(uVar4 + 0x18);
  if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ac0);
    (*pcVar2)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  uVar9 = *unaff_x20;
  if ((*(long *)(uVar9 + 0x10) < lVar5 + 1) || ((uVar4 & 1) == 0)) {
    FUN_100aa0ed8();
    uVar9 = *unaff_x20;
  }
  lVar5 = uVar9 + 0x10;
  FUN_100aa1628(lVar5,uVar9 + 0x28,param_1);
  if (lVar5 != 0) {
    lVar6 = *(long *)(uVar9 + 0x18);
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ac4);
      (*pcVar2)();
    }
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar9 = *unaff_x20;
    if ((*(long *)(uVar9 + 0x10) < lVar6 + 1) || ((uVar4 & 1) == 0)) {
      FUN_100aa0ed8();
      uVar9 = *unaff_x20;
    }
    lVar8 = *(long *)(uVar9 + 0x18);
    lVar1 = *(long *)(uVar9 + 0x20);
    lVar6 = lVar1 + lVar8;
    if (SCARRY8(lVar1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ac8);
      (*pcVar2)();
    }
    if (lVar8 < 0) {
      if ((lVar6 < 0) &&
         (bVar3 = SCARRY8(lVar6,*(long *)(uVar9 + 0x10)), lVar6 = lVar6 + *(long *)(uVar9 + 0x10),
         bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0adc);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(uVar9 + 0x10);
      bVar3 = SBORROW8(lVar6,lVar7);
      if ((lVar7 <= lVar6) && (lVar6 = lVar6 - lVar7, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0a20);
        (*pcVar2)();
      }
    }
    *(long *)(uVar9 + lVar6 * 8 + 0x28) = lVar5;
    lVar5 = lVar8 + 1;
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0acc);
      (*pcVar2)();
    }
    lVar6 = lVar1 + lVar5;
    if (SCARRY8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ad0);
      (*pcVar2)();
    }
    if (lVar5 < 0) {
      lVar8 = *(long *)(uVar9 + 0x10);
      if ((lVar6 < 0) && (bVar3 = SCARRY8(lVar6,lVar8), lVar6 = lVar6 + lVar8, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ae0);
        (*pcVar2)();
      }
    }
    else {
      lVar8 = *(long *)(uVar9 + 0x10);
      bVar3 = SBORROW8(lVar6,lVar8);
      if ((lVar8 <= lVar6) && (lVar6 = lVar6 - lVar8, bVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0a64);
        (*pcVar2)();
      }
    }
    if (lVar5 < lVar8) {
      if (lVar6 < lVar1) {
        if (SBORROW8(lVar1,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0a90);
          (*pcVar2)();
        }
      }
      else {
        if (SBORROW8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ad4);
          (*pcVar2)();
        }
        if ((lVar1 < 0) || (lVar8 < lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa0ad8);
          (*pcVar2)();
        }
      }
    }
    *(long *)(uVar9 + 0x18) = lVar5;
  }
  return;
}



/* Address: 0x100aa0ae0 | FUN_100aa0ae0 */

void FUN_100aa0ae0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  uVar5 = *unaff_x20;
  lVar7 = *(long *)(uVar5 + 0x18);
  if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c8c);
    (*pcVar3)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  if ((*(long *)(uVar10 + 0x10) < lVar7 + 1) || ((uVar5 & 1) == 0)) {
    FUN_100aa109c();
    uVar10 = *unaff_x20;
  }
  lVar7 = uVar10 + 0x10;
  lVar6 = uVar10 + 0x28;
  FUN_100a05e94();
  if (lVar7 != 0) {
    lVar8 = *(long *)(uVar10 + 0x18);
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c90);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = *unaff_x20;
    if ((*(long *)(uVar10 + 0x10) < lVar8 + 1) || ((uVar5 & 1) == 0)) {
      FUN_100aa109c();
      uVar10 = *unaff_x20;
    }
    lVar1 = *(long *)(uVar10 + 0x18);
    lVar2 = *(long *)(uVar10 + 0x20);
    lVar8 = lVar2 + lVar1;
    if (SCARRY8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c94);
      (*pcVar3)();
    }
    if (lVar1 < 0) {
      if ((lVar8 < 0) &&
         (bVar4 = SCARRY8(lVar8,*(long *)(uVar10 + 0x10)), lVar8 = lVar8 + *(long *)(uVar10 + 0x10),
         bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0ca8);
        (*pcVar3)();
      }
    }
    else {
      lVar9 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar8,lVar9);
      if ((lVar9 <= lVar8) && (lVar8 = lVar8 - lVar9, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0bc8);
        (*pcVar3)();
      }
    }
    lVar8 = uVar10 + lVar8 * 0x18;
    *(long *)(lVar8 + 0x28) = lVar7;
    *(int *)(lVar8 + 0x30) = (int)lVar6;
    *(int *)(lVar8 + 0x34) = (int)((ulong)lVar6 >> 0x20);
    *(int *)(lVar8 + 0x38) = (int)param_1;
    *(short *)(lVar8 + 0x3c) = (short)((ulong)param_1 >> 0x20);
    *(char *)(lVar8 + 0x3e) = (char)((ulong)param_1 >> 0x30);
    lVar7 = lVar1 + 1;
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c98);
      (*pcVar3)();
    }
    lVar6 = lVar2 + lVar7;
    if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c9c);
      (*pcVar3)();
    }
    if (lVar7 < 0) {
      lVar8 = *(long *)(uVar10 + 0x10);
      if ((lVar6 < 0) && (bVar4 = SCARRY8(lVar6,lVar8), lVar6 = lVar6 + lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0cac);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar6,lVar8);
      if ((lVar8 <= lVar6) && (lVar6 = lVar6 - lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c2c);
        (*pcVar3)();
      }
    }
    if (lVar7 < lVar8) {
      if (lVar6 < lVar2) {
        if (SBORROW8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0c58);
          (*pcVar3)();
        }
      }
      else {
        if (SBORROW8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0ca0);
          (*pcVar3)();
        }
        if ((lVar2 < 0) || (lVar8 < lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0ca4);
          (*pcVar3)();
        }
      }
    }
    *(long *)(uVar10 + 0x18) = lVar7;
  }
  return;
}



/* Address: 0x100aa0cac | FUN_100aa0cac */

void FUN_100aa0cac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  uVar5 = *unaff_x20;
  lVar7 = *(long *)(uVar5 + 0x18);
  if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e44);
    (*pcVar3)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  if ((*(long *)(uVar10 + 0x10) < lVar7 + 1) || ((uVar5 & 1) == 0)) {
    FUN_100aa1260();
    uVar10 = *unaff_x20;
  }
  lVar7 = uVar10 + 0x10;
  lVar6 = uVar10 + 0x28;
  FUN_100aa17ac();
  if (lVar7 != 1) {
    lVar8 = *(long *)(uVar10 + 0x18);
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e48);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = *unaff_x20;
    if ((*(long *)(uVar10 + 0x10) < lVar8 + 1) || ((uVar5 & 1) == 0)) {
      FUN_100aa1260();
      uVar10 = *unaff_x20;
    }
    lVar1 = *(long *)(uVar10 + 0x18);
    lVar2 = *(long *)(uVar10 + 0x20);
    lVar8 = lVar2 + lVar1;
    if (SCARRY8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e4c);
      (*pcVar3)();
    }
    if (lVar1 < 0) {
      if ((lVar8 < 0) &&
         (bVar4 = SCARRY8(lVar8,*(long *)(uVar10 + 0x10)), lVar8 = lVar8 + *(long *)(uVar10 + 0x10),
         bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e60);
        (*pcVar3)();
      }
    }
    else {
      lVar9 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar8,lVar9);
      if ((lVar9 <= lVar8) && (lVar8 = lVar8 - lVar9, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0d98);
        (*pcVar3)();
      }
    }
    lVar8 = uVar10 + lVar8 * 0x18;
    *(long *)(lVar8 + 0x28) = lVar7;
    *(long *)(lVar8 + 0x30) = lVar6;
    *(undefined8 *)(lVar8 + 0x38) = param_1;
    lVar7 = lVar1 + 1;
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e50);
      (*pcVar3)();
    }
    lVar6 = lVar2 + lVar7;
    if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e54);
      (*pcVar3)();
    }
    if (lVar7 < 0) {
      lVar8 = *(long *)(uVar10 + 0x10);
      if ((lVar6 < 0) && (bVar4 = SCARRY8(lVar6,lVar8), lVar6 = lVar6 + lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e64);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar6,lVar8);
      if ((lVar8 <= lVar6) && (lVar6 = lVar6 - lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0de4);
        (*pcVar3)();
      }
    }
    if (lVar7 < lVar8) {
      if (lVar6 < lVar2) {
        if (SBORROW8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e10);
          (*pcVar3)();
        }
      }
      else {
        if (SBORROW8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e58);
          (*pcVar3)();
        }
        if ((lVar2 < 0) || (lVar8 < lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa0e5c);
          (*pcVar3)();
        }
      }
    }
    *(long *)(uVar10 + 0x18) = lVar7;
  }
  return;
}



/* Address: 0x100aa0e64 | FUN_100aa0e64 */

void FUN_100aa0e64(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *unaff_x20;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *unaff_x20;
  lVar3 = *(long *)(uVar2 + 0x18);
  if (!SCARRY8(lVar3,lVar5)) {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = *unaff_x20;
    if ((*(long *)(uVar4 + 0x10) < lVar3 + lVar5) || ((uVar2 & 1) == 0)) {
      FUN_100aa1260();
      uVar4 = *unaff_x20;
    }
    FUN_100aa201c(param_1 + 0x20,lVar5,uVar4 + 0x10,uVar4 + 0x28);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa0ed8);
  (*pcVar1)();
}



/* Address: 0x100aa0ed8 | FUN_100aa0ed8 */

void FUN_100aa0ed8(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *unaff_x20;
  plVar6 = (long *)(lVar5 + 0x10);
  lVar7 = *plVar6;
  if (lVar7 < param_2) {
    puVar2 = &DAT_100ff6ad0;
    FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
    FUN_1006841c8(param_2,param_3 & 1,lVar5,puVar2);
    if ((param_1 & 1) == 0) {
      puVar2 = &DAT_100ff7f18;
      FUN_1000f7830(&DAT_100ff7f18,&DAT_100c93368);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x21;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 3;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_100aa1cdc(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      puVar2 = &DAT_100ff7f18;
      FUN_1000f7830(&DAT_100ff7f18,&DAT_100c93368);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x21;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 3;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7440(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar2 = &DAT_100ff7f18;
    FUN_1000f7830(&DAT_100ff7f18,&DAT_100c93368);
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    if (0 < lVar4) {
      FUN_100a9f404(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x100aa109c | FUN_100aa109c */

void FUN_100aa109c(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100eeaaa8);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100ff7f20;
      FUN_1000f7830(&DAT_100ff7f20,&DAT_100c93378);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06564(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100ff7f20;
      FUN_1000f7830(&DAT_100ff7f20,&DAT_100c93378);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06168(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100ff7f20;
    FUN_1000f7830(&DAT_100ff7f20,&DAT_100c93378);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_1009ed678(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100aa1260 | FUN_100aa1260 */

void FUN_100aa1260(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100f2d7d8);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100ff7f28;
      FUN_1000f7830(&DAT_100ff7f28,&DAT_100c93380);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100aa1de4(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100ff7f28;
      FUN_1000f7830(&DAT_100ff7f28,&DAT_100c93380);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06448(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100ff7f28;
    FUN_1000f7830(&DAT_100ff7f28,&DAT_100c93380);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_100a9f510(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100aa1424 | FUN_100aa1424 */

void FUN_100aa1424(ulong param_1,long param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *unaff_x20;
  puVar3 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  plVar6 = (long *)(lVar5 + 0x10);
  lVar9 = *plVar6;
  lVar8 = *(long *)(puVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  if (lVar9 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar5,puVar3);
    if ((param_1 & 1) == 0) {
      puVar3 = &DAT_100ff7f80;
      FUN_1000f7830(&DAT_100ff7f80,&DAT_100c93480);
      lVar8 = *(long *)(lVar8 + 0x48);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1620);
        (*pcVar2)();
      }
      if ((long)puVar4 - uVar7 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1628);
        (*pcVar2)();
      }
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = (long)((long)puVar4 - uVar7) / lVar8;
      }
      lVar8 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar3 + 0x10) = lVar9;
      *(long *)(puVar3 + 0x18) = lVar8;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      if (0 < lVar8) {
        FUN_100aa1ecc(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
      }
    }
    else {
      lVar9 = *(long *)(lVar5 + 0x18);
      puVar3 = &DAT_100ff7f80;
      FUN_1000f7830(&DAT_100ff7f80,&DAT_100c93480);
      lVar8 = *(long *)(lVar8 + 0x48);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa161c);
        (*pcVar2)();
      }
      if ((long)puVar4 - uVar7 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1624);
        (*pcVar2)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = (long)((long)puVar4 - uVar7) / lVar8;
      }
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = lVar9;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      if (0 < lVar9) {
        FUN_100aa1b14(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar3 = &DAT_100ff7f80;
    FUN_1000f7830(&DAT_100ff7f80,&DAT_100c93480);
    _swift_allocObject();
    uVar11 = *(undefined8 *)(lVar5 + 0x20);
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
    lVar8 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar3 + 0x10) = lVar9;
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    if (0 < lVar8) {
      FUN_100a9f5e8(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar3;
  return;
}



/* Address: 0x100aa1628 | FUN_100aa1628 */

long FUN_100aa1628(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *local_58;
  long local_50;
  long *local_48;
  long lStack_40;
  char local_38;
  
  FUN_100aa19b8(&local_58);
  lVar4 = param_3;
  if (local_38 == '\x01' || 0 < local_50) {
    if (local_58 == (long *)0x0) {
      uVar2 = 0;
      if (local_50 != 0) goto LAB_100aa1768;
    }
    else if (local_50 == 0) {
      uVar2 = 0;
    }
    else {
      if (local_50 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa17a4);
        (*pcVar1)();
      }
      lVar4 = 0;
      *local_58 = param_3;
      uVar2 = 1;
      if (local_50 != 1) goto LAB_100aa1768;
    }
    if (local_38 != '\x01') {
      if ((lStack_40 < 1) || (lVar4 == 0)) {
        lVar3 = 0;
      }
      else {
        if (local_48 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa17ac);
          (*pcVar1)();
        }
        *local_48 = lVar4;
        lVar3 = 1;
        lVar4 = 0;
      }
      uVar2 = uVar2 + lVar3;
    }
    goto LAB_100aa1768;
  }
  if (local_50 == 0) {
    if (lStack_40 < 1) {
      uVar2 = 0;
      goto LAB_100aa1768;
    }
    lVar4 = lStack_40;
    if (param_3 != 0) goto LAB_100aa16c8;
    uVar2 = 0;
  }
  else {
    lVar4 = local_50;
    local_48 = local_58;
    if (param_3 == 0) {
      uVar2 = 0;
      lVar4 = 0;
      goto LAB_100aa1768;
    }
LAB_100aa16c8:
    if (local_48 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa17a8);
      (*pcVar1)();
    }
    *local_48 = param_3;
    if (lVar4 == 1) {
      uVar2 = (ulong)(local_50 == 0);
      if ((local_50 != 0) && (lStack_40 < 1)) {
        uVar2 = 1;
        lVar4 = 0;
        goto LAB_100aa1768;
      }
    }
    else {
      uVar2 = 1;
      if (local_50 != 0) {
        lVar4 = 0;
        goto LAB_100aa1768;
      }
    }
  }
  uVar2 = local_50 + uVar2;
  lVar4 = 0;
LAB_100aa1768:
  if (SCARRY8(*(long *)(param_1 + 8),uVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa17a0);
    (*pcVar1)();
  }
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar2;
  _swift_bridgeObjectRetain(param_3);
  return lVar4;
}



/* Address: 0x100aa17ac | FUN_100aa17ac */

long FUN_100aa17ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *local_78;
  long local_70;
  long *local_68;
  long lStack_60;
  char local_58;
  
  FUN_100aa1a64(&local_78);
  lVar5 = param_3;
  if (local_58 == '\x01' || 0 < local_70) {
    lVar4 = param_4;
    lVar1 = param_5;
    if (local_78 == (long *)0x0) {
      uVar3 = 0;
      if (local_70 != 0) goto LAB_100aa195c;
    }
    else if (local_70 == 0) {
      uVar3 = 0;
    }
    else {
      if (local_70 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa19b0);
        (*pcVar2)();
      }
      *local_78 = param_3;
      local_78[1] = param_4;
      uVar3 = 1;
      local_78[2] = param_5;
      lVar5 = 1;
      lVar4 = 0;
      lVar1 = 0;
      if (local_70 != 1) goto LAB_100aa195c;
    }
    if (local_58 != '\x01') {
      if (lStack_60 < 1) {
        lVar4 = 0;
      }
      else if (lVar5 == 1) {
        lVar4 = 0;
      }
      else {
        if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa19b8);
          (*pcVar2)();
        }
        *local_68 = lVar5;
        local_68[1] = lVar4;
        lVar4 = 1;
        lVar5 = 1;
        local_68[2] = lVar1;
      }
      uVar3 = uVar3 + lVar4;
    }
    goto LAB_100aa195c;
  }
  if (local_70 == 0) {
    if (lStack_60 < 1) {
      uVar3 = 0;
      goto LAB_100aa195c;
    }
    lVar5 = lStack_60;
    if (param_3 != 1) goto LAB_100aa1888;
    uVar3 = 0;
  }
  else {
    lVar5 = local_70;
    local_68 = local_78;
    if (param_3 == 1) {
      uVar3 = 0;
LAB_100aa18fc:
      lVar5 = 1;
      goto LAB_100aa195c;
    }
LAB_100aa1888:
    if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa19b4);
      (*pcVar2)();
    }
    *local_68 = param_3;
    local_68[1] = param_4;
    local_68[2] = param_5;
    if (lVar5 == 1) {
      uVar3 = (ulong)(local_70 == 0);
      if ((local_70 != 0) && (lStack_60 < 1)) {
        uVar3 = 1;
        lVar5 = 1;
        goto LAB_100aa195c;
      }
    }
    else {
      uVar3 = 1;
      if (local_70 != 0) goto LAB_100aa18fc;
    }
  }
  uVar3 = local_70 + uVar3;
  lVar5 = 1;
LAB_100aa195c:
  if (SCARRY8(*(long *)(param_1 + 8),uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa19ac);
    (*pcVar2)();
  }
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar3;
  FUN_100a7c25c(param_3,param_4,param_5);
  return lVar5;
}



/* Address: 0x100aa19b8 | FUN_100aa19b8 */

void FUN_100aa19b8(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = lVar3 + lVar5;
  if (SCARRY8(lVar3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a58);
    (*pcVar1)();
  }
  if (lVar5 < 0) {
    lVar6 = *param_2;
    if ((lVar4 < 0) && (bVar2 = SCARRY8(lVar4,lVar6), lVar4 = lVar4 + lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a64);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *param_2;
    bVar2 = SBORROW8(lVar4,lVar6);
    if ((lVar6 <= lVar4) && (lVar4 = lVar4 - lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa19e0);
      (*pcVar1)();
    }
  }
  if (lVar5 < lVar6) {
    if (lVar3 <= lVar4) {
      lVar5 = lVar6 - lVar4;
      if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a5c);
        (*pcVar1)();
      }
      if ((lVar3 < 0) || (lVar6 < lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a60);
        (*pcVar1)();
      }
      bVar2 = lVar3 == 0;
      lVar6 = 0;
      if (!bVar2) {
        lVar6 = param_3;
      }
      goto LAB_100aa1a40;
    }
    lVar5 = lVar3 - lVar4;
    if (SBORROW8(lVar3,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a0c);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = 0;
  }
  lVar3 = 0;
  bVar2 = true;
  lVar6 = 0;
LAB_100aa1a40:
  *param_1 = param_3 + lVar4 * 8;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = lVar3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x100aa1a64 | FUN_100aa1a64 */

void FUN_100aa1a64(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = lVar3 + lVar5;
  if (SCARRY8(lVar3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1b08);
    (*pcVar1)();
  }
  if (lVar5 < 0) {
    lVar6 = *param_2;
    if ((lVar4 < 0) && (bVar2 = SCARRY8(lVar4,lVar6), lVar4 = lVar4 + lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1b14);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *param_2;
    bVar2 = SBORROW8(lVar4,lVar6);
    if ((lVar6 <= lVar4) && (lVar4 = lVar4 - lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1a8c);
      (*pcVar1)();
    }
  }
  if (lVar5 < lVar6) {
    if (lVar3 <= lVar4) {
      lVar5 = lVar6 - lVar4;
      if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1b0c);
        (*pcVar1)();
      }
      if ((lVar3 < 0) || (lVar6 < lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1b10);
        (*pcVar1)();
      }
      bVar2 = lVar3 == 0;
      lVar6 = 0;
      if (!bVar2) {
        lVar6 = param_3;
      }
      goto LAB_100aa1aec;
    }
    lVar5 = lVar3 - lVar4;
    if (SBORROW8(lVar3,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa1ab8);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = 0;
  }
  lVar3 = 0;
  bVar2 = true;
  lVar6 = 0;
LAB_100aa1aec:
  *param_1 = param_3 + lVar4 * 0x18;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = lVar3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x100aa1b14 | FUN_100aa1b14 */

void FUN_100aa1b14(undefined8 param_1,ulong param_2,long *param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_3[2];
  lVar1 = *param_3 - lVar7;
  if (SBORROW8(*param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1cd0);
    (*pcVar2)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar4 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1cd4);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    uVar5 = param_4;
    lVar6 = lVar1;
  }
  else {
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    uVar5 = 0;
    lVar4 = 0;
    lVar6 = lVar8;
  }
  if (lVar6 < 1) {
    lVar6 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1cd8);
      (*pcVar2)();
    }
    param_4 = param_4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7;
    if (param_4 <= param_2) {
      puVar3 = &DAT_100ff7ef0;
      FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
      if (param_2 < param_4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar6) {
        if (param_2 != param_4) {
          _swift_arrayInitWithTakeBackToFront(param_2,param_4,lVar6,puVar3);
        }
        goto joined_r0x000100aa1c4c;
      }
    }
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    _swift_arrayInitWithTakeFrontToBack(param_2,param_4,lVar6,puVar3);
  }
joined_r0x000100aa1c4c:
  if (lVar1 < lVar8 && lVar4 != 0) {
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa1cdc);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    param_2 = param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar6;
    if (param_2 < uVar5 || uVar5 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar4 <= param_2) {
      _swift_arrayInitWithTakeFrontToBack(param_2,uVar5,lVar4);
    }
    else if (param_2 != uVar5) {
      _swift_arrayInitWithTakeBackToFront(param_2,uVar5,lVar4,puVar3);
    }
  }
  return;
}



/* Address: 0x100aa1cdc | FUN_100aa1cdc */

void FUN_100aa1cdc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1dd8);
    (*pcVar3)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar6 = lVar8 - lVar1;
    lVar7 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1ddc);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar7 = lVar8;
    lVar2 = 0;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1de0);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff6ad0;
    FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
    _swift_arrayInitWithCopy(param_2,param_4 + lVar5 * 8,lVar7,puVar4);
  }
  if (lVar1 < lVar8 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1de4);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff6ad0;
    FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
    _swift_arrayInitWithCopy(param_2 + lVar7 * 8,lVar2,lVar6,puVar4);
  }
  return;
}



/* Address: 0x100aa1de4 | FUN_100aa1de4 */

void FUN_100aa1de4(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1ec0);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar5 = lVar7 - lVar1;
    lVar6 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1ec4);
      (*pcVar3)();
    }
  }
  else {
    lVar5 = 0;
    lVar6 = lVar7;
    lVar2 = 0;
  }
  if (lVar6 < 1) {
    lVar6 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1ec8);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x18,lVar6,&DAT_100f2d7d8);
  }
  if (lVar1 < lVar7 && lVar5 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa1ecc);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar6 * 0x18,lVar2,lVar5,&DAT_100f2d7d8);
  }
  return;
}



/* Address: 0x100aa1ecc | FUN_100aa1ecc */

void FUN_100aa1ecc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_3[2];
  lVar1 = *param_3 - lVar9;
  if (SBORROW8(*param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2010);
    (*pcVar2)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar5 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2014);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    lVar7 = lVar1;
    lVar6 = param_4;
  }
  else {
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    lVar6 = 0;
    lVar5 = 0;
    lVar7 = lVar8;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2018);
      (*pcVar2)();
    }
    lVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x48);
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * lVar9,lVar7,puVar3);
  }
  if ((lVar1 < lVar8) && (lVar5 != 0)) {
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa201c);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff7ef0;
    FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
    _swift_arrayInitWithCopy
              (param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,lVar6,lVar5,puVar3);
  }
  return;
}



/* Address: 0x100aa201c | FUN_100aa201c */

void FUN_100aa201c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  ulong local_40;
  char local_38;
  
  if (0 < (long)param_2) {
    lVar3 = *(long *)(param_3 + 8);
    if (SCARRY8(lVar3,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2114);
      (*pcVar2)();
    }
    *(ulong *)(param_3 + 8) = lVar3 + param_2;
    if ((long)(lVar3 + param_2) < lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2118);
      (*pcVar2)();
    }
    FUN_100a06990(&local_58);
    if ((local_38 == '\x01') || (local_40 == 0)) {
      if (param_1 != 0) {
        local_48 = local_58;
        if ((long)uStack_50 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa211c);
          (*pcVar2)();
        }
        goto LAB_100aa20e8;
      }
    }
    else {
      if ((long)uStack_50 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2120);
        (*pcVar2)();
      }
      if ((param_1 != 0) && (uStack_50 != 0)) {
        uVar1 = param_2;
        if (uStack_50 <= param_2) {
          uVar1 = uStack_50;
        }
        _swift_arrayInitWithCopy(local_58,param_1,uVar1,&DAT_100f2d7d8);
      }
      if ((long)local_40 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100aa2124);
        (*pcVar2)();
      }
      if (param_1 != 0) {
        uVar1 = param_2;
        if (local_40 <= param_2) {
          uVar1 = local_40;
        }
        param_1 = param_1 + (param_2 - uVar1) * 0x18;
        param_2 = uVar1;
LAB_100aa20e8:
        _swift_arrayInitWithCopy(local_48,param_1,param_2,&DAT_100f2d7d8);
        return;
      }
    }
  }
  return;
}



/* Address: 0x100aa2124 | FUN_100aa2124 */

void FUN_100aa2124(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *param_3;
  _swift_task_switch(FUN_100aa2140,0,0);
  return;
}



/* Address: 0x100aa2140 | FUN_100aa2140 */

void FUN_100aa2140(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2f3b8;
  _swift_allocObject(&DAT_100f2f3b8,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa2200 | FUN_100aa2200 */

void FUN_100aa2200(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009f5f24;
  FUN_100a697f8(param_2);
  return;
}



/* Address: 0x100aa226c | FUN_100aa226c */

void FUN_100aa226c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa227c | FUN_100aa227c */

void FUN_100aa227c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar8 = (long *)0x2d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_1005c804c;
  FUN_100a9a710(plVar8,param_1,param_2,uVar1,uVar4,uVar2,uVar5,uVar7,uVar9,uVar10,uVar11,uVar3,uVar6
               );
  return;
}



/* Address: 0x100aa233c | FUN_100aa233c */

void FUN_100aa233c(void)

{
  FUN_100a69eb8();
  return;
}



/* Address: 0x100aa2344 | FUN_100aa2344 */

void FUN_100aa2344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  plVar7 = (long *)0x250;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a9c2b0(plVar7,param_1,uVar1,uVar3,uVar9,uVar5,uVar10,uVar6,uVar8,uVar13,uVar14,uVar11,
                uVar12,uVar2,uVar4);
  return;
}



/* Address: 0x100aa2418 | FUN_100aa2418 */

void FUN_100aa2418(long param_1)

{
  if (param_1 == 1) {
    return;
  }
  FUN_100a7c288();
  return;
}



/* Address: 0x100aa2428 | FUN_100aa2428 */

void FUN_100aa2428(void)

{
  uint in_w3;
  
  if ((in_w3 & 0xff) - 1 < 2) {
    _swift_release();
    return;
  }
  return;
}



/* Address: 0x100aa2440 | FUN_100aa2440 */

undefined1  [16] FUN_100aa2440(void)

{
  return ZEXT816(0x100f2f280);
}



/* Address: 0x100aa2450 | FUN_100aa2450 */

undefined1  [16] FUN_100aa2450(void)

{
  return ZEXT816(0x100f2f2a0);
}



/* Address: 0x100aa2460 | FUN_100aa2460 */

undefined8 FUN_100aa2460(undefined8 param_1)

{
  FUN_100a7b1e0();
  return param_1;
}



/* Address: 0x100aa2494 | thunk_FUN_100aa2498 */

void thunk_FUN_100aa2498(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2498 | FUN_100aa2498 */

void FUN_100aa2498(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa24cc | FUN_100aa24cc */

void FUN_100aa24cc(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_4;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100aa2548;
                    /* WARNING: Could not recover jumptable at 0x000100aa2544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x20))
  ;
  return;
}



/* Address: 0x100aa2548 | FUN_100aa2548 */

void FUN_100aa2548(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100aa25ac;
  }
  else {
    pcVar1 = thunk_FUN_100928d1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100aa25ac | FUN_100aa25ac */

void FUN_100aa25ac(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar2[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100aa25c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa25c4 | FUN_100aa25c4 */

void FUN_100aa25c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *param_3;
  _swift_task_switch(FUN_100aa25e0,0,0);
  return;
}



/* Address: 0x100aa25e0 | FUN_100aa25e0 */

void FUN_100aa25e0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2f548;
  _swift_allocObject(&DAT_100f2f548,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa26a0 | FUN_100aa26a0 */

void FUN_100aa26a0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_4;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100aa271c;
                    /* WARNING: Could not recover jumptable at 0x000100aa2718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x20))
  ;
  return;
}



/* Address: 0x100aa271c | FUN_100aa271c */

void FUN_100aa271c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100aa2780;
  }
  else {
    pcVar1 = FUN_100928d1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100aa2780 | FUN_100aa2780 */

void FUN_100aa2780(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100aa2794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa2798 | FUN_100aa2798 */

void FUN_100aa2798(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *param_3;
  _swift_task_switch(FUN_100aa27b4,0,0);
  return;
}



/* Address: 0x100aa27b4 | FUN_100aa27b4 */

void FUN_100aa27b4(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2f638;
  _swift_allocObject(&DAT_100f2f638,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a4bc1c;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa2874 | FUN_100aa2874 */

void FUN_100aa2874(void)

{
  FUN_100aa2ca8();
  return;
}



/* Address: 0x100aa2888 | FUN_100aa2888 */

void FUN_100aa2888(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a519d0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aa2910 | FUN_100aa2910 */

void FUN_100aa2910(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100aa2124(param_1,param_2,(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100aa298c | FUN_100aa298c */

void FUN_100aa298c(void)

{
  byte in_w3;
  
  if (in_w3 < 2) {
    FUN_100a7c288();
    return;
  }
  return;
}



/* Address: 0x100aa29a0 | FUN_100aa29a0 */

void FUN_100aa29a0(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa2200(plVar1,param_1);
  return;
}



/* Address: 0x100aa2a10 | thunk_FUN_100aa2a14 */

void thunk_FUN_100aa2a14(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2a14 | FUN_100aa2a14 */

void FUN_100aa2a14(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2a70 | FUN_100aa2a70 */

void FUN_100aa2a70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  plVar7 = (long *)0x250;
  uVar6 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_100a9c2b0(plVar7,param_1,uVar1,uVar3,uVar9,uVar5,uVar10,uVar6,uVar8,uVar13,uVar14,uVar11,
                uVar12,uVar2,uVar4);
  return;
}



/* Address: 0x100aa2b44 | thunk_FUN_100aa2c7c */

void thunk_FUN_100aa2c7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2b48 | FUN_100aa2b48 */

void FUN_100aa2b48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa24cc(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aa2bd0 | FUN_100aa2bd0 */

void FUN_100aa2bd0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100aa25c4(param_1,param_2,(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100aa2c4c | thunk_FUN_100aa2e18 */

void thunk_FUN_100aa2e18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2c50 | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2c54 | thunk_FUN_100a7b758 */

void thunk_FUN_100a7b758(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2c58 | FUN_100aa2c58 */

void FUN_100aa2c58(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2c7c | FUN_100aa2c7c */

void FUN_100aa2c7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aa2ca8 | FUN_100aa2ca8 */

void FUN_100aa2ca8(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x29) == '\0') {
    uVar1 = 0;
  }
  FUN_100a6d010(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),uVar1 | *(byte *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100aa2ce0 | FUN_100aa2ce0 */

void FUN_100aa2ce0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa26a0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aa2d68 | FUN_100aa2d68 */

void FUN_100aa2d68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd444;
  FUN_100aa2798(param_1,param_2,(undefined8 *)(unaff_x22 + 0x10));
  return;
}


