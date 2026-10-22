/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005af2d4 | FUN_1005af2d4 */

void FUN_1005af2d4(void)

{
  FUN_1005b0818();
  return;
}



/* Address: 0x1005af2e8 | FUN_1005af2e8 */

void FUN_1005af2e8(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (unaff_x20[1] < *(long *)(*unaff_x20 + 0x10)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af304);
  (*pcVar1)();
}



/* Address: 0x1005af304 | FUN_1005af304 */

void FUN_1005af304(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  Swift::Hasher::init(0);
  HVar3.unknown = auStack_68;
  FUN_1005af44c(HVar3.unknown,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1005af34c | FUN_1005af34c */

void FUN_1005af34c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005af44c(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1005af354 | FUN_1005af354 */

void FUN_1005af354(undefined8 param_1,Hasher param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  Hasher HVar3;
  
  if (*(ulong *)(param_2.unknown + 0x10) <= param_3 || *(ulong *)(param_2.unknown + 0x10) <= param_4
     ) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af3dc);
    (*pcVar2)();
  }
  HVar3.unknown = param_2.unknown;
  Swift::Hasher::_combine(param_4 - param_3,param_2);
  if (param_4 != param_3) {
    if (param_4 <= param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af3e0);
      (*pcVar2)();
    }
    do {
      if ((long)param_4 <= (long)param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af3d8);
        (*pcVar2)();
      }
      uVar1 = param_3 + 1;
      Swift::Hasher::_combine(param_2.unknown[param_3 + 0x20],HVar3);
      param_3 = uVar1;
    } while (param_4 != uVar1);
  }
  return;
}



/* Address: 0x1005af3e0 | FUN_1005af3e0 */

void FUN_1005af3e0(undefined8 param_1,Hasher param_2,__uint64 param_3)

{
  code *pcVar1;
  Hasher HVar2;
  __uint8 *p_Var3;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af448);
    (*pcVar1)();
  }
  if (param_3 < *(ulong *)(param_2.unknown + 0x10)) {
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(param_3,param_2);
    if (param_3 != 0) {
      p_Var3 = param_2.unknown + 0x20;
      do {
        if (param_3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af444);
          (*pcVar1)();
        }
        Swift::Hasher::_combine(*p_Var3,HVar2);
        param_3 = param_3 - 1;
        p_Var3 = p_Var3 + 1;
      } while (param_3 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af44c);
  (*pcVar1)();
}



/* Address: 0x1005af44c | FUN_1005af44c */

void FUN_1005af44c(undefined8 param_1,Hasher param_2,ulong param_3)

{
  code *pcVar1;
  Hasher HVar2;
  __uint8 *p_Var3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2.unknown + 0x10);
  if (lVar4 <= (long)param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af4d8);
    (*pcVar1)();
  }
  if (-1 < (long)param_3) {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af4e0);
      (*pcVar1)();
    }
    uVar5 = lVar4 - 1;
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(uVar5 - param_3,param_2);
    if (uVar5 != param_3) {
      if (uVar5 <= param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af4e4);
        (*pcVar1)();
      }
      lVar4 = ~param_3 + lVar4;
      p_Var3 = param_2.unknown + param_3 + 0x20;
      do {
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af4d4);
          (*pcVar1)();
        }
        Swift::Hasher::_combine(*p_Var3,HVar2);
        lVar4 = lVar4 + -1;
        p_Var3 = p_Var3 + 1;
      } while (lVar4 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af4dc);
  (*pcVar1)();
}



/* Address: 0x1005af4e4 | FUN_1005af4e4 */

