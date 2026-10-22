/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003c8054 | FUN_1003c8054 */

void FUN_1003c8054(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      puVar7 = local_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar8) {
        lVar10 = *param_3;
        lVar14 = *(long *)(lVar10 + lVar21 * 0x10 + 8);
        lVar12 = lVar9 * 0x10;
        lVar17 = *(long *)(lVar10 + lVar12 + 8);
        lVar15 = lVar9 + 2;
        plVar19 = (long *)(lVar10 + lVar12 + 0x28);
        lVar16 = lVar14;
        do {
          lVar18 = lVar15;
          lVar21 = lVar8;
          if (lVar8 == lVar18) break;
          lVar21 = *plVar19;
          bVar4 = lVar21 <= lVar16;
          lVar15 = lVar18 + 1;
          plVar19 = plVar19 + 2;
          lVar16 = lVar21;
          lVar21 = lVar18;
        } while (lVar17 < lVar14 != bVar4);
        if (lVar17 < lVar14) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83c8);
            (*pcVar3)();
          }
          if (lVar9 < lVar21) {
            lVar16 = lVar21 << 4;
            lVar15 = lVar21;
            lVar8 = lVar9;
            do {
              lVar15 = lVar15 + -1;
              if (lVar8 != lVar15) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83e8);
                  (*pcVar3)();
                }
                puVar13 = (undefined8 *)(lVar10 + lVar12);
                lVar14 = lVar10 + lVar16;
                uVar22 = *puVar13;
                uVar2 = puVar13[1];
                uVar25 = *(undefined8 *)(lVar14 + -0x10);
                puVar13[1] = *(undefined8 *)(lVar14 + -8);
                *puVar13 = uVar25;
                *(undefined8 *)(lVar14 + -0x10) = uVar22;
                *(undefined8 *)(lVar14 + -8) = uVar2;
              }
              lVar8 = lVar8 + 1;
              lVar16 = lVar16 + -0x10;
              lVar12 = lVar12 + 0x10;
            } while (lVar8 < lVar15);
            lVar8 = param_3[1];
          }
        }
      }
      lVar12 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83c4);
          (*pcVar3)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83cc);
            (*pcVar3)();
          }
          lVar15 = lVar9 + param_4;
          if (lVar8 <= lVar9 + param_4) {
            lVar15 = lVar8;
          }
          if (lVar15 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83d0);
            (*pcVar3)();
          }
          if (lVar21 != lVar15) {
            lVar8 = *param_3;
            puVar13 = (undefined8 *)(lVar8 + lVar21 * 0x10);
            lVar16 = lVar9 - lVar21;
            do {
              lVar10 = *(long *)(lVar8 + lVar21 * 0x10 + 8);
              lVar12 = lVar16;
              puVar20 = puVar13;
              do {
                if (lVar10 <= (long)puVar20[-1]) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83d4);
                  (*pcVar3)();
                }
                uVar22 = *puVar20;
                puVar20[1] = puVar20[-1];
                *puVar20 = puVar20[-2];
                puVar20[-1] = lVar10;
                puVar20 = puVar20 + -2;
                *puVar20 = uVar22;
                bVar4 = lVar12 != -1;
                lVar12 = lVar12 + 1;
              } while (bVar4);
              lVar21 = lVar21 + 1;
              puVar13 = puVar13 + 2;
              lVar16 = lVar16 + -1;
              lVar12 = lVar15;
            } while (lVar21 != lVar15);
          }
        }
      }
      if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83b4);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar24 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100392630(puVar7,uVar24 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar12;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83ec);
        (*pcVar3)();
      }
      FUN_1003c83f4(&local_58,*param_1,param_3);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_1003c8384;
      lVar8 = param_3[1];
      lVar9 = lVar12;
    } while (lVar12 < lVar8);
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83f4);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100392b74();
  }
  puVar23 = (ulong *)(puVar7 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83f0);
      (*pcVar3)();
    }
    plVar19 = (long *)(puVar7 + uVar24 * 0x10);
    lVar21 = *plVar19;
    puVar1 = puVar23 + uVar24 * 2;
    uVar11 = puVar1[1];
    FUN_100201524(lVar9 + lVar21 * 0x10,lVar9 + *puVar1 * 0x10,lVar9 + uVar11 * 0x10,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83b8);
      (*pcVar3)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83bc);
      (*pcVar3)();
    }
    *plVar19 = lVar21;
    plVar19[1] = uVar11;
    uVar11 = *puVar23;
    lVar9 = uVar11 - uVar24;
    if (uVar11 < uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c83c0);
      (*pcVar3)();
    }
    uVar24 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar23 = uVar24;
  }
LAB_1003c8384:
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1003c83f4 | FUN_1003c83f4 */

