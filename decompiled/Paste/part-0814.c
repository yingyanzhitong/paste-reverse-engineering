/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008ebb38 | FUN_1008ebb38 */

code * FUN_1008ebb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar2 = &DAT_100f11f28;
  _swift_allocObject(&DAT_100f11f28,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  puVar3 = &DAT_100f11f50;
  _swift_allocObject(&DAT_100f11f50,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_12;
  *(code **)(puVar3 + 0x20) = thunk_FUN_1008fd8bc;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_retain(param_6);
  _swift_retain(param_4);
  pcVar4 = FUN_1008fd58c;
  thunk_FUN_10064a5bc(FUN_1008fd58c,puVar3,param_11);
  _swift_release(uVar1);
  _swift_release(puVar3);
  puVar2 = &DAT_100f11f78;
  _swift_allocObject(&DAT_100f11f78,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _swift_retain_n(param_4,2);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_8);
  pcVar5 = FUN_1008fd59c;
  thunk_FUN_10064a5bc(FUN_1008fd59c,puVar2,param_11);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100f11fa0;
  _swift_allocObject(&DAT_100f11fa0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  *(undefined8 *)(puVar2 + 0x28) = param_10;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_10);
  pcVar4 = thunk_FUN_1008fd83c;
  thunk_FUN_10064a5bc(thunk_FUN_1008fd83c,puVar2,param_12);
  _swift_release(pcVar5);
  _swift_release(puVar2);
  puVar2 = &DAT_100f11fc8;
  _swift_allocObject(&DAT_100f11fc8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_12;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _swift_unknownObjectRetain(param_1);
  pcVar5 = FUN_1008fd5bc;
  FUN_100649240(FUN_1008fd5bc,puVar2);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  return pcVar5;
}



/* Address: 0x1008ebd6c | FUN_1008ebd6c */

code * FUN_1008ebd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_7 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  (*param_4)(param_6,&PTR_PTR_100f0f5c8);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_1,param_7);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar7 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f11ff0;
  _swift_allocObject(&DAT_100f11ff0,uVar7 + lVar6,uVar4 | 7);
  *(long *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  (**(code **)(lVar5 + 0x20))
            (puVar1 + uVar7,&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_7)
  ;
  puVar2 = &DAT_100f12018;
  _swift_allocObject(&DAT_100f12018,0x30,7);
  *(long *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(code **)(puVar2 + 0x20) = thunk_FUN_1008fd898;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  pcVar3 = FUN_1008fd58c;
  thunk_FUN_10064b138(FUN_1008fd58c,puVar2,param_7);
  _swift_release(param_6);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x1008ebe84 | FUN_1008ebe84 */

void FUN_1008ebe84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  code *in_x6;
  
  (*in_x6)(param_1,2,0);
  uVar1 = 0;
  FUN_100947828(0);
  FUN_10063dd74(param_1,uVar1,in_x5,&PTR_PTR_100f19fa8);
  return;
}



/* Address: 0x1008ebee0 | thunk_FUN_1008ebee4 */

void thunk_FUN_1008ebee4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008ebee4 | FUN_1008ebee4 */

void FUN_1008ebee4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008ebf18 | thunk_FUN_1008ebf1c */

void thunk_FUN_1008ebf1c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008ebf1c | FUN_1008ebf1c */

void FUN_1008ebf1c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008ebf60 | FUN_1008ebf60 */

long FUN_1008ebf60(class_t *param_1,undefined8 param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  long lVar3;
  long unaff_x20;
  
  pcVar2 = param_1;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    _swift_allocObject();
    lVar3 = unaff_x20;
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(long *)(unaff_x20 + 0x30) = lVar3;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined **)(unaff_x20 + 0x50) = &DAT_100f10880;
    *(undefined ***)(unaff_x20 + 0x58) = &PTR_PTR_100f10900;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ebfec);
  (*pcVar1)();
}



/* Address: 0x1008ebfec | FUN_1008ebfec */

long FUN_1008ebfec(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(class_t **)(unaff_x20 + 0x30) = pcVar1;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined **)(unaff_x20 + 0x50) = &DAT_100f10880;
    *(undefined ***)(unaff_x20 + 0x58) = &PTR_PTR_100f10900;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance(unaff_x20);
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008ec09c | FUN_1008ec09c */

long FUN_1008ec09c(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(class_t **)(unaff_x20 + 0x30) = pcVar1;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined **)(unaff_x20 + 0x50) = &DAT_100f10880;
    *(undefined ***)(unaff_x20 + 0x58) = &PTR_PTR_100f10900;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008ec138 | thunk_FUN_1008ec13c */

void thunk_FUN_1008ec13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  FUN_100004550(uVar1,uVar2);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x1008ec13c | FUN_1008ec13c */

void FUN_1008ec13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  FUN_100004550(uVar1,uVar2);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x1008ec174 | thunk_FUN_1008ec178 */

void thunk_FUN_1008ec178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x1008ec178 | FUN_1008ec178 */

void FUN_1008ec178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x1008ec1f8 | FUN_1008ec1f8 */

/* WARNING: Removing unreachable block (ram,0x0001008ec514) */
/* WARNING: Removing unreachable block (ram,0x0001008ec4f4) */

