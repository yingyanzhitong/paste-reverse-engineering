/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a32388 | FUN_100a32388 */

void FUN_100a32388(long *param_1,undefined1 *param_2,long param_3,long *param_4,ulong param_5,
                  uint param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_3 < 1) {
    uVar9 = 2;
  }
  else {
    uVar8 = param_4[1];
    uVar4 = param_4[3];
    uVar3 = uVar8;
    if (uVar8 != uVar4) {
      lVar7 = *param_4;
      uVar2 = uVar8;
      lVar6 = 0;
      uVar11 = uVar8;
      do {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32544);
          (*pcVar1)();
        }
        if (*(ulong *)(lVar7 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32548);
          (*pcVar1)();
        }
        if (*(char *)(lVar7 + uVar2 + 0x20) == param_2[lVar6]) {
          lVar5 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3254c);
            (*pcVar1)();
          }
          uVar10 = uVar2;
          if (lVar6 != 0) {
            uVar10 = uVar11;
          }
          if (lVar5 == param_3) {
            FUN_100a31f54(uVar2,lVar7);
            if ((param_5 & 1) == 0) {
              uVar2 = uVar10;
            }
            param_4[1] = uVar2;
            if ((long)uVar10 < (long)uVar8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32564);
              (*pcVar1)();
            }
            uVar3 = *(ulong *)(lVar7 + 0x10);
            if (uVar3 < uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32568);
              (*pcVar1)();
            }
            if (uVar8 != uVar3) {
              if (uVar3 <= uVar8) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3256c);
                (*pcVar1)();
              }
              if (*(char *)(lVar7 + 0x20 + uVar8) < -0x40) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32570);
                (*pcVar1)();
              }
            }
            *param_1 = lVar7;
            param_1[1] = uVar8;
            param_1[2] = uVar8;
            param_1[3] = uVar10;
            goto LAB_100a32524;
          }
        }
        else {
          lVar5 = 0;
          uVar10 = uVar11;
        }
        uVar2 = uVar2 + 1;
        param_4[1] = uVar2;
        uVar3 = uVar4;
        lVar6 = lVar5;
        uVar11 = uVar10;
      } while (uVar4 != uVar2);
    }
    if ((param_6 & 1) == 0) {
      if ((long)uVar3 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32550);
        (*pcVar1)();
      }
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32554);
        (*pcVar1)();
      }
      lVar7 = *param_4;
      uVar4 = *(ulong *)(lVar7 + 0x10);
      if ((long)uVar4 < (long)uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32558);
        (*pcVar1)();
      }
      if (uVar8 != uVar4) {
        if (uVar4 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3255c);
          (*pcVar1)();
        }
        if (*(char *)(lVar7 + uVar8 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32560);
          (*pcVar1)();
        }
      }
      *param_1 = lVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar8;
      param_1[3] = uVar3;
LAB_100a32524:
      _swift_bridgeObjectRetain(lVar7);
      return;
    }
    uVar9 = 0;
    param_4[1] = uVar8;
  }
  FUN_1009ff51c();
  _swift_allocError(&DAT_100f29a58,param_2,0,0);
  *param_2 = uVar9;
  _swift_willThrow();
  return;
}



/* Address: 0x100a32570 | FUN_100a32570 */

long FUN_100a32570(int param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = 0;
  uVar8 = unaff_x20[3];
  uVar6 = unaff_x20[1];
  while( true ) {
    if (uVar6 == uVar8) {
      return lVar5;
    }
    lVar7 = *unaff_x20;
    uVar4 = uVar6;
    FUN_100a32fa0(uVar6,lVar7);
    if ((int)uVar4 != param_1) {
      return lVar5;
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32640);
      (*pcVar2)();
    }
    if (*(ulong *)(lVar7 + 0x10) <= uVar6) break;
    bVar1 = *(byte *)(lVar7 + uVar6 + 0x20);
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        uVar6 = uVar6 + 2;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        bVar3 = SCARRY8(uVar6,3);
        uVar6 = uVar6 + 3;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3264c);
          (*pcVar2)();
        }
      }
      else {
        bVar3 = SCARRY8(uVar6,4);
        uVar6 = uVar6 + 4;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32624);
          (*pcVar2)();
        }
      }
    }
    else {
      uVar6 = uVar6 + 1;
    }
    unaff_x20[1] = uVar6;
    bVar3 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32648);
      (*pcVar2)();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32644);
  (*pcVar2)();
}



/* Address: 0x100a3264c | FUN_100a3264c */

void FUN_100a3264c(long param_1)

{
  byte bVar1;
  code *pcVar2;
  __uint32 _Var3;
  Hasher HVar4;
  ulong uVar5;
  Hasher HVar6;
  ulong uVar7;
  undefined *puVar8;
  long *unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar8 = (undefined *)unaff_x20[1];
  puVar11 = (undefined *)unaff_x20[3];
  puVar9 = puVar8;
  if (puVar8 != puVar11) {
    puVar10 = puVar8;
    while( true ) {
      puVar9 = puVar10;
      puVar10 = (undefined *)*unaff_x20;
      HVar4.unknown = puVar9;
      HVar6.unknown = puVar10;
      FUN_100a32fa0();
      if (*(long *)(param_1 + 0x10) == 0) break;
      Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
      _Var3 = (__uint32)HVar4.unknown;
      Swift::Hasher::_combine(_Var3,HVar6);
      uVar5 = Swift::Hasher::_finalize(HVar4);
      uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar5 = uVar5 & (uVar7 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0) break;
      while (*(__uint32 *)(*(long *)(param_1 + 0x30) + uVar5 * 4) != _Var3) {
        uVar5 = uVar5 + 1 & ~uVar7;
        if ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) == 0)
        goto LAB_100a32788;
      }
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32808);
        (*pcVar2)();
      }
      if (*(undefined **)(puVar10 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3280c);
        (*pcVar2)();
      }
      bVar1 = (puVar10 + (long)puVar9)[0x20];
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          puVar10 = puVar9 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          puVar10 = puVar9 + 3;
          if (SCARRY8((long)puVar9,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32814);
            (*pcVar2)();
          }
        }
        else {
          puVar10 = puVar9 + 4;
          if (SCARRY8((long)puVar9,4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32810);
            (*pcVar2)();
          }
        }
      }
      else {
        puVar10 = puVar9 + 1;
      }
      unaff_x20[1] = (long)puVar10;
      puVar9 = puVar11;
      if (puVar10 == puVar11) break;
    }
LAB_100a32788:
    if ((long)puVar9 < (long)puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a327f4);
      (*pcVar2)();
    }
  }
  if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a327f8);
    (*pcVar2)();
  }
  puVar11 = *(undefined **)(*unaff_x20 + 0x10);
  if ((long)puVar11 < (long)puVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a327fc);
    (*pcVar2)();
  }
  if (puVar8 != puVar11) {
    if (puVar11 <= puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32800);
      (*pcVar2)();
    }
    if ((char)puVar8[*unaff_x20 + 0x20] < -0x40) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32804);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a32814 | FUN_100a32814 */

