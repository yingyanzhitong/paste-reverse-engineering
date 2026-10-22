/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ab348c | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  thunk_FUN_100a640ec();
  return;
}



/* Address: 0x100ab3490 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab3494 | thunk_FUN_100aabb04 */

void thunk_FUN_100aabb04(void)

{
  FUN_100aabb04();
  return;
}



/* Address: 0x100ab3498 | thunk_FUN_100aabb04 */

void thunk_FUN_100aabb04(void)

{
  FUN_100aabb04();
  return;
}



/* Address: 0x100ab349c | thunk_FUN_100aabb04 */

void thunk_FUN_100aabb04(void)

{
  FUN_100aabb04();
  return;
}



/* Address: 0x100ab34a0 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab34a4 | FUN_100ab34a4 */

void FUN_100ab34a4(void)

{
  FUN_100aabd40();
  return;
}



/* Address: 0x100ab34b8 | FUN_100ab34b8 */

void FUN_100ab34b8(ulong param_1,undefined1 param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *unaff_x20;
  long lVar13;
  
  uVar12 = *unaff_x20;
  lVar13 = *(long *)(uVar12 + 0x10);
  if (SCARRY8(lVar13,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3634);
    (*pcVar2)();
  }
  uVar4 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar4 == 0) ||
     (uVar9 = *(ulong *)(uVar12 + 0x18) >> 1, (long)uVar9 < (long)(lVar13 + param_1))) {
    FUN_100aa7840();
    uVar9 = *(ulong *)(uVar4 + 0x18) >> 1;
    uVar12 = uVar4;
  }
  uVar4 = *(ulong *)(uVar12 + 0x10);
  uVar5 = uVar9 - uVar4;
  if (uVar5 == 0) {
    if (0 < (long)param_1) {
LAB_100ab36f0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab36f4);
      (*pcVar2)();
    }
LAB_100ab3574:
    if (uVar5 != 0) goto LAB_100ab3614;
  }
  else {
    if (param_1 == 0) goto LAB_100ab3574;
    puVar6 = (undefined1 *)(uVar12 + uVar4 + 0x20);
    uVar7 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    uVar8 = uVar7;
    if (uVar9 + ~uVar4 <= uVar7) {
      uVar8 = uVar9 + ~uVar4;
    }
    if (param_1 - 1 <= uVar8) {
      uVar8 = param_1 - 1;
    }
    if (uVar8 < 0x40) {
      uVar10 = 0;
      uVar9 = 1;
    }
    else {
      uVar9 = uVar8 + 1 & 0x3f;
      uVar10 = 0x40;
      if (uVar9 != 0) {
        uVar10 = uVar9;
      }
      uVar10 = (uVar8 + 1) - uVar10;
      puVar6 = puVar6 + uVar10;
      uVar9 = uVar10 + 1;
      puVar11 = (undefined8 *)(uVar4 + uVar12 + 0x50);
      uVar8 = uVar10;
      do {
        puVar11[-5] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[-6] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[-3] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[-4] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[-1] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[-2] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11[1] = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        *puVar11 = CONCAT17(param_2,CONCAT16(param_2,CONCAT15(param_2,CONCAT14(param_2,CONCAT13(
                                                  param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)
                                                                  ))))));
        puVar11 = puVar11 + 8;
        uVar8 = uVar8 - 0x40;
      } while (uVar8 != 0);
    }
    do {
      if (uVar10 == uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3630);
        (*pcVar2)();
      }
      *puVar6 = param_2;
      if (uVar5 == uVar9) {
        uVar8 = uVar5;
        if ((long)uVar5 < (long)param_1) goto LAB_100ab36f0;
        break;
      }
      uVar1 = uVar9 + 1;
      uVar8 = param_1;
      puVar6 = puVar6 + 1;
      uVar10 = uVar9;
      uVar9 = uVar1;
    } while (param_1 + 1 != uVar1);
    bVar3 = SCARRY8(uVar4,uVar8);
    uVar4 = uVar4 + uVar8;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3704);
      (*pcVar2)();
    }
    *(ulong *)(uVar12 + 0x10) = uVar4;
    if (uVar8 != uVar5) goto LAB_100ab3614;
  }
  if (uVar5 != param_1) {
    if ((long)param_1 <= (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab370c);
      (*pcVar2)();
    }
    uVar9 = *(ulong *)(uVar12 + 0x18);
    uVar5 = uVar5 + 1;
    do {
      uVar8 = uVar9 >> 1;
      if ((long)uVar8 < (long)(uVar4 + 1)) {
        uVar7 = (ulong)(1 < uVar9);
        FUN_100aa7840(uVar7,uVar4 + 1,1,uVar12);
        uVar9 = *(ulong *)(uVar7 + 0x18);
        uVar8 = uVar9 >> 1;
        uVar12 = uVar7;
      }
      uVar7 = uVar5;
      if ((long)uVar4 < (long)uVar8) {
        uVar7 = (uVar5 + uVar8) - uVar4;
        lVar13 = uVar4 + 0x20;
        uVar10 = uVar5;
        do {
          *(undefined1 *)(uVar12 + lVar13) = param_2;
          if (param_1 == uVar10) {
            *(long *)(uVar12 + 0x10) = lVar13 + -0x1f;
            goto LAB_100ab3614;
          }
          if (((long)uVar5 < 0) || ((long)param_1 <= (long)uVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3708);
            (*pcVar2)();
          }
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 1;
          uVar4 = uVar8;
        } while (lVar13 - uVar8 != 0x20);
      }
      *(ulong *)(uVar12 + 0x10) = uVar4;
      uVar5 = uVar7;
    } while( true );
  }