undefined * FUN_1008ec1f8(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar2 = param_1;
  FUN_10095ee24();
  param_1 = param_1 & 0xffffffff;
  FUN_1008ec65c(param_1,uVar2 & 0xffffffff);
  puVar3 = &DAT_100f107c0;
  _swift_allocObject(&DAT_100f107c0,0x14,7);
  *(int *)(puVar3 + 0x10) = (int)uVar2;
  puVar4 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar12 = *(long *)(param_1 + 0x30);
  uVar14 = *(ulong *)(param_1 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar14;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f107e8;
  _swift_allocObject(&DAT_100f107e8,0x30,7);
  *(ulong *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = FUN_1008fa06c;
  *(undefined **)(puVar5 + 0x28) = puVar3;
  uVar11 = uVar14;
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar12 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar3,2);
  _swift_unknownObjectRetain(uVar14);
  uVar14 = uVar11;
  (*pcVar13)(uVar11,lVar12);
  if ((uVar14 & 1) == 0) {
    puVar6 = &DAT_100f10810;
    _swift_allocObject(&DAT_100f10810,0x28,7);
    *(ulong *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_1008fa084;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    pcVar13 = *(code **)(lVar12 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar5);
    (*pcVar13)(FUN_1008fa090,puVar6,uVar11,lVar12);
    _swift_release(puVar3);
    _swift_release(param_1);
    _swift_release(puVar6);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    bVar1 = *(byte *)(param_1 + 0x20);
    uVar11 = (ulong)bVar1;
    if (bVar1 == 1) {
      FUN_1008fde6c(uVar8,uVar10);
      FUN_10095d958(uVar2);
      _swift_willThrow();
      uVar11 = 1;
      uVar7 = uVar8;
      uVar9 = uVar10;
      FUN_1008f1b58(uVar8,uVar10,1,FUN_1008fde58);
      FUN_1008fde8c(uVar8,uVar10,1);
    }
    else if (bVar1 == 0xff) {
      _swift_beginAccess(param_1 + 0x38,auStack_98,0x21,0);
      FUN_10064967c(FUN_1008fa084,puVar5);
      _swift_endAccess(auStack_98);
      uVar11 = 0;
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      FUN_1008f1b58(uVar8,uVar10,uVar11,FUN_1008fde58);
      uVar7 = uVar8;
      uVar9 = uVar10;
    }
    FUN_1006486f8(uVar7,uVar9,uVar11);
    FUN_100004550(uVar7,uVar9);
    _swift_release(puVar3);
    _swift_release(param_1);
    _swift_bridgeObjectRelease(uVar11);
  }
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(param_1);
  _swift_release(puVar5);
  return puVar4;
}



/* Address: 0x1008ec534 | FUN_1008ec534 */

void FUN_1008ec534(undefined4 param_1,undefined4 param_2)

{
  FUN_1008ec65c(param_1,param_2);
  return;
}



/* Address: 0x1008ec544 | FUN_1008ec544 */

void FUN_1008ec544(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_10095d958(param_2);
  if (unaff_x21 == 0) {
    _swift_willThrow();
    _swift_errorRetain(param_1);
    return;
  }
  _swift_unexpectedError();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ec5a0);
  (*pcVar1)();
}



/* Address: 0x1008ec5a0 | FUN_1008ec5a0 */

void FUN_1008ec5a0(undefined4 param_1)

{
  FUN_1008ec65c(param_1,0x100000000);
  return;
}



/* Address: 0x1008ec5b0 | FUN_1008ec5b0 */

void FUN_1008ec5b0(undefined4 param_1)

{
  FUN_1008ec65c(0x100000000,param_1);
  return;
}



/* Address: 0x1008ec5c0 | FUN_1008ec5c0 */

undefined8 * FUN_1008ec5c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar5 = *(long *)(param_2 + 8);
  local_48 = param_1;
  (**(code **)(lVar5 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  puVar3 = &DAT_100febf90;
  local_58 = param_1;
  lStack_50 = param_2;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  puVar4 = &local_58;
  FUN_10063dc68(puVar4,uVar2,puVar3,lVar5);
  _swift_unknownObjectRelease(uVar1);
  return puVar4;
}



/* Address: 0x1008ec65c | FUN_1008ec65c */

/* WARNING: Removing unreachable block (ram,0x0001008ec89c) */
/* WARNING: Removing unreachable block (ram,0x0001008ec804) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8a0) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8ac) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8b4) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8bc) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8c0) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8c8) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8d0) */
/* WARNING: Removing unreachable block (ram,0x0001008ec764) */
/* WARNING: Removing unreachable block (ram,0x0001008ec8e8) */
/* WARNING: Removing unreachable block (ram,0x0001008ec938) */

code * FUN_1008ec65c(ulong param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  class_t *pcVar5;
  long lVar6;
  class_t *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  class_t *pcVar12;
  code *pcVar13;
  class_t *pcVar14;
  int iVar15;
  class_t *pcVar16;
  ulong uVar17;
  class_t *pcVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  uVar17 = param_1 & 0xff00000000;
  iVar23 = (int)param_1;
  if ((uVar17 != 0x100000000) && (iVar23 < 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2d4);
    (*pcVar3)();
  }
  uVar22 = param_2 & 0xff00000000;
  iVar15 = (int)param_2;
  if ((uVar22 != 0x100000000) && (iVar15 < 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2d8);
    (*pcVar3)();
  }
  if (uVar17 == 0x100000000) {
    if (uVar22 == 0x100000000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2ec);
      (*pcVar3)();
    }
  }
  else if ((uVar22 != 0x100000000) && (iVar23 == iVar15)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ec6c8);
    (*pcVar3)();
  }
  pcVar5 = *(class_t **)(param_3 + 0x10);
  lVar25 = *(long *)(param_3 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar25 + 0x10))();
  _swift_beginAccess(param_3 + 0x30,auStack_80,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar21 = *(undefined8 *)(param_3 + 0x20);
  _swift_bridgeObjectRetain();
  FUN_100011128(uVar21,uVar1);
  if (uVar17 != 0x100000000) {
    FUN_1008f9f68(param_1);
  }
  if (uVar22 != 0x100000000) {
    FUN_1008f9f68(param_2);
  }
  if (uVar17 == 0x100000000) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    FUN_100938878();
    _swift_allocObject();
    if (iVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2dc);
      (*pcVar3)();
    }
    *(int *)(lVar6 + 0x10) = iVar23;
  }
  pcVar7 = pcVar5;
  if (uVar22 == 0x100000000) {
    pcVar14 = pcVar5;
    _object_getClass();
    if (pcVar14 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2e0);
      (*pcVar3)();
    }
    FUN_10093855c(0);
    _swift_allocObject();
    _swift_retain(lVar6);
    _swift_unknownObjectRetain();
    FUN_100937e3c();
    lVar24 = 0;
  }
  else {
    lVar24 = 0;
    FUN_100938878();
    _swift_allocObject();
    if (iVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2e4);
      (*pcVar3)();
    }
    *(int *)(lVar24 + 0x10) = iVar15;
    pcVar14 = pcVar5;
    _object_getClass();
    if (pcVar14 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed2e8);
      (*pcVar3)();
    }
    FUN_10093855c(0);
    _swift_allocObject();
    _swift_retain(lVar6);
    _swift_unknownObjectRetain(pcVar5);
    _swift_retain(lVar24);
    FUN_100937e3c(pcVar5,lVar6,lVar24);
  }
  bVar4 = uVar22 == 0x100000000;
  pcVar14 = pcVar5;
  _swift_getObjectType();
  pcVar16 = pcVar14;
  (**(code **)(lVar25 + 0x10))();
  if (((ulong)pcVar16 & 1) == 0) {
    puVar8 = &DAT_100f11348;
    _swift_allocObject(&DAT_100f11348,0x52,7);
    *(class_t **)(puVar8 + 0x10) = pcVar5;
    *(long *)(puVar8 + 0x18) = lVar25;
    *(undefined8 *)(puVar8 + 0x20) = uVar2;
    *(class_t **)(puVar8 + 0x28) = pcVar7;
    *(undefined8 *)(puVar8 + 0x30) = uVar21;
    *(undefined8 *)(puVar8 + 0x38) = uVar1;
    *(code **)(puVar8 + 0x40) = FUN_1008ec5c0;
    *(undefined8 *)(puVar8 + 0x48) = 0;
    puVar8[0x50] = lVar6 == 0;
    puVar8[0x51] = bVar4;
    FUN_100011128(uVar21,uVar1);
    _swift_unknownObjectRetain(pcVar5);
    _swift_retain(pcVar7);
    puVar9 = &DAT_100febf90;
    FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
    pcVar3 = FUN_1008fa88c;
    FUN_100641014(FUN_1008fa88c,puVar8,pcVar14,puVar9,lVar25);
    _swift_release(pcVar7);
    FUN_100004550(uVar21,uVar1);
    _swift_release(lVar24);
    _swift_release(puVar8);
    _swift_unknownObjectRelease(pcVar5);
  }
  else {
    pcVar14 = pcVar7;
    FUN_100623594(pcVar7,&PTR_PTR_100f0f5c8,uVar2);
    FUN_100011128(uVar21,uVar1);
    _swift_retain(pcVar7);
    pcVar16 = pcVar14;
    FUN_1008facec(pcVar14,uVar21,uVar1,pcVar7);
    _swift_release(pcVar7);
    FUN_100004550(uVar21,uVar1);
    _swift_release(pcVar14);
    _swift_retain(pcVar7);
    pcVar14 = pcVar16;
    FUN_1008fb7bc(pcVar16,pcVar7);
    _swift_release(pcVar16);
    _swift_release(pcVar7);
    puVar8 = &DAT_100f11370;
    _swift_allocObject(&DAT_100f11370,0x28,7);
    *(class_t **)(puVar8 + 0x10) = pcVar5;
    *(long *)(puVar8 + 0x18) = lVar25;
    *(class_t **)(puVar8 + 0x20) = pcVar7;
    pcVar3 = (code *)&DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    pcVar20 = pcVar3;
    _swift_allocObject();
    pcVar18 = pcVar14[1].superclass;
    pcVar12 = pcVar14[1].isa;
    *(class_t **)(pcVar20 + 0x30) = pcVar14[1].superclass;
    *(class_t **)(pcVar20 + 0x28) = pcVar12;
    *(undefined8 *)(pcVar20 + 0x10) = 0;
    *(undefined8 *)(pcVar20 + 0x18) = 0;
    pcVar20[0x20] = (code)0xff;
    *(undefined8 *)(pcVar20 + 0x38) = 0;
    *(undefined8 *)(pcVar20 + 0x40) = 0;
    *(undefined8 *)(pcVar20 + 0x48) = 0;
    puVar9 = &DAT_100f11398;
    _swift_allocObject(&DAT_100f11398,0x30,7);
    *(class_t **)(puVar9 + 0x10) = pcVar14;
    *(code **)(puVar9 + 0x18) = FUN_1008fba54;
    *(undefined **)(puVar9 + 0x20) = puVar8;
    *(code **)(puVar9 + 0x28) = pcVar20;
    pcVar16 = pcVar12;
    _swift_getObjectType();
    pcVar11 = (code *)pcVar18->cache;
    _swift_unknownObjectRetain_n(pcVar5,2);
    _swift_retain_n(pcVar7,2);
    _swift_retain_n(pcVar14,2);
    _swift_retain_n(puVar8,2);
    _swift_retain_n(pcVar20,2);
    _swift_unknownObjectRetain(pcVar12);
    pcVar12 = pcVar16;
    (*pcVar11)(pcVar16,pcVar18);
    if (((ulong)pcVar12 & 1) == 0) {
      puVar10 = &DAT_100f113c0;
      _swift_allocObject(&DAT_100f113c0,0x28,7);
      *(class_t **)(puVar10 + 0x10) = pcVar14;
      *(code **)(puVar10 + 0x18) = FUN_1008fba60;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcVar11 = (code *)pcVar18->vtable;
      _swift_retain(pcVar14);
      _swift_retain(puVar9);
      (*pcVar11)(thunk_FUN_1008fa090,puVar10,pcVar16,pcVar18);
      _swift_release(puVar8);
      _swift_release(pcVar14);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(&pcVar14->cache,auStack_e8,0,0);
      if (*(char *)&pcVar14->data == -1) {
        _swift_beginAccess(&pcVar14[1].cache,auStack_a0,0x21,0);
        FUN_10064967c(FUN_1008fba60,puVar9);
        _swift_endAccess(auStack_a0);
        pcVar16 = (class_t *)0x0;
        pcVar11 = (code *)0x0;
        pcVar12 = (class_t *)0x0;
      }
      else {
        _swift_unknownObjectRetain(pcVar5);
        _swift_retain(pcVar7);
        pcVar16 = pcVar14;
        pcVar11 = pcVar20;
        pcVar12 = pcVar5;
        FUN_1008fbac0(pcVar14,pcVar20,pcVar5,lVar25,pcVar7);
        _swift_unknownObjectRelease(pcVar5);
        _swift_release(pcVar7);
      }
      FUN_1006486f8(pcVar16,pcVar11,pcVar12);
      FUN_100004550(pcVar16,pcVar11);
      _swift_release(puVar8);
      _swift_release(pcVar14);
      _swift_bridgeObjectRelease(pcVar12);
    }
    _swift_release(pcVar20);
    _swift_release(pcVar7);
    _swift_unknownObjectRelease(pcVar5);
    _swift_release(puVar8);
    _swift_release(pcVar14);
    _swift_release(puVar9);
    puVar8 = &DAT_100f113e8;
    _swift_allocObject(&DAT_100f113e8,0x21,7);
    puVar8[0x10] = lVar6 == 0;
    *(class_t **)(puVar8 + 0x18) = pcVar7;
    puVar8[0x20] = bVar4;
    pcVar11 = pcVar3;
    _swift_allocObject(pcVar3,0x50,7);
    lVar25 = *(long *)(pcVar20 + 0x30);
    uVar22 = *(ulong *)(pcVar20 + 0x28);
    *(undefined8 *)(pcVar11 + 0x30) = *(undefined8 *)(pcVar20 + 0x30);
    *(ulong *)(pcVar11 + 0x28) = uVar22;
    *(undefined8 *)(pcVar11 + 0x10) = 0;
    *(undefined8 *)(pcVar11 + 0x18) = 0;
    pcVar11[0x20] = (code)0xff;
    *(undefined8 *)(pcVar11 + 0x38) = 0;
    *(undefined8 *)(pcVar11 + 0x40) = 0;
    *(undefined8 *)(pcVar11 + 0x48) = 0;
    puVar9 = &DAT_100f11410;
    _swift_allocObject(&DAT_100f11410,0x30,7);
    *(code **)(puVar9 + 0x10) = pcVar20;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fd398;
    *(undefined **)(puVar9 + 0x20) = puVar8;
    *(code **)(puVar9 + 0x28) = pcVar11;
    uVar17 = uVar22;
    _swift_getObjectType();
    pcVar19 = *(code **)(lVar25 + 0x10);
    _swift_retain_n(pcVar7,3);
    _swift_retain_n(pcVar20,2);
    _swift_retain_n(puVar8,2);
    _swift_retain_n(pcVar11,2);
    _swift_unknownObjectRetain(uVar22);
    uVar22 = uVar17;
    (*pcVar19)(uVar17,lVar25);
    if ((uVar22 & 1) == 0) {
      puVar10 = &DAT_100f11438;
      _swift_allocObject(&DAT_100f11438,0x28,7);
      *(code **)(puVar10 + 0x10) = pcVar20;
      *(code **)(puVar10 + 0x18) = thunk_FUN_1008fba60;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcVar19 = *(code **)(lVar25 + 0x18);
      _swift_retain(pcVar20);
      _swift_retain(puVar9);
      (*pcVar19)(thunk_FUN_1008fa090,puVar10,uVar17,lVar25);
      _swift_release(puVar8);
      _swift_release(pcVar20);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(pcVar20 + 0x10,auStack_d0,0,0);
      if (pcVar20[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar20 + 0x38,auStack_a0,0x21,0);
        FUN_10064967c(thunk_FUN_1008fba60,puVar9);
        _swift_endAccess(auStack_a0);
        pcVar19 = (code *)0x0;
        pcVar13 = (code *)0x0;
        uVar17 = 0;
      }
      else {
        uVar17 = (ulong)(lVar6 == 0);
        _swift_retain(pcVar7);
        pcVar19 = pcVar20;
        pcVar13 = pcVar11;
        FUN_1008fc0a4(pcVar20,pcVar11,uVar17,pcVar7,bVar4);
        _swift_release(pcVar7);
      }
      FUN_1006486f8(pcVar19,pcVar13,uVar17);
      FUN_100004550(pcVar19,pcVar13);
      _swift_release(puVar8);
      _swift_release(pcVar20);
      _swift_bridgeObjectRelease(uVar17);
    }
    _swift_release(pcVar11);
    _swift_release(pcVar7);
    _swift_release(puVar8);
    _swift_release(pcVar20);
    _swift_release(puVar9);
    _swift_allocObject(pcVar3,0x50,7);
    lVar25 = *(long *)(pcVar11 + 0x30);
    uVar22 = *(ulong *)(pcVar11 + 0x28);
    *(undefined8 *)(pcVar3 + 0x30) = *(undefined8 *)(pcVar11 + 0x30);
    *(ulong *)(pcVar3 + 0x28) = uVar22;
    *(undefined8 *)(pcVar3 + 0x10) = 0;
    *(undefined8 *)(pcVar3 + 0x18) = 0;
    pcVar3[0x20] = (code)0xff;
    *(undefined8 *)(pcVar3 + 0x40) = 0;
    *(undefined8 *)(pcVar3 + 0x48) = 0;
    *(undefined8 *)(pcVar3 + 0x38) = 0;
    puVar8 = &DAT_100f11460;
    _swift_allocObject(&DAT_100f11460,0x30,7);
    *(code **)(puVar8 + 0x10) = pcVar11;
    *(code **)(puVar8 + 0x18) = pcVar3;
    *(code **)(puVar8 + 0x20) = FUN_1008fba94;
    *(class_t **)(puVar8 + 0x28) = pcVar7;
    uVar17 = uVar22;
    _swift_getObjectType();
    pcVar20 = *(code **)(lVar25 + 0x10);
    _swift_retain_n(pcVar11,2);
    _swift_retain_n(pcVar3,2);
    _swift_retain_n(pcVar7,3);
    _swift_unknownObjectRetain(uVar22);
    uVar22 = uVar17;
    (*pcVar20)(uVar17,lVar25);
    if ((uVar22 & 1) == 0) {
      puVar9 = &DAT_100f11488;
      _swift_allocObject(&DAT_100f11488,0x28,7);
      *(code **)(puVar9 + 0x10) = pcVar11;
      *(code **)(puVar9 + 0x18) = FUN_1008fbab4;
      *(undefined **)(puVar9 + 0x20) = puVar8;
      pcVar20 = *(code **)(lVar25 + 0x18);
      _swift_retain(pcVar11);
      _swift_retain(puVar8);
      (*pcVar20)(thunk_FUN_1008fa090,puVar9,uVar17,lVar25);
      _swift_release(pcVar7);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(puVar9);
    }
    else {
      _swift_beginAccess(pcVar11 + 0x10,auStack_a0,0,0);
      if (pcVar11[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar11 + 0x38,auStack_b8,0x21,0);
        FUN_10064967c(FUN_1008fbab4,puVar8);
        _swift_endAccess(auStack_b8);
        pcVar20 = (code *)0x0;
        pcVar19 = (code *)0x0;
        pcVar14 = (class_t *)0x0;
      }
      else {
        _swift_retain(pcVar7);
        pcVar20 = pcVar11;
        pcVar19 = pcVar3;
        pcVar14 = pcVar7;
        FUN_1008fc5ec(pcVar11,pcVar3,pcVar7);
        _swift_release(pcVar7);
      }
      FUN_1006486f8(pcVar20,pcVar19,pcVar14);
      FUN_100004550(pcVar20,pcVar19);
      _swift_release(pcVar7);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(pcVar14);
    }
    _swift_unknownObjectRelease(pcVar5);
    FUN_100004550(uVar21,uVar1);
    _swift_release(lVar24);
    _swift_release(pcVar3);
    _swift_release(puVar8);
    _swift_release_n(pcVar7,3);
    _swift_release_n(pcVar11,2);
  }
  _swift_release(lVar6);
  return pcVar3;
}