undefined8 FUN_1003c83f4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_100392b74();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1003c84cc;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8644);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1003c852c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8634);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c863c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c861c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8620);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8628);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8630);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1003c84cc:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8624);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c862c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8638);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8640);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1003c852c;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8648);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c860c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8664);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_100201524(lVar8 + lVar11 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8610);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8614);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003c8618);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Address: 0x1003c8664 | FUN_1003c8664 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1003c8664(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  NSFastEnumerationIterator NVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID self;
  ID self_00;
  NSFastEnumerationIterator NVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  ID IVar14;
  ID IVar15;
  long lVar16;
  double extraout_d0;
  double extraout_d0_00;
  undefined *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined1 auStack_98 [24];
  long local_80;
  undefined *local_78;
  
  NVar4 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  lVar16 = *(long *)(NVar4.unknown + -8);
  NVar8 = NVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  FUN_1003c7c4c(0x4060000000000000,0x4060000000000000);
  if (NVar8.unknown == (undefined *)0x0) {
    IVar5 = 0;
  }
  else {
    IVar5 = objc_stub::FUN_100c07da0((ID)NVar8.unknown);
    IVar6 = objc_stub::FUN_100c07d80((ID)NVar8.unknown);
    if (SUB168(SEXT816((long)IVar5) * SEXT816((long)IVar6),8) != (long)(IVar5 * IVar6) >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c89c0);
      (*pcVar3)();
    }
    puVar7 = &_OBJC_CLASS___NSCountedSet;
    _objc_allocWithZone();
    self = objc_stub::FUN_100c03c60((ID)puVar7,IVar5 * IVar6);
    if ((long)IVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c89c4);
      (*pcVar3)();
    }
    local_f0 = NVar4.unknown;
    if (IVar5 != 0) {
      if ((long)IVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c89c8);
        (*pcVar3)();
      }
      IVar14 = 0;
      do {
        if (IVar6 != 0) {
          IVar15 = 0;
          do {
            self_00 = objc_stub::FUN_100bff660((ID)NVar8.unknown,IVar14,IVar15);
            if (((self_00 != 0) && (objc_stub::alphaComponent(self_00), extraout_d0 == 1.0)) &&
               (objc_stub::saturationComponent(self_00), 0.25 < extraout_d0_00)) {
              objc_stub::addObject_(self,self_00);
            }
            IVar15 = IVar15 + 1;
          } while (IVar6 != IVar15);
        }
        IVar14 = IVar14 + 1;
      } while (IVar14 != IVar5);
    }
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    NVar8 = (extension_Foundation)::__C::NSSet::makeIterator();
    Foundation::NSFastEnumerationIterator::_next(NVar8);
    puVar2 = PTR___type_metadata_for_Any_100eae0c0;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (local_80 != 0) {
      FUN_100011080(auStack_98,auStack_c0);
      puVar9 = auStack_c0;
      FUN_100004640(puVar9,local_a8);
      Swift::__bridgeAnythingToObjectiveC();
      IVar5 = objc_stub::countForObject_(self,puVar9);
      _swift_unknownObjectRelease(puVar9);
      FUN_10000cbfc(auStack_c0,auStack_e0);
      uVar10 = 0;
      FUN_100312568(0);
      puVar11 = &local_e8;
      _swift_dynamicCast(puVar11,auStack_e0,puVar2 + 8,uVar10,6);
      uVar10 = local_e8;
      if (((ulong)puVar11 & 1) != 0) {
        puVar12 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar13 = puVar7;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_10037fb90(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puVar7 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_10037fb90(puVar7,uVar1 + 1,1,puVar13);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar10;
        *(ID *)(puVar7 + uVar1 * 0x10 + 0x28) = IVar5;
        local_78 = puVar7;
      }
      NVar8.unknown = auStack_c0;
      FUN_100004594();
      Foundation::NSFastEnumerationIterator::_next(NVar8);
    }
    (**(code **)(lVar16 + 8))((long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),local_f0);
    FUN_1003c7e74(&local_78);
    puVar7 = local_78;
    if (*(long *)(local_78 + 0x10) == 0) {
      IVar5 = objc_stub::FUN_100c03140((ID)&_OBJC_CLASS___NSColor);
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      IVar5 = *(ID *)(local_78 + 0x20);
      FUN_1003c7f84(IVar5);
      _swift_bridgeObjectRelease(puVar7);
    }
  }
  return IVar5;
}



