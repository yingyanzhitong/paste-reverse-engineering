/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100195d0c | FUN_100195d0c */

void FUN_100195d0c(void)

{
  FUN_100195d18();
  return;
}



/* Address: 0x100195d18 | FUN_100195d18 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100195d58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100195d18(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100195d90 | FUN_100195d90 */

void FUN_100195d90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  puVar2 = (undefined1 *)0x8000000100d974b0;
  uVar1 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e700000000000000;
    uVar1 = 0x64657269707865;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100195dd4 | thunk_FUN_1001961ec */

void thunk_FUN_1001961ec(void)

{
  FUN_1001961ec();
  return;
}



/* Address: 0x100195dd8 | FUN_100195dd8 */

void FUN_100195dd8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x756e656d;
  if (bVar4 != 3) {
    pcVar1 = (char *)0x726568746f;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar4 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x73676e6974746573;
  if (bVar4 != 2) {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e800000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar2;
  }
  puVar2 = (undefined1 *)0xea0000000000676e;
  pcVar1 = (char *)0x696472616f626e6f;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xec00000065746167;
    pcVar1 = (char *)0x5f65727574616566;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar2;
    pcVar3 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100195eb8 | FUN_100195eb8 */

void FUN_100195eb8(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar1 = (char *)0x756e656d;
  if (bVar5 != 3) {
    pcVar1 = (char *)0x726568746f;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x73676e6974746573;
  if (bVar5 != 2) {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e800000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar2;
  }
  puVar2 = (undefined1 *)0xea0000000000676e;
  pcVar1 = (char *)0x696472616f626e6f;
  if (bVar5 != 0) {
    puVar2 = (undefined1 *)0xec00000065746167;
    pcVar1 = (char *)0x5f65727574616566;
  }
  if (bVar5 < 2) {
    puVar4 = puVar2;
    pcVar3 = pcVar1;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x100195f74 | FUN_100195f74 */

void FUN_100195f74(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x756e656d;
  if (bVar4 != 3) {
    pcVar1 = (char *)0x726568746f;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar4 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x73676e6974746573;
  if (bVar4 != 2) {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e800000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar2;
  }
  puVar2 = (undefined1 *)0xea0000000000676e;
  pcVar1 = (char *)0x696472616f626e6f;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xec00000065746167;
    pcVar1 = (char *)0x5f65727574616566;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar2;
    pcVar3 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100196050 | FUN_100196050 */

void FUN_100196050(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1001961ec(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10019607c | FUN_10019607c */

void FUN_10019607c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x756e656d;
  if (bVar5 != 3) {
    uVar1 = 0x726568746f;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x73676e6974746573;
  if (bVar5 != 2) {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e800000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar2;
  }
  puVar2 = (undefined1 *)0xea0000000000676e;
  uVar1 = 0x696472616f626e6f;
  if (bVar5 != 0) {
    puVar2 = (undefined1 *)0xec00000065746167;
    uVar1 = 0x5f65727574616566;
  }
  if (bVar5 < 2) {
    puVar4 = puVar2;
    uVar3 = uVar1;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x10019611c | FUN_10019611c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100196158 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10019611c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x100196180 | FUN_100196180 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001961c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100196180(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1001961ec | FUN_1001961ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100196228 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1001961ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x100196250 | thunk_FUN_100196254 */

void thunk_FUN_100196254(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c313c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c313c8,&DAT_100ebcd98);
  DAT_100fb3640 = pTVar1;
  return;
}



/* Address: 0x100196254 | FUN_100196254 */

void FUN_100196254(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c313c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c313c8,&DAT_100ebcd98);
  DAT_100fb3640 = pTVar1;
  return;
}



/* Address: 0x100196294 | thunk_FUN_100196298 */

void thunk_FUN_100196298(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3648 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31468;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31468,&DAT_100ebce28);
  DAT_100fb3648 = pTVar1;
  return;
}



/* Address: 0x100196298 | FUN_100196298 */

void FUN_100196298(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3648 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31468;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31468,&DAT_100ebce28);
  DAT_100fb3648 = pTVar1;
  return;
}



/* Address: 0x1001962d8 | thunk_FUN_1001962dc */

void thunk_FUN_1001962dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31508;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31508,&DAT_100ebceb8);
  DAT_100fb3650 = pTVar1;
  return;
}



/* Address: 0x1001962dc | FUN_1001962dc */

void FUN_1001962dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31508;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31508,&DAT_100ebceb8);
  DAT_100fb3650 = pTVar1;
  return;
}



/* Address: 0x10019631c | thunk_FUN_100196320 */

void thunk_FUN_100196320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c315a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c315a8,&DAT_100ebcf48);
  DAT_100fb3658 = pTVar1;
  return;
}



/* Address: 0x100196320 | FUN_100196320 */

void FUN_100196320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c315a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c315a8,&DAT_100ebcf48);
  DAT_100fb3658 = pTVar1;
  return;
}



/* Address: 0x100196360 | thunk_FUN_100196364 */

void thunk_FUN_100196364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3660 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31648,&DAT_100ebcfd8);
  DAT_100fb3660 = pTVar1;
  return;
}



/* Address: 0x100196364 | FUN_100196364 */

void FUN_100196364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3660 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31648,&DAT_100ebcfd8);
  DAT_100fb3660 = pTVar1;
  return;
}



/* Address: 0x1001963a4 | thunk_FUN_1001963a8 */

void thunk_FUN_1001963a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3668 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c316e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c316e8,&DAT_100ebd068);
  DAT_100fb3668 = pTVar1;
  return;
}



/* Address: 0x1001963a8 | FUN_1001963a8 */

void FUN_1001963a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3668 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c316e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c316e8,&DAT_100ebd068);
  DAT_100fb3668 = pTVar1;
  return;
}



/* Address: 0x1001963e8 | thunk_FUN_1001963ec */

void thunk_FUN_1001963ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3670 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31788;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31788,&DAT_100ebd0f8);
  DAT_100fb3670 = pTVar1;
  return;
}



/* Address: 0x1001963ec | FUN_1001963ec */

void FUN_1001963ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3670 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31788;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31788,&DAT_100ebd0f8);
  DAT_100fb3670 = pTVar1;
  return;
}



