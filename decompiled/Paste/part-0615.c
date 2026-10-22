/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006981c4 | thunk_FUN_100698f30 */

bool thunk_FUN_100698f30(int *param_1,int *param_2,int *param_3,int *param_4,long param_5,
                        long param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            iVar4 = *param_4;
            if (iVar4 == iVar1) {
              *param_4 = iVar2;
            }
            goto LAB_100698ffc;
          }
          goto LAB_100699010;
        }
LAB_100698ff4:
        iVar4 = *param_4;
        if (iVar4 == iVar1) {
          *param_4 = iVar2;
        }
        goto LAB_100698ffc;
      }
    }
    else {
      if (param_5 != 2) {
LAB_100699010:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100699014);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_100699010;
        goto LAB_100698ff4;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_100699010;
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
      goto LAB_100698ffc;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_100699010;
  iVar4 = *param_4;
  if (iVar4 == iVar1) {
    *param_4 = iVar2;
  }
LAB_100698ffc:
  *param_1 = iVar4;
  return iVar4 == iVar1;
}



/* Address: 0x1006981c8 | thunk_FUN_100699014 */

void thunk_FUN_100699014(int *param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      *param_1 = iVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      *param_1 = iVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699078);
  (*pcVar2)();
}



/* Address: 0x1006981cc | thunk_FUN_100699078 */

void thunk_FUN_100699078(int *param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      *param_1 = iVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      *param_1 = iVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006990ec);
  (*pcVar2)();
}



/* Address: 0x1006981d0 | thunk_FUN_1006990ec */

void thunk_FUN_1006990ec(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699160);
  (*pcVar2)();
}



/* Address: 0x1006981d4 | thunk_FUN_100699160 */

void thunk_FUN_100699160(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006991c4);
  (*pcVar2)();
}



/* Address: 0x1006981d8 | thunk_FUN_1006991c4 */

void thunk_FUN_1006991c4(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699228);
  (*pcVar2)();
}



/* Address: 0x1006981dc | thunk_FUN_100699228 */

void thunk_FUN_100699228(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006992b8);
  (*pcVar1)();
}



/* Address: 0x1006981e0 | thunk_FUN_1006992b8 */

void thunk_FUN_1006992b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100699338);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x1006981e4 | thunk_FUN_100699338 */

void thunk_FUN_100699338(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String SVar4;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006993f0);
  (*pcVar1)();
}



/* Address: 0x1006981e8 | thunk_FUN_1006993f0 */

bool thunk_FUN_1006993f0(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
    else {
      if (param_5 != 2) goto LAB_100699464;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
  }
  else if (param_5 == 3) {
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_100699464:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006994bc);
      (*pcVar1)();
    }
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x1006981ec | thunk_FUN_1006994bc */

bool thunk_FUN_1006994bc(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                        long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            lVar2 = *param_4;
            if (lVar2 == lVar3) {
              *param_4 = lVar4;
            }
            goto LAB_100699588;
          }
          goto LAB_10069959c;
        }
LAB_100699580:
        lVar2 = *param_4;
        if (lVar2 == lVar3) {
          *param_4 = lVar4;
        }
        goto LAB_100699588;
      }
    }
    else {
      if (param_5 != 2) {
LAB_10069959c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006995a0);
        (*pcVar1)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069959c;
        goto LAB_100699580;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069959c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_100699588;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069959c;
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_100699588:
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x1006981f0 | thunk_FUN_1006995a0 */

void thunk_FUN_1006995a0(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      *param_1 = lVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      *param_1 = lVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699604);
  (*pcVar1)();
}



/* Address: 0x1006981f4 | thunk_FUN_100699604 */

void thunk_FUN_100699604(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      *param_1 = lVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      *param_1 = lVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699678);
  (*pcVar1)();
}



/* Address: 0x1006981f8 | thunk_FUN_100699678 */

void thunk_FUN_100699678(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006996ec);
  (*pcVar1)();
}



/* Address: 0x1006981fc | thunk_FUN_1006996ec */

void thunk_FUN_1006996ec(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699750);
  (*pcVar1)();
}



/* Address: 0x100698200 | thunk_FUN_100699750 */

void thunk_FUN_100699750(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006997b4);
  (*pcVar1)();
}



/* Address: 0x100698204 | FUN_100698204 */

void FUN_100698204(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100698294);
  (*pcVar1)();
}



/* Address: 0x100698294 | FUN_100698294 */

void FUN_100698294(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  String SVar4;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10069834c);
  (*pcVar3)();
}



/* Address: 0x10069834c | FUN_10069834c */