void FUN_1005af4e4(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_68;
  FUN_1005af44c(HVar3.unknown,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1005af528 | FUN_1005af528 */

void FUN_1005af528(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_1005b0818();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x1005af550 | FUN_1005af550 */

void FUN_1005af550(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005af148(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1005af568 | FUN_1005af568 */

void FUN_1005af568(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  if (*(long *)(*param_1 + 0x10) <= param_1[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af598);
    (*pcVar1)();
  }
  lVar2 = *(long *)(*param_2 + 0x10);
  if (param_2[1] < lVar2) {
    FUN_1005af59c(param_2[1],lVar2 + -1,*param_2,param_1[1],*(long *)(*param_1 + 0x10) + -1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af59c);
  (*pcVar1)();
}



/* Address: 0x1005af59c | FUN_1005af59c */

bool FUN_1005af59c(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong param_5,long param_6
                  )

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  char cVar7;
  
  uVar3 = param_1;
  uVar4 = param_4;
  do {
    if (uVar4 == param_5) {
      cVar5 = '\0';
      uVar6 = param_5;
      if (uVar3 != param_2) goto LAB_1005af5c4;
LAB_1005af640:
      cVar7 = '\0';
      uVar1 = param_2;
    }
    else {
      if (((long)uVar4 < (long)param_4) || ((long)param_5 <= (long)uVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af688);
        (*pcVar2)();
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af68c);
        (*pcVar2)();
      }
      if (*(ulong *)(param_6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af690);
        (*pcVar2)();
      }
      if (*(ulong *)(param_6 + 0x10) - 1 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af69c);
        (*pcVar2)();
      }
      cVar5 = *(char *)(param_6 + 0x20 + uVar4);
      uVar6 = uVar4 + 1;
      if (uVar3 == param_2) goto LAB_1005af640;
LAB_1005af5c4:
      if (((long)uVar3 < (long)param_1) || ((long)param_2 <= (long)uVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af694);
        (*pcVar2)();
      }
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af698);
        (*pcVar2)();
      }
      if (*(ulong *)(param_3 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af6a0);
        (*pcVar2)();
      }
      if (*(ulong *)(param_3 + 0x10) - 1 <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af6a4);
        (*pcVar2)();
      }
      cVar7 = *(char *)(param_3 + 0x20 + uVar3);
      uVar1 = uVar3 + 1;
    }
    if (uVar4 == param_5) {
      return uVar3 == param_2;
    }
    if ((uVar3 == param_2) || (uVar3 = uVar1, uVar4 = uVar6, cVar5 != cVar7)) {
      return false;
    }
  } while( true );
}



/* Address: 0x1005af6a4 | FUN_1005af6a4 */

bool FUN_1005af6a4(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  char cVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x10) - 1;
  uVar4 = 0;
  uVar5 = param_2;
  do {
    if (uVar5 == param_3) {
      cVar6 = '\0';
      uVar7 = param_3;
      if (uVar4 != uVar3) goto LAB_1005af6d4;
LAB_1005af72c:
      cVar8 = '\0';
      uVar1 = uVar3;
    }
    else {
      if (((long)uVar5 < (long)param_2) || ((long)param_3 <= (long)uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af76c);
        (*pcVar2)();
      }
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af770);
        (*pcVar2)();
      }
      if (*(ulong *)(param_4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af778);
        (*pcVar2)();
      }
      if (*(ulong *)(param_4 + 0x10) - 1 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af77c);
        (*pcVar2)();
      }
      cVar6 = *(char *)(param_4 + 0x20 + uVar5);
      uVar7 = uVar5 + 1;
      if (uVar4 == uVar3) goto LAB_1005af72c;
LAB_1005af6d4:
      if (*(ulong *)(param_1 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af774);
        (*pcVar2)();
      }
      cVar8 = *(char *)(param_1 + 0x20 + uVar4);
      uVar1 = uVar4 + 1;
    }
    if (uVar5 == param_3) {
      return uVar4 == uVar3;
    }
    if ((uVar4 == uVar3) || (uVar4 = uVar1, uVar5 = uVar7, cVar6 != cVar8)) {
      return false;
    }
  } while( true );
}



/* Address: 0x1005af77c | FUN_1005af77c */

