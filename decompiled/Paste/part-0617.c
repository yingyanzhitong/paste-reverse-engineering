/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10069a1f0 | thunk_FUN_1006545e8 */

void thunk_FUN_1006545e8(void)

{
  FUN_1006545e8();
  return;
}



/* Address: 0x10069a1f4 | thunk_FUN_1005b7298 */

void thunk_FUN_1005b7298(void)

{
  FUN_1005b7298();
  return;
}



/* Address: 0x10069a1f8 | thunk_FUN_100698294 */

void thunk_FUN_100698294(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

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



/* Address: 0x10069a1fc | thunk_FUN_1006984fc */

void thunk_FUN_1006984fc(char *param_1,char *param_2,char *param_3,long param_4)

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



/* Address: 0x10069a200 | thunk_FUN_100698560 */

void thunk_FUN_100698560(char *param_1,char *param_2,char *param_3,long param_4)

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



/* Address: 0x10069a204 | thunk_FUN_1006985d4 */

void thunk_FUN_1006985d4(byte *param_1,byte *param_2,byte *param_3,long param_4)

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



/* Address: 0x10069a208 | thunk_FUN_100698648 */

void thunk_FUN_100698648(byte *param_1,byte *param_2,byte *param_3,long param_4)

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



/* Address: 0x10069a20c | thunk_FUN_1006986ac */

void thunk_FUN_1006986ac(byte *param_1,byte *param_2,byte *param_3,long param_4)

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



/* Address: 0x10069a210 | thunk_FUN_100698820 */

void thunk_FUN_100698820(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,long param_4)

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



/* Address: 0x10069a214 | thunk_FUN_100698a88 */

void thunk_FUN_100698a88(short *param_1,short *param_2,short *param_3,long param_4)

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



/* Address: 0x10069a218 | thunk_FUN_100698aec */

void thunk_FUN_100698aec(short *param_1,short *param_2,short *param_3,long param_4)

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



/* Address: 0x10069a21c | thunk_FUN_100698b60 */

void thunk_FUN_100698b60(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

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



/* Address: 0x10069a220 | thunk_FUN_100698bd4 */

void thunk_FUN_100698bd4(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

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



/* Address: 0x10069a224 | thunk_FUN_100698c38 */

void thunk_FUN_100698c38(ushort *param_1,ushort *param_2,ushort *param_3,long param_4)

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



/* Address: 0x10069a228 | thunk_FUN_100698dac */

void thunk_FUN_100698dac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

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



/* Address: 0x10069a22c | thunk_FUN_100699014 */

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



/* Address: 0x10069a230 | thunk_FUN_100699078 */

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



/* Address: 0x10069a234 | thunk_FUN_1006990ec */

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



/* Address: 0x10069a238 | thunk_FUN_100699160 */

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



/* Address: 0x10069a23c | thunk_FUN_1006991c4 */

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



/* Address: 0x10069a240 | thunk_FUN_100699338 */

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



/* Address: 0x10069a244 | thunk_FUN_1006995a0 */

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



/* Address: 0x10069a248 | thunk_FUN_100699604 */

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



/* Address: 0x10069a24c | thunk_FUN_100699678 */

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



/* Address: 0x10069a250 | thunk_FUN_1006996ec */

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



/* Address: 0x10069a254 | thunk_FUN_100699750 */

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



/* Address: 0x10069a258 | thunk_FUN_100698418 */

bool thunk_FUN_100698418(char *param_1,char *param_2,char *param_3,char *param_4,long param_5,
                        long param_6)

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



/* Address: 0x10069a25c | thunk_FUN_1006989a4 */

bool thunk_FUN_1006989a4(short *param_1,short *param_2,short *param_3,short *param_4,long param_5,
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



/* Address: 0x10069a260 | thunk_FUN_100698f30 */

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



/* Address: 0x10069a264 | thunk_FUN_1006994bc */

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



/* Address: 0x10069a268 | FUN_10069a268 */

void FUN_10069a268(long *param_1)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*unaff_x20 != 0) {
    *param_1 = *unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a27c);
  (*pcVar1)();
}



/* Address: 0x10069a27c | thunk_FUN_10069a28c */

void thunk_FUN_10069a28c(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  if (param_3 == 5) {
    lVar2 = *param_2;
  }
  else if (param_3 == 2) {
    lVar2 = *param_2;
  }
  else {
    if (param_3 != 0) {
      SVar3.bridgeObject = (void *)0x2;
      SVar3.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a31c);
      (*pcVar1)();
    }
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a2c4);
  (*pcVar1)();
}



/* Address: 0x10069a280 | thunk_FUN_10069a31c */

void thunk_FUN_10069a31c(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
    else {
      if (param_4 != 2) goto LAB_10069a378;
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
  }
  else if (param_4 == 3) {
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  else {
    if ((param_4 != 4) && (param_4 != 5)) {
LAB_10069a378:
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a3d0);
      (*pcVar1)();
    }
    LOAcquire();
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a378);
  (*pcVar1)();
}



/* Address: 0x10069a284 | thunk_FUN_10069a3d0 */

bool thunk_FUN_10069a3d0(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

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
      if (param_5 != 2) goto LAB_10069a44c;
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
LAB_10069a44c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a4a4);
      (*pcVar1)();
    }
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a44c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069a288 | thunk_FUN_10069a4a4 */