/* Address: 0x10019642c | thunk_FUN_100196430 */

void thunk_FUN_100196430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31828,&DAT_100ebd188);
  DAT_100fb3678 = pTVar1;
  return;
}



/* Address: 0x100196430 | FUN_100196430 */

void FUN_100196430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31828,&DAT_100ebd188);
  DAT_100fb3678 = pTVar1;
  return;
}



/* Address: 0x100196470 | FUN_100196470 */

undefined1  [16] FUN_100196470(void)

{
  return ZEXT816(0x100ebcd08);
}



/* Address: 0x100196480 | FUN_100196480 */

undefined1  [16] FUN_100196480(void)

{
  return ZEXT816(0x100ebcd98);
}



/* Address: 0x100196490 | thunk_FUN_1000d13b8 */

void thunk_FUN_1000d13b8(void)

{
  FUN_1000d13b8();
  return;
}



/* Address: 0x100196494 | thunk_FUN_1000d1448 */

void thunk_FUN_1000d1448(void)

{
  FUN_1000d1448();
  return;
}



/* Address: 0x100196498 | FUN_100196498 */

undefined1  [16] FUN_100196498(void)

{
  return ZEXT816(0x100ebce28);
}



/* Address: 0x1001964a8 | FUN_1001964a8 */

undefined1  [16] FUN_1001964a8(void)

{
  return ZEXT816(0x100ebceb8);
}



/* Address: 0x1001964b8 | FUN_1001964b8 */

undefined1  [16] FUN_1001964b8(void)

{
  return ZEXT816(0x100ebcf48);
}



/* Address: 0x1001964c8 | FUN_1001964c8 */

undefined1  [16] FUN_1001964c8(void)

{
  return ZEXT816(0x100ebcfd8);
}



/* Address: 0x1001964d8 | FUN_1001964d8 */

undefined1  [16] FUN_1001964d8(void)

{
  return ZEXT816(0x100ebd068);
}



/* Address: 0x1001964e8 | thunk_FUN_100086244 */

void thunk_FUN_100086244(void)

{
  FUN_100086244();
  return;
}



/* Address: 0x1001964ec | thunk_FUN_10002cec8 */

void thunk_FUN_10002cec8(void)

{
  FUN_10002cec8();
  return;
}



/* Address: 0x1001964f0 | FUN_1001964f0 */

undefined1  [16] FUN_1001964f0(void)

{
  return ZEXT816(0x100ebd0f8);
}



/* Address: 0x100196500 | FUN_100196500 */

undefined1  [16] FUN_100196500(void)

{
  return ZEXT816(0x100ebd188);
}



/* Address: 0x100196510 | thunk_FUN_1000d1448 */

void thunk_FUN_1000d1448(void)

{
  thunk_FUN_1000d1448();
  return;
}



/* Address: 0x100196514 | thunk_FUN_10002cec8 */

void thunk_FUN_10002cec8(void)

{
  thunk_FUN_10002cec8();
  return;
}



/* Address: 0x100196518 | thunk_FUN_1000d13b8 */

void thunk_FUN_1000d13b8(void)

{
  thunk_FUN_1000d13b8();
  return;
}



/* Address: 0x10019651c | thunk_FUN_100086244 */

void thunk_FUN_100086244(void)

{
  thunk_FUN_100086244();
  return;
}



/* Address: 0x100196520 | FUN_100196520 */

void FUN_100196520(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3978;
  FUN_1000037f0(&DAT_100fb3978,&DAT_100c319d8);
  _swift_allocObject();
  FUN_1000db2a8();
  DAT_101057380 = puVar1;
  return;
}



/* Address: 0x100196568 | FUN_100196568 */

undefined8 * FUN_100196568(void)

{
  if (DAT_100fb3968 != -1) {
    _swift_once(&DAT_100fb3968,FUN_100196520);
  }
  return &DAT_101057380;
}



/* Address: 0x1001965a8 | FUN_1001965a8 */

void FUN_1001965a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001916c0();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ebc848;
  FUN_1000d80e0(param_1,"PasteAnalytics/DI+PasteAnalytics.swift",0x26,2,0xb,0x13,thunk_FUN_100196604
                ,0);
  return;
}



/* Address: 0x100196604 | FUN_100196604 */

void FUN_100196604(ulong *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  char local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  byte local_51;
  
  if (DAT_100fb3968 != -1) {
    _swift_once(&DAT_100fb3968,FUN_100196520);
  }
  plVar1 = DAT_101057380;
  puVar3 = &DAT_100c31990;
  puVar2 = puVar3;
  _swift_getKeyPath(&DAT_100c31990);
  pcVar8 = *(code **)(*plVar1 + 0x98);
  (*pcVar8)(&local_51);
  _swift_release(puVar2);
  uVar7 = (ulong)local_51;
  _swift_getKeyPath(&DAT_100c31990);
  (*pcVar8)(&local_68);
  _swift_release(puVar3);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_68 == '\x01') {
    puVar3 = &DAT_100fb3970;
    FUN_1000037f0(&DAT_100fb3970,&DAT_100c319b0);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    puVar2 = &DAT_100c319b8;
    _swift_getKeyPath(&DAT_100c319b8);
    (*pcVar8)(&local_68);
    _swift_release(puVar2);
    uVar4 = 0;
    FUN_100197728();
    uVar5 = uVar4;
    _swift_allocObject();
    uVar6 = 0xd00000000000002f;
    FUN_1001967c4(0xd00000000000002f,0x8000000100d978e0,0xd000000000000018,0x8000000100d92300,
                  CONCAT71(uStack_67,local_68),uStack_60,uVar5);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ebd1f0;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
  }
  FUN_1001916c0(0);
  _swift_allocObject();
  FUN_100190b28(uVar7,puVar3);
  *param_1 = uVar7;
  return;
}



/* Address: 0x1001967c0 | thunk_FUN_100196604 */

