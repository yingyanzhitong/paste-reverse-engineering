/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100934a78 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a7c | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100934a80 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a84 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a88 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100934a8c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a90 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a94 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100934a98 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100934a9c | FUN_100934a9c */

void FUN_100934a9c(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x78);
  if (*(char *)(unaff_x20 + 0x80) == '\0') {
    if (param_1 == 0) {
      _swift_retain(lVar9);
    }
    else if (lVar9 == 0) {
      _swift_retain(param_1);
      FUN_1008db688(0,0);
      lVar9 = param_1;
    }
    else {
      puVar4 = &DAT_100f18f78;
      _swift_allocObject(&DAT_100f18f78,0x28,7);
      *(code **)(puVar4 + 0x10) = FUN_1008fa3d4;
      *(long *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar9;
      uVar5 = *(ulong *)(lVar9 + 0x20);
      lVar1 = *(long *)(lVar9 + 0x28);
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar1 + 0x10);
      FUN_1008db688(lVar9,0);
      _swift_retain(param_1);
      FUN_1008db688(lVar9,0);
      _swift_retain(param_1);
      FUN_1008db688(lVar9,0);
      _swift_retain_n(param_1,2);
      FUN_1008db688(lVar9,0);
      _swift_retain(param_1);
      uVar6 = uVar5;
      (*pcVar12)(uVar5,lVar1);
      if ((uVar6 & 1) == 0) {
        _swift_release(param_1);
        puVar7 = &DAT_100f18fa0;
        _swift_allocObject(&DAT_100f18fa0,0x28,7);
        *(long *)(puVar7 + 0x10) = lVar9;
        *(code **)(puVar7 + 0x18) = FUN_1008fa3dc;
        *(undefined **)(puVar7 + 0x20) = puVar4;
        pcVar12 = *(code **)(lVar1 + 0x18);
        FUN_1008db688(lVar9,0);
        _swift_retain(puVar4);
        (*pcVar12)(FUN_1008db360,puVar7,uVar5,lVar1);
        _swift_release(param_1);
        _swift_release(puVar4);
        FUN_1008db6b0(lVar9,0);
        _swift_release(puVar7);
      }
      else {
        _swift_beginAccess(lVar9 + 0x10,auStack_a8,0,0);
        cVar2 = *(char *)(lVar9 + 0x18);
        if (cVar2 == -1) {
          _swift_release(param_1);
          _swift_beginAccess(lVar9 + 0x30,auStack_78,0x21,0);
          FUN_10064967c(FUN_1008fa3dc,puVar4);
          _swift_endAccess(auStack_78);
        }
        else {
          uVar11 = *(undefined8 *)(lVar9 + 0x10);
          FUN_1005dfeb4(uVar11,cVar2);
          FUN_10092b43c(uVar11,cVar2,param_1);
          _swift_release(param_1);
          FUN_100308538(uVar11,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(param_1);
        _swift_release(puVar4);
        _swift_bridgeObjectRelease(0);
        FUN_1008db6b0(lVar9,0);
      }
      FUN_1008db6b0(lVar9,0);
      _swift_release_n(param_1,2);
    }
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar8 = *(undefined1 *)(unaff_x20 + 0x80);
    *(long *)(unaff_x20 + 0x78) = lVar9;
    if (*(long *)(unaff_x20 + 0x18) == *(long *)(unaff_x20 + 0x20)) goto LAB_100934fe4;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
  }
  else {
    if (*(char *)(unaff_x20 + 0x80) != '\x01') {
      if (lVar9 == 0) {
        _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
        *(long *)(unaff_x20 + 0x78) = param_1;
        if (*(long *)(unaff_x20 + 0x18) == *(long *)(unaff_x20 + 0x20)) {
          *(undefined1 *)(unaff_x20 + 0x80) = 1;
        }
        else {
          *(undefined1 *)(unaff_x20 + 0x80) = 0;
        }
        _swift_retain(param_1);
      }
      goto LAB_100934ff8;
    }
    if (param_1 == 0) {
      _swift_retain(lVar9);
    }
    else if (lVar9 == 0) {
      _swift_retain(param_1);
      FUN_1008db688(0,1);
      lVar9 = param_1;
    }
    else {
      puVar4 = &DAT_100f18fc8;
      _swift_allocObject(&DAT_100f18fc8,0x28,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar9;
      uVar5 = *(ulong *)(lVar9 + 0x20);
      lVar1 = *(long *)(lVar9 + 0x28);
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar1 + 0x10);
      FUN_1008db688(lVar9,1);
      _swift_retain(param_1);
      FUN_1008db688(lVar9,1);
      _swift_retain(param_1);
      FUN_1008db688(lVar9,1);
      _swift_retain_n(param_1,2);
      FUN_1008db688(lVar9,1);
      _swift_retain(param_1);
      uVar6 = uVar5;
      (*pcVar12)(uVar5,lVar1);
      if ((uVar6 & 1) == 0) {
        _swift_release(param_1);
        puVar7 = &DAT_100f18ff0;
        _swift_allocObject(&DAT_100f18ff0,0x28,7);
        *(long *)(puVar7 + 0x10) = lVar9;
        *(code **)(puVar7 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar7 + 0x20) = puVar4;
        pcVar12 = *(code **)(lVar1 + 0x18);
        FUN_1008db688(lVar9,1);
        _swift_retain(puVar4);
        (*pcVar12)(thunk_FUN_1008db360,puVar7,uVar5,lVar1);
        _swift_release(param_1);
        _swift_release(puVar4);
        FUN_1008db6b0(lVar9,1);
        _swift_release(puVar7);
      }
      else {
        _swift_beginAccess(lVar9 + 0x10,auStack_90,0,0);
        cVar2 = *(char *)(lVar9 + 0x18);
        if (cVar2 == -1) {
          _swift_release(param_1);
          _swift_beginAccess(lVar9 + 0x30,auStack_78,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar4);
          _swift_endAccess(auStack_78);
        }
        else {
          uVar11 = *(undefined8 *)(lVar9 + 0x10);
          FUN_1005dfeb4(uVar11,cVar2);
          FUN_10092b43c(uVar11,cVar2,param_1);
          _swift_release(param_1);
          FUN_100308538(uVar11,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(param_1);
        _swift_release(puVar4);
        _swift_bridgeObjectRelease(0);
        FUN_1008db6b0(lVar9,1);
      }
      FUN_1008db6b0(lVar9,1);
      _swift_release_n(param_1,2);
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
    *(long *)(unaff_x20 + 0x78) = lVar9;
    uVar8 = *(undefined1 *)(unaff_x20 + 0x80);
LAB_100934fe4:
    *(undefined1 *)(unaff_x20 + 0x80) = 1;
  }
  FUN_1008db6b0(uVar11,uVar8);
LAB_100934ff8:
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x80);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  bVar3 = *(long *)(unaff_x20 + 0x18) == *(long *)(unaff_x20 + 0x20);
  uVar10 = (uint)bVar3;
  _swift_retain(param_1);
  FUN_1008db688(uVar11,uVar8);
  FUN_1009375d0(uVar11,uVar8,bVar3,param_1);
  if ((uVar10 - 1 & 0xff) < 2) {
    *(undefined1 *)(unaff_x20 + 0x70) = 0;
  }
  return;
}



/* Address: 0x10093507c | FUN_10093507c */

undefined8 FUN_10093507c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
  bVar1 = *(byte *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = 1;
  *(undefined1 *)(unaff_x20 + 0x80) = 2;
  if (1 < bVar1) {
    FUN_1008db6b0(uVar7,2);
    uVar7 = 0;
  }
  lVar2 = unaff_x20 + 0x10;
  uVar6 = 0x21;
  _swift_beginAccess(lVar2,auStack_68,0x21,0);
  FUN_100935bc0();
  _swift_endAccess(auStack_68);
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0x20);
    lVar5 = *(long *)(lVar2 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar5 + 0x10))();
    if ((uVar3 & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar5 = *(long *)(lVar2 + 0x28);
      _swift_getObjectType(uVar6);
      puVar4 = &DAT_100f19018;
      _swift_allocObject(&DAT_100f19018,0x20,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      pcVar8 = *(code **)(lVar5 + 0x18);
      _swift_retain(lVar2);
      _swift_errorRetain(param_1);
      (*pcVar8)(FUN_1008d678c,puVar4,uVar6,lVar5);
      _swift_release(lVar2);
      _swift_release(puVar4);
    }
    else {
      thunk_FUN_1005de8f4(param_1);
      FUN_1006486f8();
      _swift_release(lVar2);
      FUN_100004550(param_1,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  return uVar7;
}



/* Address: 0x1009351dc | FUN_1009351dc */

undefined8 FUN_1009351dc(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  char in_wzr;
  char acStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,acStack_58,0x21,0);
  FUN_1009330b4(param_1,param_2,param_3 & 0xffffffffffffff,param_4);
  if ((long)param_1 < 0) {
    param_1 = param_1 & 0x7fffffffffffffff;
    FUN_100654dbc(param_1,param_2,param_3 & 0xffffffffffffff);
    lVar4 = *(long *)(unaff_x20 + 0x38) + param_1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x38),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009352d0);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = (ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)param_2);
    lVar4 = *(long *)(unaff_x20 + 0x38) + uVar3;
    if (SCARRY8(*(long *)(unaff_x20 + 0x38),uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100935250);
      (*pcVar1)();
    }
  }
  *(long *)(unaff_x20 + 0x38) = lVar4;
  pcVar2 = acStack_58;
  _swift_endAccess();
  uVar5 = 1;
  if ((*(long *)(unaff_x20 + 0x50) < lVar4) &&
     ((**(code **)(**(long **)(unaff_x20 + 0x58) + 0x88))(), *pcVar2 == '\x01')) {
    *pcVar2 = in_wzr;
    uVar5 = 0;
    *(undefined1 *)(unaff_x20 + 0x60) = 0;
  }
  return uVar5;
}



/* Address: 0x1009352d0 | FUN_1009352d0 */

undefined1  [16] FUN_1009352d0(void)

{
  return ZEXT816(0x100f18db0);
}



/* Address: 0x1009352e0 | FUN_1009352e0 */

undefined1  [16] FUN_1009352e0(void)

{
  return ZEXT816(0x100f18dd0);
}



/* Address: 0x1009352f0 | FUN_1009352f0 */

undefined1  [16] FUN_1009352f0(void)

{
  return ZEXT816(0x100f18df0);
}



/* Address: 0x100935300 | FUN_100935300 */

void FUN_100935300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  uVar13 = unaff_x20[1];
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100935444);
    (*pcVar8)();
  }
  if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100935448);
    (*pcVar8)();
  }
  uVar10 = *unaff_x20;
  if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10093544c);
    (*pcVar8)();
  }
  lVar1 = uVar10 + uVar13 * 0x20;
  lVar11 = *(long *)(lVar1 + 0x38);
  if (lVar11 != 1) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(ulong *)(lVar1 + 0x30);
    uVar12 = *(undefined8 *)(lVar1 + 0x20);
    FUN_100656060();
    FUN_100656200(uVar12,uVar2,uVar5);
    _swift_retain(lVar11);
    uVar9 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar9 & 1) == 0) {
      FUN_100932f84();
    }
    if (uVar13 < *(ulong *)(uVar10 + 0x10)) {
      lVar1 = uVar10 + uVar13 * 0x20;
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      uVar7 = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x20) = uVar12;
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      *(ulong *)(lVar1 + 0x30) = uVar5 & 0xffffffffffffff;
      *(long *)(lVar1 + 0x38) = lVar11;
      FUN_1009340ac(uVar3,uVar6,uVar4,uVar7);
      *unaff_x20 = uVar10;
      if (!SBORROW8(unaff_x20[5],param_1)) {
        unaff_x20[5] = unaff_x20[5] - param_1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100935454);
      (*pcVar8)();
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100935450);
    (*pcVar8)();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100935458);
  (*pcVar8)();
}