bool FUN_1005af77c(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  char cVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = 0;
  uVar5 = param_2;
  do {
    if (uVar5 == param_3) {
      cVar6 = '\0';
      uVar7 = param_3;
      if (uVar4 != uVar3) goto LAB_1005af7a8;
LAB_1005af7fc:
      cVar8 = '\0';
      uVar1 = uVar3;
    }
    else {
      if (((long)uVar5 < (long)param_2) || ((long)param_3 <= (long)uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af83c);
        (*pcVar2)();
      }
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af840);
        (*pcVar2)();
      }
      if (*(ulong *)(param_4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af848);
        (*pcVar2)();
      }
      if (*(ulong *)(param_4 + 0x10) - 1 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af84c);
        (*pcVar2)();
      }
      cVar6 = *(char *)(param_4 + 0x20 + uVar5);
      uVar7 = uVar5 + 1;
      if (uVar4 == uVar3) goto LAB_1005af7fc;
LAB_1005af7a8:
      if (uVar3 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af844);
        (*pcVar2)();
      }
      cVar8 = *(char *)(param_1 + 0x20 + uVar4);
      uVar1 = uVar4 + 1;
    }
    if (uVar5 == param_3) {
      return uVar4 == uVar3;
    }
    if ((uVar4 == uVar3) || (uVar4 = uVar1, uVar5 = uVar7, cVar6 != cVar8)) {
      return false;
    }
  } while( true );
}



/* Address: 0x1005af84c | FUN_1005af84c */

ulong FUN_1005af84c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 1) {
    return 0x100;
  }
  if (lVar2 != 0) {
    return (ulong)*(byte *)(param_1 + lVar2 + 0x1e);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005af87c);
  (*pcVar1)();
}



/* Address: 0x1005af87c | FUN_1005af87c */

void FUN_1005af87c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af93c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af940);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af944);
    (*pcVar2)();
  }
  lVar1 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1005afb14();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1005afa5c(param_1,param_2,1,param_3);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af94c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005af948);
  (*pcVar2)();
}



/* Address: 0x1005af94c | FUN_1005af94c */

void FUN_1005af94c(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_2 < 0) {
    lVar4 = 0;
    do {
      if (param_1 == param_3) {
        return;
      }
      lVar4 = lVar4 + -1;
      FUN_1005b2ac8();
    } while (param_2 < lVar4);
  }
  else if ((param_2 != 0) && (param_1 != param_3)) {
    lVar3 = *(long *)(param_4 + 0x10);
    lVar4 = 1;
    do {
      if ((param_1 == 0) && (lVar3 != 1)) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005afa5c);
          (*pcVar1)();
        }
        if (*(char *)(param_4 + 0x20) != '/') goto LAB_1005af9b4;
        if (param_2 <= lVar4) {
          return;
        }
        param_1 = 1;
      }
      else {
LAB_1005af9b4:
        if ((lVar3 <= param_1) || (lVar3 == 0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005afa54);
          (*pcVar1)();
        }
        if (param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005afa58);
          (*pcVar1)();
        }
        if (param_1 != lVar3 + -1) {
          lVar2 = param_1 + 1;
          pcVar5 = (char *)(param_4 + 0x20 + param_1);
          do {
            param_1 = lVar2;
            if (*pcVar5 == '/') break;
            lVar2 = lVar2 + 1;
            param_1 = lVar3 + -1;
            pcVar5 = pcVar5 + 1;
          } while (lVar3 != lVar2);
        }
        if (param_2 <= lVar4) {
          return;
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_1 != param_3);
  }
  return;
}



/* Address: 0x1005afa5c | FUN_1005afa5c */

