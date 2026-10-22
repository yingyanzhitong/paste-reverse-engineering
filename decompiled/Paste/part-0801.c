/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008ca9f4 | FUN_1008ca9f4 */

void FUN_1008ca9f4(undefined1 *param_1)

{
  long unaff_x20;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  (**(code **)(*plVar1 + 0x88))();
  *param_1 = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  _swift_retain(uVar2);
  FUN_1008d31ec(0,0,uVar2);
  _swift_release(plVar1);
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Address: 0x1008caac4 | FUN_1008caac4 */

void FUN_1008caac4(void)

{
  FUN_1008ca9f4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008caae4 | FUN_1008caae4 */

void FUN_1008caae4(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_38,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008cab2c | FUN_1008cab2c */

void FUN_1008cab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cab84 | FUN_1008cab84 */

void FUN_1008cab84(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x78,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x98);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  param_1[2] = *(undefined8 *)(unaff_x20 + 0x88);
  param_1[1] = uVar3;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar1;
  _swift_retain();
  return;
}



/* Address: 0x1008cabe0 | FUN_1008cabe0 */

void FUN_1008cabe0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x78,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x80) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar3;
  *(undefined1 *)(unaff_x20 + 0x98) = *(undefined1 *)(param_1 + 4);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cac34 | FUN_1008cac34 */

undefined1  [16] FUN_1008cac34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x78,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1008cac64 | FUN_1008cac64 */

void FUN_1008cac64(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa0,auStack_38,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Address: 0x1008cacac | FUN_1008cacac */

void FUN_1008cacac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa0,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_3;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cad04 | FUN_1008cad04 */

undefined1  [16] FUN_1008cad04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xa0,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xa0;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1008cad34 | FUN_1008cad34 */

void FUN_1008cad34(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Address: 0x1008cad3c | FUN_1008cad3c */

undefined8 FUN_1008cad3c(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cad84);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cad88);
  (*pcVar1)();
}



/* Address: 0x1008cad88 | FUN_1008cad88 */

void FUN_1008cad88(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cadf0);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  FUN_1005d8534(param_1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cadf4);
  (*pcVar1)();
}



/* Address: 0x1008cadf4 | FUN_1008cadf4 */

undefined1  [16] FUN_1008cadf4(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  param_1[1] = lVar4;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cae58);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 == 0) {
    *param_1 = uVar3;
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = FUN_1008cae5c;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cae5c);
  (*pcVar1)();
}



/* Address: 0x1008cae5c | FUN_1008cae5c */

void FUN_1008cae5c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if ((param_2 & 1) == 0) {
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x20));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008caf20);
      (*pcVar3)();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
    FUN_1005d8534(uVar1);
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008caf28);
    (*pcVar3)();
  }
  FUN_1005d84e8(uVar1);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008caf1c);
    (*pcVar3)();
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  FUN_1005d84e8(uVar1);
  FUN_1005d8534(uVar5);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
  FUN_1005d8534(uVar1);
  if (iVar4 == 0) {
    FUN_1005d8534(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008caf24);
  (*pcVar3)();
}



/* Address: 0x1008caf28 | FUN_1008caf28 */

undefined8 FUN_1008caf28(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008caf70);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008caf74);
  (*pcVar1)();
}



/* Address: 0x1008caf74 | FUN_1008caf74 */

void FUN_1008caf74(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cafdc);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x18) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  FUN_1005d8534(param_1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cafe0);
  (*pcVar1)();
}



/* Address: 0x1008cafe0 | FUN_1008cafe0 */

undefined1  [16] FUN_1008cafe0(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  param_1[1] = lVar4;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb044);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 == 0) {
    *param_1 = uVar3;
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = FUN_1008cb048;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb048);
  (*pcVar1)();
}



/* Address: 0x1008cb048 | FUN_1008cb048 */

void FUN_1008cb048(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if ((param_2 & 1) == 0) {
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x20));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cb10c);
      (*pcVar3)();
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
    FUN_1005d8534(uVar1);
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cb114);
    (*pcVar3)();
  }
  FUN_1005d84e8(uVar1);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cb108);
    (*pcVar3)();
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  FUN_1005d84e8(uVar1);
  FUN_1005d8534(uVar5);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x20));
  FUN_1005d8534(uVar1);
  if (iVar4 == 0) {
    FUN_1005d8534(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cb110);
  (*pcVar3)();
}