void FUN_100a32814(code *param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar5 = unaff_x20[1];
  uVar8 = unaff_x20[3];
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (uVar5 != uVar8) {
    do {
      lVar7 = *unaff_x20;
      uVar3 = uVar4;
      FUN_100a32fa0(uVar4,lVar7);
      (*param_1)();
      uVar6 = uVar4;
      if ((uVar3 & 1) == 0) break;
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3293c);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32940);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(lVar7 + uVar4 + 0x20);
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar3 = uVar4 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          uVar3 = uVar4 + 3;
          if (SCARRY8(uVar4,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32950);
            (*pcVar2)();
          }
        }
        else {
          uVar3 = uVar4 + 4;
          if (SCARRY8(uVar4,4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a328d4);
            (*pcVar2)();
          }
        }
      }
      else {
        uVar3 = uVar4 + 1;
      }
      unaff_x20[1] = uVar3;
      uVar6 = uVar8;
      uVar4 = uVar3;
    } while (uVar3 != uVar8);
    if ((long)uVar6 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32944);
      (*pcVar2)();
    }
  }
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32948);
    (*pcVar2)();
  }
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if ((long)uVar4 < (long)uVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3294c);
    (*pcVar2)();
  }
  if (uVar5 != uVar4) {
    if (uVar4 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32954);
      (*pcVar2)();
    }
    if (*(char *)(*unaff_x20 + uVar5 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32958);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a32958 | FUN_100a32958 */

void FUN_100a32958(undefined8 param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char local_45;
  undefined4 local_44;
  
  uVar5 = unaff_x20[1];
  uVar8 = unaff_x20[3];
  uVar4 = uVar5;
  uVar3 = uVar5;
  if (uVar5 != uVar8) {
    do {
      lVar7 = *unaff_x20;
      uVar3 = uVar4;
      FUN_100a32fa0(uVar4,lVar7);
      local_44 = (undefined4)uVar3;
      _swift_getAtKeyPath(&local_45,&local_44,param_1);
      uVar3 = uVar4;
      if (local_45 != '\x01') break;
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32a90);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32a94);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(lVar7 + uVar4 + 0x20);
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar6 = uVar4 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          uVar6 = uVar4 + 3;
          if (SCARRY8(uVar4,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32aa4);
            (*pcVar2)();
          }
        }
        else {
          uVar6 = uVar4 + 4;
          if (SCARRY8(uVar4,4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32a28);
            (*pcVar2)();
          }
        }
      }
      else {
        uVar6 = uVar4 + 1;
      }
      unaff_x20[1] = uVar6;
      uVar3 = uVar8;
      uVar4 = uVar6;
    } while (uVar6 != uVar8);
    if ((long)uVar3 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32a98);
      (*pcVar2)();
    }
  }
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32a9c);
    (*pcVar2)();
  }
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if ((long)uVar4 < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32aa0);
    (*pcVar2)();
  }
  if (uVar5 != uVar4) {
    if (uVar4 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32aa8);
      (*pcVar2)();
    }
    if (*(char *)(*unaff_x20 + uVar5 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32aac);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a32aac | FUN_100a32aac */

void FUN_100a32aac(void)

{
  undefined1 *puVar1;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)unaff_x20[1];
  if (puVar1 == (undefined1 *)unaff_x20[3]) {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,puVar1,0,0);
    *puVar1 = 0;
    _swift_willThrow();
  }
  else {
    FUN_100a31f54(puVar1,*unaff_x20);
    unaff_x20[1] = puVar1;
  }
  return;
}



/* Address: 0x100a32b18 | FUN_100a32b18 */

void FUN_100a32b18(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *unaff_x20;
  
  if (0 < (long)param_1) {
    uVar4 = unaff_x20[1];
    puVar5 = param_1 + 1;
    do {
      if (uVar4 == unaff_x20[3]) {
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,param_1,0,0);
        *param_1 = 0;
        _swift_willThrow();
        return;
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32bf4);
        (*pcVar2)();
      }
      if (*(ulong *)(*unaff_x20 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32bf8);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(*unaff_x20 + uVar4 + 0x20);
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar4 = uVar4 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar3 = SCARRY8(uVar4,3);
          uVar4 = uVar4 + 3;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32bfc);
            (*pcVar2)();
          }
        }
        else {
          bVar3 = SCARRY8(uVar4,4);
          uVar4 = uVar4 + 4;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32bb4);
            (*pcVar2)();
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
      unaff_x20[1] = uVar4;
      puVar5 = puVar5 + -1;
    } while (1 < (long)puVar5);
  }
  return;
}



/* Address: 0x100a32bfc | FUN_100a32bfc */

void FUN_100a32bfc(void)

{
  undefined1 *puVar1;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)unaff_x20[1];
  if ((long)unaff_x20[2] < (long)puVar1) {
    FUN_100a32c64(puVar1,*unaff_x20);
    unaff_x20[1] = puVar1;
  }
  else {
    FUN_1009ff51c();
    _swift_allocError(&DAT_100f29a58,puVar1,0,0);
    *puVar1 = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100a32c64 | FUN_100a32c64 */

ulong FUN_100a32c64(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1 - 1;
  if (SBORROW8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32cd8);
    (*pcVar1)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32cdc);
    (*pcVar1)();
  }
  uVar3 = *(ulong *)(param_2 + 0x10);
  if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32ce0);
    (*pcVar1)();
  }
  param_2 = param_2 + 0x20;
  if (*(char *)(param_2 + uVar2) < -0x40) {
    uVar2 = param_1 - 2;
    if (SBORROW8(param_1,2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32ce4);
      (*pcVar1)();
    }
    if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32ce8);
      (*pcVar1)();
    }
    if (*(char *)(param_2 + uVar2) < -0x40) {
      uVar2 = param_1 - 3;
      if (SBORROW8(param_1,3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32cec);
        (*pcVar1)();
      }
      if (uVar3 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32cf0);
        (*pcVar1)();
      }
      if ((*(char *)(param_2 + uVar2) < -0x40) && (uVar2 = param_1 - 4, SBORROW8(param_1,4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a32cf4);
        (*pcVar1)();
      }
    }
  }
  return uVar2;
}



/* Address: 0x100a32cf4 | FUN_100a32cf4 */

void FUN_100a32cf4(undefined1 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  
  if (0 < (long)param_1) {
    uVar4 = unaff_x20[1];
    puVar3 = param_1 + 1;
    do {
      if ((long)uVar4 <= unaff_x20[2]) {
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,param_1,0,0);
        *param_1 = 0;
        _swift_willThrow();
        return;
      }
      uVar5 = uVar4 - 1;
      if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32dd0);
        (*pcVar2)();
      }
      uVar7 = *(ulong *)(*unaff_x20 + 0x10);
      if (uVar7 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32dd4);
        (*pcVar2)();
      }
      lVar1 = *unaff_x20 + 0x20;
      if (*(char *)(lVar1 + uVar5) < -0x40) {
        uVar5 = uVar4 - 2;
        if (uVar7 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32dd8);
          (*pcVar2)();
        }
        if (*(char *)(lVar1 + uVar5) < -0x40) {
          uVar6 = uVar4 - 3;
          if (uVar7 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32d90);
            (*pcVar2)();
          }
          uVar5 = uVar4 - 4;
          if (-0x41 < *(char *)(lVar1 + uVar6)) {
            uVar5 = uVar6;
          }
        }
      }
      uVar4 = uVar5;
      unaff_x20[1] = uVar4;
      puVar3 = puVar3 + -1;
    } while (1 < (long)puVar3);
  }
  return;
}



/* Address: 0x100a32dd8 | FUN_100a32dd8 */

void FUN_100a32dd8(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100a32de4 | FUN_100a32de4 */

void FUN_100a32de4(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Address: 0x100a32df0 | FUN_100a32df0 */

void FUN_100a32df0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long *unaff_x20;
  
  if (0 < param_1) {
    uVar4 = unaff_x20[1];
    param_1 = param_1 + 1;
    do {
      if (*(ulong *)(*unaff_x20 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32e74);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(*unaff_x20 + 0x20 + uVar4);
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar4 = uVar4 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar3 = SCARRY8(uVar4,3);
          uVar4 = uVar4 + 3;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32e78);
            (*pcVar2)();
          }
        }
        else {
          bVar3 = SCARRY8(uVar4,4);
          uVar4 = uVar4 + 4;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a32e68);
            (*pcVar2)();
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
      param_1 = param_1 + -1;
    } while (1 < param_1);
    unaff_x20[1] = uVar4;
  }
  return;
}



/* Address: 0x100a32e78 | FUN_100a32e78 */

void FUN_100a32e78(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100a32eb4 | FUN_100a32eb4 */

ulong FUN_100a32eb4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  if (uVar1 == unaff_x20[3]) {
    return 0x100000000;
  }
  uVar2 = *unaff_x20;
  FUN_100a32fa0();
  unaff_x20[1] = uVar2;
  return uVar1 & 0xffffffff;
}



/* Address: 0x100a32ef0 | FUN_100a32ef0 */