/* Address: 0x1003c89c8 | FUN_1003c89c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c89c8(undefined8 param_1,double param_2)

{
  ID IVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  Data DVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined1 auVar6 [16];
  
  IVar1 = objc_stub::CGImageForProposedRect_context_hints_(unaff_x20,0,0,0);
  if (IVar1 != 0) {
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    IVar1 = objc_stub::FUN_100c03bc0((ID)puVar2,IVar1);
    if (IVar1 != 0) {
      objc_stub::size(IVar1);
      objc_stub::size(unaff_x20);
      objc_stub::size(IVar1);
      objc_stub::size(IVar1);
      objc_stub::setSize_(IVar1,extraout_d0_01 / (extraout_d0 / extraout_d0_00),
                          param_2 / (extraout_d0 / extraout_d0_00));
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1003c93c8(PTR___swiftEmptyArrayStorage_100eae0d8);
      FUN_1002fbba8(0);
      FUN_1003c94ec();
      pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar2);
      DVar4.unknown = (undefined *)objc_stub::FUN_100c093a0(IVar1,4,pNVar3);
      if (DVar4.unknown != (undefined *)0x0) {
        uVar5 = extraout_x1;
        DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
        goto LAB_1003c8b1c;
      }
    }
  }
  DVar4.unknown = (undefined *)0x0;
  uVar5 = 0xf000000000000000;
LAB_1003c8b1c:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = DVar4.unknown;
  return auVar6;
}



/* Address: 0x1003c8b30 | FUN_1003c8b30 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003c8b30(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::CGImageForProposedRect_context_hints_(unaff_x20,0,0,0);
  return IVar1;
}



/* Address: 0x1003c8b58 | FUN_1003c8b58 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c8b58(undefined8 param_1)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSDictionary *pNVar4;
  Data DVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  ID unaff_x20;
  undefined1 auVar7 [16];
  
  IVar1 = objc_stub::CGImageForProposedRect_context_hints_(unaff_x20,0,0,0);
  if (IVar1 != 0) {
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    IVar1 = objc_stub::FUN_100c03bc0((ID)puVar2,IVar1);
    if (IVar1 != 0) {
      puVar2 = &DAT_100fc2f20;
      FUN_1000037f0(&DAT_100fc2f20,&DAT_100c44f78);
      _swift_initStackObject();
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSImageCompressionFactor_100ea90d0;
      *(undefined **)(puVar2 + 0x40) = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
      *(undefined8 *)(puVar2 + 0x28) = param_1;
      puVar3 = puVar2;
      FUN_1003c93c8(puVar2);
      _swift_setDeallocating(puVar2);
      FUN_1003c9530(puVar2 + 0x20);
      FUN_1002fbba8(0);
      FUN_1003c94ec();
      pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
      DVar5.unknown = (undefined *)objc_stub::FUN_100c093a0(IVar1,3,pNVar4);
      if (DVar5.unknown != (undefined *)0x0) {
        uVar6 = extraout_x1;
        DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
        goto LAB_1003c8cc0;
      }
    }
  }
  DVar5.unknown = (undefined *)0x0;
  uVar6 = 0xf000000000000000;
LAB_1003c8cc0:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = DVar5.unknown;
  return auVar7;
}



/* Address: 0x1003c8cd8 | FUN_1003c8cd8 */

undefined * FUN_1003c8cd8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f48;
    FUN_1000037f0(&DAT_100fc2f48,&DAT_100c44fa8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100fbe4a8,&DAT_100c40610);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c8e08);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c8e0c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1003c8e0c | FUN_1003c8e0c */

undefined * FUN_1003c8e0c(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *capacity;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f40;
    FUN_1000037f0(&DAT_100fc2f40,&DAT_100c44fa0);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_a8;
      FUN_100011090(param_1,puVar5,&DAT_100fc0440,&DAT_100c42310);
      puVar3 = &local_a8;
      FUN_1000f1290();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c8f40);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = local_88;
      puVar5[1] = uStack_a0;
      *puVar5 = local_a8;
      puVar5[3] = uStack_90;
      puVar5[2] = local_98;
      FUN_100011080(auStack_80,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c8f44);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x48;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x1003c8f44 | FUN_1003c8f44 */

undefined * FUN_1003c8f44(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa30;
    FUN_1000037f0(&DAT_100fbfa30,&DAT_100c44530);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100fbf9e0,&DAT_100c422f0);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c906c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c9070);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1003c9070 | FUN_1003c9070 */

undefined * FUN_1003c9070(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f68;
    FUN_1000037f0(&DAT_100fc2f68,&DAT_100c44fc8);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fc2f70,&DAT_100c44fd0);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9190);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9194);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1003c9194 | FUN_1003c9194 */

undefined * FUN_1003c9194(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f50;
    FUN_1000037f0(&DAT_100fc2f50,&DAT_100c44fb0);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fc1cb0,&DAT_100c43c20);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c92b4);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c92b8);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1003c92b8 | FUN_1003c92b8 */

undefined * FUN_1003c92b8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa48;
    FUN_1000037f0(&DAT_100fbfa48,&DAT_100c410c0);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c93c4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c93c8);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1003c93c8 | FUN_1003c93c8 */

undefined * FUN_1003c93c8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f78;
    FUN_1000037f0(&DAT_100fc2f78,&DAT_100c44fd8);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fc2f28,&DAT_100c44f80);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c94e8);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c94ec);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1003c94ec | FUN_1003c94ec */

void FUN_1003c94ec(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbde48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002fbba8(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3fb64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3fb64,uVar1);
  DAT_100fbde48 = pTVar2;
  return;
}



/* Address: 0x1003c9530 | FUN_1003c9530 */

undefined8 FUN_1003c9530(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2f28;
  FUN_1000037f0(&DAT_100fc2f28,&DAT_100c44f80);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003c9578 | FUN_1003c9578 */

undefined * FUN_1003c9578(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  undefined1 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f30;
    FUN_1000037f0(&DAT_100fc2f30,&DAT_100c44f90);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar9 + -0x10);
      uVar3 = *(ulong *)(puVar9 + -8);
      uVar4 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_100071370();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003c9668);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)(*(long *)(puVar6 + 0x38) + uVar7) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003c966c);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 0x18;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x1003c966c | FUN_1003c966c */