LAB_100ab3614:
  *unaff_x20 = uVar12;
  return;
}



/* Address: 0x100ab370c | FUN_100ab370c */

void FUN_100ab370c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab37f8);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100aa7c9c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab37fc);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab3800);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab3804);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100ab3804 | FUN_100ab3804 */

void FUN_100ab3804(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uStack_44;
  byte local_43;
  byte local_42;
  char local_41;
  
  uVar9 = (uint)param_1 & 0xff;
  uVar4 = (uint)param_1 >> 8 & 0xff;
  uVar5 = (ulong)(uVar4 - uVar9);
  if (uVar4 < uVar9) {
    uVar5 = -(ulong)(uVar9 - uVar4);
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,uVar5 + 1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab38ec);
    (*pcVar2)();
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar7 == 0) ||
     (uVar6 = *(ulong *)(uVar8 + 0x18) >> 1, (long)uVar6 < (long)(lVar11 + uVar5 + 1))) {
    FUN_100aa7840();
    uVar6 = *(ulong *)(uVar7 + 0x18) >> 1;
    uVar8 = uVar7;
  }
  puVar12 = (undefined1 *)(uVar6 - *(long *)(uVar8 + 0x10));
  puVar3 = &uStack_44;
  FUN_100ab3b3c(puVar3,param_1,uVar8 + *(long *)(uVar8 + 0x10) + 0x20,puVar12);
  if ((long)puVar3 <= (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab38f0);
    (*pcVar2)();
  }
  if (0 < (long)puVar3) {
    if (SCARRY8(*(long *)(uVar8 + 0x10),(long)puVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3920);
      (*pcVar2)();
    }
    *(undefined1 **)(uVar8 + 0x10) = puVar3 + *(long *)(uVar8 + 0x10);
  }
  if ((puVar3 == puVar12) && (local_41 != '\x01')) {
    uVar5 = *(ulong *)(uVar8 + 0x10);
    uVar9 = (uint)local_42;
    if ((uint)local_42 == (uint)local_43) {
      uVar4 = 0;
      bVar1 = true;
    }
    else {
      uVar4 = local_42 + 1;
      if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab39fc);
        (*pcVar2)();
      }
      bVar1 = false;
    }
    do {
      uVar7 = *(ulong *)(uVar8 + 0x18) >> 1;
      if ((long)uVar7 < (long)(uVar5 + 1)) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100aa7840(uVar6,uVar5 + 1,1,uVar8);
        uVar7 = *(ulong *)(uVar6 + 0x18) >> 1;
        uVar8 = uVar6;
      }
      if ((long)uVar5 < (long)uVar7) {
        lVar11 = uVar5 + 0x20;
        uVar10 = uVar9;
        do {
          uVar9 = uVar4;
          *(char *)(uVar8 + lVar11) = (char)uVar10;
          if (bVar1) {
            *(long *)(uVar8 + 0x10) = lVar11 + -0x1f;
            goto LAB_100ab38cc;
          }
          if ((uint)local_43 == (uVar9 & 0xff)) {
            uVar4 = 0;
            bVar1 = true;
          }
          else {
            uVar4 = (uVar9 & 0xff) + 1;
            if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab39f8);
              (*pcVar2)();
            }
            bVar1 = false;
          }
          lVar11 = lVar11 + 1;
          uVar5 = uVar7;
          uVar10 = uVar9;
        } while (lVar11 - uVar7 != 0x20);
      }
      *(ulong *)(uVar8 + 0x10) = uVar5;
    } while( true );
  }