/* Address: 0x100935458 | FUN_100935458 */

undefined1  [16] FUN_100935458(ulong param_1,long param_2,char param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (param_3 == '\x01' || param_2 != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bb8);
      (*pcVar15)();
    }
    if (param_1 == 0) {
      uVar16 = 0;
      lVar19 = 0;
    }
    else {
      uVar22 = 0;
      lVar19 = 0;
      do {
        while( true ) {
          if (param_1 <= uVar22) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935b90);
            (*pcVar15)();
          }
          uVar2 = uVar22 + 1;
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935b94);
            (*pcVar15)();
          }
          uVar13 = unaff_x20[1];
          uVar10 = unaff_x20[2];
          if (uVar10 == uVar13) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935b98);
            (*pcVar15)();
          }
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935b9c);
            (*pcVar15)();
          }
          if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935ba0);
            (*pcVar15)();
          }
          uVar12 = *unaff_x20;
          uVar20 = *(ulong *)(uVar12 + 0x10);
          if (uVar20 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935ba4);
            (*pcVar15)();
          }
          lVar8 = uVar12 + uVar13 * 0x20;
          if (*(long *)(lVar8 + 0x38) == 1) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bbc);
            (*pcVar15)();
          }
          lVar7 = *(long *)(lVar8 + 0x20);
          FUN_10065603c(lVar7,*(undefined8 *)(lVar8 + 0x28),
                        *(ulong *)(lVar8 + 0x30) & 0xffffffffffffff);
          if (param_2 < lVar7) {
            FUN_100935300(param_2);
            uVar16 = 1;
            goto LAB_100935b68;
          }
          if (SBORROW8(param_2,lVar7)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935ba8);
            (*pcVar15)();
          }
          if ((char)unaff_x20[4] != '\x01') {
            uVar11 = unaff_x20[3];
            bVar1 = (long)uVar11 < 1;
            if ((long)uVar11 < 2) {
              uVar11 = 1;
            }
            unaff_x20[3] = uVar11 - 1;
            *(bool *)(unaff_x20 + 4) = bVar1;
          }
          if ((long)uVar13 <= (long)uVar10) {
            uVar20 = 0;
          }
          if ((long)((uVar10 - uVar13) + uVar20) < 1) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bac);
            (*pcVar15)();
          }
          lVar18 = *(long *)(lVar8 + 0x38);
          if (lVar18 == 1) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bc0);
            (*pcVar15)();
          }
          lVar3 = *(long *)(lVar8 + 0x20);
          uVar16 = *(undefined8 *)(lVar8 + 0x28);
          uVar20 = *(ulong *)(lVar8 + 0x30);
          FUN_100656200(lVar3,uVar16,uVar20);
          _swift_retain(lVar18);
          uVar10 = uVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar10 & 1) == 0) {
            FUN_100932f84();
          }
          if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bb0);
            (*pcVar15)();
          }
          lVar8 = uVar12 + uVar13 * 0x20;
          uVar17 = *(undefined8 *)(lVar8 + 0x20);
          uVar14 = *(undefined8 *)(lVar8 + 0x28);
          uVar21 = *(undefined8 *)(lVar8 + 0x30);
          uVar4 = *(undefined8 *)(lVar8 + 0x38);
          *(undefined8 *)(lVar8 + 0x20) = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
          *(undefined8 *)(lVar8 + 0x30) = 0;
          *(undefined8 *)(lVar8 + 0x38) = 1;
          FUN_1009340ac(uVar17,uVar14,uVar21,uVar4);
          *unaff_x20 = uVar12;
          unaff_x20[1] = *(long *)(uVar12 + 0x10) + 0x1ffffffffU & uVar13 + 1;
          lVar8 = lVar3;
          FUN_10065603c(lVar3,uVar16,uVar20 & 0xffffffffffffff);
          if (SBORROW8(unaff_x20[5],lVar8)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100935bb4);
            (*pcVar15)();
          }
          unaff_x20[5] = unaff_x20[5] - lVar8;
          _swift_retain(lVar18);
          FUN_1009340ac(lVar3,uVar16,uVar20,lVar18);
          if (lVar18 != 0) break;
