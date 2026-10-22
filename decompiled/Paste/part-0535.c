/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10061baec | FUN_10061baec */

void FUN_10061baec(ulong param_1)

{
  code *pcVar1;
  undefined8 *unaff_x20;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_1 & 1) == 0) {
    FUN_10060fd58();
    FUN_10061c7c4(&local_38);
    unaff_x20[1] = uStack_30;
    *unaff_x20 = local_38;
    unaff_x20[3] = uStack_20;
    unaff_x20[2] = local_28;
    unaff_x20[4] = local_18;
    return;
  }
  if ((long)unaff_x20[3] <= (long)unaff_x20[4]) {
    FUN_100619ee8();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bb48);
  (*pcVar1)();
}



/* Address: 0x10061bb48 | FUN_10061bb48 */

void FUN_10061bb48(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_10061c1fc();
  if (unaff_x21 == 0) {
    if (*(long *)(unaff_x20 + 0x20) < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bb84);
      (*pcVar1)();
    }
    FUN_100619ee8();
  }
  return;
}



/* Address: 0x10061bb84 | FUN_10061bb84 */

void FUN_10061bb84(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  if (param_3 < 0) {
    uVar3 = 0;
    uVar6 = 0;
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = 0;
    lVar4 = 0;
    if ((long)(param_5 & 0xffffffff) <= param_2) {
      if ((long)((param_5 >> 0x20) - param_3) < param_2) {
        uVar6 = 0;
        uVar5 = 0;
        uVar2 = 0;
        uVar3 = 0;
        lVar4 = 0;
      }
      else {
        uVar5 = param_2 + param_3;
        if (SCARRY8(param_2,param_3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bc74);
          (*pcVar1)();
        }
        if ((long)uVar5 < param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bc78);
          (*pcVar1)();
        }
        if ((int)param_6 - ((uint)(param_6 >> 0x30) & 0xff | (uint)(param_6 >> 0x18) & 0xffff00) <
            uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bc7c);
          (*pcVar1)();
        }
        uVar6 = param_6 & 0xffffffffffffff;
        _swift_retain(param_4);
        uVar2 = param_4;
        uVar3 = param_5;
        lVar4 = param_2;
      }
    }
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  param_1[3] = lVar4;
  param_1[4] = uVar5;
  return;
}



/* Address: 0x10061bc7c | FUN_10061bc7c */

long FUN_10061bc7c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  thunk_FUN_10061160c(lVar2,param_1[4] - lVar2,*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
  if (lVar2 != 0) {
    FUN_10060fd58(param_1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bcf0);
  (*pcVar1)();
}



/* Address: 0x10061bcf0 | FUN_10061bcf0 */

uint FUN_10061bcf0(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = param_1[3];
  lVar7 = param_1[4] - uVar3;
  if (SBORROW8(param_1[4],uVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bde4);
    (*pcVar1)();
  }
  uVar4 = param_2[3];
  if (SBORROW8(param_2[4],uVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bde8);
    (*pcVar1)();
  }
  if (lVar7 == param_2[4] - uVar4) {
    uVar8 = *param_1;
    lVar6 = lVar7;
    thunk_FUN_10061160c(uVar3,lVar7,uVar8,param_1[1],(ulong)(uint7)param_1[2]);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bdec);
      (*pcVar1)();
    }
    uVar9 = *param_2;
    thunk_FUN_10061160c(uVar4,lVar7,uVar9,param_2[1],(ulong)(uint7)param_2[2]);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061bdf0);
      (*pcVar1)();
    }
    uVar5 = uVar3;
    FUN_100613e94(uVar3,lVar6,uVar8 & 0xffffffffffffff,uVar4,lVar7,uVar9 & 0xffffffffffffff);
    _swift_release(uVar3);
    _swift_release(uVar4);
    uVar2 = (uint)uVar5 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x10061bdf0 | FUN_10061bdf0 */

