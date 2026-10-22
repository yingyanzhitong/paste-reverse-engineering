/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005b6600 | FUN_1005b6600 */

undefined8 FUN_1005b6600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1005b62ec();
  return param_3;
}



/* Address: 0x1005b6630 | FUN_1005b6630 */

void FUN_1005b6630(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 + -1 == 0) {
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b66f0);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + 0x20) != '/') {
    lVar4 = *unaff_x20;
    lVar2 = lVar4;
    FUN_1005af84c();
    if ((((uint)lVar2 & 0xff00) != 0x100) && (((uint)lVar2 & 0xff) != 0x2f)) {
      lVar2 = *(long *)(lVar4 + 0x10) + -1;
      FUN_1005af87c(lVar2,lVar2,0x2f);
    }
    FUN_1005ae884(0,lVar3 + -1,param_1);
    return;
  }
  if (lVar3 != 1) {
    _swift_bridgeObjectRelease(*unaff_x20);
    *unaff_x20 = param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b66f4);
  (*pcVar1)();
}



/* Address: 0x1005b66f4 | FUN_1005b66f4 */

undefined8 FUN_1005b66f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1005b6630();
  return param_2;
}



/* Address: 0x1005b6724 | FUN_1005b6724 */

void FUN_1005b6724(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    _swift_bridgeObjectRelease();
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
    *unaff_x20 = (long)puVar2;
    return;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_1005afca4(0,*(long *)(*unaff_x20 + 0x10) + -1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6784);
  (*pcVar1)();
}



/* Address: 0x1005b6784 | FUN_1005b6784 */

void FUN_1005b6784(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  if (!SCARRY8(param_1,1)) {
    lVar3 = *unaff_x20;
    lVar2 = lVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar3 + 0x18) >> 1) < param_1 + 1)) {
      FUN_1005afb14();
      lVar3 = lVar2;
    }
    *unaff_x20 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b67ec);
  (*pcVar1)();
}



/* Address: 0x1005b67ec | FUN_1005b67ec */

long FUN_1005b67ec(long param_1)

{
  code *pcVar1;
  Slice SVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long local_70;
  long local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = lVar4 + -1;
  if (lVar5 == 0) {
LAB_1005b6834:
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b69f0);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + 0x20) == '/') {
      if (lVar4 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a10);
        (*pcVar1)();
      }
      if (lVar5 == 1) goto LAB_1005b6834;
    }
    _swift_bridgeObjectRetain(param_1);
    FUN_1005b2ac8(lVar5,param_1);
    lVar4 = lVar5;
    FUN_1005b2a38();
    if (lVar4 < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b69f4);
      (*pcVar1)();
    }
    if (lVar5 == lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b69f8);
      (*pcVar1)();
    }
    SVar2.unknown = &DAT_100fd37b0;
    FUN_1000f7830(&DAT_100fd37b0,&DAT_100c62fc0);
    Swift::Slice::_get_indices(SVar2);
    if (local_70 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b69fc);
      (*pcVar1)();
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 < local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a00);
      (*pcVar1)();
    }
    if (SBORROW8(local_68,local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a04);
      (*pcVar1)();
    }
    lVar4 = -(local_68 - local_70);
    if (SBORROW8(0,local_68 - local_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a08);
      (*pcVar1)();
    }
    if (SCARRY8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a0c);
      (*pcVar1)();
    }
    lVar3 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) || ((long)(*(ulong *)(param_1 + 0x18) >> 1) < lVar5 + lVar4)) {
      FUN_1005afb14();
      param_1 = lVar3;
    }
    FUN_1005afc04(local_70,local_68,0);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = lVar4 + -1;
    if (lVar5 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a14);
        (*pcVar1)();
      }
      if (*(char *)(param_1 + 0x20) == '/') {
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a18);
          (*pcVar1)();
        }
        if (lVar5 == 1) {
          return param_1;
        }
      }
      lVar3 = param_1;
      FUN_1005af84c();
      if (((uint)lVar3 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a2c);
        (*pcVar1)();
      }
      if (((uint)lVar3 & 0xff) == 0x2f) {
        if (lVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a1c);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(param_1 + 0x10);
        if (uVar6 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a20);
          (*pcVar1)();
        }
        uVar7 = lVar4 - 2;
        if (uVar6 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a24);
          (*pcVar1)();
        }
        if (uVar6 - 1 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b6a28);
          (*pcVar1)();
        }
        lVar4 = param_1;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)lVar4 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 < uVar6 - 1)) {
          FUN_1005afb14();
          param_1 = lVar4;
        }
        FUN_1005afc04(uVar7,lVar5,0);
      }
    }
  }
  return param_1;
}



/* Address: 0x1005b6a2c | FUN_1005b6a2c */

uint FUN_1005b6a2c(void)

