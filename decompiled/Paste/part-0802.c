/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008cce34 | FUN_1008cce34 */

void FUN_1008cce34(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  pthread_t p_Var7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ccf3c);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  lVar6 = *(long *)(lVar5 + 0x48);
  _swift_errorRetain(lVar6);
  _swift_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x48) = 0;
    _swift_retain(lVar5);
    _swift_errorRelease(uVar4);
    _swift_release(lVar5);
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1008ccf3c | FUN_1008ccf3c */

undefined * FUN_1008ccf3c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68 [4];
  undefined *local_48;
  
  puVar3 = (undefined *)(param_3 - param_2);
  if (param_3 < param_2) {
    puVar3 = puVar3 + *(long *)(param_1 + 0x10);
  }
  if (puVar3 == (undefined *)0x0) {
    _swift_release();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar2 = puVar3;
    FUN_1008d12c0(puVar3,0);
    FUN_1008d36a4(local_68,puVar2 + 0x20,puVar3,param_1,param_2,param_3);
    _swift_release(local_68[0]);
    _swift_release(param_1);
    if (local_48 != puVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ccfc0);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Address: 0x1008ccfe8 | FUN_1008ccfe8 */

undefined8 FUN_1008ccfe8(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  pthread_t p_Var6;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd0b8);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  uVar4 = 0;
  FUN_1008cc8fc(0);
  if (unaff_x21 != 0) {
    uVar4 = extraout_x8;
  }
  return uVar4;
}



/* Address: 0x1008cd0b8 | FUN_1008cd0b8 */

undefined8 FUN_1008cd0b8(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x30);
}



/* Address: 0x1008cd0ec | FUN_1008cd0ec */

void FUN_1008cd0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  return;
}



/* Address: 0x1008cd148 | FUN_1008cd148 */

void FUN_1008cd148(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_28,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008cd17c | FUN_1008cd17c */

void FUN_1008cd17c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008cd1c0 | FUN_1008cd1c0 */

undefined1  [16] FUN_1008cd1c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x50,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1008cd1f0 | FUN_1008cd1f0 */

undefined8 FUN_1008cd1f0(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd2e4);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  lVar7 = *(long *)(lVar4 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd2c4);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  FUN_1005d84e8(uVar5);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar4);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd2c8);
  (*pcVar1)();
}



/* Address: 0x1008cd2e4 | FUN_1008cd2e4 */

void FUN_1008cd2e4(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd3f0);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  lVar7 = *(long *)(lVar4 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd3d0);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar5);
  *(undefined8 *)(lVar7 + 0x10) = param_1;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
  FUN_1005d8534(param_1);
  if (iVar2 == 0) {
    _swift_release(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd3d4);
  (*pcVar1)();
}



/* Address: 0x1008cd3f0 | FUN_1008cd3f0 */

undefined1  [16] FUN_1008cd3f0(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1008cd1f0();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1008cd424;
  return auVar2;
}



/* Address: 0x1008cd424 | FUN_1008cd424 */

void FUN_1008cd424(undefined8 param_1,undefined8 param_2)

{
  FUN_1008cd670(param_1,param_2,FUN_1008cd2e4);
  return;
}



/* Address: 0x1008cd430 | FUN_1008cd430 */

undefined8 FUN_1008cd430(void)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd524);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  lVar7 = *(long *)(lVar4 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd504);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  FUN_1005d84e8(uVar5);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar4);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd508);
  (*pcVar1)();
}



/* Address: 0x1008cd524 | FUN_1008cd524 */

void FUN_1008cd524(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd630);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  lVar7 = *(long *)(lVar4 + 0xc0);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd610);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar5);
  *(undefined8 *)(lVar7 + 0x18) = param_1;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
  FUN_1005d8534(param_1);
  if (iVar2 == 0) {
    _swift_release(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd614);
  (*pcVar1)();
}



/* Address: 0x1008cd630 | FUN_1008cd630 */

undefined1  [16] FUN_1008cd630(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1008cd430();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1008cd664;
  return auVar2;
}



/* Address: 0x1008cd664 | FUN_1008cd664 */

void FUN_1008cd664(undefined8 param_1,undefined8 param_2)

{
  FUN_1008cd670(param_1,param_2,FUN_1008cd524);
  return;
}



/* Address: 0x1008cd670 | FUN_1008cd670 */

void FUN_1008cd670(undefined8 *param_1,uint param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    FUN_1005d84e8(uVar1);
    (*param_3)(uVar1);
    FUN_1005d8534(uVar1);
    return;
  }
  (*param_3)(uVar1);
  return;
}



/* Address: 0x1008cd6c8 | FUN_1008cd6c8 */

void FUN_1008cd6c8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008cd6ec | FUN_1008cd6ec */

void FUN_1008cd6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long unaff_x20;
  long lVar4;
  pthread_t p_Var5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0,0);
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cd7f8);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  FUN_1008cc1a0();
  _swift_beginAccess(lVar4 + 0x58,auStack_70,0x21,0);
  FUN_1008cd7f8(param_1,lVar4 + 0x58,param_3);
  _swift_endAccess(auStack_70);
  _swift_release(lVar4);
  return;
}



/* Address: 0x1008cd7f8 | FUN_1008cd7f8 */

