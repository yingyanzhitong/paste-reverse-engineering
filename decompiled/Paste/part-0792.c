/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008b7b80 | FUN_1008b7b80 */

long FUN_1008b7b80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar4;
  (*(code *)**(undefined8 **)(lVar4 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x1008b7c3c | FUN_1008b7c3c */

long FUN_1008b7c3c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10008820c();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1008b7cfc | FUN_1008b7cfc */

void FUN_1008b7cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x1008b7d28 | FUN_1008b7d28 */

undefined8 * FUN_1008b7d28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1008b7db8 | FUN_1008b7db8 */

void FUN_1008b7db8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b7dc4 | thunk_FUN_100401fac */

void thunk_FUN_100401fac(void)

{
  FUN_100401fac();
  return;
}



/* Address: 0x1008b7dc8 | FUN_1008b7dc8 */

bool FUN_1008b7dc8(void)

{
  long *unaff_x20;
  
  return *unaff_x20 != 0;
}



/* Address: 0x1008b7dd8 | FUN_1008b7dd8 */

bool FUN_1008b7dd8(long param_1)

{
  return param_1 != 0;
}



/* Address: 0x1008b7de4 | FUN_1008b7de4 */

byte FUN_1008b7de4(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  pbVar3 = *(byte **)(unaff_x20 + 0x48);
  if (pbVar3 != (byte *)0x0) {
    pcVar4 = *(code **)(**(long **)(pbVar3 + 0x18) + 0x88);
    pbVar2 = pbVar3;
    _swift_retain();
    (*pcVar4)();
    bVar1 = *pbVar2;
    _swift_release(pbVar3);
    return bVar1 & 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b7e54);
  (*pcVar4)();
}



/* Address: 0x1008b7e54 | FUN_1008b7e54 */

byte FUN_1008b7e54(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  pbVar3 = *(byte **)(unaff_x20 + 0x48);
  if (pbVar3 != (byte *)0x0) {
    pcVar4 = *(code **)(**(long **)(pbVar3 + 0x20) + 0x88);
    pbVar2 = pbVar3;
    _swift_retain();
    (*pcVar4)();
    bVar1 = *pbVar2;
    _swift_release(pbVar3);
    return bVar1 & 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b7ec4);
  (*pcVar4)();
}



/* Address: 0x1008b7ec4 | FUN_1008b7ec4 */

void FUN_1008b7ec4(byte param_1)

{
  byte *pbVar1;
  long unaff_x20;
  byte *pbVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  pbVar2 = *(byte **)(unaff_x20 + 0x48);
  if (pbVar2 != (byte *)0x0) {
    pcVar3 = *(code **)(**(long **)(pbVar2 + 0x20) + 0x88);
    pbVar1 = pbVar2;
    _swift_retain();
    (*pcVar3)();
    *pbVar1 = param_1 & 1;
    _swift_release(pbVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b7f38);
  (*pcVar3)();
}



/* Address: 0x1008b7f38 | FUN_1008b7f38 */

undefined1  [16] FUN_1008b7f38(undefined8 *param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  long unaff_x20;
  byte *pbVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  pvVar2 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xac2d);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x18) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x48,pvVar2,0,0);
  pbVar4 = *(byte **)(unaff_x20 + 0x48);
  if (pbVar4 != (byte *)0x0) {
    pcVar5 = *(code **)(**(long **)(pbVar4 + 0x20) + 0x88);
    pbVar3 = pbVar4;
    _swift_retain();
    (*pcVar5)();
    bVar1 = *pbVar3;
    _swift_release(pbVar4);
    *(byte *)((long)pvVar2 + 0x20) = bVar1 & 1;
    auVar6._8_8_ = (long)pvVar2 + 0x20;
    auVar6._0_8_ = FUN_1008b7fe0;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1008b7fe0);
  (*pcVar5)();
}



/* Address: 0x1008b7fe0 | FUN_1008b7fe0 */