void thunk_FUN_100196604(ulong *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  char cStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  byte bStack_51;
  
  if (DAT_100fb3968 != -1) {
    _swift_once(&DAT_100fb3968,FUN_100196520);
  }
  plVar1 = DAT_101057380;
  puVar3 = &DAT_100c31990;
  puVar2 = puVar3;
  _swift_getKeyPath(&DAT_100c31990);
  pcVar8 = *(code **)(*plVar1 + 0x98);
  (*pcVar8)(&bStack_51);
  _swift_release(puVar2);
  uVar7 = (ulong)bStack_51;
  _swift_getKeyPath(&DAT_100c31990);
  (*pcVar8)(&cStack_68);
  _swift_release(puVar3);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (cStack_68 == '\x01') {
    puVar3 = &DAT_100fb3970;
    FUN_1000037f0(&DAT_100fb3970,&DAT_100c319b0);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    puVar2 = &DAT_100c319b8;
    _swift_getKeyPath(&DAT_100c319b8);
    (*pcVar8)(&cStack_68);
    _swift_release(puVar2);
    uVar4 = 0;
    FUN_100197728();
    uVar5 = uVar4;
    _swift_allocObject();
    uVar6 = 0xd00000000000002f;
    FUN_1001967c4(0xd00000000000002f,0x8000000100d978e0,0xd000000000000018,0x8000000100d92300,
                  CONCAT71(uStack_67,cStack_68),uStack_60,uVar5);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ebd1f0;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
  }
  FUN_1001916c0(0);
  _swift_allocObject();
  FUN_100190b28(uVar7,puVar3);
  *param_1 = uVar7;
  return;
}



/* Address: 0x1001967c4 | FUN_1001967c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001967c4(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_100123b5c(0);
  _objc_allocWithZone();
  FUN_100122660(param_1,param_2,param_3,param_4,uVar2);
  puVar1 = PTR__swift_isaMask_100eae3b0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x290))(0);
  (**(code **)((*(ulong *)puVar1 & *param_1) + 0x2a8))(0);
  (**(code **)((*(ulong *)puVar1 & *param_1) + 0x260))(0);
  (**(code **)((*(ulong *)puVar1 & *param_1) + 0x248))(0);
  puVar3 = (undefined8 *)&DAT_00000001;
  (**(code **)((*(ulong *)puVar1 & *param_1) + 0x3d0))();
  if (param_6 != 0) {
    (**(code **)((*(ulong *)puVar1 & *param_1) + 0x430))(param_5,param_6);
    puVar3 = param_5;
  }
  FUN_1001396ac();
  puVar4 = (ulong *)*puVar3;
  *(ulong **)(unaff_x20 + 0x10) = puVar4;
  (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x328))(param_1);
  return;
}



/* Address: 0x100196928 | FUN_100196928 */

void FUN_100196928(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  FUN_100196d74();
  puVar17 = (ulong *)(param_1 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar16 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar7 = param_1;
  _swift_bridgeObjectRetain();
  lVar14 = 0;
  puVar18 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  lVar15 = lVar14;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      local_a8 = *puVar1;
      uVar3 = puVar1[1];
      uStack_a0 = uVar3;
      FUN_100076688(*(long *)(param_1 + 0x38) + uVar11 * 0x28,auStack_98);
      FUN_100011090(&local_a8,&local_e0,&DAT_100fb3a20,&DAT_100c31a20);
      _swift_bridgeObjectRetain(uVar3);
      FUN_100197084(&local_100,auStack_98);
      uVar4 = uStack_d8;
      uVar11 = local_e0;
      uStack_138 = uStack_f8;
      local_140 = local_100;
      local_128 = lStack_e8;
      uStack_130 = uStack_f0;
      if (lStack_e8 == 0) {
        FUN_100005808(&local_140,&DAT_100fb3a28,&DAT_100c31a28);
        _swift_bridgeObjectRetain(puVar18);
        uVar8 = uVar4;
        FUN_100071370();
        _swift_bridgeObjectRelease(puVar18);
        if ((uVar8 & 1) == 0) {
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
          _swift_bridgeObjectRelease(uVar4);
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
        }
        else {
          puVar9 = puVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          local_140 = puVar18;
          if ((int)puVar9 == 0) {
            FUN_100199668();
          }
          puVar18 = local_140;
          _swift_bridgeObjectRelease
                    (*(undefined8 *)(*(long *)(local_140 + 0x30) + uVar11 * 0x10 + 8));
          FUN_100011080(*(long *)(puVar18 + 0x38) + uVar11 * 0x20,&local_120);
          FUN_1000d9d9c(uVar11,puVar18);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
        }
        FUN_100005808(&local_120,&DAT_100fb3a28,&DAT_100c31a28);
      }
      else {
        FUN_100011080(&local_140,&local_120);
        puVar9 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = uVar11;
        uVar10 = uVar4;
        local_140 = puVar18;
        FUN_100071370();
        uVar12 = (ulong)~(uint)uVar10 & 1;
        lVar15 = *(long *)(puVar18 + 0x10) + uVar12;
        if (SCARRY8(*(long *)(puVar18 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100196d60);
          (*pcVar5)();
        }
        if (*(long *)(puVar18 + 0x18) < lVar15) {
          FUN_100199e00(lVar15,puVar9);
          uVar8 = uVar11;
          uVar12 = uVar4;
          FUN_100071370();
          puVar18 = local_140;
          if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100196d74);
            (*pcVar5)();
          }
        }
        else {
          puVar18 = local_140;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100199668();
            puVar18 = local_140;
          }
        }
        param_1 = lVar7;
        local_140 = puVar18;
        if ((uVar10 & 1) == 0) {
          *(ulong *)(puVar18 + (uVar8 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar18 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puVar18 + 0x30) + uVar8 * 0x10);
          *puVar2 = uVar11;
          puVar2[1] = uVar4;
          FUN_100011080(&local_120,*(long *)(puVar18 + 0x38) + uVar8 * 0x20);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
          if (SCARRY8(*(long *)(puVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100196d64);
            (*pcVar5)();
          }
          *(long *)(puVar18 + 0x10) = *(long *)(puVar18 + 0x10) + 1;
        }
        else {
          lVar15 = *(long *)(puVar18 + 0x38) + uVar8 * 0x20;
          FUN_100004594(lVar15);
          FUN_100011080(&local_120,lVar15);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
        }
      }
      FUN_100004594(auStack_d0);
      lVar15 = lVar14;
    }
    bVar6 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100196d5c);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar13 >> 6) <= lVar14) break;
    uVar16 = puVar17[lVar14];
  }
  _swift_bridgeObjectRelease(param_1);
  FUN_10000c650(param_1,puVar17,~uVar13,lVar15,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(unaff_x20 + 0x10)) + 0x3d8))
            (puVar18);
  _swift_bridgeObjectRelease(puVar18);
  return;
}



