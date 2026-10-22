/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003bb288 | FUN_1003bb288 */

void FUN_1003bb288(undefined8 param_1)

{
  FUN_1003bb290(param_1,0);
  return;
}



/* Address: 0x1003bb290 | FUN_1003bb290 */

void FUN_1003bb290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  lVar3 = *(long *)(unaff_x20 + 0x78);
  FUN_100004640(unaff_x20 + 0x58,uVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x48,auStack_78,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  pcVar6 = *(code **)(lVar3 + 0x10);
  FUN_100011128(uVar2,uVar4);
  (*pcVar6)(param_1,uVar5,param_2,uVar2,uVar4,uVar1,lVar3);
  FUN_100004550(uVar2,uVar4);
  return;
}



/* Address: 0x1003bb348 | FUN_1003bb348 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bb348(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  pcVar5 = FUN_1003bbb48;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_10035a9e4(FUN_1003bbb48,auStack_80);
  if (pcVar5 != (code *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    lVar3 = *(long *)(unaff_x20 + 0x78);
    FUN_100004640(unaff_x20 + 0x58,uVar1);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_80,0,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    pcVar7 = *(code **)(lVar3 + 0x10);
    FUN_100011128(uVar2,uVar4);
    (*pcVar7)(pcVar5,uVar6,0,uVar2,uVar4,uVar1,lVar3);
    FUN_100004550(uVar2,uVar4);
  }
  return;
}



/* Address: 0x1003bb41c | FUN_1003bb41c */

void FUN_1003bb41c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003594c0(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_3,param_4,local_50,lStack_48);
  *param_1 = param_3;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003bb49c | FUN_1003bb49c */

void FUN_1003bb49c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100021e40(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100004594(unaff_x20 + 0x58);
  FUN_100005808(unaff_x20 + 0x80,&DAT_100fc07f0,&DAT_100c42950);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Address: 0x1003bb520 | FUN_1003bb520 */

void FUN_1003bb520(void)

{
  FUN_1003bb49c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003bb540 | FUN_1003bb540 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003bb540(ulong *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong local_68 [3];
  undefined8 local_50;
  long lStack_48;
  
  uVar5 = *(ulong *)(param_3 + 0x40);
  if ((uint)(uVar5 >> 0x3e) == 0) {
    puVar2 = &DAT_100fc1158;
    FUN_1000037f0(&DAT_100fc1158,&DAT_100c42e60);
    _swift_allocObject();
    FUN_10000444c(uVar5);
    uVar1 = uVar5;
    FUN_1003647d4();
    local_68[0] = uVar1;
    FUN_1000037f0(&DAT_100fc0d18,&DAT_100c42940);
    _swift_allocObject();
    puVar3 = &DAT_100fc1160;
    FUN_100016eac(&DAT_100fc1160,&DAT_100fc1158,&DAT_100c42e60,
                  &TargetProtocolConformanceDescriptor_100c425d0);
    puVar4 = local_68;
    FUN_1001ae768(puVar4,puVar2,puVar3);
    FUN_100021e40(uVar5);
    *param_1 = (ulong)puVar4;
  }
  else {
    uVar1 = uVar5 & 0x3fffffffffffffff;
    FUN_1003594c0(local_68);
    FUN_100004640(local_68,local_50);
    (**(code **)(lStack_48 + 0x10))(uVar1,local_50,lStack_48);
    FUN_100021e40(uVar5);
    *param_1 = uVar1;
    FUN_100004594(local_68);
  }
  return;
}



/* Address: 0x1003bb684 | FUN_1003bb684 */

void FUN_1003bb684(void)

{
  FUN_1003bb540();
  return;
}



/* Address: 0x1003bb68c | FUN_1003bb68c */

void FUN_1003bb68c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fc2698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc26a0;
  FUN_100005c24(&DAT_100fc26a0,&DAT_100c44930);
  puVar2 = puVar1;
  FUN_1003bb6fc();
  puVar3 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
             ,puVar1,&local_28);
  DAT_100fc2698 = puVar3;
  return;
}



/* Address: 0x1003bb6fc | FUN_1003bb6fc */

void FUN_1003bb6fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc26a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41368;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41368,&DAT_100ecabd0);
  DAT_100fc26a8 = pTVar1;
  return;
}



/* Address: 0x1003bb73c | FUN_1003bb73c */

void FUN_1003bb73c(undefined8 param_1,char param_2,long param_3)