bool thunk_FUN_10069a4a4(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
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
            goto LAB_10069a570;
          }
          goto LAB_10069a58c;
        }
LAB_10069a568:
        lVar2 = *param_4;
        if (lVar2 == lVar3) {
          *param_4 = lVar4;
        }
        goto LAB_10069a570;
      }
    }
    else {
      if (param_5 != 2) {
LAB_10069a58c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a590);
        (*pcVar1)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a58c;
        goto LAB_10069a568;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a58c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069a570;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a58c;
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_10069a570:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a58c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069a28c | FUN_10069a28c */

void FUN_10069a28c(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  if (param_3 == 5) {
    lVar2 = *param_2;
  }
  else if (param_3 == 2) {
    lVar2 = *param_2;
  }
  else {
    if (param_3 != 0) {
      SVar3.bridgeObject = (void *)0x2;
      SVar3.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a31c);
      (*pcVar1)();
    }
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a2c4);
  (*pcVar1)();
}



/* Address: 0x10069a31c | FUN_10069a31c */

void FUN_10069a31c(long *param_1,long *param_2,long *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  
  lVar3 = *param_2;
  if (param_4 < 3) {
    if (param_4 == 0) {
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
    else {
      if (param_4 != 2) goto LAB_10069a378;
      LOAcquire();
      lVar2 = *param_3;
      *param_3 = lVar3;
    }
  }
  else if (param_4 == 3) {
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  else {
    if ((param_4 != 4) && (param_4 != 5)) {
LAB_10069a378:
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a3d0);
      (*pcVar1)();
    }
    LOAcquire();
    lVar2 = *param_3;
    *param_3 = lVar3;
    LORelease();
  }
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a378);
  (*pcVar1)();
}



/* Address: 0x10069a3d0 | FUN_10069a3d0 */

bool FUN_10069a3d0(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

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
      if (param_5 != 2) goto LAB_10069a44c;
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
LAB_10069a44c:
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000014,0x8000000100dafc50
                 ,0xdafc50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a4a4);
      (*pcVar1)();
    }
    lVar2 = *param_4;
    if (lVar2 == lVar3) {
      *param_4 = lVar4;
    }
  }
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a44c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069a4a4 | FUN_10069a4a4 */

bool FUN_10069a4a4(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6
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
            goto LAB_10069a570;
          }
          goto LAB_10069a58c;
        }
