/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009dac8c | FUN_1009dac8c */

undefined1  [16] FUN_1009dac8c(void)

{
  return ZEXT816(0x100f26730);
}



/* Address: 0x1009dac9c | thunk_FUN_1009daca0 */

void thunk_FUN_1009daca0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cac8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cac8,&DAT_100f26730);
  DAT_100ff3500 = pTVar1;
  return;
}



/* Address: 0x1009daca0 | FUN_1009daca0 */

void FUN_1009daca0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cac8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cac8,&DAT_100f26730);
  DAT_100ff3500 = pTVar1;
  return;
}



/* Address: 0x1009dace0 | thunk_FUN_100030a8c */

void thunk_FUN_100030a8c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1009dace4 | thunk_FUN_1009da8d4 */

void thunk_FUN_1009da8d4(void)

{
  thunk_FUN_1009da8d4();
  return;
}



/* Address: 0x1009dace8 | thunk_FUN_1009da920 */

void thunk_FUN_1009da920(void)

{
  thunk_FUN_1009da920();
  return;
}



/* Address: 0x1009dacec | thunk_FUN_1009da9b0 */

void thunk_FUN_1009da9b0(void)

{
  thunk_FUN_1009da9b0();
  return;
}



/* Address: 0x1009dacf0 | thunk_FUN_1009daaa0 */

void thunk_FUN_1009daaa0(void)

{
  thunk_FUN_1009daaa0();
  return;
}



/* Address: 0x1009dacf4 | thunk_FUN_100030a44 */

int thunk_FUN_100030a44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009dacf8 | FUN_1009dacf8 */

void FUN_1009dacf8(void)

{
  FUN_1009dad28();
  return;
}



/* Address: 0x1009dad00 | FUN_1009dad00 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009dad00(void)

{
  return ZEXT816(0x100ff3558);
}



/* Address: 0x1009dad20 | FUN_1009dad20 */

void FUN_1009dad20(void)

{
  FUN_1009dad28();
  return;
}



/* Address: 0x1009dad28 | FUN_1009dad28 */

long FUN_1009dad28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009dad00();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  _swift_bridgeObjectRetain(param_2);
  return lVar1;
}



/* Address: 0x1009dad9c | FUN_1009dad9c */

long FUN_1009dad9c(undefined8 param_1,_StringGuts param_2,char *param_3,char *param_4,void *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  uVar4 = 0;
  if (param_5 != (void *)0x0) {
    pcVar2 = param_3;
    pcVar3 = param_4;
    Swift::_StringGuts::grow(0x12,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar5.bridgeObject = param_5;
    SVar5.str = param_4;
    SVar7.bridgeObject = pcVar3;
    SVar7.str = pcVar2;
    Swift::String::append(SVar5,SVar7);
    SVar6.bridgeObject = (void *)0xe100000000000000;
    SVar6.str = (char *)0x29;
    SVar8.bridgeObject = pcVar3;
    SVar8.str = pcVar2;
    Swift::String::append(SVar6,SVar8);
    param_4 = (char *)0x2065636976726553;
    uVar4 = 0xef2864656c696166;
  }
  lVar1 = 0;
  FUN_1009dad00();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x20) = 2;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined **)(lVar1 + 0x30) = param_2.unknown;
  *(char **)(lVar1 + 0x38) = param_3;
  *(char **)(lVar1 + 0x10) = param_4;
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  _swift_bridgeObjectRetain(param_2.unknown);
  return lVar1;
}



/* Address: 0x1009dae80 | FUN_1009dae80 */

undefined1  [16] FUN_1009dae80(char param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = 0x8000000100db7b30;
    auVar4._0_8_ = &DAT_d000000000000032;
    return auVar4;
  }
  uVar1 = 0xd00000000000003c;
  pcVar2 = "nished unexpectedly.";
  if (param_1 != '\x01') {
    uVar1 = 0xd000000000000024;
    pcVar2 = "gracefullyShutdownGroup";
  }
  auVar3._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1009daed8 | FUN_1009daed8 */

undefined * FUN_1009daed8(void)

{
  return &DAT_100c8caf0;
}



/* Address: 0x1009daee4 | FUN_1009daee4 */

undefined * FUN_1009daee4(void)

{
  return &DAT_100c8caf1;
}



/* Address: 0x1009daef0 | FUN_1009daef0 */

undefined * FUN_1009daef0(void)