/* Address: 0x1008cb114 | FUN_1008cb114 */

ulong FUN_1008cb114(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined4 extraout_var;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb1d4);
    (*pcVar1)();
  }
  lVar5 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(ulong *)(lVar5 + 0x10);
    FUN_1005d84e8(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    puVar3 = (undefined8 *)CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        FUN_1008c0f94();
        _swift_allocError(&DAT_100eeb710,puVar3,0,0);
        *puVar3 = 1;
        *(undefined1 *)(puVar3 + 1) = 3;
        _swift_willThrow();
      }
      return uVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb1dc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb1d8);
  (*pcVar1)();
}



/* Address: 0x1008cb1dc | FUN_1008cb1dc */

ulong FUN_1008cb1dc(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined4 extraout_var;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb29c);
    (*pcVar1)();
  }
  lVar5 = *(long *)(unaff_x20 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(ulong *)(lVar5 + 0x18);
    FUN_1005d84e8(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    puVar3 = (undefined8 *)CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        FUN_1008c0f94();
        _swift_allocError(&DAT_100eeb710,puVar3,0,0);
        *puVar3 = 1;
        *(undefined1 *)(puVar3 + 1) = 3;
        _swift_willThrow();
      }
      return uVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb2a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb2a0);
  (*pcVar1)();
}



/* Address: 0x1008cb2a4 | FUN_1008cb2a4 */

void FUN_1008cb2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1008d3ce0(param_3);
  return;
}



/* Address: 0x1008cb2ac | FUN_1008cb2ac */

void FUN_1008cb2ac(ulong param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))();
  if ((param_1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    FUN_1008d419c();
    _swift_retain(param_3);
    _swift_retain(uVar2);
    FUN_10061d97c();
    _swift_release(uVar2);
    FUN_1008d31ec(0,0,*(undefined8 *)(param_3 + 0x40));
    _swift_release(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb33c);
  (*pcVar1)();
}



/* Address: 0x1008cb33c | FUN_1008cb33c */

void FUN_1008cb33c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008cb3a4);
    (*pcVar2)();
  }
  if (param_2 != 0) {
    FUN_1008d31ec(0,0,param_2);
    return;
  }
  return;
}



/* Address: 0x1008cb3a4 | FUN_1008cb3a4 */

void FUN_1008cb3a4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x30);
  _swift_getObjectType();
  FUN_100642338();
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
  *puVar2 = 1;
  if (param_2 != 0) {
    FUN_1008d31ec(0,0,param_2);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_retain(uVar1);
  FUN_10062cc28();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cb424 | FUN_1008cb424 */

void FUN_1008cb424(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar4 + 0x10))();
  if ((uVar3 & 1) != 0) {
    if (param_1 != 0) {
      FUN_1008d31ec(0,0,param_1);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_retain(uVar2);
    FUN_10062cc04();
    _swift_release(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb498);
  (*pcVar1)();
}



/* Address: 0x1008cb498 | FUN_1008cb498 */

void FUN_1008cb498(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar1 + 0x10);
  puVar3 = puVar2;
  (*pcVar5)();
  if (((ulong)puVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008cb560);
    (*pcVar5)();
  }
  (**(code **)(**(long **)(unaff_x20 + 0x18) + 0x88))();
  *puVar3 = 1;
  (*pcVar5)(puVar2,lVar1);
  if (((ulong)puVar2 & 1) != 0) {
    if (param_1 != 0) {
      FUN_1008d31ec(0,0,param_1);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_retain(uVar4);
    FUN_10062cc04();
    _swift_release(uVar4);
    _swift_retain(uVar4);
    FUN_10062cc28();
    _swift_release(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1008cb564);
  (*pcVar5)();
}



/* Address: 0x1008cb564 | FUN_1008cb564 */

void FUN_1008cb564(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [72];
  undefined8 local_48;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x10))();
  if ((uVar2 & 1) != 0) {
    FUN_1005e650c(param_1,auStack_90);
    local_48 = param_2;
    _swift_beginAccess(unaff_x20 + 0x78,auStack_a8,0x21,0);
    _swift_retain(param_2);
    FUN_1008c8c38(auStack_90);
    _swift_endAccess(auStack_a8);
    FUN_1000fb4c4(auStack_90,&DAT_100feb108,&DAT_100c82c30);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cb61c);
  (*pcVar1)();
}



/* Address: 0x1008cb61c | FUN_1008cb61c */

