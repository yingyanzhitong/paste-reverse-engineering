/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008e88f8 | FUN_1008e88f8 */

void FUN_1008e88f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,puVar1,param_4,0,0);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_2,lVar2);
  _swift_unknownObjectRelease(*puVar3);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))
            (param_1,(undefined1 *)((long)puVar3 + (long)*(int *)(lVar2 + 0x30)),param_4);
  return;
}



/* Address: 0x1008e89b4 | FUN_1008e89b4 */

undefined8 FUN_1008e89b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1008f6880(param_2,param_3,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  FUN_1008de808(uVar1);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x1008e8a1c | FUN_1008e8a1c */

undefined8
FUN_1008e8a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    pcVar5 = *(code **)(unaff_x20 + 0x30);
    puVar4 = *(undefined **)(unaff_x20 + 0x38);
    puVar3 = puVar4;
  }
  else {
    puVar3 = &DAT_100f124f0;
    _swift_allocObject(&DAT_100f124f0,0x30,7);
    puVar4 = *(undefined **)(unaff_x20 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x20) = lVar1;
    *(undefined8 *)(puVar3 + 0x28) = uVar2;
    pcVar5 = thunk_FUN_1008f8aa0;
  }
  _swift_retain(puVar4);
  _swift_beginAccess(unaff_x20 + 0x40,auStack_78,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
  FUN_100011128(lVar1,uVar2);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1005d84e8(uVar7);
  FUN_1008e8c44(param_1,pcVar5,puVar3,uVar6,uVar7,param_2,param_3,param_4,param_5,param_6,param_7,
                param_8,param_9);
  FUN_1005d8534(uVar7);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x1008e8b50 | FUN_1008e8b50 */

char * FUN_1008e8b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = 0;
  FUN_100952c0c(0);
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x30a,uVar1,&PTR_PTR_100f0f570);
  _swift_getObjectType(*(undefined8 *)(pcVar2 + 0x20));
  FUN_100642338();
  _swift_allocObject(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  _swift_retain();
  _swift_retain(param_3);
  _swift_retain(param_1);
  pcVar3 = pcVar2;
  FUN_1008f77b8(pcVar2,param_5,param_4);
  _swift_release(pcVar2);
  _swift_release_n(param_4,2);
  return pcVar3;
}



/* Address: 0x1008e8c44 | FUN_1008e8c44 */

code * FUN_1008e8c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = &DAT_100f12518;
  _swift_allocObject(&DAT_100f12518,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_13;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  puVar9 = *(undefined **)(param_1 + 0x30);
  puVar10 = *(undefined **)(puVar9 + 0x40);
  ppuVar2 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  puVar8 = *ppuVar2;
  _swift_retain(param_3);
  _swift_retain(param_7);
  _swift_retain(puVar9);
  if (puVar8 == puVar10) {
    lVar3 = param_1;
    FUN_100623594(param_1,&PTR_PTR_100f0f5c8,param_4);
    _swift_getObjectType(*(undefined8 *)(lVar3 + 0x20));
    FUN_100642338();
    puVar8 = &DAT_100f12568;
    _swift_allocObject(&DAT_100f12568,0x40,7);
    *(undefined8 *)(puVar8 + 0x10) = param_12;
    *(undefined8 *)(puVar8 + 0x18) = param_13;
    *(undefined8 *)(puVar8 + 0x20) = param_5;
    *(long *)(puVar8 + 0x28) = param_1;
    *(code **)(puVar8 + 0x30) = FUN_1008fd71c;
    *(undefined **)(puVar8 + 0x38) = puVar1;
    puVar10 = &DAT_100f12590;
    _swift_allocObject(&DAT_100f12590,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = param_12;
    *(undefined8 *)(puVar10 + 0x18) = param_13;
    *(code **)(puVar10 + 0x20) = thunk_FUN_1008fd930;
    *(undefined **)(puVar10 + 0x28) = puVar8;
    FUN_1005d84e8(param_5);
    _swift_retain(param_1);
    _swift_retain(puVar1);
    pcVar7 = thunk_FUN_1005e664c;
    FUN_100643734(thunk_FUN_1005e664c,puVar10,lVar3,PTR___type_metadata_for____100eae0c8 + 8,
                  param_12);
    _swift_release(lVar3);
    _swift_release(puVar10);
    puVar8 = &DAT_100f125b8;
    _swift_allocObject(&DAT_100f125b8,0x48,7);
    *(undefined8 *)(puVar8 + 0x10) = param_12;
    *(undefined8 *)(puVar8 + 0x18) = param_13;
    *(undefined **)(puVar8 + 0x20) = puVar9;
    *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar8 + 0x30) = param_8;
    *(undefined8 *)(puVar8 + 0x38) = param_9;
    *(long *)(puVar8 + 0x40) = param_1;
    _swift_retain(puVar9);
    _swift_retain(param_1);
    _swift_retain(param_9);
    pcVar4 = FUN_1008fd830;
    FUN_100643734(FUN_1008fd830,puVar8,pcVar7,param_12,param_12);
    _swift_release(pcVar7);
    _swift_release(puVar8);
    puVar8 = &DAT_100f125e0;
    _swift_allocObject(&DAT_100f125e0,0x40,7);
    *(undefined8 *)(puVar8 + 0x10) = param_12;
    *(undefined8 *)(puVar8 + 0x18) = param_13;
    *(undefined8 *)(puVar8 + 0x20) = param_10;
    *(undefined8 *)(puVar8 + 0x28) = param_11;
    *(undefined **)(puVar8 + 0x30) = puVar9;
    *(undefined ***)(puVar8 + 0x38) = &PTR_PTR_100f19fa8;
    _swift_retain(puVar9);
    _swift_retain(param_11);
    pcVar5 = FUN_1008fd83c;
    FUN_100643734(FUN_1008fd83c,puVar8,pcVar4,param_12,param_13);
    _swift_release(pcVar4);
    _swift_release(puVar8);
    puVar8 = &DAT_100f12608;
    _swift_allocObject(&DAT_100f12608,0x38,7);
    *(undefined8 *)(puVar8 + 0x10) = param_12;
    *(undefined8 *)(puVar8 + 0x18) = param_13;
    *(undefined **)(puVar8 + 0x20) = puVar9;
    *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f19fa8;
    *(long *)(puVar8 + 0x30) = param_1;
    _swift_retain(puVar9);
    _swift_retain(param_1);
    pcVar7 = FUN_1008fd864;
    FUN_100644570(FUN_1008fd864,puVar8,pcVar5,param_13);
    _swift_release(pcVar5);
    puVar10 = puVar9;
  }
  else {
    puVar10 = &DAT_100f12540;
    _swift_allocObject(&DAT_100f12540,0x78,7);
    *(undefined8 *)(puVar10 + 0x10) = param_12;
    *(undefined8 *)(puVar10 + 0x18) = param_13;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar10 + 0x30) = param_4;
    *(long *)(puVar10 + 0x38) = param_1;
    *(undefined8 *)(puVar10 + 0x40) = param_5;
    *(code **)(puVar10 + 0x48) = FUN_1008fd71c;
    *(undefined **)(puVar10 + 0x50) = puVar1;
    *(undefined8 *)(puVar10 + 0x58) = param_8;
    *(undefined8 *)(puVar10 + 0x60) = param_9;
    *(undefined8 *)(puVar10 + 0x68) = param_10;
    *(undefined8 *)(puVar10 + 0x70) = param_11;
    _swift_retain(puVar9);
    FUN_1005d84e8(param_5);
    uVar6 = 0;
    FUN_100947828(0);
    _swift_retain(param_1);
    _swift_retain(puVar1);
    _swift_retain(param_9);
    _swift_retain(param_11);
    _swift_bridgeObjectRetain(param_4);
    pcVar7 = FUN_1008fd7e4;
    FUN_100641014(FUN_1008fd7e4,puVar10,uVar6,param_13,&PTR_PTR_100f19fa8);
    puVar8 = puVar1;
    puVar1 = puVar9;
  }
  _swift_release(puVar8);
  _swift_release(puVar1);
  _swift_release(puVar10);
  return pcVar7;
}



