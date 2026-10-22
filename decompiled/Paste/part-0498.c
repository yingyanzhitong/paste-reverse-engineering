/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005c2eb4 | FUN_1005c2eb4 */

undefined8 FUN_1005c2eb4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4160;
  FUN_1000f7830(&DAT_100fd4160,&DAT_100c64720);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1005c2efc | FUN_1005c2efc */

undefined1  [16] FUN_1005c2efc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)0x29;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x29);
  }
  else {
    _swift_coroFrameAlloc(0x29,0xd339);
  }
  *param_1 = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0xff;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1005c2f5c;
  return auVar2;
}



/* Address: 0x1005c2f5c | FUN_1005c2f5c */

void FUN_1005c2f5c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  FUN_1005c2eb4(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x1005c2f84 | FUN_1005c2f84 */

void FUN_1005c2f84(void)

{
  thunk_FUN_1005bed1c(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1005c2f90 | _swift_bridgeObjectRelease */

void _swift_bridgeObjectRelease(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1005c2f94 | FUN_1005c2f94 */

undefined1  [16] FUN_1005c2f94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  thunk_FUN_1005bed1c();
  *param_1 = puVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100108cb8;
  return auVar2;
}



/* Address: 0x1005c2fcc | FUN_1005c2fcc */

undefined1  [16] FUN_1005c2fcc(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = 6;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005c2fe4 | FUN_1005c2fe4 */

undefined1  [16] FUN_1005c2fe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)0x29;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x29);
  }
  else {
    _swift_coroFrameAlloc(0x29,0x1a9);
  }
  *param_1 = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0xff;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = thunk_FUN_1005c2f5c;
  return auVar2;
}



/* Address: 0x1005c3044 | FUN_1005c3044 */

undefined1  [16] FUN_1005c3044(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  thunk_FUN_1005bed1c();
  *param_1 = puVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = thunk_FUN_100108cb8;
  return auVar2;
}



/* Address: 0x1005c307c | FUN_1005c307c */

undefined1  [16] FUN_1005c307c(void)

{
  return ZEXT816(0x100ee6990);
}



/* Address: 0x1005c308c | thunk_FUN_1005c2f5c */

void thunk_FUN_1005c2f5c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  FUN_1005c2eb4(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x1005c3090 | FUN_1005c3090 */

long FUN_1005c3090(void)

{
  code *pcVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long unaff_x20;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_allocObject();
  ppVar3 = (pthread_mutex_t *)0x40;
  _swift_slowAlloc(0x40,0xffffffffffffffff);
  *(pthread_mutex_t **)(unaff_x20 + 0x10) = ppVar3;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  iVar2 = _pthread_mutexattr_init(&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c3134);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutex_init(ppVar3,&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c3138);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutexattr_destroy(&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c313c);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005c3140 | FUN_1005c3140 */

void FUN_1005c3140(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  pthread_mutexattr_t local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = 0x40;
  _swift_slowAlloc(0x40,0xffffffffffffffff);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  local_28.__sig = 0;
  local_28.__opaque[0] = '\0';
  local_28.__opaque[1] = '\0';
  local_28.__opaque[2] = '\0';
  local_28.__opaque[3] = '\0';
  local_28.__opaque[4] = '\0';
  local_28.__opaque[5] = '\0';
  local_28.__opaque[6] = '\0';
  local_28.__opaque[7] = '\0';
  iVar2 = _pthread_mutexattr_init(&local_28);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c31c4);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutex_init(*(pthread_mutex_t **)(unaff_x20 + 0x10),&local_28);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c31c8);
    (*pcVar1)();
  }
  iVar2 = _pthread_mutexattr_destroy(&local_28);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c31cc);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005c31d0 | FUN_1005c31d0 */

void FUN_1005c31d0(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_mutex_destroy(*(pthread_mutex_t **)(unaff_x20 + 0x10));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c3204);
  (*pcVar1)();
}



/* Address: 0x1005c3204 | FUN_1005c3204 */

void FUN_1005c3204(void)

{
  FUN_1005c3378(PTR__pthread_mutex_destroy_100ea8918);
  return;
}



/* Address: 0x1005c3210 | FUN_1005c3210 */

void FUN_1005c3210(void)

{
  FUN_1005c3228(PTR__pthread_mutex_lock_100ea8928);
  return;
}



/* Address: 0x1005c321c | FUN_1005c321c */

