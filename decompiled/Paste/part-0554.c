/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10063afa4 | FUN_10063afa4 */

undefined1 * FUN_10063afa4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  param_1[0x36] = param_2[0x36];
  return param_1;
}



/* Address: 0x10063b018 | FUN_10063b018 */

int FUN_10063b018(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x37) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10063b060 | FUN_10063b060 */

void FUN_10063b060(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 0x36) = 0;
    *(undefined2 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x37) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x37) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10063b0b8 | FUN_10063b0b8 */

undefined1  [16] FUN_10063b0b8(void)

{
  return ZEXT816(0x100eee9e8);
}



/* Address: 0x10063b0c8 | FUN_10063b0c8 */

void FUN_10063b0c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063b0d4 | FUN_10063b0d4 */

void FUN_10063b0d4(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_errorRelease();
    return;
  }
  return;
}



/* Address: 0x10063b0ec | thunk_FUN_10063b0f0 */

ulong * thunk_FUN_10063b0f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      _swift_errorRetain(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease();
    *param_1 = *param_2;
  }
  else {
    _swift_errorRetain(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x10063b0f0 | FUN_10063b0f0 */

ulong * FUN_10063b0f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      _swift_errorRetain(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease();
    *param_1 = *param_2;
  }
  else {
    _swift_errorRetain(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x10063b174 | thunk_FUN_10063b178 */

ulong * thunk_FUN_10063b178(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < 0xffffffff) {
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease(uVar1);
    *param_1 = uVar2;
  }
  else {
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x10063b178 | FUN_10063b178 */

ulong * FUN_10063b178(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < 0xffffffff) {
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease(uVar1);
    *param_1 = uVar2;
  }
  else {
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x10063b1ec | thunk_FUN_10063b1f0 */

int thunk_FUN_10063b1f0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Address: 0x10063b1f0 | FUN_10063b1f0 */

int FUN_10063b1f0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Address: 0x10063b24c | thunk_FUN_10063b250 */

void thunk_FUN_10063b250(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffd) {
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 2);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000003;
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10063b250 | FUN_10063b250 */

void FUN_10063b250(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffd) {
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 2);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000003;
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10063b2a0 | FUN_10063b2a0 */

void FUN_10063b2a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063b2ac | FUN_10063b2ac */

void FUN_10063b2ac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a120,param_1);
  return;
}



/* Address: 0x10063b2bc | FUN_10063b2bc */

void FUN_10063b2bc(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd8048 != 0) {
    return;
  }
  uVar1 = 0x100c69d48;
  _swift_getWitnessTable(0x100c69d48,&DAT_100eee740);
  DAT_100fd8048 = uVar1;
  return;
}



/* Address: 0x10063b2fc | FUN_10063b2fc */

undefined1  [16] FUN_10063b2fc(void)

{
  return ZEXT816(0x100eeeb68);
}



/* Address: 0x10063b30c | thunk_FUN_10063b310 */

void thunk_FUN_10063b310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a190,&DAT_100eeeb68);
  DAT_100fd8050 = pTVar1;
  return;
}



/* Address: 0x10063b310 | FUN_10063b310 */

void FUN_10063b310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a190,&DAT_100eeeb68);
  DAT_100fd8050 = pTVar1;
  return;
}



/* Address: 0x10063b350 | thunk_FUN_10063b0d4 */

void thunk_FUN_10063b0d4(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_errorRelease();
    return;
  }
  return;
}



/* Address: 0x10063b354 | thunk_FUN_10063a7a0 */

void thunk_FUN_10063a7a0(void)

{
  FUN_10063a7a0();
  return;
}



/* Address: 0x10063b358 | thunk_FUN_10035f44c */

void thunk_FUN_10035f44c(void)

{
  FUN_10035f44c();
  return;
}



/* Address: 0x10063b35c | thunk_FUN_10063b250 */

