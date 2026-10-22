/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ab2cdc | FUN_100ab2cdc */

void FUN_100ab2cdc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa638c(param_1,*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100ab2cf4 | FUN_100ab2cf4 */

void FUN_100ab2cf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62368;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62368,&DAT_100ee49c8);
  DAT_100ff7fd8 = pTVar1;
  return;
}



/* Address: 0x100ab2d34 | thunk_FUN_100ab2d38 */

void thunk_FUN_100ab2d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93800,&DAT_100f2ff50);
  DAT_100ff7fe0 = pTVar1;
  return;
}



/* Address: 0x100ab2d38 | FUN_100ab2d38 */

void FUN_100ab2d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93800,&DAT_100f2ff50);
  DAT_100ff7fe0 = pTVar1;
  return;
}



/* Address: 0x100ab2d78 | FUN_100ab2d78 */

undefined ** FUN_100ab2d78(void)

{
  return &PTR_PTR_100f2fd78;
}



/* Address: 0x100ab2d84 | FUN_100ab2d84 */

undefined ** FUN_100ab2d84(void)

{
  return &PTR_PTR_100f2fd98;
}



/* Address: 0x100ab2d90 | FUN_100ab2d90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ab2d90(void)

{
  return ZEXT816(0x100ff8098);
}



/* Address: 0x100ab2db0 | FUN_100ab2db0 */

undefined1  [16] FUN_100ab2db0(void)

{
  return ZEXT816(0x100f2fe28);
}



/* Address: 0x100ab2dc0 | FUN_100ab2dc0 */

undefined8 * FUN_100ab2dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  lVar2 = param_2[3];
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    lVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar2;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar3;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  return param_1;
}



/* Address: 0x100ab2e5c | FUN_100ab2e5c */