LAB_10093554c:
          param_2 = param_2 - lVar7;
          uVar22 = uVar22 + 1;
          if (uVar2 == param_1) {
            uVar16 = 0;
            goto LAB_100935b68;
          }
        }
        if (lVar19 != 0) {
          puVar9 = &DAT_100f19158;
          _swift_allocObject(&DAT_100f19158,0x28,7);
          *(code **)(puVar9 + 0x10) = thunk_FUN_1008fa3d4;
          *(long *)(puVar9 + 0x18) = lVar18;
          *(long *)(puVar9 + 0x20) = lVar19;
          uVar13 = *(ulong *)(lVar19 + 0x20);
          lVar8 = *(long *)(lVar19 + 0x28);
          _swift_getObjectType();
          pcVar15 = *(code **)(lVar8 + 0x10);
          _swift_retain_n(lVar18,6);
          _swift_retain_n(lVar19,4);
          (*pcVar15)(uVar13,lVar8);
          if ((uVar13 & 1) == 0) {
            _swift_release(lVar18);
            uVar16 = *(undefined8 *)(lVar19 + 0x20);
            lVar8 = *(long *)(lVar19 + 0x28);
            _swift_getObjectType(uVar16);
            puVar6 = &DAT_100f19180;
            _swift_allocObject(&DAT_100f19180,0x28,7);
            *(long *)(puVar6 + 0x10) = lVar19;
            *(code **)(puVar6 + 0x18) = thunk_FUN_1008fa3dc;
            *(undefined **)(puVar6 + 0x20) = puVar9;
            pcVar15 = *(code **)(lVar8 + 0x18);
            _swift_retain(lVar19);
            _swift_retain(puVar9);
            (*pcVar15)(thunk_FUN_1008db360,puVar6,uVar16,lVar8);
            _swift_release(puVar6);
            _swift_release(puVar9);
            _swift_release_n(lVar19,3);
            _swift_release_n(lVar18,5);
            goto LAB_10093554c;
          }
          _swift_beginAccess(lVar19 + 0x10,auStack_80,0,0);
          uVar16 = *(undefined8 *)(lVar19 + 0x10);
          cVar5 = *(char *)(lVar19 + 0x18);
          if (cVar5 == '\x01') {
            uVar13 = *(ulong *)(lVar18 + 0x20);
            lVar8 = *(long *)(lVar18 + 0x28);
            _swift_getObjectType();
            pcVar15 = *(code **)(lVar8 + 0x10);
            FUN_100308524(uVar16,1);
            (*pcVar15)(uVar13,lVar8);
            if ((uVar13 & 1) == 0) {
              uVar17 = *(undefined8 *)(lVar18 + 0x20);
              lVar8 = *(long *)(lVar18 + 0x28);
              _swift_getObjectType();
              puVar6 = &DAT_100f191a8;
              _swift_allocObject(&DAT_100f191a8,0x20,7);
              *(long *)(puVar6 + 0x10) = lVar18;
              *(undefined8 *)(puVar6 + 0x18) = uVar16;
              pcVar15 = *(code **)(lVar8 + 0x18);
              _swift_retain(lVar18);
              FUN_1005dfeb4(uVar16,1);
              (*pcVar15)(thunk_FUN_1008d678c,puVar6,uVar17,lVar8);
              _swift_release(lVar18);
              _swift_release(puVar6);
            }
            else {
              _swift_beginAccess(lVar18 + 0x10,auStack_b0,1,0);
              uVar17 = 0;
              uVar21 = 0;
              uVar14 = 0;
              if (*(char *)(lVar18 + 0x18) == -1) {
                *(undefined8 *)(lVar18 + 0x10) = uVar16;
                *(undefined1 *)(lVar18 + 0x18) = 1;
                _swift_beginAccess(lVar18 + 0x30,auStack_c8,1,0);
                uVar17 = *(undefined8 *)(lVar18 + 0x30);
                uVar21 = *(undefined8 *)(lVar18 + 0x38);
                uVar14 = *(undefined8 *)(lVar18 + 0x40);
                *(undefined8 *)(lVar18 + 0x38) = 0;
                *(undefined8 *)(lVar18 + 0x40) = 0;
                *(undefined8 *)(lVar18 + 0x30) = 0;
                _swift_errorRetain(uVar16);
              }
              FUN_1006486f8(uVar17,uVar21,uVar14);
              FUN_100004550(uVar17,uVar21);
              _swift_release(lVar18);
              _swift_bridgeObjectRelease(uVar14);
            }
            FUN_100308538(uVar16,1);
          }
          else if (cVar5 == -1) {
            _swift_release(lVar18);
            _swift_beginAccess(lVar19 + 0x30,auStack_98,0x21,0);
            if (*(long *)(lVar19 + 0x30) == 0) {
              *(code **)(lVar19 + 0x30) = thunk_FUN_1008fa3dc;
              *(undefined **)(lVar19 + 0x38) = puVar9;
LAB_100935a80:
              _swift_retain(puVar9);
            }
            else {
              uVar13 = *(ulong *)(lVar19 + 0x40);
              if (uVar13 == 0) {
                puVar6 = &DAT_100fec470;
                FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
                _swift_allocObject();
                *(undefined8 *)(puVar6 + 0x18) = 2;
                *(undefined8 *)(puVar6 + 0x10) = 1;
                *(code **)(puVar6 + 0x20) = thunk_FUN_1008fa3dc;
                *(undefined **)(puVar6 + 0x28) = puVar9;
                *(undefined **)(lVar19 + 0x40) = puVar6;
                goto LAB_100935a80;
              }
              _swift_retain(puVar9);
              uVar10 = uVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(lVar19 + 0x40) = uVar13;
              uVar20 = uVar13;
              if ((uVar10 & 1) == 0) {
                uVar20 = 0;
                FUN_100932184(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
                *(ulong *)(lVar19 + 0x40) = uVar20;
              }
              uVar13 = *(ulong *)(uVar20 + 0x10);
              uVar10 = uVar20;
              if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar13) {
                uVar10 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
                FUN_100932184(uVar10,uVar13 + 1,1,uVar20);
              }
              *(ulong *)(uVar10 + 0x10) = uVar13 + 1;
              lVar8 = uVar10 + uVar13 * 0x10;
              *(code **)(lVar8 + 0x20) = thunk_FUN_1008fa3dc;
              *(undefined **)(lVar8 + 0x28) = puVar9;
              *(ulong *)(lVar19 + 0x40) = uVar10;
            }
            _swift_endAccess(auStack_98);
          }
          else {
            uVar13 = *(ulong *)(lVar18 + 0x20);
            lVar8 = *(long *)(lVar18 + 0x28);
            _swift_getObjectType();
            uVar10 = uVar13;
            (**(code **)(lVar8 + 0x10))();
            if ((uVar10 & 1) == 0) {
              puVar6 = &DAT_100f191d0;
              _swift_allocObject(&DAT_100f191d0,0x21,7);
              *(long *)(puVar6 + 0x10) = lVar18;
              *(undefined8 *)(puVar6 + 0x18) = uVar16;
              puVar6[0x20] = cVar5;
              pcVar15 = *(code **)(lVar8 + 0x18);
              _swift_retain(lVar18);
              (*pcVar15)(thunk_FUN_10090f070,puVar6,uVar13,lVar8);
              _swift_release(lVar18);
              _swift_release(puVar6);
            }
            else {
              _swift_beginAccess(lVar18 + 0x10,auStack_e0,1,0);
              uVar17 = 0;
              uVar21 = 0;
              uVar14 = 0;
              if (*(char *)(lVar18 + 0x18) == -1) {
                *(undefined8 *)(lVar18 + 0x10) = uVar16;
                *(char *)(lVar18 + 0x18) = cVar5;
                _swift_beginAccess(lVar18 + 0x30,auStack_f8,1,0);
                uVar17 = *(undefined8 *)(lVar18 + 0x30);
                uVar21 = *(undefined8 *)(lVar18 + 0x38);
                uVar14 = *(undefined8 *)(lVar18 + 0x40);
                *(undefined8 *)(lVar18 + 0x38) = 0;
                *(undefined8 *)(lVar18 + 0x40) = 0;
                *(undefined8 *)(lVar18 + 0x30) = 0;
              }
              FUN_1006486f8(uVar17,uVar21,uVar14);
              FUN_100004550(uVar17,uVar21);
              _swift_release(lVar18);
              _swift_bridgeObjectRelease(uVar14);
            }
            FUN_100308538(uVar16,cVar5);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release(puVar9);
          _swift_release_n(lVar19,3);
          _swift_release_n(lVar18,5);
          _swift_bridgeObjectRelease(0);
          goto LAB_10093554c;
        }
        uVar16 = 0;
        lVar19 = lVar18;
        param_2 = param_2 - lVar7;
        uVar22 = uVar2;
      } while (uVar2 != param_1);
    }
  }
  else {
    uVar16 = 2;
    lVar19 = 0;
  }
LAB_100935b68:
  auVar23._8_8_ = uVar16;
  auVar23._0_8_ = lVar19;
  return auVar23;
}



/* Address: 0x100935bc0 | FUN_100935bc0 */

