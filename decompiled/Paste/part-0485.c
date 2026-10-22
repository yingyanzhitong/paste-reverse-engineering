/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005ad458 | FUN_1005ad458 */

bool FUN_1005ad458(long *param_1,long *param_2)

{
  return *param_1 <= *param_2;
}



/* Address: 0x1005ad46c | FUN_1005ad46c */

bool FUN_1005ad46c(long *param_1,long *param_2)

{
  return *param_2 <= *param_1;
}



/* Address: 0x1005ad480 | FUN_1005ad480 */

bool FUN_1005ad480(long *param_1,long *param_2)

{
  return *param_2 < *param_1;
}



/* Address: 0x1005ad494 | FUN_1005ad494 */

undefined8 FUN_1005ad494(undefined8 param_1,undefined8 param_2)

{
  FUN_1005b2a38();
  return param_2;
}



/* Address: 0x1005ad4ac | thunk_FUN_1005b2ac8 */

/* WARNING: Removing unreachable block (ram,0x0001005b2ca4) */

undefined1  [16] thunk_FUN_1005b2ac8(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((long)param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2cac);
    (*pcVar2)();
  }
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 == 1) {
LAB_1005b2b30:
    uVar4 = 0;
  }
  else {
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2cb8);
      (*pcVar2)();
    }
    if (*(char *)(param_2 + 0x20) != '/') goto LAB_1005b2b30;
    if (uVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2cbc);
      (*pcVar2)();
    }
    uVar4 = 1;
    if (param_1 == 1) {
      uVar5 = 0;
      param_1 = uVar4;
      goto LAB_1005b2c68;
    }
  }
  if (uVar3 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2cb0);
    (*pcVar2)();
  }
  uVar5 = param_1;
  if (param_1 == uVar3 - 1) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_1005b3244(param_1 - 1);
  }
  while ((uVar4 != uVar5 && (uVar5 != 0))) {
    uVar3 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2c94);
      (*pcVar2)();
    }
    if ((((long)uVar5 <= (long)uVar3) || ((long)uVar3 < 0)) || ((long)uVar3 < 0)) {
LAB_1005b2c94:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2c98);
      (*pcVar2)();
    }
    uVar6 = *(ulong *)(param_2 + 0x10);
    if ((long)(uVar6 - 1) <= (long)uVar3) goto LAB_1005b2c94;
    if (*(char *)(param_2 + uVar3 + 0x20) == '/') break;
    if ((uVar6 == 0) || (uVar6 <= uVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2c9c);
      (*pcVar2)();
    }
    if (uVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2ca0);
      (*pcVar2)();
    }
    lVar7 = param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar7 == 0) || (*(ulong *)(param_2 + 0x18) >> 1 < uVar6 - 1)) {
      FUN_1005afb14();
      param_2 = lVar7;
    }
    lVar7 = *(long *)(param_2 + 0x10);
    _memmove((void *)(param_2 + 0x20 + uVar3),(void *)(param_2 + 0x20 + uVar5),lVar7 - uVar5);
    uVar6 = lVar7 - 1;
    *(ulong *)(param_2 + 0x10) = uVar6;
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2ca4);
      (*pcVar2)();
    }
    uVar1 = uVar5 - 1;
    uVar5 = uVar3;
    if (uVar6 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2c54);
      (*pcVar2)();
    }
  }
  if ((long)param_1 < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b2cb4);
    (*pcVar2)();
  }
  _swift_bridgeObjectRelease(param_2);
LAB_1005b2c68:
  auVar8._8_8_ = param_1;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Address: 0x1005ad4b0 | FUN_1005ad4b0 */

void FUN_1005ad4b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1005b2a38();
  if (lVar2 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad504);
    (*pcVar1)();
  }
  if (param_1 != lVar2) {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad508);
  (*pcVar1)();
}



/* Address: 0x1005ad508 | FUN_1005ad508 */

void FUN_1005ad508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1005b2ac8(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ad534 | FUN_1005ad534 */

void FUN_1005ad534(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  FUN_1005b2ac8(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ad560 | FUN_1005ad560 */

void FUN_1005ad560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1005ad58c(uVar1,param_3,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ad58c | FUN_1005ad58c */

void FUN_1005ad58c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_2 < 0) {
    lVar3 = 0;
    do {
      lVar3 = lVar3 + -1;
      FUN_1005b2ac8();
    } while (param_2 < lVar3);
  }
  else if (param_2 != 0) {
    lVar3 = 0;
    lVar4 = *(long *)(param_3 + 0x10);
    do {
      lVar3 = lVar3 + 1;
      if ((param_1 == 0) && (lVar4 != 1)) {
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad660);
          (*pcVar1)();
        }
        if (*(char *)(param_3 + 0x20) != '/') goto LAB_1005ad5ec;
        param_1 = 1;
      }
      else {
LAB_1005ad5ec:
        if ((lVar4 <= param_1) || (lVar4 == 0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad658);
          (*pcVar1)();
        }
        if (param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad65c);
          (*pcVar1)();
        }
        if (param_1 != lVar4 + -1) {
          lVar2 = param_1 + 1;
          pcVar5 = (char *)(param_3 + 0x20 + param_1);
          do {
            param_1 = lVar2;
            if (*pcVar5 == '/') break;
            lVar2 = lVar2 + 1;
            param_1 = lVar4 + -1;
            pcVar5 = pcVar5 + 1;
          } while (lVar4 != lVar2);
        }
      }
    } while (lVar3 < param_2);
  }
  return;
}