/* Address: 0x1008e9010 | FUN_1008e9010 */

void FUN_1008e9010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,puVar2,param_5,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  *param_1 = param_3;
  param_1[1] = &PTR_PTR_100f0f5c8;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))((long)param_1 + (long)iVar1,param_2,param_5);
  _swift_retain(param_3);
  return;
}



/* Address: 0x1008e9098 | FUN_1008e9098 */

void FUN_1008e9098(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    (*param_3)(param_2,&PTR_PTR_100f0f5c8);
  }
  else {
    uVar1 = 0;
    FUN_100952c0c(0);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    uVar2 = param_1;
    FUN_100622850(param_1,"NIOPosix/Bootstrap.swift",0x18,2,0x64d,uVar1,&PTR_PTR_100f0f570);
    puVar3 = &DAT_100f12680;
    _swift_allocObject(&DAT_100f12680,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(code **)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(undefined8 *)(puVar3 + 0x30) = param_2;
    puVar4 = &DAT_100f126a8;
    _swift_allocObject(&DAT_100f126a8,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    *(code **)(puVar4 + 0x20) = FUN_1008fd8bc;
    *(undefined **)(puVar4 + 0x28) = puVar3;
    _swift_retain(param_4);
    _swift_retain(param_2);
    thunk_FUN_10064a5bc(thunk_FUN_1008fd58c,puVar4,param_5);
    _swift_release(uVar2);
    _swift_release(puVar4);
    FUN_1005d8534(param_1);
  }
  return;
}



/* Address: 0x1008e91e4 | FUN_1008e91e4 */

code * FUN_1008e91e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
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
  (*param_4)(param_6);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_1,param_7);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar7 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f12630;
  _swift_allocObject(&DAT_100f12630,uVar7 + lVar6,uVar4 | 7);
  *(long *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  (**(code **)(lVar5 + 0x20))
            (puVar1 + uVar7,&stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_7)
  ;
  puVar2 = &DAT_100f12658;
  _swift_allocObject(&DAT_100f12658,0x30,7);
  *(long *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(code **)(puVar2 + 0x20) = thunk_FUN_1008fd898;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  pcVar3 = thunk_FUN_1008fd58c;
  thunk_FUN_10064b138(thunk_FUN_1008fd58c,puVar2,param_7);
  _swift_release(param_6);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x1008e92f4 | FUN_1008e92f4 */

code * FUN_1008e92f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  lVar1 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  _swift_getObjectType(*(undefined8 *)(lVar1 + 0x20));
  FUN_100642338();
  puVar2 = &DAT_100f126d0;
  _swift_allocObject(&DAT_100f126d0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_12;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(long *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  puVar3 = &DAT_100f126f8;
  _swift_allocObject(&DAT_100f126f8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_12;
  *(undefined8 *)(puVar3 + 0x18) = param_13;
  *(code **)(puVar3 + 0x20) = thunk_FUN_1008fd930;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  FUN_1005d84e8(param_5);
  _swift_retain(param_4);
  _swift_retain(param_7);
  pcVar4 = thunk_FUN_1005e664c;
  FUN_100643734(thunk_FUN_1005e664c,puVar3,lVar1,PTR___type_metadata_for____100eae0c8 + 8,param_12);
  _swift_release(lVar1);
  _swift_release(puVar3);
  puVar2 = &DAT_100f12720;
  _swift_allocObject(&DAT_100f12720,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_12;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_9;
  *(long *)(puVar2 + 0x40) = param_4;
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_9);
  pcVar5 = thunk_FUN_1008fd830;
  FUN_100643734(thunk_FUN_1008fd830,puVar2,pcVar4,param_12,param_12);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100f12748;
  _swift_allocObject(&DAT_100f12748,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_12;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_10;
  *(undefined8 *)(puVar2 + 0x28) = param_11;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_11);
  pcVar4 = thunk_FUN_1008fd83c;
  FUN_100643734(thunk_FUN_1008fd83c,puVar2,pcVar5,param_12,param_13);
  _swift_release(pcVar5);
  _swift_release(puVar2);
  puVar2 = &DAT_100f12770;
  _swift_allocObject(&DAT_100f12770,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_12;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(long *)(puVar2 + 0x30) = param_4;
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  pcVar5 = thunk_FUN_1008fd864;
  FUN_100644570(thunk_FUN_1008fd864,puVar2,pcVar4,param_13);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  return pcVar5;
}



/* Address: 0x1008e9574 | FUN_1008e9574 */

long FUN_1008e9574(class_t *param_1,undefined8 param_2)

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
    *(undefined4 *)(unaff_x20 + 0x38) = 0;
    lVar3 = unaff_x20;
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(long *)(unaff_x20 + 0x30) = lVar3;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e95f0);
  (*pcVar1)();
}



/* Address: 0x1008e95f0 | FUN_1008e95f0 */

long FUN_1008e95f0(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
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
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance(unaff_x20);
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008e9690 | FUN_1008e9690 */

long FUN_1008e9690(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x38) = 0;
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
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008e971c | FUN_1008e971c */

void FUN_1008e971c(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x38) = param_1;
  _swift_retain();
  return;
}



/* Address: 0x1008e9728 | FUN_1008e9728 */

void FUN_1008e9728(undefined4 param_1)

{
  undefined1 auStack_30 [16];
  undefined4 local_20;
  
  local_20 = param_1;
  FUN_1008e976c(FUN_1008ff15c,auStack_30,FUN_1008e9760,0);
  return;
}



/* Address: 0x1008e9760 | FUN_1008e9760 */

void FUN_1008e9760(void)

{
  FUN_1008e64bc();
  return;
}



/* Address: 0x1008e976c | FUN_1008e976c */

/* WARNING: Removing unreachable block (ram,0x0001008e9898) */

code * FUN_1008e976c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  class_t *pcVar13;
  class_t *pcVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  pcVar13 = *(class_t **)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar12 + 0x10))();
  lVar16 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar16 == 0) {
    puVar3 = &DAT_100f120e0;
    _swift_allocObject(&DAT_100f120e0,0x20,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    _swift_unknownObjectRetain(pcVar13);
    pcVar2 = thunk_FUN_1008fe70c;
  }
  else {
    puVar3 = &DAT_100f12248;
    _swift_allocObject(&DAT_100f12248,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar16;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    pcVar2 = thunk_FUN_1008fe864;
  }
  puVar4 = &DAT_100f12108;
  _swift_allocObject(&DAT_100f12108,0x20,7);
  *(code **)(puVar4 + 0x10) = pcVar2;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar5 = pcVar13;
  _object_getClass();
  if (pcVar5 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008e9dc4);
    (*pcVar2)();
  }
  _swift_unknownObjectRetain(pcVar13);
  FUN_100011128(lVar16,uVar1);
  _swift_bridgeObjectRetain(uVar15);
  pcVar5 = pcVar13;
  (*param_1)();
  _swift_unknownObjectRelease(pcVar13);
  pcVar14 = pcVar13;
  _swift_getObjectType();
  pcVar6 = pcVar14;
  (**(code **)(lVar12 + 0x10))();
  if (((ulong)pcVar6 & 1) == 0) {
    puVar3 = &DAT_100f12130;
    _swift_allocObject(&DAT_100f12130,0x50,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    *(undefined8 *)(puVar3 + 0x20) = uVar15;
    *(class_t **)(puVar3 + 0x28) = pcVar5;
    *(code **)(puVar3 + 0x30) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar3 + 0x38) = puVar4;
    *(undefined8 *)(puVar3 + 0x40) = param_3;
    *(undefined8 *)(puVar3 + 0x48) = param_4;
    _swift_unknownObjectRetain(pcVar13);
    _swift_retain(puVar4);
    _swift_retain(pcVar5);
    _swift_retain(param_4);
    puVar9 = &DAT_100febf90;
    FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
    pcVar2 = FUN_1008fd65c;
    FUN_100641014(FUN_1008fd65c,puVar3,pcVar14,puVar9,lVar12);
    _swift_release(pcVar5);
    _swift_release(puVar3);
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(puVar4);
  }
  else {
    pcVar14 = pcVar5;
    FUN_100623594(pcVar5,&PTR_PTR_100f0f5c8,uVar15);
    puVar3 = &DAT_100f12158;
    _swift_allocObject(&DAT_100f12158,0x28,7);
    *(code **)(puVar3 + 0x10) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    *(class_t **)(puVar3 + 0x20) = pcVar5;
    _swift_retain();
    _swift_retain(puVar4);
    _swift_retain(pcVar5);
    pcVar6 = pcVar14;
    FUN_1008f7070(pcVar14,thunk_FUN_1008fcb94,puVar3);
    _swift_release(pcVar14);
    _swift_release_n(puVar3,2);
    puVar3 = &DAT_100f12180;
    _swift_allocObject(&DAT_100f12180,0x38,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(class_t **)(puVar3 + 0x30) = pcVar5;
    _swift_retain_n(pcVar5,2);
    _swift_unknownObjectRetain(pcVar13);
    _swift_retain(puVar3);
    _swift_retain(param_4);
    pcVar14 = pcVar6;
    FUN_1008f7070(pcVar6,thunk_FUN_1008fd6b0,puVar3);
    _swift_release(pcVar6);
    _swift_release_n(puVar3,2);
    puVar3 = &DAT_100f121a8;
    _swift_allocObject(&DAT_100f121a8,0x20,7);
    *(code **)(puVar3 + 0x10) = thunk_FUN_1008fdcb4;
    *(class_t **)(puVar3 + 0x18) = pcVar5;
    pcVar7 = FUN_1008fd66c;
    FUN_1008f5090(FUN_1008fd66c,puVar3);
    _swift_release(pcVar14);
    _swift_release(puVar3);
    puVar3 = &DAT_100f121d0;
    _swift_allocObject(&DAT_100f121d0,0x20,7);
    *(class_t **)(puVar3 + 0x10) = pcVar13;
    *(long *)(puVar3 + 0x18) = lVar12;
    pcVar2 = (code *)&DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    lVar16 = *(long *)(pcVar7 + 0x30);
    uVar18 = *(ulong *)(pcVar7 + 0x28);
    *(undefined8 *)(pcVar2 + 0x30) = *(undefined8 *)(pcVar7 + 0x30);
    *(ulong *)(pcVar2 + 0x28) = uVar18;
    *(undefined8 *)(pcVar2 + 0x10) = 0;
    *(undefined8 *)(pcVar2 + 0x18) = 0;
    pcVar2[0x20] = (code)0xff;
    *(undefined8 *)(pcVar2 + 0x40) = 0;
    *(undefined8 *)(pcVar2 + 0x48) = 0;
    *(undefined8 *)(pcVar2 + 0x38) = 0;
    puVar9 = &DAT_100f121f8;
    _swift_allocObject(&DAT_100f121f8,0x30,7);
    *(code **)(puVar9 + 0x10) = pcVar7;
    *(code **)(puVar9 + 0x18) = pcVar2;
    *(code **)(puVar9 + 0x20) = FUN_1008fd674;
    *(undefined **)(puVar9 + 0x28) = puVar3;
    uVar8 = uVar18;
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar16 + 0x10);
    _swift_unknownObjectRetain_n(pcVar13,2);
    _swift_retain_n(pcVar7,2);
    _swift_retain_n(pcVar2,2);
    _swift_retain_n(puVar3,2);
    _swift_unknownObjectRetain(uVar18);
    uVar18 = uVar8;
    (*pcVar11)(uVar8,lVar16);
    if ((uVar18 & 1) == 0) {
      puVar10 = &DAT_100f12220;
      _swift_allocObject(&DAT_100f12220,0x28,7);
      *(code **)(puVar10 + 0x10) = pcVar7;
      *(code **)(puVar10 + 0x18) = thunk_FUN_1008fbab4;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcVar11 = *(code **)(lVar16 + 0x18);
      _swift_retain(pcVar7);
      _swift_retain(puVar9);
      (*pcVar11)(thunk_FUN_1008fa090,puVar10,uVar8,lVar16);
      _swift_release(pcVar5);
      _swift_bridgeObjectRelease(uVar15);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(pcVar7 + 0x10,auStack_98,0,0);
      if (pcVar7[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar7 + 0x38,auStack_b0,0x21,0);
        FUN_10064967c(thunk_FUN_1008fbab4,puVar9);
        _swift_endAccess(auStack_b0);
        pcVar11 = (code *)0x0;
        pcVar17 = (code *)0x0;
        pcVar14 = (class_t *)0x0;
      }
      else {
        _swift_unknownObjectRetain(pcVar13);
        pcVar11 = pcVar7;
        pcVar17 = pcVar2;
        pcVar14 = pcVar13;
        FUN_1008f9a34(pcVar7,pcVar2,pcVar13,lVar12);
        _swift_unknownObjectRelease(pcVar13);
      }
      FUN_1006486f8(pcVar11,pcVar17,pcVar14);
      FUN_100004550(pcVar11,pcVar17);
      _swift_release(pcVar5);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(pcVar14);
    }
    _swift_release(pcVar2);
    _swift_release(puVar9);
    _swift_release_n(puVar3,2);
    _swift_release_n(pcVar7,2);
    _swift_release(puVar4);
    _swift_unknownObjectRelease_n(pcVar13,2);
  }
  return pcVar2;
}



