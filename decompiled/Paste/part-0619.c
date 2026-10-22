/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10069c644 | FUN_10069c644 */

bool FUN_10069c644(byte *param_1,byte *param_2,byte *param_3,byte *param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  String SVar5;
  
  bVar1 = *param_3;
  bVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      bVar4 = *param_4;
      if (bVar4 == bVar2) {
        *param_4 = bVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c6bc;
      bVar4 = *param_4;
      if (bVar4 == bVar2) {
        *param_4 = bVar1;
      }
    }
  }
  else if (param_5 == 3) {
    bVar4 = *param_4;
    if (bVar4 == bVar2) {
      *param_4 = bVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c6bc:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c714);
      (*pcVar3)();
    }
    bVar4 = *param_4;
    if (bVar4 == bVar2) {
      *param_4 = bVar1;
    }
  }
  *param_1 = bVar4 & 1;
  return bVar4 == bVar2;
}



/* Address: 0x10069c714 | thunk_FUN_10069c724 */

bool thunk_FUN_10069c724(char *param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  String SVar5;
  
  cVar1 = *param_3;
  cVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      cVar4 = *param_4;
      if (cVar4 == cVar2) {
        *param_4 = cVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c798;
      cVar4 = *param_4;
      if (cVar4 == cVar2) {
        *param_4 = cVar1;
      }
    }
  }
  else if (param_5 == 3) {
    cVar4 = *param_4;
    if (cVar4 == cVar2) {
      *param_4 = cVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c798:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c7f0);
      (*pcVar3)();
    }
    cVar4 = *param_4;
    if (cVar4 == cVar2) {
      *param_4 = cVar1;
    }
  }
  *param_1 = cVar4;
  return cVar4 == cVar2;
}



/* Address: 0x10069c718 | thunk_FUN_10069c7f0 */

bool thunk_FUN_10069c7f0(short *param_1,short *param_2,short *param_3,short *param_4,long param_5)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  String SVar5;
  
  sVar1 = *param_3;
  sVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      sVar4 = *param_4;
      if (sVar4 == sVar2) {
        *param_4 = sVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c864;
      sVar4 = *param_4;
      if (sVar4 == sVar2) {
        *param_4 = sVar1;
      }
    }
  }
  else if (param_5 == 3) {
    sVar4 = *param_4;
    if (sVar4 == sVar2) {
      *param_4 = sVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c864:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c8bc);
      (*pcVar3)();
    }
    sVar4 = *param_4;
    if (sVar4 == sVar2) {
      *param_4 = sVar1;
    }
  }
  *param_1 = sVar4;
  return sVar4 == sVar2;
}



/* Address: 0x10069c71c | thunk_FUN_10069c8bc */

bool thunk_FUN_10069c8bc(int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  String SVar5;
  
  iVar1 = *param_3;
  iVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      iVar4 = *param_4;
      if (iVar4 == iVar2) {
        *param_4 = iVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c930;
      iVar4 = *param_4;
      if (iVar4 == iVar2) {
        *param_4 = iVar1;
      }
    }
  }
  else if (param_5 == 3) {
    iVar4 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c930:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c988);
      (*pcVar3)();
    }
    iVar4 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar1;
    }
  }
  *param_1 = iVar4;
  return iVar4 == iVar2;
}



/* Address: 0x10069c720 | thunk_FUN_10069c988 */

bool thunk_FUN_10069c988(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar4 = *param_3;
  lVar3 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c9fc;
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
LAB_10069c9fc:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ca54);
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



/* Address: 0x10069c724 | FUN_10069c724 */

bool FUN_10069c724(char *param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  String SVar5;
  
  cVar1 = *param_3;
  cVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      cVar4 = *param_4;
      if (cVar4 == cVar2) {
        *param_4 = cVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c798;
      cVar4 = *param_4;
      if (cVar4 == cVar2) {
        *param_4 = cVar1;
      }
    }
  }
  else if (param_5 == 3) {
    cVar4 = *param_4;
    if (cVar4 == cVar2) {
      *param_4 = cVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c798:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c7f0);
      (*pcVar3)();
    }
    cVar4 = *param_4;
    if (cVar4 == cVar2) {
      *param_4 = cVar1;
    }
  }
  *param_1 = cVar4;
  return cVar4 == cVar2;
}