/* Address: 0x1008ed2ec | FUN_1008ed2ec */

/* WARNING: Removing unreachable block (ram,0x0001008ed540) */
/* WARNING: Removing unreachable block (ram,0x0001008ed4a4) */
/* WARNING: Removing unreachable block (ram,0x0001008ed544) */
/* WARNING: Removing unreachable block (ram,0x0001008ed550) */
/* WARNING: Removing unreachable block (ram,0x0001008ed558) */
/* WARNING: Removing unreachable block (ram,0x0001008ed560) */
/* WARNING: Removing unreachable block (ram,0x0001008ed564) */
/* WARNING: Removing unreachable block (ram,0x0001008ed56c) */
/* WARNING: Removing unreachable block (ram,0x0001008ed574) */
/* WARNING: Removing unreachable block (ram,0x0001008ed3fc) */
/* WARNING: Removing unreachable block (ram,0x0001008ed58c) */
/* WARNING: Removing unreachable block (ram,0x0001008ed5c4) */

class_t * FUN_1008ed2ec(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  class_t *pcVar4;
  long lVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [24];
  
  uVar13 = param_1 & 0xff00000000;
  iVar14 = (int)param_1;
  if ((uVar13 != 0x100000000) && (iVar14 < 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed778);
    (*pcVar3)();
  }
  uVar11 = param_2 & 0xff00000000;
  iVar12 = (int)param_2;
  if ((uVar11 != 0x100000000) && (iVar12 < 0)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed77c);
    (*pcVar3)();
  }
  if (uVar13 == 0x100000000) {
    if (uVar11 == 0x100000000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed790);
      (*pcVar3)();
    }
  }
  else if ((uVar11 != 0x100000000) && (iVar14 == iVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed358);
    (*pcVar3)();
  }
  pcVar4 = *(class_t **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x10))();
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(uVar2);
  FUN_100011128(uVar16,uVar1);
  if (uVar13 != 0x100000000) {
    FUN_1008f9f68(param_1);
  }
  if (uVar11 != 0x100000000) {
    FUN_1008f9f68(param_2);
  }
  if (uVar13 == 0x100000000) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    FUN_100938878();
    _swift_allocObject();
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed780);
      (*pcVar3)();
    }
    *(int *)(lVar5 + 0x10) = iVar14;
  }
  pcVar7 = pcVar4;
  if (uVar11 == 0x100000000) {
    pcVar6 = pcVar4;
    _object_getClass();
    if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed784);
      (*pcVar3)();
    }
    FUN_10093855c(0);
    _swift_allocObject();
    _swift_retain(lVar5);
    _swift_unknownObjectRetain();
    FUN_100937e3c();
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    FUN_100938878();
    _swift_allocObject();
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed788);
      (*pcVar3)();
    }
    *(int *)(lVar15 + 0x10) = iVar12;
    pcVar6 = pcVar4;
    _object_getClass();
    if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ed78c);
      (*pcVar3)();
    }
    FUN_10093855c(0);
    _swift_allocObject();
    _swift_retain(lVar5);
    _swift_unknownObjectRetain(pcVar4);
    _swift_retain(lVar15);
    FUN_100937e3c(pcVar4,lVar5,lVar15);
  }
  pcVar6 = pcVar4;
  _swift_getObjectType();
  pcVar8 = pcVar6;
  (**(code **)(lVar10 + 0x10))();
  if (((ulong)pcVar8 & 1) == 0) {
    puVar9 = &DAT_100f110a0;
    _swift_allocObject(&DAT_100f110a0,0x5a,7);
    *(undefined8 *)(puVar9 + 0x10) = param_5;
    *(class_t **)(puVar9 + 0x18) = pcVar4;
    *(long *)(puVar9 + 0x20) = lVar10;
    *(undefined8 *)(puVar9 + 0x28) = uVar2;
    *(class_t **)(puVar9 + 0x30) = pcVar7;
    *(undefined8 *)(puVar9 + 0x38) = uVar16;
    *(undefined8 *)(puVar9 + 0x40) = uVar1;
    *(undefined8 *)(puVar9 + 0x48) = param_3;
    *(undefined8 *)(puVar9 + 0x50) = param_4;
    puVar9[0x58] = lVar5 == 0;
    puVar9[0x59] = uVar11 == 0x100000000;
    FUN_100011128(uVar16,uVar1);
    _swift_unknownObjectRetain(pcVar4);
    _swift_retain(pcVar7);
    _swift_retain(param_4);
    pcVar3 = FUN_1008fa680;
    FUN_100641014(FUN_1008fa680,puVar9,pcVar6,param_5,lVar10);
    _swift_release(pcVar7);
    FUN_100004550(uVar16,uVar1);
    _swift_release(lVar15);
    _swift_release(puVar9);
    _swift_unknownObjectRelease(pcVar4);
  }
  else {
    pcVar3 = (code *)pcVar4;
    FUN_1008edc10(pcVar4,lVar10,uVar2,pcVar7,uVar16,uVar1,param_3,param_4,lVar5 == 0);
    FUN_100004550(uVar16,uVar1);
    _swift_release(lVar15);
    _swift_bridgeObjectRelease(uVar2);
    _swift_release(pcVar7);
    _swift_unknownObjectRelease(pcVar4);
  }
  _swift_release(lVar5);
  return (class_t *)pcVar3;
}



/* Address: 0x1008ed790 | thunk_FUN_1008ec1f8 */

void thunk_FUN_1008ec1f8(void)

{
  FUN_1008ec1f8();
  return;
}



/* Address: 0x1008ed794 | FUN_1008ed794 */

void FUN_1008ed794(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100004594(unaff_x20 + 0x38);
  return;
}



/* Address: 0x1008ed7c8 | FUN_1008ed7c8 */

void FUN_1008ed7c8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100004594(unaff_x20 + 0x38);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008ed804 | FUN_1008ed804 */

void FUN_1008ed804(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined4 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008ed828,0,0);
  return;
}



/* Address: 0x1008ed828 | FUN_1008ed828 */

/* WARNING: Removing unreachable block (ram,0x0001008ed85c) */