{
  long lVar1;
  _StringGuts _Var2;
  ulong uVar3;
  uint uVar4;
  UnsafeBufferPointer<__int8> UVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined8 *unaff_x20;
  tuple2_conflict9 tVar9;
  undefined *local_38;
  ulong uStack_30;
  byte local_21;
  
  lVar1 = unaff_x20[2];
  if ((long)unaff_x20[3] <= lVar1) {
    uVar4 = 0;
    iVar7 = 1;
    goto LAB_1005b6aac;
  }
  _Var2.unknown = (undefined *)*unaff_x20;
  uVar3 = unaff_x20[1];
  if ((uVar3 >> 0x3c & 1) == 0) {
    if ((uVar3 >> 0x3d & 1) == 0) {
      if (((ulong)_Var2.unknown >> 0x3c & 1) == 0) {
        UVar5 = Swift::_StringObject::get_sharedUTF8((_StringObject)_Var2.unknown);
      }
      else {
        UVar5.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      local_38 = _Var2.unknown;
      uStack_30 = uVar3 & 0xffffffffffffff;
      UVar5.unknown = (undefined *)&local_38;
    }
    pbVar6 = (byte *)((long)UVar5.unknown + lVar1);
    uVar4 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
      uVar8 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
      if (uVar8 < 3) {
        if (uVar8 == 1) goto LAB_1005b6a84;
        uVar4 = pbVar6[1] & 0x3f | (uVar4 & 0x1f) << 6;
        tVar9 = (tuple2_conflict9)(ZEXT816(2) << 0x40);
      }
      else if (uVar8 == 3) {
        uVar4 = (uVar4 & 0xf) << 0xc | (pbVar6[1] & 0x3f) << 6 | pbVar6[2] & 0x3f;
        tVar9 = (tuple2_conflict9)(ZEXT816(3) << 0x40);
      }
      else {
        uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar6[1] & 0x3f) << 0xc | (pbVar6[2] & 0x3f) << 6 |
                pbVar6[3] & 0x3f;
        tVar9 = (tuple2_conflict9)(ZEXT816(4) << 0x40);
      }
    }
    else {
LAB_1005b6a84:
      tVar9 = (tuple2_conflict9)(ZEXT816(1) << 0x40);
    }
  }
  else {
    tVar9 = Swift::_StringGuts::foreignErrorCorrectedScalar((Index)(lVar1 << 0x10),_Var2);
    uVar4 = (uint)tVar9._.unknown;
  }
  unaff_x20[2] = tVar9.scalarLength + lVar1;
  local_38 = (undefined *)CONCAT44(local_38._4_4_,uVar4);
  (*(code *)unaff_x20[4])(&local_21,&local_38);
  iVar7 = 0;
  uVar4 = (uint)local_21;
LAB_1005b6aac:
  return uVar4 | iVar7 << 8;
}



/* Address: 0x1005b6b64 | FUN_1005b6b64 */

bool FUN_1005b6b64(long param_1,long param_2,long param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  pcVar1 = (char *)(param_3 + 0x20);
  lVar9 = param_1;
  do {
    lVar8 = lVar9;
    if (lVar8 == param_2) break;
    if ((lVar8 < param_1) || (param_2 <= lVar8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d2c);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_3 + 0x10);
    if ((lVar8 == 0) && (lVar5 != 1)) {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d50);
        (*pcVar2)();
      }
      if (*pcVar1 != '/') goto LAB_1005b6be4;
      lVar10 = 1;
LAB_1005b6c38:
      if (lVar5 == 1) goto LAB_1005b6c58;
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d4c);
        (*pcVar2)();
      }
      if (*pcVar1 != '/') goto LAB_1005b6c58;
      lVar9 = 1;
    }
    else {
LAB_1005b6be4:
      if ((lVar5 <= lVar8) || (lVar5 == 0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d38);
        (*pcVar2)();
      }
      if (lVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d3c);
        (*pcVar2)();
      }
      lVar6 = lVar5 + -1;
      lVar10 = lVar8;
      lVar9 = lVar8;
      if (lVar8 != lVar6) {
        do {
          lVar10 = lVar9;
          if (pcVar1[lVar9] == '/') break;
          lVar9 = lVar9 + 1;
          lVar10 = lVar6;
        } while (lVar6 != lVar9);
        if (lVar10 < lVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d40);
          (*pcVar2)();
        }
      }
      if (lVar8 == lVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d30);
        (*pcVar2)();
      }
      if (lVar8 == 0) goto LAB_1005b6c38;
LAB_1005b6c58:
      if ((lVar5 <= lVar8) || (lVar5 == 0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d44);
        (*pcVar2)();
      }
      if (lVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d48);
        (*pcVar2)();
      }
      lVar9 = lVar8;
      if (lVar8 != lVar5 + -1) {
        lVar6 = lVar8 + 1;
        pcVar7 = pcVar1 + lVar8;
        do {
          lVar9 = lVar6;
          if (*pcVar7 == '/') break;
          lVar6 = lVar6 + 1;
          pcVar7 = pcVar7 + 1;
          lVar9 = lVar5 + -1;
        } while (lVar5 != lVar6);
      }
    }
    if (lVar5 <= lVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b6d34);
      (*pcVar2)();
    }
    puVar3 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    puVar4 = puVar3;
    _swift_initStaticObject();
    FUN_1005af77c();
    if (((ulong)puVar4 & 1) != 0) break;
    _swift_initStaticObject(puVar3,&DAT_100fd3ac0);
    FUN_1005af77c();
  } while (((ulong)puVar3 & 1) == 0);
  return lVar8 == param_2;
}