void FUN_1005c321c(void)

{
  FUN_1005c3228(PTR__pthread_mutex_unlock_100ea8930);
  return;
}



/* Address: 0x1005c3228 | FUN_1005c3228 */

void FUN_1005c3228(code *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  (*param_1)();
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c324c);
  (*pcVar1)();
}



/* Address: 0x1005c324c | FUN_1005c324c */

void FUN_1005c324c(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  pthread_mutex_t *ppVar3;
  
  ppVar3 = *(pthread_mutex_t **)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock(ppVar3);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c32cc);
    (*pcVar1)();
  }
  (*param_2)(param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock(ppVar3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c32d0);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock(ppVar3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c32a8);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1005c32d0 | FUN_1005c32d0 */

void FUN_1005c32d0(code *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  pthread_mutex_t *ppVar3;
  
  ppVar3 = *(pthread_mutex_t **)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock(ppVar3);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c3348);
    (*pcVar1)();
  }
  (*param_1)();
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock(ppVar3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c334c);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock(ppVar3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c3324);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1005c334c | FUN_1005c334c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1005c334c(void)

{
  return ZEXT816(0x100fd4250);
}



/* Address: 0x1005c336c | FUN_1005c336c */

void FUN_1005c336c(void)

{
  FUN_1005c3378(PTR__pthread_rwlock_destroy_100ea8948);
  return;
}



/* Address: 0x1005c3378 | FUN_1005c3378 */

void FUN_1005c3378(code *param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  (*param_1)();
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c33b8);
  (*pcVar1)();
}



/* Address: 0x1005c33b8 | FUN_1005c33b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1005c33b8(void)

{
  return ZEXT816(0x100fd42f0);
}



/* Address: 0x1005c33d8 | FUN_1005c33d8 */

