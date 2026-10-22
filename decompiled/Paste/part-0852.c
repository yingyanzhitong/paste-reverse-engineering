/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10093c830 | FUN_10093c830 */

void FUN_10093c830(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10093c68c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093c840 | FUN_10093c840 */

void FUN_10093c840(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093c890 | thunk_FUN_1008fd450 */

void thunk_FUN_1008fd450(void)

{
  FUN_1008fd450();
  return;
}



/* Address: 0x10093c894 | FUN_10093c894 */

void FUN_10093c894(void)

{
  long unaff_x20;
  
  FUN_10093c1ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x11f,FUN_10062285c);
  return;
}



/* Address: 0x10093c8bc | FUN_10093c8bc */

undefined8 FUN_10093c8bc(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10093cdb4);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(lVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(lVar1,uVar2,1);
  lVar6 = lVar1;
  (*param_3)();
  uVar10 = *(ulong *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  uVar7 = uVar10;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_unknownObjectRetain(uVar10);
  (*pcVar5)(uVar7,lVar3);
  _swift_unknownObjectRelease(uVar10);
  if ((uVar7 & 1) != 0) {
    puVar9 = &DAT_100f19d50;
    _swift_allocObject(&DAT_100f19d50,0x20,7);
    *(long *)(puVar9 + 0x10) = param_2;
    *(long *)(puVar9 + 0x18) = lVar6;
    _swift_beginAccess(lVar6 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar6 + 0x20) == -1) {
      _swift_beginAccess(lVar6 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar6);
      FUN_10064967c(thunk_FUN_1008fcb8c,puVar9);
      _swift_endAccess(auStack_a8);
      FUN_1009082bc(lVar1,uVar2,1);
      _swift_release(puVar9);
      _swift_release(lVar6);
      return 0;
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x10);
    thunk_FUN_1008f1b4c(uVar8,*(undefined8 *)(lVar6 + 0x18));
    _swift_retain(param_2);
    FUN_1009082bc(lVar1,uVar2,1);
    _swift_release(puVar9);
    return uVar8;
  }
  puVar9 = &DAT_100f19cd8;
  _swift_allocObject(&DAT_100f19cd8,0x28,7);
  *(code **)(puVar9 + 0x10) = thunk_FUN_10093d41c;
  *(long *)(puVar9 + 0x18) = param_2;
  *(long *)(puVar9 + 0x20) = lVar6;
  uVar10 = *(ulong *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x30);
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(lVar6,2);
  uVar7 = uVar10;
  (*pcVar5)(uVar10,lVar3);
  if ((uVar7 & 1) == 0) {
    _swift_release(param_2);
    puVar11 = &DAT_100f19d00;
    _swift_allocObject(&DAT_100f19d00,0x28,7);
    *(long *)(puVar11 + 0x10) = lVar6;
    *(code **)(puVar11 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar11 + 0x20) = puVar9;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar6);
    _swift_retain(puVar9);
    (*pcVar5)(thunk_FUN_1009082d0,puVar11,uVar10,lVar3);
    _swift_release(puVar11);
    goto LAB_10093cd54;
  }
  _swift_beginAccess(lVar6 + 0x10,auStack_90,0,0);
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  cVar14 = *(char *)(lVar6 + 0x20);
  if (cVar14 == '\x01') {
    uVar10 = *(ulong *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar5 = *(code **)(lVar3 + 0x10);
    uVar15 = 1;
    FUN_1008fde6c(uVar8,uVar4,1);
    uVar7 = uVar10;
    lVar13 = lVar3;
    (*pcVar5)(uVar10,lVar3);
    if ((uVar7 & 1) == 0) {
      puVar11 = &DAT_100f19d28;
      _swift_allocObject(&DAT_100f19d28,0x20,7);
      *(long *)(puVar11 + 0x10) = param_2;
      *(undefined8 *)(puVar11 + 0x18) = uVar8;
      pcVar5 = *(code **)(lVar3 + 0x18);
      _swift_retain(param_2);
      FUN_1008fde6c(uVar8,uVar4,1);
      (*pcVar5)(thunk_FUN_1008fcb6c,puVar11,uVar10,lVar3);
      _swift_release(param_2);
      _swift_release(puVar11);
    }
    else {
      uVar12 = uVar8;
      thunk_FUN_10092b398(uVar8);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar13);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar15);
    }
    cVar14 = '\x01';
LAB_10093cd2c:
    FUN_1009082bc(uVar8,uVar4,cVar14);
  }
  else {
    if (cVar14 != -1) {
      FUN_1008fde6c(uVar8,uVar4,cVar14);
      FUN_10090d0dc(uVar8,uVar4,cVar14,param_2);
      _swift_release(param_2);
      goto LAB_10093cd2c;
    }
    _swift_release(param_2);
    _swift_beginAccess(lVar6 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar9);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_bridgeObjectRelease(0);
LAB_10093cd54:
  FUN_1009082bc(lVar1,uVar2,1);
  _swift_release(puVar9);
  _swift_release_n(lVar6,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x10093cdb4 | FUN_10093cdb4 */

void FUN_10093cdb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_10092b53c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),param_2);
  return;
}