/* Address: 0x10069c7f0 | FUN_10069c7f0 */

bool FUN_10069c7f0(short *param_1,short *param_2,short *param_3,short *param_4,long param_5)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  short sVar4;
  String SVar5;
  
  sVar1 = *param_3;
  sVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      sVar4 = *param_4;
      if (sVar4 == sVar2) {
        *param_4 = sVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c864;
      sVar4 = *param_4;
      if (sVar4 == sVar2) {
        *param_4 = sVar1;
      }
    }
  }
  else if (param_5 == 3) {
    sVar4 = *param_4;
    if (sVar4 == sVar2) {
      *param_4 = sVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c864:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c8bc);
      (*pcVar3)();
    }
    sVar4 = *param_4;
    if (sVar4 == sVar2) {
      *param_4 = sVar1;
    }
  }
  *param_1 = sVar4;
  return sVar4 == sVar2;
}



/* Address: 0x10069c8bc | FUN_10069c8bc */

bool FUN_10069c8bc(int *param_1,int *param_2,int *param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  String SVar5;
  
  iVar1 = *param_3;
  iVar2 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      iVar4 = *param_4;
      if (iVar4 == iVar2) {
        *param_4 = iVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c930;
      iVar4 = *param_4;
      if (iVar4 == iVar2) {
        *param_4 = iVar1;
      }
    }
  }
  else if (param_5 == 3) {
    iVar4 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069c930:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10069c988);
      (*pcVar3)();
    }
    iVar4 = *param_4;
    if (iVar4 == iVar2) {
      *param_4 = iVar1;
    }
  }
  *param_1 = iVar4;
  return iVar4 == iVar2;
}



/* Address: 0x10069c988 | FUN_10069c988 */

bool FUN_10069c988(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar4 = *param_3;
  lVar3 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069c9fc;
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
LAB_10069c9fc:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ca54);
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



/* Address: 0x10069ca54 | FUN_10069ca54 */

bool FUN_10069ca54(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  
  lVar1 = *param_3;
  lVar3 = param_3[1];
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar6 = *param_4;
      lVar7 = param_4[1];
      if ((lVar6 == lVar4) && (lVar7 == lVar2)) {
        *param_4 = lVar3;
        param_4[1] = lVar1;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069cadc;
      lVar6 = *param_4;
      lVar7 = param_4[1];
      if ((lVar6 == lVar4) && (lVar7 == lVar2)) {
        *param_4 = lVar3;
        param_4[1] = lVar1;
      }
    }
  }
  else if (param_5 == 3) {
    lVar6 = *param_4;
    lVar7 = param_4[1];
    if ((lVar6 == lVar4) && (lVar7 == lVar2)) {
      *param_4 = lVar3;
      param_4[1] = lVar1;
    }
  }
  else {
    if ((param_5 != 4) && (param_5 != 5)) {
LAB_10069cadc:
      SVar8.bridgeObject = (void *)0x2;
      SVar8.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10069cb34);
      (*pcVar5)();
    }
    lVar6 = *param_4;
    lVar7 = param_4[1];
    if ((lVar6 == lVar4) && (lVar7 == lVar2)) {
      *param_4 = lVar3;
      param_4[1] = lVar1;
    }
  }
  *param_1 = lVar6;
  param_1[1] = lVar7;
  return lVar6 == lVar2 && lVar7 == lVar4;
}



/* Address: 0x10069cb34 | thunk_FUN_10069cb38 */

bool thunk_FUN_10069cb38(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar4 = *param_3;
  lVar3 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
    if (param_5 != 2) {
LAB_10069cbc8:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cc20);
      (*pcVar1)();
    }
LAB_10069cb88:
    if ((param_5 != 4) && (param_5 != 3)) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
  }
  else {
    if (param_5 == 3) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
    if (param_5 == 4) goto LAB_10069cb88;
    if (param_5 != 5) goto LAB_10069cbc8;
  }
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_10069cbac:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cbc8);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069cb38 | FUN_10069cb38 */

