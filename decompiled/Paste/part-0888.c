/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009914d8 | FUN_1009914d8 */

code * FUN_1009914d8(undefined8 param_1,ulong param_2,long param_3)

{
  class_t *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  class_t *unaff_x20;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  
  pcVar1 = unaff_x20;
  _object_getClass();
  if (pcVar1 == &objc::class_t::_TtC20NIOTransportServices22NIOTSConnectionChannel &&
      unaff_x20 != (class_t *)0x0) {
    lVar7 = *(long *)(param_3 + 8);
    pcVar8 = *(code **)(lVar7 + 0x50);
    _swift_unknownObjectRetain();
    uVar2 = param_2;
    lVar6 = lVar7;
    (*pcVar8)();
    uVar3 = uVar2;
    _swift_getObjectType();
    (**(code **)(lVar6 + 0x10))();
    _swift_unknownObjectRelease(uVar2);
    if ((uVar3 & 1) == 0) {
      (*pcVar8)(param_2);
      uVar2 = param_2;
      _swift_getObjectType();
      puVar4 = &DAT_100f21458;
      _swift_allocObject(&DAT_100f21458,0x20,7);
      *(class_t **)(puVar4 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      pcVar9 = *(code **)(lVar7 + 0x20);
      _swift_unknownObjectRetain();
      _swift_retain(param_1);
      puVar5 = &DAT_100ff1698;
      FUN_1000f7830(&DAT_100ff1698,&DAT_100c8a130);
      pcVar8 = FUN_100991e60;
      (*pcVar9)(FUN_100991e60,puVar4,puVar5,uVar2,lVar7);
      _swift_unknownObjectRelease(param_2);
      _swift_release(puVar4);
    }
    else {
      (*pcVar8)(param_2,lVar7);
      _swift_getObjectType();
      puVar4 = &DAT_100ff1698;
      FUN_1000f7830(&DAT_100ff1698,&DAT_100c8a130);
      pcVar8 = FUN_10099181c;
      FUN_1006413ec(FUN_10099181c,&stack0xffffffffffffff80,param_2,puVar4,lVar7);
      _swift_unknownObjectRelease();
    }
    _swift_unknownObjectRelease();
  }
  else {
    lVar6 = *(long *)(param_3 + 8);
    (**(code **)(lVar6 + 0x50))(param_2);
    uVar2 = param_2;
    _swift_getObjectType();
    uVar3 = uVar2;
    FUN_10099172c();
    pcVar9 = (code *)&DAT_100f214a0;
    _swift_allocError(&DAT_100f214a0,uVar3,0,0);
    puVar4 = &DAT_100ff1698;
    FUN_1000f7830(&DAT_100ff1698,&DAT_100c8a130);
    pcVar8 = pcVar9;
    FUN_10063dd74(pcVar9,uVar2,puVar4,lVar6);
    _swift_unknownObjectRelease(param_2);
    _swift_errorRelease(pcVar9);
  }
  return pcVar8;
}



/* Address: 0x10099172c | FUN_10099172c */

void FUN_10099172c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a1e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a1e0,&DAT_100f214a0);
  DAT_100ff1690 = pTVar1;
  return;
}



/* Address: 0x10099176c | FUN_10099176c */

void FUN_10099176c(undefined8 *param_1,long param_2,NWProtocolDefinition *param_3)