void FUN_1008b7fe0(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 *puVar5;
  
  pvVar4 = (void *)*param_1;
  puVar5 = *(undefined1 **)(*(long *)((long)pvVar4 + 0x18) + 0x48);
  if ((param_2 & 1) == 0) {
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b8054);
      (*pcVar2)();
    }
  }
  else if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b800c);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)((long)pvVar4 + 0x20);
  pcVar2 = *(code **)(**(long **)(puVar5 + 0x20) + 0x88);
  puVar3 = puVar5;
  _swift_retain();
  (*pcVar2)();
  *puVar3 = uVar1;
  _swift_release(puVar5);
  _free(pvVar4);
  return;
}



/* Address: 0x1008b8054 | FUN_1008b8054 */

void FUN_1008b8054(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_retain(*(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x40));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8094);
  (*pcVar1)();
}



/* Address: 0x1008b8094 | FUN_1008b8094 */

undefined8 FUN_1008b8094(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Address: 0x1008b80a0 | FUN_1008b80a0 */

void FUN_1008b80a0(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008b80cc | FUN_1008b80cc */

void FUN_1008b80cc(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008b80d4 | FUN_1008b80d4 */

void FUN_1008b80d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1008b80f8 | FUN_1008b80f8 */

void FUN_1008b80f8(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_28,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1008b812c | FUN_1008b812c */

void FUN_1008b812c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008b8170 | FUN_1008b8170 */

undefined * FUN_1008b8170(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100feb0b8;
  FUN_1000f7830(&DAT_100feb0b8,&DAT_100c82630);
  _swift_allocObject();
  puVar3[0x10] = 1;
  *(undefined **)(puVar3 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8214);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008b8218 | FUN_1008b8218 */

void FUN_1008b8218(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008b8220 | FUN_1008b8220 */

void FUN_1008b8220(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_38,0,0);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8270);
  (*pcVar1)();
}



/* Address: 0x1008b8270 | FUN_1008b8270 */

void FUN_1008b8270(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8280);
  (*pcVar1)();
}



/* Address: 0x1008b8280 | FUN_1008b8280 */

undefined1 FUN_1008b8280(void)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b82c0);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)(lVar4 + 0x10);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b82c4);
  (*pcVar2)();
}



/* Address: 0x1008b82c4 | FUN_1008b82c4 */

void FUN_1008b82c4(byte param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x58);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8308);
    (*pcVar1)();
  }
  *(byte *)(lVar3 + 0x10) = param_1 & 1;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x20));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b830c);
  (*pcVar1)();
}



/* Address: 0x1008b830c | FUN_1008b830c */

undefined1  [16] FUN_1008b830c(long *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  *param_1 = lVar4;
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b8368);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)(lVar4 + 0x10);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 1) = uVar1;
    auVar5._8_8_ = param_1 + 1;
    auVar5._0_8_ = FUN_1008b836c;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b836c);
  (*pcVar2)();
}



/* Address: 0x1008b836c | FUN_1008b836c */

void FUN_1008b836c(long *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if ((param_2 & 1) == 0) {
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b83d8);
      (*pcVar2)();
    }
    *(char *)(lVar4 + 0x10) = (char)lVar1;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b83dc);
      (*pcVar2)();
    }
  }
  else {
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b83d4);
      (*pcVar2)();
    }
    *(char *)(lVar4 + 0x10) = (char)lVar1;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b83ac);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x1008b83dc | FUN_1008b83dc */

undefined8 FUN_1008b83dc(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8468);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    FUN_1005d84e8(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return uVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8464);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8460);
  (*pcVar1)();
}



/* Address: 0x1008b8468 | FUN_1008b8468 */

void FUN_1008b8468(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b850c);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    FUN_1005d84e8(param_1);
    FUN_1005d8534(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    FUN_1005d8534(param_1);
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8508);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8504);
  (*pcVar1)();
}



/* Address: 0x1008b850c | FUN_1008b850c */

undefined1  [16] FUN_1008b850c(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  pvVar3 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar3 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x440d);
  }
  *param_1 = pvVar3;
  *(long *)((long)pvVar3 + 0x20) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x48,pvVar3,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b85cc);
    (*pcVar1)();
  }
  lVar6 = *(long *)(lVar4 + 0xc0);
  _swift_retain(lVar4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b85c4);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  FUN_1005d84e8(uVar5);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar4);
    *(undefined8 *)((long)pvVar3 + 0x18) = uVar5;
    auVar7._8_8_ = (long)pvVar3 + 0x18;
    auVar7._0_8_ = FUN_1008b85cc;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b85c8);
  (*pcVar1)();
}