bool FUN_10069cb38(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar4 = *param_3;
  lVar3 = *param_2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
    if (param_5 != 2) {
LAB_10069cbc8:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cc20);
      (*pcVar1)();
    }
LAB_10069cb88:
    if ((param_5 != 4) && (param_5 != 3)) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
  }
  else {
    if (param_5 == 3) {
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069cbac;
    }
    if (param_5 == 4) goto LAB_10069cb88;
    if (param_5 != 5) goto LAB_10069cbc8;
  }
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_10069cbac:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cbc8);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069cc20 | thunk_FUN_10069cc24 */

bool thunk_FUN_10069cc24(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar3 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar4 = *param_2;
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
    if (param_5 != 2) {
LAB_10069ccc0:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cd18);
      (*pcVar1)();
    }
LAB_10069cc7c:
    lVar4 = *param_2;
    if ((param_5 != 4) && (param_5 != 3)) {
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
  }
  else {
    if (param_5 == 3) {
      lVar4 = *param_2;
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
    if (param_5 == 4) goto LAB_10069cc7c;
    if (param_5 != 5) goto LAB_10069ccc0;
    lVar4 = *param_2;
  }
  lVar2 = *param_4;
  if (lVar2 == lVar4) {
    *param_4 = lVar3;
  }
LAB_10069cca4:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ccc0);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar4;
}



/* Address: 0x10069cc24 | FUN_10069cc24 */

bool FUN_10069cc24(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  String SVar5;
  
  lVar3 = *param_3;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar4 = *param_2;
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
    if (param_5 != 2) {
LAB_10069ccc0:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069cd18);
      (*pcVar1)();
    }
LAB_10069cc7c:
    lVar4 = *param_2;
    if ((param_5 != 4) && (param_5 != 3)) {
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
  }
  else {
    if (param_5 == 3) {
      lVar4 = *param_2;
      lVar2 = *param_4;
      if (lVar2 == lVar4) {
        *param_4 = lVar3;
      }
      goto LAB_10069cca4;
    }
    if (param_5 == 4) goto LAB_10069cc7c;
    if (param_5 != 5) goto LAB_10069ccc0;
    lVar4 = *param_2;
  }
  lVar2 = *param_4;
  if (lVar2 == lVar4) {
    *param_4 = lVar3;
  }
LAB_10069cca4:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ccc0);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar4;
}



/* Address: 0x10069cd18 | thunk_FUN_10069cd1c */

bool thunk_FUN_10069cd1c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  String SVar6;
  
  lVar3 = *param_3;
  lVar2 = *param_2;
  bVar5 = true;
  lVar4 = 2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069cea8;
    }
    if (param_5 != 2) {
LAB_10069cde8:
      SVar6.bridgeObject = (void *)0x2;
      SVar6.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ce40);
      (*pcVar1)();
    }
  }
  else if (param_5 == 3) {
    lVar4 = 0;
  }
  else if (param_5 == 5) {
    bVar5 = false;
    lVar4 = 5;
  }
  else if (param_5 != 4) goto LAB_10069cde8;
  if (lVar3 == 0) {
    if (param_5 < 4) {
      if (param_5 == 2) {
        if ((lVar4 == 0) || (lVar4 == 2)) goto LAB_10069cdb4;
      }
      else {
        if (lVar4 == 0) goto LAB_10069cebc;
LAB_10069ce7c:
        if (lVar4 == 2) goto LAB_10069cea0;
      }
      if (lVar4 != 5) {
LAB_10069ce8c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ce90);
        (*pcVar1)();
      }
    }
    else if (param_5 == 4) {
      if (lVar4 != 0) goto LAB_10069ce7c;
    }
    else if ((lVar4 != 0) && (lVar4 != 2)) goto LAB_10069ce9c;
  }
  else if (param_5 < 4) {
    if (param_5 == 2) {
      if (lVar4 != 5) {
        if ((lVar4 != 2) && (lVar4 != 0)) goto LAB_10069ce8c;
LAB_10069cdb4:
        lVar4 = *param_4;
        if (lVar4 == lVar2) {
          *param_4 = lVar3;
        }
        goto LAB_10069cea8;
      }
    }
    else if ((lVar4 != 5) && (lVar4 != 2)) {
      if (lVar4 != 0) goto LAB_10069ce8c;
LAB_10069cebc:
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069cea8;
    }
  }
  else if (param_5 == 4) {
    if (((lVar4 != 5) && (lVar4 != 2)) && (lVar4 != 0)) goto LAB_10069ce8c;
  }
  else if ((lVar4 != 2) && (lVar4 != 0)) {
LAB_10069ce9c:
    if (bVar5) goto LAB_10069ce8c;
  }