/* Address: 0x100196d74 | FUN_100196d74 */

undefined * FUN_100196d74(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  String SVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 *puVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_148 [24];
  long local_130;
  char *local_100;
  void *pvStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar15 = (ulong *)(param_1 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar18 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *puVar15;
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  lVar17 = lVar16;
  while( true ) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      local_a0 = *puVar1;
      uVar2 = puVar1[1];
      uStack_98 = uVar2;
      FUN_100011090(*(long *)(param_1 + 0x38) + uVar11 * 0x28,auStack_90,&DAT_100fb32b0,
                    &DAT_100c31a50);
      FUN_100011090(auStack_90,auStack_148,&DAT_100fb32b0,&DAT_100c31a50);
      if (local_130 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        puVar9 = auStack_148;
      }
      else {
        FUN_100076508(auStack_148,auStack_c8);
        FUN_100011090(&local_a0,&local_100,&DAT_100fb3a50,&DAT_100c31a58);
        pvVar6 = pvStack_f8;
        pcVar5 = local_100;
        SVar3.bridgeObject = pvStack_f8;
        SVar3.str = local_100;
        uVar11 = *(ulong *)(puVar4 + 0x10);
        if (uVar11 < *(ulong *)(puVar4 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          FUN_100199b38(uVar11 + 1,1);
        }
        Swift::Hasher::init(*(__int64 *)(puVar4 + 0x28));
        into.unknown = auStack_148;
        Swift::String::hash(into,SVar3);
        uVar10 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
        uVar12 = uVar10 >> 6;
        uVar11 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar4 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar8 = false;
          uVar11 = 0x3f - uVar14 >> 6;
          do {
            uVar10 = uVar12 + 1;
            if ((uVar10 == uVar11) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100197084);
              (*pcVar7)();
            }
            uVar12 = 0;
            if (uVar10 != uVar11) {
              uVar12 = uVar10;
            }
            bVar8 = (bool)(uVar10 == uVar11 | bVar8);
          } while (*(ulong *)(puVar4 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar4 + uVar12 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar12 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar4 + uVar12 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x30) + uVar11 * 0x10);
        *puVar1 = pcVar5;
        puVar1[1] = pvVar6;
        FUN_100076508(auStack_c8,*(long *)(puVar4 + 0x38) + uVar11 * 0x28);
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        puVar9 = auStack_f0;
      }
      FUN_100005808(puVar9,&DAT_100fb32b0,&DAT_100c31a50);
      FUN_100005808(&local_a0,&DAT_100fb3a50,&DAT_100c31a58);
      lVar17 = lVar16;
    }
    bVar8 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100197080);
      (*pcVar7)();
    }
    if ((long)(0x3f - uVar13 >> 6) <= lVar16) break;
    uVar18 = puVar15[lVar16];
  }
  FUN_10000c650(param_1,puVar15,~uVar13,lVar17,0);
  return puVar4;
}



/* Address: 0x100197084 | FUN_100197084 */