undefined * FUN_1003c966c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f58;
    FUN_1000037f0(&DAT_100fc2f58,&DAT_100c44fb8);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c9778);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c977c);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1003c977c | FUN_1003c977c */

undefined * FUN_1003c977c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa40;
    FUN_1000037f0(&DAT_100fbfa40,&DAT_100c410b8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c9874);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c9878);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1003c9878 | FUN_1003c9878 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003c9878(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa50;
    FUN_1000037f0(&DAT_100fbfa50,&DAT_100c410c8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c9974);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c9978);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1003c9978 | FUN_1003c9978 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003c9978(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa20;
    uVar6 = 0;
    FUN_1000037f0();
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar4 = puVar8[-2];
      uVar10 = *puVar8;
      uVar9 = puVar8[-1];
      _swift_retain(*puVar8);
      uVar5 = uVar4;
      FUN_100380790();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9a80);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 0x10);
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9a84);
        (*pcVar2)();
      }
      puVar8 = puVar8 + 3;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1003c9a84 | FUN_1003c9a84 */

undefined * FUN_1003c9a84(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  Date DVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_100fc2f60;
  FUN_1000037f0(&DAT_100fc2f60,&DAT_100c44fc0);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa28;
    FUN_1000037f0(&DAT_100fbfa28,&DAT_100c410a8);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_100011090(param_1,puVar11,&DAT_100fc2f60,&DAT_100c44fc0);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003c9c0c);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      DVar9 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar9.unknown + -8) + 0x20))
                (lVar13 + *(long *)(*(long *)(DVar9.unknown + -8) + 0x48) * uVar8,
                 (long)puVar11 + (long)iVar4,DVar9.unknown);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003c9c10);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}



/* Address: 0x1003c9c10 | FUN_1003c9c10 */

undefined * FUN_1003c9c10(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa38;
    FUN_1000037f0(&DAT_100fbfa38,&DAT_100c410b0);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      FUN_1001037b4(uVar4,uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c9d20);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003c9d24);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1003c9d24 | FUN_1003c9d24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003c9d24(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa18;
    uVar6 = 0;
    FUN_1000037f0();
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      uVar5 = uVar1;
      FUN_100380790();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c9e14);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c9e18);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x1003c9e18 | FUN_1003c9e18 */

undefined * FUN_1003c9e18(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc2f38;
    FUN_1000037f0(&DAT_100fc2f38,&DAT_100c44f98);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fc2c58,&DAT_100c44d00);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9f38);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c9f3c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1003c9f3c | FUN_1003c9f3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003c9f3c(double param_1,double param_2)

{
  ID self;
  ID IVar1;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  self = objc_stub::FUN_100bfe5e0(unaff_x20,0,0,param_1,param_2,0,0);
  IVar1 = 0;
  if (self != 0) {
    objc_stub::size(self);
    if ((param_1 < extraout_d0) || (objc_stub::size(self), param_2 < dVar2)) {
      objc_stub::size(self);
      objc_stub::size(self);
      dVar3 = param_2 / dVar2;
      IVar1 = objc_stub::size(self);
      if (dVar3 <= param_1 / extraout_d0_00) {
        param_1 = (double)(long)(dVar3 * extraout_d0_01);
        dVar2 = param_2;
      }
      else {
        dVar2 = (double)(long)((param_1 / extraout_d0_00) * dVar2);
      }
    }
    else {
      IVar1 = objc_stub::size(self);
      param_1 = extraout_d0_02;
    }
    FUN_1003ca024(param_1,dVar2);
  }
  return IVar1;
}



/* Address: 0x1003ca024 | FUN_1003ca024 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ca024(double param_1,double param_2)

{
  ID IVar1;
  ID self;
  undefined *self_00;
  ID unaff_x20;
  
  IVar1 = objc_stub::FUN_100c05d80(unaff_x20);
  self = 0;
  if ((((int)IVar1 != 0) && (0.0 < param_1)) && (0.0 < param_2)) {
    IVar1 = objc_stub::FUN_100bfe5e0(unaff_x20,0,0,param_1,param_2,0,0);
    self = 0;
    if (IVar1 != 0) {
      self_00 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      self = objc_stub::initWithSize_((ID)self_00,param_1,param_2);
      objc_stub::lockFocus(self);
      objc_stub::FUN_100c01720(IVar1,0,0,param_1,param_2,0,0,0,0,1,1,0);
      objc_stub::unlockFocus(self);
    }
  }
  return self;
}



/* Address: 0x1003ca118 | FUN_1003ca118 */

void FUN_1003ca118(void)

{
  DAT_101057a58 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x1003ca14c | FUN_1003ca14c */

undefined8 * FUN_1003ca14c(void)

{
  if (DAT_100fc2f80 != -1) {
    _swift_once(&DAT_100fc2f80,FUN_1003ca118);
  }
  return &DAT_101057a58;
}



/* Address: 0x1003ca18c | FUN_1003ca18c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003ca18c(void)

{
  if (DAT_100fc2f80 != -1) {
    _swift_once(&DAT_100fc2f80,FUN_1003ca118);
  }
  return DAT_101057a58;
}



/* Address: 0x1003ca1cc | FUN_1003ca1cc */

void FUN_1003ca1cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::item) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::pasteboardItems) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x1003ca230 | FUN_1003ca230 */