{
  return &DAT_100c8caf2;
}



/* Address: 0x1009daefc | FUN_1009daefc */

void FUN_1009daefc(void)

{
  undefined1 *unaff_x20;
  
  FUN_1009dae80(*unaff_x20);
  return;
}



/* Address: 0x1009daf04 | FUN_1009daf04 */

void FUN_1009daf04(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009daf30 | thunk_FUN_1009daffc */

void thunk_FUN_1009daffc(void)

{
  FUN_1009daffc();
  return;
}



/* Address: 0x1009daf34 | FUN_1009daf34 */

void FUN_1009daf34(undefined8 param_1,Hasher param_2)

{
  long *unaff_x20;
  
  Swift::Hasher::_combine((ulong)*(byte *)(*unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x1009daf60 | thunk_FUN_1009db040 */

void thunk_FUN_1009db040(void)

{
  FUN_1009db040();
  return;
}



/* Address: 0x1009daf64 | FUN_1009daf64 */

bool FUN_1009daf64(long *param_1,long *param_2)

{
  return *(char *)(*param_1 + 0x20) == *(char *)(*param_2 + 0x20);
}



/* Address: 0x1009daf80 | FUN_1009daf80 */

bool FUN_1009daf80(long param_1,long param_2)

{
  return *(char *)(param_1 + 0x20) == *(char *)(param_2 + 0x20);
}



/* Address: 0x1009daf94 | FUN_1009daf94 */

void FUN_1009daf94(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((ulong)(byte)param_2.unknown[0x20],param_2);
  return;
}



/* Address: 0x1009dafb8 | FUN_1009dafb8 */

void FUN_1009dafb8(long param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(ulong)*(byte *)(param_1 + 0x20);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1009daffc | FUN_1009daffc */

void FUN_1009daffc(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(ulong)*(byte *)(lVar2 + 0x20);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1009db040 | FUN_1009db040 */

void FUN_1009db040(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = (undefined *)(ulong)*(byte *)(lVar2 + 0x20);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1009db080 | FUN_1009db080 */

undefined1  [16] FUN_1009db080(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  Swift::_StringGuts::grow(0x37,param_2);
  SVar9.bridgeObject = (void *)0x8000000100db7b70;
  SVar9.str = (char *)0xd00000000000001e;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar9,SVar13);
  pcVar4 = "nished unexpectedly.";
  pcVar2 = (char *)0xd00000000000003c;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    pcVar4 = "gracefullyShutdownGroup";
    pcVar2 = (char *)0xd000000000000024;
  }
  pcVar1 = "nished running the services.";
  pcVar3 = &DAT_d000000000000032;
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar1 = pcVar4;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
  SVar6.str = pcVar3;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar6,SVar14);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  SVar7.bridgeObject = &DAT_e800000000000000;
  SVar7.str = (char *)0x203a656c6966202c;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar7,SVar15);
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(*(String *)(param_1 + 0x28),SVar16);
  SVar8.bridgeObject = &DAT_e800000000000000;
  SVar8.str = (char *)0x203a656e696c202c;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar8,SVar17);
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar9,SVar18);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x20;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar10,SVar19);
  SVar11.bridgeObject = *(void **)(param_1 + 0x18);
  if (SVar11.bridgeObject == (void *)0x0) {
    pcVar4 = (char *)0x0;
    pvVar5 = (void *)0xe000000000000000;
  }
  else {
    SVar11.str = *(char **)(param_1 + 0x10);
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar11,SVar20);
    pcVar4 = (char *)0x67617373656d202c;
    pvVar5 = (void *)0xeb00000000203a65;
  }
  SVar12.bridgeObject = pvVar5;
  SVar12.str = pcVar4;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar12,SVar21);
  _swift_bridgeObjectRelease(pvVar5);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1009db22c | thunk_FUN_1009db230 */

void thunk_FUN_1009db230(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cb5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cb5c,&DAT_100f26818);
  DAT_100ff3508 = pTVar1;
  return;
}



/* Address: 0x1009db230 | FUN_1009db230 */

void FUN_1009db230(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cb5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cb5c,&DAT_100f26818);
  DAT_100ff3508 = pTVar1;
  return;
}



/* Address: 0x1009db270 | thunk_FUN_1009db274 */

void thunk_FUN_1009db274(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cc04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cc04,&DAT_100f26798);
  DAT_100ff3510 = pTVar1;
  return;
}