void FUN_1008ed828(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = (ulong)*(uint *)(unaff_x22 + 0x48);
  FUN_10095ee24();
  *(int *)(unaff_x22 + 0x4c) = (int)uVar1;
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008ed8d8;
  FUN_1008ed9c4(plVar2,*(undefined8 *)(unaff_x22 + 0x10),*(undefined4 *)(unaff_x22 + 0x48),uVar1,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1008ed8d8 | FUN_1008ed8d8 */

void FUN_1008ed8d8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1008ed944,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008ed940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008ed944 | FUN_1008ed944 */

/* WARNING: Removing unreachable block (ram,0x0001008ed974) */

void FUN_1008ed944(void)

{
  long unaff_x22;
  
  FUN_10095d958(*(undefined4 *)(unaff_x22 + 0x4c));
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001008ed9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008ed9c4 | FUN_1008ed9c4 */

void FUN_1008ed9c4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1008eda5c(plVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1008eda5c | FUN_1008eda5c */

void FUN_1008eda5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008eda80,0,0);
  return;
}



/* Address: 0x1008eda80 | FUN_1008eda80 */

void FUN_1008eda80(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffffff;
  FUN_1008ed2ec(uVar1,*(ulong *)(unaff_x22 + 0x20) & 0xffffffffff,*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005dbf20;
  FUN_1005da4a4(plVar2,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1008edaf8 | FUN_1008edaf8 */

void FUN_1008edaf8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1008eda5c(plVar1,param_1,param_2,0x100000000,param_3,param_4,param_5);
  return;
}



/* Address: 0x1008edb84 | FUN_1008edb84 */

void FUN_1008edb84(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1008eda5c(plVar1,param_1,0x100000000,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1008edc10 | FUN_1008edc10 */

code * FUN_1008edc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar2 = &DAT_100f110c8;
  _swift_allocObject(&DAT_100f110c8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _swift_retain();
  FUN_100011128(param_5,param_6);
  _swift_retain(param_4);
  uVar3 = uVar1;
  FUN_1008f7070(uVar1,FUN_1008fa6c8,puVar2);
  _swift_release(uVar1);
  _swift_release_n(puVar2,2);
  puVar2 = &DAT_100f110f0;
  _swift_allocObject(&DAT_100f110f0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _swift_retain(param_4);
  _swift_retain(param_8);
  pcVar4 = FUN_1008fa6e4;
  thunk_FUN_10064a5bc(FUN_1008fa6e4,puVar2,param_11);
  _swift_release(uVar3);
  _swift_release(puVar2);
  puVar2 = &DAT_100f11118;
  _swift_allocObject(&DAT_100f11118,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  pcVar5 = FUN_1008fa720;
  thunk_FUN_10064a5bc(FUN_1008fa720,puVar2,param_11);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100f11140;
  _swift_allocObject(&DAT_100f11140,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  puVar2[0x18] = (undefined1)param_9;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  puVar2[0x28] = param_9._1_1_;
  _swift_retain_n(param_4,2);
  pcVar4 = FUN_1008fa750;
  thunk_FUN_10064a5bc(FUN_1008fa750,puVar2,param_11);
  _swift_release(pcVar5);
  _swift_release(puVar2);
  puVar2 = &DAT_100f11168;
  _swift_allocObject(&DAT_100f11168,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_11;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  pcVar5 = FUN_1008fa764;
  FUN_100649240(FUN_1008fa764,puVar2);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  return pcVar5;
}



/* Address: 0x1008ede54 | FUN_1008ede54 */

undefined * FUN_1008ede54(code *param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  if (param_1 == (code *)0x0) {
    lVar2 = *(long *)(param_3 + 0x30);
    ppuVar1 = &PTR___tlv_bootstrap_101048e48;
    (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(lVar2 + 0x40));
    if (*ppuVar1 == extraout_x8) {
      _swift_beginAccess(lVar2 + 0x50,auStack_48,0,0);
      puVar3 = *(undefined **)(lVar2 + 0x50);
      if (puVar3 != (undefined *)0x0) {
        _swift_retain(puVar3);
        return puVar3;
      }
    }
    param_3 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(long *)(param_3 + 0x20) = lVar2;
    *(undefined ***)(param_3 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(param_3 + 0x10) = 0;
    param_3[0x18] = 0xff;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    _swift_retain(lVar2);
    FUN_1009452c4(0,0,param_3);
  }
  else {
    _swift_retain(param_2);
    (*param_1)(param_3,&PTR_PTR_100f0f5c8);
    FUN_100004550(param_1,param_2);
  }
  return param_3;
}



/* Address: 0x1008edf68 | FUN_1008edf68 */

code * FUN_1008edf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_5 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  uVar1 = param_2;
  FUN_1008f6880(param_2,param_3,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  FUN_1008deafc(uVar1);
  _swift_release(uVar1);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_1,param_5);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100f11230;
  _swift_allocObject(&DAT_100f11230,uVar6 + lVar8,uVar5 | 7);
  *(long *)(puVar2 + 0x10) = param_5;
  (**(code **)(lVar7 + 0x20))
            (puVar2 + uVar6,&stack0xffffffffffffffb0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_5)
  ;
  puVar3 = &DAT_100f11258;
  _swift_allocObject(&DAT_100f11258,0x28,7);
  *(long *)(puVar3 + 0x10) = param_5;
  *(code **)(puVar3 + 0x18) = thunk_FUN_1008fa7e4;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  _swift_retain(uVar1);
  pcVar4 = thunk_FUN_1008fa770;
  thunk_FUN_10064b138(thunk_FUN_1008fa770,puVar3,param_5);
  _swift_release_n(uVar1,2);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x1008ee0b8 | FUN_1008ee0b8 */

code * FUN_1008ee0b8(code *param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  if ((param_3 & 1) == 0) {
    if ((param_5 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_4 + 0x30);
      pcVar5 = param_1;
      _swift_getObjectType(param_1);
      FUN_1008fb190(param_1,uVar2,pcVar5,param_2);
      return param_1;
    }
    uVar1 = 0;
    FUN_10093855c(0);
    uVar2 = 0;
    FUN_100622874(0,"NIOPosix/Bootstrap.swift",0x18,2,0xa6b,uVar1,&PTR_PTR_100f0f570);
    puVar3 = &DAT_100f11640;
    _swift_allocObject(&DAT_100f11640,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    puVar4 = &DAT_100f11668;
    _swift_allocObject(&DAT_100f11668,0x20,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_1008fcb28;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    _swift_unknownObjectRetain(param_1);
  }
  else {
    uVar1 = 0;
    FUN_10093855c(0);
    uVar2 = 1;
    FUN_100622874(1,"NIOPosix/Bootstrap.swift",0x18,2,0xa68,uVar1,&PTR_PTR_100f0f570);
    puVar3 = &DAT_100f11690;
    _swift_allocObject(&DAT_100f11690,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    puVar4 = &DAT_100f116b8;
    _swift_allocObject(&DAT_100f116b8,0x20,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_1008fcb28;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    _swift_unknownObjectRetain(param_1);
  }
  pcVar5 = thunk_FUN_1008fcb38;
  FUN_1008f5090(thunk_FUN_1008fcb38,puVar4);
  _swift_release(uVar2);
  _swift_release(puVar4);
  return pcVar5;
}



/* Address: 0x1008ee25c | FUN_1008ee25c */

void FUN_1008ee25c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar8 = *(long *)(param_5 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  puVar7 = auStack_60 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  local_58 = param_3;
  if ((param_2 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
      FUN_100947828(0);
      FUN_10063dc68(param_1,uVar2,param_5,&PTR_PTR_100f19fa8);
      return;
    }
    uVar1 = 0;
    FUN_10093855c(0);
    uVar2 = 0;
    FUN_100622874(0,"NIOPosix/Bootstrap.swift",0x18,2,0xa6b,uVar1,&PTR_PTR_100f0f570);
    (**(code **)(lVar8 + 0x10))(puVar7,param_1,param_5);
    uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f11190;
    _swift_allocObject(&DAT_100f11190,uVar10 + lVar9,uVar6 | 7);
    *(long *)(puVar3 + 0x10) = param_5;
    (**(code **)(lVar8 + 0x20))(puVar3 + uVar10,puVar7,param_5);
    puVar4 = &DAT_100f111b8;
    _swift_allocObject(&DAT_100f111b8,0x28,7);
    *(long *)(puVar4 + 0x10) = param_5;
    *(code **)(puVar4 + 0x18) = thunk_FUN_1008fa7e4;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    pcVar5 = FUN_1008fa770;
  }
  else {
    uVar1 = 0;
    FUN_10093855c(0);
    uVar2 = 1;
    FUN_100622874(1,"NIOPosix/Bootstrap.swift",0x18,2,0xa68,uVar1,&PTR_PTR_100f0f570);
    (**(code **)(lVar8 + 0x10))(puVar7,param_1,param_5);
    uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f111e0;
    _swift_allocObject(&DAT_100f111e0,uVar10 + lVar9,uVar6 | 7);
    *(long *)(puVar3 + 0x10) = param_5;
    (**(code **)(lVar8 + 0x20))(puVar3 + uVar10,puVar7,param_5);
    puVar4 = &DAT_100f11208;
    _swift_allocObject(&DAT_100f11208,0x28,7);
    *(long *)(puVar4 + 0x10) = param_5;
    *(code **)(puVar4 + 0x18) = thunk_FUN_1008fa7e4;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    pcVar5 = thunk_FUN_1008fa770;
  }
  thunk_FUN_10064b138(pcVar5,puVar4,param_5);
  _swift_release(uVar2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008ee488 | FUN_1008ee488 */

undefined * FUN_1008ee488(undefined8 param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  (*param_3)(param_1,2,0);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  *(undefined ***)(puVar1 + 0x30) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 1;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  _swift_retain(uVar2);
  _swift_errorRetain(param_1);
  return puVar1;
}



/* Address: 0x1008ee51c | FUN_1008ee51c */

void FUN_1008ee51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10094fd38(param_1,2,0);
  uVar1 = 0;
  FUN_100947828(0);
  FUN_10063dd74(param_1,uVar1,param_3,&PTR_PTR_100f19fa8);
  return;
}



/* Address: 0x1008ee578 | FUN_1008ee578 */

undefined *
FUN_1008ee578(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             uint param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar8 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar1 = &DAT_100f11b40;
  _swift_allocObject(&DAT_100f11b40,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(long *)(puVar1 + 0x20) = param_4;
  _swift_retain();
  FUN_100011128(param_5,param_6);
  _swift_retain(param_4);
  lVar6 = lVar8;
  FUN_1008f7070(lVar8,thunk_FUN_1008fa6c8,puVar1);
  _swift_release(lVar8);
  _swift_release_n(puVar1,2);
  _swift_retain(param_4);
  _swift_retain(param_8);
  lVar8 = lVar6;
  FUN_1008fd0dc(lVar6,param_7,param_8,param_4);
  _swift_release(lVar6);
  _swift_release(param_8);
  _swift_release(param_4);
  puVar1 = &DAT_100f11b68;
  _swift_allocObject(&DAT_100f11b68,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = param_4;
  puVar2 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  puVar12 = puVar2;
  _swift_allocObject();
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar13 = *(ulong *)(lVar8 + 0x28);
  *(undefined8 *)(puVar12 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
  *(ulong *)(puVar12 + 0x28) = uVar13;
  *(undefined8 *)(puVar12 + 0x10) = 0;
  *(undefined8 *)(puVar12 + 0x18) = 0;
  puVar12[0x20] = 0xff;
  *(undefined8 *)(puVar12 + 0x38) = 0;
  *(undefined8 *)(puVar12 + 0x40) = 0;
  *(undefined8 *)(puVar12 + 0x48) = 0;
  puVar10 = &DAT_100f11b90;
  _swift_allocObject(&DAT_100f11b90,0x30,7);
  *(long *)(puVar10 + 0x10) = lVar8;
  *(code **)(puVar10 + 0x18) = thunk_FUN_1008fba54;
  *(undefined **)(puVar10 + 0x20) = puVar1;
  *(undefined **)(puVar10 + 0x28) = puVar12;
  uVar3 = uVar13;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar6 + 0x10);
  _swift_retain_n(param_4,2);
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_retain_n(lVar8,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar12,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar3;
  (*pcVar5)(uVar3,lVar6);
  if ((uVar13 & 1) == 0) {
    puVar7 = &DAT_100f11bb8;
    _swift_allocObject(&DAT_100f11bb8,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar8;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1008fba60;
    *(undefined **)(puVar7 + 0x20) = puVar10;
    pcVar5 = *(code **)(lVar6 + 0x18);
    _swift_retain(lVar8);
    _swift_retain(puVar10);
    (*pcVar5)(thunk_FUN_1008fa090,puVar7,uVar3,lVar6);
    _swift_release(puVar1);
    _swift_release(lVar8);
    _swift_release(puVar7);
  }
  else {
    _swift_beginAccess(lVar8 + 0x10,auStack_c8,0,0);
    if (*(char *)(lVar8 + 0x20) == -1) {
      _swift_beginAccess(lVar8 + 0x38,auStack_80,0x21,0);
      FUN_10064967c(thunk_FUN_1008fba60,puVar10);
      _swift_endAccess(auStack_80);
      lVar6 = 0;
      puVar7 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      _swift_retain(param_4);
      _swift_unknownObjectRetain(param_1);
      lVar6 = lVar8;
      puVar7 = puVar12;
      uVar4 = param_1;
      FUN_1008fbac0(lVar8,puVar12,param_1,param_2,param_4);
      _swift_unknownObjectRelease(param_1);
      _swift_release(param_4);
    }
    FUN_1006486f8(lVar6,puVar7,uVar4);
    FUN_100004550(lVar6,puVar7);
    _swift_release(puVar1);
    _swift_release(lVar8);
    _swift_bridgeObjectRelease(uVar4);
  }
  _swift_release(puVar12);
  _swift_release(param_4);
  _swift_unknownObjectRelease(param_1);
  _swift_release(puVar1);
  _swift_release(lVar8);
  _swift_release(puVar10);
  puVar1 = &DAT_100f11be0;
  _swift_allocObject(&DAT_100f11be0,0x21,7);
  puVar1[0x10] = (byte)param_9 & 1;
  *(long *)(puVar1 + 0x18) = param_4;
  puVar1[0x20] = param_9._1_1_ & 1;
  puVar7 = puVar2;
  _swift_allocObject(puVar2,0x50,7);
  lVar8 = *(long *)(puVar12 + 0x30);
  uVar13 = *(ulong *)(puVar12 + 0x28);
  *(undefined8 *)(puVar7 + 0x30) = *(undefined8 *)(puVar12 + 0x30);
  *(ulong *)(puVar7 + 0x28) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  puVar7[0x20] = 0xff;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x40) = 0;
  *(undefined8 *)(puVar7 + 0x48) = 0;
  puVar10 = &DAT_100f11c08;
  _swift_allocObject(&DAT_100f11c08,0x30,7);
  *(undefined **)(puVar10 + 0x10) = puVar12;
  *(code **)(puVar10 + 0x18) = thunk_FUN_1008fd398;
  *(undefined **)(puVar10 + 0x20) = puVar1;
  *(undefined **)(puVar10 + 0x28) = puVar7;
  uVar3 = uVar13;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(param_4,3);
  _swift_retain_n(puVar12,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar7,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar3;
  (*pcVar5)(uVar3,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar9 = &DAT_100f11c30;
    _swift_allocObject(&DAT_100f11c30,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar12;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fba60;
    *(undefined **)(puVar9 + 0x20) = puVar10;
    pcVar5 = *(code **)(lVar8 + 0x18);
    _swift_retain(puVar12);
    _swift_retain(puVar10);
    (*pcVar5)(thunk_FUN_1008fa090,puVar9,uVar3,lVar8);
    _swift_release(puVar1);
    _swift_release(puVar12);
    _swift_release(puVar9);
  }
  else {
    _swift_beginAccess(puVar12 + 0x10,auStack_b0,0,0);
    if (puVar12[0x20] == -1) {
      _swift_beginAccess(puVar12 + 0x38,auStack_80,0x21,0);
      FUN_10064967c(thunk_FUN_1008fba60,puVar10);
      _swift_endAccess(auStack_80);
      puVar9 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      _swift_retain(param_4);
      uVar3 = (ulong)(param_9 & 1);
      puVar9 = puVar12;
      puVar11 = puVar7;
      FUN_1008fc0a4(puVar12,puVar7,uVar3,param_4,param_9._1_1_ & 1);
      _swift_release(param_4);
    }
    FUN_1006486f8(puVar9,puVar11,uVar3);
    FUN_100004550(puVar9,puVar11);
    _swift_release(puVar1);
    _swift_release(puVar12);
    _swift_bridgeObjectRelease(uVar3);
  }
  _swift_release(puVar7);
  _swift_release(param_4);
  _swift_release(puVar1);
  _swift_release(puVar12);
  _swift_release(puVar10);
  _swift_allocObject(puVar2,0x50,7);
  lVar8 = *(long *)(puVar7 + 0x30);
  uVar13 = *(ulong *)(puVar7 + 0x28);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar7 + 0x30);
  *(ulong *)(puVar2 + 0x28) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar1 = &DAT_100f11c58;
  _swift_allocObject(&DAT_100f11c58,0x30,7);
  *(undefined **)(puVar1 + 0x10) = puVar7;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  *(code **)(puVar1 + 0x20) = thunk_FUN_1008fba94;
  *(long *)(puVar1 + 0x28) = param_4;
  uVar3 = uVar13;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar7,2);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(param_4,3);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar3;
  (*pcVar5)(uVar3,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar10 = &DAT_100f11c80;
    _swift_allocObject(&DAT_100f11c80,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar7;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar10 + 0x20) = puVar1;
    pcVar5 = *(code **)(lVar8 + 0x18);
    _swift_retain(puVar7);
    _swift_retain(puVar1);
    (*pcVar5)(thunk_FUN_1008fa090,puVar10,uVar3,lVar8);
    _swift_release(param_4);
    _swift_release(puVar7);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(puVar7 + 0x10,auStack_80,0,0);
    if (puVar7[0x20] == -1) {
      _swift_beginAccess(puVar7 + 0x38,auStack_98,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar1);
      _swift_endAccess(auStack_98);
      puVar10 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      lVar8 = 0;
    }
    else {
      _swift_retain(param_4);
      puVar10 = puVar7;
      puVar12 = puVar2;
      lVar8 = param_4;
      FUN_1008fc5ec(puVar7,puVar2,param_4);
      _swift_release(param_4);
    }
    FUN_1006486f8(puVar10,puVar12,lVar8);
    FUN_100004550(puVar10,puVar12);
    _swift_release(param_4);
    _swift_release(puVar7);
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_release_n(param_4,2);
  _swift_release(puVar2);
  _swift_release(puVar7);
  _swift_release(puVar1);
  return puVar2;
}



/* Address: 0x1008eedb0 | FUN_1008eedb0 */

void FUN_1008eedb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_c0 [128];
  
  puVar2 = auStack_c0;
  FUN_1000f8cac(param_1,auStack_c0,&DAT_100febfb8,&DAT_100c83860);
  FUN_1000f7830(&DAT_100fec458,&DAT_100c83b40);
  _swift_allocObject();
  FUN_1008eeed0();
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  lVar4 = *(long *)(puVar2 + 0x40);
  _swift_getObjectType(uVar3);
  FUN_100907b4c();
  uVar8 = *(undefined8 *)(puVar2 + 0x80);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar4 + 0xb0);
  _swift_unknownObjectRetain(uVar3);
  _swift_retain(puVar2);
  pcVar5 = FUN_1008fdfe0;
  puVar6 = puVar2;
  (*pcVar9)();
  _swift_unknownObjectRelease(uVar3);
  _swift_release(puVar2);
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  uVar1 = *(undefined8 *)(puVar2 + 200);
  uVar7 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xc0) = uVar8;
  *(code **)(puVar2 + 200) = pcVar5;
  *(undefined1 **)(puVar2 + 0xd0) = puVar6;
  FUN_100622430(uVar3,uVar1,uVar7);
  FUN_1008eef78(0);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008eeed0 | FUN_1008eeed0 */

void FUN_1008eeed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined1 *)(unaff_x20 + 0xe0) = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0xe8) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0xf0) = puVar3;
  *(undefined **)(unaff_x20 + 0xf8) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  FUN_1000f8cac(param_1,unaff_x20 + 0x10,&DAT_100febfb8,&DAT_100c83860);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd1) = 0;
  *(undefined8 *)(unaff_x20 + 0xc9) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1000fb4c4(param_1,&DAT_100febfb8,&DAT_100c83860);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined **)(unaff_x20 + 0x130) = puVar3;
  return;
}



/* Address: 0x1008eef78 | FUN_1008eef78 */

void FUN_1008eef78(byte param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  code *pcVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  byte local_71;
  StaticString local_70;
  __uint64 _Stack_68;
  
  uVar1 = (uint)param_1;
  bVar4 = *(byte *)(unaff_x20 + 0xd8);
  if (bVar4 < 3) {
    if (bVar4 == 0) {
      if (param_1 == 0) {
        *(undefined1 *)(unaff_x20 + 0xd8) = 1;
        uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar12 = *(long *)(unaff_x20 + 0x30);
        FUN_100004640(unaff_x20 + 0x10,uVar3);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
        uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
        uVar7 = uVar13;
        (**(code **)(lVar12 + 0x10))(uVar13,uVar2,uVar17,uVar3,lVar12);
        uVar8 = uVar9;
        FUN_100915cc0(uVar9,uVar15);
        _swift_release(uVar7);
        FUN_1008ef9a4(uVar8);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar12 = *(long *)(unaff_x20 + 0x30);
        FUN_100004640(unaff_x20 + 0x10,uVar3);
        (**(code **)(lVar12 + 8))(uVar13,uVar2,uVar17,uVar3,lVar12);
        FUN_100915cc0(uVar9,uVar15);
        _swift_release(uVar13);
        FUN_1008eff24(uVar9);
        _swift_release(uVar8);
        _swift_release(uVar9);
        return;
      }
      goto LAB_1008ef380;
    }
    if (bVar4 == 1) {
      if (uVar1 == 1) {
        *(undefined1 *)(unaff_x20 + 0xd8) = 2;
        uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
        lVar12 = *(long *)(unaff_x20 + 0x40);
        _swift_getObjectType(uVar9);
        FUN_100907b4c();
        uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
        puVar10 = &DAT_100f133a0;
        _swift_allocObject(&DAT_100f133a0,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_1008fe008;
        *(long *)(puVar10 + 0x18) = unaff_x20;
        _swift_getObjectType(uVar9);
        pcVar16 = *(code **)(lVar12 + 0xb0);
        _swift_unknownObjectRetain(uVar9);
        _swift_retain();
        pcVar6 = FUN_1008d39d8;
        puVar14 = puVar10;
        (*pcVar16)();
        _swift_unknownObjectRelease(uVar9);
        _swift_release(puVar10);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x90);
        uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
        uVar15 = *(undefined8 *)(unaff_x20 + 0xa0);
        *(undefined8 *)(unaff_x20 + 0x90) = uVar13;
        *(code **)(unaff_x20 + 0x98) = pcVar6;
        *(undefined **)(unaff_x20 + 0xa0) = puVar14;
        FUN_100622430(uVar9,uVar3,uVar15);
        return;
      }
      if (uVar1 == 2) {
        *(undefined1 *)(unaff_x20 + 0xd8) = 4;
        goto LAB_1008ef330;
      }
    }
    else {
      if (uVar1 == 2) {
        *(undefined1 *)(unaff_x20 + 0xd8) = 5;
        goto LAB_1008ef330;
      }
      if (uVar1 == 3) {
        *(undefined1 *)(unaff_x20 + 0xd8) = 3;
        goto LAB_1008ef330;
      }
    }
  }
  else {
    if (bVar4 < 5) {
      if (bVar4 == 3) {
        if (5 < uVar1) {
LAB_1008ef198:
          if (uVar1 == 6) {
LAB_1008ef1e4:
            *(undefined1 *)(unaff_x20 + 0xd8) = 6;
            FUN_1008f0c1c();
            return;
          }
          if (uVar1 == 7) {
LAB_1008ef1c4:
            FUN_1008ef714();
            return;
          }
          if (uVar1 == 8) {
            return;
          }
          goto LAB_1008ef380;
        }
        if (uVar1 == 2) {
LAB_1008ef300:
          *(undefined1 *)(unaff_x20 + 0xd8) = 5;
          if (*(long *)(unaff_x20 + 0xa8) != 0) {
            return;
          }
          goto LAB_1008ef330;
        }
      }
      else {
        if (5 < uVar1) goto LAB_1008ef198;
        if (uVar1 == 1) goto LAB_1008ef300;
      }
    }
    else {
      if (bVar4 != 5) {
        if (uVar1 - 1 < 7) {
          return;
        }
        goto LAB_1008ef380;
      }
      if (5 < uVar1) {
        if (uVar1 == 6) goto LAB_1008ef1e4;
        if (uVar1 != 7) {
          if (uVar1 == 8) {
            *(undefined1 *)(unaff_x20 + 0xd8) = 6;
            FUN_1008ef7e8();
            return;
          }
          goto LAB_1008ef380;
        }
        goto LAB_1008ef1c4;
      }
      if (uVar1 == 3) {
        return;
      }
    }
    if (uVar1 == 4) {
      uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar13 = *(undefined8 *)(unaff_x20 + 0xb8);
      *(undefined8 *)(unaff_x20 + 0xb0) = 0;
      *(undefined8 *)(unaff_x20 + 0xb8) = 0;
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      FUN_100622430(uVar9,uVar3,uVar13);
LAB_1008ef330:
      FUN_1008ef488();
      return;
    }
  }
  if (uVar1 == 5) {
    *(undefined1 *)(unaff_x20 + 0xd8) = 6;
    FUN_1008ef600();
    return;
  }
LAB_1008ef380:
  local_70.unknown = (undefined *)0x0;
  _Stack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x32,param_2);
  SVar18.bridgeObject = (void *)0x8000000100db4880;
  SVar18.str = (char *)0xd000000000000026;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar18,SVar21);
  local_71 = *(byte *)(unaff_x20 + 0xd8);
  pcVar11 = &DAT_100fec460;
  FUN_1000f7830(&DAT_100fec460,&DAT_100c83b48);
  puVar5 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar14 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  puVar10 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_71,&local_70,pcVar11,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar19.bridgeObject = &DAT_e800000000000000;
  SVar19.str = (char *)0x207475706e69202c;
  SVar22.bridgeObject = puVar10;
  SVar22.str = pcVar11;
  Swift::String::append(SVar19,SVar22);
  puVar10 = &DAT_100fec468;
  local_71 = param_1;
  FUN_1000f7830(&DAT_100fec468,&DAT_100c83b50);
  Swift::__print_unlocked(&local_71,&local_70,puVar10,puVar14,puVar5);
  SVar20.bridgeObject = (void *)0x2;
  SVar20.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar20,local_70,_Stack_68,0xdb4880);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008ef488);
  (*pcVar6)();
}



/* Address: 0x1008ef488 | FUN_1008ef488 */

void FUN_1008ef488(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_68 [24];
  
  if (*(long *)(unaff_x20 + 0xa8) == 0) {
    uVar4 = unaff_x20 + 0xe0;
    _swift_beginAccess(uVar4,auStack_68,0x21,0);
    FUN_100904194();
    _swift_endAccess(auStack_68);
    if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
      _swift_beginAccess(unaff_x20 + 0xf8,auStack_68,0,0);
      puVar8 = *(undefined **)(unaff_x20 + 0xf8);
      if ((ulong)puVar8 >> 0x3e == 0) {
        lVar5 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          _Var1.unknown = puVar8;
        }
        lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar5 == 0) {
        FUN_1008eef78(8);
      }
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar5 = *(long *)(unaff_x20 + 0x40);
      _swift_getObjectType(uVar6);
      FUN_100907b4c();
      uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar5 + 0xb0);
      _swift_unknownObjectRetain(uVar6);
      _swift_retain();
      pcVar3 = FUN_1008fe42c;
      lVar5 = unaff_x20;
      (*pcVar10)();
      _swift_unknownObjectRelease(uVar6);
      _swift_release();
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
      *(undefined8 *)(unaff_x20 + 0xa8) = uVar9;
      *(code **)(unaff_x20 + 0xb0) = pcVar3;
      *(long *)(unaff_x20 + 0xb8) = lVar5;
      FUN_100622430(uVar6,uVar2,uVar7);
      FUN_1008f07a0(uVar4);
      FUN_1005d8534(uVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ef600);
  (*pcVar3)();
}



/* Address: 0x1008ef600 | FUN_1008ef600 */

void FUN_1008ef600(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  
  FUN_1008f0c1c();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar1 = *(long *)(unaff_x20 + 0x88);
  FUN_1008db6c4();
  puVar2 = &DAT_100eeb710;
  uVar7 = 0;
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar3 = *(ulong *)(lVar1 + 0x28);
  lVar6 = *(long *)(lVar1 + 0x30);
  _swift_getObjectType();
  (**(code **)(lVar6 + 0x10))();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    lVar6 = *(long *)(lVar1 + 0x30);
    _swift_getObjectType(uVar4);
    puVar5 = &DAT_100f13670;
    _swift_allocObject(&DAT_100f13670,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar6 + 0x18);
    _swift_retain(lVar1);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008fcb6c,puVar5,uVar4,lVar6);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_10092b398(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1008ef714 | FUN_1008ef714 */

void FUN_1008ef714(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_58,0,0);
  puVar6 = *(undefined **)(unaff_x20 + 0xf8);
  if ((ulong)puVar6 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      _Var1.unknown = puVar6;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x20 + 0xa8);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
      uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
      _swift_retain(lVar4);
      _swift_retain(uVar2);
      FUN_100950b80(lVar4,uVar5,uVar2);
      _swift_release(uVar2);
      _swift_release(lVar4);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xa8);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xb8);
    *(long *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    FUN_100622430(uVar5,uVar2,uVar3);
    FUN_1008ef488();
  }
  return;
}



/* Address: 0x1008ef7e8 | FUN_1008ef7e8 */

void FUN_1008ef7e8(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_78,0,0);
  puVar13 = *(undefined **)(unaff_x20 + 0xf8);
  if ((ulong)puVar13 >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      _Var1.unknown = puVar13;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar7 == 0) {
    FUN_1008f0c1c();
    lVar14 = *(long *)(unaff_x20 + 0x88);
    puVar8 = (undefined8 *)(unaff_x20 + 0x108);
    _swift_beginAccess(puVar8,auStack_90,0,0);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x120);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
    FUN_1008fe550();
    puVar13 = &DAT_100f14508;
    uVar12 = 0;
    _swift_allocError(&DAT_100f14508,puVar8,0,0);
    *puVar8 = uVar10;
    puVar8[1] = uVar4;
    puVar8[2] = uVar2;
    puVar8[3] = uVar5;
    puVar8[4] = uVar3;
    puVar8[5] = uVar6;
    uVar9 = *(ulong *)(lVar14 + 0x28);
    lVar7 = *(long *)(lVar14 + 0x30);
    _swift_getObjectType();
    pcVar15 = *(code **)(lVar7 + 0x10);
    _swift_bridgeObjectRetain(uVar4);
    _swift_errorRetain(uVar5);
    _swift_errorRetain(uVar3);
    _swift_bridgeObjectRetain(uVar6);
    (*pcVar15)(uVar9,lVar7);
    if ((uVar9 & 1) == 0) {
      uVar10 = *(undefined8 *)(lVar14 + 0x28);
      lVar7 = *(long *)(lVar14 + 0x30);
      _swift_getObjectType(uVar10);
      puVar11 = &DAT_100f136e8;
      _swift_allocObject(&DAT_100f136e8,0x20,7);
      *(long *)(puVar11 + 0x10) = lVar14;
      *(undefined **)(puVar11 + 0x18) = puVar13;
      pcVar15 = *(code **)(lVar7 + 0x18);
      _swift_retain(lVar14);
      _swift_errorRetain(puVar13);
      (*pcVar15)(thunk_FUN_1008fcb6c,puVar11,uVar10,lVar7);
      _swift_release(puVar11);
    }
    else {
      puVar11 = puVar13;
      thunk_FUN_10092b398(puVar13);
      FUN_1006486f8();
      FUN_100004550(puVar11,lVar7);
      _swift_bridgeObjectRelease(uVar12);
    }
    _swift_errorRelease(puVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1008ef9a4);
  (*pcVar15)();
}



/* Address: 0x1008ef9a4 | FUN_1008ef9a4 */

void FUN_1008ef9a4(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  puVar4 = puVar3;
  _swift_allocObject();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 0xff;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  puVar5 = &DAT_100f13440;
  _swift_allocObject(&DAT_100f13440,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  *(code **)(puVar5 + 0x20) = FUN_1008fe054;
  *(long *)(puVar5 + 0x28) = unaff_x20;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar10,1);
    uVar6 = 1;
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_98,0x21,0);
      _swift_retain_n();
      _swift_unknownObjectRetain(uVar6);
      _swift_retain(puVar4);
      _swift_retain(param_1);
      FUN_10064967c(thunk_FUN_1008fe018,puVar5);
      _swift_endAccess(auStack_98);
      uVar11 = 0;
      uVar9 = 0;
      pcVar8 = (code *)0x0;
      goto LAB_1008efbc8;
    }
    _swift_beginAccess(unaff_x20 + 0xe0,auStack_98,0x21,0);
    _swift_retain();
    FUN_1008fa5ec(uVar10,cVar1);
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar10,cVar1);
    FUN_10090409c(uVar10);
    _swift_endAccess(auStack_98);
    FUN_1008fa60c(uVar10,cVar1);
    uVar10 = 0;
    uVar6 = 0;
  }
  pcVar8 = FUN_100308524;
  uVar11 = uVar10;
  uVar9 = uVar6;
  FUN_100630334(uVar10,uVar6,FUN_100308524);
  FUN_1002ec258(uVar10,uVar6);
LAB_1008efbc8:
  FUN_1006486f8(uVar11,uVar9,pcVar8);
  FUN_100004550(uVar11,uVar9);
  _swift_release_n();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(pcVar8);
  _swift_allocObject(puVar3,0x48,7);
  uVar6 = *(undefined8 *)(puVar4 + 0x20);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar4 + 0x28);
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  puVar5 = &DAT_100f13468;
  _swift_allocObject(&DAT_100f13468,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(code **)(puVar5 + 0x20) = FUN_1008fe05c;
  *(long *)(puVar5 + 0x28) = unaff_x20;
  _swift_beginAccess(puVar4 + 0x10,auStack_98,0,0);
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  bVar2 = puVar4[0x18];
  uVar7 = (ulong)bVar2;
  if (bVar2 == 1) {
    _swift_beginAccess(unaff_x20 + 0x108,auStack_e0,1,0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x128);
    *(undefined8 *)(unaff_x20 + 0x128) = uVar10;
    _swift_retain();
    FUN_1005dfeb4(uVar10,1);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar10,1);
    _swift_errorRelease(uVar11);
    _swift_release();
    pcVar8 = FUN_100308524;
    uVar6 = 0;
    uVar7 = 0;
    FUN_100630334(0,0,FUN_100308524);
    FUN_100308538(uVar10,1);
  }
  else if (bVar2 == 0xff) {
    _swift_beginAccess(puVar4 + 0x30,auStack_b0,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_10064967c(thunk_FUN_1008fe02c,puVar5);
    _swift_endAccess(auStack_b0);
    uVar7 = 0;
    pcVar8 = (code *)0x0;
    uVar6 = 0;
  }
  else {
    pcVar8 = FUN_100308524;
    FUN_100630334(uVar10,uVar7,FUN_100308524);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    uVar6 = uVar10;
  }
  FUN_1006486f8(uVar6,uVar7,pcVar8);
  FUN_100004550(uVar6,uVar7);
  _swift_release(puVar4);
  _swift_release();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(pcVar8);
  puVar5 = &DAT_100f13490;
  _swift_allocObject(&DAT_100f13490,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_1008fe064;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  _swift_beginAccess(puVar3 + 0x10,auStack_b0,0,0);
  cVar1 = puVar3[0x18];
  if (cVar1 == -1) {
    _swift_beginAccess(puVar3 + 0x30,auStack_c8,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_10064967c(thunk_FUN_1006225d4,puVar5);
    _swift_endAccess(auStack_c8);
  }
  else {
    uVar10 = *(undefined8 *)(puVar3 + 0x10);
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar10,cVar1);
    FUN_1008fe388();
    FUN_100308538(uVar10,cVar1);
  }
  _swift_release();
  _swift_release(puVar5);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1008eff24 | FUN_1008eff24 */

void FUN_1008eff24(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  puVar4 = puVar3;
  _swift_allocObject();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 0xff;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  puVar5 = &DAT_100f133c8;
  _swift_allocObject(&DAT_100f133c8,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(long *)(puVar5 + 0x18) = param_1;
  *(code **)(puVar5 + 0x20) = FUN_1008fe010;
  *(long *)(puVar5 + 0x28) = unaff_x20;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar10,1);
    uVar6 = 1;
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_98,0x21,0);
      _swift_retain_n();
      _swift_unknownObjectRetain(uVar6);
      _swift_retain(puVar4);
      _swift_retain(param_1);
      FUN_10064967c(FUN_1008fe018,puVar5);
      _swift_endAccess(auStack_98);
      uVar11 = 0;
      uVar9 = 0;
      pcVar8 = (code *)0x0;
      goto LAB_1008f0148;
    }
    _swift_beginAccess(unaff_x20 + 0xe0,auStack_98,0x21,0);
    _swift_retain();
    FUN_1008fa5ec(uVar10,cVar1);
    _swift_retain_n();
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar4);
    _swift_retain(param_1);
    FUN_1008fa5ec(uVar10,cVar1);
    FUN_10090409c(uVar10);
    _swift_endAccess(auStack_98);
    FUN_1008fa60c(uVar10,cVar1);
    uVar10 = 0;
    uVar6 = 0;
  }
  pcVar8 = FUN_100308524;
  uVar11 = uVar10;
  uVar9 = uVar6;
  FUN_100630334(uVar10,uVar6,FUN_100308524);
  FUN_1002ec258(uVar10,uVar6);