void FUN_1005afa5c(long param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  size_t sVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005afb04);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005afb08);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  puVar1 = (undefined1 *)(lVar7 + 0x20 + param_1);
  if (lVar4 != 0) {
    sVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005afb0c);
      (*pcVar6)();
    }
    puVar2 = (undefined1 *)(lVar7 + 0x20 + param_2);
    puVar3 = puVar1 + param_3;
    if (puVar3 != puVar2 || puVar2 + sVar5 <= puVar3) {
      _memmove(puVar3,puVar2,sVar5);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005afb10);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (*puVar1 = param_4, param_3 != 1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005afb14);
    (*pcVar6)();
  }
  return;
}



/* Address: 0x1005afb14 | FUN_1005afb14 */

undefined * FUN_1005afb14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afc04);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1005afc04 | FUN_1005afc04 */

void FUN_1005afc04(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1005afc94);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1005afc98);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    sVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005afc9c);
      (*pcVar5)();
    }
    pvVar1 = (void *)(lVar6 + 0x20 + param_1 + param_3);
    pvVar2 = (void *)(lVar6 + 0x20 + param_2);
    if (pvVar1 != pvVar2 || (void *)((long)pvVar2 + sVar4) <= pvVar1) {
      _memmove(pvVar1,pvVar2,sVar4);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005afca0);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1005afca4);
  (*pcVar5)();
}



/* Address: 0x1005afca4 | FUN_1005afca4 */

void FUN_1005afca4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afd50);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afd54);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afd58);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1005afb14();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1005afc04(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afd60);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005afd5c);
  (*pcVar2)();
}



/* Address: 0x1005afd60 | FUN_1005afd60 */

ulong FUN_1005afd60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_1005bb8cc();
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 == 0) || (*(char *)(param_1 + lVar3 + 0x1f) != '\0')) {
    uVar1 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = param_1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_1005afb14(0,lVar3 + 1,1,param_1);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    param_1 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      param_1 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_1005afb14(param_1,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(param_1 + 0x10) = uVar1 + 1;
    *(undefined1 *)(param_1 + uVar1 + 0x20) = 0;
  }
  return param_1;
}



/* Address: 0x1005afe04 | FUN_1005afe04 */

void FUN_1005afe04(long param_1,long param_2,size_t param_3,ulong param_4,ulong param_5,long param_6
                  )

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff10);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff14);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  pvVar1 = (void *)(lVar7 + 0x20 + param_1);
  if (lVar4 != 0) {
    sVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff18);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar7 + 0x20 + param_2);
    pvVar3 = (void *)((long)pvVar1 + param_3);
    if (pvVar3 != pvVar2 || (void *)((long)pvVar2 + sVar5) <= pvVar3) {
      _memmove(pvVar3,pvVar2,sVar5);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff1c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((long)param_3 < 1) {
    return;
  }
  if ((param_4 < *(ulong *)(param_6 + 0x10)) && (param_5 < *(ulong *)(param_6 + 0x10))) {
    lVar4 = param_4 + (param_5 - param_4);
    if (SCARRY8(param_4,param_5 - param_4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff24);
      (*pcVar6)();
    }
    if ((long)param_4 <= lVar4) {
      if (lVar4 - param_4 == param_3) {
        _memcpy(pvVar1,(void *)(param_6 + 0x20 + param_4),param_3);
        return;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff2c);
      (*pcVar6)();
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff28);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005aff20);
  (*pcVar6)();
}



/* Address: 0x1005aff2c | FUN_1005aff2c */

void FUN_1005aff2c(long param_1,long param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0014);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0018);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b001c);
    (*pcVar2)();
  }
  if (param_3 < *(ulong *)(param_5 + 0x10) && param_4 < *(ulong *)(param_5 + 0x10)) {
    lVar5 = param_4 - param_3;
    lVar1 = lVar5 - (param_2 - param_1);
    if (SBORROW8(lVar5,param_2 - param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0024);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar6,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar6 + lVar1)) {
        FUN_1005afb14();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1005afe04(param_1,param_2,lVar5,param_3,param_4,param_5);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0028);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0020);
  (*pcVar2)();
}