void FUN_1008cd7f8(undefined8 param_1,long param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  undefined7 extraout_var;
  pthread_t p_Var3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  pthread_t p_Var11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_f0;
  undefined8 local_e8;
  long alStack_e0 [3];
  long local_c8;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  local_e8 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_f0 = CONCAT71(extraout_var,OVar1.value);
  lVar13 = *(long *)(local_f0 + -8);
  lVar12 = (long)&local_f0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_3 + -8);
  lVar14 = lVar12 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  p_Var11 = *(pthread_t *)(lVar15 + 0x50);
  _swift_retain(lVar15);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var11,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cdb30);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar15);
  if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
    pcVar9 = *(code **)(lVar10 + 0x38);
    uVar8 = 1;
    uVar7 = local_e8;
  }
  else {
    FUN_1008bc43c(auStack_c0);
    lVar15 = *(long *)(unaff_x20 + 0x50);
    p_Var11 = *(pthread_t *)(lVar15 + 0x50);
    _swift_retain(lVar15);
    p_Var3 = _pthread_self();
    iVar2 = _pthread_equal(p_Var11,p_Var3);
    if (iVar2 == 0) {
      if (DAT_100feb4e0 != -1) {
        _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
      }
      if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cdb4c);
        (*pcVar9)();
      }
      FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                    ,0xc4);
    }
    _swift_release(lVar15);
    FUN_1008cc1a0();
    lVar4 = lVar15;
    FUN_1008d419c();
    FUN_10061d918(lVar12,auStack_c0,param_3,lVar4,param_3,&PTR_PTR_100f0e2b0);
    _swift_release(lVar15);
    lVar15 = lVar12;
    (**(code **)(lVar10 + 0x30))(lVar12,1,param_3);
    if ((int)lVar15 == 1) {
      (**(code **)(lVar13 + 8))(lVar12,local_f0);
      lVar10 = *(long *)(unaff_x20 + 0x50);
      p_Var11 = *(pthread_t *)(lVar10 + 0x50);
      _swift_retain(lVar10);
      p_Var3 = _pthread_self();
      iVar2 = _pthread_equal(p_Var11,p_Var3);
      if (iVar2 == 0) {
        if (DAT_100feb4e0 != -1) {
          _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
        }
        if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cdb68);
          (*pcVar9)();
        }
        FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                      ,0xc4);
      }
      _swift_release(lVar10);
      FUN_1008cc1a0();
      FUN_1008bfca0(alStack_e0,PTR___type_metadata_for_Any_100eae0c0 + 8);
      _swift_release(lVar10);
      if (local_c8 != 0) {
        plVar5 = alStack_e0;
        FUN_100004640(plVar5,local_c8);
        _swift_getDynamicType();
        plVar6 = alStack_e0;
        FUN_100004594();
        FUN_1008d41bc();
        _swift_allocError(&DAT_100f0e638,plVar6,0,0);
        *plVar6 = param_3;
        plVar6[1] = (long)plVar5;
        _swift_willThrow();
        FUN_1005e70f4(auStack_c0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cdb6c);
      (*pcVar9)();
    }
    FUN_1005e70f4(auStack_c0);
    pcVar9 = *(code **)(lVar10 + 0x20);
    (*pcVar9)(lVar14,lVar12,param_3);
    uVar7 = local_e8;
    (*pcVar9)(local_e8,lVar14,param_3);
    pcVar9 = *(code **)(lVar10 + 0x38);
    uVar8 = 0;
  }
  (*pcVar9)(uVar7,uVar8,1,param_3);
  return;
}



/* Address: 0x1008cdb6c | FUN_1008cdb6c */

void FUN_1008cdb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long unaff_x20;
  long lVar4;
  pthread_t p_Var5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0,0);
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdc78);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  FUN_1008cc1a0();
  _swift_beginAccess(lVar4 + 0xa0,auStack_70,0x21,0);
  FUN_1008cd7f8(param_1,lVar4 + 0xa0,param_3);
  _swift_endAccess(auStack_70);
  _swift_release(lVar4);
  return;
}



/* Address: 0x1008cdc78 | FUN_1008cdc78 */

void FUN_1008cdc78(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(param_2 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdef8);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdf14);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdf34);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x10))(auStack_d0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  _swift_retain(lVar5);
  FUN_10065b2f8(auStack_b0,auStack_d0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2);
  FUN_10062cc34(auStack_b0,lVar5);
  _swift_release(lVar5);
  FUN_1005e70f4(auStack_b0);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar4 + 0x50);
  _swift_retain(lVar4);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdf30);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar4);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    FUN_10062cc80();
    _swift_release();
    FUN_1008cce34();
    if (unaff_x21 == 0) {
      FUN_1008cc1a0();
      _swift_beginAccess(lVar4 + 0xa0,auStack_b0,0,0);
      lVar5 = *(long *)(lVar4 + 0xa8);
      lVar7 = *(long *)(lVar4 + 0xb0);
      _swift_release(lVar4);
      if (lVar5 != lVar7) {
        lVar4 = *(long *)(unaff_x20 + 0x10);
        _swift_beginAccess(lVar4 + 0xa0,auStack_c8,0,0);
        _swift_retain(*(undefined8 *)(lVar4 + 0xa0));
        FUN_1008ccf3c();
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cdf38);
  (*pcVar1)();
}



/* Address: 0x1008cdf38 | FUN_1008cdf38 */

void FUN_1008cdf38(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_t p_Var4;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  pthread_t p_Var6;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var4 = _pthread_self();
  iVar3 = _pthread_equal(p_Var6,p_Var4);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ce0ac);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  FUN_1008ce0ac(param_1,param_2);
  FUN_1008c7bfc("NIOEmbedded/Embedded.swift",0x1a,2,0x41a);
  _swift_release();
  if (unaff_x21 == 0) {
    FUN_1008cc1a0();
    _swift_beginAccess(param_1 + 0x58,auStack_70,0,0);
    lVar5 = *(long *)(param_1 + 0x60);
    lVar1 = *(long *)(param_1 + 0x68);
    _swift_release(param_1);
    if (lVar5 != lVar1) {
      lVar5 = *(long *)(unaff_x20 + 0x10);
      _swift_beginAccess(lVar5 + 0x58,auStack_88,0,0);
      _swift_retain(*(undefined8 *)(lVar5 + 0x58));
      FUN_1008ccf3c();
    }
  }
  return;
}



