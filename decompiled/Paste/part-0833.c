/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10090d4a4 | FUN_10090d4a4 */

void FUN_10090d4a4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  code *param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar4 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    (*param_4)(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar4);
    return;
  }
  _swift_allocObject(param_5,0x21,7);
  *(long *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(char *)(param_5 + 0x20) = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  (*param_6)(param_1,param_2);
  (*pcVar5)(param_7,param_5,uVar2,lVar1);
  _swift_release(param_5);
  return;
}



/* Address: 0x10090d5b0 | FUN_10090d5b0 */

void FUN_10090d5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_5 + 0x30);
  lVar1 = *(long *)(param_5 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008f1cd4(param_1,param_2,param_3,param_4);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f15330;
  _swift_allocObject(&DAT_100f15330,0x38,7);
  *(long *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  puVar4[0x36] = (char)(param_4 >> 0x30);
  *(short *)(puVar4 + 0x34) = (short)(param_4 >> 0x20);
  *(int *)(puVar4 + 0x30) = (int)param_4;
  puVar4[0x37] = (char)(param_4 >> 0x38);
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_5);
  FUN_1008fa598(param_1,param_2,param_3,param_4,param_4 >> 0x38);
  (*pcVar5)(FUN_10090eecc,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10090d700 | FUN_10090d700 */

void FUN_10090d700(void)

{
  FUN_10090d4a4();
  return;
}



/* Address: 0x10090d724 | FUN_10090d724 */

void FUN_10090d724(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [152];
  
  uVar2 = *(ulong *)(param_2 + 0xa8);
  lVar1 = *(long *)(param_2 + 0xb0);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008f1da4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f152e0;
  _swift_allocObject(&DAT_100f152e0,0xa9,7);
  uVar7 = param_1[0xc];
  uVar9 = param_1[0xf];
  uVar8 = param_1[0xe];
  *(undefined8 *)(puVar4 + 0x80) = param_1[0xd];
  *(undefined8 *)(puVar4 + 0x78) = uVar7;
  *(undefined8 *)(puVar4 + 0x90) = uVar9;
  *(undefined8 *)(puVar4 + 0x88) = uVar8;
  uVar7 = param_1[0x10];
  *(undefined8 *)(puVar4 + 0xa0) = param_1[0x11];
  *(undefined8 *)(puVar4 + 0x98) = uVar7;
  uVar7 = param_1[4];
  uVar9 = param_1[7];
  uVar8 = param_1[6];
  *(undefined8 *)(puVar4 + 0x40) = param_1[5];
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  *(undefined8 *)(puVar4 + 0x50) = uVar9;
  *(undefined8 *)(puVar4 + 0x48) = uVar8;
  uVar7 = param_1[8];
  uVar9 = param_1[0xb];
  uVar8 = param_1[10];
  *(undefined8 *)(puVar4 + 0x60) = param_1[9];
  *(undefined8 *)(puVar4 + 0x58) = uVar7;
  *(undefined8 *)(puVar4 + 0x70) = uVar9;
  *(undefined8 *)(puVar4 + 0x68) = uVar8;
  uVar7 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  *(undefined8 *)(puVar4 + 0x20) = param_1[1];
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(long *)(puVar4 + 0x10) = param_2;
  puVar4[0xa8] = *(undefined1 *)(param_1 + 0x12);
  *(undefined8 *)(puVar4 + 0x30) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  FUN_1000f8cac(param_1,auStack_e8,&DAT_100fec420,&DAT_100c83b18);
  (*pcVar6)(FUN_10090ee14,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10090d870 | FUN_10090d870 */

void FUN_10090d870(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008f1f28(param_1,param_2,param_3);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f152b8;
  _swift_allocObject(&DAT_100f152b8,0x29,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar4[0x28] = (char)param_3;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_1008fa56c(param_1,param_2,param_3);
  (*pcVar5)(FUN_10090ed74,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10090d984 | FUN_10090d984 */

void FUN_10090d984(void)

{
  FUN_10090d248();
  return;
}



/* Address: 0x10090d9a0 | FUN_10090d9a0 */

void FUN_10090d9a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10093232c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090d9bc | FUN_10090d9bc */

void FUN_10090d9bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100932434();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090d9d8 | FUN_10090d9d8 */

void FUN_10090d9d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100932574();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090d9f4 | FUN_10090d9f4 */

void FUN_10090d9f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009326a4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090da10 | FUN_10090da10 */

void FUN_10090da10(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009327bc();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090da2c | FUN_10090da2c */

void FUN_10090da2c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009328c4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090da48 | FUN_10090da48 */

void FUN_10090da48(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100932a00();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090da64 | FUN_10090da64 */

void FUN_10090da64(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100932c38();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10090da80 | FUN_10090da80 */

void FUN_10090da80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_1008f1c14(uVar1,uVar2,uVar3);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10090dad4 | FUN_10090dad4 */

void FUN_10090dad4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_1008f1cd4(uVar1,uVar2,uVar3,param_2[3]);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10090db28 | FUN_10090db28 */

void FUN_10090db28(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  puVar1 = &local_d0;
  uStack_68 = param_2[0xd];
  local_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_48 = param_2[0x11];
  local_50 = param_2[0x10];
  local_40 = *(undefined1 *)(param_2 + 0x12);
  uStack_a8 = param_2[5];
  local_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  local_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_c8 = param_2[1];
  local_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  FUN_1008f1da4(&local_d0);
  FUN_1006486f8();
  FUN_100004550(puVar1,param_2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10090dbac | FUN_10090dbac */

void FUN_10090dbac(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (ulong)*(byte *)(param_2 + 2);
  (*param_3)(uVar1,uVar2,uVar3);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10090dc04 | FUN_10090dc04 */

undefined * FUN_10090dc04(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *capacity;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fecbc8;
    uVar8 = 0;
    FUN_1000f7830();
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar10 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar10[-4];
      uVar3 = puVar10[-3];
      uVar11 = puVar10[-2];
      uVar4 = *(undefined1 *)(puVar10 + -1);
      uVar12 = *puVar10;
      uVar7 = uVar2;
      FUN_1001e9180();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10090dcf4);
        (*pcVar5)();
      }
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar9 + 0x40) = *(ulong *)(puVar6 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
      *(ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 8) = uVar2;
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar11;
      *(undefined1 *)(puVar1 + 2) = uVar4;
      puVar1[3] = uVar12;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10090dcf8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      puVar10 = puVar10 + 5;
    } while (capacity != (undefined *)0x0);
  }
  return puVar6;
}



/* Address: 0x10090dcf8 | FUN_10090dcf8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010090dd3c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10090dcf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  _ArrayBuffer<undefined> _Var3;
  undefined8 *puVar4;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10090dda0);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_3 != 0) {
    puVar2 = &DAT_100fecbe8;
    FUN_1000f7830(&DAT_100fecbe8,&DAT_100c848a8);
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized(puVar2,puVar2);
    *(long *)(_Var3.unknown + 0x10) = param_3;
    *(undefined8 *)(_Var3.unknown + 0x20) = param_1;
    *(undefined8 *)(_Var3.unknown + 0x28) = param_2;
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      puVar4 = (undefined8 *)(_Var3.unknown + 0x38);
      do {
        puVar4[-1] = param_1;
        *puVar4 = param_2;
        _swift_retain(param_2);
        puVar4 = puVar4 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    _swift_retain(param_2);
  }
  return _Var3.unknown;
}



/* Address: 0x10090dda0 | FUN_10090dda0 */

undefined8 FUN_10090dda0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feca78;
  FUN_1000f7830(&DAT_100feca78,&DAT_100c845e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10090dde8 | FUN_10090dde8 */

void FUN_10090dde8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return;
  }
  if (param_2 == '\0') {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x10090de04 | FUN_10090de04 */

undefined8 FUN_10090de04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fecab0;
  FUN_1000f7830(&DAT_100fecab0,&DAT_100c856e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10090de54 | FUN_10090de54 */

void FUN_10090de54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86430;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86430,&DAT_100f1be58);
  DAT_100fecac8 = pTVar1;
  return;
}



/* Address: 0x10090de94 | FUN_10090de94 */

undefined8 FUN_10090de94(undefined8 param_1,undefined8 param_2)

{
  FUN_10090e5f8(param_2,param_1,&DAT_100f15070);
  return param_2;
}



/* Address: 0x10090dec8 | FUN_10090dec8 */

void FUN_10090dec8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecad0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a7e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a7e0,&DAT_100eef518);
  DAT_100fecad0 = pTVar1;
  return;
}



/* Address: 0x10090df08 | FUN_10090df08 */

void FUN_10090df08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10090c6f0(plVar5,param_1,uVar3,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x10090df88 | FUN_10090df88 */

void FUN_10090df88(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10090c76c(param_1);
  return;
}



/* Address: 0x10090dfe0 | thunk_FUN_10090dfe4 */

void thunk_FUN_10090dfe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecad8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84710,&DAT_100f14fd0);
  DAT_100fecad8 = pTVar1;
  return;
}



/* Address: 0x10090dfe4 | FUN_10090dfe4 */

void FUN_10090dfe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecad8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84710,&DAT_100f14fd0);
  DAT_100fecad8 = pTVar1;
  return;
}



/* Address: 0x10090e024 | thunk_FUN_10090e028 */

undefined8 * thunk_FUN_10090e028(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  _swift_retain(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Address: 0x10090e028 | FUN_10090e028 */

undefined8 * FUN_10090e028(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  _swift_retain(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Address: 0x10090e080 | FUN_10090e080 */

undefined8 * FUN_10090e080(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  _swift_retain(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_release(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Address: 0x10090e0e4 | FUN_10090e0e4 */

undefined8 * FUN_10090e0e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_release(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Address: 0x10090e134 | FUN_10090e134 */

int FUN_10090e134(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x3ffd;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 2) >> 6) |
          ((uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7 |
          (*(byte *)(param_1 + 2) >> 1 & 0x1f) << 7) << 2) ^ 0x3fff;
  if (0xffe < uVar1 >> 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10090e1a8 | FUN_10090e1a8 */

void FUN_10090e1a8(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 < 0x3ffd) {
    if (0x3ffc < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 2 & 0xfff | (-param_2 & 0x3fff) << 0xc;
      *param_1 = ((ulong)uVar1 | (ulong)uVar1 << 0x39) & 0xf000000000000007;
      *(byte *)(param_1 + 1) = (byte)(uVar1 >> 6) & 0xfe;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x3ffd);
    param_1[1] = 0;
    if (0x3ffc < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x10090e214 | FUN_10090e214 */

undefined1  [16] FUN_10090e214(void)

{
  return ZEXT816(0x100f14ec8);
}



/* Address: 0x10090e224 | FUN_10090e224 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10090e224(void)

{
  return ZEXT816(0x100fecb20);
}



/* Address: 0x10090e244 | FUN_10090e244 */

long FUN_10090e244(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Address: 0x10090e278 | FUN_10090e278 */

undefined8 FUN_10090e278(undefined8 param_1)

{
  FUN_10003083c();
  return param_1;
}



/* Address: 0x10090e29c | FUN_10090e29c */

void FUN_10090e29c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10090e2a8 | FUN_10090e2a8 */

undefined8 * FUN_10090e2a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return param_1;
}



/* Address: 0x10090e2d8 | FUN_10090e2d8 */

undefined1  [16] FUN_10090e2d8(void)

{
  return ZEXT816(0x100f14f50);
}



/* Address: 0x10090e2e8 | FUN_10090e2e8 */

void FUN_10090e2e8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_100004594();
    return;
  }
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x10090e330 | FUN_10090e330 */

undefined8 * FUN_10090e330(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_2 + 5);
  if (cVar1 != '\x01') {
    uVar2 = param_2[1];
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar3 = param_2[3];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    _swift_retain(uVar2);
    _swift_retain(uVar3);
  }
  else {
    lVar4 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1,param_2);
  }
  *(bool *)(param_1 + 5) = cVar1 == '\x01';
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  return param_1;
}



/* Address: 0x10090e3bc | FUN_10090e3bc */

undefined8 * FUN_10090e3bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    FUN_10090e46c(param_1);
    if (*(char *)(param_2 + 5) == '\x01') {
      lVar2 = param_2[3];
      param_1[3] = lVar2;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      uVar1 = param_2[1];
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      uVar3 = param_2[3];
      uVar4 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar4;
      *(undefined1 *)(param_1 + 5) = 0;
      _swift_retain(uVar1);
      _swift_retain(uVar3);
    }
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  return param_1;
}



/* Address: 0x10090e46c | FUN_10090e46c */

undefined8 FUN_10090e46c(undefined8 param_1)

{
  FUN_10090e5a0(param_1,&DAT_100f15070);
  return param_1;
}



/* Address: 0x10090e498 | FUN_10090e498 */

void FUN_10090e498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10090e4ac | FUN_10090e4ac */

void FUN_10090e4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10090e46c();
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar1 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar1;
  }
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  return;
}



/* Address: 0x10090e4f4 | FUN_10090e4f4 */

int FUN_10090e4f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10090e53c | FUN_10090e53c */

void FUN_10090e53c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 5) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  return;
}



/* Address: 0x10090e590 | FUN_10090e590 */

undefined1  [16] FUN_10090e590(void)

{
  return ZEXT816(0x100f14fd0);
}



/* Address: 0x10090e5a0 | FUN_10090e5a0 */

void FUN_10090e5a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (1 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 2;
  }
  if (uVar1 == 1) {
    FUN_100004594();
    return;
  }
  _swift_release(*(undefined8 *)(param_1 + 2));
  _swift_release(*(undefined8 *)(param_1 + 6));
  return;
}



/* Address: 0x10090e5f8 | FUN_10090e5f8 */

undefined8 * FUN_10090e5f8(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = (uint)*(byte *)(param_2 + 10);
  if (1 < *(byte *)(param_2 + 10)) {
    uVar2 = *param_2 + 2;
  }
  if (uVar2 != 1) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)(param_2 + 6);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    _swift_retain(uVar1);
    _swift_retain(uVar3);
  }
  else {
    lVar4 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
  }
  *(bool *)(param_1 + 5) = uVar2 == 1;
  return param_1;
}



/* Address: 0x10090e67c | FUN_10090e67c */

int * FUN_10090e67c(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 10);
    if (1 < *(byte *)(param_1 + 10)) {
      uVar3 = *param_1 + 2;
    }
    if (uVar3 == 1) {
      FUN_100004594(param_1);
    }
    else {
      _swift_release(*(undefined8 *)(param_1 + 2));
      _swift_release(*(undefined8 *)(param_1 + 6));
    }
    uVar3 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar3 = *param_2 + 2;
    }
    if (uVar3 == 1) {
      lVar2 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined1 *)(param_1 + 10) = 0;
      _swift_retain(uVar1);
      _swift_retain(uVar4);
    }
  }
  return param_1;
}