/* Address: 0x1005b0028 | FUN_1005b0028 */

void FUN_1005b0028(long param_1,long param_2,size_t param_3,long param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b00f4);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b00f8);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  pvVar1 = (void *)(lVar7 + 0x20 + param_1);
  if (lVar4 != 0) {
    sVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b00fc);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar7 + 0x20 + param_2);
    pvVar3 = (void *)((long)pvVar1 + param_3);
    if (pvVar3 != pvVar2 || (void *)((long)pvVar2 + sVar5) <= pvVar3) {
      _memmove(pvVar3,pvVar2,sVar5);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b0100);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((long)param_3 < 1) {
    return;
  }
  if (*(long *)(param_4 + 0x10) - 1U == param_3) {
    _memcpy(pvVar1,(void *)(param_4 + 0x20),param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005b0104);
  (*pcVar6)();
}



/* Address: 0x1005b0104 | FUN_1005b0104 */

void FUN_1005b0104(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01cc);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (lVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01d0);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01d4);
    (*pcVar2)();
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar5 = *(long *)(param_3 + 0x10) + -1;
    lVar1 = lVar5 - (param_2 - param_1);
    if (SBORROW8(lVar5,param_2 - param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01dc);
      (*pcVar2)();
    }
    if (!SCARRY8(lVar6,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar6 + lVar1)) {
        FUN_1005afb14();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1005b0028(param_1,param_2,lVar5,param_3);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01e0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b01d8);
  (*pcVar2)();
}



/* Address: 0x1005b01e0 | FUN_1005b01e0 */

undefined * FUN_1005b01e0(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    puVar3 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b031c);
      (*pcVar2)();
    }
    puVar3 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  lVar5 = *(long *)(puVar3 + 0x10);
  uVar1 = lVar5 - 1;
  if (uVar1 != 0) {
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0320);
      (*pcVar2)();
    }
    if (puVar3[0x20] == '/') {
      if (lVar5 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b0324);
        (*pcVar2)();
      }
      if (uVar1 == 1) goto LAB_1005b02d8;
    }
    else if (lVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b027c);
      (*pcVar2)();
    }
    if (puVar3[lVar5 + 0x1e] == '/') {
      puVar4 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar4 == 0) || (*(ulong *)(puVar3 + 0x18) >> 1 < uVar1)) {
        FUN_1005afb14();
        puVar3 = puVar4;
      }
      FUN_1005afc04(lVar5 + -2,uVar1,0);
    }
  }
LAB_1005b02d8:
  _swift_bridgeObjectRetain(puVar3);
  FUN_1005b2cbc();
  _swift_bridgeObjectRelease(puVar3);
  FUN_1005b2cbc();
  return puVar3;
}



/* Address: 0x1005b0324 | FUN_1005b0324 */

void FUN_1005b0324(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (unaff_x20[1] != lVar2 + -1) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0420);
      (*pcVar1)();
    }
    FUN_1005afca4();
    if (param_2 != lVar2 + -1) {
      return;
    }
    lVar2 = *unaff_x20;
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 == 1) {
      return;
    }
    if (lVar3 != 0) {
      if (*(char *)(lVar2 + 0x20) == '/') {
        if (lVar3 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0430);
          (*pcVar1)();
        }
        if (lVar3 == 2) {
          return;
        }
      }
      else if (lVar3 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b03f8);
        (*pcVar1)();
      }
      if (*(char *)(lVar2 + lVar3 + 0x1e) != '/') {
        return;
      }
      FUN_1005aead0(lVar3 + -2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b042c);
    (*pcVar1)();
  }
  if (lVar2 != 1) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0424);
      (*pcVar1)();
    }
    if (*(char *)(lVar3 + 0x20) == '/') {
      if (lVar2 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0428);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      _swift_bridgeObjectRetain();
      goto LAB_1005b03c8;
    }
  }
  lVar2 = 0;