void FUN_1003ca230(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::item) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::pasteboardItems) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x1003ca294 | _TtC9PasteCore16PasteboardWriter::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore16PasteboardWriter::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PasteCore.PasteboardWriter",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ca2c0);
  (*pcVar1)();
}



/* Address: 0x1003ca2c0 | _TtC9PasteCore16PasteboardWriter::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore16PasteboardWriter::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + pasteboardItems));
  return;
}



/* Address: 0x1003ca2f8 | thunk_FUN_1003ca700 */

void thunk_FUN_1003ca700(void)

{
  FUN_1003ca700();
  return;
}



/* Address: 0x1003ca2fc | _TtC9PasteCore16PasteboardWriter::writableTypesForPasteboard: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC9PasteCore16PasteboardWriter::writableTypesForPasteboard_(ID param_1,SEL param_2,ID param_3)

{
  NSArray *pNVar1;
  
  FUN_1003ca700(param_1);
  FUN_1002fc214(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x1003ca374 | FUN_1003ca374 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003ca374(String *param_1)

{
  long lVar1;
  String *pSVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  _StringGuts _Var7;
  void *pvVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  _ArrayBuffer _Var11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_78 [24];
  
  if (DAT_100fc2f80 != -1) {
    _swift_once(&DAT_100fc2f80,FUN_1003ca118);
  }
  SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var7.unknown = SVar14.bridgeObject;
  SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar14 == SVar15) {
    _swift_bridgeObjectRelease(_Var7.unknown);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar14.str,_Var7,(_StringComparisonResult)(__int8)SVar15.str);
    _swift_bridgeObjectRelease(_Var7.unknown);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    if (!bVar5) {
      _Var11.unknown =
           *(undefined **)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::pasteboardItems);
      if ((ulong)_Var11.unknown >> 0x3e == 0) {
        lVar12 = *(long *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var3.unknown = _Var11.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
          _Var3.unknown = _Var11.unknown;
        }
        lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      }
      if (lVar12 != 0) {
        lVar13 = 4;
        do {
          uVar9 = lVar13 - 4;
          if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ca5c8);
              (*pcVar4)();
            }
            uVar6 = *(ulong *)(_Var11.unknown + lVar13 * 8);
          }
          else {
            uVar6 = uVar9;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar9,_Var11);
          }
          lVar1 = lVar13 + -3;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ca5c4);
            (*pcVar4)();
          }
          SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          lVar10 = _TtC9PasteCore14PasteboardItem::dataByType;
          pvVar8 = SVar14.bridgeObject;
          _swift_beginAccess(uVar6 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x20,0);
          lVar10 = *(long *)(uVar6 + lVar10);
          if (*(long *)(lVar10 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar10);
            FUN_100071370();
            if (((ulong)SVar14.bridgeObject & 1) != 0) {
              pSVar2 = (String *)(*(long *)(lVar10 + 0x38) + (long)SVar14.str * 0x10);
              SVar14 = *pSVar2;
              FUN_1001037b4(pSVar2->str,pSVar2->bridgeObject);
              _swift_endAccess(auStack_78);
              _swift_bridgeObjectRelease(pvVar8);
              _swift_bridgeObjectRelease(lVar10);
              param_1[1].bridgeObject = PTR___type_metadata_for_Foundation_Data_100ea7300;
              goto LAB_1003ca550;
            }
            _swift_bridgeObjectRelease(lVar10);
          }
          _swift_endAccess(auStack_78);
          _swift_bridgeObjectRelease(pvVar8);
          lVar13 = lVar13 + 1;
        } while (lVar1 != lVar12);
      }
      param_1->bridgeObject = (void *)0x0;
      param_1->str = (char *)0x0;
      param_1[1].bridgeObject = (void *)0x0;
      param_1[1].str = (char *)0x0;
      return;
    }
  }
  objc_stub::identifier(*(ID *)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::item));
  SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  param_1[1].bridgeObject = PTR___type_metadata_for_Swift_String_100eac208;
LAB_1003ca550:
  *param_1 = SVar14;
  return;
}



/* Address: 0x1003ca608 | _TtC9PasteCore16PasteboardWriter::pasteboardPropertyListForType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC9PasteCore16PasteboardWriter::pasteboardPropertyListForType_
             (ID param_1,SEL param_2,ID param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN_1003ca374(auStack_60,param_3);
  if (local_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_60,local_48);
    lVar3 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_48);
    (**(code **)(lVar3 + 8))(puVar2,local_48);
    FUN_100004594(auStack_60);
  }
  return (ID)puVar1;
}



/* Address: 0x1003ca700 | FUN_1003ca700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003ca700(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  NSString *pNVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  _ArrayBuffer _Var11;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  _Var11.unknown = *(undefined **)(unaff_x20 + _TtC9PasteCore16PasteboardWriter::pasteboardItems);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    uVar12 = *(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    uVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ca8dc);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(_Var11.unknown + uVar14 * 8 + 0x20);
      }
      else {
        uVar6 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var11);
      }
      lVar15 = _TtC9PasteCore14PasteboardItem::types;
      bVar5 = SCARRY8(uVar14,1);
      uVar14 = uVar14 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ca8d8);
        (*pcVar4)();
      }
      _swift_beginAccess(uVar6 + _TtC9PasteCore14PasteboardItem::types,auStack_80,0,0);
      lVar15 = *(long *)(uVar6 + lVar15);
      uVar6 = *(ulong *)(lVar15 + 0x10);
      _swift_bridgeObjectRetain(lVar15);
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar6 != 0) {
        uVar16 = 0;
        puVar13 = (undefined8 *)(lVar15 + 0x28);
        do {
          if (*(ulong *)(lVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ca8d4);
            (*pcVar4)();
          }
          uVar3 = *puVar13;
          _swift_bridgeObjectRetain(uVar3);
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar3);
          puVar8 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100380600(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar2 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100380600(puVar10,uVar2 + 1,1,puVar9);
          }
          uVar16 = uVar16 + 1;
          *(ulong *)(puVar10 + 0x10) = uVar2 + 1;
          *(NSString **)(puVar10 + uVar2 * 8 + 0x20) = pNVar7;
          puVar13 = puVar13 + 2;
        } while (uVar6 != uVar16);
      }
      _swift_bridgeObjectRelease(lVar15);
      FUN_100381e88(puVar10);
    } while (uVar14 != uVar12);
  }
  if (DAT_100fc2f80 != -1) {
    _swift_once(&DAT_100fc2f80,FUN_1003ca118);
  }
  puVar10 = local_68;
  uVar3 = DAT_101057a58;
  puVar8 = local_68;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar9 = puVar10;
  if (((ulong)puVar8 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_100380600(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
  }
  uVar12 = *(ulong *)(puVar9 + 0x10);
  puVar10 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    FUN_100380600(puVar10,uVar12 + 1,1,puVar9);
  }
  *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puVar10 + uVar12 * 8 + 0x20) = uVar3;
  return puVar10;
}



/* Address: 0x1003ca9c0 | FUN_1003ca9c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ca9c0(void)

{
  return ZEXT816(0x100f98928);
}



/* Address: 0x1003ca9e0 | FUN_1003ca9e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1003ca9e0(void)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  FUN_10035ba70();
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  pcVar2 = FUN_10035aca8;
  FUN_10035a72c(FUN_10035aca8,0);
  *(code **)(lVar1 + 0x20) = pcVar2;
  FUN_10035ad10();
  FUN_10035ab5c();
  _swift_setDeallocating(lVar1);
  return pcVar2;
}



/* Address: 0x1003caa70 | FUN_1003caa70 */