long FUN_100935bc0(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar14 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  if (uVar14 == uVar3) {
    lVar12 = 0;
  }
  else {
    lVar13 = 0;
    do {
      if ((char)unaff_x20[4] != '\x01') {
        uVar8 = unaff_x20[3];
        bVar1 = (long)uVar8 < 1;
        if ((long)uVar8 < 2) {
          uVar8 = 1;
        }
        unaff_x20[3] = uVar8 - 1;
        *(bool *)(unaff_x20 + 4) = bVar1;
      }
      uVar8 = *unaff_x20;
      lVar12 = uVar3 - uVar14;
      if ((long)uVar3 < (long)uVar14) {
        lVar12 = lVar12 + *(long *)(uVar8 + 0x10);
      }
      if (lVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100936298);
        (*pcVar17)();
      }
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10093629c);
        (*pcVar17)();
      }
      if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362a0);
        (*pcVar17)();
      }
      uVar9 = *(ulong *)(uVar8 + 0x10);
      if (uVar9 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362a4);
        (*pcVar17)();
      }
      lVar12 = uVar8 + uVar14 * 0x20;
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362b4);
        (*pcVar17)();
      }
      if ((long)uVar14 <= (long)uVar3) {
        uVar9 = 0;
      }
      if ((long)((uVar3 - uVar14) + uVar9) < 1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362a8);
        (*pcVar17)();
      }
      lVar2 = *(long *)(lVar12 + 0x20);
      uVar18 = *(undefined8 *)(lVar12 + 0x28);
      uVar19 = *(ulong *)(lVar12 + 0x30);
      FUN_100656200(lVar2,uVar18,uVar19);
      _swift_retain(lVar11);
      uVar9 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        FUN_100932f84();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362ac);
        (*pcVar17)();
      }
      lVar12 = uVar8 + uVar14 * 0x20;
      uVar15 = *(undefined8 *)(lVar12 + 0x20);
      uVar10 = *(undefined8 *)(lVar12 + 0x28);
      uVar16 = *(undefined8 *)(lVar12 + 0x30);
      uVar4 = *(undefined8 *)(lVar12 + 0x38);
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
      *(undefined8 *)(lVar12 + 0x38) = 1;
      FUN_1009340ac(uVar15,uVar10,uVar16,uVar4);
      *unaff_x20 = uVar8;
      uVar14 = *(long *)(uVar8 + 0x10) + 0x1ffffffffU & uVar14 + 1;
      unaff_x20[1] = uVar14;
      lVar12 = lVar2;
      FUN_10065603c(lVar2,uVar18,uVar19 & 0xffffffffffffff);
      if (SBORROW8(unaff_x20[5],lVar12)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009362b0);
        (*pcVar17)();
      }
      unaff_x20[5] = unaff_x20[5] - lVar12;
      _swift_retain(lVar11);
      FUN_1009340ac(lVar2,uVar18,uVar19,lVar11);
      lVar12 = lVar13;
      if ((lVar11 != 0) && (lVar12 = lVar11, lVar13 != 0)) {
        puVar6 = &DAT_100f19040;
        _swift_allocObject(&DAT_100f19040,0x28,7);
        *(code **)(puVar6 + 0x10) = thunk_FUN_1008fa3d4;
        *(long *)(puVar6 + 0x18) = lVar11;
        *(long *)(puVar6 + 0x20) = lVar13;
        uVar8 = *(ulong *)(lVar13 + 0x20);
        lVar12 = *(long *)(lVar13 + 0x28);
        _swift_getObjectType();
        pcVar17 = *(code **)(lVar12 + 0x10);
        _swift_retain_n(lVar11,6);
        _swift_retain_n(lVar13,4);
        (*pcVar17)(uVar8,lVar12);
        if ((uVar8 & 1) == 0) {
          _swift_release(lVar11);
          uVar18 = *(undefined8 *)(lVar13 + 0x20);
          lVar12 = *(long *)(lVar13 + 0x28);
          _swift_getObjectType(uVar18);
          puVar7 = &DAT_100f19068;
          _swift_allocObject(&DAT_100f19068,0x28,7);
          *(long *)(puVar7 + 0x10) = lVar13;
          *(code **)(puVar7 + 0x18) = thunk_FUN_1008fa3dc;
          *(undefined **)(puVar7 + 0x20) = puVar6;
          pcVar17 = *(code **)(lVar12 + 0x18);
          _swift_retain(lVar13);
          _swift_retain(puVar6);
          (*pcVar17)(thunk_FUN_1008db360,puVar7,uVar18,lVar12);
          _swift_release(puVar7);
          _swift_release(puVar6);
          _swift_release_n(lVar13,3);
          _swift_release_n(lVar11,5);
          lVar12 = lVar13;
        }
        else {
          _swift_beginAccess(lVar13 + 0x10,auStack_80,0,0);
          uVar18 = *(undefined8 *)(lVar13 + 0x10);
          cVar5 = *(char *)(lVar13 + 0x18);
          if (cVar5 == '\x01') {
            uVar8 = *(ulong *)(lVar11 + 0x20);
            lVar12 = *(long *)(lVar11 + 0x28);
            _swift_getObjectType();
            pcVar17 = *(code **)(lVar12 + 0x10);
            FUN_100308524(uVar18,1);
            (*pcVar17)(uVar8,lVar12);
            if ((uVar8 & 1) == 0) {
              uVar15 = *(undefined8 *)(lVar11 + 0x20);
              lVar12 = *(long *)(lVar11 + 0x28);
              _swift_getObjectType(uVar15);
              puVar7 = &DAT_100f19090;
              _swift_allocObject(&DAT_100f19090,0x20,7);
              *(long *)(puVar7 + 0x10) = lVar11;
              *(undefined8 *)(puVar7 + 0x18) = uVar18;
              pcVar17 = *(code **)(lVar12 + 0x18);
              _swift_retain(lVar11);
              FUN_1005dfeb4(uVar18,1);
              (*pcVar17)(thunk_FUN_1008d678c,puVar7,uVar15,lVar12);
              _swift_release(lVar11);
              _swift_release(puVar7);
            }
            else {
              _swift_beginAccess(lVar11 + 0x10,auStack_b0,1,0);
              uVar15 = 0;
              uVar16 = 0;
              uVar10 = 0;
              if (*(char *)(lVar11 + 0x18) == -1) {
                *(undefined8 *)(lVar11 + 0x10) = uVar18;
                *(undefined1 *)(lVar11 + 0x18) = 1;
                _swift_beginAccess(lVar11 + 0x30,auStack_c8,1,0);
                uVar15 = *(undefined8 *)(lVar11 + 0x30);
                uVar16 = *(undefined8 *)(lVar11 + 0x38);
                uVar10 = *(undefined8 *)(lVar11 + 0x40);
                *(undefined8 *)(lVar11 + 0x38) = 0;
                *(undefined8 *)(lVar11 + 0x40) = 0;
                *(undefined8 *)(lVar11 + 0x30) = 0;
                _swift_errorRetain(uVar18);
              }
              FUN_1006486f8(uVar15,uVar16,uVar10);
              FUN_100004550(uVar15,uVar16);
              _swift_release(lVar11);
              _swift_bridgeObjectRelease(uVar10);
            }
            FUN_100308538(uVar18,1);
          }
          else if (cVar5 == -1) {
            _swift_release(lVar11);
            _swift_beginAccess(lVar13 + 0x30,auStack_98,0x21,0);
            if (*(long *)(lVar13 + 0x30) == 0) {
              *(code **)(lVar13 + 0x30) = thunk_FUN_1008fa3dc;
              *(undefined **)(lVar13 + 0x38) = puVar6;
              _swift_retain(puVar6);
            }
            else {
              uVar8 = *(ulong *)(lVar13 + 0x40);
              if (uVar8 == 0) {
                puVar7 = &DAT_100fec470;
                FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
                _swift_allocObject();
                *(undefined8 *)(puVar7 + 0x18) = 2;
                *(undefined8 *)(puVar7 + 0x10) = 1;
                *(code **)(puVar7 + 0x20) = thunk_FUN_1008fa3dc;
                *(undefined **)(puVar7 + 0x28) = puVar6;
                *(undefined **)(lVar13 + 0x40) = puVar7;
                _swift_retain(puVar6);
              }
              else {
                _swift_retain(puVar6);
                uVar9 = uVar8;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(lVar13 + 0x40) = uVar8;
                uVar19 = uVar8;
                if ((uVar9 & 1) == 0) {
                  uVar19 = 0;
                  FUN_100932184(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
                  *(ulong *)(lVar13 + 0x40) = uVar19;
                }
                uVar8 = *(ulong *)(uVar19 + 0x10);
                uVar9 = uVar19;
                if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar8) {
                  uVar9 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
                  FUN_100932184(uVar9,uVar8 + 1,1,uVar19);
                }
                *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
                lVar12 = uVar9 + uVar8 * 0x10;
                *(code **)(lVar12 + 0x20) = thunk_FUN_1008fa3dc;
                *(undefined **)(lVar12 + 0x28) = puVar6;
                *(ulong *)(lVar13 + 0x40) = uVar9;
              }
            }
            _swift_endAccess(auStack_98);
          }
          else {
            uVar8 = *(ulong *)(lVar11 + 0x20);
            lVar12 = *(long *)(lVar11 + 0x28);
            _swift_getObjectType();
            uVar9 = uVar8;
            (**(code **)(lVar12 + 0x10))();
            if ((uVar9 & 1) == 0) {
              puVar7 = &DAT_100f190b8;
              _swift_allocObject(&DAT_100f190b8,0x21,7);
              *(long *)(puVar7 + 0x10) = lVar11;
              *(undefined8 *)(puVar7 + 0x18) = uVar18;
              puVar7[0x20] = cVar5;
              pcVar17 = *(code **)(lVar12 + 0x18);
              _swift_retain(lVar11);
              (*pcVar17)(FUN_10090f070,puVar7,uVar8,lVar12);
              _swift_release(lVar11);
              _swift_release(puVar7);
            }
            else {
              _swift_beginAccess(lVar11 + 0x10,auStack_e0,1,0);
              uVar15 = 0;
              uVar16 = 0;
              uVar10 = 0;
              if (*(char *)(lVar11 + 0x18) == -1) {
                *(undefined8 *)(lVar11 + 0x10) = uVar18;
                *(char *)(lVar11 + 0x18) = cVar5;
                _swift_beginAccess(lVar11 + 0x30,auStack_f8,1,0);
                uVar15 = *(undefined8 *)(lVar11 + 0x30);
                uVar16 = *(undefined8 *)(lVar11 + 0x38);
                uVar10 = *(undefined8 *)(lVar11 + 0x40);
                *(undefined8 *)(lVar11 + 0x38) = 0;
                *(undefined8 *)(lVar11 + 0x40) = 0;
                *(undefined8 *)(lVar11 + 0x30) = 0;
              }
              FUN_1006486f8(uVar15,uVar16,uVar10);
              FUN_100004550(uVar15,uVar16);
              _swift_release(lVar11);
              _swift_bridgeObjectRelease(uVar10);
            }
            FUN_100308538(uVar18,cVar5);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release(puVar6);
          _swift_release_n(lVar13,3);
          _swift_release_n(lVar11,5);
          _swift_bridgeObjectRelease(0);
          lVar12 = lVar13;
        }
      }
      lVar13 = lVar12;
    } while (uVar14 != uVar3);
  }
  return lVar12;
}



/* Address: 0x1009362b4 | FUN_1009362b4 */

void FUN_1009362b4(undefined8 param_1)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  undefined *puVar3;
  long unaff_x20;
  
  CVar1.unknown = &DAT_100fecf38;
  FUN_1000f7830(&DAT_100fecf38,&DAT_100c84f48);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  *(undefined8 *)(_Var2.unknown + 0x20) = 0;
  *(undefined8 *)(_Var2.unknown + 0x30) = 0;
  *(undefined8 *)(_Var2.unknown + 0x28) = 0;
  *(undefined8 *)(_Var2.unknown + 0x38) = 1;
  *(undefined8 *)(_Var2.unknown + 0x40) = 0;
  *(undefined8 *)(_Var2.unknown + 0x50) = 0;
  *(undefined8 *)(_Var2.unknown + 0x48) = 0;
  *(undefined8 *)(_Var2.unknown + 0x58) = 1;
  *(undefined8 *)(_Var2.unknown + 0x60) = 0;
  *(undefined8 *)(_Var2.unknown + 0x70) = 0;
  *(undefined8 *)(_Var2.unknown + 0x68) = 0;
  *(undefined8 *)(_Var2.unknown + 0x78) = 1;
  *(undefined8 *)(_Var2.unknown + 0x80) = 0;
  *(undefined8 *)(_Var2.unknown + 0x90) = 0;
  *(undefined8 *)(_Var2.unknown + 0x88) = 0;
  *(undefined8 *)(_Var2.unknown + 0x98) = 1;
  *(undefined8 *)(_Var2.unknown + 0xa8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xa0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xb0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xb8) = 1;
  *(undefined8 *)(_Var2.unknown + 200) = 0;
  *(undefined8 *)(_Var2.unknown + 0xc0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xd0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xd8) = 1;
  *(undefined8 *)(_Var2.unknown + 0xe8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xe0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xf0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xf8) = 1;
  *(undefined8 *)(_Var2.unknown + 0x108) = 0;
  *(undefined8 *)(_Var2.unknown + 0x100) = 0;
  *(undefined8 *)(_Var2.unknown + 0x110) = 0;
  *(undefined8 *)(_Var2.unknown + 0x118) = 1;
  *(undefined8 *)(_Var2.unknown + 0x128) = 0;
  *(undefined8 *)(_Var2.unknown + 0x120) = 0;
  *(undefined8 *)(_Var2.unknown + 0x130) = 0;
  *(undefined8 *)(_Var2.unknown + 0x138) = 1;
  *(undefined8 *)(_Var2.unknown + 0x148) = 0;
  *(undefined8 *)(_Var2.unknown + 0x140) = 0;
  *(undefined8 *)(_Var2.unknown + 0x150) = 0;
  *(undefined8 *)(_Var2.unknown + 0x158) = 1;
  *(undefined8 *)(_Var2.unknown + 0x168) = 0;
  *(undefined8 *)(_Var2.unknown + 0x160) = 0;
  *(undefined8 *)(_Var2.unknown + 0x170) = 0;
  *(undefined8 *)(_Var2.unknown + 0x178) = 1;
  *(undefined8 *)(_Var2.unknown + 0x188) = 0;
  *(undefined8 *)(_Var2.unknown + 0x180) = 0;
  *(undefined8 *)(_Var2.unknown + 400) = 0;
  *(undefined8 *)(_Var2.unknown + 0x198) = 1;
  *(undefined8 *)(_Var2.unknown + 0x1a8) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1a0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1b0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1b8) = 1;
  *(undefined8 *)(_Var2.unknown + 0x1c8) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1c0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1d0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1d8) = 1;
  *(undefined8 *)(_Var2.unknown + 0x1e8) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1e0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1f0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x1f8) = 1;
  *(undefined8 *)(_Var2.unknown + 0x208) = 0;
  *(undefined8 *)(_Var2.unknown + 0x200) = 0;
  *(undefined8 *)(_Var2.unknown + 0x210) = 0;
  *(undefined8 *)(_Var2.unknown + 0x218) = 1;
  *(undefined **)(unaff_x20 + 0x10) = _Var2.unknown;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0x10000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x8000;
  puVar3 = &DAT_100fecf58;
  FUN_1000f7830(&DAT_100fecf58,&DAT_100c84f70);
  _swift_allocObject();
  puVar3[0x10] = 1;
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0x10;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x80) = 2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Address: 0x1009363f4 | FUN_1009363f4 */