void FUN_100a32ef0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  lVar3 = unaff_x20[1];
  bVar1 = lVar3 != unaff_x20[3];
  if (bVar1) {
    uVar4 = *unaff_x20;
    FUN_100a32fa0();
    uVar2 = (undefined4)lVar3;
    unaff_x20[1] = uVar4;
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = !bVar1;
  return;
}



/* Address: 0x100a32f40 | FUN_100a32f40 */

void FUN_100a32f40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[3];
  *param_1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Address: 0x100a32f5c | FUN_100a32f5c */

undefined8 FUN_100a32f5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = uVar1;
  FUN_100a340d8(uVar1,unaff_x20[1],unaff_x20[3]);
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Address: 0x100a32f94 | FUN_100a32f94 */

void FUN_100a32f94(void)

{
  FUN_100a336f0();
  return;
}



/* Address: 0x100a32fa0 | FUN_100a32fa0 */

void FUN_100a32fa0(ulong param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33070);
    (*pcVar2)();
  }
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33074);
    (*pcVar2)();
  }
  param_2 = param_2 + 0x20;
  bVar1 = *(byte *)(param_2 + param_1);
  if (((bVar1 ^ 0xff) & 0xc0) == 0) {
    if (uVar5 <= param_1 + 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3307c);
      (*pcVar2)();
    }
    uVar3 = *(byte *)(param_2 + param_1 + 1) & 0x3f;
    uVar4 = (uint)bVar1;
    if (((bVar1 ^ 0xff) & 0xe0) == 0) {
      if (uVar5 <= param_1 + 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33084);
        (*pcVar2)();
      }
      if (((uVar4 ^ 0xffffffff) & 0xf0) == 0) {
        if (uVar5 <= param_1 + 3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33088);
          (*pcVar2)();
        }
        uVar3 = (uVar4 & 7) << 0x12 | uVar3 << 0xc | (*(byte *)(param_2 + param_1 + 2) & 0x3f) << 6;
      }
      else {
        uVar3 = (uVar4 & 0xf) << 0xc | uVar3 << 6;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 >> 0xb != 0x1b) {
    if (uVar3 >> 0x10 < 0x11) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33078);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33080);
  (*pcVar2)();
}



/* Address: 0x100a33088 | FUN_100a33088 */

undefined1  [16] FUN_100a33088(ulong param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33190);
    (*pcVar3)();
  }
  uVar7 = *(ulong *)(param_2 + 0x10);
  if (uVar7 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33194);
    (*pcVar3)();
  }
  param_2 = param_2 + 0x20;
  bVar2 = *(byte *)(param_2 + param_1);
  if (((bVar2 ^ 0xffffffff) & 0xc0) == 0) {
    uVar4 = param_1 + 1;
    if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33198);
      (*pcVar3)();
    }
    if ((*(byte *)(param_2 + uVar4) & 0xc0) != 0x80) {
LAB_100a33168:
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = 0x100000000;
      return auVar9;
    }
    uVar1 = *(byte *)(param_2 + uVar4) & 0x3f;
    uVar6 = (uint)bVar2;
    if (((uVar6 ^ 0xffffffff) & 0xe0) == 0) {
      uVar4 = param_1 + 2;
      if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a3319c);
        (*pcVar3)();
      }
      if ((*(byte *)(param_2 + uVar4) & 0xc0) != 0x80) goto LAB_100a33168;
      uVar5 = *(byte *)(param_2 + uVar4) & 0x3f;
      if (((uVar6 ^ 0xffffffff) & 0xf0) == 0) {
        uVar4 = param_1 + 3;
        if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a331a0);
          (*pcVar3)();
        }
        if ((*(byte *)(param_2 + uVar4) & 0xc0) != 0x80) goto LAB_100a33168;
        uVar5 = (bVar2 & 7) << 0x12 | uVar1 << 0xc | uVar5 << 6 | *(byte *)(param_2 + uVar4) & 0x3f;
        param_1 = uVar4;
      }
      else {
        uVar5 = uVar5 | (uVar6 & 0xf) << 0xc | uVar1 << 6;
        param_1 = uVar4;
      }
    }
    else {
      uVar5 = uVar1 | (uVar6 & 0x1f) << 6;
      param_1 = uVar4;
    }
  }
  else {
    uVar5 = bVar2 & 0x7f;
  }
  uVar7 = 0x100000000;
  if (uVar5 >> 0x10 < 0x11 && uVar5 >> 0xb != 0x1b) {
    uVar7 = (ulong)uVar5;
  }
  auVar8._8_8_ = param_1 + 1;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Address: 0x100a331a0 | FUN_100a331a0 */

/* WARNING: Removing unreachable block (ram,0x000100a33324) */

void FUN_100a331a0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 auStack_50 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = (undefined1 *)((param_4 >> 1) - param_3);
  if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a33260);
    (*pcVar1)();
  }
  if (-1 < (long)puVar4) {
    if (((long)puVar4 < 0x401) ||
       ((bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
        (bVar2 & 1) != 0 &&
        (puVar3 = puVar4, _swift_stdlib_isStackAllocationSafe(puVar4,1), ((ulong)puVar3 & 1) != 0)))
       ) {
      if (puVar4 < (undefined1 *)0x2) {
        puVar4 = (undefined1 *)0x1;
      }
      (*(code *)PTR____chkstk_darwin_100ea82c0)((ulong)(puVar4 + 0xf) & 0xfffffffffffffff0);
      puVar3 = auStack_50 + -extraout_x8;
      FUN_100a3395c();
    }
    else {
      _swift_slowAlloc(puVar4,0xffffffffffffffff);
      puVar3 = puVar4;
      FUN_100a3395c();
      _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(puVar3,param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3335c);
  (*pcVar1)();
}



/* Address: 0x100a33360 | FUN_100a33360 */

bool FUN_100a33360(Scalar param_1)

{
  bool bVar1;
  Properties PVar2;
  Properties PVar3;
  long extraout_x8;
  long lVar4;
  
  PVar2 = Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  lVar4 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  PVar3 = Swift::Unicode::Scalar::get_properties(param_1);
  bVar1 = Swift::Unicode::Scalar::Properties::get_isWhitespace(PVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar2.unknown);
  return bVar1;
}



/* Address: 0x100a333e8 | FUN_100a333e8 */

bool FUN_100a333e8(int param_1)

{
  return param_1 - 10U < 4 || (param_1 - 0x2028U < 2 || param_1 == 0x85);
}



/* Address: 0x100a33418 | FUN_100a33418 */

undefined1 FUN_100a33418(byte param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  String SVar2;
  String SVar3;
  
  if (param_1 < 0x10) {
    return *(undefined1 *)((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)param_1);
  }
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000013,0x8000000100db8350,
             0xdb8340);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a334ec);
  (*pcVar1)();
}



/* Address: 0x100a334ec | FUN_100a334ec */

undefined1  [16]
FUN_100a334ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_100a3353c();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100a3353c | FUN_100a3353c */