{
  CurrentValueSubject *pCVar1;
  long local_40;
  char local_38;
  
  if (param_2 != '\x01') {
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      pCVar1 = *(CurrentValueSubject **)(param_3 + 0xb0);
      _swift_retain(pCVar1);
      _swift_release();
      if (pCVar1 != (CurrentValueSubject *)0x0) {
        FUN_1003293c4();
        local_40 = param_3;
        local_38 = param_2;
        Combine::CurrentValueSubject::send(pCVar1,&local_40);
        _swift_release(pCVar1);
      }
    }
  }
  return;
}



/* Address: 0x1003bb7bc | FUN_1003bb7bc */

void FUN_1003bb7bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [40];
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar1 = &DAT_100c449e8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdba0;
  FUN_1000037f0(&DAT_100fbdba0,&DAT_100c44a10);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  puVar1 = &DAT_100c44a18;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdc20;
  FUN_1000037f0(&DAT_100fbdc20,&DAT_100c3f170);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  puVar1 = &DAT_100c44a50;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdc18;
  FUN_1000037f0(&DAT_100fbdc18,&DAT_100c44a80);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar4 = 0;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  FUN_100076688(param_2,unaff_x20 + 0x58);
  FUN_10000444c(param_1);
  FUN_1003b8bfc();
  uVar3 = param_1;
  FUN_1001aeb1c();
  _swift_release(param_1);
  FUN_1003c431c(auStack_68);
  _swift_release(uVar3);
  _swift_beginAccess(puVar4,auStack_80,0x21,0);
  FUN_100364968(auStack_68,puVar4);
  _swift_endAccess(auStack_80);
  FUN_1003b9264();
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1003bb968 | FUN_1003bb968 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bb968(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3);
  plVar1 = (long *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8) + 8);
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bb9e8 | FUN_1003bb9e8 */

void FUN_1003bb9e8(void)

{
  FUN_1003bba9c(FUN_1003bbbcc);
  return;
}



/* Address: 0x1003bb9f4 | FUN_1003bb9f4 */

void FUN_1003bb9f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003ba22c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bba10 | FUN_1003bba10 */

void FUN_1003bba10(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4));
  plVar1 = (long *)(unaff_x20 + uVar4 + 8);
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bba90 | FUN_1003bba90 */

void FUN_1003bba90(void)

{
  FUN_1003bba9c(FUN_1003bbbb0);
  return;
}



/* Address: 0x1003bba9c | FUN_1003bba9c */