uint FUN_10061bdf0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = param_1[3];
  lVar8 = param_1[4] - uVar4;
  if (SBORROW8(param_1[4],uVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061bef8);
    (*pcVar2)();
  }
  uVar5 = param_2[3];
  if (SBORROW8(param_2[4],uVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061befc);
    (*pcVar2)();
  }
  if (lVar8 == param_2[4] - uVar5) {
    uVar9 = *param_1;
    uVar10 = *param_2;
    uVar6 = param_2[1];
    uVar1 = param_2[2];
    lVar7 = lVar8;
    thunk_FUN_10061160c(uVar4,lVar8,uVar9,param_1[1],(ulong)(uint7)param_1[2]);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061bf00);
      (*pcVar2)();
    }
    thunk_FUN_10061160c(uVar5,lVar8,uVar10,uVar6,(ulong)(uint7)uVar1);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10061bf04);
      (*pcVar2)();
    }
    uVar6 = uVar4;
    FUN_100613e94(uVar4,lVar7,uVar9 & 0xffffffffffffff,uVar5,lVar8,uVar10 & 0xffffffffffffff);
    _swift_release(uVar4);
    _swift_release(uVar5);
    uVar3 = (uint)uVar6 & 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x10061bf04 | FUN_10061bf04 */

void FUN_10061bf04(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar3 = unaff_x20[3];
  uVar4 = unaff_x20[4] - uVar3;
  if (SBORROW8(unaff_x20[4],uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061bfb8);
    (*pcVar2)();
  }
  uVar5 = *unaff_x20;
  thunk_FUN_10061160c();
  if (uVar3 != 0) {
    _swift_beginAccess(uVar3 + 0x18,auStack_58,0,0);
    lVar1 = *(long *)(uVar3 + 0x18) + (uVar5 >> 0x18 & 0xffff00) + (uVar5 >> 0x30 & 0xff);
    Swift::Hasher::combine
              ((undefined *)(lVar1 + (uVar4 & 0xffffffff)),(undefined *)(lVar1 + (uVar4 >> 0x20)));
    _swift_release(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10061bfbc);
  (*pcVar2)();
}



/* Address: 0x10061bfbc | FUN_10061bfbc */

void FUN_10061bfbc(void)

{
  long lVar1;
  code *pcVar2;
  Hasher HVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 auStack_90 [96];
  
  Swift::Hasher::init(0);
  HVar3.unknown = (undefined *)unaff_x20[3];
  uVar4 = unaff_x20[4] - (long)HVar3.unknown;
  if (SBORROW8(unaff_x20[4],(long)HVar3.unknown)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061c078);
    (*pcVar2)();
  }
  uVar5 = *unaff_x20;
  thunk_FUN_10061160c();
  if (HVar3.unknown != (undefined *)0x0) {
    _swift_beginAccess(HVar3.unknown + 0x18,auStack_90,0,0);
    lVar1 = *(long *)(HVar3.unknown + 0x18) + (uVar5 >> 0x18 & 0xffff00) + (uVar5 >> 0x30 & 0xff);
    Swift::Hasher::combine
              ((undefined *)(lVar1 + (uVar4 & 0xffffffff)),(undefined *)(lVar1 + (uVar4 >> 0x20)));
    _swift_release();
    Swift::Hasher::_finalize(HVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10061c07c);
  (*pcVar2)();
}



/* Address: 0x10061c07c | thunk_FUN_10061bfbc */

void thunk_FUN_10061bfbc(void)

{
  FUN_10061bfbc();
  return;
}



/* Address: 0x10061c080 | thunk_FUN_10061bf04 */

void thunk_FUN_10061bf04(void)

{
  FUN_10061bf04();
  return;
}



/* Address: 0x10061c084 | FUN_10061c084 */

void FUN_10061c084(__int64 param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  Hasher HVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined1 auStack_b0 [96];
  
  uVar6 = *unaff_x20;
  HVar4.unknown = (undefined *)unaff_x20[3];
  uVar2 = unaff_x20[4];
  Swift::Hasher::init(param_1);
  uVar5 = uVar2 - (long)HVar4.unknown;
  if (SBORROW8(uVar2,(long)HVar4.unknown)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061c158);
    (*pcVar3)();
  }
  thunk_FUN_10061160c();
  if (HVar4.unknown != (undefined *)0x0) {
    _swift_beginAccess(HVar4.unknown + 0x18,auStack_b0,0,0);
    lVar1 = *(long *)(HVar4.unknown + 0x18) + (uVar6 >> 0x18 & 0xffff00) + (uVar6 >> 0x30 & 0xff);
    Swift::Hasher::combine
              ((undefined *)(lVar1 + (uVar5 & 0xffffffff)),(undefined *)(lVar1 + (uVar5 >> 0x20)));
    _swift_release();
    Swift::Hasher::_finalize(HVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10061c15c);
  (*pcVar3)();
}



/* Address: 0x10061c15c | FUN_10061c15c */

void FUN_10061c15c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_10061c860(&local_48);
  _swift_bridgeObjectRelease(param_2);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[4] = local_28;
  return;
}