void FUN_1009363f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_1008db6b0(*(undefined8 *)(unaff_x20 + 0x78),*(undefined1 *)(unaff_x20 + 0x80));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100936434 | FUN_100936434 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100936434(void)

{
  return ZEXT816(0x100fecfe0);
}



/* Address: 0x100936454 | FUN_100936454 */

undefined8 * FUN_100936454(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1008db688(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100936498 | FUN_100936498 */

void FUN_100936498(undefined8 *param_1)

{
  FUN_1008db6b0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1009364a8 | FUN_1009364a8 */

undefined8 * FUN_1009364a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1008db688(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1008db6b0(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1009364f8 | FUN_1009364f8 */

undefined8 * FUN_1009364f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1008db6b0(uVar3,uVar2);
  return param_1;
}



/* Address: 0x100936534 | FUN_100936534 */

undefined1  [16] FUN_100936534(void)

{
  return ZEXT816(0x100f18e80);
}



/* Address: 0x100936544 | FUN_100936544 */

undefined8 * FUN_100936544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  _swift_retain();
  return param_1;
}



/* Address: 0x100936590 | FUN_100936590 */

undefined8 * FUN_100936590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Address: 0x1009365fc | FUN_1009365fc */

undefined8 * FUN_1009365fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  return param_1;
}



/* Address: 0x100936650 | FUN_100936650 */

undefined1  [16] FUN_100936650(void)

{
  return ZEXT816(0x100f18ef8);
}



/* Address: 0x100936660 | FUN_100936660 */

undefined1  [16] FUN_100936660(undefined8 param_1,_StringGuts param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  String SVar3;
  char *pcVar4;
  void *pvVar5;
  bool bVar6;
  byte *pbVar7;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  undefined *puVar12;
  long unaff_x20;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  char *local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  char *local_88;
  void *pvStack_80;
  undefined1 auStack_78 [24];
  _StringGuts _Var8;
  
  local_b8 = (char *)0x0;
  local_b0 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x31,param_2);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = (char *)0xd00000000000002d;
  local_b0 = (void *)0x8000000100db4c50;
  pcVar9 = (char *)0x0;
  pvVar11 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78);
  bVar6 = *(char *)(unaff_x20 + 0x30) != '\x01';
  pcVar10 = (char *)0x65736c6166;
  if (bVar6) {
    pcVar10 = (char *)0x65757274;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar6) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar13.bridgeObject = puVar1;
  SVar13.str = pcVar10;
  SVar19.bridgeObject = pvVar11;
  SVar19.str = pcVar9;
  Swift::String::append(SVar13,SVar19);
  _swift_bridgeObjectRelease(puVar1);
  SVar14.bridgeObject = &SUB_e200000000000000;
  SVar14.str = (char *)0x202c;
  _Var8.unknown = &SUB_e200000000000000;
  SVar20.bridgeObject = pvVar11;
  SVar20.str = pcVar9;
  Swift::String::append(SVar14,SVar20);
  pvVar5 = local_b0;
  pcVar4 = local_b8;
  local_b8 = (char *)0x0;
  local_b0 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x21,_Var8);
  local_88 = local_b8;
  pvStack_80 = local_b0;
  pbVar7 = (byte *)0xd000000000000011;
  SVar15.bridgeObject = (void *)0x8000000100db4c80;
  SVar15.str = (char *)0xd000000000000011;
  SVar21.bridgeObject = pvVar11;
  SVar21.str = pcVar9;
  Swift::String::append(SVar15,SVar21);
  (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x88))();
  bVar6 = (*pbVar7 & 1) != 0;
  pcVar10 = (char *)0x65736c6166;
  if (bVar6) {
    pcVar10 = (char *)0x65757274;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar6) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar16.bridgeObject = puVar1;
  SVar16.str = pcVar10;
  SVar22.bridgeObject = pvVar11;
  SVar22.str = pcVar9;
  Swift::String::append(SVar16,SVar22);
  _swift_bridgeObjectRelease(puVar1);
  SVar17.bridgeObject = (void *)0xea0000000000203a;
  SVar17.str = (char *)0x6574617473202c29;
  SVar23.bridgeObject = pvVar11;
  SVar23.str = pcVar9;
  Swift::String::append(SVar17,SVar23);
  local_b8 = *(char **)(unaff_x20 + 0x10);
  local_a0 = *(undefined8 *)(unaff_x20 + 0x28);
  local_98 = *(undefined1 *)(unaff_x20 + 0x30);
  local_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x20);
  local_b0 = *(void **)(unaff_x20 + 0x18);
  pcVar10 = "";
  puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_b8,&local_88,&DAT_100f18ef8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar18.bridgeObject = &SUB_e200000000000000;
  SVar18.str = (char *)0x7d20;
  SVar24.bridgeObject = puVar12;
  SVar24.str = pcVar10;
  Swift::String::append(SVar18,SVar24);
  pvVar11 = pvStack_80;
  SVar3.bridgeObject = pvStack_80;
  SVar3.str = local_88;
  local_b8 = pcVar4;
  local_b0 = pvVar5;
  _swift_bridgeObjectRetain(pvVar5);
  SVar25.bridgeObject = puVar12;
  SVar25.str = pcVar10;
  Swift::String::append(SVar3,SVar25);
  _swift_bridgeObjectRelease(pvVar5);
  _swift_bridgeObjectRelease(pvVar11);
  auVar2._8_8_ = local_b0;
  auVar2._0_8_ = local_b8;
  return auVar2;
}



/* Address: 0x100936864 | FUN_100936864 */

void FUN_100936864(void)

{
  FUN_100936660();
  return;
}



/* Address: 0x100936884 | FUN_100936884 */

byte * FUN_100936884(long param_1,long param_2,code *param_3,undefined8 param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  byte *pbVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x21;
  long *plVar22;
  code *pcVar23;
  ulong *puVar24;
  byte *unaff_x24;
  byte *pbVar25;
  long lVar26;
  long local_278;
  ulong local_218;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  byte abStack_100 [16];
  code *local_f0;
  undefined1 *puStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(param_1 + 0x68);
  local_278 = 0;
  do {
    _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
    pbVar18 = (byte *)(param_2 + 0x10);
    _swift_beginAccess(pbVar18,auStack_98,0,0);
    do {
      if ((*(char *)(param_1 + 0x70) != '\x01') || (*(char *)(param_1 + 0x30) == '\x01')) {
        pbVar25 = *(byte **)(param_1 + 0x78);
        if (*(byte *)(param_1 + 0x80) < 2) {
          pbVar18 = pbVar25;
          FUN_1008db688();
        }
        else {
          pbVar25 = (byte *)0x0;
        }
        goto LAB_100937434;
      }
      uVar8 = *(ulong *)(param_1 + 0x18);
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100937534);
        (*pcVar23)();
      }
      if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100937538);
        (*pcVar23)();
      }
      lVar10 = *(long *)(param_1 + 0x10);
      uVar16 = uVar8 + *(long *)(param_1 + 0x28);
      uVar14 = *(ulong *)(lVar10 + 0x10);
      uVar12 = uVar14 - 1;
      uVar13 = uVar12 & uVar16;
      uVar15 = uVar14;
      if ((long)uVar8 <= (long)uVar13) {
        uVar15 = 0;
      }
      lVar20 = (uVar13 - uVar8) + uVar15;
      uVar16 = uVar12 & uVar16;
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x10093753c);
        (*pcVar23)();
      }
      if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100937540);
        (*pcVar23)();
      }
      if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100937544);
        (*pcVar23)();
      }
      if (lVar20 == 0) {
        if (uVar8 == *(ulong *)(param_1 + 0x20)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100937548);
          (*pcVar23)();
        }
        if (uVar14 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100937550);
          (*pcVar23)();
        }
        lVar10 = lVar10 + uVar8 * 0x20;
        if (*(long *)(lVar10 + 0x38) == 1) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375bc);
          (*pcVar23)();
        }
        if (*(long *)(lVar10 + 0x20) < 0) goto LAB_100936cbc;