LAB_10069cea0:
  lVar4 = *param_4;
  if (lVar4 == lVar2) {
    *param_4 = lVar3;
  }
LAB_10069cea8:
  *param_1 = lVar4;
  return lVar4 == lVar2;
}



/* Address: 0x10069cd1c | FUN_10069cd1c */

bool FUN_10069cd1c(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  String SVar6;
  
  lVar3 = *param_3;
  lVar2 = *param_2;
  bVar5 = true;
  lVar4 = 2;
  if (param_5 < 3) {
    if (param_5 == 0) {
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069cea8;
    }
    if (param_5 != 2) {
LAB_10069cde8:
      SVar6.bridgeObject = (void *)0x2;
      SVar6.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ce40);
      (*pcVar1)();
    }
  }
  else if (param_5 == 3) {
    lVar4 = 0;
  }
  else if (param_5 == 5) {
    bVar5 = false;
    lVar4 = 5;
  }
  else if (param_5 != 4) goto LAB_10069cde8;
  if (lVar3 == 0) {
    if (param_5 < 4) {
      if (param_5 == 2) {
        if ((lVar4 == 0) || (lVar4 == 2)) goto LAB_10069cdb4;
      }
      else {
        if (lVar4 == 0) goto LAB_10069cebc;
LAB_10069ce7c:
        if (lVar4 == 2) goto LAB_10069cea0;
      }
      if (lVar4 != 5) {
LAB_10069ce8c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069ce90);
        (*pcVar1)();
      }
    }
    else if (param_5 == 4) {
      if (lVar4 != 0) goto LAB_10069ce7c;
    }
    else if ((lVar4 != 0) && (lVar4 != 2)) goto LAB_10069ce9c;
  }
  else if (param_5 < 4) {
    if (param_5 == 2) {
      if (lVar4 != 5) {
        if ((lVar4 != 2) && (lVar4 != 0)) goto LAB_10069ce8c;
LAB_10069cdb4:
        lVar4 = *param_4;
        if (lVar4 == lVar2) {
          *param_4 = lVar3;
        }
        goto LAB_10069cea8;
      }
    }
    else if ((lVar4 != 5) && (lVar4 != 2)) {
      if (lVar4 != 0) goto LAB_10069ce8c;
LAB_10069cebc:
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069cea8;
    }
  }
  else if (param_5 == 4) {
    if (((lVar4 != 5) && (lVar4 != 2)) && (lVar4 != 0)) goto LAB_10069ce8c;
  }
  else if ((lVar4 != 2) && (lVar4 != 0)) {
LAB_10069ce9c:
    if (bVar5) goto LAB_10069ce8c;
  }
LAB_10069cea0:
  lVar4 = *param_4;
  if (lVar4 == lVar2) {
    *param_4 = lVar3;
  }
LAB_10069cea8:
  *param_1 = lVar4;
  return lVar4 == lVar2;
}



/* Address: 0x10069cec8 | FUN_10069cec8 */

uint FUN_10069cec8(uint param_1)

{
  FUN_10069cf7c();
  return param_1 & 1;
}



/* Address: 0x10069cf04 | FUN_10069cf04 */

uint FUN_10069cf04(uint param_1)

{
  FUN_10069cf7c();
  return param_1 & 1;
}



/* Address: 0x10069cf40 | FUN_10069cf40 */

uint FUN_10069cf40(uint param_1)

{
  FUN_10069cf7c();
  return param_1 & 1;
}



/* Address: 0x10069cf7c | FUN_10069cf7c */