/* Address: 0x10061c1a8 | FUN_10061c1a8 */

void FUN_10061c1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_100619594(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_3);
  return;
}



/* Address: 0x10061c1d8 | FUN_10061c1d8 */

void FUN_10061c1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10061a528(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_3);
  return;
}



/* Address: 0x10061c1fc | FUN_10061c1fc */

ulong FUN_10061c1fc(code *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  ushort uVar12;
  uint3 uVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong local_108;
  ulong uStack_100;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  undefined1 local_51;
  
  uVar22 = *unaff_x20;
  uVar1 = (uint)unaff_x20[1];
  iVar4 = *(int *)((long)unaff_x20 + 0xc);
  uStack_100 = (ulong)*(ushort *)((long)unaff_x20 + 0x14);
  local_108 = (ulong)*(byte *)((long)unaff_x20 + 0x16);
  uVar5 = unaff_x20[3];
  uVar6 = unaff_x20[4];
  _swift_beginAccess(uVar22 + 0x18,auStack_80,0,0);
  uVar17 = uVar5;
  if (uVar6 != uVar5) {
    lVar23 = 0;
    uVar17 = (ulong)uVar1 + (ulong)(iVar4 - uVar1);
    uVar2 = uVar5;
    if ((long)uVar5 <= (long)uVar6) {
      uVar2 = uVar6;
    }
    uVar21 = uVar5;
    if ((long)uVar5 <= (long)uVar17) {
      uVar21 = uVar17;
    }
    uVar20 = uVar5 + uStack_100 * 0x100 + local_108;
    do {
      if ((uVar5 - uVar2) + lVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c588);
        (*pcVar14)();
      }
      if ((long)uVar5 < (long)(ulong)uVar1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c58c);
        (*pcVar14)();
      }
      if ((uVar5 - uVar21) + lVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c590);
        (*pcVar14)();
      }
      local_98[0] = *(undefined1 *)(*(long *)(uVar22 + 0x18) + uVar20 + lVar23);
      uVar17 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        return uVar20;
      }
      if ((uVar17 & 1) != 0) {
        uVar17 = uVar5 + lVar23;
        if ((uVar6 - uVar5) + -1 == lVar23) {
          return uVar17;
        }
        do {
          uVar2 = uVar5 + lVar23 + 1;
          if ((long)uVar2 < (long)uVar5 || (long)uVar6 <= (long)uVar2) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c594);
            (*pcVar14)();
          }
          uVar21 = (ulong)(uint)unaff_x20[1];
          if ((long)uVar2 < (long)uVar21) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c598);
            (*pcVar14)();
          }
          uVar20 = (ulong)(*(int *)((long)unaff_x20 + 0xc) - (uint)unaff_x20[1]);
          if ((long)uVar20 <= (long)(((uVar5 + lVar23) - uVar21) + 1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c59c);
            (*pcVar14)();
          }
          _swift_beginAccess(uVar22 + 0x18,local_98,0,0);
          uVar19 = local_108 | uStack_100 << 8;
          local_51 = *(undefined1 *)(*(long *)(uVar22 + 0x18) + uVar19 + uVar5 + lVar23 + 1);
          puVar18 = &local_51;
          (*param_1)();
          if (((ulong)puVar18 & 1) == 0) {
            if (uVar2 != uVar17) {
              if (((long)uVar17 < (long)uVar5) || ((long)uVar6 <= (long)uVar17)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5a0);
                (*pcVar14)();
              }
              if ((long)uVar17 < (long)uVar21) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5a4);
                (*pcVar14)();
              }
              if ((long)uVar20 <= (long)(uVar17 - uVar21)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5a8);
                (*pcVar14)();
              }
              if (uVar17 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5ac);
                (*pcVar14)();
              }
              uVar1 = (uint)uVar17 + 1;
              if (0xfffffffe < (uint)uVar17) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5b0);
                (*pcVar14)();
              }
              lVar3 = *(long *)(uVar22 + 0x18) + uVar19;
              uVar10 = *(undefined1 *)(lVar3 + uVar17);
              uVar7 = *(undefined1 *)(lVar3 + uVar5 + lVar23 + 1);
              uVar22 = *unaff_x20;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar15 = (uint)uVar22;
              if ((uVar22 & 1) == 0) {
                iVar4 = 0;
                if ((uint)unaff_x20[2] <= uVar1) {
                  iVar4 = uVar1 - (uint)unaff_x20[2];
                }
                FUN_1000d2130();
                FUN_100612358(iVar4,uVar15 & 1);
              }
              FUN_100612380(1,uVar17);
              uVar20 = *unaff_x20;
              uVar1 = (uint)unaff_x20[2];
              uVar11 = *(undefined2 *)((long)unaff_x20 + 0x14);
              uVar8 = *(undefined1 *)((long)unaff_x20 + 0x16);
              _swift_beginAccess(uVar20 + 0x18,auStack_b0,0,0);
              uVar13 = CONCAT21(uVar11,uVar8);
              uVar21 = (ulong)(uVar1 - uVar13);
              uVar22 = uVar17;
              if (uVar21 <= uVar17) {
                uVar22 = uVar21;
              }
              uVar21 = 0;
              if (uVar17 != 0) {
                uVar21 = uVar22;
              }
              *(undefined1 *)(*(long *)(uVar20 + 0x18) + (ulong)uVar13 + uVar21) = uVar7;
              if (0xfffffffe < uVar5 + lVar23) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5b4);
                (*pcVar14)();
              }
              lVar3 = uVar5 + lVar23 + 1;
              uVar16 = (uint)lVar3;
              uVar15 = uVar16 + 1;
              if (0xfffffffe < uVar16) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x10061c5b8);
                (*pcVar14)();
              }
              uVar22 = *unaff_x20;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar16 = (uint)uVar22;
              if ((uVar22 & 1) == 0) {
                iVar4 = 0;
                if (uVar1 <= uVar15) {
                  iVar4 = uVar15 - uVar1;
                }
                FUN_1000d2130();
                FUN_100612358(iVar4,uVar16 & 1);
              }
              FUN_100612380(1,lVar3);
              uVar22 = *unaff_x20;
              uVar21 = unaff_x20[2];
              uVar12 = *(ushort *)((long)unaff_x20 + 0x14);
              uStack_100 = (ulong)uVar12;
              bVar9 = *(byte *)((long)unaff_x20 + 0x16);
              local_108 = (ulong)bVar9;
              _swift_beginAccess(uVar22 + 0x18,auStack_c8,0,0);
              uVar13 = CONCAT21(uVar12,bVar9);
              uVar21 = (ulong)((int)uVar21 - (uint)uVar13);
              if (uVar21 <= uVar2) {
                uVar2 = uVar21;
              }
              *(undefined1 *)(*(long *)(uVar22 + 0x18) + (ulong)uVar13 + uVar2) = uVar10;
            }
            uVar17 = uVar17 + 1;
          }
          lVar23 = lVar23 + 1;
          if ((uVar5 - uVar6) + lVar23 == -1) {
            return uVar17;
          }
        } while( true );
      }
      lVar23 = lVar23 + 1;
      uVar17 = uVar6;
    } while (uVar6 - uVar5 != lVar23);
  }
  return uVar17;
}