/* Address: 0x1005b6d50 | FUN_1005b6d50 */

void FUN_1005b6d50(long param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  uVar10 = uVar9 - 1;
  if (param_2 != uVar10) {
    pcVar1 = (char *)(param_1 + 0x20);
    do {
      uVar12 = param_2;
      if ((uVar10 == 0) || (param_2 != 0)) {
        if ((uVar9 == 0) || ((long)uVar9 <= (long)param_2)) {
LAB_1005b6fcc:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fd0);
          (*pcVar4)();
        }
        if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fd4);
          (*pcVar4)();
        }
joined_r0x0001005b6e14:
        for (; (uVar11 = uVar10, uVar12 != uVar10 && (uVar11 = uVar12, pcVar1[uVar12] != '/'));
            uVar12 = uVar12 + 1) {
        }
        if ((long)uVar11 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fd8);
          (*pcVar4)();
        }
        if (param_2 == uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fb4);
          (*pcVar4)();
        }
        if (param_2 == 0) goto LAB_1005b6e4c;
LAB_1005b6e6c:
        if ((uVar9 == 0) || ((long)uVar9 <= (long)param_2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fc8);
          (*pcVar4)();
        }
        if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fcc);
          (*pcVar4)();
        }
        uVar12 = uVar10;
        if (param_2 != uVar10) {
          uVar7 = param_2 + 1;
          pcVar6 = pcVar1 + param_2;
          do {
            uVar12 = uVar7;
            if (*pcVar6 == '/') break;
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
            uVar12 = uVar10;
          } while (uVar9 != uVar7);
        }
      }
      else {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fe0);
          (*pcVar4)();
        }
        if (*pcVar1 != '/') {
          if ((long)uVar9 < 1) goto LAB_1005b6fcc;
          goto joined_r0x0001005b6e14;
        }
        uVar11 = 1;
LAB_1005b6e4c:
        if (uVar9 == 1) goto LAB_1005b6e6c;
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fe4);
          (*pcVar4)();
        }
        if (*pcVar1 != '/') goto LAB_1005b6e6c;
        uVar12 = 1;
      }
      uVar7 = *(ulong *)(*unaff_x20 + 0x10);
      lVar8 = uVar7 - 1;
      if (lVar8 == 0) {
        _swift_bridgeObjectRetain(param_1);
      }
      else {
        if (uVar7 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fdc);
          (*pcVar4)();
        }
        cVar2 = *(char *)(*unaff_x20 + uVar7 + 0x1e);
        _swift_bridgeObjectRetain(param_1);
        if (cVar2 != '/') {
          FUN_1005af87c(lVar8,lVar8,0x2f);
        }
      }
      if ((long)uVar11 <= (long)param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fb8);
        (*pcVar4)();
      }
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fbc);
        (*pcVar4)();
      }
      if ((long)uVar9 <= (long)param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fc0);
        (*pcVar4)();
      }
      if (uVar9 <= uVar11 - 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fc4);
        (*pcVar4)();
      }
      lVar8 = *unaff_x20;
      do {
        if ((long)uVar11 <= (long)param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fa8);
          (*pcVar4)();
        }
        if (uVar10 == param_2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fac);
          (*pcVar4)();
        }
        uVar7 = *(ulong *)(lVar8 + 0x10);
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b6fb0);
          (*pcVar4)();
        }
        uVar3 = *(undefined1 *)(param_1 + param_2 + 0x20);
        lVar5 = lVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)lVar5 == 0) || (*(ulong *)(lVar8 + 0x18) >> 1 <= uVar7)) {
          FUN_1005afb14();
          lVar8 = lVar5;
        }
        lVar5 = lVar8 + (uVar7 - 1);
        _memmove((void *)(lVar5 + 0x21),(void *)(lVar5 + 0x20),*(long *)(lVar8 + 0x10) - (uVar7 - 1)
                );
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
        *(undefined1 *)(lVar5 + 0x20) = uVar3;
        param_2 = param_2 + 1;
      } while (uVar11 != param_2);
      _swift_bridgeObjectRelease(param_1);
      *unaff_x20 = lVar8;
      param_2 = uVar12;
    } while (uVar12 != uVar10);
  }
  return;
}



/* Address: 0x1005b6fe4 | FUN_1005b6fe4 */