/* Address: 0x1008b85cc | FUN_1008b85cc */

void FUN_1008b85cc(undefined8 *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  pvVar3 = (void *)*param_1;
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x18);
  lVar4 = *(long *)(*(long *)((long)pvVar3 + 0x20) + 0x48);
  if ((param_2 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86e4);
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar4 + 0xc0);
    _swift_retain(lVar4);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86d4);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    FUN_1005d84e8(uVar5);
    FUN_1005d8534(uVar6);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
    FUN_1005d8534(uVar5);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86dc);
      (*pcVar1)();
    }
    _swift_release(lVar4);
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86e0);
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar4 + 0xc0);
    FUN_1005d84e8(uVar5);
    _swift_retain(lVar4);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86d0);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    FUN_1005d84e8(uVar5);
    FUN_1005d8534(uVar6);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
    FUN_1005d8534(uVar5);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b86d8);
      (*pcVar1)();
    }
    _swift_release(lVar4);
    FUN_1005d8534(*(undefined8 *)((long)pvVar3 + 0x18));
  }
  _free(pvVar3);
  return;
}



/* Address: 0x1008b86e4 | FUN_1008b86e4 */

undefined8 FUN_1008b86e4(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8770);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    FUN_1005d84e8(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return uVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b876c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8768);
  (*pcVar1)();
}



/* Address: 0x1008b8770 | FUN_1008b8770 */

void FUN_1008b8770(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8814);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar3 + 0xc0);
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x18) = param_1;
    FUN_1005d84e8(param_1);
    FUN_1005d8534(uVar4);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    FUN_1005d8534(param_1);
    if (iVar2 == 0) {
      _swift_release(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8810);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b880c);
  (*pcVar1)();
}



/* Address: 0x1008b8814 | FUN_1008b8814 */

undefined1  [16] FUN_1008b8814(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  pvVar3 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar3 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x8ad1);
  }
  *param_1 = pvVar3;
  *(long *)((long)pvVar3 + 0x20) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x48,pvVar3,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b88d4);
    (*pcVar1)();
  }
  lVar6 = *(long *)(lVar4 + 0xc0);
  _swift_retain(lVar4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b88cc);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  FUN_1005d84e8(uVar5);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar4);
    *(undefined8 *)((long)pvVar3 + 0x18) = uVar5;
    auVar7._8_8_ = (long)pvVar3 + 0x18;
    auVar7._0_8_ = FUN_1008b88d4;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b88d0);
  (*pcVar1)();
}



/* Address: 0x1008b88d4 | FUN_1008b88d4 */

void FUN_1008b88d4(undefined8 *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  pvVar3 = (void *)*param_1;
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x18);
  lVar4 = *(long *)(*(long *)((long)pvVar3 + 0x20) + 0x48);
  if ((param_2 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89ec);
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar4 + 0xc0);
    _swift_retain(lVar4);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89dc);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    FUN_1005d84e8(uVar5);
    FUN_1005d8534(uVar6);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
    FUN_1005d8534(uVar5);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89e4);
      (*pcVar1)();
    }
    _swift_release(lVar4);
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89e8);
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar4 + 0xc0);
    FUN_1005d84e8(uVar5);
    _swift_retain(lVar4);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x20));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89d8);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    FUN_1005d84e8(uVar5);
    FUN_1005d8534(uVar6);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x20));
    FUN_1005d8534(uVar5);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b89e0);
      (*pcVar1)();
    }
    _swift_release(lVar4);
    FUN_1005d8534(*(undefined8 *)((long)pvVar3 + 0x18));
  }
  _free(pvVar3);
  return;
}



/* Address: 0x1008b89ec | FUN_1008b89ec */

undefined8 FUN_1008b89ec(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8a34);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x20));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8a38);
  (*pcVar1)();
}