/* Address: 0x1008e9dc4 | FUN_1008e9dc4 */

void FUN_1008e9dc4(void)

{
  FUN_1008e9ff0();
  return;
}



/* Address: 0x1008e9de0 | FUN_1008e9de0 */

void FUN_1008e9de0(undefined8 param_1)

{
  FUN_1008ea11c(param_1,&DAT_100f105b8,FUN_1008ff184,thunk_FUN_1008f8b64);
  return;
}



/* Address: 0x1008e9dfc | FUN_1008e9dfc */

void FUN_1008e9dfc(undefined8 param_1,undefined8 param_2)

{
  FUN_1008ea1c4(param_1,param_2,&DAT_100f105e0,FUN_1008ff184,thunk_FUN_1008f8b64);
  return;
}



/* Address: 0x1008e9e18 | FUN_1008e9e18 */

/* WARNING: Removing unreachable block (ram,0x0001008e9e70) */

code * FUN_1008e9e18(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_70 [16];
  ulong local_60;
  undefined4 local_58;
  
  if ((param_3 & 1) != 0) {
    FUN_1008d5170(param_1,param_2);
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  puVar2 = &DAT_100f10608;
  local_60 = param_1;
  local_58 = uVar1;
  _swift_allocObject(&DAT_100f10608,0x18,7);
  *(ulong *)(puVar2 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar3 = FUN_1008ff184;
  FUN_1008e976c(FUN_1008ff184,auStack_70,thunk_FUN_1008f8b64,puVar2);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x1008e9f60 | FUN_1008e9f60 */

void FUN_1008e9f60(undefined8 param_1)

{
  FUN_1009546f0(0);
  _swift_allocObject();
  _swift_retain(param_1);
  FUN_100954760();
  return;
}



/* Address: 0x1008e9fd4 | FUN_1008e9fd4 */

void FUN_1008e9fd4(void)

{
  FUN_1008e9ff0();
  return;
}



/* Address: 0x1008e9ff0 | FUN_1008e9ff0 */

/* WARNING: Removing unreachable block (ram,0x0001008ea024) */

undefined8
FUN_1008e9ff0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 uVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  ulong local_60;
  undefined4 local_58;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x38);
  FUN_100668048();
  local_60 = param_1;
  local_58 = uVar1;
  _swift_allocObject(param_4,0x18,7);
  *(ulong *)(param_4 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1008e976c(param_5,auStack_70,param_6,param_4);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(param_4);
  return param_5;
}



/* Address: 0x1008ea100 | FUN_1008ea100 */

void FUN_1008ea100(undefined8 param_1)

{
  FUN_1008ea11c(param_1,&DAT_100f10658,FUN_1008ff184,thunk_FUN_1008f8b90);
  return;
}



/* Address: 0x1008ea11c | FUN_1008ea11c */

undefined8 FUN_1008ea11c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  ulong local_50;
  undefined4 local_48;
  
  local_48 = *(undefined4 *)(unaff_x20 + 0x38);
  local_50 = param_1;
  _swift_allocObject(param_2,0x18,7);
  *(ulong *)(param_2 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1008e976c(param_3,auStack_60,param_4,param_2);
  _swift_release(param_2);
  return param_3;
}



/* Address: 0x1008ea1a8 | FUN_1008ea1a8 */

void FUN_1008ea1a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1008ea1c4(param_1,param_2,&DAT_100f10680,FUN_1008ff184,thunk_FUN_1008f8b90);
  return;
}



/* Address: 0x1008ea1c4 | FUN_1008ea1c4 */

/* WARNING: Removing unreachable block (ram,0x0001008ea214) */

undefined8
FUN_1008ea1c4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long unaff_x20;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  local_70 = param_1;
  local_68 = uVar1;
  _swift_allocObject(param_3,0x18,7);
  *(ulong *)(param_3 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  FUN_1008e976c(param_4,auStack_80,param_5,param_3);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(param_3);
  return param_4;
}



/* Address: 0x1008ea2f4 | FUN_1008ea2f4 */

char * FUN_1008ea2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = 0;
  FUN_1009546f0(0);
  _swift_retain(param_4 & 0x3fffffffffffffff);
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,param_5,uVar1,&PTR_PTR_100f0f570);
  _swift_allocObject(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_3;
  *(ulong *)(param_6 + 0x18) = param_4;
  _swift_retain();
  _swift_retain(param_3);
  pcVar3 = pcVar2;
  FUN_1008f7070(pcVar2,param_7,param_6);
  _swift_release(pcVar2);
  _swift_release_n(param_6,2);
  return pcVar3;
}