/* Address: 0x1008ce0ac | FUN_1008ce0ac */

void FUN_1008ce0ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1008cfdac(param_1,param_2,FUN_10062ceb8);
  return;
}



/* Address: 0x1008ce0b8 | FUN_1008ce0b8 */

long FUN_1008ce0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_t p_Var4;
  long unaff_x20;
  long lVar5;
  pthread_t p_Var6;
  undefined1 auStack_58 [24];
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 != 0) {
    puVar3 = &DAT_100feb4f0;
    FUN_1000f7830(&DAT_100feb4f0,&DAT_100c82c60);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(long *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
  }
  _swift_allocObject();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_3);
  FUN_1008ce260(puVar3,param_3);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(unaff_x20);
  _swift_retain(lVar5);
  p_Var4 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var4);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ce214);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(param_3);
  _swift_unknownObjectRelease(param_1);
  _swift_release(unaff_x20);
  _swift_release(lVar5);
  return unaff_x20;
}



/* Address: 0x1008ce214 | FUN_1008ce214 */

undefined8 FUN_1008ce214(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1008ce260(param_1,param_2);
  return unaff_x20;
}



/* Address: 0x1008ce260 | FUN_1008ce260 */

/* WARNING: Removing unreachable block (ram,0x0001008ce488) */
/* WARNING: Removing unreachable block (ram,0x0001008ce468) */

void FUN_1008ce260(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  pthread_t p_Var5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  pthread_t p_Var9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auStack_68 [24];
  
  uVar10 = *unaff_x20;
  unaff_x20[2] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 1;
  unaff_x20[4] = PTR___swiftEmptyArrayStorage_100eae0d8;
  unaff_x20[5] = 0;
  lVar8 = param_1;
  lVar6 = param_2;
  FUN_100611728();
  unaff_x20[6] = lVar8;
  unaff_x20[7] = lVar6;
  unaff_x20[8] = param_3;
  unaff_x20[9] = param_4;
  FUN_1008d41fc();
  _swift_allocObject();
  FUN_1008c90d8();
  plVar11 = unaff_x20 + 10;
  *plVar11 = lVar8;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  _swift_beginAccess(plVar11,auStack_68,1,0);
  *plVar11 = param_2;
  _swift_retain(param_2);
  _swift_release(lVar8);
  FUN_100631d88(0);
  _swift_allocObject();
  puVar3 = unaff_x20;
  _swift_retain();
  FUN_10062b720();
  uVar7 = unaff_x20[5];
  unaff_x20[5] = puVar3;
  _swift_release(uVar7);
  lVar8 = unaff_x20[5];
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ce468);
    (*pcVar1)();
  }
  _swift_retain(lVar8);
  FUN_100632174(param_1,1,0x8000000000000000,lVar8);
  _swift_bridgeObjectRelease(param_1);
  _swift_release(lVar8);
  pcVar4 = "NIOEmbedded/Embedded.swift";
  FUN_100622844("NIOEmbedded/Embedded.swift",0x1a,2,0x454,uVar10,&PTR_PTR_100f0e3b8);
  FUN_1008c7bc8("NIOEmbedded/Embedded.swift",0x1a,2,0x454);
  _swift_release(pcVar4);
  lVar8 = *plVar11;
  p_Var9 = *(pthread_t *)(lVar8 + 0x50);
  _swift_retain(lVar8);
  p_Var5 = _pthread_self();
  iVar2 = _pthread_equal(p_Var9,p_Var5);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ce464);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(param_2);
  _swift_release(lVar8);
  return;
}



/* Address: 0x1008ce4a8 | FUN_1008ce4a8 */

undefined8
FUN_1008ce4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  pthread_t p_Var7;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ce628);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ce644);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_retain(uVar6);
  FUN_1008ce644(param_1,param_2,param_3,param_4);
  uVar4 = 0;
  FUN_1008d348c(0,0);
  FUN_1002ec258(0,0);
  _swift_release(uVar6);
  return uVar4;
}



/* Address: 0x1008ce644 | FUN_1008ce644 */

void FUN_1008ce644(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  pthread_t p_Var5;
  byte *pbVar6;
  long lVar7;
  long unaff_x20;
  byte *pbVar8;
  pthread_t p_Var9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  long local_98;
  long lStack_90;
  undefined1 auStack_78 [24];
  undefined1 local_51;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_98 = *(long *)(lVar4 + -8);
  puVar11 = auStack_a0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_3 + -8);
  lVar7 = (long)puVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar4;
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  pbVar8 = *(byte **)(unaff_x20 + 0x50);
  p_Var9 = *(pthread_t *)(pbVar8 + 0x50);
  _swift_retain(pbVar8);
  p_Var5 = _pthread_self();
  iVar3 = _pthread_equal(p_Var9,p_Var5);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ce87c);
      (*pcVar2)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar6 = pbVar8;
  (**(code **)(**(long **)(pbVar8 + 0x10) + 0x88))();
  bVar1 = *pbVar6;
  _swift_release();
  if (((bVar1 & 1) == 0) && (FUN_1008cc518(), ((ulong)pbVar8 & 1) == 0)) {
    FUN_1008c0f94();
    _swift_allocError(&DAT_100eeb710,pbVar8,0,0);
    pbVar8[0] = 3;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 3;
    _swift_willThrow();
  }
  else {
    FUN_1008ce87c(param_1,param_2,param_3,param_4);
    (**(code **)(lVar10 + 0x10))(lVar7,param_1,param_3);
    iVar3 = (int)lVar7;
    _swift_dynamicCast();
    lVar4 = lStack_90;
    if (iVar3 != 0) {
      (**(code **)(local_98 + 0x10))(puVar11,param_2,lStack_90);
      _swift_dynamicCast(&local_51,puVar11,lVar4,PTR___type_metadata_for_Swift_Bool_100eac570,7);
      FUN_1008cc3e0(local_51);
    }
  }
  return;
}