/* Address: 0x1009db274 | FUN_1009db274 */

void FUN_1009db274(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cc04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cc04,&DAT_100f26798);
  DAT_100ff3510 = pTVar1;
  return;
}



/* Address: 0x1009db2b4 | FUN_1009db2b4 */

void FUN_1009db2b4(void)

{
  undefined8 *unaff_x20;
  
  FUN_1009db080(*unaff_x20);
  return;
}



/* Address: 0x1009db2bc | FUN_1009db2bc */

undefined1  [16] FUN_1009db2bc(void)

{
  return ZEXT816(0x100f26798);
}



/* Address: 0x1009db2cc | FUN_1009db2cc */

undefined1  [16] FUN_1009db2cc(void)

{
  return ZEXT816(0x100f26818);
}



/* Address: 0x1009db2dc | FUN_1009db2dc */

undefined1  [16] FUN_1009db2dc(void)

{
  return ZEXT816(0x100f268b0);
}



/* Address: 0x1009db2ec | thunk_FUN_1009db2f0 */

void thunk_FUN_1009db2f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff35d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cce8,&DAT_100f268b0);
  DAT_100ff35d0 = pTVar1;
  return;
}



/* Address: 0x1009db2f0 | FUN_1009db2f0 */

void FUN_1009db2f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff35d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cce8,&DAT_100f268b0);
  DAT_100ff35d0 = pTVar1;
  return;
}



/* Address: 0x1009db330 | thunk_FUN_1009db334 */

void thunk_FUN_1009db334(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff35d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1009dad00(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8cd10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cd10,uVar1);
  DAT_100ff35d8 = pTVar2;
  return;
}



/* Address: 0x1009db334 | FUN_1009db334 */

void FUN_1009db334(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff35d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1009dad00(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8cd10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cd10,uVar1);
  DAT_100ff35d8 = pTVar2;
  return;
}



/* Address: 0x1009db378 | thunk_FUN_1009db040 */

void thunk_FUN_1009db040(void)

{
  FUN_1009db040();
  return;
}



/* Address: 0x1009db37c | thunk_FUN_1009daf64 */

bool thunk_FUN_1009daf64(long *param_1,long *param_2)

{
  return *(char *)(*param_1 + 0x20) == *(char *)(*param_2 + 0x20);
}



/* Address: 0x1009db380 | thunk_FUN_1009daf34 */

void thunk_FUN_1009daf34(void)

{
  FUN_1009daf34();
  return;
}



/* Address: 0x1009db384 | thunk_FUN_1009daffc */

void thunk_FUN_1009daffc(void)

{
  FUN_1009daffc();
  return;
}



/* Address: 0x1009db388 | FUN_1009db388 */

void FUN_1009db388(undefined8 param_1,ManagedBuffer *param_2,undefined8 param_3,undefined8 param_4)

{
  UnsafeMutablePointer<undefined> UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  ManagedBuffer *unaff_x20;
  long lVar3;
  undefined1 local_48 [8];
  
  lVar3 = *(long *)unaff_x20;
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_2);
  UVar2 = Swift::ManagedBuffer::get_firstElementAddress(unaff_x20,UVar1.unknown);
  FUN_10066e9f8(param_1,UVar1.unknown,UVar2.unknown,param_2,param_3,
                *(undefined8 *)(lVar3 + DAT_1010582a0),param_4,local_48);
  return;
}



/* Address: 0x1009db414 | FUN_1009db414 */

undefined * FUN_1009db414(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100ff35e0;
  FUN_1000f7830(&DAT_100ff35e0,&DAT_100c8cd80);
  _swift_allocObject();
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x10),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009db4a4);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009db4a8 | FUN_1009db4a8 */

undefined1  [16] FUN_1009db4a8(void)

{
  return ZEXT816(0x100f26958);
}



/* Address: 0x1009db4b8 | FUN_1009db4b8 */

void FUN_1009db4b8(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_1010582a0 + 8);
  return;
}



/* Address: 0x1009db4f8 | FUN_1009db4f8 */

void FUN_1009db4f8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009db504 | FUN_1009db504 */

undefined1  [16] FUN_1009db504(void)

{
  return ZEXT816(0x100f26a58);
}



/* Address: 0x1009db514 | FUN_1009db514 */

void FUN_1009db514(void)