/* Address: 0x1008ea3d4 | FUN_1008ea3d4 */

void FUN_1008ea3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1009546f0(0);
  (*param_4)(param_2,"NIOPosix/Bootstrap.swift",0x18,2,param_3,uVar1,&PTR_PTR_100f0f570);
  return;
}



/* Address: 0x1008ea440 | FUN_1008ea440 */

void FUN_1008ea440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _swift_getObjectType(param_2);
  puVar1 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  FUN_10063dd74(param_1,param_2,puVar1,param_3);
  return;
}



/* Address: 0x1008ea4a0 | FUN_1008ea4a0 */

undefined *
FUN_1008ea4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar7 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar1 = &DAT_100f12310;
  _swift_allocObject(&DAT_100f12310,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain();
  _swift_retain(param_6);
  _swift_retain(param_4);
  uVar2 = uVar7;
  FUN_1008f7070(uVar7,thunk_FUN_1008fcb94,puVar1);
  _swift_release(uVar7);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f12338;
  _swift_allocObject(&DAT_100f12338,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  _swift_retain_n(param_4,2);
  _swift_retain(puVar1);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_8);
  uVar7 = uVar2;
  FUN_1008f7070(uVar2,thunk_FUN_1008fd6b0,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f12360;
  _swift_allocObject(&DAT_100f12360,0x20,7);
  *(code **)(puVar1 + 0x10) = thunk_FUN_1008fdcb4;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcVar3 = thunk_FUN_1008fd66c;
  FUN_1008f5090(thunk_FUN_1008fd66c,puVar1);
  _swift_release(uVar7);
  _swift_release(puVar1);
  puVar1 = &DAT_100f12388;
  _swift_allocObject(&DAT_100f12388,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar4 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar8 = *(long *)(pcVar3 + 0x30);
  uVar11 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f123b0;
  _swift_allocObject(&DAT_100f123b0,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = thunk_FUN_1008fd674;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  uVar6 = uVar11;
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar8 + 0x10);
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar6;
  (*pcVar10)(uVar6,lVar8);
  if ((uVar11 & 1) == 0) {
    puVar9 = &DAT_100f123d8;
    _swift_allocObject(&DAT_100f123d8,0x28,7);
    *(code **)(puVar9 + 0x10) = pcVar3;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar9 + 0x20) = puVar5;
    pcVar10 = *(code **)(lVar8 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar5);
    (*pcVar10)(thunk_FUN_1008fa090,puVar9,uVar6,lVar8);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_release(puVar9);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar5);
      _swift_endAccess(auStack_90);
      pcVar10 = (code *)0x0;
      puVar9 = (undefined *)0x0;
      uVar7 = 0;
    }
    else {
      _swift_unknownObjectRetain(param_1);
      pcVar10 = pcVar3;
      puVar9 = puVar4;
      uVar7 = param_1;
      FUN_1008f9a34(pcVar3,puVar4,param_1,param_2);
      _swift_unknownObjectRelease(param_1);
    }
    FUN_1006486f8(pcVar10,puVar9,uVar7);
    FUN_100004550(pcVar10,puVar9);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_unknownObjectRelease(param_1);
  _swift_release(puVar1);
  _swift_release(puVar4);
  _swift_release(pcVar3);
  _swift_release(puVar5);
  return puVar4;
}