void thunk_FUN_10063b250(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffd) {
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 2);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000003;
    if (0x7ffffffc < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10063b360 | thunk_FUN_10035f434 */

void thunk_FUN_10035f434(void)

{
  FUN_10035f434();
  return;
}



/* Address: 0x10063b364 | thunk_FUN_10063b0f0 */

void thunk_FUN_10063b0f0(void)

{
  thunk_FUN_10063b0f0();
  return;
}



/* Address: 0x10063b368 | thunk_FUN_10063b178 */

void thunk_FUN_10063b178(void)

{
  thunk_FUN_10063b178();
  return;
}



/* Address: 0x10063b36c | thunk_FUN_10063b1f0 */

int thunk_FUN_10063b1f0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Address: 0x10063b370 | thunk_FUN_10063ae18 */

void thunk_FUN_10063ae18(void)

{
  FUN_10063ae18();
  return;
}



/* Address: 0x10063b374 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10063b378 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10063b37c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10063b380 | FUN_10063b380 */

void FUN_10063b380(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010063b394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10063b398 | FUN_10063b398 */

void FUN_10063b398(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_43;
  byte local_42;
  byte local_41;
  
  local_43 = (byte)param_2 & 1;
  local_42 = (byte)((uint)param_2 >> 8) & 1;
  local_41 = (byte)((uint)param_2 >> 0x10) & 1;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100004640();
  pcVar3 = *(code **)(lVar2 + 0x20);
  puVar1 = auStack_80;
  local_68 = uVar4;
  uStack_60 = uVar5;
  FUN_10000cbb0(puVar1);
  (*pcVar3)(puVar1,&local_43,uVar4,lVar2);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  local_58 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_10063b458(param_1,auStack_80);
  FUN_10063b6a0(auStack_80);
  return;
}



/* Address: 0x10063b458 | FUN_10063b458 */

void FUN_10063b458(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_94;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_10063c490(param_2,param_1);
  cVar1 = *unaff_x20;
  *unaff_x20 = '\0';
  if (cVar1 == '\x01') {
    local_90 = 0x40000ffff;
    local_94 = 1;
    lVar4 = param_1[4];
    uVar7 = param_1[4];
    uVar6 = param_1[3];
    FUN_100004640(param_1,uVar6);
    pcVar5 = *(code **)(lVar4 + 0x18);
    puVar2 = &local_88;
    local_70 = uVar6;
    uStack_68 = uVar7;
    FUN_10000cbb0(puVar2);
    puVar3 = puVar2;
    FUN_10063c54c();
    (*pcVar5)(puVar2,&local_90,&local_94,&DAT_100eec8d0,puVar3,uVar6,lVar4);
    uStack_58 = param_1[6];
    local_60 = param_1[5];
    _swift_retain(param_1[6]);
    FUN_10063b6a0(param_1);
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = local_70;
    param_1[2] = uStack_78;
    param_1[5] = local_60;
    param_1[4] = uStack_68;
    param_1[6] = uStack_58;
  }
  cVar1 = unaff_x20[2];
  unaff_x20[2] = '\0';
  if (cVar1 == '\x01') {
    local_90 = CONCAT71(local_90._1_7_,1);
    lVar4 = param_1[4];
    uVar7 = param_1[4];
    uVar6 = param_1[3];
    FUN_100004640(param_1,uVar6);
    pcVar5 = *(code **)(lVar4 + 0x18);
    puVar2 = &local_88;
    local_70 = uVar6;
    uStack_68 = uVar7;
    FUN_10000cbb0(puVar2);
    FUN_10063c50c();
    (*pcVar5)(puVar2);
    uStack_58 = param_1[6];
    local_60 = param_1[5];
    _swift_retain(param_1[6]);
    FUN_10063b6a0(param_1);
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = local_70;
    param_1[2] = uStack_78;
    param_1[5] = local_60;
    param_1[4] = uStack_68;
    param_1[6] = uStack_58;
  }
  cVar1 = unaff_x20[1];
  unaff_x20[1] = '\0';
  if (cVar1 == '\x01') {
    local_90 = local_90 & 0xffffffffffffff00;
    lVar4 = param_1[4];
    uVar7 = param_1[4];
    uVar6 = param_1[3];
    FUN_100004640(param_1,uVar6);
    pcVar5 = *(code **)(lVar4 + 0x18);
    puVar2 = &local_88;
    local_70 = uVar6;
    uStack_68 = uVar7;
    FUN_10000cbb0(puVar2);
    FUN_10063c4cc();
    (*pcVar5)(puVar2);
    uStack_58 = param_1[6];
    local_60 = param_1[5];
    _swift_retain(param_1[6]);
    FUN_10063b6a0(param_1);
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = local_70;
    param_1[2] = uStack_78;
    param_1[5] = local_60;
    param_1[4] = uStack_68;
    param_1[6] = uStack_58;
  }
  return;
}



/* Address: 0x10063b6a0 | FUN_10063b6a0 */

undefined8 FUN_10063b6a0(undefined8 param_1)

{
  FUN_10066b468();
  return param_1;
}



/* Address: 0x10063b6d4 | FUN_10063b6d4 */

bool FUN_10063b6d4(char param_1)

{
  return param_1 != '\x01';
}



/* Address: 0x10063b6e4 | FUN_10063b6e4 */

undefined * FUN_10063b6e4(void)

{
  return &DAT_100c6a1c0;
}



/* Address: 0x10063b6f0 | FUN_10063b6f0 */

undefined * FUN_10063b6f0(void)

{
  return &DAT_100c6a1c1;
}



/* Address: 0x10063b6fc | FUN_10063b6fc */

undefined * FUN_10063b6fc(void)

{
  return &DAT_100c6a1c2;
}



/* Address: 0x10063b708 | FUN_10063b708 */

uint FUN_10063b708(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10063b9fc();
  _swift_bridgeObjectRelease(param_1);
  return (uint)uVar1 & 0x10101;
}



/* Address: 0x10063b740 | FUN_10063b740 */

void FUN_10063b740(char param_1)

{
  undefined1 *unaff_x20;
  
  if (param_1 == '\0') {
    *unaff_x20 = 1;
    return;
  }
  if (param_1 == '\x01') {
    unaff_x20[1] = 1;
    return;
  }
  unaff_x20[2] = 1;
  return;
}



/* Address: 0x10063b770 | FUN_10063b770 */

byte FUN_10063b770(void)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  *unaff_x20 = 0;
  return (bVar1 ^ 0xff) & 1;
}



/* Address: 0x10063b784 | FUN_10063b784 */

byte FUN_10063b784(void)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 1);
  *(undefined1 *)(unaff_x20 + 1) = 0;
  return (bVar1 ^ 0xff) & 1;
}