/* Address: 0x10093cdc8 | FUN_10093cdc8 */

void FUN_10093cdc8(void)

{
  long unaff_x20;
  
  _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x10093cdf0 | FUN_10093cdf0 */

void FUN_10093cdf0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10093c0cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x140,&DAT_100f19a58,FUN_10093ce1c
               );
  return;
}



/* Address: 0x10093ce1c | FUN_10093ce1c */

void FUN_10093ce1c(void)

{
  long unaff_x20;
  
  FUN_10093c1ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x141,FUN_100622850);
  return;
}



/* Address: 0x10093ce44 | FUN_10093ce44 */

void FUN_10093ce44(void)

{
  long unaff_x20;
  
  FUN_10093b420(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0xa8,
                FUN_10062285c);
  return;
}



/* Address: 0x10093ce68 | FUN_10093ce68 */

void FUN_10093ce68(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093ceac | FUN_10093ceac */

void FUN_10093ceac(void)

{
  long unaff_x20;
  
  FUN_10093b48c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10093cec0 | thunk_FUN_10093d450 */

void thunk_FUN_10093d450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10093cec4 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x10093cec8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10093cecc | FUN_10093cecc */

undefined8 FUN_10093cecc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
      _swift_unknownObjectRelease(param_3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10093d3f8);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(lVar1);
      return uVar2;
    }
    return 0;
  }
  _swift_getObjectType(param_3);
  puVar6 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  lVar7 = lVar1;
  FUN_10063dd74(lVar1,param_3,puVar6,param_4);
  uVar10 = *(ulong *)(lVar7 + 0x28);
  lVar3 = *(long *)(lVar7 + 0x30);
  uVar8 = uVar10;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  FUN_1008fde6c(lVar1,uVar2,1);
  _swift_unknownObjectRetain(uVar10);
  (*pcVar5)(uVar8,lVar3);
  _swift_unknownObjectRelease(uVar10);
  if ((uVar8 & 1) != 0) {
    puVar6 = &DAT_100f19cb0;
    _swift_allocObject(&DAT_100f19cb0,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar7;
    _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar7 + 0x20) == -1) {
      _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar7);
      FUN_10064967c(FUN_1008fcb8c,puVar6);
      _swift_endAccess(auStack_a8);
      FUN_1009082bc(lVar1,uVar2,1);
      _swift_release(puVar6);
      _swift_release(lVar7);
      return 0;
    }
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    thunk_FUN_1008f1b4c(uVar9,*(undefined8 *)(lVar7 + 0x18));
    _swift_retain(param_2);
    FUN_1009082bc(lVar1,uVar2,1);
    _swift_release(puVar6);
    return uVar9;
  }
  puVar6 = &DAT_100f19c38;
  _swift_allocObject(&DAT_100f19c38,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_10093d41c;
  *(long *)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar7;
  uVar10 = *(ulong *)(lVar7 + 0x28);
  lVar3 = *(long *)(lVar7 + 0x30);
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(lVar7,2);
  uVar8 = uVar10;
  (*pcVar5)(uVar10,lVar3);
  if ((uVar8 & 1) == 0) {
    _swift_release(param_2);
    puVar11 = &DAT_100f19c60;
    _swift_allocObject(&DAT_100f19c60,0x28,7);
    *(long *)(puVar11 + 0x10) = lVar7;
    *(code **)(puVar11 + 0x18) = FUN_1008fcb60;
    *(undefined **)(puVar11 + 0x20) = puVar6;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar7);
    _swift_retain(puVar6);
    (*pcVar5)(thunk_FUN_1009082d0,puVar11,uVar10,lVar3);
    _swift_release(puVar11);
    goto LAB_10093d390;
  }
  _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  uVar4 = *(undefined8 *)(lVar7 + 0x18);
  cVar14 = *(char *)(lVar7 + 0x20);
  if (cVar14 == '\x01') {
    uVar10 = *(ulong *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar5 = *(code **)(lVar3 + 0x10);
    uVar15 = 1;
    FUN_1008fde58(uVar9,uVar4,1);
    uVar8 = uVar10;
    lVar13 = lVar3;
    (*pcVar5)(uVar10,lVar3);
    if ((uVar8 & 1) == 0) {
      puVar11 = &DAT_100f19c88;
      _swift_allocObject(&DAT_100f19c88,0x20,7);
      *(long *)(puVar11 + 0x10) = param_2;
      *(undefined8 *)(puVar11 + 0x18) = uVar9;
      pcVar5 = *(code **)(lVar3 + 0x18);
      _swift_retain(param_2);
      FUN_1008fde6c(uVar9,uVar4,1);
      (*pcVar5)(FUN_1008fcb6c,puVar11,uVar10,lVar3);
      _swift_release(param_2);
      _swift_release(puVar11);
    }
    else {
      uVar12 = uVar9;
      thunk_FUN_10092b398(uVar9);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar13);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar15);
    }
    cVar14 = '\x01';