LAB_100ab38cc:
  *unaff_x20 = uVar8;
  return;
}



/* Address: 0x100ab39fc | FUN_100ab39fc */

void FUN_100ab39fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100ab3a08 | FUN_100ab3a08 */

void FUN_100ab3a08(undefined1 *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  
  if (DAT_100ff8190 != -1) {
    _swift_once(&DAT_100ff8190,FUN_100ab3a88);
  }
  lVar1 = DAT_100ff8198;
  uVar3 = *(ulong *)(DAT_100ff8198 + 0x10);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3a88);
    (*pcVar2)();
  }
  FUN_100324c28();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3a80);
    (*pcVar2)();
  }
  if (uVar3 < *(ulong *)(lVar1 + 0x10)) {
    *param_1 = *(undefined1 *)(lVar1 + uVar3 + 0x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3a84);
  (*pcVar2)();
}



/* Address: 0x100ab3a88 | FUN_100ab3a88 */

void FUN_100ab3a88(undefined8 param_1)

{
  FUN_100ab3aa4();
  DAT_100ff8198 = param_1;
  return;
}



/* Address: 0x100ab3aa4 | FUN_100ab3aa4 */

undefined * FUN_100ab3aa4(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = &DAT_100ff6aa8;
  FUN_1000f7830(&DAT_100ff6aa8,&DAT_100c90a58);
  _swift_allocObject();
  puVar4 = puVar3;
  _malloc_size();
  *(undefined8 *)(puVar3 + 0x10) = 0x1a;
  *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  pcVar1 = puVar3 + 0x20;
  pcVar2 = puVar3 + 0x28;
  pcVar2[0] = 'i';
  pcVar2[1] = 'j';
  pcVar2[2] = 'k';
  pcVar2[3] = 'l';
  pcVar2[4] = 'm';
  pcVar2[5] = 'n';
  pcVar2[6] = 'o';
  pcVar2[7] = 'p';
  pcVar1[0] = 'a';
  pcVar1[1] = 'b';
  pcVar1[2] = 'c';
  pcVar1[3] = 'd';
  pcVar1[4] = 'e';
  pcVar1[5] = 'f';
  pcVar1[6] = 'g';
  pcVar1[7] = 'h';
  *(undefined8 *)(puVar3 + 0x30) = 0x7877767574737271;
  *(undefined2 *)(puVar3 + 0x38) = 0x7a79;
  FUN_100ab3804(0x5a41);
  FUN_100ab3804(0x3930);
  return puVar3;
}



/* Address: 0x100ab3b3c | FUN_100ab3b3c */