bool FUN_10069cf7c(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long param_5,
                  long param_6,undefined8 param_7,code *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  Optional OVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  String SVar13;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  char local_68;
  
  uVar10 = *param_3;
  if (param_5 == 0) {
    bVar3 = false;
    lVar11 = 0;
    bVar2 = true;
    bVar4 = true;
  }
  else {
    bVar2 = false;
    bVar3 = true;
    lVar11 = 2;
    if (param_5 < 4) {
      bVar4 = true;
      if (param_5 != 2) {
        if (param_5 != 3) {
LAB_10069d288:
          SVar13.bridgeObject = (void *)0x2;
          SVar13.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar13,(StaticString)0xd000000000000014,
                     0x8000000100dafc50,0xdafc90);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10069d2d4);
          (*pcVar8)();
        }
        bVar3 = false;
        lVar11 = 0;
        bVar2 = true;
      }
    }
    else if (param_5 == 5) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      lVar11 = 5;
    }
    else {
      bVar4 = true;
      if (param_5 != 4) goto LAB_10069d288;
    }
  }
  uStack_78 = *param_2;
  uVar12 = *(undefined8 *)(param_6 + 0x10);
  local_80 = uVar12;
  (*param_8)(0xff,uVar12);
  OVar9 = Swift::Optional::typeMetadataAccessor();
  puVar7 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar6 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar5 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100617fb8(&local_70,param_9,auStack_90,OVar9.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_68 != '\x01') {
    lVar1 = local_70;
  }
  local_80 = uVar12;
  uStack_78 = uVar10;
  FUN_100617fb8(&local_70,param_10,auStack_90,OVar9.value,puVar6,puVar5,puVar7);
  if (local_68 == '\x01') {
    if (param_5 == 0) {
      if (lVar11 == 0) {
        local_70 = 0;
LAB_10069d170:
        lVar11 = *param_4;
        if (lVar11 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069d254;
      }
LAB_10069d1d4:
      local_70 = 0;
      if (lVar11 == 2) {
LAB_10069d248:
        lVar11 = *param_4;
        if (lVar11 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069d254;
      }
    }
    else {
      if (3 < param_5) {
        local_70 = lVar11;
        if (param_5 == 4) {
          if (lVar11 != 0) goto LAB_10069d200;
        }
        else {
          if (param_5 != 5) goto LAB_10069d214;
          if ((lVar11 != 0) && (local_70 = 0, lVar11 != 2)) {
LAB_10069d1c8:
            if (bVar4) goto LAB_10069d214;
          }
        }
        goto LAB_10069d234;
      }
      if (param_5 == 2) {
        if (lVar11 == 0) {
          local_70 = 0;
          goto LAB_10069d248;
        }
        goto LAB_10069d1d4;
      }
      if (param_5 != 3) goto LAB_10069d214;
      if (lVar11 == 0) {
        local_70 = 0;
LAB_10069d140:
        lVar11 = *param_4;
        if (lVar11 == lVar1) {
          *param_4 = local_70;
        }
        goto LAB_10069d254;
      }
LAB_10069d200:
      local_70 = 0;
      if (lVar11 == 2) goto LAB_10069d234;
    }
    local_70 = 0;
    if (lVar11 != 5) {
LAB_10069d214:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10069d218);
      (*pcVar8)();
    }
  }
  else if (param_5 == 0) {
    if (lVar11 != 5) {
      if (lVar11 != 2) {
        if (lVar11 != 0) goto LAB_10069d214;
        goto LAB_10069d170;
      }
      goto LAB_10069d248;
    }
  }
  else if (param_5 < 4) {
    if (param_5 == 2) {
      if (lVar11 != 5) {
        if ((lVar11 != 2) && (lVar11 != 0)) goto LAB_10069d214;
        goto LAB_10069d248;
      }
    }
    else {
      if (param_5 != 3) goto LAB_10069d214;
      if ((lVar11 != 5) && (lVar11 != 2)) {
        if (lVar11 != 0) goto LAB_10069d214;
        goto LAB_10069d140;
      }
    }
  }
  else if (param_5 == 4) {
    if (((lVar11 != 5) && (lVar11 != 2)) && (lVar11 != 0)) goto LAB_10069d214;
  }
  else {
    if (param_5 != 5) goto LAB_10069d214;
    if ((!bVar2) && (!bVar3)) goto LAB_10069d1c8;
  }
LAB_10069d234:
  lVar11 = *param_4;
  if (lVar11 == lVar1) {
    *param_4 = local_70;
  }
LAB_10069d254:
  *param_1 = lVar11;
  return lVar11 == lVar1;
}