/* Address: 0x1008ea87c | FUN_1008ea87c */

void FUN_1008ea87c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008ea8a8 | FUN_1008ea8a8 */

void FUN_1008ea8a8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008ea8dc | FUN_1008ea8dc */

void FUN_1008ea8dc(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined4 *)(unaff_x22 + 0x24) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_1008ea900,0,0);
  return;
}



/* Address: 0x1008ea900 | FUN_1008ea900 */

void FUN_1008ea900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined4 *)(unaff_x22 + 0x20) = *(undefined4 *)(unaff_x22 + 0x24);
  puVar4 = &DAT_100f106a8;
  _swift_allocObject(&DAT_100f106a8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  pcVar5 = FUN_1008f8bbc;
  FUN_1008eab40(FUN_1008f8bbc,unaff_x22 + 0x10,uVar2,uVar3,FUN_1008eaab8,0,thunk_FUN_1008f8b14,
                puVar4,uVar1,uVar1);
  *(code **)(unaff_x22 + 0x50) = pcVar5;
  _swift_release(puVar4);
  plVar6 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1008e3580;
  FUN_1005da4a4(plVar6,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1008ea9d8 | FUN_1008ea9d8 */

/* WARNING: Removing unreachable block (ram,0x0001008eaa68) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa4c) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa54) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa70) */

undefined8 FUN_1008ea9d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  
  _swift_retain();
  FUN_10094d238();
  if (unaff_x21 == 0) {
    FUN_1009546f0(0);
    _swift_allocObject();
    _swift_retain(param_1);
    unaff_x20 = param_2;
    _swift_retain(param_2);
    FUN_100954b70();
    _swift_release(param_1);
    _swift_release(param_2);
  }
  else {
    _swift_release(param_1);
  }
  return unaff_x20;
}



/* Address: 0x1008eaab8 | FUN_1008eaab8 */

undefined8 FUN_1008eaab8(undefined8 param_1,long param_2)

{
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x50))();
  FUN_1008f6880();
  _swift_retain();
  FUN_10061d5d4();
  _swift_release(param_1);
  return param_1;
}