void FUN_1005b6fe4(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long local_90;
  undefined8 local_88;
  long local_78;
  ulong local_70;
  ulong local_68;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar9 = *(long *)(param_2 + -8);
  lVar11 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(param_3 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_90 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(local_90 + 0x40);
  (**(code **)(lVar9 + 0x10))(lVar11,param_1,param_2);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar12,param_2,lVar5,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  uVar2 = local_88;
  do {
    local_88 = uVar12;
    if (local_78 == 0) {
      local_88 = uVar2;
      (**(code **)(local_90 + 8))(lVar11 - (lVar7 + 0xfU & 0xfffffffffffffff0),lVar5);
      return;
    }
    if (local_70 == local_68) {
      _swift_bridgeObjectRelease(local_78);
    }
    else {
      uVar8 = *(ulong *)(*unaff_x20 + 0x10);
      lVar9 = uVar8 - 1;
      if (lVar9 != 0) {
        if (uVar8 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7298);
          (*pcVar4)();
        }
        if (*(char *)(*unaff_x20 + uVar8 + 0x1e) != '/') {
          FUN_1005af87c(lVar9,lVar9,0x2f);
        }
      }
      if ((long)local_68 <= (long)local_70) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7288);
        (*pcVar4)();
      }
      if ((long)local_70 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b728c);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(local_78 + 0x10);
      if (uVar8 <= local_70) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7290);
        (*pcVar4)();
      }
      if (uVar8 <= local_68 - 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7294);
        (*pcVar4)();
      }
      lVar9 = *unaff_x20;
      uVar13 = local_70;
      do {
        if (((long)uVar13 < (long)local_70) || ((long)local_68 <= (long)uVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b727c);
          (*pcVar4)();
        }
        if (uVar8 - 1 == uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7280);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(lVar9 + 0x10);
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b7284);
          (*pcVar4)();
        }
        uVar1 = *(undefined1 *)(local_78 + uVar13 + 0x20);
        lVar6 = lVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)lVar6 == 0) || (*(ulong *)(lVar9 + 0x18) >> 1 <= uVar10)) {
          FUN_1005afb14();
          lVar9 = lVar6;
        }
        lVar6 = lVar9 + (uVar10 - 1);
        _memmove((void *)(lVar6 + 0x21),(void *)(lVar6 + 0x20),
                 *(long *)(lVar9 + 0x10) - (uVar10 - 1));
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
        *(undefined1 *)(lVar6 + 0x20) = uVar1;
        uVar13 = uVar13 + 1;
      } while (local_68 != uVar13);
      _swift_bridgeObjectRelease(local_78);
      *unaff_x20 = lVar9;
    }
    Swift::IteratorProtocol::_next();
    uVar12 = local_88;
    uVar2 = local_88;
  } while( true );
}



/* Address: 0x1005b7298 | FUN_1005b7298 */