/* Address: 0x10061c5b8 | FUN_10061c5b8 */

undefined1  [16] FUN_10061c5b8(long *param_1,char param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_68 [24];
  
  lVar8 = *param_1;
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  bVar2 = *(byte *)((long)param_1 + 0x16);
  _swift_beginAccess(lVar8 + 0x18,auStack_68,0,0);
  lVar5 = param_1[3];
  lVar1 = param_1[4];
  if (SBORROW8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10061c684);
    (*pcVar4)();
  }
  if (lVar1 != lVar5) {
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(lVar8 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + lVar5 + lVar7)
          == param_2) {
        lVar5 = lVar7 + *(long *)(param_3 + 0x18);
        if (SCARRY8(lVar7,*(long *)(param_3 + 0x18))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10061c688);
          (*pcVar4)();
        }
        uVar6 = 0;
        goto LAB_10061c660;
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 - lVar5 != lVar7);
  }
  lVar5 = 0;
  uVar6 = 1;
LAB_10061c660:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = lVar5;
  return auVar9;
}



/* Address: 0x10061c688 | FUN_10061c688 */

undefined1  [16] FUN_10061c688(long *param_1,char param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [24];
  
  lVar9 = *param_1;
  uVar4 = *(ushort *)((long)param_1 + 0x14);
  bVar3 = *(byte *)((long)param_1 + 0x16);
  _swift_beginAccess(lVar9 + 0x18,auStack_68,0,0);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c76c);
    (*pcVar5)();
  }
  if (uVar2 != uVar1) {
    lVar7 = ~uVar1 + uVar2;
    pcVar8 = (char *)(uVar2 + (ulong)uVar4 * 0x100 + (ulong)bVar3 + *(long *)(lVar9 + 0x18));
    do {
      pcVar8 = pcVar8 + -1;
      if ((long)(uVar2 - uVar1) <= lVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c768);
        (*pcVar5)();
      }
      if (*pcVar8 == param_2) {
        lVar9 = lVar7 + *(long *)(param_3 + 0x18);
        if (SCARRY8(lVar7,*(long *)(param_3 + 0x18))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c770);
          (*pcVar5)();
        }
        uVar6 = 0;
        goto LAB_10061c744;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != -1);
  }
  lVar9 = 0;
  uVar6 = 1;