undefined1  [16] FUN_1003caa70(void)

{
  return ZEXT816(0x100ecf3f0);
}



/* Address: 0x1003caa80 | FUN_1003caa80 */

void FUN_1003caa80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100ecf418;
  _swift_allocObject(&DAT_100ecf418,0x31,7);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  puVar1[0x30] = *(undefined1 *)(param_2 + 4);
  *param_1 = FUN_1003cac14;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  return;
}



/* Address: 0x1003caaf8 | FUN_1003caaf8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003cab80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1003caaf8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  ulong local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  lVar2 = 0;
  FUN_1003cc8fc();
  _swift_allocObject();
  lVar3 = 0;
  FUN_10035ba70();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  pcVar4 = FUN_10035aca8;
  FUN_10035a72c(FUN_10035aca8,0);
  *(code **)(lVar3 + 0x20) = pcVar4;
  *(long *)(lVar2 + 0x10) = lVar3;
  local_50 = local_50 & 0xffffffffffffff00;
  Combine::Published::init
            (lVar2 + _TtC9PasteCore24HistoryCapacityViewModel::_showReduceCapacityAlert,pcVar4,
             PTR___type_metadata_for_Swift_Bool_100eac570);
  local_38 = *param_1;
  uVar1 = param_1[1];
  uVar5 = *param_1;
  uStack_48 = param_1[3];
  local_50 = param_1[2];
  local_40 = *(undefined1 *)(param_1 + 4);
  *(undefined8 *)(lVar2 + 0x20) = param_1[1];
  *(undefined8 *)(lVar2 + 0x18) = uVar5;
  *(undefined8 *)(lVar2 + 0x30) = uStack_48;
  *(ulong *)(lVar2 + 0x28) = local_50;
  *(undefined1 *)(lVar2 + 0x38) = local_40;
  FUN_1001ecb88(&local_38,auStack_68);
  _swift_retain(uVar1);
  FUN_1003cc620(&local_50,auStack_68);
  return lVar2;
}



/* Address: 0x1003cabe0 | FUN_1003cabe0 */

void FUN_1003cabe0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003cac14 | FUN_1003cac14 */

void FUN_1003cac14(void)