void FUN_1005b7298(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005b72a4 | FUN_1005b72a4 */

void FUN_1005b72a4(undefined8 param_1,Hasher param_2)

{
  ushort uVar1;
  Hasher HVar2;
  ushort *unaff_x20;
  
  uVar1 = *unaff_x20;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005b72e8 | FUN_1005b72e8 */

void FUN_1005b72e8(undefined8 param_1,Hasher param_2)

{
  __uint16 *unaff_x20;
  
  Swift::Hasher::_combine(*unaff_x20,param_2);
  return;
}



/* Address: 0x1005b7310 | FUN_1005b7310 */

void FUN_1005b7310(__int64 param_1,Hasher param_2)

{
  ushort uVar1;
  Hasher HVar2;
  ushort *unaff_x20;
  
  uVar1 = *unaff_x20;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005b7350 | FUN_1005b7350 */

void FUN_1005b7350(void)

{
  FUN_1005b7708();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005b73ac | FUN_1005b73ac */

void FUN_1005b73ac(void)

{
  FUN_1005b7708();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005b73f8 | FUN_1005b73f8 */

void FUN_1005b73f8(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x1005b7408 | FUN_1005b7408 */

void FUN_1005b7408(undefined2 *param_1)

{
  undefined2 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Address: 0x1005b7414 | FUN_1005b7414 */

void FUN_1005b7414(undefined2 *param_1)

{
  *param_1 = 0;
  return;
}



/* Address: 0x1005b741c | FUN_1005b741c */

void FUN_1005b741c(ushort *param_1,ushort *param_2)

{
  ushort *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}



/* Address: 0x1005b7430 | FUN_1005b7430 */

void FUN_1005b7430(ushort *param_1,ushort *param_2)

{
  ushort *unaff_x20;
  
  *param_1 = *unaff_x20 & *param_2;
  return;
}



/* Address: 0x1005b7444 | FUN_1005b7444 */

void FUN_1005b7444(ushort *param_1,ushort *param_2)

{
  ushort *unaff_x20;
  
  *param_1 = *unaff_x20 ^ *param_2;
  return;
}



/* Address: 0x1005b7458 | FUN_1005b7458 */

bool FUN_1005b7458(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_x20;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  return (uVar1 & (uVar2 ^ 0xffff)) != 0;
}



/* Address: 0x1005b7478 | FUN_1005b7478 */

void FUN_1005b7478(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *unaff_x20;
  
  uVar1 = *unaff_x20 & *param_2;
  if (uVar1 != 0) {
    *unaff_x20 = *unaff_x20 & (*param_2 ^ 0xffff);
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 == 0;
  return;
}



/* Address: 0x1005b74a8 | FUN_1005b74a8 */

void FUN_1005b74a8(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  uVar2 = uVar2 & uVar1;
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = uVar2 == 0;
  return;
}



/* Address: 0x1005b74cc | FUN_1005b74cc */

void FUN_1005b74cc(ushort *param_1)

{
  ushort *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | *param_1;
  return;
}



/* Address: 0x1005b74e0 | FUN_1005b74e0 */

void FUN_1005b74e0(ushort *param_1)

{
  ushort *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & *param_1;
  return;
}



/* Address: 0x1005b74f4 | FUN_1005b74f4 */

void FUN_1005b74f4(ushort *param_1)

{
  ushort *unaff_x20;
  
  *unaff_x20 = *unaff_x20 ^ *param_1;
  return;
}



/* Address: 0x1005b7508 | FUN_1005b7508 */

void FUN_1005b7508(ushort *param_1,ushort *param_2)

{
  ushort *unaff_x20;
  
  *param_1 = *unaff_x20 & (*param_2 ^ 0xffff);
  return;
}



/* Address: 0x1005b751c | FUN_1005b751c */

bool FUN_1005b751c(ushort *param_1)

{
  ushort *unaff_x20;
  
  return (*unaff_x20 & (*param_1 ^ 0xffff)) == 0;
}



/* Address: 0x1005b7530 | FUN_1005b7530 */

bool FUN_1005b7530(ushort *param_1)

{
  ushort *unaff_x20;
  
  return (*unaff_x20 & *param_1) == 0;
}



/* Address: 0x1005b7544 | FUN_1005b7544 */

bool FUN_1005b7544(ushort *param_1)

{
  ushort *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffff)) == 0;
}



/* Address: 0x1005b7558 | FUN_1005b7558 */

bool FUN_1005b7558(void)

{
  short *unaff_x20;
  
  return *unaff_x20 == 0;
}



/* Address: 0x1005b7568 | FUN_1005b7568 */

void FUN_1005b7568(ushort *param_1)

{
  ushort *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (*param_1 ^ 0xffff);
  return;
}



/* Address: 0x1005b757c | FUN_1005b757c */

bool FUN_1005b757c(short *param_1,short *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x1005b7590 | FUN_1005b7590 */

void FUN_1005b7590(undefined2 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined2 uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar28 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar53;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined8 uVar62;
  byte bVar69;
  byte bVar70;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined8 uVar71;
  byte bVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar8 = 0;
    goto LAB_1005b76ac;
  }
  if (uVar2 < 4) {
    uVar4 = 0;
    uVar9 = 0;
  }
  else {
    if (uVar2 < 0x20) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7fffffffffffffe0;
      puVar6 = (undefined8 *)(param_2 + 0x50);
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      uVar27 = 0;
      uVar53 = 0;
      uVar62 = 0;
      uVar71 = 0;
      uVar7 = uVar4;
      do {
        uVar80 = puVar6[-5];
        uVar79 = puVar6[-6];
        uVar82 = puVar6[-3];
        uVar81 = puVar6[-4];
        uVar84 = puVar6[-1];
        uVar83 = puVar6[-2];
        uVar86 = puVar6[1];
        uVar85 = *puVar6;
        bVar10 = (byte)uVar79 | bVar10;
        bVar11 = (byte)((ulong)uVar79 >> 8) | bVar11;
        bVar12 = (byte)((ulong)uVar79 >> 0x10) | bVar12;
        bVar13 = (byte)((ulong)uVar79 >> 0x18) | bVar13;
        bVar14 = (byte)((ulong)uVar79 >> 0x20) | bVar14;
        bVar15 = (byte)((ulong)uVar79 >> 0x28) | bVar15;
        bVar16 = (byte)((ulong)uVar79 >> 0x30) | bVar16;
        bVar17 = (byte)((ulong)uVar79 >> 0x38) | bVar17;
        bVar18 = (byte)uVar80 | bVar18;
        bVar19 = (byte)((ulong)uVar80 >> 8) | bVar19;
        bVar20 = (byte)((ulong)uVar80 >> 0x10) | bVar20;
        bVar21 = (byte)((ulong)uVar80 >> 0x18) | bVar21;
        bVar22 = (byte)((ulong)uVar80 >> 0x20) | bVar22;
        bVar23 = (byte)((ulong)uVar80 >> 0x28) | bVar23;
        bVar24 = (byte)((ulong)uVar80 >> 0x30) | bVar24;
        bVar25 = (byte)((ulong)uVar80 >> 0x38) | bVar25;
        bVar26 = (byte)uVar81 | bVar26;
        bVar29 = (byte)((ulong)uVar81 >> 8) | bVar29;
        bVar30 = (byte)((ulong)uVar81 >> 0x10) | bVar30;
        bVar31 = (byte)((ulong)uVar81 >> 0x18) | bVar31;
        bVar32 = (byte)((ulong)uVar81 >> 0x20) | bVar32;
        bVar33 = (byte)((ulong)uVar81 >> 0x28) | bVar33;
        bVar34 = (byte)((ulong)uVar81 >> 0x30) | bVar34;
        bVar35 = (byte)((ulong)uVar81 >> 0x38) | bVar35;
        bVar36 = (byte)uVar82 | bVar36;
        bVar37 = (byte)((ulong)uVar82 >> 8) | bVar37;
        bVar38 = (byte)((ulong)uVar82 >> 0x10) | bVar38;
        bVar39 = (byte)((ulong)uVar82 >> 0x18) | bVar39;
        bVar40 = (byte)((ulong)uVar82 >> 0x20) | bVar40;
        bVar41 = (byte)((ulong)uVar82 >> 0x28) | bVar41;
        bVar42 = (byte)((ulong)uVar82 >> 0x30) | bVar42;
        bVar43 = (byte)((ulong)uVar82 >> 0x38) | bVar43;
        bVar44 = (byte)uVar83 | (byte)uVar27;
        bVar45 = (byte)((ulong)uVar83 >> 8) | (byte)((ulong)uVar27 >> 8);
        bVar46 = (byte)((ulong)uVar83 >> 0x10) | (byte)((ulong)uVar27 >> 0x10);
        bVar47 = (byte)((ulong)uVar83 >> 0x18) | (byte)((ulong)uVar27 >> 0x18);
        bVar48 = (byte)((ulong)uVar83 >> 0x20) | (byte)((ulong)uVar27 >> 0x20);
        bVar49 = (byte)((ulong)uVar83 >> 0x28) | (byte)((ulong)uVar27 >> 0x28);
        bVar50 = (byte)((ulong)uVar83 >> 0x30) | (byte)((ulong)uVar27 >> 0x30);
        bVar51 = (byte)((ulong)uVar83 >> 0x38) | (byte)((ulong)uVar27 >> 0x38);
        uVar27 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar44)))))));
        bVar52 = (byte)uVar84 | (byte)uVar53;
        bVar54 = (byte)((ulong)uVar84 >> 8) | (byte)((ulong)uVar53 >> 8);
        bVar55 = (byte)((ulong)uVar84 >> 0x10) | (byte)((ulong)uVar53 >> 0x10);
        bVar56 = (byte)((ulong)uVar84 >> 0x18) | (byte)((ulong)uVar53 >> 0x18);
        bVar57 = (byte)((ulong)uVar84 >> 0x20) | (byte)((ulong)uVar53 >> 0x20);
        bVar58 = (byte)((ulong)uVar84 >> 0x28) | (byte)((ulong)uVar53 >> 0x28);
        bVar59 = (byte)((ulong)uVar84 >> 0x30) | (byte)((ulong)uVar53 >> 0x30);
        bVar60 = (byte)((ulong)uVar84 >> 0x38) | (byte)((ulong)uVar53 >> 0x38);
        uVar53 = CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(bVar56,
                                                  CONCAT12(bVar55,CONCAT11(bVar54,bVar52)))))));
        bVar61 = (byte)uVar85 | (byte)uVar62;
        bVar63 = (byte)((ulong)uVar85 >> 8) | (byte)((ulong)uVar62 >> 8);
        bVar64 = (byte)((ulong)uVar85 >> 0x10) | (byte)((ulong)uVar62 >> 0x10);
        bVar65 = (byte)((ulong)uVar85 >> 0x18) | (byte)((ulong)uVar62 >> 0x18);
        bVar66 = (byte)((ulong)uVar85 >> 0x20) | (byte)((ulong)uVar62 >> 0x20);
        bVar67 = (byte)((ulong)uVar85 >> 0x28) | (byte)((ulong)uVar62 >> 0x28);
        bVar68 = (byte)((ulong)uVar85 >> 0x30) | (byte)((ulong)uVar62 >> 0x30);
        bVar69 = (byte)((ulong)uVar85 >> 0x38) | (byte)((ulong)uVar62 >> 0x38);
        uVar62 = CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,CONCAT13(bVar65,
                                                  CONCAT12(bVar64,CONCAT11(bVar63,bVar61)))))));
        bVar70 = (byte)uVar86 | (byte)uVar71;
        bVar72 = (byte)((ulong)uVar86 >> 8) | (byte)((ulong)uVar71 >> 8);
        bVar73 = (byte)((ulong)uVar86 >> 0x10) | (byte)((ulong)uVar71 >> 0x10);
        bVar74 = (byte)((ulong)uVar86 >> 0x18) | (byte)((ulong)uVar71 >> 0x18);
        bVar75 = (byte)((ulong)uVar86 >> 0x20) | (byte)((ulong)uVar71 >> 0x20);
        bVar76 = (byte)((ulong)uVar86 >> 0x28) | (byte)((ulong)uVar71 >> 0x28);
        bVar77 = (byte)((ulong)uVar86 >> 0x30) | (byte)((ulong)uVar71 >> 0x30);
        bVar78 = (byte)((ulong)uVar86 >> 0x38) | (byte)((ulong)uVar71 >> 0x38);
        uVar71 = CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar75,CONCAT13(bVar74,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar70)))))));
        puVar6 = puVar6 + 8;
        uVar7 = uVar7 - 0x20;
      } while (uVar7 != 0);
      bVar61 = bVar61 | bVar44 | bVar26 | bVar10;
      bVar63 = bVar63 | bVar45 | bVar29 | bVar11;
      bVar64 = bVar64 | bVar46 | bVar30 | bVar12;
      bVar65 = bVar65 | bVar47 | bVar31 | bVar13;
      bVar66 = bVar66 | bVar48 | bVar32 | bVar14;
      bVar67 = bVar67 | bVar49 | bVar33 | bVar15;
      bVar68 = bVar68 | bVar50 | bVar34 | bVar16;
      bVar69 = bVar69 | bVar51 | bVar35 | bVar17;
      bVar70 = bVar70 | bVar52 | bVar36 | bVar18;
      bVar72 = bVar72 | bVar54 | bVar37 | bVar19;
      bVar73 = bVar73 | bVar55 | bVar38 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar39 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar40 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar41 | bVar23;
      bVar77 = bVar77 | bVar59 | bVar42 | bVar24;
      bVar78 = bVar78 | bVar60 | bVar43 | bVar25;
      auVar28[1] = bVar63;
      auVar28[0] = bVar61;
      auVar28[2] = bVar64;
      auVar28[3] = bVar65;
      auVar28[4] = bVar66;
      auVar28[5] = bVar67;
      auVar28[6] = bVar68;
      auVar28[7] = bVar69;
      auVar28[8] = bVar70;
      auVar28[9] = bVar72;
      auVar28[10] = bVar73;
      auVar28[0xb] = bVar74;
      auVar28[0xc] = bVar75;
      auVar28[0xd] = bVar76;
      auVar28[0xe] = bVar77;
      auVar28[0xf] = bVar78;
      auVar1[1] = bVar63;
      auVar1[0] = bVar61;
      auVar1[2] = bVar64;
      auVar1[3] = bVar65;
      auVar1[4] = bVar66;
      auVar1[5] = bVar67;
      auVar1[6] = bVar68;
      auVar1[7] = bVar69;
      auVar1[8] = bVar70;
      auVar1[9] = bVar72;
      auVar1[10] = bVar73;
      auVar1[0xb] = bVar74;
      auVar1[0xc] = bVar75;
      auVar1[0xd] = bVar76;
      auVar1[0xe] = bVar77;
      auVar1[0xf] = bVar78;
      auVar28 = NEON_ext(auVar28,auVar1,8,1);
      uVar7 = CONCAT17(bVar69 | auVar28[7],
                       CONCAT16(bVar68 | auVar28[6],
                                CONCAT15(bVar67 | auVar28[5],
                                         CONCAT14(bVar66 | auVar28[4],
                                                  CONCAT13(bVar65 | auVar28[3],
                                                           CONCAT12(bVar64 | auVar28[2],
                                                                    CONCAT11(bVar63 | auVar28[1],
                                                                             bVar61 | auVar28[0]))))
                                        )));
      uVar7 = uVar7 | uVar7 >> 0x20;
      uVar9 = (uint)uVar7 | (uint)(uVar7 >> 0x10);
      uVar8 = (undefined2)uVar9;
      if (uVar2 == uVar4) goto LAB_1005b76ac;
      uVar7 = uVar4;
      if ((uVar2 & 0x1c) == 0) goto LAB_1005b7690;
    }
    uVar4 = uVar2 & 0x7ffffffffffffffc;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar10 = (byte)uVar8;
    bVar11 = (byte)((ushort)uVar8 >> 8);
    lVar3 = uVar7 - uVar4;
    puVar6 = (undefined8 *)(param_2 + uVar7 * 2 + 0x20);
    do {
      uVar27 = *puVar6;
      bVar10 = (byte)uVar27 | bVar10;
      bVar11 = (byte)((ulong)uVar27 >> 8) | bVar11;
      bVar12 = (byte)((ulong)uVar27 >> 0x10) | bVar12;
      bVar13 = (byte)((ulong)uVar27 >> 0x18) | bVar13;
      bVar14 = (byte)((ulong)uVar27 >> 0x20) | bVar14;
      bVar15 = (byte)((ulong)uVar27 >> 0x28) | bVar15;
      bVar16 = (byte)((ulong)uVar27 >> 0x30) | bVar16;
      bVar17 = (byte)((ulong)uVar27 >> 0x38) | bVar17;
      lVar3 = lVar3 + 4;
      puVar6 = puVar6 + 1;
    } while (lVar3 != 0);
    uVar7 = CONCAT17(bVar17,CONCAT16(bVar16,CONCAT15(bVar15,CONCAT14(bVar14,CONCAT13(bVar13,CONCAT12
                                                  (bVar12,CONCAT11(bVar11,bVar10)))))));
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar9 = (uint)uVar7 | (uint)(uVar7 >> 0x10);
    uVar8 = (undefined2)uVar9;
    if (uVar2 == uVar4) goto LAB_1005b76ac;
  }