LAB_10061c744:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = lVar9;
  return auVar10;
}



/* Address: 0x10061c770 | FUN_10061c770 */

undefined1  [16] FUN_10061c770(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061c7c0);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (((long)uVar1 < 1) && ((long)param_2 < (long)uVar1)) goto LAB_10061c7a0;
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
LAB_10061c7a0:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061c7c4);
    (*pcVar2)();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 + param_2;
  return auVar3;
}



/* Address: 0x10061c7c4 | FUN_10061c7c4 */

void FUN_10061c7c4(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  
  if (DAT_100fd6f38 != -1) {
    _swift_once(&DAT_100fd6f38,FUN_100611c84);
  }
  uVar7 = DAT_101057be6;
  uVar6 = DAT_101057be4;
  iVar5 = DAT_101057be0;
  uVar4 = DAT_101057bd8._4_4_;
  uVar3 = (uint)DAT_101057bd8;
  uVar1 = (ulong)(uint)DAT_101057bd8;
  uVar2 = (ulong)DAT_101057bd8._4_4_;
  if ((uint)DAT_101057bd8 <= DAT_101057bd8._4_4_) {
    if (DAT_101057bd8._4_4_ <= DAT_101057be0 - (uint)CONCAT21(DAT_101057be4,DAT_101057be6)) {
      *param_1 = DAT_101057bd0;
      *(uint *)(param_1 + 1) = uVar3;
      *(uint *)((long)param_1 + 0xc) = uVar4;
      *(int *)(param_1 + 2) = iVar5;
      *(undefined2 *)((long)param_1 + 0x14) = uVar6;
      *(undefined1 *)((long)param_1 + 0x16) = uVar7;
      param_1[3] = uVar1;
      param_1[4] = uVar2;
      _swift_retain();
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10061c860);
    (*pcVar8)();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10061c85c);
  (*pcVar8)();
}