long FUN_100ab3b3c(undefined1 *param_1,uint param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = param_2;
  if (param_3 == (undefined1 *)0x0) {
    uVar4 = 0;
    param_4 = 0;
  }
  else if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab3bf4);
      (*pcVar1)();
    }
    if ((param_2 & 0xff) == (param_2 & 0xff00) >> 8) {
      param_4 = 1;
    }
    else {
      lVar5 = -1;
      puVar2 = param_3;
      uVar6 = param_2;
      do {
        uVar3 = (uVar6 & 0xff) + 1;
        if (uVar3 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab3bf0);
          (*pcVar1)();
        }
        param_3 = puVar2 + 1;
        *puVar2 = (char)uVar6;
        if (param_4 + lVar5 == 0) {
          uVar4 = 0;
          goto LAB_100ab3bd0;
        }
        lVar5 = lVar5 + -1;
        puVar2 = param_3;
        uVar6 = uVar3;
      } while ((uVar3 & 0xff) != (param_2 & 0xff00) >> 8);
      param_4 = -lVar5;
    }
    *param_3 = (char)uVar3;
    uVar4 = 1;
    uVar3 = 0;
  }
LAB_100ab3bd0:
  *param_1 = (char)param_2;
  param_1[1] = (char)(param_2 >> 8);
  param_1[2] = (char)uVar3;
  param_1[3] = uVar4;
  return param_4;
}



/* Address: 0x100ab3bf4 | FUN_100ab3bf4 */

char * FUN_100ab3bf4(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_100ab3c48();
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_release(param_1);
  return tVar2.result.str;
}



/* Address: 0x100ab3c48 | FUN_100ab3c48 */

undefined * FUN_100ab3c48(long param_1,long param_2,code *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_69;
  long local_68;
  
  puVar7 = (undefined *)(param_2 - param_1);
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e64);
    (*pcVar2)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
    FUN_100a4feec(puVar7,0);
    _swift_retain();
  }
  uVar10 = *(ulong *)(puVar4 + 0x18);
  _swift_release(puVar4);
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e68);
    (*pcVar2)();
  }
  puVar5 = puVar4 + 0x20;
  uVar10 = uVar10 >> 1;
  puVar8 = puVar5;
  lVar11 = param_1;
  if (puVar7 != (undefined *)0x0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e6c);
      (*pcVar2)();
    }
    do {
      if (param_2 == lVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e58);
        (*pcVar2)();
      }
      local_68 = lVar11;
      (*param_3)(&local_69,&local_68);
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + 1;
      puVar8 = puVar5 + 1;
      *puVar5 = local_69;
      puVar5 = puVar8;
    } while (param_2 != lVar11);
  }
  if (lVar11 != param_2) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e70);
      (*pcVar2)();
    }
    if (param_2 <= lVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e74);
      (*pcVar2)();
    }
    if (param_1 <= lVar11) {
      puVar7 = puVar4;
      do {
        local_68 = lVar11;
        (*param_3)(&local_69,&local_68);
        uVar1 = local_69;
        puVar4 = puVar7;
        if (uVar10 == 0) {
          uVar10 = *(ulong *)(puVar7 + 0x18);
          if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e60);
            (*pcVar2)();
          }
          uVar6 = uVar10 & 0xfffffffffffffffe;
          if ((long)uVar10 < 2) {
            uVar6 = 1;
          }
          puVar4 = &DAT_100ff6aa8;
          FUN_1000f7830(&DAT_100ff6aa8,&DAT_100c90a58);
          _swift_allocObject();
          puVar5 = puVar4;
          _malloc_size();
          uVar9 = (long)puVar5 * 2 - 0x40;
          *(ulong *)(puVar4 + 0x10) = uVar6;
          *(ulong *)(puVar4 + 0x18) = uVar9;
          puVar8 = puVar4 + 0x20;
          uVar10 = *(ulong *)(puVar7 + 0x18) >> 1;
          if (*(long *)(puVar7 + 0x10) != 0) {
            if ((puVar4 != puVar7) || (puVar7 + 0x20 + uVar10 <= puVar8)) {
              _memmove(puVar8,puVar7 + 0x20,uVar10);
            }
            *(undefined8 *)(puVar7 + 0x10) = 0;
          }
          puVar8 = puVar8 + uVar10;
          uVar10 = (uVar9 >> 1) - uVar10;
          _swift_release(puVar7);
        }
        bVar3 = SBORROW8(uVar10,1);
        uVar10 = uVar10 - 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e5c);
          (*pcVar2)();
        }
        *puVar8 = uVar1;
        if (param_2 + -1 == lVar11) goto LAB_100ab3d14;
        lVar11 = lVar11 + 1;
        puVar7 = puVar4;
        puVar8 = puVar8 + 1;
      } while (param_1 <= lVar11);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e54);
    (*pcVar2)();
  }