/* Address: 0x1008eab40 | FUN_1008eab40 */

/* WARNING: Removing unreachable block (ram,0x0001008eacc0) */

class_t * FUN_1008eab40(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  class_t *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  pcVar11 = *(class_t **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x10))();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    puVar4 = &DAT_100f11e60;
    _swift_allocObject(&DAT_100f11e60,0x20,7);
    *(class_t **)(puVar4 + 0x10) = pcVar11;
    *(long *)(puVar4 + 0x18) = lVar10;
    _swift_unknownObjectRetain(pcVar11);
    pcVar3 = thunk_FUN_1008fe70c;
  }
  else {
    puVar4 = &DAT_100f11f00;
    _swift_allocObject(&DAT_100f11f00,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar2;
    pcVar3 = thunk_FUN_1008fe864;
  }
  puVar5 = &DAT_100f11e88;
  _swift_allocObject(&DAT_100f11e88,0x20,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar4 = &DAT_100f11eb0;
  _swift_allocObject(&DAT_100f11eb0,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_9;
  *(undefined8 *)(puVar4 + 0x18) = param_10;
  *(code **)(puVar4 + 0x20) = thunk_FUN_1008fe75c;
  *(undefined **)(puVar4 + 0x28) = puVar5;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  pcVar6 = pcVar11;
  _object_getClass();
  if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008eae78);
    (*pcVar3)();
  }
  _swift_unknownObjectRetain(pcVar11);
  FUN_100011128(lVar1,uVar2);
  _swift_retain(puVar5);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(uVar12);
  pcVar6 = pcVar11;
  (*param_1)();
  _swift_unknownObjectRelease(pcVar11);
  pcVar7 = pcVar11;
  _swift_getObjectType();
  pcVar8 = pcVar7;
  (**(code **)(lVar10 + 0x10))();
  if (((ulong)pcVar8 & 1) == 0) {
    puVar9 = &DAT_100f11ed8;
    _swift_allocObject(&DAT_100f11ed8,0x70,7);
    *(undefined8 *)(puVar9 + 0x10) = param_9;
    *(undefined8 *)(puVar9 + 0x18) = param_10;
    *(class_t **)(puVar9 + 0x20) = pcVar11;
    *(long *)(puVar9 + 0x28) = lVar10;
    *(undefined8 *)(puVar9 + 0x30) = uVar12;
    *(class_t **)(puVar9 + 0x38) = pcVar6;
    *(code **)(puVar9 + 0x40) = FUN_1008fd4ac;
    *(undefined **)(puVar9 + 0x48) = puVar4;
    *(undefined8 *)(puVar9 + 0x50) = param_5;
    *(undefined8 *)(puVar9 + 0x58) = param_6;
    *(undefined8 *)(puVar9 + 0x60) = param_7;
    *(undefined8 *)(puVar9 + 0x68) = param_8;
    _swift_unknownObjectRetain(pcVar11);
    _swift_retain(pcVar6);
    _swift_retain(puVar4);
    _swift_retain(param_6);
    _swift_retain(param_8);
    pcVar3 = FUN_1008fd51c;
    FUN_100641014(FUN_1008fd51c,puVar9,pcVar7,param_10,lVar10);
    _swift_release(pcVar6);
    _swift_release(puVar9);
  }
  else {
    pcVar3 = (code *)pcVar11;
    FUN_1008ebb38(pcVar11,lVar10,uVar12,pcVar6,FUN_1008fd4ac,puVar4,param_5,param_6,param_7,param_8,
                  param_9,param_10);
    _swift_release(pcVar6);
    _swift_bridgeObjectRelease(uVar12);
  }
  _swift_unknownObjectRelease(pcVar11);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return (class_t *)pcVar3;
}