void FUN_1005c33d8(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_140 [96];
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_c8 = 0;
  uStack_98 = param_10;
  uStack_90 = param_11;
  local_88 = param_12;
  local_68 = 0;
  local_38 = param_10;
  uStack_30 = param_11;
  local_28 = param_12;
  local_e0 = param_2;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  local_c0 = param_5;
  uStack_b8 = param_6;
  uStack_b0 = param_7;
  local_a8 = param_8;
  local_a0 = param_9;
  local_80[0] = param_2;
  local_78 = param_3;
  uStack_70 = param_4;
  uStack_60 = param_5;
  local_58 = param_6;
  uStack_50 = param_7;
  local_48 = param_8;
  uStack_40 = param_9;
  FUN_1005bf638(&local_e0,auStack_140);
  FUN_1004eaa3c(local_80);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[0xb] = local_88;
  param_1[10] = uStack_90;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x1005c3468 | FUN_1005c3468 */

String FUN_1005c3468(void)

{
  void *pvVar1;
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  long unaff_x20;
  String SVar7;
  String SVar9;
  String SVar8;
  
  pvVar6 = *(void **)(unaff_x20 + 0x30);
  if (pvVar6 == (void *)0x0) {
    pvVar1 = *(void **)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    pcVar3 = (char *)0x2f;
    pvVar4 = pvVar1;
    FUN_1005c0c24(0x2f,pvVar1,uVar2);
    if (((uint)pvVar4 & 0xff) == 1) {
      SVar7.bridgeObject = (void *)0xe300000000000000;
      SVar7.str = (char *)0x612f6e;
    }
    else {
      _swift_bridgeObjectRetain(uVar2);
      SVar9.bridgeObject = pvVar1;
      SVar9.str = pcVar3;
      uVar5 = uVar2;
      SVar8.str = Swift::String::get_subscript((Range<Index>)0xf,SVar9);
      SVar8.bridgeObject = pcVar3;
      SVar7 = Swift::String::__fromSubstring(SVar8);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  else {
    SVar7.bridgeObject = pvVar6;
    SVar7.str = *(char **)(unaff_x20 + 0x28);
  }
  _swift_bridgeObjectRetain(pvVar6);
  return SVar7;
}



/* Address: 0x1005c3524 | FUN_1005c3524 */

void FUN_1005c3524(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x1005c3558 | FUN_1005c3558 */

undefined8 FUN_1005c3558(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_errorRetain(uVar1);
  return uVar1;
}



/* Address: 0x1005c3580 | FUN_1005c3580 */

void FUN_1005c3580(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x1005c35a8 | FUN_1005c35a8 */

undefined1  [16] FUN_1005c35a8(String *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *unaff_x20;
  void *pvVar6;
  String SVar7;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar8;
  
  pvVar6 = *(void **)(unaff_x20 + 0x30);
  param_1[1].str = unaff_x20;
  param_1[1].bridgeObject = pvVar6;
  if (pvVar6 == (void *)0x0) {
    pvVar1 = *(void **)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    pcVar3 = (char *)0x2f;
    pvVar4 = pvVar1;
    FUN_1005c0c24(0x2f,pvVar1,uVar2);
    if (((uint)pvVar4 & 0xff) == 1) {
      SVar7.bridgeObject = (void *)0xe300000000000000;
      SVar7.str = (char *)0x612f6e;
    }
    else {
      _swift_bridgeObjectRetain(uVar2);
      SVar10.bridgeObject = pvVar1;
      SVar10.str = pcVar3;
      uVar5 = uVar2;
      SVar8.str = Swift::String::get_subscript((Range<Index>)0xf,SVar10);
      SVar8.bridgeObject = pcVar3;
      SVar7 = Swift::String::__fromSubstring(SVar8);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar5);
    }
  }
  else {
    SVar7.bridgeObject = pvVar6;
    SVar7.str = *(char **)(unaff_x20 + 0x28);
  }
  *param_1 = SVar7;
  _swift_bridgeObjectRetain(pvVar6);
  auVar9._8_8_ = param_1;
  auVar9._0_8_ = FUN_1005c3678;
  return auVar9;
}



/* Address: 0x1005c3678 | FUN_1005c3678 */

void FUN_1005c3678(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  lVar2 = param_1[2];
  uVar4 = param_1[3];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  return;
}



/* Address: 0x1005c36d8 | FUN_1005c36d8 */

undefined1  [16] FUN_1005c36d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Address: 0x1005c3704 | FUN_1005c3704 */

void FUN_1005c3704(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Address: 0x1005c3738 | FUN_1005c3738 */

undefined1  [16] FUN_1005c3738(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Address: 0x1005c3764 | FUN_1005c3764 */

void FUN_1005c3764(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Address: 0x1005c3798 | FUN_1005c3798 */

undefined8 FUN_1005c3798(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x58);
}



/* Address: 0x1005c37a0 | FUN_1005c37a0 */

void FUN_1005c37a0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  return;
}



/* Address: 0x1005c37a8 | FUN_1005c37a8 */

void FUN_1005c37a8(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_140 [96];
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a0 = param_10;
  uStack_98 = param_11;
  uStack_90 = param_12;
  local_88 = param_13;
  uStack_40 = param_10;
  local_38 = param_11;
  uStack_30 = param_12;
  local_28 = param_13;
  local_e0 = param_2;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  local_c8 = param_5;
  local_c0 = param_6;
  uStack_b8 = param_7;
  uStack_b0 = param_8;
  local_a8 = param_9;
  local_80[0] = param_2;
  local_78 = param_3;
  uStack_70 = param_4;
  local_68 = param_5;
  uStack_60 = param_6;
  local_58 = param_7;
  uStack_50 = param_8;
  local_48 = param_9;
  FUN_1005bf638(&local_e0,auStack_140);
  FUN_1004eaa3c(local_80);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = local_a8;
  param_1[6] = uStack_b0;
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[0xb] = local_88;
  param_1[10] = uStack_90;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x1005c3838 | FUN_1005c3838 */

void FUN_1005c3838(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Address: 0x1005c3880 | FUN_1005c3880 */

undefined1 * FUN_1005c3880(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_errorRetain(uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x1005c392c | FUN_1005c392c */

undefined1 * FUN_1005c392c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _swift_errorRetain(uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



/* Address: 0x1005c3a1c | FUN_1005c3a1c */

void FUN_1005c3a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x1005c3a38 | FUN_1005c3a38 */

undefined1 * FUN_1005c3a38(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



/* Address: 0x1005c3acc | FUN_1005c3acc */

int FUN_1005c3acc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1005c3b14 | FUN_1005c3b14 */

void FUN_1005c3b14(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1005c3b6c | FUN_1005c3b6c */

undefined1  [16] FUN_1005c3b6c(void)

{
  return ZEXT816(0x100ee6a18);
}



/* Address: 0x1005c3b7c | FUN_1005c3b7c */

void FUN_1005c3b7c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = *unaff_x20;
  FUN_1005c3eb0();
  return;
}



/* Address: 0x1005c3b88 | FUN_1005c3b88 */

void FUN_1005c3b88(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_188 [96];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = param_5;
  uVar2 = param_6;
  FUN_1005cdf80();
  local_110 = 0;
  local_d0 = param_9;
  local_b0 = 0;
  local_70 = param_9;
  local_128[0] = param_1;
  local_120 = param_2;
  uStack_118 = param_3;
  uStack_108 = param_4;
  local_100 = uVar1;
  uStack_f8 = uVar2;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_c8[0] = param_1;
  local_c0 = param_2;
  uStack_b8 = param_3;
  uStack_a8 = param_4;
  local_a0 = uVar1;
  uStack_98 = uVar2;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_3);
  FUN_1005bf638(local_128,auStack_188);
  FUN_1004eaa3c(local_c8);
  FUN_1005c0330(local_128);
  FUN_1004eaa3c(local_128);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1005c3c90 | FUN_1005c3c90 */

void FUN_1005c3c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  uVar2 = param_6;
  FUN_1005cdf80(param_5,param_6);
  (**(code **)(param_11 + 0x30))
            (param_1,param_2,param_3,param_4,uVar1,uVar2,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1005c3d44 | thunk_FUN_1005c3b88 */

void thunk_FUN_1005c3b88(void)

{
  FUN_1005c3b88();
  return;
}



/* Address: 0x1005c3d48 | FUN_1005c3d48 */

void FUN_1005c3d48(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  String SVar15;
  void *local_80;
  char *local_78;
  String SVar14;
  
  pvVar7 = *(void **)(param_1 + 0x30);
  if (pvVar7 == (void *)0x0) {
    local_80 = *(void **)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = (char *)0x2f;
    pvVar4 = local_80;
    FUN_1005c0c24(0x2f,local_80,uVar9);
    if (((uint)pvVar4 & 0xff) == 1) {
      SVar13.bridgeObject = (void *)0xe300000000000000;
      SVar13.str = (char *)0x612f6e;
    }
    else {
      _swift_bridgeObjectRetain(uVar9);
      SVar15.bridgeObject = local_80;
      SVar15.str = pcVar3;
      uVar5 = uVar9;
      SVar14.str = Swift::String::get_subscript((Range<Index>)0xf,SVar15);
      SVar14.bridgeObject = pcVar3;
      SVar13 = Swift::String::__fromSubstring(SVar14);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar9);
    }
  }
  else {
    SVar13.bridgeObject = pvVar7;
    SVar13.str = *(char **)(param_1 + 0x28);
    local_80 = *(void **)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
  }
  local_78 = SVar13.str;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  pcVar10 = *(code **)(param_3 + 0x30);
  uVar2 = *param_1;
  _swift_bridgeObjectRetain(pvVar7);
  (*pcVar10)(uVar2,uVar5,uVar1,uVar6,local_78,SVar13.bridgeObject,local_80,uVar9,uVar11,uVar12,uVar8
             ,param_2,param_3);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  return;
}



/* Address: 0x1005c3e8c | FUN_1005c3e8c */

void FUN_1005c3e8c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  uStack0000000000000000 = in_stack_00000010;
  uStack0000000000000008 = in_stack_00000018;
                    /* WARNING: Could not recover jumptable at 0x0001005c3eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000020 + 0x38))();
  return;
}



/* Address: 0x1005c3eb0 | FUN_1005c3eb0 */

void FUN_1005c3eb0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_188 [96];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar1 = param_5;
  uVar2 = param_6;
  FUN_1005cdf80();
  local_110 = 0;
  local_d0 = param_9;
  local_b0 = 0;
  local_70 = param_9;
  local_128[0] = param_1;
  local_120 = param_2;
  uStack_118 = param_3;
  uStack_108 = param_4;
  local_100 = uVar1;
  uStack_f8 = uVar2;
  local_f0 = param_5;
  uStack_e8 = param_6;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_c8[0] = param_1;
  local_c0 = param_2;
  uStack_b8 = param_3;
  uStack_a8 = param_4;
  local_a0 = uVar1;
  uStack_98 = uVar2;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_3);
  FUN_1005bf638(local_128,auStack_188);
  FUN_1004eaa3c(local_c8);
  FUN_1005beb7c(local_128,param_10);
  FUN_1004eaa3c(local_128);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1005c3fbc | FUN_1005c3fbc */

void FUN_1005c3fbc(undefined8 *param_1,long param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  String SVar2;
  
  if ((long)(param_3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c401c);
    (*pcVar1)();
  }
  if (!SCARRY8(param_2,(long)param_3 * 2)) {
    SVar2.bridgeObject = param_4;
    SVar2.str = param_3;
    Swift::String::reserveCapacity(param_2 + (long)param_3 * 2,SVar2);
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c4020);
  (*pcVar1)();
}



/* Address: 0x1005c4020 | /usr/lib/swift/libswiftCore.dylib::Swift::String::append */

void Swift::String::append(String param_1,String param_2)

{
  append(param_1,param_2);
  return;
}



/* Address: 0x1005c4024 | FUN_1005c4024 */

void FUN_1005c4024(undefined8 param_1,char *param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  long lVar2;
  String SVar3;
  String SVar4;
  
  lVar2 = *(long *)(*(long *)(param_2 + -8) + 0x40);
  pcVar1 = param_2;
  (**(code **)(*(long *)(param_2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1);
  SVar3 = Swift::String::_init
                    (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2);
  SVar4.bridgeObject = param_4;
  SVar4.str = pcVar1;
  Swift::String::append(SVar3,SVar4);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return;
}



/* Address: 0x1005c4098 | FUN_1005c4098 */

void FUN_1005c4098(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  bVar1 = (*(byte *)(param_2 + 5) & 1) == 0;
  if (bVar1) {
    uVar3 = *param_2;
    uStack_38 = param_2[3];
    local_40 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    local_30 = param_2[4];
    FUN_1005c4fd0(&local_40);
  }
  else {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    uVar3 = param_2[4];
    param_1[3] = &DAT_100ee6bd8;
    FUN_1005c4ff8();
    param_1[4] = param_2;
    puVar2 = &DAT_100ee6a58;
    _swift_allocObject(&DAT_100ee6a58,0x38,7);
    *param_1 = puVar2;
    *(undefined8 *)(puVar2 + 0x18) = uVar7;
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    *(undefined8 *)(puVar2 + 0x28) = uVar5;
    *(undefined8 *)(puVar2 + 0x20) = uVar4;
    *(undefined8 *)(puVar2 + 0x30) = uVar3;
  }
  *(bool *)(param_1 + 5) = !bVar1;
  return;
}



/* Address: 0x1005c4134 | FUN_1005c4134 */

void FUN_1005c4134(void)

{
  undefined *unaff_x20;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  return;
}



/* Address: 0x1005c4174 | FUN_1005c4174 */

void FUN_1005c4174(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1005c417c | FUN_1005c417c */

void FUN_1005c417c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_3 == 0) || (param_6 != param_3)) {
    if (param_5 == 0) {
LAB_1005c41f8:
                    /* WARNING: Could not recover jumptable at 0x0001005c421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
      return;
    }
    lVar1 = *(long *)(param_5 + 0x10) + 1;
    plVar2 = (long *)(param_5 + 0x20);
    do {
      lVar1 = lVar1 + -1;
      if (lVar1 == 0) goto LAB_1005c41f8;
      lVar3 = *plVar2;
      plVar2 = plVar2 + 2;
    } while (lVar3 != param_6);
  }
  Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005c4220 | FUN_1005c4220 */

void FUN_1005c4220(undefined8 param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long lVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_3 + -8);
  lVar5 = (long)puVar6 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6,param_1,lVar2);
  puVar3 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,param_3);
  if ((int)puVar3 == 1) {
    pcVar4 = *(code **)(lVar7 + 8);
    (*pcVar4)(puVar6,lVar2);
    FUN_1005c4500(param_3);
    (*pcVar4)(param_1,lVar2);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,puVar6,param_3);
    Swift::RawRepresentable::_get_rawValue();
    FUN_1005c4368(param_3,local_68);
    (**(code **)(lVar7 + 8))(param_1,lVar2);
    (**(code **)(lVar8 + 8))(lVar5,param_3);
  }
  return;
}



/* Address: 0x1005c4368 | FUN_1005c4368 */

void FUN_1005c4368(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  ulong uVar7;
  
  lVar4 = *unaff_x20;
  if (lVar4 == 0 || param_1 != lVar4) {
    uVar5 = unaff_x20[2];
    if (uVar5 == 0) {
      if (lVar4 != 0) {
        puVar2 = &DAT_100fd4180;
        FUN_1000f7830(&DAT_100fd4180,&DAT_100c647c0);
        _swift_allocObject();
        *(undefined8 *)(puVar2 + 0x18) = 2;
        *(undefined8 *)(puVar2 + 0x10) = 1;
        *(long *)(puVar2 + 0x20) = param_1;
        *(long *)(puVar2 + 0x28) = param_2;
        unaff_x20[2] = (long)puVar2;
        return;
      }
    }
    else {
      if (*(ulong *)(uVar5 + 0x10) != 0) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          if (*(long *)(uVar5 + lVar6 + 0x20) == param_1) {
            uVar3 = uVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((uVar3 & 1) == 0) {
              FUN_1005bdeec();
            }
            if (uVar7 < *(ulong *)(uVar5 + 0x10)) {
              *(long *)(uVar5 + lVar6 + 0x20) = param_1;
              *(long *)(uVar5 + lVar6 + 0x28) = param_2;
              unaff_x20[2] = uVar5;
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c4500);
            (*pcVar1)();
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (*(ulong *)(uVar5 + 0x10) != uVar7);
      }
      if (lVar4 != 0) {
        uVar7 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
          FUN_1005be26c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        }
        uVar5 = *(ulong *)(uVar3 + 0x10);
        uVar7 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_1005be26c(uVar7,uVar5 + 1,1,uVar3);
        }
        *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
        lVar4 = uVar7 + uVar5 * 0x10;
        *(long *)(lVar4 + 0x20) = param_1;
        *(long *)(lVar4 + 0x28) = param_2;
        unaff_x20[2] = uVar7;
        return;
      }
    }
  }
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1005c4500 | FUN_1005c4500 */

void FUN_1005c4500(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong *puVar9;
  
  puVar9 = (ulong *)(unaff_x20 + 2);
  uVar8 = *puVar9;
  if (*unaff_x20 == 0 || param_1 != *unaff_x20) {
    if ((uVar8 != 0) && (*(long *)(uVar8 + 0x10) != 0)) {
      lVar6 = 0;
      plVar7 = (long *)(uVar8 + 0x20);
      do {
        if (*plVar7 == param_1) {
          FUN_1005c4798(lVar6);
          uVar5 = *puVar9;
          if (uVar5 == 0) {
            return;
          }
          if (*(long *)(uVar5 + 0x10) != 0) {
            return;
          }
          goto LAB_1005c45d4;
        }
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + 2;
      } while (*(long *)(uVar8 + 0x10) != lVar6);
    }
  }
  else if ((uVar8 == 0) || (*(long *)(uVar8 + 0x10) == 0)) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    uVar4 = uVar8;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar8;
    if ((uVar4 & 1) == 0) {
      FUN_1005bdeec();
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    else {
      lVar6 = *(long *)(uVar8 + 0x10);
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c4608);
      (*pcVar3)();
    }
    lVar6 = lVar6 + -1;
    lVar1 = uVar5 + lVar6 * 0x10;
    lVar2 = *(long *)(lVar1 + 0x20);
    lVar1 = *(long *)(lVar1 + 0x28);
    *(long *)(uVar5 + 0x10) = lVar6;
    *unaff_x20 = lVar2;
    unaff_x20[1] = lVar1;
    _swift_bridgeObjectRelease(uVar8);
    if (lVar6 == 0) {
LAB_1005c45d4:
      _swift_bridgeObjectRelease(uVar5);
      *puVar9 = 0;
    }
    else {
      *puVar9 = uVar5;
    }
  }
  return;
}



/* Address: 0x1005c4608 | FUN_1005c4608 */

undefined1  [16]
FUN_1005c4608(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  Optional OVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  void *pvVar4;
  long lVar5;
  undefined8 unaff_x20;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0xb1c2);
  }
  *param_1 = puVar3;
  puVar3[2] = param_4;
  puVar3[3] = unaff_x20;
  *puVar3 = param_2;
  puVar3[1] = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar3[4] = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar3[5] = lVar5;
  pvVar6 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar6);
    puVar3[6] = pvVar4;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar4 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xb1c2);
    puVar3[6] = pvVar4;
    _swift_coroFrameAlloc(pvVar6,0xb1c2);
  }
  puVar3[7] = pvVar6;
  FUN_1005c417c(pvVar6);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_1005c46f4;
  return auVar7;
}