void FUN_100197084(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined *local_90;
  undefined1 auStack_88 [40];
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (int)&local_b0;
  iVar4 = (int)&local_b0;
  iVar5 = (int)&local_b0;
  iVar6 = (int)&local_b0;
  FUN_100076688(param_2,auStack_88);
  puVar7 = &DAT_100fb3a30;
  FUN_1000037f0(&DAT_100fb3a30,&DAT_100c31a30);
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  _swift_dynamicCast(&local_b0,auStack_88,puVar7,PTR___type_metadata_for_Swift_String_100eac208,6);
  if (iVar3 == 0) {
    FUN_100076688(param_2,auStack_88);
    puVar8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    _swift_dynamicCast(&local_b0,auStack_88,puVar7,PTR___type_metadata_for_Swift_Int_100eac6f8,6);
    if (iVar4 == 0) {
      FUN_100076688(param_2,auStack_88);
      puVar8 = PTR___type_metadata_for_Swift_Bool_100eac570;
      _swift_dynamicCast(&local_b0,auStack_88,puVar7,PTR___type_metadata_for_Swift_Bool_100eac570,6)
      ;
      if (iVar5 == 0) {
        FUN_100076688(param_2,auStack_88);
        puVar8 = &DAT_100fb3a38;
        FUN_1000037f0(&DAT_100fb3a38,&DAT_100c31a38);
        _swift_dynamicCast(&local_b0,auStack_88,puVar7,puVar8,6);
        if (iVar6 == 0) {
          lVar9 = *(long *)(param_2 + 0x18);
          FUN_100004640(param_2,lVar9);
          param_1[3] = lVar9;
          FUN_10000cbb0(param_1);
          (**(code **)(*(long *)(lVar9 + -8) + 0x10))();
        }
        else {
          lVar2 = CONCAT71(uStack_af,local_b0);
          lVar9 = *(long *)(lVar2 + 0x10);
          if (lVar9 == 0) {
            _swift_bridgeObjectRelease(lVar2);
            puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_100197984(0,lVar9,0);
            lVar10 = lVar2 + 0x20;
            puVar7 = local_90;
            do {
              FUN_100076688(lVar10,auStack_88);
              FUN_100197084(&local_b0,auStack_88);
              FUN_100004594(auStack_88);
              uVar1 = *(ulong *)(puVar7 + 0x10);
              local_90 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
                FUN_100197984(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
              }
              puVar7 = local_90;
              *(ulong *)(local_90 + 0x10) = uVar1 + 1;
              FUN_100011080(&local_b0,local_90 + uVar1 * 0x20 + 0x20);
              lVar10 = lVar10 + 0x28;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            _swift_bridgeObjectRelease(lVar2);
          }
          puVar8 = &DAT_100fb3a40;
          FUN_1000037f0(&DAT_100fb3a40,&DAT_100c31a40);
          param_1[3] = puVar8;
          *param_1 = puVar7;
        }
      }
      else {
        param_1[3] = puVar8;
        *(undefined1 *)param_1 = local_b0;
      }
    }
    else {
      param_1[3] = puVar8;
      *param_1 = CONCAT71(uStack_af,local_b0);
    }
  }
  else {
    param_1[3] = puVar8;
    *param_1 = CONCAT71(uStack_af,local_b0);
    param_1[1] = uStack_a8;
  }
  return;
}



/* Address: 0x100197300 | FUN_100197300 */

void FUN_100197300(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  FUN_100196d74();
  puVar16 = (ulong *)(param_3 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar14 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *puVar16;
  lVar7 = param_3;
  _swift_bridgeObjectRetain();
  lVar17 = 0;
  lVar18 = lVar17;
  puVar15 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar17 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar11 * 0x10);
      local_a8 = *puVar1;
      uVar3 = puVar1[1];
      uStack_a0 = uVar3;
      FUN_100076688(*(long *)(param_3 + 0x38) + uVar11 * 0x28,auStack_98);
      FUN_100011090(&local_a8,&local_e0,&DAT_100fb3a20,&DAT_100c31a20);
      _swift_bridgeObjectRetain(uVar3);
      FUN_100197084(&local_100,auStack_98);
      uVar4 = uStack_d8;
      uVar11 = local_e0;
      uStack_138 = uStack_f8;
      local_140 = local_100;
      local_128 = lStack_e8;
      uStack_130 = uStack_f0;
      if (lStack_e8 == 0) {
        FUN_100005808(&local_140,&DAT_100fb3a28,&DAT_100c31a28);
        _swift_bridgeObjectRetain(puVar15);
        uVar8 = uVar4;
        FUN_100071370();
        _swift_bridgeObjectRelease(puVar15);
        if ((uVar8 & 1) == 0) {
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
          _swift_bridgeObjectRelease(uVar4);
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
        }
        else {
          puVar9 = puVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          local_140 = puVar15;
          if ((int)puVar9 == 0) {
            FUN_100199668();
          }
          puVar15 = local_140;
          _swift_bridgeObjectRelease
                    (*(undefined8 *)(*(long *)(local_140 + 0x30) + uVar11 * 0x10 + 8));
          FUN_100011080(*(long *)(puVar15 + 0x38) + uVar11 * 0x20,&local_120);
          FUN_1000d9d9c(uVar11,puVar15);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
        }
        FUN_100005808(&local_120,&DAT_100fb3a28,&DAT_100c31a28);
      }
      else {
        FUN_100011080(&local_140,&local_120);
        puVar9 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = uVar11;
        uVar10 = uVar4;
        local_140 = puVar15;
        FUN_100071370();
        uVar12 = (ulong)~(uint)uVar10 & 1;
        lVar18 = *(long *)(puVar15 + 0x10) + uVar12;
        if (SCARRY8(*(long *)(puVar15 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100197714);
          (*pcVar5)();
        }
        if (*(long *)(puVar15 + 0x18) < lVar18) {
          FUN_100199e00(lVar18,puVar9);
          uVar8 = uVar11;
          uVar12 = uVar4;
          FUN_100071370();
          puVar15 = local_140;
          if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100197728);
            (*pcVar5)();
          }
        }
        else {
          puVar15 = local_140;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100199668();
            puVar15 = local_140;
          }
        }
        param_3 = lVar7;
        local_140 = puVar15;
        if ((uVar10 & 1) == 0) {
          *(ulong *)(puVar15 + (uVar8 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar15 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puVar15 + 0x30) + uVar8 * 0x10);
          *puVar2 = uVar11;
          puVar2[1] = uVar4;
          FUN_100011080(&local_120,*(long *)(puVar15 + 0x38) + uVar8 * 0x20);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
          if (SCARRY8(*(long *)(puVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100197718);
            (*pcVar5)();
          }
          *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
        }
        else {
          lVar18 = *(long *)(puVar15 + 0x38) + uVar8 * 0x20;
          FUN_100004594(lVar18);
          FUN_100011080(&local_120,lVar18);
          _swift_bridgeObjectRelease(uVar4);
          FUN_100005808(&local_a8,&DAT_100fb3a20,&DAT_100c31a20);
        }
      }
      FUN_100004594(auStack_d0);
      lVar18 = lVar17;
    }
    bVar6 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100197710);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar13 >> 6) <= lVar17) break;
    uVar14 = puVar16[lVar17];
  }
  _swift_bridgeObjectRelease(param_3);
  FUN_10000c650(param_3,puVar16,~uVar13,lVar18,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(unaff_x20 + 0x10)) + 0x450))
            (param_1,param_2,puVar15);
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x100197728 | FUN_100197728 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100197728(void)

{
  return ZEXT816(0x100fb39c0);
}



/* Address: 0x100197748 | FUN_100197748 */

void FUN_100197748(undefined8 param_1,long param_2)

{
  long *unaff_x20;
  
  if (param_2 != 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(*unaff_x20 + 0x10)) + 1000))
              ();
  }
  return;
}



/* Address: 0x100197788 | FUN_100197788 */

void FUN_100197788(void)

{
  FUN_100196928();
  return;
}



/* Address: 0x1001977a8 | FUN_1001977a8 */

void FUN_1001977a8(void)

{
  FUN_100197300();
  return;
}



/* Address: 0x1001977c8 | FUN_1001977c8 */

void FUN_1001977c8(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  void *pvVar3;
  String SVar4;
  code *pcVar5;
  Bucket BVar6;
  Hasher into;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    BVar6 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar6.offset + 1U & uVar8;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar3 = pSVar2->bridgeObject;
      SVar4 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar3);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar4);
      uVar7 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar3);
      uVar7 = uVar7 & uVar8;
      if (param_1.offset < (long)uVar12) {
        if (uVar7 < uVar12) {
LAB_1001978c8:
          if (param_1.offset < (long)uVar7) goto LAB_100197850;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar10 + 2 <= puVar9 || param_1.offset != uVar11))
        {
          uVar13 = *puVar10;
          puVar9[1] = puVar10[1];
          *puVar9 = uVar13;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x28);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x28);
        if (((param_1.offset < (long)uVar11) || (puVar10 + 5 <= puVar9)) ||
           (param_1.offset != uVar11)) {
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          uVar16 = puVar10[3];
          uVar15 = puVar10[2];
          puVar9[4] = puVar10[4];
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          puVar9[3] = uVar16;
          puVar9[2] = uVar15;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar7) goto LAB_1001978c8;