/* Address: 0x1005ad660 | thunk_FUN_1005ad99c */

void thunk_FUN_1005ad99c(void)

{
  FUN_1005ad99c();
  return;
}



/* Address: 0x1005ad664 | FUN_1005ad664 */

void FUN_1005ad664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1005ad674(*param_1,*param_2,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1005ad674 | FUN_1005ad674 */

long FUN_1005ad674(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  if (param_2 <= param_1) {
    if (param_2 < param_1) {
      lVar6 = 0;
      do {
        bVar2 = SBORROW8(lVar6,1);
        lVar6 = lVar6 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad77c);
          (*pcVar1)();
        }
        FUN_1005b2ac8();
      } while (param_1 != param_2);
    }
    else {
      lVar6 = 0;
    }
    return lVar6;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = 1;
  do {
    if ((param_1 == 0) && (lVar4 != 1)) {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad780);
        (*pcVar1)();
      }
      if (*(char *)(param_3 + 0x20) != '/') goto LAB_1005ad6f0;
      if (param_2 == 1) {
        return lVar6;
      }
      param_1 = 1;
    }
    else {
LAB_1005ad6f0:
      if ((lVar4 <= param_1) || (lVar4 == 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad774);
        (*pcVar1)();
      }
      if (param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad778);
        (*pcVar1)();
      }
      if (param_1 != lVar4 + -1) {
        lVar3 = param_1 + 1;
        pcVar5 = (char *)(param_3 + 0x20 + param_1);
        do {
          param_1 = lVar3;
          if (*pcVar5 == '/') break;
          lVar3 = lVar3 + 1;
          param_1 = lVar4 + -1;
          pcVar5 = pcVar5 + 1;
        } while (lVar4 != lVar3);
      }
      if (param_1 == param_2) {
        return lVar6;
      }
    }
    bVar2 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad770);
      (*pcVar1)();
    }
  } while( true );
}



/* Address: 0x1005ad780 | FUN_1005ad780 */

void FUN_1005ad780(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 8);
  return;
}



/* Address: 0x1005ad78c | FUN_1005ad78c */

void FUN_1005ad78c(long *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(long *)(*unaff_x20 + 0x10) + -1;
  return;
}



/* Address: 0x1005ad7a0 | FUN_1005ad7a0 */

undefined1  [16] FUN_1005ad7a0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *param_2;
  uVar3 = *unaff_x20;
  lVar2 = lVar4;
  FUN_1005b2a38(lVar4,uVar3);
  if (lVar2 < lVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad800);
    (*pcVar1)();
  }
  if (lVar4 != lVar2) {
    *param_1 = uVar3;
    param_1[1] = lVar4;
    param_1[2] = lVar2;
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = FUN_100004520;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad804);
  (*pcVar1)();
}



/* Address: 0x1005ad804 | FUN_1005ad804 */

void FUN_1005ad804(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar5 = *(long *)(lVar1 + 0x10);
  if (lVar5 <= lVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ad840);
    (*pcVar3)();
  }
  if (lVar2 <= *param_2) {
    lVar4 = param_2[1];
    if (lVar4 < lVar5) {
      *param_1 = *param_2;
      param_1[1] = lVar4;
      param_1[2] = lVar1;
      param_1[3] = lVar2;
      _swift_bridgeObjectRetain();
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ad848);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ad844);
  (*pcVar3)();
}



/* Address: 0x1005ad848 | FUN_1005ad848 */

void FUN_1005ad848(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = unaff_x20[1];
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  *param_1 = *unaff_x20;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + -1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1005ad860 | FUN_1005ad860 */

bool FUN_1005ad860(void)

{
  long *unaff_x20;
  
  return unaff_x20[1] == *(long *)(*unaff_x20 + 0x10) + -1;
}



/* Address: 0x1005ad878 | FUN_1005ad878 */

long FUN_1005ad878(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar7 = lVar3 + -1;
  if (lVar7 <= param_2) {
    if (param_2 < lVar3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        bVar2 = SBORROW8(lVar3,1);
        lVar3 = lVar3 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad980);
          (*pcVar1)();
        }
        FUN_1005b2ac8(param_2,param_1);
      } while (param_2 != lVar7);
    }
    return lVar3;
  }
  lVar6 = 1;
  do {
    if ((lVar3 == 1) || (param_2 != 0)) {
      if ((lVar3 == 0) || (lVar3 <= param_2)) {
LAB_1005ad980:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad984);
        (*pcVar1)();
      }
      if (param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad988);
        (*pcVar1)();
      }