String FUN_100a3353c(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_100a33680(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3363c);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_100a33574;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_100a33574:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x100a33680 | FUN_100a33680 */

undefined * FUN_100a33680(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100ff55f0;
    FUN_1000f7830(&DAT_100ff55f0,&DAT_100c8eeb8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x100a336f0 | FUN_100a336f0 */

long FUN_100a336f0(long *param_1,uint *param_2,long param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = param_5;
  if (param_2 != (uint *)0x0) {
    lVar5 = param_3;
    if (param_3 == 0) goto LAB_100a33708;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33824);
      (*pcVar4)();
    }
    if (param_5 != param_7) {
      uVar7 = *(ulong *)(param_4 + 0x10);
      if (param_5 < uVar7) {
        lVar1 = param_4 + 0x20;
        lVar8 = 1;
        do {
          bVar3 = *(byte *)(lVar1 + param_5);
          if (((bVar3 ^ 0xffffffff) & 0xc0) == 0) {
            uVar6 = param_5 + 1;
            if ((long)uVar7 <= (long)uVar6) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33818);
              (*pcVar4)();
            }
            uVar2 = *(byte *)(lVar1 + uVar6) & 0x3f;
            uVar10 = (uint)bVar3;
            if (((uVar10 ^ 0xffffffff) & 0xe0) == 0) {
              uVar6 = param_5 + 2;
              if ((long)uVar7 <= (long)uVar6) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33820);
                (*pcVar4)();
              }
              uVar9 = *(byte *)(lVar1 + uVar6) & 0x3f;
              if (((uVar10 ^ 0xffffffff) & 0xf0) == 0) {
                param_5 = param_5 + 3;
                if ((long)uVar7 <= (long)param_5) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33828);
                  (*pcVar4)();
                }
                uVar9 = (bVar3 & 7) << 0x12 | uVar2 << 0xc | uVar9 << 6 |
                        *(byte *)(lVar1 + param_5) & 0x3f;
              }
              else {
                uVar9 = (uVar10 & 0xf) << 0xc | uVar2 << 6 | uVar9;
                param_5 = uVar6;
              }
            }
            else {
              uVar9 = uVar2 | (uVar10 & 0x1f) << 6;
              param_5 = uVar6;
            }
          }
          else {
            uVar9 = bVar3 & 0x7f;
          }
          if (uVar9 >> 0xb == 0x1b) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a3381c);
            (*pcVar4)();
          }
          if (0x10 < uVar9 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33814);
            (*pcVar4)();
          }
          param_5 = param_5 + 1;
          *param_2 = uVar9;
          lVar5 = param_3;
          uVar6 = param_5;
          if ((param_3 == lVar8) || (lVar5 = lVar8, uVar6 = param_7, param_5 == param_7))
          goto LAB_100a33708;
          lVar8 = lVar8 + 1;
          param_2 = param_2 + 1;
        } while (param_5 < uVar7);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a33804);
      (*pcVar4)();
    }
  }
  lVar5 = 0;
LAB_100a33708:
  *param_1 = param_4;
  param_1[1] = uVar6;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return lVar5;
}



/* Address: 0x100a33828 | FUN_100a33828 */

undefined * FUN_100a33828(UTF8View param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  UnsafeMutableBufferPointer<__int8> into;
  UnsafeBufferPointer<__int8> UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar7 = param_1.unknown & 0xffffffffffff;
    puVar8 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar7;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar8;
    }
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      FUN_100a33680(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_100a33958;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_100a33958:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3395c);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_100a338c4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a338c8);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        local_50 = param_1.unknown;
        _memcpy(puVar2 + 0x20,&local_50,(size_t)puVar8);
      }
    }
  }
  else {
    _Var3.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_100a33680(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_100a33958;
      if (into.unknown != _Var3.unknown) goto LAB_100a338c4;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x100a3395c | FUN_100a3395c */

char * FUN_100a3395c(UnsafeBufferPointer<__int8> param_1,long param_2,uint *param_3,Hasher param_4,
                    long param_5)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  char *pcVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  char *pcVar17;
  String SVar18;
  tuple2_conflict1 tVar19;
  
  puVar15 = (uint *)((ulong)param_4.unknown >> 1);
  if (param_3 == puVar15) {
    pcVar16 = (char *)0x0;
  }
  else {
    pcVar17 = (char *)0x0;
    uVar7 = 0;
    lVar11 = 0;
    puVar13 = param_3;
    do {
      if (((long)puVar13 < (long)param_3) || ((long)puVar15 <= (long)puVar13)) goto LAB_100a33da8;
      cVar2 = *(char *)(param_2 + (long)puVar13);
      puVar8 = (uint *)((long)puVar13 + 1);
      puVar14 = puVar13;
      if (cVar2 == '%') {
LAB_100a33a14:
        if (lVar11 != 0) {
          return (char *)0x0;
        }
        if (puVar8 == puVar15) {
          return (char *)0x0;
        }
        if ((long)puVar15 <= (long)puVar8) {
LAB_100a33da8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dac);
          (*pcVar3)();
        }
        cVar2 = *(char *)(param_2 + (long)puVar8);
        if (cVar2 == '%') {
          return (char *)0x0;
        }
        puVar8 = (uint *)((long)puVar14 + 2);
        lVar11 = 2;
      }
      else if (lVar11 < 1) {
        param_1.unknown[(long)pcVar17] = cVar2;
        pcVar6 = pcVar17 + 1;
        if (SCARRY8((long)pcVar17,1)) {
LAB_100a33dac:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33db0);
          (*pcVar3)();
        }
        pcVar16 = pcVar6;
        if (puVar8 != puVar15) {
          lVar10 = 0;
          while( true ) {
            if (((long)puVar8 < (long)param_3) || ((long)puVar15 <= (long)puVar13 + lVar10 + 1))
            goto LAB_100a33da8;
            cVar2 = *(char *)((long)puVar13 + lVar10 + param_2 + 1);
            if (cVar2 == '%') break;
            (param_1.unknown + 1 + (long)pcVar17)[lVar10] = cVar2;
            pcVar16 = pcVar6 + lVar10 + 1;
            if (SCARRY8((long)(pcVar6 + lVar10),1)) goto LAB_100a33dac;
            lVar10 = lVar10 + 1;
            if ((long)puVar13 + lVar10 + (1 - (long)puVar15) == 0) goto LAB_100a33d70;
          }
          lVar11 = 0;
          pcVar17 = pcVar6 + lVar10;
          puVar14 = (uint *)((long)puVar13 + lVar10 + 1);
          puVar8 = (uint *)((long)puVar13 + lVar10 + 2);
          goto LAB_100a33a14;
        }
        goto LAB_100a33d70;
      }
      pcVar6 = (char *)0x0;
      switch(cVar2) {
      case '0':
        iVar12 = 0;
        uVar9 = 0;
        if (lVar11 != 2) {
LAB_100a33c68:
          uVar1 = iVar12 + ((uint)uVar7 & 0xff);
          if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dc0);
            (*pcVar3)();
          }
          if (*(long *)(param_5 + 0x10) != 0) {
            uVar7 = Swift::Hasher::_hash(*(__int64 *)(param_5 + 0x28),(ulong)uVar1 & 0xff,1,param_4)
            ;
            uVar9 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
            uVar7 = uVar7 & (uVar9 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
              do {
                if ((uint)*(byte *)(*(long *)(param_5 + 0x30) + uVar7) == (uVar1 & 0xff)) {
                  if (SCARRY8((long)pcVar17,2)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dc8);
                    (*pcVar3)();
                  }
                  if ((long)(pcVar17 + 2) < (long)pcVar17) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dcc);
                    (*pcVar3)();
                  }
                  bVar5 = (byte)(uVar1 >> 4) & 0xf;
                  FUN_100a33418();
                  if (pcVar17 + 2 + (1 - (long)pcVar17) < (char *)0x3) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dd0);
                    (*pcVar3)();
                  }
                  pcVar6 = (char *)0x0;
                  if (param_1.unknown != (undefined *)0x0) {
                    pcVar6 = pcVar17 + (long)param_1.unknown;
                  }
                  *pcVar6 = '%';
                  pcVar6[1] = bVar5;
                  pcVar6[2] = cVar2;
                  bVar4 = SCARRY8((long)pcVar17,3);
                  pcVar17 = pcVar17 + 3;
                  uVar9 = (ulong)uVar1;
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dd4);
                    (*pcVar3)();
                  }
                  goto LAB_100a339e4;
                }
                uVar7 = uVar7 + 1 & ~uVar9;
              } while ((*(ulong *)(param_5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
            }
          }
          param_1.unknown[(long)pcVar17] = (char)uVar1;
          bVar4 = SCARRY8((long)pcVar17,1);
          pcVar17 = pcVar17 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dc4);
            (*pcVar3)();
          }
          uVar9 = 0;
        }
        break;
      case '1':
        if (lVar11 != 2) {
          iVar12 = 1;
          goto LAB_100a33c68;
        }
        uVar9 = 0x10;
        break;
      case '2':
        if (lVar11 != 2) {
          iVar12 = 2;
          goto LAB_100a33c68;
        }
        uVar9 = 0x20;
        break;
      case '3':
        if (lVar11 != 2) {
          iVar12 = 3;
          goto LAB_100a33c68;
        }
        uVar9 = 0x30;
        break;
      case '4':
        if (lVar11 != 2) {
          iVar12 = 4;
          goto LAB_100a33c68;
        }
        uVar9 = 0x40;
        break;
      case '5':
        if (lVar11 != 2) {
          iVar12 = 5;
          goto LAB_100a33c68;
        }
        uVar9 = 0x50;
        break;
      case '6':
        if (lVar11 != 2) {
          iVar12 = 6;
          goto LAB_100a33c68;
        }
        uVar9 = 0x60;
        break;
      case '7':
        if (lVar11 != 2) {
          iVar12 = 7;
          goto LAB_100a33c68;
        }
        uVar9 = 0x70;
        break;
      case '8':
        if (lVar11 != 2) {
          iVar12 = 8;
          goto LAB_100a33c68;
        }
        uVar9 = 0x80;
        break;
      case '9':
        if (lVar11 != 2) {
          iVar12 = 9;
          goto LAB_100a33c68;
        }
        uVar9 = 0x90;
        break;
      default:
        goto switchD_100a33a70_caseD_3a;
      case 'A':
      case 'a':
        if (lVar11 != 2) {
          iVar12 = 10;
          goto LAB_100a33c68;
        }
        uVar9 = 0xa0;
        break;
      case 'B':
      case 'b':
        if (lVar11 != 2) {
          iVar12 = 0xb;
          goto LAB_100a33c68;
        }
        uVar9 = 0xb0;
        break;
      case 'C':
      case 'c':
        if (lVar11 != 2) {
          iVar12 = 0xc;
          goto LAB_100a33c68;
        }
        uVar9 = 0xc0;
        break;
      case 'D':
      case 'd':
        if (lVar11 != 2) {
          iVar12 = 0xd;
          goto LAB_100a33c68;
        }
        uVar9 = 0xd0;
        break;
      case 'E':
      case 'e':
        if (lVar11 != 2) {
          iVar12 = 0xe;
          goto LAB_100a33c68;
        }
        uVar9 = 0xe0;
        break;
      case 'F':
      case 'f':
        if (lVar11 != 2) {
          iVar12 = 0xf;
          goto LAB_100a33c68;
        }
        uVar9 = 0xf0;
      }