bool FUN_10069834c(char *param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  String SVar5;
  
  cVar1 = *param_2;
  cVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_1006983c0;
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
    }
  }
  else if (param_5 == 3) {
    cVar4 = *param_4;
    if (cVar4 == cVar1) {
      *param_4 = cVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_1006983c0:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100698418);
      (*pcVar3)();
    }
    cVar4 = *param_4;
    if (cVar4 == cVar1) {
      *param_4 = cVar2;
    }
  }
  *param_1 = cVar4;
  return cVar4 == cVar1;
}



/* Address: 0x100698418 | FUN_100698418 */

bool FUN_100698418(char *param_1,char *param_2,char *param_3,char *param_4,long param_5,long param_6
                  )

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  
  cVar1 = *param_2;
  cVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            cVar4 = *param_4;
            if (cVar4 == cVar1) {
              *param_4 = cVar2;
            }
            goto LAB_1006984e4;
          }
          goto LAB_1006984f8;
        }
LAB_1006984dc:
        cVar4 = *param_4;
        if (cVar4 == cVar1) {
          *param_4 = cVar2;
        }
        goto LAB_1006984e4;
      }
    }
    else {
      if (param_5 != 2) {
LAB_1006984f8:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006984fc);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_1006984f8;
        goto LAB_1006984dc;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_1006984f8;
      cVar4 = *param_4;
      if (cVar4 == cVar1) {
        *param_4 = cVar2;
      }
      goto LAB_1006984e4;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_1006984f8;
  cVar4 = *param_4;
  if (cVar4 == cVar1) {
    *param_4 = cVar2;
  }
LAB_1006984e4:
  *param_1 = cVar4;
  return cVar4 == cVar1;
}



/* Address: 0x1006984fc | FUN_1006984fc */

void FUN_1006984fc(char *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      *param_1 = cVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      *param_1 = cVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 + cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698560);
  (*pcVar3)();
}



/* Address: 0x100698560 | FUN_100698560 */

void FUN_100698560(char *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      *param_1 = cVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      *param_1 = cVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      cVar1 = *param_3;
      *param_3 = cVar1 - cVar2;
      LORelease();
      *param_1 = cVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006985d4);
  (*pcVar3)();
}



/* Address: 0x1006985d4 | FUN_1006985d4 */

void FUN_1006985d4(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 & bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698648);
  (*pcVar3)();
}



/* Address: 0x100698648 | FUN_100698648 */

void FUN_100698648(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 | bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006986ac);
  (*pcVar3)();
}



/* Address: 0x1006986ac | FUN_1006986ac */

void FUN_1006986ac(byte *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      *param_1 = bVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      *param_1 = bVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      bVar1 = *param_3;
      *param_3 = bVar1 ^ bVar2;
      LORelease();
      *param_1 = bVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698710);
  (*pcVar3)();
}



/* Address: 0x100698710 | FUN_100698710 */

void FUN_100698710(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006987a0);
  (*pcVar1)();
}



/* Address: 0x1006987a0 | FUN_1006987a0 */

void FUN_1006987a0(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100698820);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x100698820 | FUN_100698820 */

void FUN_100698820(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,long param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  String SVar4;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006988d8);
  (*pcVar3)();
}



/* Address: 0x1006988d8 | FUN_1006988d8 */

bool FUN_1006988d8(short *param_1,short *param_2,short *param_3,short *param_4,long param_5)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  String SVar5;
  
  sVar1 = *param_2;
  sVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069894c;
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
    }
  }
  else if (param_5 == 3) {
    sVar4 = *param_4;
    if (sVar4 == sVar1) {
      *param_4 = sVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069894c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006989a4);
      (*pcVar3)();
    }
    sVar4 = *param_4;
    if (sVar4 == sVar1) {
      *param_4 = sVar2;
    }
  }
  *param_1 = sVar4;
  return sVar4 == sVar1;
}



/* Address: 0x1006989a4 | FUN_1006989a4 */

bool FUN_1006989a4(short *param_1,short *param_2,short *param_3,short *param_4,long param_5,
                  long param_6)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  
  sVar1 = *param_2;
  sVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            sVar4 = *param_4;
            if (sVar4 == sVar1) {
              *param_4 = sVar2;
            }
            goto LAB_100698a70;
          }
          goto LAB_100698a84;
        }
LAB_100698a68:
        sVar4 = *param_4;
        if (sVar4 == sVar1) {
          *param_4 = sVar2;
        }
        goto LAB_100698a70;
      }
    }
    else {
      if (param_5 != 2) {
LAB_100698a84:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100698a88);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_100698a84;
        goto LAB_100698a68;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_100698a84;
      sVar4 = *param_4;
      if (sVar4 == sVar1) {
        *param_4 = sVar2;
      }
      goto LAB_100698a70;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_100698a84;
  sVar4 = *param_4;
  if (sVar4 == sVar1) {
    *param_4 = sVar2;
  }
LAB_100698a70:
  *param_1 = sVar4;
  return sVar4 == sVar1;
}