LAB_1005ad8f0:
      if (param_2 == lVar7) {
        return lVar6;
      }
      lVar4 = (2 - lVar3) + param_2;
      pcVar5 = (char *)(param_1 + 0x20 + param_2);
      while( true ) {
        param_2 = param_2 + 1;
        if (*pcVar5 == '/') break;
        lVar4 = lVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (lVar4 == 1) {
          return lVar6;
        }
      }
      if (lVar4 == 0) {
        return lVar6;
      }
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad98c);
        (*pcVar1)();
      }
      if (*(char *)(param_1 + 0x20) != '/') {
        if (lVar3 < 1) goto LAB_1005ad980;
        goto LAB_1005ad8f0;
      }
      if (lVar7 == 1) {
        return lVar6;
      }
      param_2 = 1;
    }
    bVar2 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad934);
      (*pcVar1)();
    }
  } while( true );
}



/* Address: 0x1005ad98c | FUN_1005ad98c */

void FUN_1005ad98c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x100;
  return;
}



/* Address: 0x1005ad99c | FUN_1005ad99c */

void FUN_1005ad99c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1005af94c(uVar1,param_3,*param_4,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x1005ad9d0 | FUN_1005ad9d0 */

void FUN_1005ad9d0(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && *param_1 < param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad9ec);
  (*pcVar1)();
}



/* Address: 0x1005ad9ec | FUN_1005ad9ec */

void FUN_1005ad9ec(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && *param_1 <= param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ada08);
  (*pcVar1)();
}



/* Address: 0x1005ada08 | FUN_1005ada08 */

void FUN_1005ada08(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && param_1[1] <= param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ada24);
  (*pcVar1)();
}



/* Address: 0x1005ada24 | FUN_1005ada24 */

void FUN_1005ada24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1005b2a38(*param_2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ada50 | FUN_1005ada50 */

void FUN_1005ada50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1005b2a38(*param_1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ada7c | FUN_1005ada7c */

void FUN_1005ada7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1005ada8c | FUN_1005ada8c */

void FUN_1005ada8c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1005ad878(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1005ada94 | FUN_1005ada94 */

undefined8 * FUN_1005ada94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 local_48 [3];
  
  puVar1 = (undefined8 *)*unaff_x20;
  uVar2 = unaff_x20[1];
  puVar4 = puVar1;
  FUN_1005ad878(puVar1,uVar2);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(puVar1);
    puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar5 = puVar4;
    FUN_1005bba94();
    puVar6 = local_48;
    FUN_1005adb2c(puVar6,puVar5 + 4,puVar4,puVar1,uVar2);
    _swift_bridgeObjectRelease(local_48[0]);
    if (puVar6 != puVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005adafc);
      (*pcVar3)();
    }
  }
  return puVar5;
}



/* Address: 0x1005adb24 | FUN_1005adb24 */

void FUN_1005adb24(void)

{
  FUN_1005adb2c();
  return;
}



/* Address: 0x1005adb2c | FUN_1005adb2c */

long FUN_1005adb2c(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_5;
  if (param_2 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcf4);
        (*pcVar1)();
      }
      lVar5 = 0;
      while( true ) {
        lVar4 = *(long *)(param_4 + 0x10);
        lVar6 = lVar4 + -1;
        if (lVar7 == lVar6) break;
        lVar5 = lVar5 + 1;
        lVar3 = lVar7;
        if (lVar7 == 0 && lVar6 != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adce8);
            (*pcVar1)();
          }
          if (*(char *)(param_4 + 0x20) != '/') goto LAB_1005adbcc;
          if (lVar4 == 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcf0);
            (*pcVar1)();
          }
          lVar2 = 1;
LAB_1005adc20:
          *param_2 = param_4;
          param_2[1] = lVar7;
          lVar7 = 1;
        }
        else {
          if (lVar4 <= lVar7 || lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcec);
            (*pcVar1)();
          }
          if (lVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcd8);
            (*pcVar1)();
          }
LAB_1005adbcc:
          do {
            lVar2 = lVar3;
            if (*(char *)(param_4 + lVar3 + 0x20) == '/') break;
            lVar3 = lVar3 + 1;
            lVar2 = lVar6;
          } while (lVar6 != lVar3);
          if (lVar2 < lVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcdc);
            (*pcVar1)();
          }
          if (lVar7 == lVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adcd4);
            (*pcVar1)();
          }
          if (lVar7 == 0 && lVar6 != 0) {
            if (*(char *)(param_4 + 0x20) == '/') goto LAB_1005adc20;
            if (lVar4 <= lVar7) goto LAB_1005adce0;
          }
          else {
            if ((lVar4 <= lVar7) || (lVar4 == 0)) {
LAB_1005adce0:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adce4);
              (*pcVar1)();
            }
            if (lVar7 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adce0);
              (*pcVar1)();
            }
          }
          lVar3 = lVar7 + 0x20;
          do {
            if (*(char *)(param_4 + lVar3) == '/') {
              lVar6 = lVar3 + -0x1f;
              break;
            }
            lVar3 = lVar3 + 1;
          } while ((1 - lVar4) + lVar3 != 0x20);
          *param_2 = param_4;
          param_2[1] = lVar7;
          lVar7 = lVar6;
        }
        param_2[2] = lVar2;
        if (lVar5 == param_3) {
          _swift_bridgeObjectRetain(param_4);
          lVar5 = param_3;
          break;
        }
        param_2 = param_2 + 3;
        _swift_bridgeObjectRetain(param_4);
        if (lVar5 == param_3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adc8c);
          (*pcVar1)();
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = lVar7;
  return lVar5;
}