LAB_100a339e4:
      uVar7 = uVar9;
      lVar11 = lVar11 + -1;
      puVar13 = puVar8;
    } while (puVar8 != puVar15);
    pcVar16 = pcVar17;
    if (lVar11 != 0) {
      return (char *)0x0;
    }
LAB_100a33d70:
    param_3 = &switchD_100a33a70::switchdataD_100a33dd4;
    if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a33dbc);
      (*pcVar3)();
    }
  }
  pcVar17 = (char *)0x0;
  if (param_1.unknown != (undefined *)0x0) {
    pcVar17 = pcVar16;
  }
  SVar18.bridgeObject = param_3;
  SVar18.str = pcVar17;
  tVar19 = Swift::String::_fromUTF8Repairing(param_1,SVar18);
  pcVar6 = tVar19.result.str;
switchD_100a33a70_caseD_3a:
  return pcVar6;
}



/* Address: 0x100a33eb0 | FUN_100a33eb0 */

long FUN_100a33eb0(undefined1 *param_1,ulong param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *unaff_x20;
  long unaff_x23;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar7 = (undefined1 *)unaff_x20[1];
  puVar8 = (undefined1 *)unaff_x20[3];
  puVar5 = puVar7;
  puVar6 = puVar7;
  puVar4 = param_1;
  while( true ) {
    if (puVar6 == puVar8) {
      if ((param_2 & 1) == 0) {
        if ((long)puVar5 < (long)puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34058);
          (*pcVar2)();
        }
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3405c);
          (*pcVar2)();
        }
        unaff_x23 = *unaff_x20;
        puVar6 = *(undefined1 **)(unaff_x23 + 0x10);
        if ((long)puVar6 < (long)puVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34060);
          (*pcVar2)();
        }
        if (puVar7 != puVar6) {
          if (puVar6 <= puVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34070);
            (*pcVar2)();
          }
          if ((char)puVar7[unaff_x23 + 0x20] < -0x40) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34074);
            (*pcVar2)();
          }
        }
      }
      else {
        unaff_x20[1] = (long)puVar7;
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,puVar4,0,0);
        *puVar4 = 0;
        _swift_willThrow();
      }
      return unaff_x23;
    }
    unaff_x23 = *unaff_x20;
    puVar4 = puVar6;
    FUN_100a32fa0(puVar6,unaff_x23);
    if ((int)puVar4 == (int)param_1) break;
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3404c);
      (*pcVar2)();
    }
    if (*(undefined1 **)(unaff_x23 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34050);
      (*pcVar2)();
    }
    bVar1 = puVar6[unaff_x23 + 0x20];
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0xe0) == 0xc0) {
        puVar6 = puVar6 + 2;
      }
      else if ((bVar1 & 0xf0) == 0xe0) {
        bVar3 = SCARRY8((long)puVar6,3);
        puVar6 = puVar6 + 3;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34054);
          (*pcVar2)();
        }
      }
      else {
        bVar3 = SCARRY8((long)puVar6,4);
        puVar6 = puVar6 + 4;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33f70);
          (*pcVar2)();
        }
      }
    }
    else {
      puVar6 = puVar6 + 1;
    }
    unaff_x20[1] = (long)puVar6;
    puVar5 = puVar8;
  }
  if ((long)puVar6 < (long)puVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34064);
    (*pcVar2)();
  }
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34068);
    (*pcVar2)();
  }
  puVar5 = *(undefined1 **)(unaff_x23 + 0x10);
  if ((long)puVar5 < (long)puVar6) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3406c);
    (*pcVar2)();
  }
  if (puVar7 == puVar5) {
    return unaff_x23;
  }
  if (puVar5 <= puVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34078);
    (*pcVar2)();
  }
  if (-0x41 < (char)puVar7[unaff_x23 + 0x20]) {
    return unaff_x23;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a33fa8);
  (*pcVar2)();
}



/* Address: 0x100a34078 | FUN_100a34078 */

void FUN_100a34078(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  
  uVar2 = unaff_x20[1];
  lVar3 = unaff_x20[3];
  unaff_x20[1] = lVar3;
  if (lVar3 < (long)uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a340c8);
    (*pcVar1)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a340cc);
    (*pcVar1)();
  }
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if ((long)uVar4 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a340d0);
    (*pcVar1)();
  }
  if (uVar2 != uVar4) {
    if (uVar4 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a340d4);
      (*pcVar1)();
    }
    if (*(char *)(*unaff_x20 + uVar2 + 0x20) < -0x40) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a340d8);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100a340d8 | FUN_100a340d8 */