{
  NWConnection *this;
  
  this = *(NWConnection **)(param_2 + 0x58);
  if (this == (NWConnection *)0x0) {
    FUN_10099196c();
    _swift_allocError(&DAT_100f21480,param_2,0,0);
    _swift_willThrow();
  }
  else {
    _swift_retain(this);
    Network::NWConnection::_metadata(this,param_3);
    _swift_release(this);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1009917f0 | FUN_1009917f0 */

void FUN_1009917f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10099181c | FUN_10099181c */

void FUN_10099181c(void)

{
  long unaff_x20;
  
  FUN_10099176c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100991834 | FUN_100991834 */

NWProtocolDefinition *
FUN_100991834(NWProtocolDefinition *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
             ,undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  class_t *pcVar2;
  undefined *puVar3;
  long lVar4;
  class_t *unaff_x20;
  class_t *this;
  
  lVar4 = *(long *)(param_7 + 8);
  (**(code **)(lVar4 + 0x50))(param_6);
  uVar1 = param_6;
  _swift_getObjectType();
  (**(code **)(lVar4 + 0x40))(param_2,param_3,param_4,param_5,uVar1,lVar4);
  _swift_unknownObjectRelease(param_6);
  pcVar2 = unaff_x20;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC20NIOTransportServices22NIOTSConnectionChannel) &&
     (unaff_x20 != (class_t *)0x0)) {
    this = unaff_x20[2].superclass;
    if (this != (class_t *)0x0) {
      _swift_unknownObjectRetain();
      _swift_retain(this);
      Network::NWConnection::_metadata((NWConnection *)this,param_1);
      _swift_unknownObjectRelease();
      _swift_release(this);
      return param_1;
    }
    FUN_10099196c();
    puVar3 = &DAT_100f21480;
  }
  else {
    FUN_10099172c();
    puVar3 = &DAT_100f214a0;
  }
  _swift_allocError(puVar3,pcVar2,0,0);
  _swift_willThrow();
  return param_1;
}



/* Address: 0x10099196c | FUN_10099196c */

void FUN_10099196c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff16a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a138;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a138,&DAT_100f21480);
  DAT_100ff16a0 = pTVar1;
  return;
}



/* Address: 0x1009919ac | thunk_FUN_1009919b0 */

void thunk_FUN_1009919b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff16a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a1b8,&DAT_100f21480);
  DAT_100ff16a8 = pTVar1;
  return;
}



/* Address: 0x1009919b0 | FUN_1009919b0 */

void FUN_1009919b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff16a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a1b8,&DAT_100f21480);
  DAT_100ff16a8 = pTVar1;
  return;
}



/* Address: 0x1009919f0 | thunk_FUN_1009919f4 */

void thunk_FUN_1009919f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff16b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a260,&DAT_100f214a0);
  DAT_100ff16b0 = pTVar1;
  return;
}



/* Address: 0x1009919f4 | FUN_1009919f4 */

void FUN_1009919f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff16b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a260,&DAT_100f214a0);
  DAT_100ff16b0 = pTVar1;
  return;
}



/* Address: 0x100991a34 | FUN_100991a34 */

void FUN_100991a34(void)

{
  FUN_100991a3c(0);
  return;
}



/* Address: 0x100991a3c | FUN_100991a3c */

void FUN_100991a3c(undefined8 param_1)

{
  if (DAT_100ff16f0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc77b8);
  return;
}



/* Address: 0x100991a74 | FUN_100991a74 */

