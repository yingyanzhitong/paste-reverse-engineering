/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008997d0 | FUN_1008997d0 */

ulong * FUN_1008997d0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (uVar2 < 0xffffffff) {
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
    }
    else {
      uVar1 = param_2[1];
      *param_1 = uVar2;
      param_1[1] = uVar1;
    }
  }
  else if (uVar2 < 0xffffffff) {
    _swift_release(param_1[1]);
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    uVar3 = param_2[1];
    uVar1 = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    _swift_release(uVar1);
  }
  return param_1;
}



/* Address: 0x10089986c | FUN_10089986c */

int FUN_10089986c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (5 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -4;
  }
  return iVar1;
}



/* Address: 0x1008998c4 | FUN_1008998c4 */

void FUN_1008998c4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffb) {
    if (0x7ffffffa < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 4);
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint *)param_1 = param_2 + 0x80000005;
    if (0x7ffffffa < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100899914 | FUN_100899914 */

undefined1  [16] FUN_100899914(void)

{
  return ZEXT816(0x100f0a4b0);
}



/* Address: 0x100899924 | FUN_100899924 */

void FUN_100899924(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9e60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80ae8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80ae8,&DAT_100f0a390);
  DAT_100fe9e60 = pTVar1;
  return;
}



/* Address: 0x100899964 | FUN_100899964 */

void FUN_100899964(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100877974(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                (ulong)*(uint7 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x37));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008999b0 | FUN_1008999b0 */

void FUN_1008999b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100896394(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008999c0 | FUN_1008999c0 */

void FUN_1008999c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008999ec | FUN_1008999ec */

void FUN_1008999ec(void)

{
  long unaff_x20;
  
  FUN_1008a83dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008999f8 | FUN_1008999f8 */

void FUN_1008999f8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899a1c | FUN_100899a1c */

void FUN_100899a1c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_100899a30();
    return;
  }
  return;
}



/* Address: 0x100899a30 | FUN_100899a30 */

void FUN_100899a30(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  FUN_100011128();
  return;
}



/* Address: 0x100899a44 | FUN_100899a44 */

void FUN_100899a44(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_100899a58();
    return;
  }
  return;
}



/* Address: 0x100899a58 | FUN_100899a58 */

void FUN_100899a58(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  FUN_100004550();
  return;
}



/* Address: 0x100899a6c | FUN_100899a6c */

void FUN_100899a6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100004594(unaff_x20 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899ac0 | FUN_100899ac0 */

void FUN_100899ac0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10089730c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),unaff_x20 + 0x40
                ,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Address: 0x100899af8 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x100899afc | FUN_100899afc */

void FUN_100899afc(void)

{
  long unaff_x20;
  
  FUN_100898c10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100899b08 | FUN_100899b08 */

void FUN_100899b08(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899b5c | FUN_100899b5c */

void FUN_100899b5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x40);
  FUN_100626c9c();
  FUN_100896460(uVar1,uVar2,uVar5,uVar3,uVar6,uVar8,uVar4,uVar7);
  return;
}



/* Address: 0x100899bd8 | FUN_100899bd8 */

void FUN_100899bd8(void)