undefined * FUN_100a340d8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  
  if (param_2 == param_3) {
    lVar15 = 0;
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100a3410c:
    if (1 < *(ulong *)(puVar6 + 0x18)) {
      uVar9 = *(ulong *)(puVar6 + 0x18) >> 1;
      if (SBORROW8(uVar9,lVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a3431c);
        (*pcVar4)();
      }
      *(ulong *)(puVar6 + 0x10) = uVar9 - lVar15;
    }
    return puVar6;
  }
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (param_2 < uVar9) {
    lVar15 = 0;
    param_1 = param_1 + 0x20;
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar13 = (uint *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      bVar3 = *(byte *)(param_1 + param_2);
      if (((bVar3 ^ 0xffffffff) & 0xc0) == 0) {
        uVar10 = param_2 + 1;
        if ((long)uVar9 <= (long)uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34308);
          (*pcVar4)();
        }
        uVar1 = *(byte *)(param_1 + uVar10) & 0x3f;
        uVar8 = (uint)bVar3;
        if (((uVar8 ^ 0xffffffff) & 0xe0) == 0) {
          uVar10 = param_2 + 2;
          if ((long)uVar9 <= (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34314);
            (*pcVar4)();
          }
          uVar14 = *(byte *)(param_1 + uVar10) & 0x3f;
          if (((uVar8 ^ 0xffffffff) & 0xf0) == 0) {
            param_2 = param_2 + 3;
            if ((long)uVar9 <= (long)param_2) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34318);
              (*pcVar4)();
            }
            uVar14 = (bVar3 & 7) << 0x12 | uVar1 << 0xc | uVar14 << 6 |
                     *(byte *)(param_1 + param_2) & 0x3f;
          }
          else {
            uVar14 = (uVar8 & 0xf) << 0xc | uVar1 << 6 | uVar14;
            param_2 = uVar10;
          }
        }
        else {
          uVar14 = uVar1 | (uVar8 & 0x1f) << 6;
          param_2 = uVar10;
        }
      }
      else {
        uVar14 = bVar3 & 0x7f;
      }
      if (uVar14 >> 0xb == 0x1b) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a3430c);
        (*pcVar4)();
      }
      if (0x10 < uVar14 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34300);
        (*pcVar4)();
      }
      puVar6 = puVar12;
      if (lVar15 == 0) {
        uVar10 = *(ulong *)(puVar12 + 0x18);
        if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34310);
          (*pcVar4)();
        }
        uVar11 = uVar10 & 0xfffffffffffffffe;
        if ((long)uVar10 < 2) {
          uVar11 = 1;
        }
        puVar6 = &DAT_100ff55e8;
        FUN_1000f7830(&DAT_100ff55e8,&DAT_100c8eeb0);
        _swift_allocObject();
        puVar7 = puVar6;
        _malloc_size();
        puVar2 = puVar7 + -0x1d;
        if (0x1f < (long)puVar7) {
          puVar2 = puVar7 + -0x20;
        }
        *(ulong *)(puVar6 + 0x10) = uVar11;
        *(long *)(puVar6 + 0x18) = ((long)puVar2 >> 2) << 1;
        puVar7 = puVar6 + 0x20;
        uVar10 = *(ulong *)(puVar12 + 0x18) >> 1;
        if (*(long *)(puVar12 + 0x10) != 0) {
          if ((puVar6 != puVar12) || (puVar12 + 0x20 + uVar10 * 4 <= puVar7)) {
            _memmove(puVar7,puVar12 + 0x20,uVar10 << 2);
          }
          *(undefined8 *)(puVar12 + 0x10) = 0;
        }
        puVar13 = (uint *)(puVar7 + uVar10 * 4);
        lVar15 = ((long)puVar2 >> 2 & 0x7fffffffffffffffU) - uVar10;
        _swift_release(puVar12);
      }
      bVar5 = SBORROW8(lVar15,1);
      lVar15 = lVar15 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a34304);
        (*pcVar4)();
      }
      param_2 = param_2 + 1;
      *puVar13 = uVar14;
      if (param_2 == param_3) goto LAB_100a3410c;
      puVar12 = puVar6;
      puVar13 = puVar13 + 1;
    } while (param_2 < uVar9);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100a342fc);
  (*pcVar4)();
}



/* Address: 0x100a3431c | FUN_100a3431c */

void FUN_100a3431c(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *unaff_x20;
  
  uVar4 = unaff_x20[1];
  uVar5 = uVar4;
  if ((long)param_1 < 1) {
    param_1 = (undefined1 *)*unaff_x20;
  }
  else {
    puVar7 = param_1 + 1;
    do {
      if (uVar5 == unaff_x20[3]) {
        FUN_1009ff51c();
        _swift_allocError(&DAT_100f29a58,param_1,0,0);
        *param_1 = 0;
        _swift_willThrow();
        return;
      }
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34444);
        (*pcVar2)();
      }
      param_1 = (undefined1 *)*unaff_x20;
      if (*(ulong *)(param_1 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34448);
        (*pcVar2)();
      }
      bVar1 = param_1[uVar5 + 0x20];
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          uVar5 = uVar5 + 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          bVar3 = SCARRY8(uVar5,3);
          uVar5 = uVar5 + 3;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3444c);
            (*pcVar2)();
          }
        }
        else {
          bVar3 = SCARRY8(uVar5,4);
          uVar5 = uVar5 + 4;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100a343b8);
            (*pcVar2)();
          }
        }
      }
      else {
        uVar5 = uVar5 + 1;
      }
      puVar7 = puVar7 + -1;
    } while (1 < (long)puVar7);
    if ((long)uVar5 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34450);
      (*pcVar2)();
    }
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34454);
    (*pcVar2)();
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    if (uVar4 != uVar6) {
      if (uVar6 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3445c);
        (*pcVar2)();
      }
      if ((char)param_1[uVar4 + 0x20] < -0x40) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34460);
        (*pcVar2)();
      }
    }
    unaff_x20[1] = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34458);
  (*pcVar2)();
}



/* Address: 0x100a34460 | thunk_FUN_100a34464 */

void thunk_FUN_100a34464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff55d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8ed50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ed50,&DAT_100f29a58);
  DAT_100ff55d8 = pTVar1;
  return;
}



/* Address: 0x100a34464 | FUN_100a34464 */

void FUN_100a34464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff55d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8ed50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ed50,&DAT_100f29a58);
  DAT_100ff55d8 = pTVar1;
  return;
}



/* Address: 0x100a344a4 | thunk_FUN_100a344a8 */

void thunk_FUN_100a344a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff55e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8edf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8edf8,&DAT_100f29ad0);
  DAT_100ff55e0 = pTVar1;
  return;
}



/* Address: 0x100a344a8 | FUN_100a344a8 */

void FUN_100a344a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff55e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8edf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8edf8,&DAT_100f29ad0);
  DAT_100ff55e0 = pTVar1;
  return;
}



/* Address: 0x100a344e8 | FUN_100a344e8 */

void FUN_100a344e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x100a344f4 | FUN_100a344f4 */

undefined1  [16] FUN_100a344f4(void)

{
  return ZEXT816(0x100f299b8);
}



/* Address: 0x100a34504 | FUN_100a34504 */

undefined1  [16] FUN_100a34504(void)

{
  return ZEXT816(0x100f29a58);
}



/* Address: 0x100a34514 | thunk_FUN_100a34518 */

undefined8 * thunk_FUN_100a34518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100a34518 | FUN_100a34518 */

undefined8 * FUN_100a34518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100a3454c | thunk_FUN_100a34550 */

undefined8 * thunk_FUN_100a34550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a34550 | FUN_100a34550 */

undefined8 * FUN_100a34550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a345ac | thunk_FUN_100a345b0 */

undefined8 * thunk_FUN_100a345b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a345b0 | FUN_100a345b0 */

undefined8 * FUN_100a345b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a345f4 | FUN_100a345f4 */

undefined1  [16] FUN_100a345f4(void)

{
  return ZEXT816(0x100f29ad0);
}



/* Address: 0x100a34604 | thunk_FUN_10001fbfc */

void thunk_FUN_10001fbfc(void)

{
  thunk_FUN_10001fbfc();
  return;
}



/* Address: 0x100a34608 | thunk_FUN_100a34518 */

void thunk_FUN_100a34518(void)

{
  thunk_FUN_100a34518();
  return;
}



/* Address: 0x100a3460c | thunk_FUN_100a34550 */

void thunk_FUN_100a34550(void)

{
  thunk_FUN_100a34550();
  return;
}



/* Address: 0x100a34610 | thunk_FUN_100a345b0 */

void thunk_FUN_100a345b0(void)

{
  thunk_FUN_100a345b0();
  return;
}



/* Address: 0x100a34614 | thunk_FUN_10001fbb4 */

void thunk_FUN_10001fbb4(void)

{
  thunk_FUN_10001fbb4();
  return;
}



/* Address: 0x100a34618 | FUN_100a34618 */

/* WARNING: Removing unreachable block (ram,0x000100a347ac) */
/* WARNING: Removing unreachable block (ram,0x000100a346e0) */
/* WARNING: Removing unreachable block (ram,0x000100a347d8) */

void FUN_100a34618(undefined8 param_1)