LAB_100936af4:
        uVar8 = *(ulong *)(param_2 + 0x18);
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100937558);
          (*pcVar23)();
        }
        if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x10093755c);
          (*pcVar23)();
        }
        uVar16 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x10);
        uVar8 = uVar16 + 0xffffffff & uVar8;
        if (uVar16 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100937560);
          (*pcVar23)();
        }
        lVar10 = *(long *)(param_2 + 0x10) + uVar8 * 0x20;
        pbVar18 = *(byte **)(lVar10 + 0x20);
        if (*(long *)(lVar10 + 0x38) == 1) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375c4);
          (*pcVar23)();
        }
        if ((long)pbVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375c0);
          (*pcVar23)();
        }
        uVar8 = *(ulong *)(lVar10 + 0x28);
        uVar16 = *(ulong *)(lVar10 + 0x30);
        _swift_beginAccess(pbVar18 + 0x18,auStack_148,0,0);
        lVar10 = *(long *)(pbVar18 + 0x18) + (uVar16 >> 0x18 & 0xffff00) + (uVar16 >> 0x30 & 0xff);
        uVar13 = lVar10 + (uVar8 & 0xffffffff);
        pbVar25 = (byte *)(lVar10 + (uVar8 >> 0x20));
        _swift_retain(pbVar18);
        (*param_3)(uVar13,pbVar25);
        if (unaff_x21 != 0) {
LAB_100937484:
          FUN_10000c650(pbVar18,uVar8,uVar16);
          goto LAB_100937498;
        }
        _swift_beginAccess(param_2 + 0x10,abStack_100,0x21,0);
        lVar10 = 1;
        FUN_100935458(1,uVar13,pbVar25);
        pbVar5 = abStack_100;
        _swift_endAccess();
        if (*(long *)(param_2 + 0x38) < *(long *)(param_2 + 0x48)) {
          (**(code **)(**(long **)(param_2 + 0x58) + 0x88))();
          *pbVar5 = 1;
        }
        unaff_x24 = pbVar25;
        if (lVar10 == 0) goto LAB_100936964;
        unaff_x24 = *(byte **)(lVar10 + 0x20);
        lVar20 = *(long *)(lVar10 + 0x28);
        _swift_getObjectType();
        pcVar23 = *(code **)(lVar20 + 0x10);
        _swift_retain(lVar10);
        pbVar25 = unaff_x24;
        (*pcVar23)(unaff_x24,lVar20);
        if (((ulong)pbVar25 & 1) == 0) {
          puVar6 = &DAT_100f19108;
          _swift_allocObject(&DAT_100f19108,0x21,7);
          *(long *)(puVar6 + 0x10) = lVar10;
          *(undefined8 *)(puVar6 + 0x18) = 0;
          puVar6[0x20] = 0;
          pcVar23 = *(code **)(lVar20 + 0x18);
          _swift_retain(lVar10);
          (*pcVar23)(thunk_FUN_10090f070,puVar6,unaff_x24,lVar20);
          _swift_release_n(lVar10,2);
          _swift_release(puVar6);
        }
        else {
          _swift_beginAccess(lVar10 + 0x10,auStack_160,1,0);
          uVar21 = 0;
          unaff_x24 = (byte *)0x0;
          uVar17 = 0;
          if (*(char *)(lVar10 + 0x18) == -1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            *(undefined1 *)(lVar10 + 0x18) = 0;
            _swift_beginAccess(lVar10 + 0x30,auStack_178,1,0);
            uVar21 = *(undefined8 *)(lVar10 + 0x30);
            unaff_x24 = *(byte **)(lVar10 + 0x38);
            uVar17 = *(undefined8 *)(lVar10 + 0x40);
            *(undefined8 *)(lVar10 + 0x38) = 0;
            *(undefined8 *)(lVar10 + 0x40) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
          }
          FUN_1006486f8(uVar21,unaff_x24,uVar17);
          FUN_100004550(uVar21,unaff_x24);
          _swift_release_n(lVar10,2);
          _swift_bridgeObjectRelease(uVar17);
        }
        FUN_10000c650(pbVar18,uVar8,uVar16);
        uVar13 = uVar13 & 0xffffffff;
      }
      else {
        if (lVar20 == -1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (uVar14 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x10093754c);
          (*pcVar23)();
        }
        plVar22 = (long *)(lVar10 + 0x20 + uVar8 * 0x20);
        if (plVar22[3] == 1) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375b4);
          (*pcVar23)();
        }
        uVar12 = uVar12 & uVar8 + 1;
        if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100937554);
          (*pcVar23)();
        }
        plVar1 = (long *)(lVar10 + 0x20 + uVar12 * 0x20);
        if (plVar1[3] == 1) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375b8);
          (*pcVar23)();
        }
        if (*plVar22 < 0) {
LAB_100936cbc:
          uVar8 = *(ulong *)(param_2 + 0x18);
          local_b0 = param_7;
          uStack_a8 = param_8;
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100937564);
            (*pcVar23)();
          }
          if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100937568);
            (*pcVar23)();
          }
          uVar16 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x10);
          uVar8 = uVar16 + 0xffffffff & uVar8;
          if (uVar16 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10093756c);
            (*pcVar23)();
          }
          lVar10 = *(long *)(param_2 + 0x10) + uVar8 * 0x20;
          pbVar18 = *(byte **)(lVar10 + 0x20);
          if (*(long *)(lVar10 + 0x38) == 1) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375cc);
            (*pcVar23)();
          }
          if (-1 < (long)pbVar18) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375c8);
            (*pcVar23)();
          }
          uVar8 = *(ulong *)(lVar10 + 0x28);
          uVar16 = *(ulong *)(lVar10 + 0x30);
          uVar13 = (ulong)pbVar18 & 0x7fffffffffffffff;
          FUN_100611db0(uVar13,uVar8);
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100937570);
            (*pcVar23)();
          }
          puStack_e8 = auStack_c0;
          local_f0 = FUN_1006226e4;
          local_e0 = uVar13;
          uStack_d8 = uVar8;
          _swift_retain((ulong)pbVar18 & 0x7fffffffffffffff);
          puVar6 = &DAT_100fece28;
          FUN_1000f7830(&DAT_100fece28,&DAT_100c84e30);
          FUN_1006541ac(&local_d0,FUN_100937760,abStack_100,puVar6);
          uVar3 = local_c8;
          uVar13 = local_d0;
          if (unaff_x21 != 0) goto LAB_100937484;
          _swift_beginAccess(param_2 + 0x10,abStack_100,0x21,0);
          lVar10 = 1;
          FUN_100935458(param_2,1,uVar13,uVar3);
          pbVar25 = abStack_100;
          _swift_endAccess();
          if (*(long *)(param_2 + 0x38) < *(long *)(param_2 + 0x48)) {
            (**(code **)(**(long **)(param_2 + 0x58) + 0x88))();
            *pbVar25 = 1;
          }
          if (lVar10 != 0) {
            unaff_x24 = *(byte **)(lVar10 + 0x20);
            lVar20 = *(long *)(lVar10 + 0x28);
            _swift_getObjectType();
            pcVar23 = *(code **)(lVar20 + 0x10);
            _swift_retain(lVar10);
            pbVar25 = unaff_x24;
            (*pcVar23)(unaff_x24,lVar20);
            if (((ulong)pbVar25 & 1) == 0) {
              puVar6 = &DAT_100f190e0;
              _swift_allocObject(&DAT_100f190e0,0x21,7);
              *(long *)(puVar6 + 0x10) = lVar10;
              *(undefined8 *)(puVar6 + 0x18) = 0;
              puVar6[0x20] = 0;
              pcVar23 = *(code **)(lVar20 + 0x18);
              _swift_retain(lVar10);
              (*pcVar23)(thunk_FUN_10090f070,puVar6,unaff_x24,lVar20);
              _swift_release_n(lVar10,2);
              _swift_release(puVar6);
            }
            else {
              _swift_beginAccess(lVar10 + 0x10,auStack_118,1,0);
              uVar21 = 0;
              unaff_x24 = (byte *)0x0;
              uVar17 = 0;
              if (*(char *)(lVar10 + 0x18) == -1) {
                *(undefined8 *)(lVar10 + 0x10) = 0;
                *(undefined1 *)(lVar10 + 0x18) = 0;
                _swift_beginAccess(lVar10 + 0x30,auStack_130,1,0);
                uVar21 = *(undefined8 *)(lVar10 + 0x30);
                unaff_x24 = *(byte **)(lVar10 + 0x38);
                uVar17 = *(undefined8 *)(lVar10 + 0x40);
                *(undefined8 *)(lVar10 + 0x38) = 0;
                *(undefined8 *)(lVar10 + 0x40) = 0;
                *(undefined8 *)(lVar10 + 0x30) = 0;
              }
              FUN_1006486f8(uVar21,unaff_x24,uVar17);
              FUN_100004550(uVar21,unaff_x24);
              _swift_release_n(lVar10,2);
              _swift_bridgeObjectRelease(uVar17);
            }
            uVar13 = uVar13 & 0xffffffff;
          }