LAB_100ab3d14:
  if (1 < *(ulong *)(puVar4 + 0x18)) {
    uVar6 = *(ulong *)(puVar4 + 0x18) >> 1;
    if (SBORROW8(uVar6,uVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ab3e78);
      (*pcVar2)();
    }
    *(ulong *)(puVar4 + 0x10) = uVar6 - uVar10;
  }
  return puVar4;
}



/* Address: 0x100ab3e78 | FUN_100ab3e78 */

void FUN_100ab3e78(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  
  if (param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ab3fbc);
    (*pcVar1)();
  }
  local_78 = 0;
  local_68 = FUN_100ab3a08;
  uStack_60 = 0;
  puVar3 = &DAT_100ff6eb8;
  lStack_70 = param_1;
  FUN_1000f7830(&DAT_100ff6eb8,&DAT_100c91fb8);
  puVar4 = &DAT_100ff6ec0;
  FUN_1000f7830(&DAT_100ff6ec0,&DAT_100c91fc0);
  puVar5 = &local_a0;
  _swift_dynamicCast(puVar5,&local_78,puVar3,puVar4,6);
  if ((int)puVar5 == 0) {
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_100ab3fbc(&local_a0);
  }
  else {
    FUN_100076508(&local_a0,auStack_58);
    FUN_100004640(auStack_58,local_40);
    bVar2 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
    if (bVar2) {
      FUN_100004640(auStack_58,local_40);
      Swift::_HasContiguousBytes::_withUnsafeBytes();
      FUN_100004594(auStack_58);
      return;
    }
    FUN_100004594(auStack_58);
  }
  FUN_100ab3bf4(0,param_1,FUN_100ab3a08,0);
  return;
}



/* Address: 0x100ab3fbc | FUN_100ab3fbc */