LAB_10093d368:
    FUN_1009082bc(uVar9,uVar4,cVar14);
  }
  else {
    if (cVar14 != -1) {
      FUN_1008fde58(uVar9,uVar4,cVar14);
      FUN_10090d0dc(uVar9,uVar4,cVar14,param_2);
      _swift_release(param_2);
      goto LAB_10093d368;
    }
    _swift_release(param_2);
    _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(FUN_1008fcb60,puVar6);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_bridgeObjectRelease(0);
LAB_10093d390:
  FUN_1009082bc(lVar1,uVar2,1);
  _swift_release(puVar6);
  _swift_release_n(lVar7,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x10093d3f8 | FUN_10093d3f8 */

void FUN_10093d3f8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093d41c | FUN_10093d41c */

void FUN_10093d41c(undefined8 *param_1)

{
  FUN_10092b53c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10093d430 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x10093d434 | FUN_10093d434 */

void FUN_10093d434(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x10093d440 | FUN_10093d440 */

void FUN_10093d440(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10093d44c | thunk_FUN_1008fd67c */

void thunk_FUN_1008fd67c(void)

{
  FUN_1008fd67c();
  return;
}



/* Address: 0x10093d450 | FUN_10093d450 */

void FUN_10093d450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10093d478 | FUN_10093d478 */

void FUN_10093d478(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10093d49c | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  FUN_1008c1434();
  return;
}



/* Address: 0x10093d4a0 | FUN_10093d4a0 */

void FUN_10093d4a0(void)

{
  long unaff_x20;
  
  FUN_10093b420(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x84,
                FUN_100622850);
  return;
}



/* Address: 0x10093d4c4 | thunk_FUN_10093d3f8 */

void thunk_FUN_10093d3f8(void)

{
  FUN_10093d3f8();
  return;
}



/* Address: 0x10093d4c8 | thunk_FUN_10093c788 */

void thunk_FUN_10093c788(void)

{
  FUN_10093c788();
  return;
}



/* Address: 0x10093d4cc | thunk_FUN_10093c788 */

void thunk_FUN_10093c788(void)

{
  FUN_10093c788();
  return;
}



/* Address: 0x10093d4d0 | thunk_FUN_10093d478 */

void thunk_FUN_10093d478(void)

{
  FUN_10093d478();
  return;
}



/* Address: 0x10093d4d4 | thunk_FUN_10093d3f8 */

void thunk_FUN_10093d3f8(void)

{
  FUN_10093d3f8();
  return;
}



/* Address: 0x10093d4d8 | thunk_FUN_10093d3f8 */

void thunk_FUN_10093d3f8(void)

{
  FUN_10093d3f8();
  return;
}



/* Address: 0x10093d4dc | thunk_FUN_10093d478 */

void thunk_FUN_10093d478(void)

{
  FUN_10093d478();
  return;
}



/* Address: 0x10093d4e0 | thunk_FUN_10093d3f8 */

void thunk_FUN_10093d3f8(void)

{
  FUN_10093d3f8();
  return;
}



/* Address: 0x10093d4e4 | thunk_FUN_10093d3f8 */

void thunk_FUN_10093d3f8(void)

{
  FUN_10093d3f8();
  return;
}



/* Address: 0x10093d4e8 | thunk_FUN_10093d478 */

void thunk_FUN_10093d478(void)

{
  FUN_10093d478();
  return;
}



/* Address: 0x10093d4ec | FUN_10093d4ec */

void FUN_10093d4ec(void)

{
  FUN_10093ab5c();
  return;
}



/* Address: 0x10093d500 | thunk_FUN_10093c220 */

void thunk_FUN_10093c220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008e11f4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x10093d504 | thunk_FUN_10093c770 */

void thunk_FUN_10093c770(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e11c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10093d508 | thunk_FUN_10093d41c */

void thunk_FUN_10093d41c(undefined8 *param_1)

{
  FUN_10092b53c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10093d50c | thunk_FUN_10093d450 */

void thunk_FUN_10093d450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10093d510 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x10093d514 | thunk_FUN_10093bbbc */

void thunk_FUN_10093bbbc(void)

{
  FUN_10093bbbc();
  return;
}



/* Address: 0x10093d518 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x10093d51c | thunk_FUN_10093c7f4 */

void thunk_FUN_10093c7f4(void)

{
  FUN_10093c7f4();
  return;
}



/* Address: 0x10093d520 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x10093d524 | thunk_FUN_1008fd450 */

void thunk_FUN_1008fd450(void)

{
  thunk_FUN_1008fd450();
  return;
}



/* Address: 0x10093d528 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10093d52c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10093d530 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10093d534 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10093d538 | thunk_FUN_10093d434 */

void thunk_FUN_10093d434(void)

{
  FUN_10093d434();
  return;
}



/* Address: 0x10093d53c | thunk_FUN_10093d440 */

void thunk_FUN_10093d440(void)

{
  FUN_10093d440();
  return;
}



/* Address: 0x10093d540 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10093d544 | thunk_FUN_1008fd67c */

void thunk_FUN_1008fd67c(void)

{
  thunk_FUN_1008fd67c();
  return;
}



/* Address: 0x10093d548 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x10093d54c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10093d550 | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  thunk_FUN_1008c1434();
  return;
}



/* Address: 0x10093d554 | thunk_FUN_1009082d0 */

void thunk_FUN_1009082d0(void)

{
  long unaff_x20;
  
  thunk_FUN_1008f1f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10093d558 | FUN_10093d558 */

void FUN_10093d558(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x70) == '\0') {
    (**(code **)(param_4 + 0x68))(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  }
  return;
}



/* Address: 0x10093d58c | FUN_10093d58c */

/* WARNING: Removing unreachable block (ram,0x00010093d5c8) */

void FUN_10093d58c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  code *pcVar4;
  
  lVar3 = unaff_x20[0xc];
  if (lVar3 != 0) {
    pcVar4 = *(code **)(*unaff_x20 + 0x288);
    _swift_retain(lVar3);
    (*pcVar4)();
    uVar1 = unaff_x20[0xc];
    unaff_x20[0xc] = 0;
    _swift_release();
    thunk_FUN_100937a78();
    pcVar4 = *(code **)(*unaff_x20 + 0x248);
    uVar2 = uVar1;
    FUN_1005d84e8();
    (*pcVar4)();
    if ((uVar2 & 1) == 0) {
      if (DAT_100fec600 != -1) {
        _swift_once(&DAT_100fec600,FUN_100901fbc);
      }
    }
    else if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    _swift_willThrow();
    FUN_1005d84e8(uVar1);
    thunk_FUN_10095a9d8(uVar1,0xf000000000000007);
    FUN_1005d8534(uVar1);
    FUN_1005d8534(uVar1);
    FUN_1005d8534(uVar1);
    FUN_1005d8534(param_2);
    _swift_retain(lVar3);
    thunk_FUN_10094f284();
    _swift_release(lVar3);
    _swift_release(lVar3);
    return;
  }
  return;
}



/* Address: 0x10093d700 | FUN_10093d700 */

/* WARNING: Removing unreachable block (ram,0x00010093d858) */
/* WARNING: Removing unreachable block (ram,0x00010093d764) */
/* WARNING: Removing unreachable block (ram,0x00010093d7a0) */

void FUN_10093d700(code *param_1,code *param_2,code *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = unaff_x20[0xc];
  if (lVar4 == 0) goto LAB_10093d8ec;
  pcVar5 = *(code **)(*unaff_x20 + 0x288);
  pcVar3 = param_2;
  _swift_retain(lVar4);
  (*pcVar5)();
  uVar1 = unaff_x20[0xc];
  unaff_x20[0xc] = 0;
  _swift_release();
  (*param_1)();
  pcVar5 = *(code **)(*unaff_x20 + 0x248);
  uVar2 = uVar1;
  FUN_1005d84e8();
  (*pcVar5)();
  if ((uVar2 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    _swift_willThrow();
LAB_10093d880:
    uVar2 = 0xf000000000000007;
  }
  else {
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,0x80);
    uVar2 = (ulong)*(uint *)(unaff_x20[4] + 0x10);
    if ((int)*(uint *)(unaff_x20[4] + 0x10) < 0) goto LAB_10093d880;
    FUN_10095db6c(uVar2,&local_180,&local_f0);
    uStack_a8 = uStack_138;
    local_b0 = local_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    local_90 = local_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_e8 = uStack_178;
    local_f0 = local_180;
    uStack_d8 = uStack_168;
    uStack_e0 = uStack_170;
    uStack_c8 = uStack_158;
    local_d0 = local_160;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    FUN_1008d5380();
  }
  FUN_1005d84e8(uVar1);
  FUN_1005d84e8(uVar2);
  (*param_2)(uVar1,uVar2);
  FUN_1005d8534(uVar1);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar1);
  FUN_1005d8534(uVar1);
  FUN_1005d8534(pcVar3);
  _swift_retain(lVar4);
  (*param_3)();
  _swift_release_n(lVar4,2);
LAB_10093d8ec:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10093d948 | FUN_10093d948 */

void FUN_10093d948(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = param_2;
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  (**(code **)(param_3 + 0x70))(uVar2,uVar1,param_2,param_3);
  return;
}



/* Address: 0x10093d9b8 | FUN_10093d9b8 */

void FUN_10093d9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(unaff_x20 + 0x70) == '\0') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = param_2;
    (**(code **)(param_3 + 0x28))(param_2,param_3);
    (**(code **)(param_3 + 0x60))(uVar2,uVar1,param_2,param_3);
  }
  else {
    if (DAT_100fec608 != -1) {
      _swift_once(&DAT_100fec608,FUN_100902068);
    }
    uVar1 = DAT_1010581e8;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  return;
}