LAB_100936964:
          FUN_10000c650(pbVar18,uVar8,uVar16);
        }
        else {
          if (*plVar1 < 0) goto LAB_100936af4;
          lVar10 = *(long *)(param_2 + 0x10);
          uVar8 = *(ulong *)(param_2 + 0x18);
          lVar20 = *(long *)(param_2 + 0x28);
          cVar2 = *(char *)(param_2 + 0x30);
          lVar26 = *(long *)(param_2 + 0x40);
          _swift_beginAccess(lVar26 + 0x18,auStack_190,0,0);
          uVar16 = *(ulong *)(lVar26 + 0x18);
          if (*(long *)(uVar16 + 0x10) == 0) {
            lVar11 = 0;
            FUN_100939ad8();
            _swift_allocObject();
            *(undefined8 *)(lVar11 + 0x18) = 0x4000;
            *(undefined8 *)(lVar11 + 0x10) = 0x400;
            *(undefined8 *)(lVar11 + 0x20) = 0x2000;
            *(undefined4 *)(lVar11 + 0x6028) = 0xdeadbeef;
            _swift_retain(lVar10);
            pbVar18 = (byte *)0x400;
            lVar26 = 0x4000;
          }
          else {
            _swift_beginAccess(lVar26 + 0x18,abStack_100,0x21,0);
            _swift_retain(lVar10);
            uVar13 = uVar16;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((uVar13 & 1) == 0) {
              FUN_100932304();
              lVar9 = *(long *)(uVar16 + 0x10);
            }
            else {
              lVar9 = *(long *)(uVar16 + 0x10);
            }
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100937590);
              (*pcVar23)();
            }
            lVar11 = *(long *)(uVar16 + (lVar9 + -1) * 8 + 0x20);
            *(long *)(uVar16 + 0x10) = lVar9 + -1;
            *(ulong *)(lVar26 + 0x18) = uVar16;
            _swift_endAccess(abStack_100);
            pbVar18 = *(byte **)(lVar11 + 0x10);
            lVar26 = *(long *)(lVar11 + 0x18);
          }
          uVar16 = lVar11 + 0x28;
          if (cVar2 == '\x01') {
LAB_100937084:
            unaff_x24 = (byte *)0x0;
          }
          else {
            if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100937594);
              (*pcVar23)();
            }
            if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100937598);
              (*pcVar23)();
            }
            lVar9 = *(long *)(lVar10 + 0x10);
            uVar15 = lVar9 - 1;
            uVar13 = uVar15 & lVar20 + uVar8;
            if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x10093759c);
              (*pcVar23)();
            }
            if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375a0);
              (*pcVar23)();
            }
            lVar20 = lVar9;
            if ((long)uVar8 <= (long)uVar13) {
              lVar20 = 0;
            }
            lVar20 = (uVar13 - uVar8) + lVar20;
            pbVar25 = (byte *)(lVar20 + 1);
            if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375a4);
              (*pcVar23)();
            }
            if ((long)pbVar25 <= (long)pbVar18) {
              pbVar18 = pbVar25;
            }
            if ((long)pbVar25 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100937580);
              (*pcVar23)();
            }
            if (pbVar18 == (byte *)0x0) goto LAB_100937084;
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375a8);
              (*pcVar23)();
            }
            plVar22 = (long *)(lVar10 + 0x20 + (uVar8 & uVar15) * 0x20);
            if (plVar22[3] == 1) {
LAB_1009375cc:
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375d0);
              (*pcVar23)();
            }
            lVar20 = *plVar22;
            if (lVar20 < 0) {
              unaff_x24 = (byte *)0x0;
            }
            else {
              uVar13 = plVar22[1];
              uVar12 = plVar22[2];
              local_218 = (ulong)(uint)((int)(uVar13 >> 0x20) - (int)uVar13);
              if (0x7ffffffe < local_218) {
                local_218 = 0x7fffffff;
              }
              _swift_beginAccess(lVar20 + 0x18,auStack_1d8,0,0);
              lVar9 = *(long *)(lVar20 + 0x18);
              *(long *)(uVar16 + lVar26) = lVar20;
              *(ulong *)(lVar11 + 0x28) =
                   lVar9 + (uVar12 >> 0x18 & 0xffff00) + (uVar12 >> 0x30 & 0xff) +
                   (uVar13 & 0xffffffff);
              *(ulong *)(lVar11 + 0x30) = local_218;
              _swift_unknownObjectRetain(lVar20);
              if (pbVar18 == &DAT_00000001) {
                unaff_x24 = &DAT_00000001;
              }
              else {
                puVar24 = (ulong *)(lVar11 + 0x40);
                pbVar25 = &DAT_00000001;
                plVar22 = (long *)(lVar11 + lVar26 + 0x30);
                do {
                  uVar13 = (ulong)(pbVar25 + uVar8) & uVar15;
                  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x100937574);
                    (*pcVar23)();
                  }
                  if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x100937578);
                    (*pcVar23)();
                  }
                  plVar1 = (long *)(lVar10 + 0x20 + uVar13 * 0x20);
                  if (plVar1[3] == 1) goto LAB_1009375cc;
                  lVar20 = *plVar1;
                  unaff_x24 = pbVar25;
                  if (lVar20 < 0) break;
                  if (SBORROW8(0x7fffffff,local_218)) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x10093757c);
                    (*pcVar23)();
                  }
                  uVar12 = plVar1[1];
                  uVar13 = (ulong)(uint)((int)(uVar12 >> 0x20) - (int)uVar12);
                  if ((long)(0x7fffffff - local_218) < (long)uVar13) break;
                  if (0x7ffffffe < uVar13) {
                    uVar13 = 0x7fffffff;
                  }
                  bVar4 = SCARRY8(local_218,uVar13);
                  local_218 = local_218 + uVar13;
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x100937584);
                    (*pcVar23)();
                  }
                  pbVar25 = pbVar25 + 1;
                  uVar14 = plVar1[2];
                  _swift_beginAccess(lVar20 + 0x18,auStack_1d8,0,0);
                  lVar9 = *(long *)(lVar20 + 0x18);
                  *plVar22 = lVar20;
                  puVar24[-1] = lVar9 + (uVar14 >> 0x18 & 0xffff00) + (uVar14 >> 0x30 & 0xff) +
                                (uVar12 & 0xffffffff);
                  *puVar24 = uVar13;
                  _swift_unknownObjectRetain(lVar20);
                  puVar24 = puVar24 + 2;
                  plVar22 = plVar22 + 1;
                  unaff_x24 = pbVar18;
                } while (pbVar18 != pbVar25);
              }
            }
          }
          uVar13 = uVar16;
          pbVar18 = unaff_x24;
          (*param_5)(uVar16,unaff_x24);
          if (unaff_x21 != 0) {
            if (unaff_x24 != (byte *)0x0) {
              puVar19 = (undefined8 *)(uVar16 + lVar26);
              pbVar18 = unaff_x24;
              do {
                _swift_unknownObjectRelease(*puVar19);
                pbVar18 = pbVar18 + -1;
                unaff_x24 = (byte *)0x0;
                puVar19 = puVar19 + 1;
              } while (pbVar18 != (byte *)0x0);
            }
            if (SCARRY8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x20))) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375ac);
              (*pcVar23)();
            }
            if (*(int *)(uVar16 + *(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x20)) !=
                -0x21524111) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009375b0);
              (*pcVar23)();
            }
            FUN_100931f20(lVar11);
            _swift_release(param_2);
            _swift_release(lVar10);
            param_2 = lVar11;
LAB_100937498:
            _swift_release(param_2);
            return unaff_x24;
          }
          if (unaff_x24 != (byte *)0x0) {
            puVar19 = (undefined8 *)(uVar16 + lVar26);
            pbVar25 = unaff_x24;
            do {
              _swift_unknownObjectRelease(*puVar19);
              pbVar25 = pbVar25 + -1;
              puVar19 = puVar19 + 1;
            } while (pbVar25 != (byte *)0x0);
          }
          if (SCARRY8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x20))) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x100937588);
            (*pcVar23)();
          }
          if (*(int *)(uVar16 + *(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x20)) != -0x21524111)
          {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10093758c);
            (*pcVar23)();
          }
          FUN_100931f20(lVar11);
          _swift_release(lVar10);
          _swift_release(lVar11);
          _swift_beginAccess(param_2 + 0x10,abStack_100,0x21,0);
          pbVar25 = unaff_x24;
          FUN_100935458(unaff_x24,uVar13,pbVar18);
          pbVar18 = abStack_100;
          _swift_endAccess();
          if (*(long *)(param_2 + 0x38) < *(long *)(param_2 + 0x48)) {
            (**(code **)(**(long **)(param_2 + 0x58) + 0x88))();
            *pbVar18 = 1;
          }
          if (pbVar25 != (byte *)0x0) {
            unaff_x24 = *(byte **)(pbVar25 + 0x20);
            lVar10 = *(long *)(pbVar25 + 0x28);
            _swift_getObjectType();
            pcVar23 = *(code **)(lVar10 + 0x10);
            _swift_retain(pbVar25);
            pbVar18 = unaff_x24;
            (*pcVar23)(unaff_x24,lVar10);
            if (((ulong)pbVar18 & 1) == 0) {
              pbVar18 = &DAT_100f19130;
              _swift_allocObject(&DAT_100f19130,0x21,7);
              *(byte **)(pbVar18 + 0x10) = pbVar25;
              pbVar18[0x18] = 0;
              pbVar18[0x19] = 0;
              pbVar18[0x1a] = 0;
              pbVar18[0x1b] = 0;
              pbVar18[0x1c] = 0;
              pbVar18[0x1d] = 0;
              pbVar18[0x1e] = 0;
              pbVar18[0x1f] = 0;
              pbVar18[0x20] = 0;
              pcVar23 = *(code **)(lVar10 + 0x18);
              _swift_retain(pbVar25);
              (*pcVar23)(thunk_FUN_10090f070,pbVar18,unaff_x24,lVar10);
              _swift_release_n(pbVar25,2);
              _swift_release();
            }
            else {
              _swift_beginAccess(pbVar25 + 0x10,auStack_1a8,1,0);
              uVar21 = 0;
              unaff_x24 = (byte *)0x0;
              pbVar18 = (byte *)0x0;
              if (pbVar25[0x18] == 0xff) {
                pbVar25[0x10] = 0;
                pbVar25[0x11] = 0;
                pbVar25[0x12] = 0;
                pbVar25[0x13] = 0;
                pbVar25[0x14] = 0;
                pbVar25[0x15] = 0;
                pbVar25[0x16] = 0;
                pbVar25[0x17] = 0;
                pbVar25[0x18] = 0;
                _swift_beginAccess(pbVar25 + 0x30,auStack_1c0,1,0);
                uVar21 = *(undefined8 *)(pbVar25 + 0x30);
                unaff_x24 = *(byte **)(pbVar25 + 0x38);
                pbVar18 = *(byte **)(pbVar25 + 0x40);
                pbVar25[0x38] = 0;
                pbVar25[0x39] = 0;
                pbVar25[0x3a] = 0;
                pbVar25[0x3b] = 0;
                pbVar25[0x3c] = 0;
                pbVar25[0x3d] = 0;
                pbVar25[0x3e] = 0;
                pbVar25[0x3f] = 0;
                pbVar25[0x40] = 0;
                pbVar25[0x41] = 0;
                pbVar25[0x42] = 0;
                pbVar25[0x43] = 0;
                pbVar25[0x44] = 0;
                pbVar25[0x45] = 0;
                pbVar25[0x46] = 0;
                pbVar25[0x47] = 0;
                pbVar25[0x30] = 0;
                pbVar25[0x31] = 0;
                pbVar25[0x32] = 0;
                pbVar25[0x33] = 0;
                pbVar25[0x34] = 0;
                pbVar25[0x35] = 0;
                pbVar25[0x36] = 0;
                pbVar25[0x37] = 0;
              }
              FUN_1006486f8(uVar21,unaff_x24,pbVar18);
              FUN_100004550(uVar21,unaff_x24);
              _swift_release_n(pbVar25,2);
              _swift_bridgeObjectRelease();
            }
          }
        }
      }
    } while ((uVar13 & 0xff) == 0);
    if ((((uint)uVar13 & 0xff) == 2) || (local_278 == lVar7)) {
      pbVar25 = (byte *)0x0;
LAB_100937434:
      if (*(char *)(param_1 + 0x60) == '\x01') {
        _swift_release(param_2);
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x88))();
        *(byte *)(param_1 + 0x60) = *pbVar18 & 1;
        _swift_release(param_2);
      }
      return pbVar25;
    }
    bVar4 = local_278 == -1;
    local_278 = local_278 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009373f4);
      (*pcVar23)();
    }
  } while( true );
}