/* Address: 0x10063b798 | FUN_10063b798 */

byte FUN_10063b798(void)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 2);
  *(undefined1 *)(unaff_x20 + 2) = 0;
  return (bVar1 ^ 0xff) & 1;
}



/* Address: 0x10063b7ac | FUN_10063b7ac */

bool FUN_10063b7ac(uint param_1,uint param_2)

{
  return ((param_1 ^ param_2) & 0x10101) == 0;
}



/* Address: 0x10063b7c4 | FUN_10063b7c4 */

void FUN_10063b7c4(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  Hasher HVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar3 = SUB84(param_2.unknown,0);
  Swift::Hasher::_combine((byte)param_2.unknown & 1,param_2);
  HVar1.unknown._4_4_ = uVar4;
  HVar1.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 8) & 1,HVar1);
  HVar2.unknown._4_4_ = uVar4;
  HVar2.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 0x10) & 1,HVar2);
  return;
}



/* Address: 0x10063b7fc | FUN_10063b7fc */

void FUN_10063b7fc(uint param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((byte)param_1 & 1,param_2);
  Swift::Hasher::_combine((byte)(param_1 >> 8) & 1,param_2);
  uVar1 = param_1 >> 0x10 & 1;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::_combine((__uint8)uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10063b858 | FUN_10063b858 */

void FUN_10063b858(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10063b9fc();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = (byte)uVar1 & 1;
  param_1[1] = (byte)((ulong)uVar1 >> 8) & 1;
  param_1[2] = (byte)((ulong)uVar1 >> 0x10) & 1;
  return;
}



/* Address: 0x10063b8a8 | FUN_10063b8a8 */

void FUN_10063b8a8(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint8 _Var2;
  byte bVar3;
  __uint8 *unaff_x20;
  Hasher HVar4;
  
  _Var1 = *unaff_x20;
  _Var2 = unaff_x20[1];
  bVar3 = unaff_x20[2];
  HVar4.unknown = (undefined *)(ulong)bVar3;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(bVar3,param_2);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10063b914 | FUN_10063b914 */

void FUN_10063b914(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint8 _Var2;
  __uint8 *unaff_x20;
  
  _Var1 = unaff_x20[1];
  _Var2 = unaff_x20[2];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  return;
}



/* Address: 0x10063b95c | FUN_10063b95c */

void FUN_10063b95c(__int64 param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint8 _Var2;
  byte bVar3;
  __uint8 *unaff_x20;
  Hasher HVar4;
  
  _Var1 = *unaff_x20;
  _Var2 = unaff_x20[1];
  bVar3 = unaff_x20[2];
  HVar4.unknown = (undefined *)(ulong)bVar3;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(bVar3,param_2);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10063b9c4 | FUN_10063b9c4 */

byte FUN_10063b9c4(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_1[1] ^ param_2[1] | param_2[2] ^ param_1[2]) ^ 0xff) & 1;
}



/* Address: 0x10063b9fc | FUN_10063b9fc */

uint FUN_10063b9fc(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = 0;
    bVar2 = false;
    uVar4 = 0;
    lVar9 = 0;
    do {
      while( true ) {
        cVar1 = *(char *)(param_1 + 0x20 + lVar9);
        lVar8 = lVar9 + 1;
        if (cVar1 != '\0') break;
        if (lVar8 == lVar7) {
LAB_10063bad8:
          uVar4 = 1;
          uVar6 = uVar3;
          goto joined_r0x00010063badc;
        }
        lVar8 = lVar9 + 2;
        lVar5 = (lVar7 + -1) - lVar9;
        pcVar10 = (char *)(param_1 + 0x21 + lVar9);
        while( true ) {
          if (*pcVar10 != '\0') break;
          lVar8 = lVar8 + 1;
          lVar5 = lVar5 + -1;
          pcVar10 = pcVar10 + 1;
          if (lVar5 == 0) goto LAB_10063bad8;
        }
        uVar4 = 1;
        if (*pcVar10 == '\x02') goto LAB_10063baa4;
joined_r0x00010063ba38:
        while( true ) {
          if (lVar8 == lVar7) goto LAB_10063bae0;
          cVar1 = *(char *)(param_1 + 0x20 + lVar8);
          if (cVar1 != '\x01') break;
          lVar8 = lVar8 + 1;
        }
        if (cVar1 == '\0') {
          uVar4 = 1;
        }
        else {
          uVar3 = 0x10000;
        }
        bVar2 = true;
        lVar9 = lVar8 + 1;
        if (lVar7 + -1 == lVar8) goto LAB_10063bae0;
      }
      if (cVar1 == '\x01') goto joined_r0x00010063ba38;
LAB_10063baa4:
      uVar3 = 0x10000;
      lVar9 = lVar8;
      uVar6 = 0x10000;
    } while (lVar8 != lVar7);
joined_r0x00010063badc:
    uVar3 = uVar6;
    if (bVar2) {
LAB_10063bae0:
      uVar6 = 0x100;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6 | uVar3 | uVar4;
}



/* Address: 0x10063bb00 | thunk_FUN_10063bb04 */

void thunk_FUN_10063bb04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a204;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a204,&DAT_100eeece8);
  DAT_100fd8058 = pTVar1;
  return;
}



/* Address: 0x10063bb04 | FUN_10063bb04 */

void FUN_10063bb04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a204;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a204,&DAT_100eeece8);
  DAT_100fd8058 = pTVar1;
  return;
}