/* Address: 0x10069d2d4 | FUN_10069d2d4 */

uint FUN_10069d2d4(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  String SVar5;
  
  if (3 < param_5 - 2U && param_5 != 0) {
    SVar5.bridgeObject = (void *)0x2;
    SVar5.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50,
               0xdafc90);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069d3a0);
    (*pcVar1)();
  }
  lVar3 = *param_3;
  uVar4 = *param_2;
  _swift_unknownObjectRetain(lVar3);
  lVar2 = lVar3;
  FUN_10069bb3c(uVar4,lVar3,param_4);
  if (lVar2 != 0) {
    _swift_unknownObjectRelease(lVar3);
    *param_1 = lVar2;
    return (uint)uVar4 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069d354);
  (*pcVar1)();
}



/* Address: 0x10069d3a0 | FUN_10069d3a0 */

uint FUN_10069d3a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  String SVar5;
  
  if (param_5 - 2U < 4 || param_5 == 0) {
    uVar3 = *param_3;
    uVar4 = *param_2;
    _swift_unknownObjectRetain(uVar3);
    uVar2 = uVar3;
    FUN_10069bb3c(uVar4,uVar3,param_4);
    _swift_unknownObjectRelease(uVar3);
    *param_1 = uVar2;
    return (uint)uVar4 & 1;
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069d464);
  (*pcVar1)();
}



/* Address: 0x10069d464 | FUN_10069d464 */

void FUN_10069d464(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10069b240(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x10069d480 | FUN_10069d480 */

void FUN_10069d480(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10069484c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x10069d4a0 | FUN_10069d4a0 */

void FUN_10069d4a0(void)

{
  FUN_10069d464();
  return;
}



/* Address: 0x10069d4b4 | thunk_FUN_10069c724 */

void thunk_FUN_10069c724(void)

{
  thunk_FUN_10069c724();
  return;
}



/* Address: 0x10069d4b8 | thunk_FUN_10069c7f0 */

void thunk_FUN_10069c7f0(void)

{
  thunk_FUN_10069c7f0();
  return;
}



/* Address: 0x10069d4bc | thunk_FUN_10069c8bc */

void thunk_FUN_10069c8bc(void)

{
  thunk_FUN_10069c8bc();
  return;
}



/* Address: 0x10069d4c0 | thunk_FUN_10069c988 */

void thunk_FUN_10069c988(void)

{
  thunk_FUN_10069c988();
  return;
}



/* Address: 0x10069d4c4 | thunk_FUN_10069cb38 */

void thunk_FUN_10069cb38(void)

{
  thunk_FUN_10069cb38();
  return;
}



/* Address: 0x10069d4c8 | thunk_FUN_10069cc24 */

void thunk_FUN_10069cc24(void)

{
  thunk_FUN_10069cc24();
  return;
}



/* Address: 0x10069d4cc | thunk_FUN_10069cd1c */

void thunk_FUN_10069cd1c(void)

{
  thunk_FUN_10069cd1c();
  return;
}



/* Address: 0x10069d4d0 | FUN_10069d4d0 */

void FUN_10069d4d0(long param_1)

{
  code *pcVar1;
  String SVar2;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      return;
    }
    if (param_1 == 2) {
      DataMemoryBarrier(2,1);
      return;
    }
  }
  else if (((param_1 == 3) || (param_1 == 4)) || (param_1 == 5)) {
    DataMemoryBarrier(2,3);
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000014,0x8000000100dafc50,
             0xdafc50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069d568);
  (*pcVar1)();
}



/* Address: 0x10069d568 | thunk_FUN_1005ad400 */

void thunk_FUN_1005ad400(void)

{
  FUN_1005ad400();
  return;
}



/* Address: 0x10069d56c | FUN_10069d56c */

undefined1  [16] FUN_10069d56c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  String SVar5;
  String SVar6;
  String SVar7;
  
  if (param_1 == 0) {
    auVar4._8_8_ = &DAT_e700000000000000;
    auVar4._0_8_ = 0x646578616c6572;
    return auVar4;
  }
  if (param_1 != 5) {
    if (param_1 == 2) {
      auVar2._8_8_ = 0xe900000000000067;
      auVar2._0_8_ = 0x6e69726975716361;
      return auVar2;
    }
    Swift::_StringGuts::grow(0x16,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar5,SVar6);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x29;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    auVar1._8_8_ = 0x8000000100dafca0;
    auVar1._0_8_ = 0xd000000000000013;
    return auVar1;
  }
  auVar3._8_8_ = 0x8000000100dafcc0;
  auVar3._0_8_ = 0xd000000000000016;
  return auVar3;
}