/* Address: 0x1008eae78 | FUN_1008eae78 */

void FUN_1008eae78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_1008eae9c,0,0);
  return;
}



/* Address: 0x1008eae9c | FUN_1008eae9c */

void FUN_1008eae9c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1 = &DAT_100f106d0;
  _swift_allocObject(&DAT_100f106d0,0x18,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008eaf48;
  FUN_1008eaf94(plVar2,*(undefined8 *)(unaff_x22 + 0x38),FUN_1008f8bd4,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1008eaf48 | FUN_1008eaf48 */

void FUN_1008eaf48(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x78);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008eaf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008eaf94 | FUN_1008eaf94 */

void FUN_1008eaf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_1008eafc4,0,0);
  return;
}



/* Address: 0x1008eafc4 | FUN_1008eafc4 */

/* WARNING: Removing unreachable block (ram,0x0001008eb004) */

void FUN_1008eafc4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  (**(code **)(unaff_x22 + 0x38))();
  *(ulong *)(unaff_x22 + 0x80) = param_1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined4 *)(*(long *)(unaff_x22 + 0x78) + 0x38);
  *(ulong *)(unaff_x22 + 0x20) = param_1;
  *(undefined4 *)(unaff_x22 + 0x28) = uVar6;
  puVar7 = &DAT_100f11e10;
  _swift_allocObject(&DAT_100f11e10,0x18,7);
  *(ulong *)(puVar7 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar8 = FUN_1008fd408;
  FUN_1008eab40(FUN_1008fd408,unaff_x22 + 0x10,uVar10,uVar3,FUN_1008fd424,puVar7,uVar5,uVar2,uVar4,
                uVar1);
  *(code **)(unaff_x22 + 0x88) = pcVar8;
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008eb100;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1008eb100 | FUN_1008eb100 */

void FUN_1008eb100(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008eb16c;
  }
  else {
    pcVar2 = FUN_1008eb1ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008eb16c | FUN_1008eb16c */

void FUN_1008eb16c(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x80) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008eb1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008eb1ac | FUN_1008eb1ac */

void FUN_1008eb1ac(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x80) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008eb1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008eb1ec | FUN_1008eb1ec */

void FUN_1008eb1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_task_switch(FUN_1008eb20c,0,0);
  return;
}



/* Address: 0x1008eb20c | FUN_1008eb20c */

void FUN_1008eb20c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1 = &DAT_100f106f8;
  _swift_allocObject(&DAT_100f106f8,0x18,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008eb2b0;
  FUN_1008eaf94(plVar2,*(undefined8 *)(unaff_x22 + 0x28),FUN_1008f8bf0,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1008eb2b0 | FUN_1008eb2b0 */

void FUN_1008eb2b0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x58);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008eb2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008eb2fc | FUN_1008eb2fc */

void FUN_1008eb2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined1 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_1008eb324,0,0);
  return;
}



/* Address: 0x1008eb324 | FUN_1008eb324 */

/* WARNING: Removing unreachable block (ram,0x0001008eb360) */