/* Address: 0x1005adcf4 | FUN_1005adcf4 */

void FUN_1005adcf4(void)

{
  (extension_Swift)::Swift::Sequence::_withContiguousStorageIfAvailable();
  return;
}



/* Address: 0x1005add14 | FUN_1005add14 */

void FUN_1005add14(void)

{
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1005add48 | FUN_1005add48 */

void FUN_1005add48(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar8 = *unaff_x20;
  lVar6 = *(long *)(lVar8 + 0x10);
  if (unaff_x20[1] != lVar6 + -1) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adf78);
      (*pcVar1)();
    }
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    puVar2[0x20] = 0;
    if (param_1 == *(long *)(lVar8 + 0x10) + -1) {
      puVar3 = (undefined *)0x1;
      FUN_1005afb14(1,2,1,puVar2);
      sVar10 = *(size_t *)(puVar3 + 0x10);
      _memmove(puVar3 + 0x21,puVar3 + 0x20,sVar10);
      *(size_t *)(puVar3 + 0x10) = sVar10 + 1;
      puVar3[0x20] = 0x2f;
      FUN_1005ae5b0(param_3,param_4,param_5);
    }
    else {
      FUN_1005ae5b0(param_3,param_4,param_5);
      uVar9 = *(ulong *)(puVar2 + 0x10);
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adf80);
        (*pcVar1)();
      }
      puVar4 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar4 == 0) || (puVar3 = puVar2, *(ulong *)(puVar2 + 0x18) >> 1 <= uVar9)) {
        FUN_1005afb14();
        puVar3 = puVar4;
      }
      FUN_1005afa5c(uVar9 - 1,uVar9 - 1,1,0x2f);
    }
    FUN_1005b0104(param_1,param_2,puVar3);
    _swift_bridgeObjectRelease(puVar3);
    goto LAB_1005adf40;
  }
  if (lVar6 == 1) {
LAB_1005ade78:
    lVar6 = 0;
    uVar7 = 0;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adf7c);
      (*pcVar1)();
    }
    if (*(char *)(lVar8 + 0x20) != '/') goto LAB_1005ade78;
    if (lVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005adf84);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(lVar8);
    uVar7 = 1;
    lVar6 = lVar8;
  }
  _swift_bridgeObjectRetain(param_3);
  FUN_1005ae2e8(lVar6,uVar7,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(lVar8);
  *unaff_x20 = lVar6;
LAB_1005adf40:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005adf88 | FUN_1005adf88 */

void FUN_1005adf88(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  size_t sVar8;
  
  lVar6 = *unaff_x20;
  lVar5 = *(long *)(lVar6 + 0x10);
  if (unaff_x20[1] != lVar5 + -1) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae21c);
      (*pcVar1)();
    }
    bVar2 = Swift::Collection::get_isEmpty();
    if (!bVar2) {
      puVar3 = &DAT_100fd30c8;
      FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
      _swift_initStaticObject();
      if (param_1 == *(long *)(lVar6 + 0x10) + -1) {
        _swift_isUniquelyReferenced_nonNull_native();
        FUN_1005afb14();
        sVar8 = *(size_t *)(puVar3 + 0x10);
        _memmove(puVar3 + 0x21,puVar3 + 0x20,sVar8);
        *(size_t *)(puVar3 + 0x10) = sVar8 + 1;
        puVar3[0x20] = 0x2f;
        FUN_1005b0fe8(param_3,param_4,param_5);
      }
      else {
        FUN_1005b0fe8(param_3,param_4,param_5);
        uVar7 = *(ulong *)(puVar3 + 0x10);
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae228);
          (*pcVar1)();
        }
        puVar4 = puVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar4 == 0) || (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar7)) {
          FUN_1005afb14();
          puVar3 = puVar4;
        }
        FUN_1005afa5c(uVar7 - 1,uVar7 - 1,1,0x2f);
      }
      FUN_1005b0104(param_1,param_2,puVar3);
      _swift_bridgeObjectRelease(puVar3);
      return;
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    FUN_1005afca4(param_1,param_2);
    if (param_2 != lVar6 + -1) {
      return;
    }
    lVar5 = *unaff_x20;
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 1) {
      return;
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae22c);
      (*pcVar1)();
    }
    if (*(char *)(lVar5 + 0x20) == '/') {
      if (lVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae230);
        (*pcVar1)();
      }
      if (lVar6 == 2) {
        return;
      }
    }
    else if (lVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae1e8);
      (*pcVar1)();
    }
    if (*(char *)(lVar5 + lVar6 + 0x1e) != '/') {
      return;
    }
    FUN_1005aead0(lVar6 + -2);
    return;
  }
  if (lVar5 != 1) {
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae220);
      (*pcVar1)();
    }
    if (*(char *)(lVar6 + 0x20) == '/') {
      if (lVar5 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae224);
        (*pcVar1)();
      }
      lVar5 = lVar6;
      _swift_bridgeObjectRetain();
      goto LAB_1005ae08c;
    }
  }
  lVar5 = 0;