/* Address: 0x10063bb44 | thunk_FUN_10063bb48 */

void thunk_FUN_10063bb48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a29c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a29c,&DAT_100eeed68);
  DAT_100fd8060 = pTVar1;
  return;
}



/* Address: 0x10063bb48 | FUN_10063bb48 */

void FUN_10063bb48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a29c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a29c,&DAT_100eeed68);
  DAT_100fd8060 = pTVar1;
  return;
}



/* Address: 0x10063bb88 | FUN_10063bb88 */

void FUN_10063bb88(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x10063bbe0 | FUN_10063bbe0 */

long * FUN_10063bbe0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) && uVar2 < 0x19) {
    plVar1 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar4);
    if ((int)plVar1 != 0) {
      plVar1 = _memcpy(param_1,param_2,uVar2);
      return plVar1;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10063bcc4 | FUN_10063bcc4 */

void * FUN_10063bcc4(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  pvVar1 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar3);
  if ((int)pvVar1 != 0) {
    sVar2 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar2 = sVar2 + 1;
    }
    pvVar1 = _memcpy(param_1,param_2,sVar2);
    return pvVar1;
  }
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar3);
  return param_1;
}



/* Address: 0x10063bd64 | FUN_10063bd64 */

void * FUN_10063bd64(void *param_1,void *param_2,long param_3)

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
  pvVar2 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  pvVar1 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar1 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar4);
      goto LAB_10063bdf8;
    }
    (**(code **)(lVar5 + 0x18))(param_1,param_2,lVar4);
  }
  else {
    if ((int)pvVar1 != 0) {
LAB_10063bdf8:
      sVar3 = *(size_t *)(lVar5 + 0x40);
      if (*(int *)(lVar5 + 0x54) == 0) {
        sVar3 = sVar3 + 1;
      }
      pvVar2 = _memcpy(param_1,param_2,sVar3);
      return pvVar2;
    }
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}



/* Address: 0x10063be50 | FUN_10063be50 */

void * FUN_10063be50(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  pvVar1 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar3);
  if ((int)pvVar1 != 0) {
    sVar2 = *(size_t *)(lVar4 + 0x40);
    if (*(int *)(lVar4 + 0x54) == 0) {
      sVar2 = sVar2 + 1;
    }
    pvVar1 = _memcpy(param_1,param_2,sVar2);
    return pvVar1;
  }
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar3);
  return param_1;
}



/* Address: 0x10063bef0 | FUN_10063bef0 */

void * FUN_10063bef0(void *param_1,void *param_2,long param_3)

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
  pvVar2 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  pvVar1 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar1 != 0) {
      (**(code **)(lVar5 + 8))(param_1,lVar4);
      goto LAB_10063bf84;
    }
    (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar4);
  }
  else {
    if ((int)pvVar1 != 0) {
LAB_10063bf84:
      sVar3 = *(size_t *)(lVar5 + 0x40);
      if (*(int *)(lVar5 + 0x54) == 0) {
        sVar3 = sVar3 + 1;
      }
      pvVar2 = _memcpy(param_1,param_2,sVar3);
      return pvVar2;
    }
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}