LAB_1005b03c8:
  FUN_1005b01e0();
  _swift_bridgeObjectRelease(lVar3);
  *unaff_x20 = lVar2;
  return;
}



/* Address: 0x1005b0430 | FUN_1005b0430 */

undefined *
FUN_1005b0430(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b04e0);
      (*pcVar1)();
    }
    puVar2 = (undefined *)0x0;
    FUN_1005afd60(0,param_2,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1005b0fe8(param_3,param_4,param_5);
  FUN_1005b2cbc();
  return puVar2;
}



/* Address: 0x1005b04e0 | FUN_1005b04e0 */

void FUN_1005b04e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6274c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6274c,&DAT_100ee4a88);
  DAT_100fd3278 = pTVar1;
  return;
}



/* Address: 0x1005b0520 | FUN_1005b0520 */

void FUN_1005b0520(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3280 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c620e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c620e0,&DAT_100ee4790);
  DAT_100fd3280 = pTVar1;
  return;
}



/* Address: 0x1005b0560 | FUN_1005b0560 */

void FUN_1005b0560(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  undefined *local_98;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 != 0) {
    uVar7 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    do {
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0808);
        (*pcVar1)();
      }
      lVar10 = *unaff_x20;
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar11 = lVar8 + -1;
      if (unaff_x20[1] == lVar11) {
        if (lVar11 == 0) {
LAB_1005b0760:
          local_98 = &DAT_100fd30c8;
          FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
          _swift_initStaticObject();
          _swift_bridgeObjectRetain(param_2);
        }
        else {
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b080c);
            (*pcVar1)();
          }
          if (*(char *)(lVar10 + 0x20) != '/') goto LAB_1005b0760;
          if (lVar8 == 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0814);
            (*pcVar1)();
          }
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(param_2);
          local_98 = (undefined *)0x0;
          FUN_1005afd60(0,1,lVar10);
          _swift_bridgeObjectRelease(lVar10);
        }
        FUN_1005ae5b0(param_2,param_3,param_4);
        FUN_1005b2cbc();
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(lVar10);
        *unaff_x20 = (long)local_98;
      }
      else {
        puVar3 = &DAT_100fd30c8;
        FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
        _swift_initStackObject();
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        puVar3[0x20] = 0;
        lVar10 = *(long *)(lVar10 + 0x10);
        _swift_bridgeObjectRetain(param_2);
        if (lVar8 == lVar10) {
          puVar2 = (undefined *)0x1;
          FUN_1005afb14(1,2,1,puVar3);
          sVar9 = *(size_t *)(puVar2 + 0x10);
          _memmove(puVar2 + 0x21,puVar2 + 0x20,sVar9);
          *(size_t *)(puVar2 + 0x10) = sVar9 + 1;
          puVar2[0x20] = 0x2f;
          FUN_1005ae5b0(param_2,param_3,param_4);
        }
        else {
          FUN_1005ae5b0(param_2,param_3,param_4);
          uVar6 = *(ulong *)(puVar3 + 0x10);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b0810);
            (*pcVar1)();
          }
          puVar4 = puVar3;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar4 == 0) || (puVar2 = puVar3, *(ulong *)(puVar3 + 0x18) >> 1 <= uVar6)) {
            FUN_1005afb14();
            puVar2 = puVar4;
          }
          FUN_1005afa5c(uVar6 - 1,uVar6 - 1,1,0x2f);
        }
        FUN_1005b0104(lVar11,lVar11,puVar2);
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(puVar2);
      }
      uVar7 = uVar7 - 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005b0818 | FUN_1005b0818 */