LAB_1005ae08c:
  FUN_1005b0430();
  _swift_bridgeObjectRelease(lVar6);
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x1005ae230 | FUN_1005ae230 */

undefined * FUN_1005ae230(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae2e8);
      (*pcVar1)();
    }
    puVar2 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1005ae400(param_3);
  _swift_bridgeObjectRetain(puVar2);
  FUN_1005b2cbc();
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_3);
  return puVar2;
}



/* Address: 0x1005ae2e8 | FUN_1005ae2e8 */

undefined *
FUN_1005ae2e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae3b8);
      (*pcVar1)();
    }
    puVar2 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1005ae5b0(param_3,param_4,param_5);
  _swift_bridgeObjectRetain(puVar2);
  FUN_1005b2cbc();
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_3);
  return puVar2;
}



/* Address: 0x1005ae3b8 | FUN_1005ae3b8 */

undefined8 FUN_1005ae3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_1005b0430();
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_3,param_4);
  return param_1;
}



/* Address: 0x1005ae400 | FUN_1005ae400 */

void FUN_1005ae400(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      plVar6 = (long *)(param_1 + 0x20 + lVar10 * 0x18);
      lVar2 = *plVar6;
      lVar11 = plVar6[2] - plVar6[1];
      if (lVar11 == 0) {
        _swift_bridgeObjectRetain(lVar2);
      }
      else {
        puVar12 = (undefined1 *)(lVar2 + 0x20 + plVar6[1]);
        uVar8 = *unaff_x20;
        uVar7 = *(ulong *)(uVar8 + 0x10);
        _swift_bridgeObjectRetain(lVar2);
        do {
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005ae5ac);
            (*pcVar4)();
          }
          uVar3 = *puVar12;
          uVar5 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)uVar5 == 0) || (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7)) {
            FUN_1005afb14();
            uVar8 = uVar5;
          }
          lVar1 = uVar8 + (uVar7 - 1);
          _memmove((void *)(lVar1 + 0x21),(void *)(lVar1 + 0x20),
                   *(long *)(uVar8 + 0x10) - (uVar7 - 1));
          uVar7 = *(long *)(uVar8 + 0x10) + 1;
          *(ulong *)(uVar8 + 0x10) = uVar7;
          *(undefined1 *)(lVar1 + 0x20) = uVar3;
          puVar12 = puVar12 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *unaff_x20 = uVar8;
      }
      _swift_bridgeObjectRelease(lVar2);
      uVar7 = *unaff_x20;
      uVar8 = *(ulong *)(uVar7 + 0x10);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005ae5b0);
        (*pcVar4)();
      }
      uVar5 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((uVar5 & 1) == 0) || (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar8)) {
        FUN_1005afb14();
        uVar7 = uVar5;
      }
      lVar10 = lVar10 + 1;
      lVar2 = uVar7 + (uVar8 - 1);
      _memmove((void *)(lVar2 + 0x21),(void *)(lVar2 + 0x20),*(long *)(uVar7 + 0x10) - (uVar8 - 1));
      *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + 1;
      *(undefined1 *)(lVar2 + 0x20) = 0x2f;
      *unaff_x20 = uVar7;
    } while (lVar10 != lVar9);
  }
  FUN_1005b17e0();
  return;
}



/* Address: 0x1005ae5b0 | FUN_1005ae5b0 */