/* Address: 0x100698a88 | FUN_100698a88 */

void FUN_100698a88(short *param_1,short *param_2,short *param_3,long param_4)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  
  sVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      *param_1 = sVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      *param_1 = sVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 + sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698aec);
  (*pcVar3)();
}



/* Address: 0x100698aec | FUN_100698aec */

void FUN_100698aec(short *param_1,short *param_2,short *param_3,long param_4)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  
  sVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      *param_1 = sVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      *param_1 = sVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      sVar1 = *param_3;
      *param_3 = sVar1 - sVar2;
      LORelease();
      *param_1 = sVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698b60);
  (*pcVar3)();
}



/* Address: 0x100698b60 | FUN_100698b60 */

void FUN_100698b60(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 & uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698bd4);
  (*pcVar3)();
}



/* Address: 0x100698bd4 | FUN_100698bd4 */

void FUN_100698bd4(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 | uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698c38);
  (*pcVar3)();
}



/* Address: 0x100698c38 | FUN_100698c38 */

void FUN_100698c38(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  
  uVar2 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      *param_1 = uVar1;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar1 = *param_3;
      *param_3 = uVar1 ^ uVar2;
      LORelease();
      *param_1 = uVar1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100698c9c);
  (*pcVar3)();
}



/* Address: 0x100698c9c | FUN_100698c9c */

void FUN_100698c9c(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100698d2c);
  (*pcVar1)();
}



/* Address: 0x100698d2c | FUN_100698d2c */

void FUN_100698d2c(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100698dac);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x100698dac | FUN_100698dac */

void FUN_100698dac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  String SVar4;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100698e64);
  (*pcVar2)();
}



/* Address: 0x100698e64 | FUN_100698e64 */

bool FUN_100698e64(int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  String SVar5;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
    }
    else {
      if (param_5 != 2) goto LAB_100698ed8;
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
    }
  }
  else if (param_5 == 3) {
    iVar4 = *param_4;
    if (iVar4 == iVar1) {
      *param_4 = iVar2;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_100698ed8:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100698f30);
      (*pcVar3)();
    }
    iVar4 = *param_4;
    if (iVar4 == iVar1) {
      *param_4 = iVar2;
    }
  }
  *param_1 = iVar4;
  return iVar4 == iVar1;
}



/* Address: 0x100698f30 | FUN_100698f30 */

bool FUN_100698f30(int *param_1,int *param_2,int *param_3,int *param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            iVar4 = *param_4;
            if (iVar4 == iVar1) {
              *param_4 = iVar2;
            }
            goto LAB_100698ffc;
          }
          goto LAB_100699010;
        }
LAB_100698ff4:
        iVar4 = *param_4;
        if (iVar4 == iVar1) {
          *param_4 = iVar2;
        }
        goto LAB_100698ffc;
      }
    }
    else {
      if (param_5 != 2) {
LAB_100699010:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100699014);
        (*pcVar3)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_100699010;
        goto LAB_100698ff4;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_100699010;
      iVar4 = *param_4;
      if (iVar4 == iVar1) {
        *param_4 = iVar2;
      }
      goto LAB_100698ffc;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_100699010;
  iVar4 = *param_4;
  if (iVar4 == iVar1) {
    *param_4 = iVar2;
  }
LAB_100698ffc:
  *param_1 = iVar4;
  return iVar4 == iVar1;
}



/* Address: 0x100699014 | FUN_100699014 */

void FUN_100699014(int *param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      *param_1 = iVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      *param_1 = iVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699078);
  (*pcVar2)();
}



/* Address: 0x100699078 | FUN_100699078 */

void FUN_100699078(int *param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      *param_1 = iVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      *param_1 = iVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      iVar3 = *param_3;
      *param_3 = iVar3 - iVar1;
      LORelease();
      *param_1 = iVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006990ec);
  (*pcVar2)();
}



/* Address: 0x1006990ec | FUN_1006990ec */

void FUN_1006990ec(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 & uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699160);
  (*pcVar2)();
}



/* Address: 0x100699160 | FUN_100699160 */

void FUN_100699160(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 | uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006991c4);
  (*pcVar2)();
}



/* Address: 0x1006991c4 | FUN_1006991c4 */

void FUN_1006991c4(uint *param_1,uint *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      *param_1 = uVar3;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      *param_1 = uVar3;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar3 = *param_3;
      *param_3 = uVar3 ^ uVar1;
      LORelease();
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100699228);
  (*pcVar2)();
}



/* Address: 0x100699228 | FUN_100699228 */