/* Address: 0x10061c860 | FUN_10061c860 */

void FUN_10061c860(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_98;
  undefined2 local_8c;
  undefined1 local_8a;
  ulong local_78;
  undefined4 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  ulong uStack_60;
  ulong uStack_58;
  
  FUN_10061c7c4(&local_78);
  uVar4 = local_68;
  uVar3 = CONCAT44(uStack_64,local_68);
  if ((long)uStack_58 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c97c);
    (*pcVar5)();
  }
  if (uStack_58 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c980);
    (*pcVar5)();
  }
  uVar8 = *(ulong *)(param_2 + 0x10);
  if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c984);
    (*pcVar5)();
  }
  uVar1 = (uint)uStack_58 + (uint)uVar8;
  if (!CARRY4((uint)uStack_58,(uint)uVar8)) {
    uVar7 = local_78;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      iVar2 = 0;
      if (local_68 <= uVar1) {
        iVar2 = uVar1 - local_68;
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,uVar6 & 1);
    }
    FUN_100612380(uVar8,uStack_58);
    FUN_10061258c(param_2 + 0x20,param_2 + 0x20 + uVar8,uStack_58);
    uVar8 = uVar8 + uStack_58;
    if ((long)uVar8 < (long)uStack_60) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c98c);
      (*pcVar5)();
    }
    if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c990);
      (*pcVar5)();
    }
    local_8c = (undefined2)uStack_64;
    local_8a = (undefined1)((uint)uStack_64 >> 0x10);
    if ((uint)uVar8 <= uVar4 - CONCAT21(local_8c,local_8a)) {
      uStack_98 = CONCAT44((uint)uVar8,uStack_70);
      param_1[4] = uVar8;
      param_1[1] = uStack_98;
      *param_1 = local_78;
      param_1[3] = uStack_60;
      param_1[2] = uVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c994);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10061c988);
  (*pcVar5)();
}



/* Address: 0x10061c994 | FUN_10061c994 */

void FUN_10061c994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68118,&DAT_100eeb2d0);
  DAT_100fd70c8 = pTVar1;
  return;
}



/* Address: 0x10061c9d4 | FUN_10061c9d4 */

void FUN_10061c9d4(void)

{
  FUN_10061cb50(&DAT_100fd70d0,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x10061c9f8 | FUN_10061c9f8 */

void FUN_10061c9f8(void)

{
  undefined *puVar1;
  
  if (DAT_100fd70e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fd70e0 = puVar1;
  return;
}



/* Address: 0x10061ca38 | thunk_FUN_10061ca3c */

void thunk_FUN_10061ca3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c680c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c680c8,&DAT_100eeb2d0);
  DAT_100fd70e8 = pTVar1;
  return;
}



/* Address: 0x10061ca3c | FUN_10061ca3c */

void FUN_10061ca3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c680c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c680c8,&DAT_100eeb2d0);
  DAT_100fd70e8 = pTVar1;
  return;
}



/* Address: 0x10061ca7c | thunk_FUN_10061ca80 */

void thunk_FUN_10061ca80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68178,&DAT_100eeb2d0);
  DAT_100fd70f0 = pTVar1;
  return;
}



/* Address: 0x10061ca80 | FUN_10061ca80 */

void FUN_10061ca80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68178;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68178,&DAT_100eeb2d0);
  DAT_100fd70f0 = pTVar1;
  return;
}



/* Address: 0x10061cac0 | FUN_10061cac0 */

void FUN_10061cac0(void)

{
  FUN_10061cb50(&DAT_100fd70f8,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x10061cae4 | thunk_FUN_10061c994 */

void thunk_FUN_10061c994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68118,&DAT_100eeb2d0);
  DAT_100fd70c8 = pTVar1;
  return;
}



/* Address: 0x10061cae8 | thunk_FUN_10061caec */

void thunk_FUN_10061caec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68260,&DAT_100eeb2d0);
  DAT_100fd7100 = pTVar1;
  return;
}