/* Address: 0x1008ce87c | FUN_1008ce87c */

void FUN_1008ce87c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  long local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_80,0,0);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(ulong *)(lVar8 + 0x10);
  _swift_bridgeObjectRetain(lVar8);
  if (uVar6 != 0) {
    uVar7 = 0;
    lVar4 = 0x48;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ceb64);
        (*pcVar1)();
      }
      FUN_1000f8cac(lVar8 + lVar4 + -0x28,&local_c8,&DAT_100feb110,&DAT_100c826e0);
      puVar2 = &local_c8;
      FUN_1008bd5dc(puVar2,param_3,param_4);
      FUN_1000fb4c4(&local_c8,&DAT_100feb110,&DAT_100c826e0);
      if (((ulong)puVar2 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar8);
        lStack_b0 = param_3;
        local_a8 = param_4;
        FUN_10000cbb0(&local_c8);
        (**(code **)(*(long *)(param_3 + -8) + 0x10))();
        lVar8 = 0;
        _swift_getAssociatedTypeWitness
                  (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
        local_e0 = lVar8;
        FUN_10000cbb0(auStack_f8);
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))();
        _swift_beginAccess(unaff_x20 + 0x20,auStack_118,0x21,0);
        uVar5 = *(ulong *)(unaff_x20 + 0x20);
        uVar6 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x20) = uVar5;
        if ((uVar6 & 1) == 0) {
          FUN_1008d103c();
          *(ulong *)(unaff_x20 + 0x20) = uVar5;
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cebc0);
          (*pcVar1)();
        }
        lVar4 = uVar5 + lVar4;
        FUN_100004594(lVar4 + -0x28);
        FUN_100076508(&local_c8,lVar4 + -0x28);
        FUN_100004594(lVar4);
        FUN_100011080(auStack_f8,lVar4);
        *(ulong *)(unaff_x20 + 0x20) = uVar5;
        puVar3 = auStack_118;
        goto LAB_1008ceb3c;
      }
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x48;
    } while (uVar6 != uVar7);
  }
  _swift_bridgeObjectRelease(lVar8);
  local_e0 = param_3;
  local_d8 = param_4;
  FUN_10000cbb0(auStack_f8);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_100 = lVar8;
  FUN_10000cbb0(auStack_118);
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))();
  FUN_100076508(auStack_f8,&local_c8);
  FUN_100011080(auStack_118,&uStack_a0);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_130,0x21,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  uVar6 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x20) = uVar5;
  uVar7 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_1008d1174(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    *(ulong *)(unaff_x20 + 0x20) = uVar7;
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar5 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1008d1174(uVar5,uVar6 + 1,1,uVar7);
  }
  *(ulong *)(uVar5 + 0x10) = uVar6 + 1;
  lVar8 = uVar5 + uVar6 * 0x48;
  *(undefined8 *)(lVar8 + 0x28) = uStack_c0;
  *(undefined8 *)(lVar8 + 0x20) = local_c8;
  *(undefined8 *)(lVar8 + 0x60) = local_88;
  *(undefined8 *)(lVar8 + 0x48) = uStack_a0;
  *(undefined8 *)(lVar8 + 0x40) = local_a8;
  *(undefined8 *)(lVar8 + 0x58) = uStack_90;
  *(undefined8 *)(lVar8 + 0x50) = uStack_98;
  *(long *)(lVar8 + 0x38) = lStack_b0;
  *(undefined8 *)(lVar8 + 0x30) = local_b8;
  *(ulong *)(unaff_x20 + 0x20) = uVar5;
  puVar3 = auStack_130;
LAB_1008ceb3c:
  _swift_endAccess(puVar3);
  return;
}



/* Address: 0x1008cebc0 | FUN_1008cebc0 */

code * FUN_1008cebc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  pthread_t p_Var7;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ced50);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ced6c);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  local_80 = param_2;
  uStack_78 = param_3;
  FUN_1008d41fc();
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  _swift_retain(uVar6);
  pcVar1 = FUN_1008d421c;
  FUN_1006413ec(FUN_1008d421c,auStack_90,lVar5,uVar4,&PTR_PTR_100f0e1a8);
  _swift_release(uVar6);
  return pcVar1;
}



/* Address: 0x1008ced6c | FUN_1008ced6c */