/* WARNING: Removing unreachable block (ram,0x0001005b0970) */
/* WARNING: Removing unreachable block (ram,0x0001005b08ec) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005b0948 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1005b0818(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [6];
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  puVar2 = &DAT_100fd34c0;
  FUN_1000f7830(&DAT_100fd34c0,&DAT_100c627a0);
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = param_1;
  FUN_100004640(param_1,uVar1);
  FUN_1005b04e0();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_59 = 0;
    FUN_1005b0f8c();
    Swift::KeyedDecodingContainer::_decode
              (&local_58,&DAT_100ee4790,&local_59,puVar2,&DAT_100ee4790,KVar3.unknown);
    local_5a = 1;
    lVar4 = Swift::KeyedDecodingContainer::_decode(KVar3.unknown,puVar2);
    (**(code **)(lVar6 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = uVar1;
  }
  auVar7._8_8_ = lVar4;
  auVar7._0_8_ = local_58;
  return auVar7;
}



/* Address: 0x1005b097c | FUN_1005b097c */

void FUN_1005b097c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c622d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c622d0,&DAT_100ee49f0);
  DAT_100fd3288 = pTVar1;
  return;
}



/* Address: 0x1005b09bc | thunk_FUN_1005b097c */

void thunk_FUN_1005b097c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c622d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c622d0,&DAT_100ee49f0);
  DAT_100fd3288 = pTVar1;
  return;
}



/* Address: 0x1005b09c0 | thunk_FUN_1005b09c4 */

void thunk_FUN_1005b09c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62368;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62368,&DAT_100ee49c8);
  DAT_100fd3290 = pTVar1;
  return;
}



/* Address: 0x1005b09c4 | FUN_1005b09c4 */

void FUN_1005b09c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62368;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62368,&DAT_100ee49c8);
  DAT_100fd3290 = pTVar1;
  return;
}



/* Address: 0x1005b0a04 | FUN_1005b0a04 */

void FUN_1005b0a04(void)

{
  FUN_1005b0aac(&DAT_100fd3298,&DAT_100fd32a0,&DAT_100c622f8,
                PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__BidirectionalCollection_100eabea8
               );
  return;
}



/* Address: 0x1005b0a38 | FUN_1005b0a38 */

void FUN_1005b0a38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62308;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62308,&DAT_100ee49c8);
  DAT_100fd32a8 = pTVar1;
  return;
}



/* Address: 0x1005b0a78 | FUN_1005b0a78 */

void FUN_1005b0a78(void)

{
  FUN_1005b0aac(&DAT_100fd32b0,&DAT_100fd32b8,&DAT_100c62300,
                PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98);
  return;
}



/* Address: 0x1005b0aac | FUN_1005b0aac */

void FUN_1005b0aac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    uVar1 = param_2;
    FUN_1005b0a38();
    local_38 = uVar1;
    _swift_getWitnessTable(param_4,param_2,&local_38);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1005b0b10 | thunk_FUN_1005b0b14 */

void thunk_FUN_1005b0b14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62450,&DAT_100ee49c8);
  DAT_100fd32c0 = pTVar1;
  return;
}



/* Address: 0x1005b0b14 | FUN_1005b0b14 */

void FUN_1005b0b14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62450,&DAT_100ee49c8);
  DAT_100fd32c0 = pTVar1;
  return;
}



/* Address: 0x1005b0b54 | thunk_FUN_1005b0b58 */

void thunk_FUN_1005b0b58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62248;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62248,&DAT_100ee49f0);
  DAT_100fd32c8 = pTVar1;
  return;
}



/* Address: 0x1005b0b58 | FUN_1005b0b58 */

void FUN_1005b0b58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62248;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62248,&DAT_100ee49f0);
  DAT_100fd32c8 = pTVar1;
  return;
}



/* Address: 0x1005b0b98 | FUN_1005b0b98 */

void FUN_1005b0b98(void)