LAB_100197850:
      uVar11 = uVar11 + 1 & uVar8;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100197984);
  (*pcVar5)();
}



/* Address: 0x100197984 | FUN_100197984 */

void FUN_100197984(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1001979a0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001979a0 | FUN_1001979a0 */

undefined * FUN_1001979a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100197aac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb3a48;
    FUN_1000037f0(&DAT_100fb3a48,&DAT_100c31a48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Any_100eae0c0 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100197aac | FUN_100197aac */

void FUN_100197aac(ulong param_1,ulong param_2,long param_3,char param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long alStack_70 [2];
  
  lVar3 = 0;
  FUN_100198ea4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)((long)alStack_70 + lVar3);
  FUN_100198aec(plVar14);
  if (SCARRY8(*plVar14,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197df0);
    (*pcVar2)();
  }
  *plVar14 = *plVar14 + 1;
  lVar9 = 0x79706f63;
  if (param_4 != '\x01') {
    lVar9 = 0x6574736170;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_4 != '\x01') {
    puVar1 = &DAT_e500000000000000;
  }
  uVar4 = *(ulong *)((long)alStack_70 + lVar3 + 8);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar11 = *(long *)((long)alStack_70 + lVar3 + 8);
  lVar13 = lVar9;
  puVar6 = puVar1;
  alStack_70[1] = lVar11;
  FUN_100071370();
  uVar8 = (ulong)~(uint)puVar6 & 1;
  lVar12 = *(long *)(lVar11 + 0x10) + uVar8;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197df4);
    (*pcVar2)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar12) {
    FUN_10019a0bc(lVar12,uVar4);
    lVar11 = alStack_70[1];
    puVar7 = puVar1;
    FUN_100071370();
    lVar13 = lVar9;
    if (((uint)puVar6 & 1) != ((uint)puVar7 & 1)) goto LAB_100197d5c;
LAB_100197bd4:
    *(long *)((long)alStack_70 + lVar3 + 8) = lVar11;
  }
  else {
    if ((uVar4 & 1) != 0) goto LAB_100197bd4;
    FUN_10019980c();
    lVar11 = alStack_70[1];
    *(long *)((long)alStack_70 + lVar3 + 8) = alStack_70[1];
  }
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10016fc7c();
    _swift_bridgeObjectRetain(puVar1);
  }
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + lVar13 * 8);
  if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197df8);
    (*pcVar2)();
  }
  *(long *)(*(long *)(lVar11 + 0x38) + lVar13 * 8) = lVar9 + 1;
  _swift_bridgeObjectRelease(puVar1);
  uVar5 = *(ulong *)(&stack0xffffffffffffffa0 + lVar3);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar12 = *(long *)(&stack0xffffffffffffffa0 + lVar3);
  uVar4 = param_1;
  uVar8 = param_2;
  alStack_70[1] = lVar12;
  FUN_100071370();
  uVar10 = (ulong)~(uint)uVar8 & 1;
  lVar9 = *(long *)(lVar12 + 0x10) + uVar10;
  if (SCARRY8(*(long *)(lVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197dfc);
    (*pcVar2)();
  }
  if (*(long *)(lVar12 + 0x18) < lVar9) {
    FUN_10019a0bc(lVar9,uVar5);
    lVar12 = alStack_70[1];
    uVar4 = param_1;
    uVar10 = param_2;
    FUN_100071370();
    if (((uint)uVar8 & 1) != ((uint)uVar10 & 1)) goto LAB_100197d5c;
LAB_100197c98:
    *(long *)(&stack0xffffffffffffffa0 + lVar3) = lVar12;
  }
  else {
    uVar10 = uVar8;
    if ((uVar5 & 1) != 0) goto LAB_100197c98;
    FUN_10019980c();
    *(long *)(&stack0xffffffffffffffa0 + lVar3) = alStack_70[1];
    lVar12 = alStack_70[1];
  }
  if ((uVar8 & 1) == 0) {
    FUN_10016fc7c();
    _swift_bridgeObjectRetain(param_2);
    uVar10 = param_1;
  }
  lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + uVar4 * 8);
  if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197e00);
    (*pcVar2)();
  }
  *(long *)(*(long *)(lVar12 + 0x38) + uVar4 * 8) = lVar9 + 1;
  FUN_10019a634();
  uVar8 = *(ulong *)(&stack0xffffffffffffffa8 + lVar3);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar13 = *(long *)(&stack0xffffffffffffffa8 + lVar3);
  lVar12 = param_3;
  uVar4 = uVar10;
  alStack_70[1] = lVar13;
  FUN_100071370();
  uVar5 = (ulong)~(uint)uVar4 & 1;
  lVar9 = *(long *)(lVar13 + 0x10) + uVar5;
  if (SCARRY8(*(long *)(lVar13 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100197e04);
    (*pcVar2)();
  }
  if (*(long *)(lVar13 + 0x18) < lVar9) {
    FUN_10019a0bc(lVar9,uVar8);
    lVar13 = alStack_70[1];
    uVar8 = uVar10;
    FUN_100071370();
    lVar12 = param_3;
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
LAB_100197d5c:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100197d6c);
      (*pcVar2)();
    }
  }
  else if ((uVar8 & 1) == 0) {
    FUN_10019980c();
    *(long *)(&stack0xffffffffffffffa8 + lVar3) = alStack_70[1];
    lVar13 = alStack_70[1];
    goto joined_r0x000100197e60;
  }
  *(long *)(&stack0xffffffffffffffa8 + lVar3) = lVar13;