undefined8 FUN_100ab3fbc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff6ec8;
  FUN_1000f7830(&DAT_100ff6ec8,&DAT_100c91fc8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ab4004 | FUN_100ab4004 */

undefined8 FUN_100ab4004(undefined8 param_1)

{
  FilePath FVar1;
  undefined8 local_38;
  
  System::FilePath::_withCString((FilePath)0x100ab4070);
  FVar1 = System::FilePath::typeMetadataAccessor();
  (**(code **)(*(long *)(FVar1.unknown + -8) + 8))(param_1,FVar1.unknown);
  return local_38;
}



/* Address: 0x100ab4070 | FUN_100ab4070 */

void FUN_100ab4070(undefined8 *param_1,undefined8 param_2)

{
  thunk_FUN_1005b3a14();
  *param_1 = param_2;
  return;
}



/* Address: 0x100ab409c | thunk_FUN_1005ac70c */

void thunk_FUN_1005ac70c(void)

{
  FUN_1005ac70c();
  return;
}



/* Address: 0x100ab40a0 | thunk_FUN_1005b3cd0 */

void thunk_FUN_1005b3cd0(void)

{
  thunk_FUN_1005b3cd0();
  return;
}



/* Address: 0x100ab40a4 | thunk_FUN_1005b32e4 */

void thunk_FUN_1005b32e4(void)

{
  FUN_1005b32e4();
  return;
}



/* Address: 0x100ab40a8 | thunk_FUN_100556d68 */

void thunk_FUN_100556d68(void)

{
  thunk_FUN_100556d68();
  return;
}



/* Address: 0x100ab40ac | thunk_FUN_1005ac830 */

void thunk_FUN_1005ac830(void)

{
  FUN_1005ac830();
  return;
}



/* Address: 0x100ab40b0 | FUN_100ab40b0 */

void FUN_100ab40b0(undefined8 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005ac830(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100ab40f4 | FUN_100ab40f4 */

void FUN_100ab40f4(undefined8 *param_1,undefined8 *param_2)

{
  thunk_FUN_100556d68(*param_1,*param_2);
  return;
}



/* Address: 0x100ab4100 | FUN_100ab4100 */

void FUN_100ab4100(void)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005ac830(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100ab4144 | FUN_100ab4144 */

void FUN_100ab4144(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005ac830(param_1,*unaff_x20);
  return;
}



/* Address: 0x100ab414c | FUN_100ab414c */

void FUN_100ab414c(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005ac830(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100ab418c | FUN_100ab418c */

void FUN_100ab418c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  thunk_FUN_1005b3cd0(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ab41b8 | FUN_100ab41b8 */

void FUN_100ab41b8(undefined8 param_1,undefined8 param_2)

{
  FilePath FVar1;
  
  FVar1 = System::FilePath::typeMetadataAccessor();
  FUN_1005b32d0(param_1,FUN_100ab4214,0,param_2,FVar1.unknown);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100ab4214 | FUN_100ab4214 */

void FUN_100ab4214(UnsafePointer<__int8> param_1)

{
  System::FilePath::init(param_1);
  return;
}



/* Address: 0x100ab4238 | thunk_FUN_100ab423c */

void thunk_FUN_100ab423c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93a50,&DAT_100f303d0);
  DAT_100ff81a0 = pTVar1;
  return;
}



/* Address: 0x100ab423c | FUN_100ab423c */

void FUN_100ab423c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93a50,&DAT_100f303d0);
  DAT_100ff81a0 = pTVar1;
  return;
}



/* Address: 0x100ab427c | thunk_FUN_100ab4280 */

void thunk_FUN_100ab4280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93b48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93b48,&DAT_100f303d0);
  DAT_100ff81a8 = pTVar1;
  return;
}



/* Address: 0x100ab4280 | FUN_100ab4280 */

void FUN_100ab4280(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93b48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93b48,&DAT_100f303d0);
  DAT_100ff81a8 = pTVar1;
  return;
}



/* Address: 0x100ab42c0 | thunk_FUN_100ab42c4 */

void thunk_FUN_100ab42c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93b88,&DAT_100f303d0);
  DAT_100ff81b0 = pTVar1;
  return;
}



/* Address: 0x100ab42c4 | FUN_100ab42c4 */

void FUN_100ab42c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93b88,&DAT_100f303d0);
  DAT_100ff81b0 = pTVar1;
  return;
}



/* Address: 0x100ab4304 | FUN_100ab4304 */

undefined1  [16] FUN_100ab4304(void)

{
  return ZEXT816(0x100f303d0);
}



/* Address: 0x100ab4314 | thunk_FUN_1005b3cd0 */

void thunk_FUN_1005b3cd0(void)

{
  thunk_FUN_1005b3cd0();
  return;
}



/* Address: 0x100ab4318 | thunk_FUN_100ab418c */

void thunk_FUN_100ab418c(void)

{
  FUN_100ab418c();
  return;
}



/* Address: 0x100ab431c | FUN_100ab431c */

ulong FUN_100ab431c(ulong param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 2;
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1 | (ulong)(param_2 & 0xffffff | 0x1000000) << 0x10 | 0x1000000000000;
}



/* Address: 0x100ab433c | FUN_100ab433c */

uint FUN_100ab433c(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1 & 1;
}