void FUN_1005ae5b0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  undefined1 *puVar6;
  
  param_3 = param_3 - param_2;
  if (param_3 == 0) {
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    puVar6 = (undefined1 *)(param_1 + 0x20 + param_2);
    lVar4 = *unaff_x20;
    uVar5 = *(ulong *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(param_1);
    do {
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae704);
        (*pcVar2)();
      }
      uVar1 = *puVar6;
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar3 == 0) || (*(ulong *)(lVar4 + 0x18) >> 1 <= uVar5)) {
        FUN_1005afb14();
        lVar4 = lVar3;
      }
      lVar3 = lVar4 + (uVar5 - 1);
      _memmove((void *)(lVar3 + 0x21),(void *)(lVar3 + 0x20),*(long *)(lVar4 + 0x10) - (uVar5 - 1));
      uVar5 = *(long *)(lVar4 + 0x10) + 1;
      *(ulong *)(lVar4 + 0x10) = uVar5;
      *(undefined1 *)(lVar3 + 0x20) = uVar1;
      puVar6 = puVar6 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *unaff_x20 = lVar4;
  }
  _swift_bridgeObjectRelease(param_1);
  lVar4 = *unaff_x20;
  uVar5 = *(ulong *)(lVar4 + 0x10);
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae708);
    (*pcVar2)();
  }
  lVar3 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar3 == 0) || (*(ulong *)(lVar4 + 0x18) >> 1 <= uVar5)) {
    FUN_1005afb14();
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + (uVar5 - 1);
  _memmove((void *)(lVar3 + 0x21),(void *)(lVar3 + 0x20),*(long *)(lVar4 + 0x10) - (uVar5 - 1));
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  *(undefined1 *)(lVar3 + 0x20) = 0x2f;
  *unaff_x20 = lVar4;
  FUN_1005b17e0();
  return;
}



/* Address: 0x1005ae708 | FUN_1005ae708 */

void FUN_1005ae708(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  *param_1 = puVar1;
  param_1[1] = 0;
  return;
}



/* Address: 0x1005ae748 | FUN_1005ae748 */

void FUN_1005ae748(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1005adf88(*param_1,param_1[1],param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001005ae794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x1005ae798 | FUN_1005ae798 */

void FUN_1005ae798(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  puVar4 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  *param_1 = puVar4;
  param_1[1] = 0;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ae818);
      (*pcVar3)();
    }
    FUN_1005b0560(param_3,uVar1,uVar2,uVar5);
  }
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1005ae818 | FUN_1005ae818 */

void FUN_1005ae818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (extension_Swift)::Swift::RangeReplaceableCollection::_init
            (param_1,param_4,param_2,param_5,param_3);
  return;
}



/* Address: 0x1005ae830 | FUN_1005ae830 */

void FUN_1005ae830(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10) + -1;
  uVar2 = *param_1;
  FUN_1005add48(lVar1,lVar1,uVar2,param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1005ae86c | FUN_1005ae86c */

void FUN_1005ae86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (extension_Swift)::Swift::RangeReplaceableCollection::_append
            (param_1,param_4,param_2,param_5,param_3);
  return;
}



/* Address: 0x1005ae884 | FUN_1005ae884 */

void FUN_1005ae884(ulong param_1,ulong param_2,long param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  if ((long)param_2 <= (long)param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9d0);
    (*pcVar2)();
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9d4);
    (*pcVar2)();
  }
  uVar4 = *(ulong *)(param_3 + 0x10);
  if (param_1 < uVar4) {
    if (uVar4 <= param_2 - 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9dc);
      (*pcVar2)();
    }
    lVar5 = *unaff_x20;
    uVar6 = param_1;
    while( true ) {
      if (((long)uVar6 < (long)param_1) || ((long)param_2 <= (long)uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9c4);
        (*pcVar2)();
      }
      if (uVar4 - 1 == uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9c8);
        (*pcVar2)();
      }
      uVar7 = *(ulong *)(lVar5 + 0x10);
      if (uVar7 == 0) break;
      uVar1 = *(undefined1 *)(param_3 + uVar6 + 0x20);
      lVar3 = lVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar3 == 0) || (*(ulong *)(lVar5 + 0x18) >> 1 <= uVar7)) {
        FUN_1005afb14();
        lVar5 = lVar3;
      }
      lVar3 = lVar5 + (uVar7 - 1);
      _memmove((void *)(lVar3 + 0x21),(void *)(lVar3 + 0x20),*(long *)(lVar5 + 0x10) - (uVar7 - 1));
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      *(undefined1 *)(lVar3 + 0x20) = uVar1;
      uVar6 = uVar6 + 1;
      if (param_2 == uVar6) {
        _swift_bridgeObjectRelease(param_3);
        *unaff_x20 = lVar5;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9cc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ae9d8);
  (*pcVar2)();
}



/* Address: 0x1005ae9dc | FUN_1005ae9dc */

void FUN_1005ae9dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1005add48(*param_2,*param_2,uVar1,param_1[1],param_1[2]);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1005aea10 | FUN_1005aea10 */

void FUN_1005aea10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (extension_Swift)::Swift::RangeReplaceableCollection::_insert
            (param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Address: 0x1005aea28 | FUN_1005aea28 */

void FUN_1005aea28(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar1 = *unaff_x20;
  if (unaff_x20[1] == *(long *)(lVar1 + 0x10) + -1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeac4);
    (*pcVar2)();
  }
  lVar5 = *param_2;
  lVar3 = lVar5;
  FUN_1005b2a38(lVar5,lVar1);
  if (lVar3 < lVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeac8);
    (*pcVar2)();
  }
  if (lVar5 == lVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeacc);
    (*pcVar2)();
  }
  lVar4 = lVar1;
  FUN_1005b2a38(lVar5);
  if (lVar5 <= lVar4) {
    _swift_bridgeObjectRetain(lVar1);
    FUN_1005b0324(lVar5,lVar4);
    *param_1 = lVar1;
    param_1[1] = lVar5;
    param_1[2] = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aead0);
  (*pcVar2)();
}