LAB_1008f0148:
  FUN_1006486f8(uVar11,uVar9,pcVar8);
  FUN_100004550(uVar11,uVar9);
  _swift_release_n();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(pcVar8);
  _swift_allocObject(puVar3,0x48,7);
  uVar6 = *(undefined8 *)(puVar4 + 0x20);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar4 + 0x28);
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  puVar5 = &DAT_100f133f0;
  _swift_allocObject(&DAT_100f133f0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(code **)(puVar5 + 0x20) = FUN_1008fe024;
  *(long *)(puVar5 + 0x28) = unaff_x20;
  _swift_beginAccess(puVar4 + 0x10,auStack_98,0,0);
  uVar10 = *(undefined8 *)(puVar4 + 0x10);
  bVar2 = puVar4[0x18];
  uVar7 = (ulong)bVar2;
  if (bVar2 == 1) {
    _swift_beginAccess(unaff_x20 + 0x108,auStack_e0,1,0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x120);
    *(undefined8 *)(unaff_x20 + 0x120) = uVar10;
    _swift_retain();
    FUN_1005dfeb4(uVar10,1);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar10,1);
    _swift_errorRelease(uVar11);
    _swift_release();
    pcVar8 = FUN_100308524;
    uVar6 = 0;
    uVar7 = 0;
    FUN_100630334(0,0,FUN_100308524);
    FUN_100308538(uVar10,1);
  }
  else if (bVar2 == 0xff) {
    _swift_beginAccess(puVar4 + 0x30,auStack_b0,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    FUN_10064967c(FUN_1008fe02c,puVar5);
    _swift_endAccess(auStack_b0);
    uVar7 = 0;
    pcVar8 = (code *)0x0;
    uVar6 = 0;
  }
  else {
    pcVar8 = FUN_100308524;
    FUN_100630334(uVar10,uVar7,FUN_100308524);
    _swift_retain_n();
    _swift_retain(puVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_retain(puVar3);
    uVar6 = uVar10;
  }
  FUN_1006486f8(uVar6,uVar7,pcVar8);
  FUN_100004550(uVar6,uVar7);
  _swift_release(puVar4);
  _swift_release();
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(pcVar8);
  puVar5 = &DAT_100f13418;
  _swift_allocObject(&DAT_100f13418,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_1008fe038;
  *(long *)(puVar5 + 0x18) = unaff_x20;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  _swift_beginAccess(puVar3 + 0x10,auStack_b0,0,0);
  cVar1 = puVar3[0x18];
  if (cVar1 == -1) {
    _swift_beginAccess(puVar3 + 0x30,auStack_c8,0x21,0);
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_10064967c(FUN_1006225d4,puVar5);
    _swift_endAccess(auStack_c8);
  }
  else {
    if (SCARRY8(*(long *)(unaff_x20 + 0x100),1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1008f04bc);
      (*pcVar8)();
    }
    uVar10 = *(undefined8 *)(puVar3 + 0x10);
    *(long *)(unaff_x20 + 0x100) = *(long *)(unaff_x20 + 0x100) + 1;
    _swift_retain_n();
    _swift_retain(puVar3);
    FUN_1005dfeb4(uVar10,cVar1);
    FUN_1008eef78(1);
    FUN_100308538(uVar10,cVar1);
  }
  _swift_release();
  _swift_release(puVar5);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1008f04bc | FUN_1008f04bc */

void FUN_1008f04bc(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined1 local_41;
  StaticString local_40;
  __uint64 _Stack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  _Var7.unknown = *(undefined **)(param_1 + 0x98);
  pcVar5 = *(char **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_100622430(uVar4);
  if (1 < *(byte *)(param_1 + 0xd8) - 5) {
    if (*(byte *)(param_1 + 0xd8) != 2) {
      local_40.unknown = (undefined *)0x0;
      _Stack_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var7);
      SVar8.bridgeObject = (void *)0x8000000100db4880;
      SVar8.str = (char *)0xd000000000000026;
      SVar11.bridgeObject = param_4;
      SVar11.str = pcVar5;
      Swift::String::append(SVar8,SVar11);
      local_41 = *(undefined1 *)(param_1 + 0xd8);
      pcVar5 = &DAT_100fec460;
      FUN_1000f7830(&DAT_100fec460,&DAT_100c83b48);
      puVar2 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      puVar1 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_41,&local_40,pcVar5,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar9.bridgeObject = &DAT_e800000000000000;
      SVar9.str = (char *)0x207475706e69202c;
      SVar12.bridgeObject = puVar6;
      SVar12.str = pcVar5;
      Swift::String::append(SVar9,SVar12);
      local_41 = 3;
      puVar6 = &DAT_100fec468;
      FUN_1000f7830(&DAT_100fec468,&DAT_100c83b50);
      Swift::__print_unlocked(&local_41,&local_40,puVar6,puVar1,puVar2);
      SVar10.bridgeObject = (void *)0x2;
      SVar10.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar10,local_40,_Stack_38,0xdb4880);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008f062c);
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + 0xd8) = 3;
    FUN_1008ef488();
  }
  return;
}



/* Address: 0x1008f062c | FUN_1008f062c */

void FUN_1008f062c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  StaticString local_40;
  __uint64 _Stack_38;
  undefined1 local_21;
  
  if (*(byte *)(param_1 + 0xd8) - 3 < 3) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_100622430(uVar1,uVar2,uVar8);
    FUN_1008ef488();
  }
  else if (*(byte *)(param_1 + 0xd8) != 6) {
    local_40.unknown = (undefined *)0x0;
    _Stack_38 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x32,param_2);
    SVar9.bridgeObject = (void *)0x8000000100db4880;
    SVar9.str = (char *)0xd000000000000026;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar9,SVar12);
    local_21 = *(undefined1 *)(param_1 + 0xd8);
    pcVar6 = &DAT_100fec460;
    FUN_1000f7830(&DAT_100fec460,&DAT_100c83b48);
    puVar4 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    puVar3 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_21,&local_40,pcVar6,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar10.bridgeObject = &DAT_e800000000000000;
    SVar10.str = (char *)0x207475706e69202c;
    SVar13.bridgeObject = puVar7;
    SVar13.str = pcVar6;
    Swift::String::append(SVar10,SVar13);
    local_21 = 4;
    puVar7 = &DAT_100fec468;
    FUN_1000f7830(&DAT_100fec468,&DAT_100c83b50);
    Swift::__print_unlocked(&local_21,&local_40,puVar7,puVar3,puVar4);
    SVar11.bridgeObject = (void *)0x2;
    SVar11.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,local_40,_Stack_38,0xdb4880);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008f07a0);
    (*pcVar5)();
  }
  return;
}