void FUN_1008cb61c(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long lStack_178;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar2 + 0x10);
  uVar4 = uVar3;
  (*pcVar11)();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbd8);
    (*pcVar11)();
  }
  _swift_beginAccess(unaff_x20 + 0x78,auStack_80,1,0);
  lVar8 = *(long *)(unaff_x20 + 0x88) - *(long *)(unaff_x20 + 0x80);
  if (*(long *)(unaff_x20 + 0x88) < *(long *)(unaff_x20 + 0x80)) {
    lVar8 = lVar8 + *(long *)(*(long *)(unaff_x20 + 0x78) + 0x10);
  }
  if (lVar8 < 1) {
    if (*(char *)(unaff_x20 + 0x98) == '\x01') {
      return;
    }
  }
  else {
    *(long *)(unaff_x20 + 0x90) = lVar8 + -1;
    *(undefined1 *)(unaff_x20 + 0x98) = 0;
  }
  while( true ) {
    lVar8 = *(long *)(unaff_x20 + 0x90);
    _swift_beginAccess(unaff_x20 + 0x78,auStack_138,0x21,0);
    bVar1 = lVar8 < 1;
    if (lVar8 < 2) {
      lVar8 = 1;
    }
    *(long *)(unaff_x20 + 0x90) = lVar8 + -1;
    *(bool *)(unaff_x20 + 0x98) = bVar1;
    uVar4 = *(ulong *)(unaff_x20 + 0x78);
    uVar9 = *(ulong *)(unaff_x20 + 0x80);
    uVar13 = *(ulong *)(unaff_x20 + 0x88);
    lVar8 = uVar13 - uVar9;
    if ((long)uVar13 < (long)uVar9) {
      lVar8 = lVar8 + *(long *)(uVar4 + 0x10);
    }
    if (lVar8 < 1) break;
    if (uVar13 == uVar9) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbac);
      (*pcVar11)();
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbb0);
      (*pcVar11)();
    }
    if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbb4);
      (*pcVar11)();
    }
    uVar15 = *(ulong *)(uVar4 + 0x10);
    if (uVar15 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbb8);
      (*pcVar11)();
    }
    FUN_1000f8cac(uVar4 + uVar9 * 0x50 + 0x20,&local_1c0,&DAT_100feb100,&DAT_100c826d0);
    if (lStack_178 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbdc);
      (*pcVar11)();
    }
    uStack_f8 = uStack_198;
    local_100 = local_1a0;
    uStack_e8 = uStack_188;
    uStack_f0 = uStack_190;
    lStack_d8 = lStack_178;
    local_e0 = local_180;
    uStack_118 = uStack_1b8;
    local_120 = local_1c0;
    uStack_108 = uStack_1a8;
    uStack_110 = uStack_1b0;
    if ((long)uVar9 <= (long)uVar13) {
      uVar15 = 0;
    }
    if ((long)((uVar13 - uVar9) + uVar15) < 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbbc);
      (*pcVar11)();
    }
    uVar13 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x78) = uVar4;
    if ((uVar13 & 1) == 0) {
      FUN_1008d1a1c();
    }
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    local_180 = 0;
    lStack_178 = 1;
    *(ulong *)(unaff_x20 + 0x78) = uVar4;
    if (*(ulong *)(uVar4 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbc0);
      (*pcVar11)();
    }
    FUN_1004375f4(&local_1c0,uVar4 + uVar9 * 0x50 + 0x20,&DAT_100feb100,&DAT_100c826d0);
    lVar8 = lStack_d8;
    *(ulong *)(unaff_x20 + 0x78) = uVar4;
    *(ulong *)(unaff_x20 + 0x80) = *(long *)(uVar4 + 0x10) + 0x1ffffffffU & uVar9 + 1;
    _swift_endAccess(auStack_138);
    if (lVar8 == 1) goto LAB_1008cbb70;
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    lStack_88 = lStack_d8;
    local_90 = local_e0;
    uStack_c8 = uStack_118;
    local_d0 = local_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    _swift_beginAccess(unaff_x20 + 0x58,&local_1c0,0x21,0);
    _swift_beginAccess(unaff_x20 + 0x70,auStack_138,0x21,0);
    uVar4 = uVar3;
    (*pcVar11)(uVar3,lVar2);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbc4);
      (*pcVar11)();
    }
    uVar4 = *(ulong *)(unaff_x20 + 0x70);
    if (*(long *)(uVar4 + 0x18) < 1) {
      uVar13 = *(ulong *)(unaff_x20 + 0x68);
      FUN_1005e650c(&local_d0,&local_120);
      uVar9 = *(ulong *)(unaff_x20 + 0x58);
      uVar4 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x58) = uVar9;
      if ((uVar4 & 1) == 0) {
        FUN_1008d1a30();
        *(ulong *)(unaff_x20 + 0x58) = uVar9;
      }
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbd0);
        (*pcVar11)();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbd4);
        (*pcVar11)();
      }
      FUN_1004375f4(&local_120,uVar9 + uVar13 * 0x48 + 0x20,&DAT_100feb158,&DAT_100c82c40);
      *(ulong *)(unaff_x20 + 0x58) = uVar9;
      uVar4 = *(long *)(uVar9 + 0x10) + 0x7fffffffffffffffU & uVar13 + 1;
      *(ulong *)(unaff_x20 + 0x68) = uVar4;
      if (*(ulong *)(unaff_x20 + 0x60) == uVar4) {
        FUN_1008d1b84();
      }
    }
    else {
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar4 & 1) == 0) {
        FUN_1008d32e4();
      }
      lVar6 = *(long *)(unaff_x20 + 0x70);
      lVar7 = *(long *)(lVar6 + 0x20);
      lVar8 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbc8);
        (*pcVar11)();
      }
      lVar7 = lVar6 + lVar7 * 0x10;
      pcVar12 = *(code **)(lVar7 + 0x28);
      uVar16 = *(undefined8 *)(lVar7 + 0x30);
      if (*(long *)(lVar6 + 0x10) <= lVar8) {
        lVar8 = 0;
      }
      *(long *)(lVar6 + 0x20) = lVar8;
      if (SBORROW8(*(long *)(lVar6 + 0x18),1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1008cbbcc);
        (*pcVar11)();
      }
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + -1;
      FUN_1005e650c(&local_d0,&local_120);
      local_e0._0_3_ = (uint3)(ushort)local_e0;
      (*pcVar12)(&local_120);
      _swift_release(uVar16);
      FUN_1000fb4c4(&local_120,&DAT_100feb268,&DAT_100c828c8);
    }
    _swift_endAccess(auStack_138);
    _swift_endAccess(&local_1c0);
    FUN_1000f8cac(&local_d0,&local_120,&DAT_100feb108,&DAT_100c82c30);
    lVar8 = lStack_d8;
    if (lStack_d8 == 0) {
      FUN_1000fb4c4(&local_d0,&DAT_100feb108,&DAT_100c82c30);
    }
    else {
      uVar4 = *(ulong *)(lStack_d8 + 0x20);
      lVar6 = *(long *)(lStack_d8 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar6 + 0x10))();
      if ((uVar4 & 1) == 0) {
        uVar16 = *(undefined8 *)(lVar8 + 0x20);
        lVar6 = *(long *)(lVar8 + 0x28);
        _swift_getObjectType();
        puVar5 = &DAT_100f0e028;
        _swift_allocObject(&DAT_100f0e028,0x21,7);
        *(long *)(puVar5 + 0x10) = lVar8;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        puVar5[0x20] = 0;
        pcVar12 = *(code **)(lVar6 + 0x18);
        _swift_retain(lVar8);
        (*pcVar12)(FUN_1008d418c,puVar5,uVar16,lVar6);
        _swift_release(puVar5);
        FUN_1000fb4c4(&local_d0,&DAT_100feb108,&DAT_100c82c30);
        _swift_release(lVar8);
      }
      else {
        _swift_beginAccess(lVar8 + 0x10,auStack_150,1,0);
        uVar16 = 0;
        uVar14 = 0;
        uVar10 = 0;
        if (*(char *)(lVar8 + 0x18) == -1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(undefined1 *)(lVar8 + 0x18) = 0;
          _swift_beginAccess(lVar8 + 0x30,auStack_168,1,0);
          uVar16 = *(undefined8 *)(lVar8 + 0x30);
          uVar14 = *(undefined8 *)(lVar8 + 0x38);
          uVar10 = *(undefined8 *)(lVar8 + 0x40);
          *(undefined8 *)(lVar8 + 0x38) = 0;
          *(undefined8 *)(lVar8 + 0x40) = 0;
          *(undefined8 *)(lVar8 + 0x30) = 0;
        }
        FUN_1006486f8(uVar16,uVar14,uVar10);
        FUN_100004550(uVar16,uVar14);
        _swift_release(lVar8);
        _swift_bridgeObjectRelease(uVar10);
        FUN_1000fb4c4(&local_d0,&DAT_100feb108,&DAT_100c82c30);
      }
    }
    FUN_1005e70f4(&local_120);
    if (*(char *)(unaff_x20 + 0x98) == '\x01') {
      return;
    }
  }
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_e0 = 0;
  lStack_d8 = 1;
  _swift_endAccess(auStack_138);