LAB_10069a568:
        lVar2 = *param_4;
        if (lVar2 == lVar3) {
          *param_4 = lVar4;
        }
        goto LAB_10069a570;
      }
    }
    else {
      if (param_5 != 2) {
LAB_10069a58c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a590);
        (*pcVar1)();
      }
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a58c;
        goto LAB_10069a568;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a58c;
      lVar2 = *param_4;
      if (lVar2 == lVar3) {
        *param_4 = lVar4;
      }
      goto LAB_10069a570;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a58c;
  lVar2 = *param_4;
  if (lVar2 == lVar3) {
    *param_4 = lVar4;
  }
LAB_10069a570:
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a58c);
    (*pcVar1)();
  }
  *param_1 = lVar2;
  return lVar2 == lVar3;
}



/* Address: 0x10069a590 | thunk_FUN_10069a594 */

bool thunk_FUN_10069a594(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,
                        long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    if (param_5 < 3) {
      if (param_5 == 0) {
        if (param_6 == 0) {
LAB_10069a6b0:
          lVar4 = *param_4;
          if (lVar4 == lVar2) {
            *param_4 = lVar3;
          }
          goto LAB_10069a6b8;
        }
      }
      else {
        if (param_5 != 2) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a698;
      }
      if (param_6 == 2) goto LAB_10069a698;
    }
    else {
      if (param_5 == 3) {
        if (param_6 == 0) goto LAB_10069a6a4;
      }
      else {
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a68c;
      }
      if (param_6 == 2) goto LAB_10069a68c;
    }
    if (param_6 != 5) {
LAB_10069a6cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a6d0);
      (*pcVar1)();
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 != 0) goto LAB_10069a6cc;
          goto LAB_10069a6b0;
        }
LAB_10069a698:
        lVar4 = *param_4;
        if (lVar4 == lVar2) {
          *param_4 = lVar3;
        }
        goto LAB_10069a6b8;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069a6cc;
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a6cc;
        goto LAB_10069a698;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a6cc;
LAB_10069a6a4:
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069a6b8;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a6cc;
LAB_10069a68c:
  lVar4 = *param_4;
  if (lVar4 == lVar2) {
    *param_4 = lVar3;
  }
LAB_10069a6b8:
  *param_1 = lVar4;
  return lVar4 == lVar2;
}



/* Address: 0x10069a594 | FUN_10069a594 */

bool FUN_10069a594(long *param_1,long *param_2,long *param_3,long *param_4,long param_5,long param_6
                  )

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_2;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    if (param_5 < 3) {
      if (param_5 == 0) {
        if (param_6 == 0) {
LAB_10069a6b0:
          lVar4 = *param_4;
          if (lVar4 == lVar2) {
            *param_4 = lVar3;
          }
          goto LAB_10069a6b8;
        }
      }
      else {
        if (param_5 != 2) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a698;
      }
      if (param_6 == 2) goto LAB_10069a698;
    }
    else {
      if (param_5 == 3) {
        if (param_6 == 0) goto LAB_10069a6a4;
      }
      else {
        if ((param_5 != 4) && (param_5 != 5)) goto LAB_10069a6cc;
        if (param_6 == 0) goto LAB_10069a68c;
      }
      if (param_6 == 2) goto LAB_10069a68c;
    }
    if (param_6 != 5) {
LAB_10069a6cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069a6d0);
      (*pcVar1)();
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      if (param_6 != 5) {
        if (param_6 != 2) {
          if (param_6 != 0) goto LAB_10069a6cc;
          goto LAB_10069a6b0;
        }
LAB_10069a698:
        lVar4 = *param_4;
        if (lVar4 == lVar2) {
          *param_4 = lVar3;
        }
        goto LAB_10069a6b8;
      }
    }
    else {
      if (param_5 != 2) goto LAB_10069a6cc;
      if (param_6 != 5) {
        if ((param_6 != 2) && (param_6 != 0)) goto LAB_10069a6cc;
        goto LAB_10069a698;
      }
    }
  }
  else if (param_5 == 3) {
    if ((param_6 != 5) && (param_6 != 2)) {
      if (param_6 != 0) goto LAB_10069a6cc;
LAB_10069a6a4:
      lVar4 = *param_4;
      if (lVar4 == lVar2) {
        *param_4 = lVar3;
      }
      goto LAB_10069a6b8;
    }
  }
  else if (((param_5 != 4) && (param_5 != 5)) ||
          ((param_6 != 5 && ((param_6 != 2 && (param_6 != 0)))))) goto LAB_10069a6cc;