void FUN_1008ced6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  StaticString file;
  __uint64 line;
  bool bVar1;
  Optional OVar2;
  int iVar3;
  char *pcVar4;
  undefined7 extraout_var;
  pthread_t p_Var5;
  byte *pbVar6;
  long lVar7;
  undefined **ppuVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  char *pcVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long unaff_x20;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  pthread_t p_Var21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 uStack_190;
  undefined4 auStack_188 [2];
  long local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  StaticString local_f0;
  __uint64 _Stack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcVar4 = (char *)0xff;
  local_158 = param_4;
  local_148 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_178 = (undefined *)CONCAT71(extraout_var,OVar2.value);
  local_180 = *(long *)(local_178 + -8);
  local_160 = (long)&local_180 - (*(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_170 = *(long *)(pcVar4 + -8);
  local_168 = local_160 - (*(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(param_3 + -8);
  uVar13 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = local_168 - uVar13;
  lVar23 = lVar19 - uVar13;
  lVar18 = lVar23 - uVar13;
  local_150 = pcVar4;
  _swift_beginAccess(unaff_x20 + 0x50,auStack_80,0,0);
  pbVar16 = *(byte **)(unaff_x20 + 0x50);
  p_Var21 = *(pthread_t *)(pbVar16 + 0x50);
  _swift_retain(pbVar16);
  p_Var5 = _pthread_self();
  iVar3 = _pthread_equal(p_Var21,p_Var5);
  if (iVar3 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf250);
      (*pcVar15)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release();
  FUN_1008cc1a0();
  pbVar6 = pbVar16;
  (**(code **)(**(long **)(pbVar16 + 0x10) + 0x88))();
  bVar12 = *pbVar6;
  _swift_release();
  if (((bVar12 & 1) == 0) && (FUN_1008cc518(), ((ulong)pbVar16 & 1) == 0)) {
    FUN_1008c0f94();
    _swift_allocError(&DAT_100eeb710,pbVar16,0,0);
    pbVar16[0] = 3;
    pbVar16[1] = 0;
    pbVar16[2] = 0;
    pbVar16[3] = 0;
    pbVar16[4] = 0;
    pbVar16[5] = 0;
    pbVar16[6] = 0;
    pbVar16[7] = 0;
    pbVar16[8] = 3;
    _swift_willThrow();
    return;
  }
  pcVar15 = *(code **)(lVar14 + 0x10);
  lVar14 = lVar18;
  (*pcVar15)(lVar18,param_2,param_3);
  iVar3 = (int)lVar14;
  _swift_dynamicCast();
  if (iVar3 == 0) {
    (*pcVar15)(lVar23,param_2,param_3);
    iVar3 = (int)lVar23;
    _swift_dynamicCast();
    if (iVar3 == 0) {
      (*pcVar15)(lVar19,param_2,param_3);
      puVar24 = &DAT_100eecb58;
      _swift_dynamicCast();
      lVar23 = local_160;
      if ((int)lVar19 == 0) {
        FUN_1008cf324(local_160);
        pcVar4 = local_150;
        lVar19 = local_170;
        lVar7 = lVar23;
        pcVar11 = local_150;
        (**(code **)(local_170 + 0x30))(lVar23,1);
        lVar14 = local_168;
        if ((int)lVar7 != 1) {
          pcVar15 = *(code **)(lVar19 + 0x20);
          (*pcVar15)(local_168,lVar23,pcVar4);
          (*pcVar15)(local_148,lVar14,pcVar4);
          return;
        }
        _Var9.unknown = local_178;
        (**(code **)(local_180 + 8))(lVar23);
        local_f0.unknown = (undefined *)0x0;
        _Stack_e8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x17,_Var9);
        SVar25.bridgeObject = &DAT_e700000000000000;
        SVar25.str = (char *)0x206e6f6974706f;
        SVar28.bridgeObject = puVar24;
        SVar28.str = pcVar11;
        Swift::String::append(SVar25,SVar28);
        Swift::DefaultStringInterpolation::_appendInterpolation(param_2,param_3);
        SVar26.bridgeObject = (void *)0xee00646574726f70;
        SVar26.str = (char *)0x70757320746f6e20;
        SVar29.bridgeObject = puVar24;
        SVar29.str = pcVar11;
        Swift::String::append(SVar26,SVar29);
        line = _Stack_e8;
        file.unknown = local_f0.unknown;
        *(undefined4 *)(lVar18 + -8) = 0;
        *(undefined8 *)(lVar18 + -0x10) = 0x48e;
        SVar27.bridgeObject = (void *)0x2;
        SVar27.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar27,file,line,0xdb46b0);
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf324);
        (*pcVar15)();
      }
      FUN_1008cc1a0();
      _swift_beginAccess(lVar19 + 0x78,auStack_98,0,0);
      lVar23 = *(long *)(lVar19 + 0x78);
      uVar13 = *(ulong *)(lVar19 + 0x80);
      uVar22 = *(ulong *)(lVar19 + 0x88);
      _swift_retain(lVar23);
      _swift_release(lVar19);
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf254);
        (*pcVar15)();
      }
      if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf258);
        (*pcVar15)();
      }
      if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf25c);
        (*pcVar15)();
      }
      if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf260);
        (*pcVar15)();
      }
      _swift_retain(lVar23);
      if (uVar13 == uVar22) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar24 = (undefined *)0x0;
        uVar20 = uVar13;
        do {
          uVar17 = *(ulong *)(lVar23 + 0x10);
          if (uVar17 <= uVar20) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf22c);
            (*pcVar15)();
          }
          ppuVar8 = &local_140;
          FUN_1000f8cac(lVar23 + 0x20 + uVar20 * 0x50,ppuVar8,&DAT_100feb100,&DAT_100c826d0);
          if (lStack_f8 == 1) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf264);
            (*pcVar15)();
          }
          uStack_c8 = uStack_118;
          local_d0 = local_120;
          uStack_b8 = uStack_108;
          uStack_c0 = local_110;
          lStack_a8 = lStack_f8;
          local_b0 = local_100;
          _Stack_e8 = uStack_138;
          local_f0.unknown = local_140;
          uStack_d8 = uStack_128;
          uStack_e0 = local_130;
          uVar20 = uVar17 + 0x1ffffffff & uVar20 + 1;
          if (uVar20 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf230);
            (*pcVar15)();
          }
          FUN_10065b5f8();
          _swift_release();
          uVar17 = (ulong)(uint)((int)((ulong)ppuVar8 >> 0x20) - (int)ppuVar8);
          bVar1 = SCARRY8((long)puVar24,uVar17);
          puVar24 = puVar24 + uVar17;
          if (bVar1) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008cf234);
            (*pcVar15)();
          }
          FUN_1000fb4c4(&local_f0,&DAT_100feb108,&DAT_100c82c30);
        } while ((uVar20 != uVar22) || (uVar22 < uVar13 == (long)uVar13 <= (long)uVar20));
      }
      _swift_release_n(lVar23,2);
      puVar10 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      local_f0.unknown = puVar24;
      goto LAB_1008cef98;
    }
    FUN_1008cc308();
    bVar12 = (byte)iVar3 & 1;
  }
  else {
    bVar12 = 1;
  }
  local_f0.unknown._0_1_ = bVar12;
  puVar10 = PTR___type_metadata_for_Swift_Bool_100eac570;