void FUN_100991a74(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  MultipathServiceType MVar3;
  undefined7 extraout_var;
  undefined *local_118;
  undefined *puStack_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_118 = &DAT_100c8a368;
  puStack_110 = &DAT_100c8a380;
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_100 = &DAT_100c8a398;
  puStack_f0 = &DAT_100c8a398;
  puVar2 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_d8 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_d0 = &DAT_100c8a398;
  local_c8 = &DAT_100c8a380;
  local_b8 = &DAT_100c8a398;
  puStack_b0 = &DAT_100c8a3b0;
  puStack_a0 = &DAT_100c8a3c8;
  local_98 = &DAT_100c8a3c8;
  puStack_90 = &DAT_100c8a3e0;
  local_88 = &DAT_100c8a3f8;
  puStack_80 = &DAT_100c8a410;
  local_78 = &DAT_100c8a3c8;
  puStack_70 = &DAT_100c8a3c8;
  local_68 = &DAT_100c8a3c8;
  puStack_60 = &DAT_100c8a3c8;
  local_108 = puVar1;
  local_f8 = puVar1;
  local_e8 = puVar2;
  puStack_e0 = puVar2;
  puStack_c0 = puVar1;
  local_a8 = puVar1;
  MVar3 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(CONCAT71(extraout_var,MVar3.value) + -8) + 0x40;
    puStack_50 = &DAT_100c8a428;
    puStack_40 = &DAT_100c8a440;
    local_48 = puVar1;
    local_38 = puVar2;
    _swift_updateClassMetadata2(param_1,0x100,0x1d,&local_118,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100991b90 | FUN_100991b90 */

undefined1  [16] FUN_100991b90(void)

{
  return ZEXT816(0x100f21480);
}



/* Address: 0x100991ba0 | FUN_100991ba0 */

undefined1  [16] FUN_100991ba0(void)

{
  return ZEXT816(0x100f214a0);
}



/* Address: 0x100991bb0 | FUN_100991bb0 */

undefined1  [16] FUN_100991bb0(void)

{
  return ZEXT816(0x100f21530);
}



/* Address: 0x100991bc0 | FUN_100991bc0 */

void FUN_100991bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100991bcc | FUN_100991bcc */

undefined1  [16] FUN_100991bcc(void)

{
  return ZEXT816(0x100f215a8);
}



/* Address: 0x100991bdc | FUN_100991bdc */

undefined8 * FUN_100991bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x100991c10 | FUN_100991c10 */

undefined8 * FUN_100991c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100991c6c | FUN_100991c6c */

void FUN_100991c6c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100991c78 | FUN_100991c78 */

undefined8 * FUN_100991c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100991cbc | FUN_100991cbc */

undefined1  [16] FUN_100991cbc(void)

{
  return ZEXT816(0x100f21628);
}



/* Address: 0x100991ccc | FUN_100991ccc */

void FUN_100991ccc(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100991ce0 | FUN_100991ce0 */

undefined1  [16] FUN_100991ce0(void)

{
  return ZEXT816(0x100f216b0);
}



/* Address: 0x100991cf0 | thunk_FUN_100991cf4 */

void thunk_FUN_100991cf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a570;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a570,&DAT_100f21530);
  DAT_100ff1858 = pTVar1;
  return;
}



/* Address: 0x100991cf4 | FUN_100991cf4 */

void FUN_100991cf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a570;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a570,&DAT_100f21530);
  DAT_100ff1858 = pTVar1;
  return;
}



/* Address: 0x100991d34 | FUN_100991d34 */

undefined ** FUN_100991d34(void)

{
  return &PTR_PTR_100f216d0;
}



/* Address: 0x100991d40 | FUN_100991d40 */

undefined ** FUN_100991d40(void)

{
  return &PTR_PTR_100f216e0;
}



/* Address: 0x100991d4c | FUN_100991d4c */

undefined ** FUN_100991d4c(void)

{
  return &PTR_PTR_100f24b78;
}



/* Address: 0x100991d58 | FUN_100991d58 */

void FUN_100991d58(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 & 0xfc) == 4) {
    FUN_100991e0c();
    _swift_allocError(&DAT_100f21a58,param_1,0,0);
LAB_100991df4:
    _swift_willThrow();
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
LAB_100991dc4:
        FUN_100980638();
        _swift_allocError(&DAT_100eeb710,param_1,0,0);
        param_1[0] = 4;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 3;
        goto LAB_100991df4;
      }
      bVar1 = 1;
    }
    else {
      if (bVar1 != 2) goto LAB_100991dc4;
      bVar1 = 3;
    }
    *param_1 = bVar1;
  }
  return;
}



/* Address: 0x100991e0c | FUN_100991e0c */

void FUN_100991e0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1aa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a64c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a64c,&DAT_100f21a58);
  DAT_100ff1aa8 = pTVar1;
  return;
}



/* Address: 0x100991e4c | FUN_100991e4c */

undefined1  [16] FUN_100991e4c(void)

{
  return ZEXT816(0x100f21878);
}



/* Address: 0x100991e5c | thunk_FUN_1007b6068 */

void thunk_FUN_1007b6068(void)

{
  FUN_1007b6068();
  return;
}



/* Address: 0x100991e60 | FUN_100991e60 */

void FUN_100991e60(void)

{
  FUN_10099181c();
  return;
}



/* Address: 0x100991e74 | FUN_100991e74 */

void FUN_100991e74(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100991e88 | FUN_100991e88 */

void FUN_100991e88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a68c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a68c,&DAT_100f21a58);
  DAT_100ff1ab0 = pTVar1;
  return;
}