LAB_1008cbb70:
  FUN_1000fb4c4(&local_120,&DAT_100feb100,&DAT_100c826d0);
  return;
}



/* Address: 0x1008cbbdc | FUN_1008cbbdc */

void FUN_1008cbbdc(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008cbc20);
  (*pcVar2)();
}



/* Address: 0x1008cbc20 | FUN_1008cbc20 */

void FUN_1008cbc20(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if (((ulong)puVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cbd6c);
    (*pcVar9)();
  }
  if (param_2 != 0) {
    FUN_1008c0f94();
    puVar3 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar7 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f0e050;
      _swift_allocObject(&DAT_100f0e050,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(undefined **)(puVar6 + 0x18) = puVar3;
      pcVar9 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar3);
      (*pcVar9)(FUN_1005dfd68,puVar6,uVar4,lVar1);
      _swift_release(puVar6);
    }
    else {
      puVar6 = puVar3;
      FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar6,lVar7);
      _swift_bridgeObjectRelease(uVar8);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  return;
}



/* Address: 0x1008cbd6c | FUN_1008cbd6c */

void FUN_1008cbd6c(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_b8 [66];
  undefined1 local_76;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar6 + 0x10);
  uVar2 = uVar5;
  (*pcVar7)();
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008cbeb0);
    (*pcVar7)();
  }
  _swift_beginAccess(unaff_x20 + 0xa0,auStack_58,0x21,0);
  _swift_beginAccess(unaff_x20 + 0xb8,auStack_70,0x21,0);
  (*pcVar7)(uVar5,lVar6);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008cbeb4);
    (*pcVar7)();
  }
  uVar2 = *(ulong *)(unaff_x20 + 0xb8);
  if (*(long *)(uVar2 + 0x18) < 1) {
    FUN_1008c8d00(param_1);
  }
  else {
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1008d32e4();
    }
    lVar3 = *(long *)(unaff_x20 + 0xb8);
    lVar4 = *(long *)(lVar3 + 0x20);
    lVar6 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008cbeb8);
      (*pcVar7)();
    }
    lVar4 = lVar3 + lVar4 * 0x10;
    pcVar7 = *(code **)(lVar4 + 0x28);
    uVar1 = *(undefined8 *)(lVar4 + 0x30);
    if (*(long *)(lVar3 + 0x10) <= lVar6) {
      lVar6 = 0;
    }
    *(long *)(lVar3 + 0x20) = lVar6;
    if (SBORROW8(*(long *)(lVar3 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008cbebc);
      (*pcVar7)();
    }
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -1;
    FUN_1005e650c(param_1,auStack_b8);
    local_76 = 0;
    (*pcVar7)(auStack_b8);
    _swift_release(uVar1);
    FUN_1000fb4c4(auStack_b8,&DAT_100feb268,&DAT_100c828c8);
  }
  _swift_endAccess(auStack_70);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1008cbebc | FUN_1008cbebc */