LAB_1008cef98:
  _swift_dynamicCast(local_148,&local_f0,puVar10,local_150,7);
  return;
}



/* Address: 0x1008cf324 | FUN_1008cf324 */

/* WARNING: Removing unreachable block (ram,0x0001008cf4f0) */

void FUN_1008cf324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d8,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar8 = *(ulong *)(lVar6 + 0x10);
  _swift_bridgeObjectRetain(lVar6);
  if (uVar8 != 0) {
    uVar5 = 0;
    lVar7 = lVar6 + 0x20;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cf4f0);
        (*pcVar1)();
      }
      FUN_1000f8cac(lVar7,&local_120,&DAT_100feb110,&DAT_100c826e0);
      uStack_148 = uStack_f8;
      local_150 = uStack_100;
      uStack_138 = uStack_e8;
      uStack_140 = local_f0;
      local_130 = local_e0;
      uStack_168 = uStack_118;
      local_170 = local_120;
      uStack_158 = uStack_108;
      uStack_160 = local_110;
      puVar2 = &local_170;
      FUN_1008bd5dc(puVar2,param_3,param_4);
      if (((ulong)puVar2 & 1) != 0) {
        _swift_bridgeObjectRelease(lVar6);
        uStack_98 = uStack_148;
        local_a0 = local_150;
        uStack_88 = uStack_138;
        uStack_90 = uStack_140;
        local_80 = local_130;
        uStack_b8 = uStack_168;
        local_c0 = local_170;
        uStack_a8 = uStack_158;
        uStack_b0 = uStack_160;
        FUN_100011080(&uStack_98,&local_120);
        FUN_100004594(&local_c0);
        goto LAB_1008cf458;
      }
      uVar5 = uVar5 + 1;
      FUN_1000fb4c4(&local_170,&DAT_100feb110,&DAT_100c826e0);
      lVar7 = lVar7 + 0x48;
    } while (uVar8 != uVar5);
  }
  _swift_bridgeObjectRelease(lVar6);
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
LAB_1008cf458:
  puVar3 = &DAT_100feb118;
  FUN_1000f7830(&DAT_100feb118,&DAT_100c82c70);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar4 = param_1;
  _swift_dynamicCast(param_1,&local_120,puVar3,lVar6,6);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,(uint)uVar4 ^ 1,1,lVar6);
  return;
}



/* Address: 0x1008cf50c | FUN_1008cf50c */

void FUN_1008cf50c(ulong param_1,undefined *param_2)

{
  int iVar1;
  pthread_t p_Var2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  pthread_t p_Var12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x50);
  p_Var12 = *(pthread_t *)(lVar10 + 0x50);
  _swift_retain(lVar10);
  p_Var2 = _pthread_self();
  iVar1 = _pthread_equal(p_Var12,p_Var2);
  if (iVar1 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cf930);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar10);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar3 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f0e1a8;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    puVar3[0x18] = 0xff;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    _swift_retain(uVar11);
  }
  puVar4 = &DAT_100f0e078;
  _swift_allocObject(&DAT_100f0e078,0x20,7);
  *(undefined **)(puVar4 + 0x10) = unaff_x20;
  *(ulong *)(puVar4 + 0x18) = param_1;
  puVar5 = &DAT_100f0e0a0;
  _swift_allocObject(&DAT_100f0e0a0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008d4248;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100f0e0c8;
  _swift_allocObject(&DAT_100f0e0c8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(code **)(puVar6 + 0x18) = FUN_1000e8174;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar7 = *(ulong *)(puVar3 + 0x20);
  lVar10 = *(long *)(puVar3 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar10 + 0x10);
  _swift_retain_n(param_1 & 0x3fffffffffffffff,2);
  _swift_retain_n(puVar3,3);
  _swift_retain_n(puVar5,2);
  _swift_retain_n();
  _swift_retain(param_2);
  _swift_retain(puVar4);
  uVar8 = uVar7;
  (*pcVar9)(uVar7,lVar10);
  if ((uVar8 & 1) == 0) {
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release();
    _swift_release(puVar4);
    puVar4 = &DAT_100f0e0f0;
    _swift_allocObject(&DAT_100f0e0f0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_1008a8990;
    *(undefined **)(puVar4 + 0x20) = puVar6;
    pcVar9 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar3);
    _swift_retain(puVar6);
    (*pcVar9)(FUN_1008c1400,puVar4,uVar7,lVar10);
    _swift_release(puVar4);
    _swift_release_n(puVar5,2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar6);
    goto LAB_1008cf864;
  }
  _swift_beginAccess(puVar3 + 0x10,auStack_90,0,0);
  if (puVar3[0x18] == '\x01') {
LAB_1008cf808:
    _swift_release();
    _swift_release(puVar4);
    _swift_release(param_1 & 0x3fffffffffffffff);
  }
  else {
    if (puVar3[0x18] != -1) {
      _swift_retain();
      _swift_retain(param_1 & 0x3fffffffffffffff);
      FUN_1008cd2e4(param_1);
      _swift_release(puVar4);
      puVar4 = unaff_x20;
      goto LAB_1008cf808;
    }
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release();
    _swift_release(puVar4);
    _swift_beginAccess(puVar3 + 0x30,auStack_a8,0x21,0);
    FUN_10064967c(FUN_1008a8990,puVar6);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(puVar5,2);
  _swift_release_n(puVar3,2);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(0);
LAB_1008cf864:
  lVar10 = *(long *)(unaff_x20 + 0x50);
  p_Var12 = *(pthread_t *)(lVar10 + 0x50);
  _swift_retain(lVar10);
  p_Var2 = _pthread_self();
  iVar1 = _pthread_equal(p_Var12,p_Var2);
  if (iVar1 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cf94c);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cf950);
    (*pcVar9)();
  }
  _swift_retain(puVar3);
  _swift_retain(lVar10);
  FUN_100626f24(param_1,puVar3);
  _swift_release(lVar10);
  _swift_release_n(puVar3,2);
  return;
}