{
  return;
}



/* Address: 0x1009db518 | FUN_1009db518 */

void FUN_1009db518(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1009db52c | FUN_1009db52c */

void FUN_1009db52c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100ff3668 != 0) {
    return;
  }
  puVar1 = &DAT_100f26ad8;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100ff3668 = param_1;
  return;
}



/* Address: 0x1009db57c | FUN_1009db57c */

undefined8 FUN_1009db57c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1009db4f8(0);
  uVar1 = param_1;
  FUN_10066e7bc(param_1);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return uVar1;
}



/* Address: 0x1009db5d4 | FUN_1009db5d4 */

void FUN_1009db5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1009db388(param_1,param_2,param_5);
  return;
}



/* Address: 0x1009db5f8 | FUN_1009db5f8 */

void FUN_1009db5f8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009db604 | FUN_1009db604 */

undefined4 FUN_1009db604(ulong param_1)

{
  return *(undefined4 *)(&DAT_100c8cfa4 + (param_1 & 0xff) * 4);
}



/* Address: 0x1009db618 | thunk_FUN_1009db6c0 */

undefined1  [16]
thunk_FUN_1009db6c0(ulong param_1,undefined8 param_2,undefined **param_3,Attributes param_4,
                   class_rw_t *param_5)

{
  AutoreleaseFrequency AVar1;
  DispatchQoS DVar2;
  undefined7 extraout_var;
  OS_dispatch_queue *pOVar3;
  Cache *pCVar4;
  Cache *pCVar5;
  undefined8 uVar6;
  code *pcVar7;
  class_rw_t *unaff_x19;
  Attributes unaff_x20;
  class_rw_t *pcVar8;
  OS_dispatch_queue *unaff_x21;
  OS_dispatch_queue *unaff_x22;
  byte *pbVar9;
  OS_dispatch_queue *unaff_x23;
  long unaff_x24;
  OS_dispatch_queue *unaff_x25;
  Cache *unaff_x26;
  undefined *unaff_x27;
  Cache *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  String label;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  AVar1.value = (__int8)param_5;
  pCVar4 = (Cache *)&DAT_e700000000000000;
  DVar2.unknown = &DAT_54524241474953;
  pcVar7 = (code *)(param_1 & 0xff);
  pbVar9 = &switchD_1009db6f0::switchdataD_100c8ce40;
  pOVar3 = (OS_dispatch_queue *)DVar2.unknown;
  pCVar5 = pCVar4;
  puVar10 = unaff_x29;
  switch(pcVar7) {
  default:
    pCVar4 = (Cache *)&DAT_e600000000000000;
  case (code *)0xe:
  case (code *)0x52:
  case (code *)0x6c:
  case (code *)0x7a:
  case (code *)0x94:
  case (code *)0xa2:
  case (code *)0xe0:
  case (code *)0xee:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0xf:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x48470000);
  case (code *)0x10:
  case (code *)0x22:
  case (code *)0x2a:
  case (code *)0x34:
  case (code *)0x62:
  case (code *)0x6a:
  case (code *)0x8a:
  case (code *)0x92:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xfe:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff0000ffffffff | 0x505500000000);
  case (code *)0x12:
  case (code *)0x2c:
  case (code *)0x74:
    auVar11._8_8_ = pCVar4;
    auVar11._0_8_ = DVar2.unknown;
    return auVar11;
  case (code *)0x2:
    auVar16._8_8_ = &DAT_e600000000000000;
    auVar16._0_8_ = 0x4c4c49474953;
    return auVar16;
  case (code *)0x3:
    pCVar4 = (Cache *)&DAT_e600000000000000;
    DVar2.unknown = (OS_dispatch_queue *)0x49474953;
  case (code *)0xf8:
    auVar17._0_8_ = (ulong)DVar2.unknown & 0xffff0000ffffffff | 0x544e00000000;
    auVar17._8_8_ = pCVar4;
    return auVar17;
  case (code *)0x4:
  case (code *)0x17:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x18:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x53470000);
  case (code *)0x19:
    auVar13._0_8_ = (ulong)DVar2.unknown & 0xffffffff | 0x56474500000000;
    auVar13._8_8_ = &DAT_e700000000000000;
    return auVar13;
  case (code *)0x5:
  case (code *)0x44:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x1e:
  case (code *)0x32:
  case (code *)0x3a:
  case (code *)0x42:
  case (code *)0x4a:
  case (code *)0x5e:
  case (code *)0x72:
  case (code *)0x86:
  case (code *)0x9a:
  case (code *)0xd2:
  case (code *)0xe6:
  case (code *)0xfa:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff00000000ffff | 0x524554470000);
  case (code *)0x9d:
  case (code *)0xe9:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffffffff | 0x4d000000000000);
  case (code *)0x3d:
  case (code *)0x45:
  case (code *)0x4d:
    auVar19._8_8_ = &DAT_e700000000000000;
    auVar19._0_8_ = DVar2.unknown;
    return auVar19;
  case (code *)0x6:
    auVar20._8_8_ = &DAT_e700000000000000;
    auVar20._0_8_ = 0x31525355474953;
    return auVar20;
  case (code *)0x7:
    auVar18._8_8_ = &DAT_e700000000000000;
    auVar18._0_8_ = 0x32525355474953;
    return auVar18;
  case (code *)0x8:
  case (code *)0x3c:
  case (code *)0xa8:
    auVar22._8_8_ = &DAT_e700000000000000;
    auVar22._0_8_ = 0x4d524c41474953;
    return auVar22;
  case (code *)0x9:
  case (code *)0x20:
    DVar2.unknown = (OS_dispatch_queue *)0x54495551474953;
  case (code *)0x4c:
    auVar15._8_8_ = &DAT_e700000000000000;
    auVar15._0_8_ = DVar2.unknown;
    return auVar15;
  case (code *)0xa:
    auVar21._8_8_ = &DAT_e800000000000000;
    auVar21._0_8_ = 0x48434e4957474953;
    return auVar21;
  case (code *)0xb:
  case (code *)0x13:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x14:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x43470000);
  case (code *)0x15:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff0000ffffffff | 0x4e4f00000000);
  case (code *)0x16:
  case (code *)0x36:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffffffff | 0x54000000000000);
  case (code *)0x11:
    auVar12._8_8_ = &DAT_e700000000000000;
    auVar12._0_8_ = DVar2.unknown;
    return auVar12;
  case (code *)0xc:
    DVar2.unknown = (OS_dispatch_queue *)0x45504950474953;
  case (code *)0x0:
    auVar14._8_8_ = &DAT_e700000000000000;
    auVar14._0_8_ = DVar2.unknown;
    return auVar14;
  case (code *)0x5a:
  case (code *)0x82:
  case (code *)0xaa:
  case (code *)0xf6:
    pcVar7 = (code *)&objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x3e:
  case (code *)0x46:
  case (code *)0x4e:
  case (code *)0x9e:
  case (code *)0xea:
    auVar23._0_8_ = *(long *)(pcVar7 + 0x6f0);
    if (auVar23._0_8_ != 0) {
      auVar23._8_8_ = &DAT_e700000000000000;
      return auVar23;
    }
  case (code *)0x35:
    DVar2.unknown = &DAT_100c8cec4;
    pCVar4 = (Cache *)&UNK_100f26000;
  case (code *)0xe4:
    pCVar4 = pCVar4 + 0x171;
    _swift_getWitnessTable(DVar2.unknown,pCVar4);
    DAT_100ff36f0 = (OS_dispatch_queue *)DVar2.unknown;
  case (code *)0xb4:
  case (code *)0xc0:
    auVar24._8_8_ = pCVar4;
    auVar24._0_8_ = DVar2.unknown;
    return auVar24;
  case (code *)0x75:
    pcVar8 = *(class_rw_t **)(unaff_x22 + 0x10);
    unaff_x19 = pcVar8;
    FUN_1009df740(pcVar8);
    _swift_bridgeObjectRelease(pcVar8);
    FUN_1009df7b0(0);
    pCVar4 = (Cache *)0x18;
    _swift_allocObject();
    DVar2.unknown = (OS_dispatch_queue *)0xc0;
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x18) = DVar2.unknown;
    pcVar7 = thunk_FUN_1009dbba4;
  case (code *)0x3f:
  case (code *)0x47:
  case (code *)0x4f:
  case (code *)0x77:
  case (code *)0x9f:
  case (code *)0xeb:
    *(OS_dispatch_queue **)DVar2.unknown = unaff_x22;
    *(code **)(DVar2.unknown + 8) = pcVar7;
    FUN_1009dbf18(unaff_x19);
    auVar33._8_8_ = pCVar4;
    auVar33._0_8_ = unaff_x19;
    return auVar33;
  case (code *)0x80:
    *(class_rw_t **)(unaff_x22 + 0x10) = (class_rw_t *)&DAT_54524241474953;
    pcVar7 = FUN_1009dba8c;
    uVar6 = 0;
    _swift_task_switch(FUN_1009dba8c,0,0);
    auVar32._8_8_ = uVar6;
    auVar32._0_8_ = pcVar7;
    return auVar32;
  case (code *)0xb3:
  case (code *)0xbf:
  case (code *)0xe8:
    puVar10 = &stack0x00000050;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case (code *)0xd4:
    AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor
                      ();
    puVar10[-0xc] = CONCAT71(extraout_var,AVar1.value);
    unaff_x24 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
    register0x00000008 =
         (BADSPACEBASE *)
         (&stack0xffffffffffffffe0 + -(*(long *)(unaff_x24 + 0x40) + 0xfU & 0xfffffffffffffff0));
    unaff_x19 = (class_rw_t *)register0x00000008;
  case (code *)0x58:
    unaff_x20 = Attributes::_typeMetadataAccessor();
    unaff_x25 = (OS_dispatch_queue *)PTR__typeMetadataAccessor_100eae788;
    pbVar9 = (byte *)((long)register0x00000008 -
                     (*(long *)(*(long *)(unaff_x20.unknown + -8) + 0x40) + 0xfU &
                     0xfffffffffffffff0));
    DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
    pcVar7 = (code *)(*(long *)(*(long *)(DVar2.unknown + -8) + 0x40) + 0xf);
    unaff_x22 = (OS_dispatch_queue *)pbVar9;
  case (code *)0x98:
    unaff_x23 = (OS_dispatch_queue *)(pbVar9 + -((ulong)pcVar7 & 0xfffffffffffffff0));
    pCVar4 = &objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x1d:
  case (code *)0x31:
  case (code *)0x39:
  case (code *)0x41:
  case (code *)0x49:
  case (code *)0x5d:
  case (code *)0x71:
  case (code *)0x85:
  case (code *)0x99:
  case (code *)0xd1:
  case (code *)0xe5:
  case (code *)0xf9:
    DVar2.unknown = (undefined *)0x0;
    FUN_10000ec2c(0,pCVar4 + 0x13c,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    puVar10[-0xd] = DVar2.unknown;
    pcVar7 = (code *)"com.service-lifecycle.unix-signals";
  case (code *)0x84:
    unaff_x21 = (OS_dispatch_queue *)(pcVar7 + -0x20);
    Dispatch::DispatchQoS::get_unspecified(DVar2);
    puVar10[-0xb] = PTR___swiftEmptyArrayStorage_100eae0d8;
    DVar2.unknown = (undefined *)&objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x88:
    DVar2.unknown = DVar2.unknown + 0x9e8;
    param_3 = &PTR_get_stringValue_100eae000;
  case (code *)0x59:
  case (code *)0x81:
    param_3 = *(undefined ***)((long)param_3 + 0x798);
  case (code *)0xa9:
  case (code *)0xf5:
    FUN_100003a00(DVar2.unknown,unaff_x25,param_3);
  case (code *)0x70:
    unaff_x27 = &DAT_100c8d150;
    unaff_x28 = (Cache *)&DAT_100ff39f0;
    FUN_1000f7830(&DAT_100ff39f0,&DAT_100c8d150);
    pOVar3 = (OS_dispatch_queue *)&DAT_100ff39f8;
    unaff_x25 = (OS_dispatch_queue *)DVar2.unknown;
    unaff_x26 = (Cache *)&DAT_100ff39f0;
  case (code *)0x61:
  case (code *)0x89:
  case (code *)0xd5:
  case (code *)0xfd:
    pCVar5 = unaff_x26;
  case (code *)0x21:
  case (code *)0x5c:
    pCVar4 = unaff_x28;
    pcVar7 = (code *)unaff_x22;
    param_4.unknown = unaff_x20.unknown;
    FUN_100155c48(pOVar3,pCVar5,unaff_x27);
    DVar2.unknown = (undefined *)(puVar10 + -0xb);
    param_3 = (undefined **)pOVar3;
    unaff_x22 = (OS_dispatch_queue *)pcVar7;
  case (code *)0x9c:
    Swift::SetAlgebra::_init(pcVar7,DVar2.unknown,pCVar4,param_3,param_4.unknown,unaff_x25);
    pCVar4 = (Cache *)(ulong)*(uint *)
                              PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
    ;
  case (code *)0x30:
  case (code *)0x38:
  case (code *)0x40:
  case (code *)0x48:
    param_3 = (undefined **)unaff_x23;
    param_4.unknown = unaff_x22;
    param_5 = unaff_x19;
    (**(code **)(unaff_x24 + 0x68))(param_5,pCVar4,puVar10[-0xc]);
    pCVar4 = (Cache *)((ulong)unaff_x21 | 0x8000000000000000);
    DVar2.unknown = (OS_dispatch_queue *)0xd000000000000022;
  case (code *)0x60:
  case (code *)0x76:
    AVar1.value = (__int8)param_5;
    unaff_x20.unknown = (undefined *)puVar10[-0xd];
  case (code *)0x1c:
    label.bridgeObject = pCVar4;
    label.str = DVar2.unknown;
    auVar31._0_8_ =
         (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                   ((OS_dispatch_queue *)unaff_x20.unknown,label,(DispatchQoS)param_3,param_4,AVar1)
    ;
    DAT_100ff39d0 = auVar31._0_8_;
    auVar31._8_8_ = pCVar4;
    return auVar31;
  case (code *)0xb8:
  case (code *)0xc4:
  case (code *)0xc9:
    auVar28._8_8_ = &DAT_e700000000000000;
    auVar28._0_8_ = &DAT_54524241474953;
    return auVar28;
  case (code *)0xba:
    FUN_100316d7c();
    auVar27._8_8_ = pCVar4;
    auVar27._0_8_ = DVar2.unknown;
    return auVar27;
  case (code *)0xc7:
    auVar26._8_8_ = &DAT_e700000000000000;
    auVar26._0_8_ = &DAT_54524241474953;
    return auVar26;
  case (code *)0xcd:
    DVar2.unknown = *(undefined **)(pcVar7 + 0x6f8);
  case (code *)0xcc:
    if ((OS_dispatch_queue *)DVar2.unknown != (OS_dispatch_queue *)0x0) {
      auVar29._8_8_ = &DAT_e700000000000000;
      auVar29._0_8_ = DVar2.unknown;
      return auVar29;
    }
  case (code *)0xb6:
  case (code *)0xc2:
  case (code *)0xb2:
  case (code *)0xb5:
  case (code *)0xbe:
  case (code *)0xc1:
    DVar2.unknown = &DAT_100c8cf10;
    pCVar4 = (Cache *)&UNK_100f26000;
  case (code *)0xb9:
  case (code *)0xc5:
  case (code *)0xf4:
    pCVar4 = pCVar4 + 0x184;
    _swift_getWitnessTable(DVar2.unknown,pCVar4);
  case (code *)0xb1:
  case (code *)0xb7:
  case (code *)0xbd:
  case (code *)0xc3:
    pcVar7 = (code *)&DAT_100ff36f8;
  case (code *)0xca:
  case (code *)0xcb:
    *(undefined **)pcVar7 = DVar2.unknown;
  case (code *)0xc8:
    auVar30._8_8_ = pCVar4;
    auVar30._0_8_ = DVar2.unknown;
    return auVar30;
  case (code *)0xd0:
    return ZEXT816(0x545242414754db);
  case (code *)0xfc:
    pcVar7 = (code *)(ulong)DAT_e700000000000000;
  case (code *)0xb0:
  case (code *)0xbc:
    DAT_54524241474953 = (char)pcVar7;
    auVar25._8_8_ = &DAT_e700000000000000;
    auVar25._0_8_ = &DAT_54524241474953;
    return auVar25;
  }
}



/* Address: 0x1009db61c | FUN_1009db61c */

byte * FUN_1009db61c(void)

{
  return &BYTE_100c8ce4d;
}



/* Address: 0x1009db628 | FUN_1009db628 */

byte * FUN_1009db628(void)

{
  return &BYTE_100c8ce4e;
}



/* Address: 0x1009db634 | FUN_1009db634 */

byte * FUN_1009db634(void)

{
  return &BYTE_100c8ce4f;
}



/* Address: 0x1009db640 | FUN_1009db640 */

byte * FUN_1009db640(void)

{
  return &BYTE_100c8ce50;
}