void FUN_1008cbebc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x10))();
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cbf28);
    (*pcVar1)();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x1008cbf28 | FUN_1008cbf28 */

void FUN_1008cbf28(void)

{
  FUN_1008cb114();
  return;
}



/* Address: 0x1008cbf3c | FUN_1008cbf3c */

void FUN_1008cbf3c(void)

{
  FUN_1008cb1dc();
  return;
}



/* Address: 0x1008cbf50 | FUN_1008cbf50 */

void FUN_1008cbf50(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  if (param_1 != 0) {
    FUN_1008d31ec(0,0,param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_retain(uVar1);
  FUN_10062cc04();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cbfb8 | thunk_FUN_1008cb498 */

void thunk_FUN_1008cb498(void)

{
  FUN_1008cb498();
  return;
}



/* Address: 0x1008cbfbc | FUN_1008cbfbc */

void FUN_1008cbfbc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  if (param_2 != 0) {
    FUN_1008d31ec(0,0,param_2);
    return;
  }
  return;
}



/* Address: 0x1008cc018 | FUN_1008cc018 */

void FUN_1008cc018(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [72];
  undefined8 local_48;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  FUN_1005e650c(param_1,auStack_90);
  local_48 = param_2;
  _swift_beginAccess(unaff_x20 + 0x78,auStack_a8,0x21,0);
  _swift_retain(param_2);
  FUN_1008c8c38(auStack_90);
  _swift_endAccess(auStack_a8);
  FUN_1000fb4c4(auStack_90,&DAT_100feb108,&DAT_100c82c30);
  return;
}



/* Address: 0x1008cc0c4 | thunk_FUN_1008cb61c */

void thunk_FUN_1008cb61c(void)

{
  FUN_1008cb61c();
  return;
}



/* Address: 0x1008cc0c8 | FUN_1008cc0c8 */

void FUN_1008cc0c8(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  return;
}



/* Address: 0x1008cc0f8 | thunk_FUN_1008cbc20 */

void thunk_FUN_1008cbc20(void)

{
  FUN_1008cbc20();
  return;
}



/* Address: 0x1008cc0fc | thunk_FUN_1008cbd6c */

void thunk_FUN_1008cbd6c(void)

{
  FUN_1008cbd6c();
  return;
}



/* Address: 0x1008cc100 | FUN_1008cc100 */

void FUN_1008cc100(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x1008cc160 | FUN_1008cc160 */

byte FUN_1008cc160(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_1008cc1a0();
  pbVar2 = param_1;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x88))();
  bVar1 = *pbVar2;
  _swift_release(param_1);
  return bVar1 & 1;
}



/* Address: 0x1008cc1a0 | FUN_1008cc1a0 */

long FUN_1008cc1a0(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_t p_Var4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  pthread_t p_Var7;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cc2c8);
      (*pcVar1)();
    }
    _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x50);
    p_Var7 = *(pthread_t *)(lVar3 + 0x50);
    _swift_retain(lVar5);
    _swift_retain(lVar3);
    p_Var4 = _pthread_self();
    iVar2 = _pthread_equal(p_Var7,p_Var4);
    if (iVar2 == 0) {
      if (DAT_100feb4e0 != -1) {
        _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
      }
      if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cc2c4);
        (*pcVar1)();
      }
      FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                    ,0xc4);
    }
    _swift_release(lVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
    FUN_1008d419c();
    _swift_allocObject();
    _swift_retain(uVar6);
    FUN_1008c0548(lVar5,uVar6,lVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar5;
    _swift_retain();
    _swift_release(uVar6);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar5;
}



/* Address: 0x1008cc2c8 | FUN_1008cc2c8 */

byte FUN_1008cc2c8(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_1008cc1a0();
  pbVar2 = param_1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))();
  bVar1 = *pbVar2;
  _swift_release(param_1);
  return bVar1 & 1;
}