/* Address: 0x10090e75c | FUN_10090e75c */

void FUN_10090e75c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10090e770 | FUN_10090e770 */

int * FUN_10090e770(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 10);
    if (1 < *(byte *)(param_1 + 10)) {
      uVar1 = *param_1 + 2;
    }
    if (uVar1 == 1) {
      FUN_100004594(param_1);
    }
    else {
      _swift_release(*(undefined8 *)(param_1 + 2));
      _swift_release(*(undefined8 *)(param_1 + 6));
    }
    uVar1 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 != 1) {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
    }
    else {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    }
    *(bool *)(param_1 + 10) = uVar1 == 1;
  }
  return param_1;
}



/* Address: 0x10090e818 | FUN_10090e818 */

int FUN_10090e818(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xff;
  }
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x10090e854 | FUN_10090e854 */

void FUN_10090e854(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 10) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x21) = 0;
    *(undefined8 *)((long)param_1 + 0x19) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xff;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x10090e8a0 | FUN_10090e8a0 */

uint FUN_10090e8a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (1 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x10090e8bc | FUN_10090e8bc */

void FUN_10090e8bc(int *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 2;
    param_2 = 2;
  }
  *(char *)(param_1 + 10) = (char)param_2;
  return;
}



/* Address: 0x10090e8e4 | FUN_10090e8e4 */

undefined1  [16] FUN_10090e8e4(void)

{
  return ZEXT816(0x100f15070);
}



/* Address: 0x10090e8f4 | FUN_10090e8f4 */

undefined1  [16] FUN_10090e8f4(void)

{
  return ZEXT816(0x100f15100);
}



/* Address: 0x10090e904 | FUN_10090e904 */

undefined8 * FUN_10090e904(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10090e948(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}


