/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10061e3e8 | FUN_10061e3e8 */

ulong * FUN_10061e3e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_retain(uVar2 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x10061e420 | FUN_10061e420 */

ulong * FUN_10061e420(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_release(uVar2 & 0x3fffffffffffffff);
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_release(uVar2 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x10061e484 | FUN_10061e484 */

ulong * FUN_10061e484(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _swift_release(*param_1 & 0x3fffffffffffffff);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x10061e4c8 | FUN_10061e4c8 */

undefined1  [16] FUN_10061e4c8(void)

{
  return ZEXT816(0x100eeb7e8);
}



/* Address: 0x10061e4d8 | FUN_10061e4d8 */

undefined1  [16] FUN_10061e4d8(void)

{
  return ZEXT816(0x100eeb880);
}



/* Address: 0x10061e4e8 | FUN_10061e4e8 */

undefined1  [16] FUN_10061e4e8(void)

{
  return ZEXT816(0x100eeb8a0);
}



/* Address: 0x10061e4f8 | FUN_10061e4f8 */

void FUN_10061e4f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100fd7150 = pTVar1;
  return;
}



/* Address: 0x10061e538 | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10061e53c | FUN_10061e53c */

void FUN_10061e53c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10061e574 | FUN_10061e574 */

void FUN_10061e574(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10061e580 | FUN_10061e580 */

void FUN_10061e580(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10061e5b8 | thunk_FUN_10061de38 */

void thunk_FUN_10061de38(void)

{
  long unaff_x20;
  
  FUN_10062a5d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10061e5bc | thunk_FUN_10061e3e8 */

void thunk_FUN_10061e3e8(void)

{
  thunk_FUN_10061e3e8();
  return;
}



/* Address: 0x10061e5c0 | thunk_FUN_10061e224 */

void thunk_FUN_10061e224(void)

{
  FUN_10061e224();
  return;
}



/* Address: 0x10061e5c4 | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  thunk_FUN_10061e53c();
  return;
}



/* Address: 0x10061e5c8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10061e5cc | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  thunk_FUN_10061e53c();
  return;
}



/* Address: 0x10061e5d0 | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  thunk_FUN_10061e53c();
  return;
}



/* Address: 0x10061e5d4 | thunk_FUN_10061e574 */

void thunk_FUN_10061e574(void)

{
  FUN_10061e574();
  return;
}



/* Address: 0x10061e5d8 | thunk_FUN_10061de00 */

void thunk_FUN_10061de00(void)

{
  long unaff_x20;
  
  FUN_100629ea4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061e5dc | thunk_FUN_10061de1c */

void thunk_FUN_10061de1c(void)

{
  long unaff_x20;
  
  FUN_10062a45c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061e5e0 | thunk_FUN_10061de10 */

void thunk_FUN_10061de10(void)

{
  long unaff_x20;
  
  FUN_10062a424(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061e5e4 | FUN_10061e5e4 */

void FUN_10061e5e4(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061e5f0 | FUN_10061e5f0 */

void FUN_10061e5f0(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061e5fc | thunk_FUN_10061f240 */

void thunk_FUN_10061f240(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  puVar6 = *(undefined **)(param_1 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eebd50;
    _swift_allocObject(&DAT_100eebd50,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062af70(param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10061e600 | FUN_10061e600 */

void FUN_10061e600(void)

{
  FUN_10061f4e8();
  return;
}



/* Address: 0x10061e62c | FUN_10061e62c */

void FUN_10061e62c(void)

{
  FUN_10061f4e8();
  return;
}



/* Address: 0x10061e658 | FUN_10061e658 */

void FUN_10061e658(void)

{
  FUN_10061ef88();
  return;
}



/* Address: 0x10061e660 | thunk_FUN_10061ef88 */

void thunk_FUN_10061ef88(void)

{
  FUN_10061ef88();
  return;
}



/* Address: 0x10061e664 | FUN_10061e664 */

void FUN_10061e664(void)

{
  FUN_10061e678();
  return;
}



/* Address: 0x10061e678 | FUN_10061e678 */

void FUN_10061e678(void)

{
  FUN_10061e698();
  return;
}



/* Address: 0x10061e684 | thunk_FUN_10061ecd8 */

void thunk_FUN_10061ecd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x18);
  if (puVar7 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eebcb0;
    _swift_allocObject(&DAT_100eebcb0,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062aa18(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10061e688 | thunk_FUN_10061f7a8 */

void thunk_FUN_10061f7a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x18);
  if (puVar7 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eebc88;
    _swift_allocObject(&DAT_100eebc88,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062b020(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10061e68c | FUN_10061e68c */

void FUN_10061e68c(void)

{
  FUN_10061e698();
  return;
}



/* Address: 0x10061e698 | FUN_10061e698 */

void FUN_10061e698(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_4)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e6d8 | FUN_10061e6d8 */

void FUN_10061e6d8(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061e6e4 | FUN_10061e6e4 */

void FUN_10061e6e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b234();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e720 | FUN_10061e720 */

void FUN_10061e720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e764 | FUN_10061e764 */

void FUN_10061e764(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061e770 | FUN_10061e770 */

void FUN_10061e770(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061e77c | FUN_10061e77c */

void FUN_10061e77c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_4)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e7bc | FUN_10061e7bc */

void FUN_10061e7bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b574(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e800 | FUN_10061e800 */

void FUN_10061e800(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e844 | FUN_10061e844 */

void FUN_10061e844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar6 = lVar4;
  if (lVar4 == 0) {
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10061e8ec);
      (*pcVar3)();
    }
    _swift_unknownObjectRetain(lVar6);
    lVar4 = 0;
  }
  _swift_unknownObjectRetain(lVar4);
  _swift_unknownObjectRelease(lVar6);
  if (lVar6 != unaff_x20) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10061e8e8);
    (*pcVar3)();
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar5 = uVar1;
  _swift_getObjectType(uVar1);
  _swift_unknownObjectRetain(uVar1);
  FUN_100642338(uVar5,uVar2);
  _swift_unknownObjectRelease(uVar1);
  FUN_100631244(param_1,param_2);
  return;
}



/* Address: 0x10061e8ec | FUN_10061e8ec */

void FUN_10061e8ec(undefined8 param_1,undefined8 param_2)

{
  FUN_10061f394(param_1,param_2,&DAT_100eebc60,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10061e910 | FUN_10061e910 */

void FUN_10061e910(void)

{
  FUN_10061f648();
  return;
}



/* Address: 0x10061e93c | FUN_10061e93c */

void FUN_10061e93c(void)

{
  FUN_10061f648();
  return;
}



/* Address: 0x10061e968 | FUN_10061e968 */

void FUN_10061e968(void)

{
  FUN_10061f0e4();
  return;
}



/* Address: 0x10061e98c | FUN_10061e98c */

void FUN_10061e98c(void)

{
  FUN_10061ee30();
  return;
}



/* Address: 0x10061e9b0 | FUN_10061e9b0 */

void FUN_10061e9b0(void)

{
  FUN_10061f904();
  return;
}



/* Address: 0x10061e9d4 | FUN_10061e9d4 */

void FUN_10061e9d4(void)

{
  FUN_10061e844();
  return;
}



/* Address: 0x10061e9e8 | thunk_FUN_10061e720 */

void thunk_FUN_10061e720(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10061e9ec | thunk_FUN_10061e7bc */

void thunk_FUN_10061e7bc(void)

{
  FUN_10061e7bc();
  return;
}



/* Address: 0x10061e9f0 | FUN_10061e9f0 */

void FUN_10061e9f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10061f394(param_1,param_2,&DAT_100eebb70,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10061ea14 | FUN_10061ea14 */

void FUN_10061ea14(void)

{
  FUN_10061f648();
  return;
}



/* Address: 0x10061ea40 | FUN_10061ea40 */

void FUN_10061ea40(void)

{
  FUN_10061f648();
  return;
}



/* Address: 0x10061ea6c | FUN_10061ea6c */

void FUN_10061ea6c(void)

{
  FUN_10061f0e4();
  return;
}



/* Address: 0x10061ea90 | FUN_10061ea90 */

void FUN_10061ea90(void)

{
  FUN_10061ee30();
  return;
}



/* Address: 0x10061eab4 | FUN_10061eab4 */

void FUN_10061eab4(void)

{
  FUN_10061f904();
  return;
}



/* Address: 0x10061ead8 | FUN_10061ead8 */

void FUN_10061ead8(void)

{
  FUN_10061e77c();
  return;
}



/* Address: 0x10061eae4 | thunk_FUN_10061e800 */

void thunk_FUN_10061e800(void)

{
  FUN_10061e800();
  return;
}



/* Address: 0x10061eae8 | FUN_10061eae8 */

void FUN_10061eae8(undefined8 param_1,undefined8 param_2)

{
  FUN_10061f394(param_1,param_2,&DAT_100eeba80,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10061eb0c | FUN_10061eb0c */

void FUN_10061eb0c(void)

{
  FUN_10061f648();
  return;
}



/* Address: 0x10061eb38 | FUN_10061eb38 */

void FUN_10061eb38(void)

{
  FUN_10061f648();
  return;
}