/* Address: 0x10069d674 | FUN_10069d674 */

void FUN_10069d674(void)

{
  undefined8 *unaff_x20;
  
  FUN_10069d56c(*unaff_x20);
  return;
}



/* Address: 0x10069d67c | FUN_10069d67c */

undefined1  [16] FUN_10069d67c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  String SVar5;
  String SVar6;
  String SVar7;
  
  if (param_1 == 0) {
    auVar4._8_8_ = &DAT_e700000000000000;
    auVar4._0_8_ = 0x646578616c6572;
    return auVar4;
  }
  if (param_1 != 5) {
    if (param_1 == 3) {
      auVar2._8_8_ = 0xe900000000000067;
      auVar2._0_8_ = 0x6e697361656c6572;
      return auVar2;
    }
    Swift::_StringGuts::grow(0x17,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar5,SVar6);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x29;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    auVar1._8_8_ = 0x8000000100dafce0;
    auVar1._0_8_ = 0xd000000000000014;
    return auVar1;
  }
  auVar3._8_8_ = 0x8000000100dafcc0;
  auVar3._0_8_ = 0xd000000000000016;
  return auVar3;
}



/* Address: 0x10069d784 | FUN_10069d784 */

void FUN_10069d784(void)

{
  undefined8 *unaff_x20;
  
  FUN_10069d67c(*unaff_x20);
  return;
}



/* Address: 0x10069d78c | FUN_10069d78c */

undefined1  [16] FUN_10069d78c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  String SVar7;
  String SVar8;
  String SVar9;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar6._8_8_ = &DAT_e700000000000000;
      auVar6._0_8_ = 0x646578616c6572;
      return auVar6;
    }
    if (param_1 == 2) {
      uVar2 = 0x726975716361;
      goto LAB_10069d7f4;
    }
  }
  else {
    if (param_1 == 3) {
      uVar2 = 0x7361656c6572;
LAB_10069d7f4:
      auVar4._0_8_ = uVar2 | 0x6e69000000000000;
      auVar4._8_8_ = 0xe900000000000067;
      return auVar4;
    }
    if (param_1 == 4) {
      auVar5._8_8_ = 0x8000000100dafd20;
      auVar5._0_8_ = 0xd000000000000015;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar3._8_8_ = 0x8000000100dafcc0;
      auVar3._0_8_ = 0xd000000000000016;
      return auVar3;
    }
  }
  Swift::_StringGuts::grow(0x18,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar7,SVar8);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x29;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar7,SVar9);
  auVar1._8_8_ = 0x8000000100dafd00;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x10069d8d8 | thunk_FUN_10069d8dc */

void thunk_FUN_10069d8dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ee60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ee60,&DAT_100ef5f70);
  DAT_100fdb8b0 = pTVar1;
  return;
}



/* Address: 0x10069d8dc | FUN_10069d8dc */

void FUN_10069d8dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ee60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ee60,&DAT_100ef5f70);
  DAT_100fdb8b0 = pTVar1;
  return;
}



/* Address: 0x10069d91c | thunk_FUN_10069d920 */

void thunk_FUN_10069d920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6eef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6eef0,&DAT_100ef5f98);
  DAT_100fdb8b8 = pTVar1;
  return;
}



/* Address: 0x10069d920 | FUN_10069d920 */