/* Address: 0x1008cc308 | FUN_1008cc308 */

byte FUN_1008cc308(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  pthread_t p_Var7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  pbVar6 = *(byte **)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(pbVar6 + 0x50);
  _swift_retain(pbVar6);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var7,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008cc3e0);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar5 = pbVar6;
  (**(code **)(**(long **)(pbVar6 + 0x20) + 0x88))();
  bVar1 = *pbVar5;
  _swift_release(pbVar6);
  return bVar1 & 1;
}



/* Address: 0x1008cc3e0 | FUN_1008cc3e0 */

void FUN_1008cc3e0(byte param_1)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  byte *pbVar4;
  long unaff_x20;
  byte *pbVar5;
  pthread_t p_Var6;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  pbVar5 = *(byte **)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(pbVar5 + 0x50);
  _swift_retain(pbVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cc4bc);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar4 = pbVar5;
  (**(code **)(**(long **)(pbVar5 + 0x20) + 0x88))();
  *pbVar4 = param_1 & 1;
  _swift_release(pbVar5);
  return;
}



/* Address: 0x1008cc4bc | FUN_1008cc4bc */

undefined1  [16] FUN_1008cc4bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_1008cc308();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_1008cc4f4;
  return auVar2;
}



/* Address: 0x1008cc4f4 | FUN_1008cc4f4 */

void FUN_1008cc4f4(long param_1)

{
  FUN_1008cc3e0(*(undefined1 *)(param_1 + 8));
  return;
}