/* Address: 0x1008cf950 | FUN_1008cf950 */

void FUN_1008cf950(ulong param_1,undefined *param_2)

{
  int iVar1;
  pthread_t p_Var2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  pthread_t p_Var12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x50);
  p_Var12 = *(pthread_t *)(lVar10 + 0x50);
  _swift_retain(lVar10);
  p_Var2 = _pthread_self();
  iVar1 = _pthread_equal(p_Var12,p_Var2);
  if (iVar1 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cfd74);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar10);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    puVar3 = &DAT_100feb0f8;
    FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f0e1a8;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    puVar3[0x18] = 0xff;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    _swift_retain(uVar11);
  }
  puVar4 = &DAT_100f0e118;
  _swift_allocObject(&DAT_100f0e118,0x20,7);
  *(undefined **)(puVar4 + 0x10) = unaff_x20;
  *(ulong *)(puVar4 + 0x18) = param_1;
  puVar5 = &DAT_100f0e140;
  _swift_allocObject(&DAT_100f0e140,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008d4260;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100f0e168;
  _swift_allocObject(&DAT_100f0e168,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(code **)(puVar6 + 0x18) = thunk_FUN_1000e8174;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar7 = *(ulong *)(puVar3 + 0x20);
  lVar10 = *(long *)(puVar3 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar10 + 0x10);
  _swift_retain_n(param_1 & 0x3fffffffffffffff,2);
  _swift_retain_n(puVar3,3);
  _swift_retain_n(puVar5,2);
  _swift_retain_n();
  _swift_retain(param_2);
  _swift_retain(puVar4);
  uVar8 = uVar7;
  (*pcVar9)(uVar7,lVar10);
  if ((uVar8 & 1) == 0) {
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release();
    _swift_release(puVar4);
    puVar4 = &DAT_100f0e190;
    _swift_allocObject(&DAT_100f0e190,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = thunk_FUN_1008a8990;
    *(undefined **)(puVar4 + 0x20) = puVar6;
    pcVar9 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar3);
    _swift_retain(puVar6);
    (*pcVar9)(thunk_FUN_1008c1400,puVar4,uVar7,lVar10);
    _swift_release(puVar4);
    _swift_release_n(puVar5,2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar6);
    goto LAB_1008cfca8;
  }
  _swift_beginAccess(puVar3 + 0x10,auStack_90,0,0);
  if (puVar3[0x18] == '\x01') {
LAB_1008cfc4c:
    _swift_release();
    _swift_release(puVar4);
    _swift_release(param_1 & 0x3fffffffffffffff);
  }
  else {
    if (puVar3[0x18] != -1) {
      _swift_retain();
      _swift_retain(param_1 & 0x3fffffffffffffff);
      FUN_1008cd524(param_1);
      _swift_release(puVar4);
      puVar4 = unaff_x20;
      goto LAB_1008cfc4c;
    }
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release();
    _swift_release(puVar4);
    _swift_beginAccess(puVar3 + 0x30,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008a8990,puVar6);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(puVar5,2);
  _swift_release_n(puVar3,2);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(0);
LAB_1008cfca8:
  lVar10 = *(long *)(unaff_x20 + 0x50);
  p_Var12 = *(pthread_t *)(lVar10 + 0x50);
  _swift_retain(lVar10);
  p_Var2 = _pthread_self();
  iVar1 = _pthread_equal(p_Var12,p_Var2);
  if (iVar1 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cfd90);
      (*pcVar9)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1008cfd94);
    (*pcVar9)();
  }
  _swift_retain(puVar3);
  _swift_retain(lVar10);
  FUN_10062701c(param_1,puVar3);
  _swift_release(lVar10);
  _swift_release_n(puVar3,2);
  return;
}



/* Address: 0x1008cfd94 | FUN_1008cfd94 */

void FUN_1008cfd94(void)

{
  FUN_1008d0044();
  return;
}



/* Address: 0x1008cfda0 | FUN_1008cfda0 */

void FUN_1008cfda0(undefined8 param_1,undefined8 param_2)

{
  FUN_1008cfdac(param_1,param_2,FUN_10062ce90);
  return;
}



/* Address: 0x1008cfdac | FUN_1008cfdac */

undefined * FUN_1008cfdac(undefined8 param_1,long param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  pthread_t p_Var7;
  long lVar8;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(param_2 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar6 + 0x50);
  _swift_retain(lVar6);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008cfffc);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar6);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  p_Var7 = *(pthread_t *)(lVar6 + 0x50);
  _swift_retain(lVar6);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0018);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar6);
  lVar6 = *(long *)(unaff_x20 + 0x50);
  puVar4 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(long *)(puVar4 + 0x20) = lVar6;
  *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f0e1a8;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 0xff;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  p_Var7 = *(pthread_t *)(lVar6 + 0x50);
  _swift_retain_n(lVar6,2);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var7,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0034);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar6);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  if (lVar6 != 0) {
    (**(code **)(lVar8 + 0x10))(auStack_c0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
    _swift_retain(lVar6);
    FUN_10065b2f8(auStack_c0,auStack_c0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_2);
    _swift_retain(puVar4);
    (*param_3)(auStack_c0,puVar4,lVar6);
    _swift_release(lVar6);
    _swift_release(puVar4);
    FUN_1005e70f4(auStack_c0);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0038);
  (*pcVar1)();
}