{
  code *pcVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 in_x5;
  long extraout_x8;
  undefined8 local_a0 [2];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = Swift::Collection::get_count();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a347bc);
    (*pcVar1)();
  }
  if (((long)uVar3 < 0x401) ||
     ((bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
      (bVar2 & 1) != 0 &&
      (uVar4 = uVar3, _swift_stdlib_isStackAllocationSafe(uVar3,1), (uVar4 & 1) != 0)))) {
    uVar4 = uVar3;
    if (uVar3 < 2) {
      uVar4 = 1;
    }
    (*(code *)PTR____chkstk_darwin_100ea82c0)(uVar4 + 0xf & 0xfffffffffffffff0);
    *(undefined8 *)((long)local_a0 + -extraout_x8) = in_x5;
    FUN_100a35388(&local_80,auStack_90 + -extraout_x8,uVar3,param_1);
  }
  else {
    _swift_slowAlloc(uVar3,0xffffffffffffffff);
    local_a0[0] = in_x5;
    FUN_100a35388(&local_80);
    _swift_slowDealloc(uVar3,0xffffffffffffffff,0xffffffffffffffff);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_80,uStack_78);
  }
  return;
}



/* Address: 0x100a34810 | FUN_100a34810 */

undefined1 FUN_100a34810(byte param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  String SVar2;
  String SVar3;
  
  if (param_1 < 0x10) {
    return *(undefined1 *)((long)&TargetResilientWitness_100c8f1bc.Implementation + (ulong)param_1);
  }
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000013,0x8000000100db8350,
             0xdb8340);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a348f0);
  (*pcVar1)();
}



/* Address: 0x100a348f0 | FUN_100a348f0 */

undefined1  [16] FUN_100a348f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined1 *local_70;
  long local_68;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_StringProtocol_100eacb80;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_StringProtocol_100eacb80,
             PTR___associated_type_descriptor_for_Swift_StringProtocol_UTF8View_100eabd28);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b0 + -extraout_x8;
  Swift::StringProtocol::_get_utf8();
  local_80 = (undefined1)param_1;
  uVar3 = param_3;
  local_90 = param_2;
  uStack_88 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_StringProtocol_Swift_StringProtocol_UTF8View__Swift_Collection_100eacb78
            );
  Swift::Sequence::_withContiguousStorageIfAvailable();
  pcVar5 = *(code **)(lVar7 + 8);
  (*pcVar5)(puVar6,lVar2);
  if (local_68 == 0) {
    Swift::StringProtocol::_get_utf8();
    puVar4 = puVar6;
    FUN_100a34af0(puVar6,param_1,param_2,lVar2,param_3,uVar3);
    (*pcVar5)(puVar6,lVar2);
    local_70 = puVar4;
    local_68 = param_1;
  }
  auVar8._8_8_ = local_68;
  auVar8._0_8_ = local_70;
  return auVar8;
}



/* Address: 0x100a34a64 | FUN_100a34a64 */

void FUN_100a34a64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = &local_50;
  puVar1 = &DAT_100ff5620;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_1000f7830(&DAT_100ff5620,&DAT_100c8f080);
  puVar2 = puVar1;
  FUN_100a3591c();
  FUN_100a34af0(&local_50,param_4,param_5,puVar1,param_6,puVar2);
  *param_1 = puVar3;
  param_1[1] = param_4;
  return;
}



/* Address: 0x100a34af0 | FUN_100a34af0 */

/* WARNING: Removing unreachable block (ram,0x000100a34cac) */
/* WARNING: Removing unreachable block (ram,0x000100a34bcc) */
/* WARNING: Removing unreachable block (ram,0x000100a34cd8) */

void FUN_100a34af0(void)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  __int64 _Var4;
  ulong uVar5;
  ulong uVar6;
  undefined8 in_x5;
  long extraout_x8;
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var4 = Swift::Collection::get_count();
  lVar1 = _Var4 * 3;
  if (SUB168(SEXT816(_Var4) * SEXT816(3),8) != lVar1 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34c28);
    (*pcVar2)();
  }
  if (-2 < lVar1) {
    uVar6 = lVar1 + 1;
    if ((lVar1 < 0x400) ||
       ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
        (bVar3 & 1) != 0 &&
        (uVar5 = uVar6, _swift_stdlib_isStackAllocationSafe(uVar6,1), (uVar5 & 1) != 0)))) {
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      (*(code *)PTR____chkstk_darwin_100ea82c0)(uVar6 + 0xf & 0xfffffffffffffff0);
      *(undefined8 *)((long)local_a0 - extraout_x8) = in_x5;
      FUN_100a34d10(&local_80);
    }
    else {
      _swift_slowAlloc(uVar6,0xffffffffffffffff);
      local_a0[0] = in_x5;
      FUN_100a34d10(&local_80);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(local_80,uStack_78);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a34cbc);
  (*pcVar2)();
}



/* Address: 0x100a34d10 | FUN_100a34d10 */

void FUN_100a34d10(String *param_1,UnsafePointer<__int8> param_2,long param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  String SVar10;
  undefined1 auStack_c0 [4];
  uint local_bc;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  String *local_a8;
  byte local_52;
  char local_51;
  
  lVar7 = *(long *)(param_8 + -8);
  lVar4 = param_8;
  local_b8 = param_6;
  local_a8 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  uVar9 = *(undefined8 *)(extraout_x12 + 8);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350f0);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x10))
            (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_8);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar9,param_8,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  if (local_51 == '\x01') {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    local_b0 = param_5 & 0xfffffff7;
    local_ac = param_5 & 0x76;
    local_bc = param_5 & 0xffffffd2;
    do {
      uVar3 = local_ac;
      switch(local_52) {
      case 0x21:
      case 0x24:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2c:
        uVar3 = param_5 & 0xfffffff6;
        break;
      default:
        if ((byte)(local_52 - 0x30) < 10) goto switchD_100a34f30_caseD_2d;
        if (local_52 < 0x3d) {
          uVar3 = local_bc;
          if ((local_52 == 0x3a) || (uVar3 = param_5 & 0xfffffff6, local_52 == 0x3b)) break;
        }
        else {
          if (local_52 == 0x3d) goto joined_r0x000100a34f64;
          if (local_52 == 0x3f) {
            if (0x3f < (param_5 & 0xff)) goto LAB_100a34f8c;
            goto LAB_100a35030;
          }
          if (local_52 == 0x40) goto joined_r0x000100a34f54;
        }
        uVar3 = param_5;
        if (0x19 < (byte)(local_52 + 0xbf)) {
          if (local_52 != 0x5f) {
            uVar3 = param_5;
            if ((byte)(local_52 + 0x9f) < 0x1a) break;
            if (local_52 != 0x7e) goto LAB_100a35030;
          }
          if (1 < (param_5 & 0xff)) goto LAB_100a34f8c;
          goto LAB_100a35030;
        }
        break;
      case 0x26:
        goto joined_r0x000100a34f64;
      case 0x2b:
        uVar3 = local_b0;
        break;
      case 0x2d:
      case 0x2e:
switchD_100a34f30_caseD_2d:
        uVar3 = param_5;
        break;
      case 0x2f:
joined_r0x000100a34f54:
        if (0xf < (param_5 & 0xff)) goto LAB_100a34f8c;
        goto LAB_100a35030;
      }
      uVar3 = uVar3 & 0xff;
joined_r0x000100a34f64:
      if (uVar3 == 0) {
LAB_100a35030:
        if (param_3 <= lVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350e0);
          (*pcVar1)();
        }
        param_2.unknown[lVar7] = 0x25;
        bVar6 = local_52 >> 4;
        FUN_100a34810(bVar6,param_7,param_9);
        if (param_3 <= lVar7 + 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350e4);
          (*pcVar1)();
        }
        param_2.unknown[lVar7 + 1] = bVar6;
        lVar8 = lVar7 + 2;
        bVar6 = local_52 & 0xf;
        FUN_100a34810(bVar6,param_7,param_9);
        if (param_3 <= lVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350e8);
          (*pcVar1)();
        }
        lVar5 = 3;
      }
      else {
LAB_100a34f8c:
        if (param_3 <= lVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350dc);
          (*pcVar1)();
        }
        lVar5 = 1;
        lVar8 = lVar7;
        bVar6 = local_52;
      }
      param_2.unknown[lVar8] = bVar6;
      lVar7 = lVar7 + lVar5;
      Swift::IteratorProtocol::_next();
    } while (local_51 != '\x01');
  }
  (**(code **)(lVar4 + 8))
            ((long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00,lVar2)
  ;
  if (param_3 <= lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a350ec);
    (*pcVar1)();
  }
  param_2.unknown[lVar7] = 0;
  SVar10 = Swift::String::init(param_2);
  *local_a8 = SVar10;
  return;
}



