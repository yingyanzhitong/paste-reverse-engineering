/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009888ec | FUN_1009888ec */

void FUN_1009888ec(ulong param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(param_1);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Address: 0x100988948 | FUN_100988948 */

void FUN_100988948(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_100988b88();
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f20658;
  _swift_allocObject(&DAT_100f20658,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(thunk_FUN_1005dfd68,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100988a48 | FUN_100988a48 */

void FUN_100988a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  if (((uint)param_3 & 0xff) != 1) {
    _swift_unknownObjectRetain(param_1);
    FUN_100988c80();
    FUN_1008fdeac(param_1,param_2,param_3);
    return;
  }
  uVar2 = *(ulong *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_10092b398(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f20608;
  _swift_allocObject(&DAT_100f20608,0x20,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  FUN_1008fde58(param_1,param_2,1);
  _swift_retain(param_4);
  (*pcVar6)(FUN_1009806f4,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100988b88 | FUN_100988b88 */

void FUN_100988b88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_100630328(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f20630;
  _swift_allocObject(&DAT_100f20630,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(FUN_10090f070,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100988c80 | FUN_100988c80 */

void FUN_100988c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    FUN_100999868(param_1,param_2,param_3);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f205e0;
  _swift_allocObject(&DAT_100f205e0,0x29,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar4[0x28] = (char)param_3;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_1008fde58(param_1,param_2,param_3);
  (*pcVar5)(FUN_100988fe4,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100988d94 | FUN_100988d94 */

void FUN_100988d94(undefined8 *param_1,undefined8 param_2)

{
  FUN_100988948(*param_1,*(undefined1 *)(param_1 + 1),param_2);
  return;
}



/* Address: 0x100988da8 | FUN_100988da8 */

void FUN_100988da8(undefined8 *param_1)

{
  FUN_100988948(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x100988dbc | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100988dc0 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100988dc4 | FUN_100988dc4 */

void FUN_100988dc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (ulong)*(byte *)(param_2 + 2);
  FUN_100999868(uVar1,uVar2,uVar3);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x100988e18 | FUN_100988e18 */

void FUN_100988e18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100ff1318,&DAT_100c8b710);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x100988eb4 | FUN_100988eb4 */

void FUN_100988eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_100988e18(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100988f00 | FUN_100988f00 */

undefined8 FUN_100988f00(void)

{
  undefined8 unaff_x20;
  
  FUN_100988eb4();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x100988f3c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100988f40 | FUN_100988f40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100988f40(void)

{
  return ZEXT816(0x100ff12a0);
}



/* Address: 0x100988f60 | FUN_100988f60 */

undefined1  [16] FUN_100988f60(void)

{
  return ZEXT816(0x100f205c0);
}



/* Address: 0x100988f70 | thunk_FUN_100988f74 */

void thunk_FUN_100988f74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1310 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c899fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c899fc,&DAT_100f205c0);
  DAT_100ff1310 = pTVar1;
  return;
}



/* Address: 0x100988f74 | FUN_100988f74 */

void FUN_100988f74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1310 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c899fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c899fc,&DAT_100f205c0);
  DAT_100ff1310 = pTVar1;
  return;
}



/* Address: 0x100988fb4 | FUN_100988fb4 */

void FUN_100988fb4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1008fdeac(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100988fe4 | FUN_100988fe4 */

void FUN_100988fe4(void)

{
  long unaff_x20;
  
  FUN_100988dc4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x100988ff0 | FUN_100988ff0 */

void FUN_100988ff0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100989020 | thunk_FUN_10066a2b0 */

void thunk_FUN_10066a2b0(void)

{
  thunk_FUN_10066a2b0();
  return;
}



/* Address: 0x100989024 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100989028 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10098902c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100989030 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100989034 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100989038 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10098903c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100989040 | thunk_FUN_100988da8 */

void thunk_FUN_100988da8(undefined8 *param_1)

{
  FUN_100988948(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x100989044 | FUN_100989044 */

undefined ** FUN_100989044(void)

{
  return &PTR__swift_retain_100f206d8;
}



/* Address: 0x100989050 | FUN_100989050 */

undefined1  [16] FUN_100989050(void)

{
  return ZEXT816(0x1005ebb68);
}



/* Address: 0x100989060 | FUN_100989060 */

bool FUN_100989060(NWProtocolDefinition *param_1,NWProtocolDefinition *param_2)

{
  bool bVar1;
  NWProtocolDefinition *this;
  
  this = Network::NWProtocolDefinition::typeMetadataAccessor();
  bVar1 = Network::NWProtocolDefinition::___infix(this,param_1,param_2);
  return bVar1;
}



/* Address: 0x1009890a0 | FUN_1009890a0 */

bool FUN_1009890a0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  NWProtocolDefinition *this;
  NWProtocolDefinition *pNVar2;
  NWProtocolDefinition *pNVar3;
  
  pNVar2 = (NWProtocolDefinition *)*param_1;
  pNVar3 = (NWProtocolDefinition *)*param_2;
  this = Network::NWProtocolDefinition::typeMetadataAccessor();
  bVar1 = Network::NWProtocolDefinition::___infix(this,pNVar2,pNVar3);
  return bVar1;
}



/* Address: 0x1009890e0 | FUN_1009890e0 */

void FUN_1009890e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989104();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989104 | FUN_100989104 */

void FUN_100989104(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1340 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89a8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89a8c,&DAT_100f20798);
  DAT_100ff1340 = pTVar1;
  return;
}



/* Address: 0x100989144 | FUN_100989144 */

void FUN_100989144(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989168();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989168 | FUN_100989168 */

void FUN_100989168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89ae0,&DAT_100f207b8);
  DAT_100ff1368 = pTVar1;
  return;
}



/* Address: 0x1009891a8 | FUN_1009891a8 */

void FUN_1009891a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1009891cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1009891cc | FUN_1009891cc */

void FUN_1009891cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1390 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89b34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89b34,&DAT_100f207d8);
  DAT_100ff1390 = pTVar1;
  return;
}



/* Address: 0x10098920c | FUN_10098920c */

void FUN_10098920c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989230();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989230 | FUN_100989230 */

void FUN_100989230(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff13b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89b88,&DAT_100f207f8);
  DAT_100ff13b8 = pTVar1;
  return;
}



/* Address: 0x100989270 | FUN_100989270 */

void FUN_100989270(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989294();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989294 | FUN_100989294 */

void FUN_100989294(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff13e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89bdc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89bdc,&DAT_100f20818);
  DAT_100ff13e0 = pTVar1;
  return;
}



/* Address: 0x1009892d4 | FUN_1009892d4 */

void FUN_1009892d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1009892f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1009892f8 | FUN_1009892f8 */

void FUN_1009892f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89c30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89c30,&DAT_100f20840);
  DAT_100ff1408 = pTVar1;
  return;
}



/* Address: 0x100989338 | FUN_100989338 */

void FUN_100989338(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10098935c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x10098935c | FUN_10098935c */

void FUN_10098935c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89c84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89c84,&DAT_100f20860);
  DAT_100ff1430 = pTVar1;
  return;
}



/* Address: 0x10098939c | FUN_10098939c */

void FUN_10098939c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1009893c0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1009893c0 | FUN_1009893c0 */

void FUN_1009893c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89cd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89cd8,&DAT_100f20880);
  DAT_100ff1458 = pTVar1;
  return;
}



/* Address: 0x100989400 | FUN_100989400 */

void FUN_100989400(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989424();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989424 | FUN_100989424 */

void FUN_100989424(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1480 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89d2c,&DAT_100f208a0);
  DAT_100ff1480 = pTVar1;
  return;
}



/* Address: 0x100989464 | FUN_100989464 */

void FUN_100989464(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989488();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989488 | FUN_100989488 */

void FUN_100989488(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff14a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89d80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89d80,&DAT_100f208c0);
  DAT_100ff14a8 = pTVar1;
  return;
}



/* Address: 0x1009894c8 | FUN_1009894c8 */

void FUN_1009894c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1009894ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1009894ec | FUN_1009894ec */

void FUN_1009894ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff14d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89dd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89dd4,&DAT_100f208e0);
  DAT_100ff14d0 = pTVar1;
  return;
}



/* Address: 0x10098952c | FUN_10098952c */

void FUN_10098952c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100989550();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100989550 | FUN_100989550 */

void FUN_100989550(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff14f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89e28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89e28,&DAT_100f20900);
  DAT_100ff14f8 = pTVar1;
  return;
}



/* Address: 0x100989590 | FUN_100989590 */

undefined1  [16] FUN_100989590(void)

{
  return ZEXT816(0x100f20758);
}



/* Address: 0x1009895a0 | FUN_1009895a0 */

undefined1  [16] FUN_1009895a0(void)

{
  return ZEXT816(0x100f20778);
}



/* Address: 0x1009895b0 | FUN_1009895b0 */

undefined1  [16] FUN_1009895b0(void)

{
  return ZEXT816(0x100f20798);
}



/* Address: 0x1009895c0 | FUN_1009895c0 */

undefined1  [16] FUN_1009895c0(void)

{
  return ZEXT816(0x100f207b8);
}



/* Address: 0x1009895d0 | FUN_1009895d0 */

undefined1  [16] FUN_1009895d0(void)

{
  return ZEXT816(0x100f207d8);
}



/* Address: 0x1009895e0 | FUN_1009895e0 */

undefined1  [16] FUN_1009895e0(void)

{
  return ZEXT816(0x100f207f8);
}