void FUN_1003bba9c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar4 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(lVar2 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_1003baac8(unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1],
                *(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Address: 0x1003bbaf0 | FUN_1003bbaf0 */

void FUN_1003bbaf0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bad60(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bbb10 | FUN_1003bbb10 */

void FUN_1003bbb10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003baff4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003bbb2c | FUN_1003bbb2c */

void FUN_1003bbb2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bb120(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003bbb48 | FUN_1003bbb48 */

void FUN_1003bbb48(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bb41c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bbb50 | FUN_1003bbb50 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003bbb50(void)

{
  return ZEXT816(0x100fc26f8);
}



/* Address: 0x1003bbb70 | FUN_1003bbb70 */

void FUN_1003bbb70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = param_1[1];
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1003bbbb0 | FUN_1003bbbb0 */

void FUN_1003bbbb0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bab24(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bbbcc | FUN_1003bbbcc */

void FUN_1003bbbcc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003ba130(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bbbe8 | thunk_FUN_1002fac6c */

void thunk_FUN_1002fac6c(void)

{
  FUN_1002fac6c();
  return;
}



/* Address: 0x1003bbbec | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x1003bbbf0 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x1003bbbf4 | FUN_1003bbbf4 */

void FUN_1003bbbf4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bbc18 | FUN_1003bbc18 */

void FUN_1003bbc18(void)

{
  FUN_1003bb73c();
  return;
}



/* Address: 0x1003bbc20 | FUN_1003bbc20 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003bbc20(void)

{
  undefined *puVar1;
  long lVar2;
  ID *pIVar3;
  ID IVar4;
  long extraout_x8;
  ID *pIVar5;
  long unaff_x20;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pIVar5 = (ID *)(&stack0xffffffffffffffe0 + -extraout_x8);
  FUN_10031ebc8(pIVar5,*(undefined8 *)(unaff_x20 + 0x50));
  lVar2 = 0;
  FUN_100317b10();
  pIVar3 = pIVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(pIVar5,1,lVar2);
  if ((int)pIVar3 == 1) {
    FUN_1003bbe00(pIVar5);
  }
  else {
    pIVar3 = pIVar5;
    _swift_getEnumCaseMultiPayload(pIVar5,lVar2);
    if ((int)pIVar3 == 3) {
      IVar4 = *pIVar5;
      FUN_100312568(0);
      FUN_100308ea0(IVar4);
      return IVar4;
    }
    FUN_10009eff8(pIVar5);
  }
  IVar4 = objc_stub::blackColor((ID)&_OBJC_CLASS___NSColor);
  return IVar4;
}



/* Address: 0x1003bbd24 | FUN_1003bbd24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003bbd24(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffe0 + -extraout_x8);
  FUN_10031ebc8(puVar6,*(undefined8 *)(unaff_x20 + 0x50));
  lVar2 = 0;
  FUN_100317b10();
  puVar3 = puVar6;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1003bbe00(puVar6);
  }
  else {
    puVar3 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,lVar2);
    if ((int)puVar3 == 3) {
      uVar5 = 0;
      uVar4 = *puVar6;
      goto LAB_1003bbdf0;
    }
    FUN_10009eff8(puVar6);
  }
  uVar4 = 0;
  uVar5 = 1;
LAB_1003bbdf0:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x1003bbe00 | FUN_1003bbe00 */

undefined8 FUN_1003bbe00(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003bbe48 | FUN_1003bbe48 */

undefined8 FUN_1003bbe48(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10007d048(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1003bc3f4(param_1,lVar1);
  FUN_100004594(param_2);
  return param_1;
}



/* Address: 0x1003bbeb0 | FUN_1003bbeb0 */

undefined8 FUN_1003bbeb0(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = *(long *)(param_2 + 0x18);
  FUN_10007d048(param_2,lVar1);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1003bc2e8(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_100004594(param_2);
  return param_1;
}



/* Address: 0x1003bbf5c | FUN_1003bbf5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bbf5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = param_1;
    _swift_release(lVar1);
  }
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
    pcVar3 = *(code **)(param_3 + 0x10);
    if (pcVar3 == (code *)0x0) {
      _swift_release(param_3);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x18);
      FUN_100011128(pcVar3,uVar2);
      _swift_release(param_3);
      (*pcVar3)();
      FUN_100004550(pcVar3,uVar2);
    }
  }
  return;
}



/* Address: 0x1003bc01c | FUN_1003bc01c */

/* WARNING: Removing unreachable block (ram,0x0001003bc048) */

void FUN_1003bc01c(void)

{
  undefined1 auStack_40 [16];
  
  FUN_1002ff310(FUN_1003bc4a4,auStack_40);
  return;
}



/* Address: 0x1003bc060 | FUN_1003bc060 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bc060(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID self;
  UTType UVar6;
  UTType UVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined1 *local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  local_a8 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar9 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  FUN_100357cf0(auStack_88);
  local_98 = lStack_68;
  local_90 = local_70;
  puVar2 = auStack_88;
  FUN_100004640();
  uVar8 = *(ulong *)(param_2 + 0x50);
  puVar3 = &DAT_100fbe4e8;
  local_a0 = puVar2;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  uVar5 = uVar8;
  FUN_100308c8c();
  puVar1 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
  *(undefined **)(puVar4 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
  *(undefined **)(puVar4 + 0x40) = puVar1;
  *(ulong *)(puVar4 + 0x20) = uVar5 & 0xffffff;
  SVar10 = (extension_Foundation)::Swift::String::_init();
  SVar11 = Swift::String::uppercased(SVar10);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  self = 0;
  FUN_100381740();
  _objc_allocWithZone();
  UVar6.unknown = (undefined *)objc_stub::init(self);
  UVar7 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar6);
  SVar10 = UniformTypeIdentifiers::UTType::get_identifier(UVar7);
  (**(code **)(lVar9 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_a8);
  FUN_10037c4a8(SVar11.str,SVar11.bridgeObject,SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  *(undefined **)(puVar3 + 0x20) = UVar6.unknown;
  (**(code **)(*(long *)(local_98 + 0x10) + 0x18))(uVar8,puVar3,local_90);
  _swift_release(puVar3);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003bc278 | FUN_1003bc278 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bc278(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1003bc2ac | FUN_1003bc2ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bc2ac(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003bc2e8 | FUN_1003bc2e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003bc2e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  long local_50;
  undefined8 uStack_48;
  
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_10000cbb0(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  FUN_100076688(auStack_68,param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x50) = param_1;
  puVar1 = &DAT_100ececc0;
  _swift_allocObject(&DAT_100ececc0,0x18,7);
  _swift_weakInit(puVar1 + 0x10,param_3);
  FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
  _swift_allocObject();
  FUN_1003c1c60(param_1,FUN_1003bc500,puVar1);
  _swift_release(puVar1);
  FUN_100004594(auStack_68);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_3 + 0x48) = param_1;
  _swift_release(uVar2);
  return param_3;
}



/* Address: 0x1003bc3f4 | FUN_1003bc3f4 */

void FUN_1003bc3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar1 + 0x40));
  _swift_allocObject(param_3,0x58,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  FUN_1003bc2e8(param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                param_3,param_4,param_5);
  return;
}



/* Address: 0x1003bc4a4 | FUN_1003bc4a4 */

void FUN_1003bc4a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bc060(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003bc4bc | FUN_1003bc4bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003bc4bc(void)

{
  return ZEXT816(0x100fc2928);
}



/* Address: 0x1003bc4dc | FUN_1003bc4dc */

void FUN_1003bc4dc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003bc500 | FUN_1003bc500 */

void FUN_1003bc500(void)

{
  FUN_1003bbf5c();
  return;
}



/* Address: 0x1003bc508 | FUN_1003bc508 */

undefined * FUN_1003bc508(undefined *param_1)

{
  undefined *puVar1;
  
  FUN_1003bc564();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 != (undefined *)0x0) {
    _swift_bridgeObjectRetain();
    FUN_1003bc6e0();
    puVar1 = param_1;
  }
  return puVar1;
}



/* Address: 0x1003bc564 | FUN_1003bc564 */

undefined8 FUN_1003bc564(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = 0;
  FUN_100317b10();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  puVar2 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_10031ebc8(lVar8 - extraout_x12_00);
  FUN_1003bcd90(lVar8 - extraout_x12_00,lVar8);
  lVar3 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,lVar1);
  uVar4 = 0;
  if ((int)lVar3 != 1) {
    FUN_1003bcde0(lVar8,lVar7,0,0);
    FUN_1003bcde0(lVar7,puVar6);
    puVar5 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,lVar1);
    if ((int)puVar5 == 4) {
      uVar4 = *puVar6;
    }
    else {
      FUN_10009eff8(puVar6);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Address: 0x1003bc6e0 | FUN_1003bc6e0 */

void FUN_1003bc6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    FUN_10003bf18(param_3,param_4);
    return;
  }
  return;
}



/* Address: 0x1003bc714 | FUN_1003bc714 */

undefined8 FUN_1003bc714(long param_1,undefined8 param_2)

{
  FUN_1003bc564();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_1003bc6e0();
  }
  return param_2;
}



/* Address: 0x1003bc748 | FUN_1003bc748 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bc748(long param_1,undefined8 param_2,Data param_3,ulong param_4)

{
  undefined *self;
  NSData *pNVar1;
  
  FUN_1003bc564();
  if (param_1 != 0) {
    FUN_10011da54(param_3.unknown,param_4);
    FUN_1003bc6e0(param_1,param_2,param_3.unknown,param_4);
    if (param_4 >> 0x3c < 0xf) {
      self = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      FUN_1001037b4(param_3.unknown,param_4);
      pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_3);
      objc_stub::initWithData_((ID)self,pNVar1);
      FUN_10003bf18(param_3.unknown,param_4);
      FUN_10003bf18(param_3.unknown,param_4);
    }
  }
  return;
}



/* Address: 0x1003bc814 | FUN_1003bc814 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1003bc814(void)

{
  ID IVar1;
  long unaff_x20;
  String SVar2;
  
  IVar1 = objc_stub::title(*(ID *)(unaff_x20 + 0x10));
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x1003bc874 | FUN_1003bc874 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003bc874(void)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  Encoding data;
  Encoding EVar3;
  URL UVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  UTType UVar11;
  long lVar12;
  undefined *puVar13;
  ID self;
  NSArray *pNVar14;
  void *pvVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar18;
  long unaff_x20;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined1 *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  EVar3 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar3.unknown + -8) + 0x40));
  local_d0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar20 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar17 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100fc1a40;
  local_88 = lVar17;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  local_98 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _Var5.unknown = (undefined *)objc_stub::data(*(ID *)(unaff_x20 + 0x10));
  FUN_10031b218();
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    lVar22 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var2.unknown = _Var5.unknown;
    }
    lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar22 != 0) {
    uVar18 = 0;
    local_a0 = (ulong)_Var5.unknown & 0xc000000000000001;
    local_a8 = (ulong)_Var5.unknown & 0xffffffffffffff8;
    local_d8 = lVar20;
    local_c8 = UVar4.unknown;
    local_c0 = lVar22;
    local_b8 = _Var5.unknown;
    local_b0 = lVar21;
    do {
      if (local_a0 == 0) {
        if (*(ulong *)(local_a8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1003bccb8);
          (*pcVar19)();
        }
        uVar6 = *(ulong *)(_Var5.unknown + uVar18 * 8 + 0x20);
      }
      else {
        uVar6 = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,_Var5);
      }
      lVar21 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1003bccb4);
        (*pcVar19)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      pMVar7 = pMVar8;
      FUN_10033d98c();
      UVar9 = Swift::Actor::get_unownedExecutor();
      pcVar10 = (char *)UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)pcVar10 & 1) == 0) {
        pcVar10 = "PasteCore/FileItemContentViewModel.swift";
        _swift_task_reportUnexpectedExecutor
                  ("PasteCore/FileItemContentViewModel.swift",0x28,1,0x1a,UVar9.unknown,pMVar7);
      }
      lVar22 = local_88;
      UVar11 = UniformTypeIdentifiers::UTType::get_fileURL((UTType)pcVar10);
      SVar23 = UniformTypeIdentifiers::UTType::get_identifier(UVar11);
      pvVar15 = SVar23.bridgeObject;
      (**(code **)(lVar20 + 8))(lVar22,local_90);
      lVar22 = _TtC9PasteCore14PasteboardItem::dataByType;
      _swift_beginAccess(uVar6 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x20,0);
      EVar3.unknown = *(undefined **)(uVar6 + lVar22);
      if (*(long *)(EVar3.unknown + 0x10) == 0) {
LAB_1003bcb98:
        _swift_endAccess(auStack_78);
        _swift_bridgeObjectRelease(pvVar15);
LAB_1003bcba8:
        lVar22 = local_b0;
        (**(code **)(local_b0 + 0x38))(lVar17,1,1,UVar4.unknown);
        _swift_release(pMVar8);
      }
      else {
        _swift_bridgeObjectRetain(EVar3.unknown);
        FUN_100071370();
        if (((ulong)SVar23.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(EVar3.unknown);
          goto LAB_1003bcb98;
        }
        puVar1 = (undefined8 *)(*(long *)(EVar3.unknown + 0x38) + (long)SVar23.str * 0x10);
        data.unknown = (undefined *)*puVar1;
        lVar22 = puVar1[1];
        FUN_1001037b4(data.unknown,lVar22);
        _swift_endAccess(auStack_78);
        _swift_bridgeObjectRelease();
        Encoding::_get_utf8(EVar3);
        lVar16 = lVar22;
        (extension_Foundation)::Swift::String::_init(data);
        _swift_bridgeObjectRelease(pvVar15);
        UVar4.unknown = local_c8;
        lVar20 = local_d8;
        FUN_10003bf2c(data.unknown,lVar22);
        if (lVar16 == 0) goto LAB_1003bcba8;
        Foundation::URL::_init();
        _swift_release(pMVar8);
        _swift_bridgeObjectRelease(lVar16);
        lVar22 = local_b0;
      }
      lVar12 = lVar17;
      (**(code **)(lVar22 + 0x30))(lVar17,1,UVar4.unknown);
      _Var5.unknown = local_b8;
      lVar16 = local_c0;
      if ((int)lVar12 == 1) {
        FUN_1002fc0a4(lVar17);
      }
      else {
        pcVar19 = *(code **)(lVar22 + 0x20);
        (*pcVar19)(local_98,lVar17,UVar4.unknown);
        puVar13 = local_80;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_10037fb74(0,*(long *)(local_80 + 0x10) + 1,1);
          local_80 = puVar13;
        }
        uVar6 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar6) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
          FUN_10037fb74(puVar13,uVar6 + 1,1,local_80);
          local_80 = puVar13;
        }
        UVar4.unknown = local_c8;
        *(ulong *)(local_80 + 0x10) = uVar6 + 1;
        (*pcVar19)(local_80 +
                   *(long *)(lVar22 + 0x48) * uVar6 +
                   ((ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff)),local_98,local_c8);
      }
      uVar18 = uVar18 + 1;
    } while (lVar21 != lVar16);
  }
  _swift_bridgeObjectRelease(_Var5.unknown);
  self = objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  puVar13 = local_80;
  pNVar14 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar13);
  objc_stub::activateFileViewerSelectingURLs_(self,pNVar14);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x1003bcd70);
  (*pcVar19)();
}



/* Address: 0x1003bcd70 | FUN_1003bcd70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003bcd70(void)

{
  return ZEXT816(0x100fc29e8);
}



/* Address: 0x1003bcd90 | FUN_1003bcd90 */

undefined8 FUN_1003bcd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003bcde0 | FUN_1003bcde0 */

undefined8 FUN_1003bcde0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100317b10();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1003bce24 | FUN_1003bce24 */

undefined1  [16] FUN_1003bce24(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_30 = &DAT_100c44b60;
    local_28 = &DAT_100c44b60;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x18);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1003bce9c | FUN_1003bce9c */

long * FUN_1003bce9c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  sVar2 = *(size_t *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar2 = sVar2 + 1;
  }
  uVar3 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && sVar2 + 2 < 0x19) {
    plVar1 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
    if ((int)plVar1 == 0) {
      (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
      (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,sVar2);
    }
    *(undefined1 *)(sVar2 + (long)param_1) = *(undefined1 *)(sVar2 + (long)param_2);
    ((undefined1 *)(sVar2 + (long)param_1))[1] = ((undefined1 *)(sVar2 + (long)param_2))[1];
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1003bcf90 | FUN_1003bcf90 */

void FUN_1003bcf90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003bcfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Address: 0x1003bcfec | FUN_1003bcfec */

void * FUN_1003bcfec(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar5 + 0x54);
    sVar6 = *(size_t *)(lVar5 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x54);
    sVar6 = *(size_t *)(lVar5 + 0x40);
    sVar1 = sVar6;
    if (iVar3 == 0) {
      sVar1 = sVar6 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar3 == 0) {
    sVar6 = sVar6 + 1;
  }
  *(undefined1 *)(sVar6 + (long)param_1) = *(undefined1 *)(sVar6 + (long)param_2);
  ((undefined1 *)(sVar6 + (long)param_1))[1] = ((undefined1 *)(sVar6 + (long)param_2))[1];
  return param_1;
}



/* Address: 0x1003bd0ac | FUN_1003bd0ac */

void * FUN_1003bd0ac(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar4);
      goto LAB_1003bd15c;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar4);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    goto LAB_1003bd15c;
  }
  sVar3 = *(size_t *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar3 = sVar3 + 1;
  }
  _memcpy(param_1,param_2,sVar3);
LAB_1003bd15c:
  lVar4 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  *(undefined1 *)(lVar4 + (long)param_1) = *(undefined1 *)(lVar4 + (long)param_2);
  ((undefined1 *)(lVar4 + (long)param_1))[1] = ((undefined1 *)(lVar4 + (long)param_2))[1];
  return param_1;
}



/* Address: 0x1003bd1b4 | FUN_1003bd1b4 */

void * FUN_1003bd1b4(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar5 + 0x54);
    sVar6 = *(size_t *)(lVar5 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x54);
    sVar6 = *(size_t *)(lVar5 + 0x40);
    sVar1 = sVar6;
    if (iVar3 == 0) {
      sVar1 = sVar6 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar3 == 0) {
    sVar6 = sVar6 + 1;
  }
  *(undefined1 *)(sVar6 + (long)param_1) = *(undefined1 *)(sVar6 + (long)param_2);
  ((undefined1 *)(sVar6 + (long)param_1))[1] = ((undefined1 *)(sVar6 + (long)param_2))[1];
  return param_1;
}



/* Address: 0x1003bd274 | FUN_1003bd274 */

void * FUN_1003bd274(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar4);
      goto LAB_1003bd324;
    }
    (**(code **)(lVar5 + 8))(param_1,lVar4);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
    goto LAB_1003bd324;
  }
  sVar3 = *(size_t *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    sVar3 = sVar3 + 1;
  }
  _memcpy(param_1,param_2,sVar3);
LAB_1003bd324:
  lVar4 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  *(undefined1 *)(lVar4 + (long)param_1) = *(undefined1 *)(lVar4 + (long)param_2);
  ((undefined1 *)(lVar4 + (long)param_1))[1] = ((undefined1 *)(lVar4 + (long)param_2))[1];
  return param_1;
}