void FUN_1008eb324(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x78) == '\x01') {
    FUN_1008d5170(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1 = &DAT_100f10720;
  _swift_allocObject(&DAT_100f10720,0x18,7);
  *(undefined **)(unaff_x22 + 0x68) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008eb408;
  FUN_1008eaf94(plVar2,*(undefined8 *)(unaff_x22 + 0x30),FUN_1008f8c18,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x58),
                *(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x1008eb408 | FUN_1008eb408 */

void FUN_1008eb408(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x68);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008eb450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008eb454 | FUN_1008eb454 */

void FUN_1008eb454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_1008eb478,0,0);
  return;
}



/* Address: 0x1008eb478 | FUN_1008eb478 */

void FUN_1008eb478(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1 = &DAT_100f10748;
  _swift_allocObject(&DAT_100f10748,0x18,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1008eaf48;
  FUN_1008eb524(plVar2,*(undefined8 *)(unaff_x22 + 0x38),FUN_1008ff250,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1008eb524 | FUN_1008eb524 */

void FUN_1008eb524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_1008eb554,0,0);
  return;
}



/* Address: 0x1008eb554 | FUN_1008eb554 */

/* WARNING: Removing unreachable block (ram,0x0001008eb594) */

void FUN_1008eb554(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  (**(code **)(unaff_x22 + 0x38))();
  *(ulong *)(unaff_x22 + 0x80) = param_1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined4 *)(*(long *)(unaff_x22 + 0x78) + 0x38);
  *(ulong *)(unaff_x22 + 0x20) = param_1;
  *(undefined4 *)(unaff_x22 + 0x28) = uVar6;
  puVar7 = &DAT_100f11dc0;
  _swift_allocObject(&DAT_100f11dc0,0x18,7);
  *(ulong *)(puVar7 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar8 = FUN_1008ff184;
  FUN_1008eab40(FUN_1008ff184,unaff_x22 + 0x10,uVar10,uVar3,FUN_1008fd3b0,puVar7,uVar5,uVar2,uVar4,
                uVar1);
  *(code **)(unaff_x22 + 0x88) = pcVar8;
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008eb690;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1008eb690 | FUN_1008eb690 */

void FUN_1008eb690(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1008eb16c;
  }
  else {
    pcVar2 = thunk_FUN_1008eb1ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008eb6fc | FUN_1008eb6fc */

void FUN_1008eb6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_task_switch(FUN_1008eb71c,0,0);
  return;
}



/* Address: 0x1008eb71c | FUN_1008eb71c */

void FUN_1008eb71c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1 = &DAT_100f10770;
  _swift_allocObject(&DAT_100f10770,0x18,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1008eb2b0;
  FUN_1008eb524(plVar2,*(undefined8 *)(unaff_x22 + 0x28),FUN_1008ff274,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1008eb7c0 | FUN_1008eb7c0 */

void FUN_1008eb7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_1008eb7e4,0,0);
  return;
}



/* Address: 0x1008eb7e4 | FUN_1008eb7e4 */

void FUN_1008eb7e4(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1 = &DAT_100f10798;
  _swift_allocObject(&DAT_100f10798,0x18,7);
  *(undefined **)(unaff_x22 + 0x68) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008eb408;
  FUN_1008eb524(plVar2,*(undefined8 *)(unaff_x22 + 0x30),FUN_1008ff1d8,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                thunk_FUN_1008f8b14,puVar1,*(undefined8 *)(unaff_x22 + 0x58),
                *(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x1008eb888 | FUN_1008eb888 */

char * FUN_1008eb888(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = param_1;
  _swift_getObjectType();
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,param_4,uVar1,*(undefined8 *)(param_2 + 8));
  _swift_allocObject(param_5,0x28,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(long *)(param_5 + 0x18) = param_2;
  *(ulong *)(param_5 + 0x20) = param_3;
  _swift_retain(param_3 & 0x3fffffffffffffff);
  _swift_retain(param_5);
  _swift_unknownObjectRetain(param_1);
  pcVar3 = pcVar2;
  FUN_1008f7070(pcVar2,param_6,param_5);
  _swift_release(pcVar2);
  _swift_release_n(param_5,2);
  return pcVar3;
}



/* Address: 0x1008eb968 | FUN_1008eb968 */

void FUN_1008eb968(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  _swift_getObjectType();
  (*param_5)(param_3,"NIOPosix/Bootstrap.swift",0x18,2,param_4,param_1,*(undefined8 *)(param_2 + 8))
  ;
  return;
}



/* Address: 0x1008eb9dc | FUN_1008eb9dc */

undefined8
FUN_1008eb9dc(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10,
             undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  (*param_3)();
  lVar2 = param_1;
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x50))();
  lVar3 = lVar2;
  FUN_100915740();
  _swift_release(lVar1);
  _swift_unknownObjectRelease(lVar2);
  _swift_getObjectType(*(undefined8 *)(lVar3 + 0x20));
  FUN_100642338();
  _swift_allocObject(param_9,0x40,7);
  *(undefined8 *)(param_9 + 0x10) = param_7;
  *(undefined8 *)(param_9 + 0x18) = param_8;
  *(undefined8 *)(param_9 + 0x20) = param_5;
  *(undefined8 *)(param_9 + 0x28) = param_6;
  *(long *)(param_9 + 0x30) = param_1;
  *(long *)(param_9 + 0x38) = param_2;
  _swift_allocObject(param_10,0x30,7);
  *(undefined8 *)(param_10 + 0x10) = param_7;
  *(undefined8 *)(param_10 + 0x18) = param_8;
  *(undefined8 *)(param_10 + 0x20) = param_11;
  *(long *)(param_10 + 0x28) = param_9;
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_1);
  FUN_100643734(param_12,param_10,lVar3,PTR___type_metadata_for____100eae0c8 + 8,param_7);
  _swift_release(lVar3);
  _swift_release(param_10);
  return param_12;
}