joined_r0x000100197e60:
  if ((uVar4 & 1) == 0) {
    FUN_10016fc7c();
    _swift_bridgeObjectRetain(uVar10);
  }
  lVar3 = *(long *)(*(long *)(lVar13 + 0x38) + lVar12 * 8);
  if (!SCARRY8(lVar3,1)) {
    *(long *)(*(long *)(lVar13 + 0x38) + lVar12 * 8) = lVar3 + 1;
    _swift_bridgeObjectRelease(uVar10);
    FUN_100198d3c(plVar14);
    FUN_100198edc(plVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100197e08);
  (*pcVar2)();
}



/* Address: 0x100197e68 | FUN_100197e68 */

void FUN_100197e68(code *param_1,undefined8 param_2)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  Date DVar6;
  long lVar7;
  Date DVar8;
  undefined7 extraout_var;
  Set<Component> SVar9;
  DateComponents DVar10;
  undefined7 extraout_var_00;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  Calendar CVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long lVar17;
  Date from;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x20;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  Date to;
  long lStack_270;
  uint local_264;
  code *local_260;
  long local_258;
  code *pcStack_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  undefined *puStack_228;
  long local_220;
  undefined *local_218;
  
  local_258 = param_2;
  pcStack_250 = param_1;
  local_218 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_220 = *(long *)(local_218 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_220 + 0x40));
  DVar10.unknown = (undefined *)((long)&lStack_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_228 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_230 = *(long *)(puStack_228 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_230 + 0x40));
  lVar15 = (long)DVar10.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb3b70;
  local_238 = lVar15;
  FUN_1000037f0(&DAT_100fb3b70,&DAT_100c31b58);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  puVar5 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_248 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar17 - extraout_x12_01;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar25 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  from.unknown = (undefined *)(lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_240 = (long)from.unknown - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = (undefined *)(((long)from.unknown - extraout_x12_02) - extraout_x12_03);
  lVar7 = 0;
  FUN_100198ea4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  plVar21 = (long *)(to.unknown + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  FUN_100198aec(plVar21);
  Foundation::Date::init();
  lVar20 = (long)*(int *)(lVar7 + 0x20);
  pcVar26 = *(code **)(lVar25 + 0x38);
  (*pcVar26)(lVar19,1,1,DVar6.unknown);
  lVar7 = (long)*(int *)(puVar4 + 0x30);
  FUN_100011090((long)plVar21 + lVar20,lVar15,&DAT_100fb32a8,&DAT_100c31088);
  FUN_100011090(lVar19,lVar15 + lVar7,&DAT_100fb32a8,&DAT_100c31088);
  pcVar23 = *(code **)(lVar25 + 0x30);
  lVar22 = lVar15;
  (*pcVar23)(lVar15,1,DVar6.unknown);
  if ((int)lVar22 == 1) {
    FUN_100005808(lVar19,&DAT_100fb32a8,&DAT_100c31088);
    lVar7 = lVar15 + lVar7;
    (*pcVar23)(lVar7,1,DVar6.unknown);
    if ((int)lVar7 == 1) {
      FUN_100005808(lVar15,&DAT_100fb32a8,&DAT_100c31088);
LAB_100198468:
      FUN_100005808((long)plVar21 + lVar20,&DAT_100fb32a8,&DAT_100c31088);
      (**(code **)(lVar25 + 0x10))((long)plVar21 + lVar20,to.unknown,DVar6.unknown);
      (*pcVar26)((long)plVar21 + lVar20,0,1,DVar6.unknown);
      FUN_100198d3c(plVar21);
      (**(code **)(lVar25 + 8))(to.unknown,DVar6.unknown);
      goto LAB_1001987f4;
    }
LAB_1001981dc:
    FUN_100005808(lVar15,&DAT_100fb3b70,&DAT_100c31b58);
  }
  else {
    FUN_100011090(lVar15,lVar17,&DAT_100fb32a8,&DAT_100c31088);
    lVar22 = lVar15 + lVar7;
    (*pcVar23)(lVar22,1,DVar6.unknown);
    lVar1 = local_240;
    if ((int)lVar22 == 1) {
      FUN_100005808(lVar19,&DAT_100fb32a8,&DAT_100c31088);
      (**(code **)(lVar25 + 8))(lVar17,DVar6.unknown);
      goto LAB_1001981dc;
    }
    local_260 = pcVar26;
    (**(code **)(lVar25 + 0x20))(local_240,lVar15 + lVar7,DVar6.unknown);
    puVar4 = &DAT_100fb3b80;
    FUN_100003a00(&DAT_100fb3b80,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar3 = Swift::Equatable::___infix(lVar17,lVar1,DVar6.unknown,puVar4);
    local_264 = (uint)CONCAT71(extraout_var_00,bVar3);
    pcVar26 = *(code **)(lVar25 + 8);
    (*pcVar26)(lVar1,DVar6.unknown);
    FUN_100005808(lVar19,&DAT_100fb32a8,&DAT_100c31088);
    (*pcVar26)(lVar17,DVar6.unknown);
    pcVar26 = local_260;
    FUN_100005808(lVar15,&DAT_100fb32a8,&DAT_100c31088);
    if ((local_264 & 1) != 0) goto LAB_100198468;
  }
  CVar14.unknown = &DAT_100c31088;
  FUN_100011090((long)plVar21 + lVar20,lVar16,&DAT_100fb32a8);
  lVar7 = lVar16;
  (*pcVar23)(lVar16,1,DVar6.unknown);
  if ((int)lVar7 == 1) {
    (**(code **)(lVar25 + 8))(to.unknown,DVar6.unknown);
    FUN_100005808(lVar16,&DAT_100fb32a8,&DAT_100c31088);
    goto LAB_1001987f4;
  }
  DVar8.unknown = from.unknown;
  local_260 = pcVar26;
  (**(code **)(lVar25 + 0x20))(from.unknown,lVar16,DVar6.unknown);
  Foundation::Calendar::get_current((Calendar)DVar8.unknown);
  puVar4 = &DAT_100fb3b78;
  FUN_1000037f0(&DAT_100fb3b78,&DAT_100c31b60);
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,CVar2.value);
  lVar22 = *(long *)(lVar7 + -8);
  uVar18 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar24 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar4,uVar24 + *(long *)(lVar22 + 0x48),uVar18 | 7);
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  (**(code **)(lVar22 + 0x68))
            (puVar4 + uVar24,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,lVar7);
  SVar9.unknown = puVar4;
  FUN_10019a6f4();
  _swift_setDeallocating(puVar4);
  (**(code **)(lVar22 + 8))(puVar4 + uVar24,lVar7);
  _swift_deallocClassInstance(puVar4,0x20,7);
  lVar7 = local_238;
  Foundation::Calendar::dateComponents(SVar9,from,to,CVar14);
  _swift_bridgeObjectRelease(SVar9.unknown);
  puVar4 = local_218;
  (**(code **)(local_220 + 8))();
  uVar13 = (uint)puVar4;
  Foundation::DateComponents::_get_day(DVar10);
  puVar4 = puStack_228;
  (**(code **)(local_230 + 8))();
  pcVar26 = local_260;
  if ((uVar13 & 0xff) == 1) {
    pcVar26 = *(code **)(lVar25 + 8);
    (*pcVar26)(from.unknown,DVar6.unknown);
  }
  else {
    if ((long)DVar10.unknown < 7) {
LAB_1001987d8:
      pcVar26 = *(code **)(lVar25 + 8);
    }
    else {
      lVar22 = *plVar21;
      if (lVar22 < 1) {
        FUN_100005808((long)plVar21 + lVar20,&DAT_100fb32a8,&DAT_100c31088);
        (**(code **)(lVar25 + 0x10))((long)plVar21 + lVar20,to.unknown,DVar6.unknown);
        (*pcVar26)((long)plVar21 + lVar20,0,1,DVar6.unknown);
        FUN_100198d3c(plVar21);
        goto LAB_1001987d8;
      }
      (*pcStack_250)();
      pcVar26 = *(code **)(unaff_x20 + 0x10);
      if (pcVar26 != (code *)0x0) {
        local_218 = *(undefined **)(unaff_x20 + 0x18);
        lVar15 = plVar21[1];
        lVar16 = plVar21[2];
        lVar17 = plVar21[3];
        puVar5 = &DAT_100fb3198;
        FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 0xc;
        *(undefined8 *)(puVar5 + 0x10) = 6;
        *(undefined8 *)(puVar5 + 0x20) = 0x6f635f736d657469;
        puVar12 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
        *(undefined ***)(puVar5 + 0x50) = &PTR_PTR_100ebcc68;
        *(undefined8 *)(puVar5 + 0x28) = 0xeb00000000746e75;
        *(long *)(puVar5 + 0x30) = lVar7;
        *(undefined8 *)(puVar5 + 0x58) = 0x6472616f626e6970;
        *(undefined8 *)(puVar5 + 0x60) = 0xef746e756f635f73;
        *(undefined **)(puVar5 + 0x80) = puVar12;
        *(undefined ***)(puVar5 + 0x88) = &PTR_PTR_100ebcc68;
        *(undefined **)(puVar5 + 0x68) = puVar4;
        *(undefined8 *)(puVar5 + 0x90) = 0xd000000000000012;
        *(undefined8 *)(puVar5 + 0x98) = 0x8000000100d97370;
        *(undefined **)(puVar5 + 0xb8) = puVar12;
        *(undefined ***)(puVar5 + 0xc0) = &PTR_PTR_100ebcc68;
        *(long *)(puVar5 + 0xa0) = lVar22;
        *(undefined8 *)(puVar5 + 200) = 0xd000000000000014;
        *(undefined8 *)(puVar5 + 0xd0) = 0x8000000100d97390;
        puVar4 = &DAT_100fb31a0;
        FUN_1000037f0(&DAT_100fb31a0,&DAT_100c31010);
        *(undefined **)(puVar5 + 0xf0) = puVar4;
        puVar11 = puVar4;
        FUN_100190668();
        puVar12 = local_218;
        *(long *)(puVar5 + 0xd8) = lVar15;
        *(undefined **)(puVar5 + 0xf8) = puVar11;
        *(undefined8 *)(puVar5 + 0x100) = 0xd000000000000019;
        *(undefined **)(puVar5 + 0x128) = puVar4;
        *(undefined **)(puVar5 + 0x130) = puVar11;
        *(undefined8 *)(puVar5 + 0x108) = 0x8000000100d973b0;
        *(long *)(puVar5 + 0x110) = lVar16;
        *(undefined8 *)(puVar5 + 0x138) = 0xd00000000000001a;
        *(undefined8 *)(puVar5 + 0x140) = 0x8000000100d973d0;
        *(undefined **)(puVar5 + 0x160) = puVar4;
        *(undefined **)(puVar5 + 0x168) = puVar11;
        *(long *)(puVar5 + 0x148) = lVar17;
        FUN_100011128(pcVar26,local_218);
        _swift_bridgeObjectRetain(lVar15);
        _swift_bridgeObjectRetain(lVar16);
        _swift_bridgeObjectRetain(lVar17);
        puVar11 = puVar5;
        FUN_10019072c(puVar5);
        _swift_setDeallocating(puVar5);
        puVar4 = &DAT_100fb31b0;
        FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
        _swift_arrayDestroy(puVar5 + 0x20,6,puVar4);
        (*pcVar26)(0xd000000000000013,0x8000000100d973f0,puVar11);
        _swift_bridgeObjectRelease(puVar11);
        FUN_100004550(pcVar26,puVar12);
      }
      lVar7 = local_248;
      (**(code **)(lVar25 + 0x10))(local_248,to.unknown,DVar6.unknown);
      (*local_260)(lVar7,0,1,DVar6.unknown);
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10019084c();
      puVar12 = puVar4;
      FUN_10019084c();
      FUN_10019084c();
      FUN_100198edc(plVar21);
      *plVar21 = 0;
      plVar21[1] = (long)puVar5;
      plVar21[2] = (long)puVar12;
      plVar21[3] = (long)puVar4;
      FUN_10019a99c(lVar7,(long)plVar21 + lVar20);
      FUN_100198d3c(plVar21);
      pcVar26 = *(code **)(lVar25 + 8);
    }
    (*pcVar26)(from.unknown,DVar6.unknown);
  }
  (*pcVar26)(to.unknown,DVar6.unknown);
LAB_1001987f4:
  FUN_100198edc(plVar21);
  return;
}