LAB_1005b7690:
  lVar3 = uVar2 - uVar4;
  puVar5 = (ushort *)(param_2 + uVar4 * 2 + 0x20);
  do {
    uVar9 = *puVar5 | uVar9;
    uVar8 = (undefined2)uVar9;
    lVar3 = lVar3 + -1;
    puVar5 = puVar5 + 1;
  } while (lVar3 != 0);
LAB_1005b76ac:
  _swift_bridgeObjectRelease();
  *param_1 = uVar8;
  return;
}



/* Address: 0x1005b76c0 | FUN_1005b76c0 */

void FUN_1005b76c0(void)

{
  FUN_1000f7830(&DAT_100fd3e10,&DAT_100c62fd0);
  _swift_initStaticObject();
  FUN_1005ab684();
  return;
}



/* Address: 0x1005b7700 | thunk_FUN_1005b76c0 */

void thunk_FUN_1005b76c0(void)

{
  FUN_1005b76c0();
  return;
}



/* Address: 0x1005b7704 | thunk_FUN_1005b7708 */

void thunk_FUN_1005b7708(void)

{
  FUN_1005b7708();
  return;
}



/* Address: 0x1005b7708 | FUN_1005b7708 */

void FUN_1005b7708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c630a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c630a0,&DAT_100ee52b0);
  DAT_100fd3e18 = pTVar1;
  return;
}