/* Address: 0x100a3512c | FUN_100a3512c */

undefined2 FUN_100a3512c(char param_1)

{
  byte bVar1;
  
  bVar1 = param_1 - 0x30;
  if (bVar1 < 0x37) {
    return CONCAT11((&DAT_100c8f0c1)[bVar1],(&DAT_100c8f08a)[bVar1]);
  }
  return 0x100;
}



/* Address: 0x100a3516c | FUN_100a3516c */

undefined1  [16] FUN_100a3516c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_70;
  long local_68;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_StringProtocol_100eacb80;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_StringProtocol_100eacb80,
             PTR___associated_type_descriptor_for_Swift_StringProtocol_UTF8View_100eabd28);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)local_b0 - extraout_x8;
  Swift::StringProtocol::_get_utf8();
  uVar3 = param_3;
  local_b0[0] = param_1;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_1;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_StringProtocol_Swift_StringProtocol_UTF8View__Swift_Collection_100eacb78
            );
  FUN_1000f7830(&DAT_100ff55f8,&DAT_100c8eed0);
  Swift::Sequence::_withContiguousStorageIfAvailable();
  pcVar5 = *(code **)(lVar6 + 8);
  (*pcVar5)(lVar7,lVar2);
  if (local_68 == 1) {
    Swift::StringProtocol::_get_utf8();
    lVar6 = lVar7;
    lVar4 = local_b0[0];
    FUN_100a34618(lVar7,local_b0[0],param_2,lVar2,param_3,uVar3);
    (*pcVar5)(lVar7,lVar2);
    local_70 = lVar6;
    local_68 = lVar4;
  }
  auVar8._8_8_ = local_68;
  auVar8._0_8_ = local_70;
  return auVar8;
}



/* Address: 0x100a352fc | FUN_100a352fc */

void FUN_100a352fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = &local_50;
  puVar1 = &DAT_100ff5620;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_1000f7830(&DAT_100ff5620,&DAT_100c8f080);
  puVar2 = puVar1;
  FUN_100a3591c();
  FUN_100a34618(&local_50,param_4,param_5,puVar1,param_6,puVar2);
  *param_1 = puVar3;
  param_1[1] = param_4;
  return;
}



/* Address: 0x100a35388 | FUN_100a35388 */

/* WARNING: Removing unreachable block (ram,0x000100a35630) */

void FUN_100a35388(undefined8 *param_1,UnsafeBufferPointer<__int8> param_2,undefined8 param_3,
                  undefined8 param_4,undefined8 param_5,long param_6,undefined8 param_7,long param_8
                  ,undefined1 *param_9)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  Hasher HVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  String SVar17;
  tuple2_conflict1 tVar18;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 *local_a0;
  byte local_52;
  char local_51;
  
  lVar12 = *(long *)(param_8 + -8);
  lVar9 = param_8;
  local_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  HVar8.unknown = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  uVar14 = *(undefined8 *)(extraout_x12 + 8);
  puVar5 = (undefined1 *)0x0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,lVar9,PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0
             ,PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar9 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  (**(code **)(lVar12 + 0x10))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_8);
  Swift::Sequence::_makeIterator();
  puVar7 = puVar5;
  _swift_getAssociatedConformanceWitness
            (uVar14,param_8,puVar5,HVar8.unknown,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  pcVar15 = (char *)0x0;
  uVar16 = 0;
  lVar12 = 0;
  do {
    Swift::IteratorProtocol::_next();
    if (local_51 == '\x01') {
      bVar3 = lVar12 == 0;
LAB_100a356c0:
      (**(code **)(lVar9 + 8))(lVar11,puVar5);
      if (bVar3) {
        if ((long)pcVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35740);
          (*pcVar2)();
        }
        pcVar1 = (char *)0x0;
        if (param_2.unknown != (undefined *)0x0) {
          pcVar1 = pcVar15;
        }
        SVar17.bridgeObject = puVar7;
        SVar17.str = pcVar1;
        tVar18 = Swift::String::_fromUTF8Repairing(param_2,SVar17);
        *local_a0 = tVar18.result.str;
        local_a0[1] = tVar18.result.bridgeObject;
      }
      else {
LAB_100a356f8:
        *local_a0 = 0;
        local_a0[1] = 0;
      }
      return;
    }
    if (local_52 == 0x25) {
      if (lVar12 == 0) goto LAB_100a354e4;
LAB_100a3569c:
      (**(code **)(lVar9 + 8))(lVar11,puVar5);
      goto LAB_100a356f8;
    }
    if (lVar12 < 1) {
      param_2.unknown[(long)pcVar15] = local_52;
      while( true ) {
        if (SCARRY8((long)pcVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35728);
          (*pcVar2)();
        }
        pcVar15 = pcVar15 + 1;
        Swift::IteratorProtocol::_next();
        if (local_51 == '\x01') {
          bVar3 = true;
          goto LAB_100a356c0;
        }
        if (local_52 == 0x25) break;
        param_2.unknown[(long)pcVar15] = local_52;
      }
LAB_100a354e4:
      Swift::IteratorProtocol::_next();
      if ((local_51 == '\x01') || (local_52 == 0x25)) goto LAB_100a3569c;
      lVar12 = 2;
    }
    uVar13 = (uint)local_52;
    puVar7 = param_9;
    FUN_100a3512c(local_52,param_7);
    if ((uVar13 & 0xff00) == 0x100) goto LAB_100a3569c;
    if (lVar12 == 2) {
      uVar16 = (ulong)(uVar13 << 4);
      lVar12 = 1;
    }
    else {
      uVar13 = ((uint)uVar16 & 0xff) + (uVar13 & 0xff);
      uVar16 = (ulong)uVar13;
      if (uVar13 >> 8 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3572c);
        (*pcVar2)();
      }
      if (*(long *)(param_6 + 0x10) != 0) {
        puVar7 = &DAT_00000001;
        uVar6 = Swift::Hasher::_hash(*(__int64 *)(param_6 + 0x28),uVar16 & 0xff,1,HVar8);
        uVar10 = -1L << ((ulong)*(byte *)(param_6 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_6 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
          do {
            if ((uint)*(byte *)(*(long *)(param_6 + 0x30) + uVar6) == (uVar13 & 0xff)) {
              if (SCARRY8((long)pcVar15,2)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35734);
                (*pcVar2)();
              }
              if ((long)(pcVar15 + 2) < (long)pcVar15) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35738);
                (*pcVar2)();
              }
              uVar13 = uVar13 >> 4 & 0xf;
              cVar4 = (char)uVar13;
              puVar7 = param_9;
              local_a8 = (long)(pcVar15 + 2) - (long)pcVar15;
              FUN_100a34810(uVar13,param_7);
              if (local_a8 + 1U < 3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3573c);
                (*pcVar2)();
              }
              pcVar1 = (char *)0x0;
              if (param_2.unknown != (undefined *)0x0) {
                pcVar1 = pcVar15 + (long)param_2.unknown;
              }
              *pcVar1 = '%';
              pcVar1[1] = cVar4;
              pcVar1[2] = local_52;
              bVar3 = SCARRY8((long)pcVar15,3);
              pcVar15 = pcVar15 + 3;
              if (bVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35694);
                (*pcVar2)();
              }
              goto LAB_100a355d4;
            }
            uVar6 = uVar6 + 1 & ~uVar10;
          } while ((*(ulong *)(param_6 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
        }
      }
      param_2.unknown[(long)pcVar15] = (char)uVar13;
      bVar3 = SCARRY8((long)pcVar15,1);
      pcVar15 = pcVar15 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a35730);
        (*pcVar2)();
      }
      uVar16 = 0;
LAB_100a355d4:
      lVar12 = lVar12 + -1;
    }
  } while( true );
}