/* Address: 0x1008b8a38 | FUN_1008b8a38 */

undefined8 FUN_1008b8a38(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1008b8a74(param_1);
  return unaff_x20;
}



/* Address: 0x1008b8a74 | FUN_1008b8a74 */

void FUN_1008b8a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  pthread_mutexattr_t local_60;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = param_1;
  FUN_100611728();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar3 = &DAT_100feb0b8;
  FUN_1000f7830(&DAT_100feb0b8,&DAT_100c82630);
  _swift_allocObject();
  puVar3[0x10] = 1;
  *(undefined **)(puVar3 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_60.__sig = 0;
  local_60.__opaque[0] = '\0';
  local_60.__opaque[1] = '\0';
  local_60.__opaque[2] = '\0';
  local_60.__opaque[3] = '\0';
  local_60.__opaque[4] = '\0';
  local_60.__opaque[5] = '\0';
  local_60.__opaque[6] = '\0';
  local_60.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_60);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_60);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8c04);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  FUN_100631d88(0);
  _swift_allocObject();
  _swift_retain(param_1);
  lVar4 = unaff_x20;
  _swift_retain();
  FUN_10062b720();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  *(long *)(unaff_x20 + 0x50) = lVar4;
  _swift_retain();
  _swift_release(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = 0;
  FUN_1008d419c(0);
  _swift_allocObject();
  _swift_retain(uVar6);
  FUN_1008c0594(lVar4,uVar6,uVar5,&PTR_PTR_100f0d740);
  _swift_release(param_1);
  _swift_beginAccess(unaff_x20 + 0x48,&local_60,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x20 + 0x48) = lVar4;
  _swift_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008b8c08 | FUN_1008b8c08 */

void FUN_1008b8c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008b8c24,0,0);
  return;
}



/* Address: 0x1008b8c24 | FUN_1008b8c24 */

void FUN_1008b8c24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = &DAT_100feb0c0;
  FUN_1000f7830(&DAT_100feb0c0,&DAT_100c82640);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  puVar2 = &DAT_100f0caf0;
  _swift_allocObject(&DAT_100f0caf0,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  plVar3 = (long *)0xa0;
  _swift_unknownObjectRetain(uVar5);
  _swift_retain_n(uVar4,2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008b8d14;
  FUN_1008c0b9c(*(undefined8 *)(unaff_x22 + 0x20),FUN_1008c0530,puVar2);
  return;
}



/* Address: 0x1008b8d14 | FUN_1008b8d14 */

void FUN_1008b8d14(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_1008b8d88;
  }
  else {
    pcVar1 = FUN_1008b8dd4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b8d88 | FUN_1008b8d88 */

void FUN_1008b8d88(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_release_n(*(undefined8 *)(unaff_x22 + 0x20),2);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008b8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1008b8dd4 | FUN_1008b8dd4 */

void FUN_1008b8dd4(void)

{
  long unaff_x22;
  
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x30),"NIOEmbedded/AsyncTestingChannel.swift",0x25,1,0x135)
  ;
  return;
}



/* Address: 0x1008b8df0 | FUN_1008b8df0 */

void FUN_1008b8df0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008b8e08,0,0);
  return;
}



/* Address: 0x1008b8e08 | FUN_1008b8e08 */

void FUN_1008b8e08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f0cb18;
  _swift_allocObject(&DAT_100f0cb18,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  plVar4 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1008b8eb0;
  FUN_1008c0b9c(*(undefined8 *)(unaff_x22 + 0x18),FUN_1008c27b8,puVar3);
  return;
}



/* Address: 0x1008b8eb0 | FUN_1008b8eb0 */

void FUN_1008b8eb0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    pcVar1 = FUN_1008b8f24;
  }
  else {
    pcVar1 = FUN_1008b8f60;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b8f24 | FUN_1008b8f24 */

void FUN_1008b8f24(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001008b8f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1008b8f60 | FUN_1008b8f60 */

void FUN_1008b8f60(void)

{
  long unaff_x22;
  
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x28),"NIOEmbedded/AsyncTestingChannel.swift",0x25,1,0x135)
  ;
  return;
}