/* Address: 0x10061caec | FUN_10061caec */

void FUN_10061caec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68260,&DAT_100eeb2d0);
  DAT_100fd7100 = pTVar1;
  return;
}



/* Address: 0x10061cb2c | FUN_10061cb2c */

void FUN_10061cb2c(void)

{
  FUN_10061cb50(&DAT_100fd7108,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x10061cb50 | FUN_10061cb50 */

void FUN_10061cb50(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fd70d8;
    FUN_1000f8b08(&DAT_100fd70d8,&DAT_100c680c0);
    puVar2 = puVar1;
    FUN_10061c9f8();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10061cbc4 | thunk_FUN_10061cbc8 */

void thunk_FUN_10061cbc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd7110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd7118;
  FUN_1000f8b08(&DAT_100fd7118,&DAT_100c68258);
  puVar2 = PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0,puVar1
            );
  DAT_100fd7110 = puVar2;
  return;
}



/* Address: 0x10061cbc8 | FUN_10061cbc8 */

void FUN_10061cbc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd7110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd7118;
  FUN_1000f8b08(&DAT_100fd7118,&DAT_100c68258);
  puVar2 = PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0,puVar1
            );
  DAT_100fd7110 = puVar2;
  return;
}



/* Address: 0x10061cc18 | thunk_FUN_10061cc1c */

void thunk_FUN_10061cc1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c682c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c682c8,&DAT_100eeb2d0);
  DAT_100fd7120 = pTVar1;
  return;
}



/* Address: 0x10061cc1c | FUN_10061cc1c */

void FUN_10061cc1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c682c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c682c8,&DAT_100eeb2d0);
  DAT_100fd7120 = pTVar1;
  return;
}



/* Address: 0x10061cc5c | thunk_FUN_10061cc60 */

void thunk_FUN_10061cc60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68338,&DAT_100eeb2d0);
  DAT_100fd7128 = pTVar1;
  return;
}



/* Address: 0x10061cc60 | FUN_10061cc60 */

void FUN_10061cc60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68338,&DAT_100eeb2d0);
  DAT_100fd7128 = pTVar1;
  return;
}



/* Address: 0x10061cca0 | thunk_FUN_10061cca4 */

void thunk_FUN_10061cca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c683f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c683f0,&DAT_100eeb2d0);
  DAT_100fd7130 = pTVar1;
  return;
}



/* Address: 0x10061cca4 | FUN_10061cca4 */

void FUN_10061cca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c683f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c683f0,&DAT_100eeb2d0);
  DAT_100fd7130 = pTVar1;
  return;
}



/* Address: 0x10061cce4 | FUN_10061cce4 */

undefined8 * FUN_10061cce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x10061cd30 | FUN_10061cd30 */

undefined8 * FUN_10061cd30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x10061cdac | FUN_10061cdac */

undefined8 * FUN_10061cdac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x10061ce08 | FUN_10061ce08 */

undefined1  [16] FUN_10061ce08(void)

{
  return ZEXT816(0x100eeb2d0);
}



/* Address: 0x10061ce18 | thunk_FUN_10061a928 */

void thunk_FUN_10061a928(void)

{
  FUN_10061a928();
  return;
}



/* Address: 0x10061ce1c | thunk_FUN_100619634 */

void thunk_FUN_100619634(void)

{
  FUN_100619634();
  return;
}



/* Address: 0x10061ce20 | thunk_FUN_10061a910 */

void thunk_FUN_10061a910(void)

{
  FUN_10061a910();
  return;
}



/* Address: 0x10061ce24 | thunk_FUN_10061c994 */

void thunk_FUN_10061c994(void)

{
  thunk_FUN_10061c994();
  return;
}



/* Address: 0x10061ce28 | thunk_FUN_10061ca80 */

void thunk_FUN_10061ca80(void)

{
  thunk_FUN_10061ca80();
  return;
}



/* Address: 0x10061ce2c | thunk_FUN_10061a958 */

void thunk_FUN_10061a958(void)