{
  long unaff_x20;
  
  FUN_1003caaf8(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1003cac1c | FUN_1003cac1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003cad14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003cac1c(undefined8 param_1)

{
  StateObject SVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Binding BVar6;
  Wrapper WVar7;
  Wrapper dynamicMember;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *pvVar11;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 auStack_130 [8];
  undefined1 auStack_f0 [12];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  String local_a0;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_d8 = param_1;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar1.unknown = (undefined *)*unaff_x20;
  local_e4 = (uint)*(byte *)(unaff_x20 + 2);
  uVar4 = 0;
  FUN_1003cc8fc();
  puVar5 = &DAT_100fc2fc8;
  FUN_100003a00(&DAT_100fc2fc8,FUN_1003cc8fc,&TargetProtocolConformanceDescriptor_100c45278);
  SwiftUI::StateObject::get_wrappedValue(SVar1);
  uStack_88 = unaff_x20[4];
  local_90 = (undefined *)unaff_x20[3];
  local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(unaff_x20 + 5));
  BVar6.unknown = &DAT_100fc2fd0;
  FUN_1000037f0(&DAT_100fc2fd0,&DAT_100c45030);
  SwiftUI::Binding::get_projectedValue(BVar6);
  local_e0 = local_d0;
  local_90 = (undefined *)SwiftUI::ObservedObject::init(BVar6.unknown,uVar4,puVar5);
  local_80 = local_d0;
  uStack_78 = uStack_c8;
  uStack_88 = uVar4;
  FUN_1001bd008(auStack_f0 + lVar2);
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(auStack_f0 + lVar2));
  pvVar11 = local_a0.bridgeObject;
  WVar7 = SwiftUI::StateObject::_get_projectedValue(SVar1);
  dynamicMember.unknown = &DAT_100c45038;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar7.unknown);
  _swift_release(dynamicMember.unknown);
  puVar5 = &DAT_100fc2fd8;
  FUN_1000037f0(&DAT_100fc2fd8,&DAT_100c45060);
  puVar8 = puVar5;
  FUN_1003cb54c();
  puVar9 = puVar8;
  FUN_10030cce0();
  puVar10 = puVar9;
  FUN_1003cb58c();
  *(undefined **)((long)auStack_130 + lVar2 + 0x30) = puVar10;
  *(undefined **)((long)auStack_130 + lVar2 + 0x38) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  *(undefined **)((long)auStack_130 + lVar2 + 0x20) = puVar8;
  *(undefined **)((long)auStack_130 + lVar2 + 0x28) = puVar9;
  *(undefined **)((long)auStack_130 + lVar2 + 0x10) = puVar5;
  *(undefined **)((long)auStack_130 + lVar2 + 0x18) = PTR___type_metadata_for_SwiftUI_Text_100eab358
  ;
  *(undefined **)((long)auStack_130 + lVar2) = &DAT_100ecf518;
  *(undefined **)((long)auStack_130 + lVar2 + 8) = PTR___type_metadata_for_Swift_String_100eac208;
  (extension_SwiftUI)::SwiftUI::View::_alert
            (local_d8,&local_a0,local_b8,uStack_b0,local_a8,FUN_1003cb2fc,&local_d0,FUN_1003cb420,0)
  ;
  _swift_release(uStack_c8);
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_release(uStack_b0);
  _swift_release(local_b8);
  _swift_release(local_e0);
  return;
}



/* Address: 0x1003cae84 | FUN_1003cae84 */