undefined8 * FUN_100ab2e5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  plVar4 = param_1 + 3;
  lVar5 = *plVar4;
  plVar6 = param_2 + 3;
  lVar2 = *plVar6;
  if (lVar5 == 0) {
    if (lVar2 == 0) {
      uVar3 = param_2[4];
      lVar2 = *plVar6;
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[4] = uVar3;
      *plVar4 = lVar2;
    }
    else {
      param_1[3] = lVar2;
      uVar3 = param_2[4];
      param_1[4] = uVar3;
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (lVar2 == 0) {
    FUN_100a5acf0(plVar4);
    uVar1 = *(undefined1 *)(param_2 + 5);
    lVar2 = *plVar6;
    param_1[4] = param_2[4];
    *plVar4 = lVar2;
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  else {
    param_1[3] = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar5);
    uVar3 = param_1[4];
    param_1[4] = param_2[4];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  return param_1;
}



/* Address: 0x100ab2f78 | FUN_100ab2f78 */

undefined8 * FUN_100ab2f78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  plVar2 = param_1 + 3;
  if (*plVar2 != 0) {
    if (param_2[3] != 0) {
      param_1[3] = param_2[3];
      _swift_bridgeObjectRelease();
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      return param_1;
    }
    FUN_100a5acf0(plVar2);
  }
  lVar3 = param_2[3];
  param_1[4] = param_2[4];
  *plVar2 = lVar3;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x100ab3024 | FUN_100ab3024 */

undefined1  [16] FUN_100ab3024(void)

{
  return ZEXT816(0x100f2feb0);
}



/* Address: 0x100ab3034 | FUN_100ab3034 */

undefined1  [16] FUN_100ab3034(void)

{
  return ZEXT816(0x100f2ff50);
}



/* Address: 0x100ab3044 | FUN_100ab3044 */

void FUN_100ab3044(void)

{
  return;
}



/* Address: 0x100ab3048 | FUN_100ab3048 */

undefined1  [16] FUN_100ab3048(void)

{
  return ZEXT816(0x100f2ffe0);
}



/* Address: 0x100ab3058 | FUN_100ab3058 */

void FUN_100ab3058(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ab306c | FUN_100ab306c */

int FUN_100ab306c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 5) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100ab308c | FUN_100ab308c */

void FUN_100ab308c(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_2 + -1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 5) = uVar1;
  return;
}



/* Address: 0x100ab30b8 | FUN_100ab30b8 */

int FUN_100ab30b8(int *param_1)

{
  if ((char)param_1[1] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100ab30d4 | FUN_100ab30d4 */

void FUN_100ab30d4(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2 + -1;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x100ab30f4 | FUN_100ab30f4 */

undefined1  [16] FUN_100ab30f4(void)

{
  return ZEXT816(0x100f30070);
}



/* Address: 0x100ab3104 | thunk_FUN_100ab3108 */

void thunk_FUN_100ab3108(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff80f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c939fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c939fc,&DAT_100f2ffe0);
  DAT_100ff80f8 = pTVar1;
  return;
}



/* Address: 0x100ab3108 | FUN_100ab3108 */

void FUN_100ab3108(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff80f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c939fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c939fc,&DAT_100f2ffe0);
  DAT_100ff80f8 = pTVar1;
  return;
}



/* Address: 0x100ab3148 | FUN_100ab3148 */

void FUN_100ab3148(void)

{
  FUN_100a51c64(0x3a);
  return;
}



/* Address: 0x100ab3150 | FUN_100ab3150 */

void FUN_100ab3150(void)

{
  FUN_100a51c64(0x48);
  return;
}



/* Address: 0x100ab3158 | FUN_100ab3158 */

void FUN_100ab3158(void)

{
  FUN_100a51c64(0x50);
  return;
}



/* Address: 0x100ab3160 | FUN_100ab3160 */

void FUN_100ab3160(void)

{
  FUN_100a51c64(0x69);
  return;
}



/* Address: 0x100ab3168 | FUN_100ab3168 */

void FUN_100ab3168(void)

{
  long unaff_x20;
  
  FUN_100aad284(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined1 *)(unaff_x20 + 0x68));
  return;
}



/* Address: 0x100ab3198 | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  FUN_100a640ec();
  return;
}



/* Address: 0x100ab319c | FUN_100ab319c */

void FUN_100ab319c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_100aac068(uVar1,*(undefined8 *)(unaff_x20 + 0x48));
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100ab31cc | FUN_100ab31cc */

void FUN_100ab31cc(undefined2 *param_1,code *param_2)

{
  undefined2 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined2 *)(unaff_x20 + 0x3a);
  (*param_2)();
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100ab3200 | FUN_100ab3200 */

void FUN_100ab3200(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff8108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff8100;
  FUN_1000f8b08(&DAT_100ff8100,&DAT_100c93a28);
  puVar2 = PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8;
  _swift_getWitnessTable(PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,puVar1);
  DAT_100ff8108 = puVar2;
  return;
}



/* Address: 0x100ab3250 | FUN_100ab3250 */

undefined8 FUN_100ab3250(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff6ea8;
  FUN_1000f7830(&DAT_100ff6ea8,&DAT_100c93a30);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ab3298 | FUN_100ab3298 */

void FUN_100ab3298(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7160(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ab32b4 | FUN_100ab32b4 */

void FUN_100ab32b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100aae958(param_1,param_2,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100ab32d4 | FUN_100ab32d4 */

void FUN_100ab32d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa624c(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100ab32f4 | FUN_100ab32f4 */

void FUN_100ab32f4(void)

{
  FUN_100aa5eb0();
  return;
}



/* Address: 0x100ab3308 | FUN_100ab3308 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ab3308(undefined8 param_1,undefined8 param_2)

{
  (*_DAT_10130b410)(param_2,param_1);
  return param_2;
}



/* Address: 0x100ab3344 | FUN_100ab3344 */

void FUN_100ab3344(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7204(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100ab335c | FUN_100ab335c */

undefined8 FUN_100ab335c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff6ea8;
  FUN_1000f7830(&DAT_100ff6ea8,&DAT_100c93a30);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ab33ac | FUN_100ab33ac */

void FUN_100ab33ac(void)

{
  FUN_100aab58c();
  return;
}



/* Address: 0x100ab33c0 | FUN_100ab33c0 */

void FUN_100ab33c0(void)

{
  FUN_100ab32f4();
  return;
}



/* Address: 0x100ab33d4 | FUN_100ab33d4 */

void FUN_100ab33d4(void)

{
  FUN_100aac490();
  return;
}



/* Address: 0x100ab33e8 | FUN_100ab33e8 */

void FUN_100ab33e8(void)

{
  FUN_100aac6e0();
  return;
}



/* Address: 0x100ab33fc | thunk_FUN_1004fd1dc */

void thunk_FUN_1004fd1dc(void)

{
  thunk_FUN_1004fd1dc();
  return;
}



/* Address: 0x100ab3400 | FUN_100ab3400 */

void FUN_100ab3400(void)

{
  FUN_100aad270();
  return;
}



/* Address: 0x100ab3414 | FUN_100ab3414 */

void FUN_100ab3414(void)

{
  FUN_100aac054();
  return;
}



/* Address: 0x100ab3428 | FUN_100ab3428 */

void FUN_100ab3428(void)

{
  FUN_100aabb0c();
  return;
}



/* Address: 0x100ab343c | FUN_100ab343c */

void FUN_100ab343c(void)

{
  FUN_100aab8cc();
  return;
}



/* Address: 0x100ab3450 | thunk_FUN_100aabb04 */

void thunk_FUN_100aabb04(void)

{
  FUN_100aabb04();
  return;
}



/* Address: 0x100ab3454 | thunk_FUN_100aabb04 */

void thunk_FUN_100aabb04(void)

{
  FUN_100aabb04();
  return;
}



/* Address: 0x100ab3458 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab345c | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  thunk_FUN_100a640ec();
  return;
}



/* Address: 0x100ab3460 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab3464 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab3468 | thunk_FUN_100ab20dc */

void thunk_FUN_100ab20dc(void)

{
  FUN_100ab20dc();
  return;
}



/* Address: 0x100ab346c | thunk_FUN_100ab20ac */

void thunk_FUN_100ab20ac(void)

{
  FUN_100ab20ac();
  return;
}



/* Address: 0x100ab3470 | thunk_FUN_100ab3148 */

void thunk_FUN_100ab3148(void)

{
  FUN_100ab3148();
  return;
}



/* Address: 0x100ab3474 | thunk_FUN_100ab3150 */

void thunk_FUN_100ab3150(void)

{
  FUN_100ab3150();
  return;
}



/* Address: 0x100ab3478 | thunk_FUN_100ab3158 */

void thunk_FUN_100ab3158(void)

{
  FUN_100ab3158();
  return;
}



/* Address: 0x100ab347c | thunk_FUN_100ab3160 */

void thunk_FUN_100ab3160(void)

{
  FUN_100ab3160();
  return;
}



/* Address: 0x100ab3480 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab3484 | thunk_FUN_100aaadec */

void thunk_FUN_100aaadec(void)

{
  FUN_100aaadec();
  return;
}



/* Address: 0x100ab3488 | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  thunk_FUN_100a640ec();
  return;
}