{
  FUN_10061a958();
  return;
}



/* Address: 0x10061ce30 | FUN_10061ce30 */

void FUN_10061ce30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    FUN_100629d44(param_1,param_2);
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType(uVar3);
  puVar4 = &DAT_100eeb8c0;
  _swift_allocObject(&DAT_100eeb8c0,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  puVar4[0x18] = (char)param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar5);
  (*pcVar6)(thunk_FUN_10061de00,puVar4,uVar3,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10061cf14 | FUN_10061cf14 */

void FUN_10061cf14(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  uVar2 = *(ulong *)(param_3 + 0x30);
  lVar1 = *(long *)(param_3 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    lVar1 = *(long *)(param_3 + 0x38);
    _swift_getObjectType(uVar3);
    puVar4 = &DAT_100eeb5d8;
    _swift_allocObject(&DAT_100eeb5d8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = param_3;
    puVar4[0x18] = (char)param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcVar5 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_retain(param_3);
    (*pcVar5)(FUN_10061de00,puVar4,uVar3,lVar1);
    _swift_release(param_3);
  }
  else {
    FUN_100629d44(param_1,param_2);
    puVar4 = param_3;
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x10061d000 | FUN_10061d000 */

undefined8 * FUN_10061d000(void)

{
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  return &DAT_101057be8;
}



/* Address: 0x10061d040 | FUN_10061d040 */

void FUN_10061d040(void)

{
  FUN_10061d170();
  return;
}



/* Address: 0x10061d05c | FUN_10061d05c */

void FUN_10061d05c(ulong param_1,undefined8 param_2,code *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ulong *)(lVar4 + 0x30);
  lVar1 = *(long *)(lVar4 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    (*param_3)(param_1,param_2);
    return;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x30);
  lVar1 = *(long *)(lVar4 + 0x38);
  _swift_getObjectType(uVar3);
  _swift_allocObject(param_4,0x28,7);
  *(long *)(param_4 + 0x10) = lVar4;
  *(ulong *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar4);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar5)(param_5,param_4,uVar3,lVar1);
  _swift_release(param_4);
  return;
}



/* Address: 0x10061d154 | FUN_10061d154 */

void FUN_10061d154(void)

{
  FUN_10061d170();
  return;
}



/* Address: 0x10061d170 | FUN_10061d170 */

void FUN_10061d170(ulong param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  uVar2 = *(ulong *)(param_3 + 0x30);
  lVar1 = *(long *)(param_3 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    lVar1 = *(long *)(param_3 + 0x38);
    _swift_getObjectType(uVar3);
    _swift_allocObject(param_6,0x28,7);
    *(long *)(param_6 + 0x10) = param_3;
    *(ulong *)(param_6 + 0x18) = param_1;
    *(undefined8 *)(param_6 + 0x20) = param_2;
    pcVar4 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_retain(param_3);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    (*pcVar4)(param_7,param_6,uVar3,lVar1);
    _swift_release(param_3);
  }
  else {
    (*param_5)(param_1,param_2);
    param_6 = param_3;
  }
  _swift_release(param_6);
  return;
}



/* Address: 0x10061d26c | FUN_10061d26c */

void FUN_10061d26c(void)

{
  FUN_10061d2a4();
  return;
}



/* Address: 0x10061d278 | FUN_10061d278 */

void FUN_10061d278(void)

{
  FUN_10061d300();
  return;
}



/* Address: 0x10061d284 | FUN_10061d284 */

void FUN_10061d284(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d374(param_1,param_2,FUN_10061de28,FUN_10062aae4);
  return;
}



/* Address: 0x10061d298 | FUN_10061d298 */

void FUN_10061d298(void)

{
  FUN_10061d2a4();
  return;
}



/* Address: 0x10061d2a4 | FUN_10061d2a4 */

void FUN_10061d2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  (*param_5)(param_1,param_2);
  _swift_release(param_3);
  return;
}



/* Address: 0x10061d2f4 | FUN_10061d2f4 */

void FUN_10061d2f4(void)

{
  FUN_10061d300();
  return;
}