/* Address: 0x1005aead0 | FUN_1005aead0 */

undefined1 FUN_1005aead0(ulong param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeb24);
    (*pcVar2)();
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeb28);
    (*pcVar2)();
  }
  if (uVar3 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeb2c);
    (*pcVar2)();
  }
  if (param_1 < uVar3 - 1) {
    uVar1 = *(undefined1 *)(*unaff_x20 + param_1 + 0x20);
    FUN_1005afca4(param_1,param_1 + 1);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aeb30);
  (*pcVar2)();
}



/* Address: 0x1005aeb30 | FUN_1005aeb30 */

void FUN_1005aeb30(undefined8 *param_1)

{
  FUN_1005b0324(*param_1,param_1[1]);
  return;
}



/* Address: 0x1005aeb3c | FUN_1005aeb3c */

void FUN_1005aeb3c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1005aeb48 | FUN_1005aeb48 */

void FUN_1005aeb48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005b965c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1005aeb70 | thunk_FUN_1005aeb74 */

void thunk_FUN_1005aeb74(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe0);
    (*pcVar2)();
  }
  lVar1 = unaff_x20[1];
  lVar3 = lVar1;
  FUN_1005af94c(lVar1,param_1,*(long *)(*unaff_x20 + 0x10) + -1,*unaff_x20,lVar1);
  if (((uint)param_1 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe8);
    (*pcVar2)();
  }
  if (lVar1 <= lVar3) {
    FUN_1005b0324(lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe4);
  (*pcVar2)();
}



/* Address: 0x1005aeb74 | FUN_1005aeb74 */

void FUN_1005aeb74(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe0);
    (*pcVar2)();
  }
  lVar1 = unaff_x20[1];
  lVar3 = lVar1;
  FUN_1005af94c(lVar1,param_1,*(long *)(*unaff_x20 + 0x10) + -1,*unaff_x20,lVar1);
  if (((uint)param_1 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe8);
    (*pcVar2)();
  }
  if (lVar1 <= lVar3) {
    FUN_1005b0324(lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005aebe4);
  (*pcVar2)();
}



/* Address: 0x1005aebe8 | FUN_1005aebe8 */

void FUN_1005aebe8(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    _swift_bridgeObjectRelease(*unaff_x20);
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
    *unaff_x20 = (long)puVar2;
    unaff_x20[1] = 0;
    return;
  }
  if (unaff_x20[1] < *(long *)(*unaff_x20 + 0x10)) {
    FUN_1005b0324(unaff_x20[1],*(long *)(*unaff_x20 + 0x10) + -1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005aec48);
  (*pcVar1)();
}



/* Address: 0x1005aec48 | FUN_1005aec48 */

void FUN_1005aec48(void)

{
  FUN_1005aec5c();
  return;
}



/* Address: 0x1005aec5c | FUN_1005aec5c */

void FUN_1005aec5c(code *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x20;
  ulong uVar11;
  long unaff_x21;
  size_t sVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *local_b0;
  undefined *local_98;
  undefined1 auStack_90 [40];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = (undefined *)*unaff_x20;
  lVar13 = unaff_x20[1];
  puVar6 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  local_98 = puVar6;
  _swift_initStaticObject();
  lVar10 = *(long *)(puVar4 + 0x10);
  lVar9 = lVar10 + -1;
  if (lVar13 != lVar9) {
    pcVar2 = puVar4 + 0x20;
    do {
      lVar3 = lVar13;
      if (lVar13 == 0 && lVar9 != 0) {
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af04c);
          (*pcVar5)();
        }
        if (*pcVar2 != '/') {
          if (lVar10 <= lVar13) goto LAB_1005af034;
          goto joined_r0x0001005aed64;
        }
        if (lVar10 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af050);
          (*pcVar5)();
        }
        lVar15 = 1;
LAB_1005aedc4:
        lVar14 = 1;
      }
      else {
        if ((lVar10 <= lVar13) || (lVar10 == 0)) {
LAB_1005af034:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af038);
          (*pcVar5)();
        }
        if (lVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af03c);
          (*pcVar5)();
        }