void FUN_10069d920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6eef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6eef0,&DAT_100ef5f98);
  DAT_100fdb8b8 = pTVar1;
  return;
}



/* Address: 0x10069d960 | thunk_FUN_10069d964 */

void thunk_FUN_10069d964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ef80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ef80,&DAT_100ef5fc0);
  DAT_100fdb8c0 = pTVar1;
  return;
}



/* Address: 0x10069d964 | FUN_10069d964 */

void FUN_10069d964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ef80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ef80,&DAT_100ef5fc0);
  DAT_100fdb8c0 = pTVar1;
  return;
}



/* Address: 0x10069d9a4 | FUN_10069d9a4 */

void FUN_10069d9a4(void)

{
  undefined8 *unaff_x20;
  
  FUN_10069d78c(*unaff_x20);
  return;
}



/* Address: 0x10069d9ac | FUN_10069d9ac */

undefined1  [16] FUN_10069d9ac(void)

{
  return ZEXT816(0x100ef5f70);
}



/* Address: 0x10069d9bc | FUN_10069d9bc */

undefined1  [16] FUN_10069d9bc(void)

{
  return ZEXT816(0x100ef5f98);
}



/* Address: 0x10069d9cc | FUN_10069d9cc */

undefined1  [16] FUN_10069d9cc(void)

{
  return ZEXT816(0x100ef5fc0);
}



/* Address: 0x10069d9dc | thunk_FUN_10010cacc */

void thunk_FUN_10010cacc(void)

{
  thunk_FUN_10010cacc();
  return;
}



/* Address: 0x10069d9e0 | thunk_FUN_1005ad3dc */

void thunk_FUN_1005ad3dc(void)

{
  FUN_1005ad3dc();
  return;
}



/* Address: 0x10069d9e4 | thunk_FUN_10010ca88 */

void thunk_FUN_10010ca88(void)

{
  thunk_FUN_10010ca88();
  return;
}



/* Address: 0x10069d9e8 | thunk_FUN_1005ad400 */

void thunk_FUN_1005ad400(void)

{
  FUN_1005ad400();
  return;
}



/* Address: 0x10069d9ec | FUN_10069d9ec */

undefined1  [16] FUN_10069d9ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x10069d9fc | FUN_10069d9fc */

undefined1  [16] FUN_10069d9fc(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *(undefined8 *)(unaff_x20 + 8);
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100687970;
  return auVar1;
}



/* Address: 0x10069da14 | FUN_10069da14 */

undefined1  [16] FUN_10069da14(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  Swift::_StringGuts::grow(0x21,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xea0000000000203a;
  SVar2.str = (char *)0x646e6f636573202c;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x29;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  auVar1._8_8_ = 0x8000000100dafd40;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Address: 0x10069db18 | thunk_FUN_10069db1c */

void thunk_FUN_10069db1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f078;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f078,&DAT_100ef6030);
  DAT_100fdb8c8 = pTVar1;
  return;
}



/* Address: 0x10069db1c | FUN_10069db1c */

void FUN_10069db1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdb8c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f078;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f078,&DAT_100ef6030);
  DAT_100fdb8c8 = pTVar1;
  return;
}



/* Address: 0x10069db5c | FUN_10069db5c */

void FUN_10069db5c(void)

{
  undefined8 *unaff_x20;
  
  FUN_10069da14(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10069db64 | FUN_10069db64 */

undefined1  [16] FUN_10069db64(void)

{
  return ZEXT816(0x100ef6030);
}



/* Address: 0x10069db74 | thunk_FUN_1001b2800 */

void thunk_FUN_1001b2800(void)

{
  FUN_1001b2800();
  return;
}



/* Address: 0x10069db78 | FUN_10069db78 */

void FUN_10069db78(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0,0);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x50),0x100cbad48,
             &TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar3,lVar1);
  return;
}



/* Address: 0x10069dbf4 | FUN_10069dbf4 */

void FUN_10069dbf4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0x21,0);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x50),0x100cbad48,
             &TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))((long)unaff_x20 + lVar3,param_1,lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x10069dc78 | FUN_10069dc78 */

undefined1  [16] FUN_10069dc78(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}