/* Address: 0x1005b7748 | thunk_FUN_1005b774c */

void thunk_FUN_1005b774c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c630d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c630d8,&DAT_100ee52b0);
  DAT_100fd3e20 = pTVar1;
  return;
}



/* Address: 0x1005b774c | FUN_1005b774c */

void FUN_1005b774c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c630d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c630d8,&DAT_100ee52b0);
  DAT_100fd3e20 = pTVar1;
  return;
}



/* Address: 0x1005b778c | thunk_FUN_1005b7790 */

void thunk_FUN_1005b7790(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c631a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c631a0,&DAT_100ee52b0);
  DAT_100fd3e28 = pTVar1;
  return;
}



/* Address: 0x1005b7790 | FUN_1005b7790 */

void FUN_1005b7790(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c631a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c631a0,&DAT_100ee52b0);
  DAT_100fd3e28 = pTVar1;
  return;
}



/* Address: 0x1005b77d0 | thunk_FUN_1005b77d4 */

void thunk_FUN_1005b77d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c631c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c631c8,&DAT_100ee52b0);
  DAT_100fd3e30 = pTVar1;
  return;
}



/* Address: 0x1005b77d4 | FUN_1005b77d4 */

void FUN_1005b77d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c631c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c631c8,&DAT_100ee52b0);
  DAT_100fd3e30 = pTVar1;
  return;
}