{
  long unaff_x20;
  
  FUN_100898d44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100899be4 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100899be8 | FUN_100899be8 */

void FUN_100899be8(void)

{
  long unaff_x20;
  
  FUN_100898f48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100899bf0 | FUN_100899bf0 */

void FUN_100899bf0(undefined8 param_1,uint param_2)

{
  if (0xfe < (param_2 >> 8 & 0xff)) {
    return;
  }
  FUN_10081c834();
  return;
}



/* Address: 0x100899c04 | thunk_FUN_100899f34 */

void thunk_FUN_100899f34(void)

{
  FUN_100899f34();
  return;
}



/* Address: 0x100899c08 | thunk_FUN_100899f90 */

void thunk_FUN_100899f90(void)

{
  long unaff_x20;
  
  FUN_100897410(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),unaff_x20 + 0x50
                ,*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x100899c0c | FUN_100899c0c */

void FUN_100899c0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899c50 | FUN_100899c50 */

void FUN_100899c50(void)

{
  long unaff_x20;
  
  FUN_100899df4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100899c60 | FUN_100899c60 */

void FUN_100899c60(void)

{
  long unaff_x20;
  
  FUN_10062c4e4(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x28),&PTR_PTR_100f091c0,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100899c74 | FUN_100899c74 */

void FUN_100899c74(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899cb8 | FUN_100899cb8 */

void FUN_100899cb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x58);
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x18))(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar2);
  (**(code **)(lVar5 + 0x20))(uVar3,uVar1,uVar4,uVar6,uVar2,lVar5);
  return;
}



/* Address: 0x100899d38 | FUN_100899d38 */

void FUN_100899d38(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899d7c | FUN_100899d7c */

void FUN_100899d7c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100897a84(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100899d94 | FUN_100899d94 */

void FUN_100899d94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899dc0 | FUN_100899dc0 */

void FUN_100899dc0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899df4 | FUN_100899df4 */

undefined8 FUN_100899df4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined1 local_47;
  
  lVar1 = 0;
  FUN_1008a3ae8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 1;
  *(undefined4 *)(lVar1 + 0x28) = 0x10001;
  puVar2 = &DAT_100fe95b0;
  FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
  uStack_74 = 0;
  local_47 = 2;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  local_88 = lVar1;
  uStack_80 = param_2;
  local_78 = param_3 & 0xff;
  local_70 = puVar2;
  _swift_getObjectType(uVar3);
  FUN_100893ef4();
  _swift_retain(lVar1);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(uVar3);
  FUN_10062dee8(&local_88,uVar3);
  _swift_release(uVar3);
  _swift_release(lVar1);
  FUN_1005e70f4(&local_88);
  return uVar3;
}



/* Address: 0x100899ef4 | FUN_100899ef4 */

void FUN_100899ef4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899f28 | FUN_100899f28 */

void FUN_100899f28(void)

{
  long unaff_x20;
  
  thunk_FUN_1008b2cb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100899f34 | FUN_100899f34 */

void FUN_100899f34(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100004594(unaff_x20 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_deallocObject();
  return;
}



/* Address: 0x100899f90 | FUN_100899f90 */

void FUN_100899f90(void)

{
  long unaff_x20;
  
  FUN_100897410(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),unaff_x20 + 0x50
                ,*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x100899fd4 | FUN_100899fd4 */

void FUN_100899fd4(undefined8 param_1,uint param_2)

{
  if (0xfe < (param_2 >> 8 & 0xff)) {
    return;
  }
  FUN_10081c820();
  return;
}



/* Address: 0x100899fe8 | thunk_FUN_1008999f8 */

void thunk_FUN_1008999f8(void)

{
  FUN_1008999f8();
  return;
}



/* Address: 0x100899fec | thunk_FUN_100899be8 */

void thunk_FUN_100899be8(void)

{
  long unaff_x20;
  
  FUN_100898f48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100899ff0 | thunk_FUN_100899f90 */

void thunk_FUN_100899f90(void)

{
  long unaff_x20;
  
  FUN_100897410(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),unaff_x20 + 0x50
                ,*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x100899ff4 | thunk_FUN_1008996d8 */

void thunk_FUN_1008996d8(void)

{
  thunk_FUN_1008996d8();
  return;
}



/* Address: 0x100899ff8 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100899ffc | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x10089a000 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x10089a004 | thunk_FUN_100899f34 */

void thunk_FUN_100899f34(void)

{
  thunk_FUN_100899f34();
  return;
}



/* Address: 0x10089a008 | FUN_10089a008 */

undefined1 FUN_10089a008(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 2);
}



/* Address: 0x10089a010 | FUN_10089a010 */

undefined1 FUN_10089a010(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 3);
}



/* Address: 0x10089a018 | FUN_10089a018 */

void FUN_10089a018(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 3) = param_1;
  return;
}



/* Address: 0x10089a020 | FUN_10089a020 */

undefined8 FUN_10089a020(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 8);
}



/* Address: 0x10089a02c | FUN_10089a02c */

void FUN_10089a02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Address: 0x10089a038 | FUN_10089a038 */

undefined8 FUN_10089a038(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return uVar1;
}



/* Address: 0x10089a07c | FUN_10089a07c */

void FUN_10089a07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Address: 0x10089a0c0 | FUN_10089a0c0 */

void FUN_10089a0c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x1010101;
  *(undefined8 *)(param_1 + 4) = 0x14000;
  *(undefined8 *)(param_1 + 2) = 0x14000;
  *(undefined8 *)(param_1 + 6) = 0xfffe;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 10) = param_3;
  *(undefined8 *)(param_1 + 0xc) = param_4;
  return;
}



/* Address: 0x10089a0e8 | thunk_FUN_10089a0ec */

code * thunk_FUN_10089a0ec(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar7;
  (**(code **)(lVar6 + 0x10))();
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_100f0a928;
    _swift_allocObject(&DAT_100f0a928,0x58,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    uVar2 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    *(undefined8 *)(puVar3 + 0x28) = param_1[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    *(undefined8 *)(puVar3 + 0x30) = uVar9;
    uVar2 = param_1[4];
    *(undefined8 *)(puVar3 + 0x48) = param_1[5];
    *(undefined8 *)(puVar3 + 0x40) = uVar2;
    *(undefined8 *)(puVar3 + 0x50) = param_1[6];
    pcVar8 = *(code **)(lVar6 + 0x20);
    _swift_retain();
    lVar4 = 0;
    FUN_10089b170(0,param_2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&uStack_90,param_1,lVar4);
    uVar2 = 0;
    FUN_1006529e0(0,param_2);
    pcVar5 = FUN_10089b550;
    (*pcVar8)(FUN_10089b550,puVar3,uVar2,uVar7,lVar6);
    _swift_release(puVar3);
  }
  else {
    uVar2 = 0;
    uStack_80 = param_2;
    FUN_1006529e0(0,param_2);
    puVar3 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    FUN_1006414f4(&uStack_a0,FUN_10089b580,&uStack_90,uVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    uStack_90 = uStack_a0;
    uStack_88 = uStack_98;
    pcVar5 = (code *)&uStack_90;
    FUN_10063db28(pcVar5,uVar7,uVar2,lVar6);
    FUN_1005dff14(uStack_a0,uStack_98);
  }
  return pcVar5;
}



/* Address: 0x10089a0ec | FUN_10089a0ec */

code * FUN_10089a0ec(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar7;
  (**(code **)(lVar6 + 0x10))();
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_100f0a928;
    _swift_allocObject(&DAT_100f0a928,0x58,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    uVar2 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    *(undefined8 *)(puVar3 + 0x28) = param_1[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    *(undefined8 *)(puVar3 + 0x30) = uVar9;
    uVar2 = param_1[4];
    *(undefined8 *)(puVar3 + 0x48) = param_1[5];
    *(undefined8 *)(puVar3 + 0x40) = uVar2;
    *(undefined8 *)(puVar3 + 0x50) = param_1[6];
    pcVar8 = *(code **)(lVar6 + 0x20);
    _swift_retain();
    lVar4 = 0;
    FUN_10089b170(0,param_2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&local_90,param_1,lVar4);
    uVar2 = 0;
    FUN_1006529e0(0,param_2);
    pcVar5 = FUN_10089b550;
    (*pcVar8)(FUN_10089b550,puVar3,uVar2,uVar7,lVar6);
    _swift_release(puVar3);
  }
  else {
    uVar2 = 0;
    local_80 = param_2;
    FUN_1006529e0(0,param_2);
    puVar3 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    FUN_1006414f4(&local_a0,FUN_10089b580,&local_90,uVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    local_90 = local_a0;
    local_88 = local_98;
    pcVar5 = (code *)&local_90;
    FUN_10063db28(pcVar5,uVar7,uVar2,lVar6);
    FUN_1005dff14(local_a0,local_98);
  }
  return pcVar5;
}



/* Address: 0x10089a278 | FUN_10089a278 */

/* WARNING: Removing unreachable block (ram,0x00010089a668) */
/* WARNING: Removing unreachable block (ram,0x00010089a450) */

long FUN_10089a278(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_58;
  
  bVar3 = param_1[3];
  lVar4 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0x22;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(byte *)(lVar4 + 0x40) = bVar3;
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar4);
  lVar5 = 0;
  FUN_10088991c(0,0,uVar11,uVar2,uVar12);
  uVar11 = *(undefined8 *)(lVar5 + 0x78);
  *(long *)(lVar5 + 0x78) = lVar4;
  _swift_retain();
  _swift_release(uVar11);
  local_58 = lVar5;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  plVar6 = &local_58;
  FUN_1006381a4(plVar6,0,1);
  _swift_release(lVar5);
  uVar7 = 0;
  FUN_100880850(0,4,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar10 = *(ulong *)(uVar7 + 0x10);
  uVar9 = *(ulong *)(uVar7 + 0x18);
  _swift_retain(plVar6);
  uVar8 = uVar7;
  if (uVar9 >> 1 <= uVar10) {
    uVar8 = (ulong)(1 < uVar9);
    FUN_100880850(uVar8,uVar10 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
  lVar5 = uVar8 + uVar10 * 0x10;
  *(long **)(lVar5 + 0x20) = plVar6;
  *(undefined ***)(lVar5 + 0x28) = &PTR_PTR_100eee590;
  _swift_retain(lVar4);
  FUN_100626a9c();
  if (unaff_x21 == 0) {
    _swift_release(lVar4);
    _swift_retain(plVar6);
    FUN_100626a9c();
    _swift_release(plVar6);
    uVar10 = uVar8;
    if ((*param_1 & 1) != 0) {
      uVar11 = 0;
      FUN_1008945ec();
      _swift_allocObject();
      FUN_10088fb7c();
      _swift_retain();
      FUN_100626a9c();
      uVar9 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar9) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100880850(uVar10,uVar9 + 1,1,uVar8);
      }
      *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
      lVar5 = uVar10 + uVar9 * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = uVar11;
      *(undefined ***)(lVar5 + 0x28) = &PTR_PTR_100f09a18;
      _swift_release(uVar11);
    }
    uVar9 = uVar10;
    if ((param_1[2] & 1) != 0) {
      lVar5 = 0;
      FUN_100889258();
      _swift_allocObject();
      *(undefined1 *)(lVar5 + 0x10) = 0;
      _swift_retain();
      FUN_100626a9c();
      uVar8 = *(ulong *)(uVar10 + 0x10);
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_100880850(uVar9,uVar8 + 1,1,uVar10);
      }
      *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
      lVar1 = uVar9 + uVar8 * 0x10;
      *(long *)(lVar1 + 0x20) = lVar5;
      *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100f09790;
      _swift_release(lVar5);
    }
    uVar10 = uVar9;
    if ((param_1[1] & 1) != 0) {
      lVar5 = 0;
      FUN_1008952c8();
      _swift_allocObject();
      *(undefined1 *)(lVar5 + 0x10) = 0;
      _swift_retain();
      FUN_100626a9c();
      uVar8 = *(ulong *)(uVar9 + 0x10);
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_100880850(uVar10,uVar8 + 1,1,uVar9);
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
      lVar1 = uVar10 + uVar8 * 0x10;
      *(long *)(lVar1 + 0x20) = lVar5;
      *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100f0a0f8;
      _swift_release(lVar5);
    }
    FUN_1008b45d4(0,param_3);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _swift_retain(lVar4);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_retain(uVar12);
    lVar5 = lVar4;
    FUN_1008afeb0(lVar4,uVar10,uVar11,uVar2,uVar12);
    _swift_retain();
    FUN_100626a9c();
    _swift_bridgeObjectRelease(uVar10);
    _swift_release(lVar4);
    _swift_release(plVar6);
    lVar4 = lVar5;
    _swift_release(lVar5);
    FUN_1008b4364();
    _swift_retain();
    _swift_release(lVar5);
  }
  else {
    _swift_release(plVar6);
    _swift_release(lVar4);
    _swift_release(lVar4);
    _swift_bridgeObjectRelease(uVar8);
  }
  return lVar4;
}



/* Address: 0x10089a788 | FUN_10089a788 */

void FUN_10089a788(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x28);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[4] = *(undefined8 *)(unaff_x20 + 0x40);
  param_1[3] = uVar5;
  param_1[5] = uVar2;
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10089a7f8 | FUN_10089a7f8 */

void FUN_10089a7f8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  return;
}



/* Address: 0x10089a844 | FUN_10089a844 */

void FUN_10089a844(undefined2 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0x102;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)(param_1 + 8) = 0x14000;
  *(undefined8 *)(param_1 + 4) = 0x14000;
  *(undefined8 *)(param_1 + 0xc) = 0xfffe;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x14) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x24) = param_2[5];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Address: 0x10089a880 | thunk_FUN_10089a884 */

code * thunk_FUN_10089a884(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar7;
  (**(code **)(lVar6 + 0x10))();
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_100f0a900;
    _swift_allocObject(&DAT_100f0a900,0x70,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    uVar2 = param_1[4];
    uVar10 = param_1[7];
    uVar9 = param_1[6];
    *(undefined8 *)(puVar3 + 0x48) = param_1[5];
    *(undefined8 *)(puVar3 + 0x40) = uVar2;
    *(undefined8 *)(puVar3 + 0x58) = uVar10;
    *(undefined8 *)(puVar3 + 0x50) = uVar9;
    uVar2 = param_1[8];
    *(undefined8 *)(puVar3 + 0x68) = param_1[9];
    *(undefined8 *)(puVar3 + 0x60) = uVar2;
    uVar10 = *param_1;
    uVar9 = param_1[3];
    uVar2 = param_1[2];
    *(undefined8 *)(puVar3 + 0x28) = param_1[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar10;
    *(undefined8 *)(puVar3 + 0x38) = uVar9;
    *(undefined8 *)(puVar3 + 0x30) = uVar2;
    pcVar8 = *(code **)(lVar6 + 0x20);
    _swift_retain();
    lVar4 = 0;
    FUN_10089b45c(0,param_2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&uStack_a0,param_1,lVar4);
    uVar2 = 0;
    FUN_1006529e0(0,param_2);
    pcVar5 = FUN_10089b4ac;
    (*pcVar8)(FUN_10089b4ac,puVar3,uVar2,uVar7,lVar6);
    _swift_release(puVar3);
  }
  else {
    uVar2 = 0;
    uStack_90 = param_2;
    FUN_1006529e0(0,param_2);
    puVar3 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    FUN_1006414f4(&uStack_b0,FUN_10089b4dc,&uStack_a0,uVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    uStack_a0 = uStack_b0;
    uStack_98 = uStack_a8;
    pcVar5 = (code *)&uStack_a0;
    FUN_10063db28(pcVar5,uVar7,uVar2,lVar6);
    FUN_1005dff14(uStack_b0,uStack_a8);
  }
  return pcVar5;
}