/* Address: 0x1008b8f7c | FUN_1008b8f7c */

void FUN_1008b8f7c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1008b8ff0(param_2);
    FUN_100632174();
    _swift_release(lVar2);
    _swift_bridgeObjectRelease(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b8ff0);
  (*pcVar1)();
}



/* Address: 0x1008b8ff0 | FUN_1008b8ff0 */

undefined * FUN_1008b8ff0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    FUN_1008d1354(0,lVar7,0);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar4 = local_68;
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      _swift_unknownObjectRetain(local_90);
      puVar5 = &DAT_100feb290;
      FUN_1000f7830(&DAT_100feb290,&DAT_100c828f0);
      puVar6 = &DAT_100feb298;
      FUN_1000f7830(&DAT_100feb298,&DAT_100c83080);
      _swift_dynamicCast(&local_80,&local_90,puVar5,puVar6,7);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1008d1354(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar3;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar2;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return local_68;
}



/* Address: 0x1008b9124 | FUN_1008b9124 */

void FUN_1008b9124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838ee4;
  FUN_1008c0b9c(param_1,param_2,param_3);
  return;
}



/* Address: 0x1008b91a4 | FUN_1008b91a4 */

void FUN_1008b91a4(undefined8 param_1,undefined1 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x220) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x201) = param_2;
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
  *(undefined8 *)(unaff_x22 + 0x228) = *unaff_x20;
  _swift_task_switch(FUN_1008b91cc,0,0);
  return;
}



/* Address: 0x1008b91cc | FUN_1008b91cc */

void FUN_1008b91cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x220);
  uVar1 = 2;
  FUN_100622874(2,"NIOEmbedded/AsyncTestingChannel.swift",0x25,2,0x158,
                *(undefined8 *)(unaff_x22 + 0x228),&PTR_PTR_100f0ce60);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008b925c;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,1);
  FUN_1008bf988(uVar1,lVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008b925c | FUN_1008b925c */

void FUN_1008b925c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x238) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1008b92c8;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1008b949c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b92c8 | FUN_1008b92c8 */

void FUN_1008b92c8(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  String isolation;
  String function;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
  lVar2 = *(long *)(unaff_x22 + 0x220);
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar7;
  _swift_retain();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar7;
  *(code **)(unaff_x22 + 0x128) = FUN_1008c0fd4;
  *(long *)(unaff_x22 + 0x130) = lVar2;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x202) = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x248) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1008b9764;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x220);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1008b97d0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100feb0d8;
  FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
  lVar2 = *(long *)(puVar4 + -8);
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  function.bridgeObject = (void *)0x8000000100db44c0;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008be830(uVar5,uVar7,FUN_1008c0fd4,uVar6);
  (**(code **)(lVar2 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1008b949c | FUN_1008b949c */

void FUN_1008b949c(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  String isolation;
  String function;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
  *(undefined8 *)(unaff_x22 + 0x210) = uVar10;
  _swift_errorRetain(uVar10);
  puVar4 = &DAT_100feb0c8;
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  uVar8 = unaff_x22 + 0x1f8;
  _swift_dynamicCast(uVar8,(undefined8 *)(unaff_x22 + 0x210),puVar4,&DAT_100eeb710,0);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
  }
  else {
    cVar1 = *(char *)(unaff_x22 + 0x201);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x238));
    uVar8 = *(ulong *)(unaff_x22 + 0x1f8);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x200);
    puVar5 = (ulong *)uVar8;
    thunk_FUN_10061dfe8(uVar8,uVar2,3,3);
    if ((((ulong)puVar5 & 1) != 0) && (cVar1 != '\0')) {
      FUN_10061e298(uVar8,uVar2);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
      lVar6 = *(long *)(unaff_x22 + 0x220);
      uVar10 = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x240) = uVar10;
      _swift_retain();
      *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
      *(code **)(unaff_x22 + 0x128) = FUN_1008c0fd4;
      *(long *)(unaff_x22 + 0x130) = lVar6;
      bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      *(byte *)(unaff_x22 + 0x202) = bVar3 & 1;
      if ((bVar3 & 1) != 0) {
        plVar7 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x248) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_1008b9764;
        isolation.bridgeObject = (void *)0x0;
        isolation.str = (char *)plVar7;
        Swift::_withCheckedThrowingContinuation(isolation);
        return;
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x220);
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_1008b97d0;
      continuation.unknown = (undefined *)(unaff_x22 + 0x50);
      _swift_continuation_init(continuation.unknown,1);
      puVar4 = &DAT_100feb0d8;
      FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
      lVar6 = *(long *)(puVar4 + -8);
      uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar8);
      FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
      function.bridgeObject = (void *)0x8000000100db44c0;
      function.str = (char *)0xd000000000000014;
      Swift::CheckedContinuation::init(continuation,function);
      FUN_1008be830(uVar8,uVar10,FUN_1008c0fd4,uVar9);
      (**(code **)(lVar6 + 8))(uVar8,puVar4);
      _swift_task_dealloc(uVar8);
      _swift_continuation_await(unaff_x22 + 0x50);
      return;
    }
    FUN_1008c0f94();
    _swift_allocError(&DAT_100eeb710,puVar5,0,0);
    *puVar5 = uVar8;
    *(undefined1 *)(puVar5 + 1) = uVar2;
    _swift_willThrow();
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x210));
  }
                    /* WARNING: Could not recover jumptable at 0x0001008b967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008b9764 | FUN_1008b9764 */