/* Address: 0x100ab4354 | FUN_100ab4354 */

uint FUN_100ab4354(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x1a4;
  if ((param_1 & 0xff00000000) != 0x100000000) {
    uVar1 = (uint)(param_1 >> 0x10) & 0xffff;
  }
  uVar2 = 0x10000;
  if ((param_1 & 0xff0000000000) != 0x20000000000) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Address: 0x100ab4384 | FUN_100ab4384 */

bool FUN_100ab4384(uint param_1,uint param_2)

{
  return ((param_1 ^ param_2) & 0x101) == 0;
}



/* Address: 0x100ab4398 | thunk_FUN_100ab43d4 */

void thunk_FUN_100ab43d4(void)

{
  FUN_100ab43d4();
  return;
}



/* Address: 0x100ab439c | thunk_FUN_100ab4404 */

void thunk_FUN_100ab4404(void)

{
  FUN_100ab4404();
  return;
}



/* Address: 0x100ab43a0 | thunk_FUN_100ab4454 */

void thunk_FUN_100ab4454(void)

{
  FUN_100ab4454();
  return;
}



/* Address: 0x100ab43a4 | thunk_FUN_100ab44b0 */

void thunk_FUN_100ab44b0(void)

{
  FUN_100ab44b0();
  return;
}



/* Address: 0x100ab43a8 | thunk_FUN_100ab44ec */

void thunk_FUN_100ab44ec(void)

{
  FUN_100ab44ec();
  return;
}



/* Address: 0x100ab43ac | FUN_100ab43ac */

byte FUN_100ab43ac(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_2[1] ^ param_1[1]) ^ 0xff) & 1;
}



/* Address: 0x100ab43d4 | FUN_100ab43d4 */

void FUN_100ab43d4(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar2 = SUB84(param_2.unknown,0);
  Swift::Hasher::_combine((byte)param_2.unknown & 1,param_2);
  HVar1.unknown._4_4_ = uVar3;
  HVar1.unknown._0_4_ = uVar2;
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 8) & 1,HVar1);
  return;
}



/* Address: 0x100ab4404 | FUN_100ab4404 */

void FUN_100ab4404(uint param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((byte)param_1 & 1,param_2);
  uVar1 = param_1 >> 8 & 1;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::_combine((__uint8)uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100ab4454 | FUN_100ab4454 */

void FUN_100ab4454(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  byte bVar2;
  __uint8 *unaff_x20;
  Hasher HVar3;
  
  _Var1 = *unaff_x20;
  bVar2 = unaff_x20[1];
  HVar3.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(bVar2,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100ab44b0 | FUN_100ab44b0 */

void FUN_100ab44b0(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint8 *unaff_x20;
  
  _Var1 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100ab44ec | FUN_100ab44ec */

void FUN_100ab44ec(__int64 param_1,Hasher param_2)

{
  __uint8 _Var1;
  byte bVar2;
  __uint8 *unaff_x20;
  Hasher HVar3;
  
  _Var1 = *unaff_x20;
  bVar2 = unaff_x20[1];
  HVar3.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(bVar2,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100ab4544 | FUN_100ab4544 */

void FUN_100ab4544(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 2) = param_1;
  return;
}



/* Address: 0x100ab454c | FUN_100ab454c */

ulong FUN_100ab454c(ulong param_1)

{
  return param_1 >> 0x30 & 1;
}



/* Address: 0x100ab4554 | FUN_100ab4554 */

void FUN_100ab4554(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 6) = param_1;
  return;
}



/* Address: 0x100ab455c | FUN_100ab455c */

undefined1  [16] FUN_100ab455c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 6;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100ab456c | FUN_100ab456c */

ulong FUN_100ab456c(ulong param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  return uVar2 | uVar1 | (ulong)param_2 << 0x10 | param_1 & 0xff;
}



/* Address: 0x100ab459c | FUN_100ab459c */

uint FUN_100ab459c(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x1000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1 | param_1 & 0xffffff;
}