LAB_10069a68c:
  lVar4 = *param_4;
  if (lVar4 == lVar2) {
    *param_4 = lVar3;
  }
LAB_10069a6b8:
  *param_1 = lVar4;
  return lVar4 == lVar2;
}



/* Address: 0x10069a6d0 | FUN_10069a6d0 */

void FUN_10069a6d0(void)

{
  FUN_10069a9a8();
  return;
}



/* Address: 0x10069a6e4 | FUN_10069a6e4 */

void FUN_10069a6e4(void)

{
  FUN_10069aa54();
  return;
}



/* Address: 0x10069a6f8 | FUN_10069a6f8 */

void FUN_10069a6f8(void)

{
  FUN_10069ab6c();
  return;
}



/* Address: 0x10069a70c | FUN_10069a70c */

uint FUN_10069a70c(uint param_1)

{
  FUN_10069ace4();
  return param_1 & 1;
}



/* Address: 0x10069a748 | FUN_10069a748 */

uint FUN_10069a748(uint param_1)

{
  FUN_10069aeec();
  return param_1 & 1;
}



/* Address: 0x10069a788 | FUN_10069a788 */

uint FUN_10069a788(uint param_1)

{
  FUN_10069aeec();
  return param_1 & 1;
}



/* Address: 0x10069a7c8 | FUN_10069a7c8 */

void FUN_10069a7c8(void)

{
  FUN_10069a9a8();
  return;
}



/* Address: 0x10069a7dc | FUN_10069a7dc */

void FUN_10069a7dc(void)

{
  FUN_10069aa54();
  return;
}



/* Address: 0x10069a7f0 | FUN_10069a7f0 */

void FUN_10069a7f0(void)

{
  FUN_10069ab6c();
  return;
}



/* Address: 0x10069a804 | FUN_10069a804 */

uint FUN_10069a804(uint param_1)

{
  FUN_10069ace4();
  return param_1 & 1;
}



/* Address: 0x10069a840 | FUN_10069a840 */

uint FUN_10069a840(uint param_1)

{
  FUN_10069aeec();
  return param_1 & 1;
}



/* Address: 0x10069a880 | FUN_10069a880 */

undefined ** FUN_10069a880(void)

{
  return &PTR_PTR_100fdaf78;
}



/* Address: 0x10069a88c | FUN_10069a88c */

undefined ** FUN_10069a88c(void)

{
  return &PTR_PTR_100fdafe8;
}



/* Address: 0x10069a898 | FUN_10069a898 */

void FUN_10069a898(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e8dc,param_1);
  return;
}



/* Address: 0x10069a8a8 | FUN_10069a8a8 */

void FUN_10069a8a8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e914,param_1);
  return;
}



/* Address: 0x10069a8b8 | FUN_10069a8b8 */

void FUN_10069a8b8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e94c,param_1);
  return;
}



/* Address: 0x10069a8c8 | FUN_10069a8c8 */

undefined ** FUN_10069a8c8(void)

{
  return &PTR_PTR_100fdb1b0;
}



/* Address: 0x10069a8d4 | FUN_10069a8d4 */

undefined ** FUN_10069a8d4(void)

{
  return &PTR_PTR_100fdb228;
}



/* Address: 0x10069a8e0 | FUN_10069a8e0 */

void FUN_10069a8e0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e9c4,param_1);
  return;
}



/* Address: 0x10069a8f0 | FUN_10069a8f0 */

void FUN_10069a8f0(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e8c0;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x10069a91c | FUN_10069a91c */

void FUN_10069a91c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e9fc,param_1);
  return;
}



/* Address: 0x10069a92c | FUN_10069a92c */

void FUN_10069a92c(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e8f8;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x10069a958 | FUN_10069a958 */

void FUN_10069a958(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ea34,param_1);
  return;
}