/* Address: 0x1008cc518 | FUN_1008cc518 */

byte FUN_1008cc518(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  byte *pbVar5;
  byte *pbVar6;
  long unaff_x20;
  pthread_t p_Var7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  pbVar6 = *(byte **)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(pbVar6 + 0x50);
  _swift_retain(pbVar6);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var7,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008cc5f0);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar5 = pbVar6;
  (**(code **)(**(long **)(pbVar6 + 0x28) + 0x88))();
  bVar1 = *pbVar5;
  _swift_release(pbVar6);
  return bVar1 & 1;
}



/* Address: 0x1008cc5f0 | FUN_1008cc5f0 */

void FUN_1008cc5f0(byte param_1)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  byte *pbVar4;
  long unaff_x20;
  byte *pbVar5;
  pthread_t p_Var6;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  pbVar5 = *(byte **)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(pbVar5 + 0x50);
  _swift_retain(pbVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cc6cc);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar4 = pbVar5;
  (**(code **)(**(long **)(pbVar5 + 0x28) + 0x88))();
  *pbVar4 = param_1 & 1;
  _swift_release(pbVar5);
  return;
}



/* Address: 0x1008cc6cc | FUN_1008cc6cc */

undefined1  [16] FUN_1008cc6cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_1008cc518();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_1008cc704;
  return auVar2;
}



/* Address: 0x1008cc704 | FUN_1008cc704 */

void FUN_1008cc704(long param_1)

{
  FUN_1008cc5f0(*(undefined1 *)(param_1 + 8));
  return;
}



/* Address: 0x1008cc728 | FUN_1008cc728 */

undefined8 FUN_1008cc728(long param_1)

{
  undefined8 uVar1;
  
  FUN_1008cc1a0();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _swift_retain(uVar1);
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1008cc760 | FUN_1008cc760 */

void FUN_1008cc760(void)

{
  FUN_1008d3afc();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008cc788 | FUN_1008cc788 */

undefined1  [16] FUN_1008cc788(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1008cc1a0();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10020a3f4;
  return auVar2;
}



/* Address: 0x1008cc7bc | FUN_1008cc7bc */

void FUN_1008cc7bc(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  pthread_t p_Var5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var5 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var5,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cc878);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  FUN_1008cc1a0();
  return;
}



/* Address: 0x1008cc878 | FUN_1008cc878 */

void FUN_1008cc878(void)

{
  FUN_1008d3a40();
  _swift_retain();
  return;
}



/* Address: 0x1008cc88c | FUN_1008cc88c */

undefined1 FUN_1008cc88c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x18);
}



/* Address: 0x1008cc8bc | FUN_1008cc8bc */