/* Address: 0x1009375d0 | FUN_1009375d0 */

void FUN_1009375d0(long param_1,char param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_2 == '\0') {
    _swift_release(param_4);
    FUN_1008db6b0(param_1,0);
  }
  else if (param_2 == '\x01') {
    if ((param_3 & 1) == 0) {
      FUN_1009376d8();
      _swift_allocError(&DAT_100f18df0,param_1,0,0);
      _swift_release(param_4);
    }
    else {
      _swift_release(param_4);
    }
  }
  else {
    if (param_1 == 0) {
      FUN_100937718();
      puVar1 = &DAT_100f18dd0;
    }
    else {
      if ((param_3 & 1) != 0) {
        return;
      }
      FUN_1009376d8();
      puVar1 = &DAT_100f18df0;
    }
    _swift_allocError(puVar1,param_1,0,0);
  }
  return;
}



/* Address: 0x1009376d0 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1009376d4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009376d8 | FUN_1009376d8 */

void FUN_1009376d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85130,&DAT_100f18df0);
  DAT_100fed078 = pTVar1;
  return;
}



/* Address: 0x100937718 | FUN_100937718 */

void FUN_100937718(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed080 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c850f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c850f0,&DAT_100f18dd0);
  DAT_100fed080 = pTVar1;
  return;
}



/* Address: 0x100937758 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10093775c | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x100937760 | FUN_100937760 */

void FUN_100937760(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),param_2,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(char *)(param_1 + 1) = (char)uVar1;
  }
  return;
}



/* Address: 0x100937798 | FUN_100937798 */

void FUN_100937798(undefined8 *param_1)

{
  FUN_10000c650(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
  _swift_release(param_1[3]);
  return;
}



/* Address: 0x1009377d8 | FUN_1009377d8 */

undefined8 * FUN_1009377d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  
  uVar5 = *(uint7 *)(param_2 + 2);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar4 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_100656200(uVar1,uVar2,(ulong)*(uint7 *)(param_2 + 2));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(int *)(param_1 + 2) = (int)uVar5;
  param_1[3] = param_2[3];
  _swift_retain();
  return param_1;
}



/* Address: 0x100937858 | FUN_100937858 */

undefined8 * FUN_100937858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar8 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_100656200(uVar8,uVar2,(ulong)*(uint7 *)(param_2 + 2));
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar6 = *(uint7 *)(param_1 + 2);
  *param_1 = uVar8;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  FUN_10000c650(uVar1,uVar3,(ulong)uVar6);
  uVar8 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar8);
  return param_1;
}



/* Address: 0x100937904 | FUN_100937904 */

undefined8 * FUN_100937904(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint7 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined2 *)((long)param_2 + 0x14);
  uVar2 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar4 = *(uint7 *)(param_1 + 2);
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = uVar3;
  *(undefined1 *)((long)param_1 + 0x16) = uVar2;
  FUN_10000c650(uVar5,uVar6,(ulong)uVar4);
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar5);
  return param_1;
}



/* Address: 0x100937980 | FUN_100937980 */

int FUN_100937980(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1009379dc | FUN_1009379dc */

void FUN_1009379dc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x100937a30 | FUN_100937a30 */

undefined1  [16] FUN_100937a30(void)

{
  return ZEXT816(0x100f19250);
}



/* Address: 0x100937a40 | thunk_FUN_100936454 */

void thunk_FUN_100936454(void)

{
  FUN_100936454();
  return;
}



/* Address: 0x100937a44 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100937a48 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100937a4c | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100937a50 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100937a54 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100937a58 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100937a5c | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100937a60 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100937a64 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100937a68 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100937a6c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100937a70 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100937a74 | thunk_FUN_100937a78 */

undefined1  [16] thunk_FUN_100937a78(void)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  ppuVar3 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar3 == extraout_x8) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x38);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b10);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b14);
      (*pcVar1)();
    }
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x100937a78 | FUN_100937a78 */

undefined1  [16] FUN_100937a78(void)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  ppuVar3 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar3 == extraout_x8) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x38);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b10);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b14);
      (*pcVar1)();
    }
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x100937b14 | FUN_100937b14 */

void FUN_100937b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_f0 [40];
  pthread_mutexattr_t local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  long local_68;
  
  pcVar1 = (code *)auStack_f0;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined2 *)(unaff_x20 + 0x170) = 0;
  *(undefined1 *)(unaff_x20 + 0x172) = 0;
  uVar6 = *(undefined8 *)(param_4 + 0x78);
  lVar4 = param_4;
  FUN_100936434(0);
  _swift_allocObject();
  _swift_retain();
  FUN_1009362b4();
  *(undefined8 *)(unaff_x20 + 0x178) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  puVar3 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
  _swift_allocObject();
  local_c8.__sig = 0;
  local_c8.__opaque[0] = '\0';
  local_c8.__opaque[1] = '\0';
  local_c8.__opaque[2] = '\0';
  local_c8.__opaque[3] = '\0';
  local_c8.__opaque[4] = '\0';
  local_c8.__opaque[5] = '\0';
  local_c8.__opaque[6] = '\0';
  local_c8.__opaque[7] = '\0';
  _swift_retain(param_1);
  _pthread_mutexattr_init(&local_c8);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x10),&local_c8);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100937e20);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  puVar3 = &DAT_100fecf58;
  FUN_1000f7830(&DAT_100fecf58,&DAT_100c84f70);
  uVar6 = 0x11;
  uVar5 = 7;
  _swift_allocObject();
  puVar3[0x10] = 0;
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 4;
  *(undefined2 *)(unaff_x20 + 0xd0) = 0x100;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xf000000000000007;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  FUN_100611728();
  *(undefined **)(unaff_x20 + 0x138) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar5;
  *(long *)(unaff_x20 + 0x150) = lVar4;
  *(undefined **)(unaff_x20 + 0xf0) = puVar3;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar5;
  *(long *)(unaff_x20 + 0x108) = lVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(long *)(unaff_x20 + 0x30) = param_4;
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = param_4;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  FUN_100076688(param_5,auStack_f0);
  _swift_unknownObjectRetain(param_2);
  _swift_retain_n(param_4,2);
  _swift_retain(param_1);
  FUN_100660e04(&local_c8,4);
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x88) = local_a8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x98) = local_98;
  *(ulong *)(unaff_x20 + 0xb0) = CONCAT71(uStack_7f,uStack_80);
  *(undefined8 *)(unaff_x20 + 0xa8) = local_88;
  *(undefined8 *)(unaff_x20 + 0xb9) = uStack_77;
  *(ulong *)(unaff_x20 + 0xb1) = CONCAT17(uStack_78,uStack_7f);
  *(char (*) [8])(unaff_x20 + 0x70) = local_c8.__opaque;
  *(long *)(unaff_x20 + 0x68) = local_c8.__sig;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x78) = local_b8;
  if (DAT_100fec610 != -1) {
    pcVar1 = FUN_100901fcc;
    _swift_once(&DAT_100fec610);
  }
  _swift_willThrow();
  _swift_willThrow();
  uVar6 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000007;
  FUN_1005d8534(uVar6);
  FUN_1005d8534(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x20 + 0x118) = param_4;
  *(undefined ***)(unaff_x20 + 0x120) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar6;
  *(undefined2 *)(unaff_x20 + 0x130) = 0;
  *(undefined1 *)(unaff_x20 + 0x132) = 0;
  _swift_retain(param_4);
  _swift_retain();
  FUN_1009390f8();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar6;
  *(code **)(unaff_x20 + 0x50) = pcVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  FUN_100631d88(0);
  _swift_allocObject();
  lVar4 = unaff_x20;
  _swift_retain();
  FUN_10062b720();
  _swift_release_n(param_1,2);
  _swift_release(param_4);
  _swift_unknownObjectRelease(param_2);
  FUN_100004594(param_5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(long *)(unaff_x20 + 0xd8) = lVar4;
  _swift_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