void FUN_1008b9764(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    pcVar1 = FUN_1008b9848;
  }
  else {
    *(long *)(lVar2 + 600) = unaff_x20;
    pcVar1 = FUN_1008b9acc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b97d0 | FUN_1008b97d0 */

void FUN_1008b97d0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x70);
  if (lVar3 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    pcVar1 = FUN_1008b9848;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 600) = lVar3;
    pcVar1 = FUN_1008b9acc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008b9848 | FUN_1008b9848 */

void FUN_1008b9848(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  (**(code **)(**(long **)(*(long *)(unaff_x22 + 0x240) + 0x10) + 0x88))();
  uVar2 = *param_1;
  if (0x7ffffffffffffffe < uVar2) {
    uVar2 = 0x7fffffffffffffff;
  }
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x250) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008b98c4;
  FUN_1008c4b54(uVar2);
  return;
}



/* Address: 0x1008b98c4 | FUN_1008b98c4 */

void FUN_1008b98c4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x250));
  _swift_task_switch(FUN_1008b9914,0,0);
  return;
}



/* Address: 0x1008b9914 | FUN_1008b9914 */

void FUN_1008b9914(void)

{
  char cVar1;
  long *plVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  String isolation;
  String function;
  
  cVar1 = *(char *)(unaff_x22 + 0x202);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x220);
  _swift_retain(uVar6);
  *(undefined8 *)(unaff_x22 + 0x180) = uVar5;
  *(code **)(unaff_x22 + 0x188) = FUN_1008c1008;
  *(undefined8 *)(unaff_x22 + 400) = uVar6;
  if (cVar1 == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x260) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1008b9b18;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar2;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0x90) = unaff_x22;
  *(code **)(unaff_x22 + 0x98) = FUN_1008b9b84;
  continuation.unknown = (undefined *)(unaff_x22 + 0x90);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100feb0d8;
  FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
  lVar7 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
  function.bridgeObject = (void *)0x8000000100db44c0;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1008be830(uVar4,uVar5,FUN_1008c1008,uVar6);
  (**(code **)(lVar7 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x90);
  return;
}



/* Address: 0x1008b9acc | FUN_1008b9acc */

void FUN_1008b9acc(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x220));
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 600),"NIOEmbedded/AsyncTestingChannel.swift",0x25,1,0x160);
  return;
}



/* Address: 0x1008b9b18 | FUN_1008b9b18 */

void FUN_1008b9b18(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x260));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x220));
    pcVar1 = FUN_1008b9bfc;
  }
  else {
    *(long *)(lVar2 + 0x268) = unaff_x20;
    pcVar1 = FUN_1008b9dbc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}