/* Address: 0x1005b7814 | FUN_1005b7814 */

void FUN_1005b7814(void)

{
  undefined2 *unaff_x20;
  
  FUN_1005b76c0(*unaff_x20);
  return;
}



/* Address: 0x1005b781c | FUN_1005b781c */

undefined1  [16] FUN_1005b781c(void)

{
  return ZEXT816(0x100ee52b0);
}



/* Address: 0x1005b782c | thunk_FUN_1005b7814 */

void thunk_FUN_1005b7814(void)

{
  undefined2 *unaff_x20;
  
  FUN_1005b76c0(*unaff_x20);
  return;
}



/* Address: 0x1005b7830 | thunk_FUN_1005b7544 */

bool thunk_FUN_1005b7544(ushort *param_1)

{
  ushort *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffff)) == 0;
}



/* Address: 0x1005b7834 | thunk_FUN_1005b7790 */

void thunk_FUN_1005b7790(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c631a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c631a0,&DAT_100ee52b0);
  DAT_100fd3e28 = pTVar1;
  return;
}



/* Address: 0x1005b7838 | thunk_FUN_1005b783c */

void thunk_FUN_1005b783c(void)

{
  FUN_1005b783c();
  return;
}



/* Address: 0x1005b783c | FUN_1005b783c */

void FUN_1005b783c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63334;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63334,&DAT_100ee5458);
  DAT_100fd3e38 = pTVar1;
  return;
}



/* Address: 0x1005b787c | thunk_FUN_1005b7880 */

void thunk_FUN_1005b7880(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6336c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6336c,&DAT_100ee5458);
  DAT_100fd3e40 = pTVar1;
  return;
}



/* Address: 0x1005b7880 | FUN_1005b7880 */

void FUN_1005b7880(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6336c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6336c,&DAT_100ee5458);
  DAT_100fd3e40 = pTVar1;
  return;
}



/* Address: 0x1005b78c0 | thunk_FUN_1005b78c4 */

void thunk_FUN_1005b78c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63434;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63434,&DAT_100ee5458);
  DAT_100fd3e48 = pTVar1;
  return;
}



/* Address: 0x1005b78c4 | FUN_1005b78c4 */

void FUN_1005b78c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63434;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63434,&DAT_100ee5458);
  DAT_100fd3e48 = pTVar1;
  return;
}



/* Address: 0x1005b7904 | FUN_1005b7904 */

void FUN_1005b7904(void)

{
  FUN_1005b783c();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005b7960 | FUN_1005b7960 */

void FUN_1005b7960(void)

{
  FUN_1005b783c();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005b79ac | thunk_FUN_1005b79b0 */

void thunk_FUN_1005b79b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6345c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6345c,&DAT_100ee5458);
  DAT_100fd3e50 = pTVar1;
  return;
}



/* Address: 0x1005b79b0 | FUN_1005b79b0 */

void FUN_1005b79b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6345c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6345c,&DAT_100ee5458);
  DAT_100fd3e50 = pTVar1;
  return;
}



/* Address: 0x1005b79f0 | FUN_1005b79f0 */

undefined1  [16] FUN_1005b79f0(void)

{
  return ZEXT816(0x100ee5458);
}



/* Address: 0x1005b7a00 | thunk_FUN_1005b78c4 */

void thunk_FUN_1005b78c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63434;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63434,&DAT_100ee5458);
  DAT_100fd3e48 = pTVar1;
  return;
}



/* Address: 0x1005b7a04 | thunk_FUN_1005b7a08 */

void thunk_FUN_1005b7a08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3e58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63570;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63570,&DAT_100ee55e0);
  DAT_100fd3e58 = pTVar1;
  return;
}