void FUN_100699228(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (param_3 == 5) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 2) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 == 0) {
    *param_1 = *param_2;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006992b8);
  (*pcVar1)();
}



/* Address: 0x1006992b8 | FUN_1006992b8 */

void FUN_1006992b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  String SVar2;
  
  if ((param_3 != 5) && (param_3 != 3)) {
    if (param_3 == 0) {
      *param_2 = *param_1;
      return;
    }
    SVar2.bridgeObject = (void *)0x2;
    SVar2.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100699338);
    (*pcVar1)();
  }
  *param_2 = *param_1;
  return;
}



/* Address: 0x100699338 | FUN_100699338 */

void FUN_100699338(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String SVar4;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006993f0);
  (*pcVar1)();
}



/* Address: 0x1006993f0 | FUN_1006993f0 */

bool FUN_1006993f0(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
    else {
      if (param_5 != 2) goto LAB_100699464;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
  }
  else if (param_5 == 3) {
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_100699464:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006994bc);
      (*pcVar1)();
    }
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x1006994bc | FUN_1006994bc */

bool FUN_1006994bc(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6
                  )

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 == 0) {
            lVar2 = *param_4;
            if (lVar2 == lVar3) {
              *param_4 = lVar4;
            }
            goto LAB_100699588;
          }
          goto LAB_10069959c;
        }
LAB_100699580:
        lVar2 = *param_4;
        if (lVar2 == lVar3) {
          *param_4 = lVar4;
        }
        goto LAB_100699588;
      }
    }
    else {
      if (param_5 != 2) {
LAB_10069959c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006995a0);
        (*pcVar1)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069959c;
        goto LAB_100699580;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069959c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_100699588;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069959c;
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_100699588:
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x1006995a0 | FUN_1006995a0 */

void FUN_1006995a0(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      *param_1 = lVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      *param_1 = lVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 + lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699604);
  (*pcVar1)();
}



/* Address: 0x100699604 | FUN_100699604 */

void FUN_100699604(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      *param_1 = lVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      *param_1 = lVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar2 - lVar3;
      LORelease();
      *param_1 = lVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699678);
  (*pcVar1)();
}



/* Address: 0x100699678 | FUN_100699678 */

void FUN_100699678(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 & uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006996ec);
  (*pcVar1)();
}



/* Address: 0x1006996ec | FUN_1006996ec */

void FUN_1006996ec(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 | uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100699750);
  (*pcVar1)();
}



/* Address: 0x100699750 | FUN_100699750 */

void FUN_100699750(ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      *param_1 = uVar2;
      return;
    }
    if (param_4 == 2) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      *param_1 = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 3) {
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
    if ((param_4 == 4) || (param_4 == 5)) {
      LOAcquire();
      uVar2 = *param_3;
      *param_3 = uVar2 ^ uVar3;
      LORelease();
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006997b4);
  (*pcVar1)();
}



/* Address: 0x1006997b4 | FUN_1006997b4 */

undefined ** FUN_1006997b4(void)

{
  return &PTR_PTR_100fda918;
}



/* Address: 0x1006997c0 | FUN_1006997c0 */

undefined ** FUN_1006997c0(void)

{
  return &PTR_PTR_100ef5958;
}



/* Address: 0x1006997cc | FUN_1006997cc */

void FUN_1006997cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006997f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006997f0 | FUN_1006997f0 */

void FUN_1006997f0(void)

{
  undefined *puVar1;
  
  if (DAT_100fda990 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int8_>Swift__FixedWidthInteger_100eadb38;
  _swift_getWitnessTable
            (PTR_Swift____int8_>Swift__FixedWidthInteger_100eadb38,
             PTR___type_metadata_for_Swift_Int8_100eadb28);
  DAT_100fda990 = puVar1;
  return;
}



/* Address: 0x100699830 | FUN_100699830 */

undefined ** FUN_100699830(void)

{
  return &PTR_PTR_100fda9b0;
}



/* Address: 0x10069983c | FUN_10069983c */

undefined ** FUN_10069983c(void)

{
  return &PTR_PTR_100ef5990;
}



/* Address: 0x100699848 | FUN_100699848 */

void FUN_100699848(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10069986c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x10069986c | FUN_10069986c */

void FUN_10069986c(void)

{
  undefined *puVar1;
  
  if (DAT_100fdaa28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int16_>Swift__FixedWidthInteger_100eadbb0;
  _swift_getWitnessTable
            (PTR_Swift____int16_>Swift__FixedWidthInteger_100eadbb0,
             PTR___type_metadata_for_Swift_Int16_100eadba0);
  DAT_100fdaa28 = puVar1;
  return;
}



/* Address: 0x1006998ac | FUN_1006998ac */

undefined ** FUN_1006998ac(void)

{
  return &PTR_PTR_100fdaa48;
}