/* Address: 0x100991ec8 | FUN_100991ec8 */

void FUN_100991ec8(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100991edc | FUN_100991edc */

void FUN_100991edc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a710,&DAT_100f21a78);
  DAT_100ff1ab8 = pTVar1;
  return;
}



/* Address: 0x100991f1c | FUN_100991f1c */

void FUN_100991f1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ac0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a6d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a6d0,&DAT_100f21a78);
  DAT_100ff1ac0 = pTVar1;
  return;
}



/* Address: 0x100991f5c | FUN_100991f5c */

void FUN_100991f5c(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100991f70 | FUN_100991f70 */

void FUN_100991f70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a794;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a794,&DAT_100f21af0);
  DAT_100ff1ac8 = pTVar1;
  return;
}



/* Address: 0x100991fb0 | FUN_100991fb0 */

void FUN_100991fb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ad0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a754;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a754,&DAT_100f21af0);
  DAT_100ff1ad0 = pTVar1;
  return;
}



/* Address: 0x100991ff0 | FUN_100991ff0 */

void FUN_100991ff0(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100992004 | FUN_100992004 */

void FUN_100992004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ad8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a818;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a818,&DAT_100f21b18);
  DAT_100ff1ad8 = pTVar1;
  return;
}



/* Address: 0x100992044 | FUN_100992044 */

void FUN_100992044(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a7d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a7d8,&DAT_100f21b18);
  DAT_100ff1ae0 = pTVar1;
  return;
}



/* Address: 0x100992084 | FUN_100992084 */

void FUN_100992084(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100992098 | FUN_100992098 */

void FUN_100992098(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1ae8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a89c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a89c,&DAT_100f21b38);
  DAT_100ff1ae8 = pTVar1;
  return;
}



/* Address: 0x1009920d8 | FUN_1009920d8 */

void FUN_1009920d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1af0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a85c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a85c,&DAT_100f21b38);
  DAT_100ff1af0 = pTVar1;
  return;
}



/* Address: 0x100992118 | FUN_100992118 */

void FUN_100992118(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x10099212c | FUN_10099212c */

void FUN_10099212c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1af8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a920;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a920,&DAT_100f21b58);
  DAT_100ff1af8 = pTVar1;
  return;
}



/* Address: 0x10099216c | FUN_10099216c */

void FUN_10099216c(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100992180 | FUN_100992180 */

void FUN_100992180(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1b00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a9a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a9a4,&DAT_100f21b80);
  DAT_100ff1b00 = pTVar1;
  return;
}



/* Address: 0x1009921c0 | FUN_1009921c0 */

void FUN_1009921c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1b08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a964;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a964,&DAT_100f21b80);
  DAT_100ff1b08 = pTVar1;
  return;
}



/* Address: 0x100992200 | FUN_100992200 */

void FUN_100992200(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100992214 | FUN_100992214 */

void FUN_100992214(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1b10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8aa28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8aa28,&DAT_100f21ba0);
  DAT_100ff1b10 = pTVar1;
  return;
}



/* Address: 0x100992254 | FUN_100992254 */

void FUN_100992254(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100992268 | FUN_100992268 */

void FUN_100992268(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1b18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8aaac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8aaac,&DAT_100f21bc8);
  DAT_100ff1b18 = pTVar1;
  return;
}



/* Address: 0x1009922a8 | FUN_1009922a8 */

void FUN_1009922a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1b20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8aa6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8aa6c,&DAT_100f21bc8);
  DAT_100ff1b20 = pTVar1;
  return;
}



/* Address: 0x1009922e8 | FUN_1009922e8 */

undefined1  [16] FUN_1009922e8(void)

{
  return ZEXT816(0x100f21a38);
}



/* Address: 0x1009922f8 | FUN_1009922f8 */

undefined1  [16] FUN_1009922f8(void)

{
  return ZEXT816(0x100f21a58);
}



/* Address: 0x100992308 | FUN_100992308 */

undefined1  [16] FUN_100992308(void)

{
  return ZEXT816(0x100f21a78);
}



/* Address: 0x100992318 | FUN_100992318 */

void FUN_100992318(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}