joined_r0x0001005aed64:
        for (; (lVar15 = lVar9, lVar3 != lVar9 && (lVar15 = lVar3, pcVar2[lVar3] != '/'));
            lVar3 = lVar3 + 1) {
        }
        if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af040);
          (*pcVar5)();
        }
        if (lVar13 == lVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af030);
          (*pcVar5)();
        }
        lVar3 = lVar13;
        if (lVar13 == 0 && lVar9 != 0) {
          if (*pcVar2 == '/') {
            if (lVar10 == 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af034);
              (*pcVar5)();
            }
            goto LAB_1005aedc4;
          }
          if (lVar10 <= lVar13) goto LAB_1005af044;
        }
        else {
          if ((lVar10 <= lVar13) || (lVar10 == 0)) {
LAB_1005af044:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af048);
            (*pcVar5)();
          }
          if (lVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af044);
            (*pcVar5)();
          }
        }
        do {
          lVar14 = lVar9;
          if (lVar3 == lVar9) break;
          pcVar1 = pcVar2 + lVar3;
          lVar3 = lVar3 + 1;
          lVar14 = lVar3;
        } while (*pcVar1 != '/');
      }
      _swift_bridgeObjectRetain(puVar4);
      uVar11 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(puVar4);
        _swift_bridgeObjectRelease(local_98);
        goto LAB_1005aeff0;
      }
      local_b0 = puVar4;
      if ((uVar11 & 1) == 0) {
        lVar10 = *(long *)(local_98 + 0x10);
        lVar9 = lVar10 + -1;
        if (lVar9 != 0) {
          puVar7 = puVar6;
          _swift_initStackObject(puVar6,auStack_90);
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          puVar7[0x20] = 0;
          if (lVar10 == *(long *)(local_98 + 0x10)) {
            local_b0 = (undefined *)0x1;
            FUN_1005afb14(1,2,1,puVar7);
            sVar12 = *(size_t *)(local_b0 + 0x10);
            _memmove(local_b0 + 0x21,local_b0 + 0x20,sVar12);
            *(size_t *)(local_b0 + 0x10) = sVar12 + 1;
            local_b0[0x20] = 0x2f;
            FUN_1005ae5b0(puVar4,lVar13,lVar15);
          }
          else {
            FUN_1005ae5b0(puVar4,lVar13,lVar15);
            uVar11 = *(ulong *)(puVar7 + 0x10);
            if (uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1005af054);
              (*pcVar5)();
            }
            puVar8 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((int)puVar8 == 0) || (local_b0 = puVar7, *(ulong *)(puVar7 + 0x18) >> 1 <= uVar11))
            {
              FUN_1005afb14();
              local_b0 = puVar8;
            }
            FUN_1005afa5c(uVar11 - 1,uVar11 - 1,1,0x2f);
          }
          FUN_1005b0104(lVar9,lVar9,local_b0);
          _swift_bridgeObjectRelease(puVar4);
          goto LAB_1005aecfc;
        }
        puVar7 = puVar6;
        _swift_initStaticObject(puVar6,&DAT_100fd3378);
        _swift_bridgeObjectRetain(puVar4);
        FUN_1005ae5b0();
        _swift_bridgeObjectRetain(puVar7);
        FUN_1005b2cbc();
        _swift_bridgeObjectRelease(local_98);
        _swift_bridgeObjectRelease(puVar7);
        _swift_bridgeObjectRelease_n(puVar4,2);
        local_98 = puVar7;
      }
      else {
LAB_1005aecfc:
        _swift_bridgeObjectRelease(local_b0);
      }
      lVar10 = *(long *)(puVar4 + 0x10);
      lVar9 = lVar10 + -1;
      lVar13 = lVar14;
    } while (lVar14 != lVar9);
  }
  _swift_bridgeObjectRelease(puVar4);
  *unaff_x20 = local_98;
  unaff_x20[1] = 0;
LAB_1005aeff0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1005af058 | thunk_FUN_1005ae230 */

undefined * thunk_FUN_1005ae230(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ae2e8);
      (*pcVar1)();
    }
    puVar2 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1005ae400(param_3);
  _swift_bridgeObjectRetain(puVar2);
  FUN_1005b2cbc();
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_3);
  return puVar2;
}



/* Address: 0x1005af05c | FUN_1005af05c */

undefined *
FUN_1005af05c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af148);
      (*pcVar1)();
    }
    puVar2 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  if ((param_4 < param_3) || (*(long *)(param_5 + 0x10) <= param_6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af13c);
    (*pcVar1)();
  }
  if (param_3 < param_6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af140);
    (*pcVar1)();
  }
  if (param_4 < *(long *)(param_5 + 0x10)) {
    FUN_1005ae884(param_3,param_4,param_5);
    FUN_1005b2cbc();
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af144);
  (*pcVar1)();
}



/* Address: 0x1005af148 | FUN_1005af148 */

void FUN_1005af148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [14];
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd3270;
  FUN_1000f7830(&DAT_100fd3270,&DAT_100c62240);
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005b04e0();
  KVar2 = Swift::Encoder::_container();
  local_61 = 0;
  local_58 = param_2;
  FUN_1005b0520();
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,&DAT_100ee4790,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_62 = 1;
    Swift::KeyedEncodingContainer::_encode(param_3,&local_62,puVar1);
    (**(code **)(lVar4 + 8))(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
  }
  return;
}



/* Address: 0x1005af288 | FUN_1005af288 */

void FUN_1005af288(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005af44c(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}