/* Address: 0x1008d0038 | FUN_1008d0038 */

void FUN_1008d0038(void)

{
  FUN_1008d0044();
  return;
}



/* Address: 0x1008d0044 | FUN_1008d0044 */

void FUN_1008d0044(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  pthread_t p_Var3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  pthread_t p_Var6;
  long lVar7;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_3 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d01e4);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x50);
  p_Var6 = *(pthread_t *)(lVar5 + 0x50);
  _swift_retain(lVar5);
  p_Var3 = _pthread_self();
  iVar2 = _pthread_equal(p_Var6,p_Var3);
  if (iVar2 == 0) {
    if (DAT_100feb4e0 != -1) {
      _swift_once(&DAT_100feb4e0,FUN_1008ca61c);
    }
    if ((DAT_101058170 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0200);
      (*pcVar1)();
    }
    FUN_1008c8db8("ERROR: NIO API misuse: EmbeddedEventLoop is not thread-safe. You can only use it from the thread you created it on. This problem will be upgraded to a forced crash in future versions of SwiftNIO.\n"
                  ,0xc4);
  }
  _swift_release(lVar5);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(lVar7 + 0x10))(auStack_c0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
    _swift_retain(lVar5);
    FUN_10065b2f8(auStack_c0,auStack_c0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3);
    (*param_4)(auStack_c0,param_2,lVar5);
    _swift_release(lVar5);
    FUN_1005e70f4(auStack_c0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d0204);
  (*pcVar1)();
}



/* Address: 0x1008d0204 | FUN_1008d0204 */

void FUN_1008d0204(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008d0240 | FUN_1008d0240 */

void FUN_1008d0240(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008d0284 | thunk_FUN_1008cd1f0 */

void thunk_FUN_1008cd1f0(void)

{
  FUN_1008cd1f0();
  return;
}



/* Address: 0x1008d0288 | thunk_FUN_1008cd430 */

void thunk_FUN_1008cd430(void)

{
  FUN_1008cd430();
  return;
}



/* Address: 0x1008d028c | thunk_FUN_1008ce4a8 */

void thunk_FUN_1008ce4a8(void)

{
  FUN_1008ce4a8();
  return;
}



/* Address: 0x1008d0290 | thunk_FUN_1008cebc0 */

void thunk_FUN_1008cebc0(void)

{
  FUN_1008cebc0();
  return;
}



/* Address: 0x1008d0294 | FUN_1008d0294 */

void FUN_1008d0294(void)

{
  FUN_1008cc7bc();
  return;
}



/* Address: 0x1008d02b0 | FUN_1008d02b0 */

void FUN_1008d02b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &DAT_100f0e660;
  param_1[4] = &PTR_PTR_100f0e418;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1008d02d0 | thunk_FUN_1008cfda0 */

void thunk_FUN_1008cfda0(void)

{
  FUN_1008cfda0();
  return;
}



/* Address: 0x1008d02d4 | thunk_FUN_1008cfd94 */

void thunk_FUN_1008cfd94(void)

{
  FUN_1008cfd94();
  return;
}



/* Address: 0x1008d02d8 | thunk_FUN_1008ce0ac */

void thunk_FUN_1008ce0ac(void)

{
  FUN_1008ce0ac();
  return;
}



/* Address: 0x1008d02dc | thunk_FUN_1008d0038 */

void thunk_FUN_1008d0038(void)

{
  FUN_1008d0038();
  return;
}



/* Address: 0x1008d02e0 | FUN_1008d02e0 */

void FUN_1008d02e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f0e320);
  return;
}



/* Address: 0x1008d0308 | FUN_1008d0308 */

void FUN_1008d0308(void)

{
  FUN_1008cf50c();
  return;
}



/* Address: 0x1008d0328 | FUN_1008d0328 */

void FUN_1008d0328(void)

{
  FUN_1008cf950();
  return;
}



/* Address: 0x1008d0348 | FUN_1008d0348 */

void FUN_1008d0348(void)

{
  FUN_1008d036c();
  return;
}



/* Address: 0x1008d0354 | FUN_1008d0354 */

void FUN_1008d0354(undefined8 param_1,undefined8 param_2)

{
  FUN_1008d03c4(param_1,param_2,FUN_10062714c);
  return;
}



/* Address: 0x1008d0360 | FUN_1008d0360 */

void FUN_1008d0360(void)

{
  FUN_1008d036c();
  return;
}



/* Address: 0x1008d036c | FUN_1008d036c */

void FUN_1008d036c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1008d3a40();
  _swift_retain();
  (*param_5)(param_1,param_2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008d03b8 | FUN_1008d03b8 */

void FUN_1008d03b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1008d03c4(param_1,param_2,FUN_100627440);
  return;
}



/* Address: 0x1008d03c4 | FUN_1008d03c4 */

void FUN_1008d03c4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  FUN_1008d3a40();
  _swift_retain();
  (*param_3)();
  _swift_release(param_1);
  return;
}



/* Address: 0x1008d03f8 | FUN_1008d03f8 */

void FUN_1008d03f8(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x1008d0420 | FUN_1008d0420 */

void FUN_1008d0420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1008d3a40();
  _swift_retain();
  FUN_1006276a0(param_1,param_2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008d0468 | FUN_1008d0468 */

void FUN_1008d0468(void)

{
  FUN_1008d3afc();
  _swift_unknownObjectRetain();
  return;
}