/* Address: 0x1008f07a0 | FUN_1008f07a0 */

void FUN_1008f07a0(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar5 = lVar6;
  (**(code **)(unaff_x20 + 0x60))
            (lVar6,uVar2,*(undefined4 *)(&DAT_100c83b94 + (param_1 >> 0x3e) * 4));
  FUN_100915970(lVar6,uVar2);
  _swift_getObjectType(*(undefined8 *)(lVar6 + 0x28));
  FUN_100642338();
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_78,0x21,0);
  _swift_retain(lVar5);
  FUN_100914564();
  uVar10 = *(ulong *)(unaff_x20 + 0xf8);
  uVar11 = uVar10 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar11 + 0x10);
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_100902ec0(uVar10,uVar1 + 1,1);
    uVar11 = uVar10 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
  *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar5;
  *(ulong *)(unaff_x20 + 0xf8) = uVar10;
  _swift_endAccess(auStack_78);
  puVar7 = &DAT_100f134b8;
  _swift_allocObject(&DAT_100f134b8,0x28,7);
  *(long *)(puVar7 + 0x10) = unaff_x20;
  *(long *)(puVar7 + 0x18) = lVar5;
  *(ulong *)(puVar7 + 0x20) = param_1;
  puVar8 = &DAT_100f134e0;
  _swift_allocObject(&DAT_100f134e0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1008fe448;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar9 = &DAT_100f13508;
  _swift_allocObject(&DAT_100f13508,0x28,7);
  *(long *)(puVar9 + 0x10) = lVar6;
  *(code **)(puVar9 + 0x18) = FUN_100076648;
  *(undefined **)(puVar9 + 0x20) = puVar8;
  _swift_beginAccess(lVar6 + 0x10,auStack_78,0,0);
  cVar4 = *(char *)(lVar6 + 0x20);
  if (cVar4 == '\x01') {
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(puVar8);
    _swift_retain(lVar6);
    _swift_retain(lVar5);
    _swift_retain();
  }
  else if (cVar4 == -1) {
    _swift_beginAccess(lVar6 + 0x38,auStack_90,0x21,0);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(puVar8);
    _swift_retain(lVar6);
    _swift_retain(lVar5);
    _swift_retain();
    FUN_10064967c(FUN_1008fdfd4,puVar9);
    _swift_endAccess(auStack_90);
  }
  else {
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    uVar3 = *(undefined8 *)(lVar6 + 0x18);
    _swift_retain_n(param_1 & 0x3fffffffffffffff,2);
    _swift_retain_n(lVar5,2);
    _swift_retain_n();
    _swift_retain(puVar8);
    _swift_retain(lVar6);
    _swift_retain(puVar7);
    FUN_1008fde6c(uVar2,uVar3,cVar4);
    FUN_1008f1108(uVar2,uVar3);
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release(lVar5);
    _swift_release();
    _swift_release(puVar7);
    FUN_1008fde8c(uVar2,uVar3,cVar4);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar8);
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(0);
  puVar7 = &DAT_100f13530;
  _swift_allocObject(&DAT_100f13530,0x28,7);
  *(long *)(puVar7 + 0x10) = unaff_x20;
  *(ulong *)(puVar7 + 0x18) = param_1;
  *(long *)(puVar7 + 0x20) = lVar5;
  puVar8 = &DAT_100f13558;
  _swift_allocObject(&DAT_100f13558,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar6;
  *(code **)(puVar8 + 0x18) = FUN_1008fe48c;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  if (*(char *)(lVar6 + 0x20) == '\x01') {
    uVar2 = *(undefined8 *)(lVar6 + 0x10);
    uVar3 = *(undefined8 *)(lVar6 + 0x18);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(lVar6);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    _swift_retain();
    FUN_1008fde6c(uVar2,uVar3,1);
    FUN_1008f1904(uVar2);
    FUN_1008fde8c(uVar2,uVar3,1);
  }
  else if (*(char *)(lVar6 + 0x20) == -1) {
    _swift_beginAccess(lVar6 + 0x38,auStack_90,0x21,0);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(lVar6);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    _swift_retain();
    FUN_10064967c(FUN_1008fe498,puVar8);
    _swift_endAccess(auStack_90);
  }
  else {
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(lVar6);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    _swift_retain();
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar5);
  _swift_release(lVar6);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x1008f0c1c | FUN_1008f0c1c */

void FUN_1008f0c1c(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (*(long *)(unaff_x20 + 0x100) < 2) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    lVar13 = *(long *)(unaff_x20 + 0x30);
    FUN_100004640(unaff_x20 + 0x10,uVar6);
    (**(code **)(lVar13 + 0x18))(uVar6,lVar13);
  }
  lVar13 = *(long *)(unaff_x20 + 0x90);
  if (lVar13 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
    _swift_retain(lVar13);
    _swift_retain(uVar2);
    FUN_100950b80(lVar13,uVar6,uVar2);
    _swift_release(uVar2);
    _swift_release(lVar13);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(long *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    FUN_100622430(uVar6,uVar2,uVar11);
  }
  lVar13 = *(long *)(unaff_x20 + 0xa8);
  if (lVar13 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
    _swift_retain(lVar13);
    _swift_retain(uVar2);
    FUN_100950b80(lVar13,uVar6,uVar2);
    _swift_release(uVar2);
    _swift_release(lVar13);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xb8);
    *(long *)(unaff_x20 + 0xa8) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    FUN_100622430(uVar6,uVar2,uVar11);
  }
  lVar13 = *(long *)(unaff_x20 + 0xc0);
  if (lVar13 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
    _swift_retain(lVar13);
    _swift_retain(uVar2);
    FUN_100950b80(lVar13,uVar6,uVar2);
    _swift_release(uVar2);
    _swift_release(lVar13);
    uVar6 = *(undefined8 *)(unaff_x20 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x20 + 200);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(long *)(unaff_x20 + 0xc0) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    FUN_100622430(uVar6,uVar2,uVar11);
  }
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_78,1,0);
  puVar14 = *(undefined **)(unaff_x20 + 0xf8);
  *(undefined **)(unaff_x20 + 0xf8) = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)puVar14 >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      _Var1.unknown = puVar14;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar13 != 0) {
    lVar16 = 4;
    do {
      uVar15 = lVar16 - 4;
      if (((ulong)puVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1008f10c8);
          (*pcVar5)();
        }
        uVar17 = *(ulong *)(puVar14 + lVar16 * 8);
        _swift_retain(uVar17);
      }
      else {
        uVar17 = uVar15;
        FUN_100942e04(uVar15,puVar14);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008f10c4);
        (*pcVar5)();
      }
      lVar12 = lVar16 + -3;
      puVar8 = &DAT_100f13698;
      _swift_allocObject(&DAT_100f13698,0x28,7);
      *(ulong *)(puVar8 + 0x10) = uVar17;
      *(code **)(puVar8 + 0x18) = FUN_1008f65f4;
      *(undefined8 *)(puVar8 + 0x20) = 0;
      uVar15 = *(ulong *)(uVar17 + 0x28);
      lVar3 = *(long *)(uVar17 + 0x30);
      _swift_getObjectType();
      pcVar5 = *(code **)(lVar3 + 0x10);
      _swift_retain_n(uVar17,2);
      (*pcVar5)(uVar15,lVar3);
      if ((uVar15 & 1) == 0) {
        uVar6 = *(undefined8 *)(uVar17 + 0x28);
        lVar3 = *(long *)(uVar17 + 0x30);
        _swift_getObjectType();
        puVar7 = &DAT_100f136c0;
        _swift_allocObject(&DAT_100f136c0,0x28,7);
        *(ulong *)(puVar7 + 0x10) = uVar17;
        *(code **)(puVar7 + 0x18) = thunk_FUN_1008fdfd4;
        *(undefined **)(puVar7 + 0x20) = puVar8;
        pcVar5 = *(code **)(lVar3 + 0x18);
        _swift_retain(uVar17);
        _swift_retain(puVar8);
        (*pcVar5)(thunk_FUN_1008fa090,puVar7,uVar6,lVar3);
        _swift_release(puVar7);
        _swift_release_n(uVar17,2);
        _swift_release(puVar8);
      }
      else {
        _swift_beginAccess(uVar17 + 0x10,auStack_90,0,0);
        cVar4 = *(char *)(uVar17 + 0x20);
        if (cVar4 != '\x01') {
          if (cVar4 == -1) {
            _swift_beginAccess(uVar17 + 0x38,auStack_a8,0x21,0);
            if (*(long *)(uVar17 + 0x38) == 0) {
              *(code **)(uVar17 + 0x38) = thunk_FUN_1008fdfd4;
              *(undefined **)(uVar17 + 0x40) = puVar8;
LAB_1008f1030:
              _swift_retain(puVar8);
            }
            else {
              uVar15 = *(ulong *)(uVar17 + 0x48);
              if (uVar15 == 0) {
                puVar7 = &DAT_100fec470;
                FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
                _swift_allocObject();
                *(undefined8 *)(puVar7 + 0x18) = 2;
                *(undefined8 *)(puVar7 + 0x10) = 1;
                *(code **)(puVar7 + 0x20) = thunk_FUN_1008fdfd4;
                *(undefined **)(puVar7 + 0x28) = puVar8;
                *(undefined **)(uVar17 + 0x48) = puVar7;
                goto LAB_1008f1030;
              }
              _swift_retain(puVar8);
              uVar10 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(uVar17 + 0x48) = uVar15;
              uVar9 = uVar15;
              if ((uVar10 & 1) == 0) {
                uVar9 = 0;
                FUN_100932184(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
                *(ulong *)(uVar17 + 0x48) = uVar9;
              }
              uVar15 = *(ulong *)(uVar9 + 0x10);
              uVar10 = uVar9;
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
                uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_100932184(uVar10,uVar15 + 1,1,uVar9);
              }
              *(ulong *)(uVar10 + 0x10) = uVar15 + 1;
              lVar3 = uVar10 + uVar15 * 0x10;
              *(code **)(lVar3 + 0x20) = thunk_FUN_1008fdfd4;
              *(undefined **)(lVar3 + 0x28) = puVar8;
              *(ulong *)(uVar17 + 0x48) = uVar10;
            }
            _swift_endAccess(auStack_a8);
          }
          else {
            uVar6 = *(undefined8 *)(uVar17 + 0x10);
            uVar2 = *(undefined8 *)(uVar17 + 0x18);
            uVar11 = uVar6;
            _swift_getObjectType(uVar6);
            FUN_1008fde58(uVar6,uVar2,cVar4);
            FUN_10061cf14(2,0,uVar11,uVar2);
            FUN_1008fde8c(uVar6,uVar2,cVar4);
          }
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(puVar8);
        _swift_release_n(uVar17,2);
        _swift_bridgeObjectRelease(0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar12 != lVar13);
  }
  _swift_bridgeObjectRelease(puVar14);
  return;
}