void FUN_1008cc8bc(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x1008cc8f8 | thunk_FUN_1005e4860 */

void thunk_FUN_1005e4860(void)

{
  FUN_1005e4860();
  return;
}



/* Address: 0x1008cc8fc | FUN_1008cc8fc */

ulong FUN_1008cc8fc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  pthread_t p_Var5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  ulong *unaff_x20;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  pthread_t p_Var14;
  ulong uVar15;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  long local_d8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar13 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 10,auStack_80,0,0);
  uVar10 = unaff_x20[10];
  p_Var14 = *(pthread_t *)(uVar10 + 0x50);
  _swift_retain(uVar10);
  p_Var5 = _pthread_self();
  iVar4 = _pthread_equal(p_Var14,p_Var5);
  if (iVar4 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce08);
      (*pcVar3)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(uVar10);
  uVar6 = 2;
  FUN_100622874(2,"NIOEmbedded/Embedded.swift",0x1a,2,0x38c,uVar13,&PTR_PTR_100f0e3b8);
  FUN_1008c7bc8("NIOEmbedded/Embedded.swift",0x1a,2,0x38c);
  if (unaff_x21 == 0) {
    _swift_release(uVar6);
LAB_1008cca84:
    uVar13 = unaff_x20[10];
    p_Var14 = *(pthread_t *)(uVar13 + 0x50);
    _swift_retain(uVar13);
    p_Var5 = _pthread_self();
    iVar4 = _pthread_equal(p_Var14,p_Var5);
    if (iVar4 == 0) {
      if (DAT_100feb4e0 != -1) {
        _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
      }
      if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce24);
        (*pcVar3)();
      }
      FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                    ,0xc4);
    }
    FUN_1008c9c70(*(undefined8 *)(uVar13 + 0x10));
    _swift_release(uVar13);
    uVar10 = unaff_x20[10];
    _swift_retain(uVar10);
    FUN_1008c9fd4();
    _swift_release();
    FUN_1008cce34();
    FUN_1008cc1a0();
    _swift_beginAccess(uVar10 + 0x58,auStack_98,0,0);
    if (((*(long *)(uVar10 + 0x60) == *(long *)(uVar10 + 0x68)) &&
        (_swift_beginAccess(uVar10 + 0xa0,auStack_188,0,0),
        *(long *)(uVar10 + 0xa8) == *(long *)(uVar10 + 0xb0))) &&
       (_swift_beginAccess(uVar10 + 0x78,auStack_1a0,0,0),
       *(long *)(uVar10 + 0x80) == *(long *)(uVar10 + 0x88))) {
      _swift_release(uVar10);
      uVar13 = 0;
    }
    else {
      _swift_beginAccess(uVar10 + 0xa0,auStack_b0,0,0);
      uVar13 = *(ulong *)(uVar10 + 0xa0);
      _swift_retain();
      FUN_1008ccf3c();
      _swift_retain();
      FUN_1008ccf3c();
      _swift_beginAccess(uVar10 + 0x78,auStack_c8,0,0);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar1 = *(long *)(uVar10 + 0x78);
      uVar15 = *(ulong *)(uVar10 + 0x80);
      uVar12 = *(long *)(uVar10 + 0x88) - uVar15;
      if (*(long *)(uVar10 + 0x88) < (long)uVar15) {
        uVar12 = uVar12 + *(long *)(lVar1 + 0x10);
      }
      if (uVar12 == 0) {
        _swift_release(uVar10);
      }
      else {
        _swift_retain(lVar1);
        FUN_1008d1370(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce28);
          (*pcVar3)();
        }
        if (uVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce2c);
          (*pcVar3)();
        }
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce30);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(lVar1 + 0x10);
        do {
          uVar15 = uVar15 & 0xffffffff;
          if (uVar11 <= uVar15) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ccde8);
            (*pcVar3)();
          }
          FUN_1000f8cac(lVar1 + 0x20 + uVar15 * 0x50,&stack0xfffffffffffffee0,&DAT_100feb100,
                        &DAT_100c826d0);
          if (local_d8 == 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008cce34);
            (*pcVar3)();
          }
          _swift_release();
          uVar2 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
            FUN_1008d1370(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
          *(ulong *)(puVar7 + uVar2 * 0x48 + 0x28) = uStack_118;
          *(ulong **)(puVar7 + uVar2 * 0x48 + 0x20) = unaff_x20;
          *(undefined2 *)(puVar7 + uVar2 * 0x48 + 0x60) = local_e0;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x48) = uStack_f8;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x40) = local_100;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x58) = uStack_e8;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x50) = local_f0;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x38) = uStack_108;
          *(undefined8 *)(puVar7 + uVar2 * 0x48 + 0x30) = local_110;
          uVar15 = *(long *)(lVar1 + 0x10) - 1U & uVar15 + 1;
          if (uVar15 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ccdec);
            (*pcVar3)();
          }
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        _swift_release(uVar10);
        _swift_release(lVar1);
      }
    }
  }
  else {
    _swift_release(uVar6);
    _swift_errorRetain();
    puVar7 = &DAT_100feb0c8;
    FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
    puVar8 = &stack0xfffffffffffffee0;
    _swift_dynamicCast(puVar8,&stack0xfffffffffffffe90,puVar7,&DAT_100eeb710,0);
    if (((ulong)puVar8 & 1) != 0) {
      _swift_errorRelease();
      uVar13 = uStack_118 & 0xff;
      puVar9 = unaff_x20;
      thunk_FUN_10061dfe8(unaff_x20,uVar13,3,3);
      if ((((ulong)puVar9 & 1) != 0) && ((param_1 & 1) != 0)) {
        FUN_10061e298(unaff_x20,uVar13);
        _swift_errorRelease(unaff_x21);
        goto LAB_1008cca84;
      }
      FUN_1008c0f94();
      _swift_allocError(&DAT_100eeb710,puVar9,0,0);
      *puVar9 = (ulong)unaff_x20;
      *(undefined1 *)(puVar9 + 1) = (undefined1)uStack_118;
      _swift_willThrow();
    }
    _swift_errorRelease(unaff_x21);
  }
  return uVar13;
}