void FUN_1003cae84(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c45038;
  _swift_getKeyPath(&DAT_100c45038);
  puVar2 = &DAT_100c45208;
  _swift_getKeyPath(&DAT_100c45208);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1003caeec | thunk_FUN_1003cae84 */

void thunk_FUN_1003cae84(void)

{
  FUN_1003cae84();
  return;
}



/* Address: 0x1003caef0 | FUN_1003caef0 */

void FUN_1003caef0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c45038;
  _swift_getKeyPath(&DAT_100c45038);
  puVar3 = &DAT_100c45208;
  _swift_getKeyPath(&DAT_100c45208);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x1003caf60 | thunk_FUN_1003caef0 */

void thunk_FUN_1003caef0(void)

{
  FUN_1003caef0();
  return;
}



/* Address: 0x1003caf64 | FUN_1003caf64 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003cb1ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003caf64(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  StateObject SVar13;
  undefined *puVar14;
  ButtonRole BVar15;
  StateObject SVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar18;
  undefined1 auStack_b0 [8];
  MainActor *local_a8;
  long local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  puVar7 = &DAT_100fc3040;
  local_78 = param_1;
  FUN_1000037f0(&DAT_100fc3040,&DAT_100c451f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = auStack_b0 + -extraout_x8;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = auStack_b0 + -extraout_x8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fc3048;
  FUN_1000037f0(&DAT_100fc3048,&DAT_100c451f8);
  local_88 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar17 = (long)LVar8.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  local_90 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12_00;
  local_a0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12_01;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar10 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a8 = pMVar9;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x14,UVar11.unknown,puVar10);
  }
  FUN_1001c1088(LVar8.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar8);
  SVar16.unknown = (undefined *)*param_2;
  FUN_1003cc8fc(0);
  FUN_100003a00(&DAT_100fc2fc8,FUN_1003cc8fc,&TargetProtocolConformanceDescriptor_100c45278);
  SVar13.unknown = SVar16.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar16);
  puVar14 = SVar13.unknown;
  FUN_10030cce0();
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar17,puVar14,FUN_1003cc5f8,SVar13.unknown,
             PTR___type_metadata_for_Swift_String_100eac208,puVar14);
  FUN_1001c0788(LVar8.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar8);
  puVar2 = local_98;
  SwiftUI::ButtonRole::get_cancel((ButtonRole)local_70.str);
  BVar15 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar15.unknown + -8) + 0x38))(puVar2,0,1,BVar15.unknown);
  SwiftUI::StateObject::get_wrappedValue(SVar16);
  lVar1 = local_a0;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (local_a0,SVar16.unknown,puVar2,FUN_1003cc600,SVar16.unknown,
             PTR___type_metadata_for_Swift_String_100eac208,puVar14);
  lVar4 = local_88;
  lVar3 = local_90;
  pcVar18 = *(code **)(local_88 + 0x10);
  (*pcVar18)(local_90,lVar17,puVar7);
  lVar5 = local_80;
  (*pcVar18)(local_80,lVar1,puVar7);
  lVar6 = local_78;
  (*pcVar18)(local_78,lVar3,puVar7);
  puVar14 = &DAT_100fc3050;
  FUN_1000037f0(&DAT_100fc3050,&DAT_100c45200);
  (*pcVar18)(lVar6 + *(int *)(puVar14 + 0x30),lVar5,puVar7);
  pcVar18 = *(code **)(lVar4 + 8);
  (*pcVar18)(lVar1,puVar7);
  (*pcVar18)(lVar17,puVar7);
  (*pcVar18)(lVar5,puVar7);
  (*pcVar18)(lVar3,puVar7);
  _swift_release(local_a8);
  return;
}



/* Address: 0x1003cb2fc | FUN_1003cb2fc */

void FUN_1003cb2fc(void)

{
  long unaff_x20;
  
  FUN_1003caf64(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003cb304 | FUN_1003cb304 */

/* WARNING: Removing unreachable block (ram,0x0001003cb32c) */

void FUN_1003cb304(undefined8 param_1)

{
  FUN_1002ff310(FUN_1003cc608,param_1);
  return;
}



/* Address: 0x1003cb350 | FUN_1003cb350 */

/* WARNING: Removing unreachable block (ram,0x0001003cb380) */

void FUN_1003cb350(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  Binding local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  pcVar1 = FUN_1003cc7cc;
  uVar4 = 0;
  FUN_1002ff75c();
  if (((uint)uVar4 & 0xff) != 1) {
    lVar5 = *(long *)(param_1 + 0x10);
    *(code **)(lVar5 + 0x10) = pcVar1;
    *(char *)(lVar5 + 0x18) = (char)uVar4;
    FUN_10035ad10();
    pcVar2 = pcVar1;
    FUN_10035ab5c();
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    local_60.unknown = *(undefined **)(param_1 + 0x18);
    local_68 = pcVar2 == (code *)0x0;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    local_40 = *(undefined1 *)(param_1 + 0x38);
    puVar3 = &DAT_100fc3038;
    local_78 = pcVar1;
    uStack_70 = uVar4;
    FUN_1000037f0(&DAT_100fc3038,&DAT_100c451e0);
    SwiftUI::Binding::set_wrappedValue(&local_60,&local_78,puVar3);
  }
  return;
}



/* Address: 0x1003cb420 | FUN_1003cb420 */

void FUN_1003cb420(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined8 in_x3;
  long extraout_x8;
  String local_50;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x18;
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/HistoryCapacitySlider.swift",0x25,1,0x18,UVar4.unknown,puVar3);
  }
  FUN_1001bce88(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_50.str._0_1_;
  FUN_10030cce0();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = in_x3;
  return;
}



/* Address: 0x1003cb54c | FUN_1003cb54c */

void FUN_1003cb54c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c45184;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c45184,&DAT_100ecf518);
  DAT_100fc2fe0 = pTVar1;
  return;
}



/* Address: 0x1003cb58c | FUN_1003cb58c */

void FUN_1003cb58c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc2fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc2fd8;
  FUN_100005c24(&DAT_100fc2fd8,&DAT_100c45060);
  puVar2 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,puVar1)
  ;
  DAT_100fc2fe8 = puVar2;
  return;
}



/* Address: 0x1003cb5dc | FUN_1003cb5dc */

void FUN_1003cb5dc(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100cadcc0,1);
  return;
}



/* Address: 0x1003cb5ec | FUN_1003cb5ec */

void FUN_1003cb5ec(void)

{
  FUN_1003cac1c();
  return;
}



/* Address: 0x1003cb624 | FUN_1003cb624 */

undefined8 * FUN_1003cb624(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar2,uVar3,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1003cb69c | FUN_1003cb69c */

undefined8 * FUN_1003cb69c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1001eebe0(uVar1,uVar3,uVar5);
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar6);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1003cb734 | FUN_1003cb734 */

undefined8 * FUN_1003cb734(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1001eebe0(uVar3,uVar4,uVar2);
  _swift_release(param_1[3]);
  uVar3 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_release(uVar3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1003cb798 | FUN_1003cb798 */

int FUN_1003cb798(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1003cb7e0 | FUN_1003cb7e0 */

void FUN_1003cb7e0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}