{
  FUN_100134584(&DAT_100fd32d0,&DAT_100fd32a0,&DAT_100c622f8,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x1005b0bcc | FUN_1005b0bcc */

void FUN_1005b0bcc(void)

{
  FUN_100134584(&DAT_100fd32d8,&DAT_100fd32b8,&DAT_100c62300,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x1005b0c00 | FUN_1005b0c00 */

void FUN_1005b0c00(void)

{
  FUN_100134584(&DAT_100fd32e0,&DAT_100fd32e8,&DAT_100c62448,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x1005b0c34 | thunk_FUN_1005b0c38 */

void thunk_FUN_1005b0c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_28;
  
  if (DAT_100fd32f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd32b8;
  FUN_1000f8b08(&DAT_100fd32b8,&DAT_100c62300);
  puVar2 = puVar1;
  FUN_1005b0ca8();
  puVar3 = PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0,puVar1
             ,&puStack_28);
  DAT_100fd32f0 = puVar3;
  return;
}



/* Address: 0x1005b0c38 | FUN_1005b0c38 */

void FUN_1005b0c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd32f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd32b8;
  FUN_1000f8b08(&DAT_100fd32b8,&DAT_100c62300);
  puVar2 = puVar1;
  FUN_1005b0ca8();
  puVar3 = PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0,puVar1
             ,&local_28);
  DAT_100fd32f0 = puVar3;
  return;
}



/* Address: 0x1005b0ca8 | FUN_1005b0ca8 */

void FUN_1005b0ca8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd32f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c624b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c624b8,&DAT_100ee49c8);
  DAT_100fd32f8 = pTVar1;
  return;
}



/* Address: 0x1005b0ce8 | FUN_1005b0ce8 */

void FUN_1005b0ce8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1005b0d0c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x1005b0d0c | FUN_1005b0d0c */

void FUN_1005b0d0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3300 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6258c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6258c,&DAT_100ee49c8);
  DAT_100fd3300 = pTVar1;
  return;
}



/* Address: 0x1005b0d4c | FUN_1005b0d4c */

void FUN_1005b0d4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1005b0d80();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1005b0dc0();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_1005b0e00();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x1005b0d80 | FUN_1005b0d80 */

void FUN_1005b0d80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3308 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c625f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c625f8,&DAT_100ee49c8);
  DAT_100fd3308 = pTVar1;
  return;
}



/* Address: 0x1005b0dc0 | FUN_1005b0dc0 */

void FUN_1005b0dc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3310 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62620,&DAT_100ee49c8);
  DAT_100fd3310 = pTVar1;
  return;
}



/* Address: 0x1005b0e00 | FUN_1005b0e00 */

void FUN_1005b0e00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3318 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c625b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c625b8,&DAT_100ee49c8);
  DAT_100fd3318 = pTVar1;
  return;
}



/* Address: 0x1005b0e40 | thunk_FUN_1005b0e44 */

void thunk_FUN_1005b0e44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3320 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62648,&DAT_100ee49c8);
  DAT_100fd3320 = pTVar1;
  return;
}



/* Address: 0x1005b0e44 | FUN_1005b0e44 */

void FUN_1005b0e44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3320 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62648,&DAT_100ee49c8);
  DAT_100fd3320 = pTVar1;
  return;
}



/* Address: 0x1005b0e84 | FUN_1005b0e84 */

undefined1  [16] FUN_1005b0e84(void)

{
  return ZEXT816(0x100ee49c8);
}



/* Address: 0x1005b0e94 | FUN_1005b0e94 */

undefined1  [16] FUN_1005b0e94(void)

{
  return ZEXT816(0x100ee49f0);
}



/* Address: 0x1005b0ea4 | FUN_1005b0ea4 */

void FUN_1005b0ea4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005b0eb0 | FUN_1005b0eb0 */

undefined1  [16] FUN_1005b0eb0(void)

{
  return ZEXT816(0x100ee4a88);
}



/* Address: 0x1005b0ec0 | thunk_FUN_1005b0ec4 */

void thunk_FUN_1005b0ec4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3328 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62724;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62724,&DAT_100ee4a88);
  DAT_100fd3328 = pTVar1;
  return;
}