/* Address: 0x1008f1108 | FUN_1008f1108 */

/* WARNING: Removing unreachable block (ram,0x0001008f1624) */

void FUN_1008f1108(undefined8 param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  if (*(char *)(param_3 + 0xd8) == '\x06') {
    _swift_beginAccess(param_3 + 0xf8,local_78,0x21,0);
    _swift_retain(param_4);
    lVar3 = param_3 + 0xf8;
    FUN_1008fe06c(lVar3,param_4);
    _swift_release(param_4);
    puVar10 = *(undefined **)(param_3 + 0xf8);
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar9 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        _Var1.unknown = puVar10;
      }
      lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar3 <= lVar9) {
      FUN_100907c7c(lVar3);
      _swift_endAccess(local_78);
      _swift_getObjectType(param_1);
      FUN_10061cf14(2,0,param_1,param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f1624);
    (*pcVar2)();
  }
  uVar11 = param_1;
  _swift_getObjectType(param_1);
  uVar4 = param_5;
  local_78[0] = param_1;
  FUN_10062285c(param_5,"NIOPosix/HappyEyeballs.swift",0x1c,2,0x294,uVar11,
                *(undefined8 *)(param_2 + 8));
  _swift_getObjectType(*(undefined8 *)(uVar4 + 0x20));
  FUN_100642338();
  puVar10 = &DAT_100f13580;
  _swift_allocObject(&DAT_100f13580,0x30,7);
  *(long *)(puVar10 + 0x10) = param_3;
  *(undefined8 *)(puVar10 + 0x18) = param_4;
  *(undefined8 *)(puVar10 + 0x20) = param_1;
  *(long *)(puVar10 + 0x28) = param_2;
  puVar5 = &DAT_100f135a8;
  _swift_allocObject(&DAT_100f135a8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1008fe500;
  *(undefined **)(puVar5 + 0x18) = puVar10;
  puVar6 = &DAT_100f135d0;
  _swift_allocObject(&DAT_100f135d0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1000e8174;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar7 = &DAT_100f135f8;
  _swift_allocObject(&DAT_100f135f8,0x28,7);
  *(ulong *)(puVar7 + 0x10) = uVar4;
  *(code **)(puVar7 + 0x18) = FUN_1000e8174;
  *(undefined **)(puVar7 + 0x20) = puVar6;
  _swift_beginAccess(uVar4 + 0x10,local_78,0,0);
  if (*(char *)(uVar4 + 0x18) == '\x01') {
    _swift_retain_n(param_4,2);
    _swift_retain_n(param_3,2);
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_retain(puVar10);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(uVar4);
  }
  else if (*(char *)(uVar4 + 0x18) == -1) {
    _swift_beginAccess(uVar4 + 0x30,auStack_90,0x21,0);
    _swift_retain_n(param_4,2);
    _swift_retain_n(param_3,2);
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_retain(puVar10);
    _swift_retain(puVar5);
    _swift_retain(puVar6);
    _swift_retain(uVar4);
    FUN_10064967c(FUN_1008a8990,puVar7);
    _swift_endAccess(auStack_90);
  }
  else {
    _swift_retain_n(param_4,2);
    _swift_retain_n(param_3,2);
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_retain_n(puVar5,2);
    _swift_retain(puVar10);
    _swift_retain(puVar6);
    _swift_retain(uVar4);
    FUN_1008f1630(param_3,param_4,param_1,param_2);
    _swift_release(puVar5);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
  _swift_unknownObjectRelease(param_1);
  _swift_release(param_4);
  _swift_release(param_3);
  _swift_release(puVar10);
  _swift_release(puVar5);
  puVar10 = &DAT_100f13620;
  _swift_allocObject(&DAT_100f13620,0x28,7);
  *(long *)(puVar10 + 0x10) = param_3;
  *(undefined8 *)(puVar10 + 0x18) = param_4;
  *(ulong *)(puVar10 + 0x20) = param_5;
  puVar5 = &DAT_100f13648;
  _swift_allocObject(&DAT_100f13648,0x28,7);
  *(ulong *)(puVar5 + 0x10) = uVar4;
  *(code **)(puVar5 + 0x18) = FUN_1008fe544;
  *(undefined **)(puVar5 + 0x20) = puVar10;
  uVar11 = *(undefined8 *)(uVar4 + 0x10);
  cVar8 = *(char *)(uVar4 + 0x18);
  if (cVar8 == '\x01') {
    _swift_retain(param_5 & 0x3fffffffffffffff);
    _swift_retain(puVar10);
    _swift_retain(param_4);
    _swift_retain(param_3);
    _swift_retain(uVar4);
    FUN_1005dfeb4(uVar11,1);
    FUN_1008f1768(uVar11,param_3,param_4,param_5);
    cVar8 = '\x01';
  }
  else {
    if (cVar8 == -1) {
      _swift_beginAccess(uVar4 + 0x30,auStack_90,0x21,0);
      _swift_retain(param_5 & 0x3fffffffffffffff);
      _swift_retain(puVar10);
      _swift_retain(param_4);
      _swift_retain(param_3);
      _swift_retain(uVar4);
      FUN_10064967c(thunk_FUN_1008db354,puVar5);
      _swift_endAccess(auStack_90);
      goto LAB_1008f15a8;
    }
    _swift_retain(param_5 & 0x3fffffffffffffff);
    _swift_retain(puVar10);
    _swift_retain(param_4);
    _swift_retain(param_3);
    _swift_retain(uVar4);
  }
  FUN_100308538(uVar11,cVar8);
LAB_1008f15a8:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(uVar4);
  _swift_release(puVar10);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x1008f1630 | FUN_1008f1630 */

/* WARNING: Removing unreachable block (ram,0x0001008f175c) */

void FUN_1008f1630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0xf8,auStack_58,0x21,0);
  _swift_retain(param_2);
  lVar3 = param_1 + 0xf8;
  FUN_1008fe06c(lVar3,param_2);
  _swift_release(param_2);
  puVar5 = *(undefined **)(param_1 + 0xf8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 <= lVar4) {
    FUN_100907c7c(lVar3);
    _swift_endAccess(auStack_58);
    if (*(char *)(param_1 + 0xd8) == '\x06') {
      _swift_getObjectType(param_3);
      FUN_10061cf14(2,0,param_3,param_4);
    }
    else {
      FUN_1008eef78(6);
      _swift_unknownObjectRetain(param_3);
      FUN_10090d0f8();
      _swift_unknownObjectRelease(param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f175c);
  (*pcVar2)();
}



/* Address: 0x1008f1768 | FUN_1008f1768 */

/* WARNING: Removing unreachable block (ram,0x0001008f18f8) */

void FUN_1008f1768(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  if (*(char *)(param_2 + 0xd8) != '\x06') {
    _swift_beginAccess(param_2 + 0x108,auStack_68,0x21,0);
    uVar8 = *(ulong *)(param_2 + 0x130);
    _swift_retain(param_4 & 0x3fffffffffffffff);
    _swift_errorRetain(param_1);
    uVar3 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_2 + 0x130) = uVar8;
    uVar5 = uVar8;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      FUN_100902fe8(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      *(ulong *)(param_2 + 0x130) = uVar5;
    }
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar8 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100902fe8(uVar8,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
    lVar4 = uVar8 + uVar3 * 0x10;
    *(ulong *)(lVar4 + 0x20) = param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_1;
    *(ulong *)(param_2 + 0x130) = uVar8;
    _swift_endAccess(auStack_68);
    _swift_beginAccess(param_2 + 0xf8,auStack_68,0x21,0);
    _swift_retain(param_3);
    lVar4 = param_2 + 0xf8;
    FUN_1008fe06c(lVar4,param_3);
    _swift_release(param_3);
    puVar7 = *(undefined **)(param_2 + 0xf8);
    if ((ulong)puVar7 >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        _Var1.unknown = puVar7;
      }
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar6 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f18f8);
      (*pcVar2)();
    }
    FUN_100907c7c(lVar4);
    _swift_endAccess(auStack_68);
    FUN_1008eef78(7);
  }
  return;
}



/* Address: 0x1008f1904 | FUN_1008f1904 */

/* WARNING: Removing unreachable block (ram,0x0001008f1a88) */

void FUN_1008f1904(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x108,auStack_68,0x21,0);
  uVar8 = *(ulong *)(param_2 + 0x130);
  _swift_retain(param_3 & 0x3fffffffffffffff);
  _swift_errorRetain(param_1);
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + 0x130) = uVar8;
  uVar5 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
    FUN_100902fe8(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(param_2 + 0x130) = uVar5;
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  uVar8 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_100902fe8(uVar8,uVar3 + 1,1,uVar5);
  }
  *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
  lVar4 = uVar8 + uVar3 * 0x10;
  *(ulong *)(lVar4 + 0x20) = param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_1;
  *(ulong *)(param_2 + 0x130) = uVar8;
  _swift_endAccess(auStack_68);
  _swift_beginAccess(param_2 + 0xf8,auStack_68,0x21,0);
  _swift_retain(param_4);
  lVar4 = param_2 + 0xf8;
  FUN_1008fe06c(lVar4,param_4);
  _swift_release(param_4);
  puVar7 = *(undefined **)(param_2 + 0xf8);
  if ((ulong)puVar7 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      _Var1.unknown = puVar7;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 <= lVar6) {
    FUN_100907c7c(lVar4);
    _swift_endAccess(auStack_68);
    FUN_1008eef78(7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f1a88);
  (*pcVar2)();
}



/* Address: 0x1008f1a94 | FUN_1008f1a94 */

void FUN_1008f1a94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x108,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x120) = param_1;
  _swift_errorRetain(param_1);
  _swift_errorRelease(uVar1);
  return;
}



/* Address: 0x1008f1af0 | FUN_1008f1af0 */

void FUN_1008f1af0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x108,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x128) = param_1;
  _swift_errorRetain(param_1);
  _swift_errorRelease(uVar1);
  return;
}



/* Address: 0x1008f1b4c | FUN_1008f1b4c */

void FUN_1008f1b4c(void)

{
  FUN_1008f1b58();
  return;
}



/* Address: 0x1008f1b58 | FUN_1008f1b58 */

undefined8 FUN_1008f1b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x20) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(char *)(unaff_x20 + 0x20) = (char)param_3;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_80,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    (*param_4)(param_1,param_2,param_3);
  }
  return uVar1;
}



/* Address: 0x1008f1c14 | FUN_1008f1c14 */

undefined8 FUN_1008f1c14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x27) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(ulong *)(unaff_x20 + 0x20) = param_3;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_80,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    FUN_1008fa5cc(param_1,param_2,param_3,param_3 >> 0x38);
  }
  return uVar1;
}


