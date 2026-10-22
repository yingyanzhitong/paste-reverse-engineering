/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a87534 | thunk_FUN_100a87a08 */

void thunk_FUN_100a87a08(void)

{
  FUN_100a87a08();
  return;
}



/* Address: 0x100a87538 | FUN_100a87538 */

bool FUN_100a87538(long *param_1,long *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] == '\x01') {
      return true;
    }
  }
  else if ((char)param_2[1] != '\x01') {
    return *param_1 == *param_2;
  }
  return false;
}



/* Address: 0x100a8757c | FUN_100a8757c */

undefined1  [16] FUN_100a8757c(void)

{
  return ZEXT816(8);
}



/* Address: 0x100a87588 | FUN_100a87588 */

undefined * FUN_100a87588(undefined *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_108 [72];
  undefined *local_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((long)param_1 < 2) {
    local_78 = 0;
    local_70 = -0x2000000000000000;
    Swift::_StringGuts::grow(0x4d,param_2);
    SVar9.bridgeObject = (void *)0x8000000100dbab70;
    SVar9.str = (char *)0xd00000000000003f;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar9,SVar11);
    local_c0 = param_1;
    SVar9 = Swift::CustomStringConvertible::get_description();
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar9,SVar12);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    SVar10.bridgeObject = (void *)0xec0000006c616765;
    SVar10.str = (char *)0x6c6c692073692027;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar10,SVar13);
    lStack_68 = local_70;
    lVar2 = local_78;
    local_c0 = (undefined *)CONCAT71(local_c0._1_7_,1);
    lStack_b8 = local_78;
    lStack_b0 = local_70;
    lStack_a0 = -0x2fffffffffffffe7;
    local_a8 = 0;
    local_98 = -0x7ffffffeff245450;
    lStack_90 = -0x2fffffffffffffe1;
    local_88 = -0x7ffffffeff245430;
    local_80 = 0x6b;
    local_78 = CONCAT71(local_78._1_7_,1);
    local_70 = lVar2;
    uStack_58 = 0xd000000000000019;
    local_60 = 0;
    local_50 = 0x8000000100dbabb0;
    uStack_48 = 0xd00000000000001f;
    local_40 = 0x8000000100dbabd0;
    uStack_38 = 0x6b;
    FUN_100a50050(&local_c0,auStack_108);
    plVar8 = &local_78;
    FUN_100a5008c();
    FUN_100a500c0();
    param_1 = &DAT_100f2de38;
    _swift_allocError(&DAT_100f2de38,plVar8,0,0);
    puVar1 = local_c0;
    plVar8[1] = lStack_b8;
    *plVar8 = (long)puVar1;
    lVar7 = local_88;
    lVar6 = lStack_90;
    lVar5 = local_98;
    lVar4 = lStack_a0;
    lVar3 = local_a8;
    lVar2 = lStack_b0;
    plVar8[8] = local_80;
    plVar8[5] = lVar5;
    plVar8[4] = lVar4;
    plVar8[7] = lVar7;
    plVar8[6] = lVar6;
    plVar8[3] = lVar3;
    plVar8[2] = lVar2;
    _swift_willThrow();
  }
  return param_1;
}



/* Address: 0x100a87710 | thunk_FUN_100a878bc */

void thunk_FUN_100a878bc(void)

{
  FUN_100a878bc();
  return;
}



/* Address: 0x100a87714 | thunk_FUN_100a87900 */

void thunk_FUN_100a87900(void)

{
  FUN_100a87900();
  return;
}



/* Address: 0x100a87718 | thunk_FUN_100a87a68 */

void thunk_FUN_100a87a68(void)

{
  FUN_100a87a68();
  return;
}



/* Address: 0x100a8771c | thunk_FUN_100a87aa4 */

void thunk_FUN_100a87aa4(void)

{
  FUN_100a87aa4();
  return;
}



/* Address: 0x100a87720 | FUN_100a87720 */

void FUN_100a87720(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100a87aa4(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x100a8772c | FUN_100a8772c */

undefined * FUN_100a8772c(void)

{
  return &DAT_100c92850;
}



/* Address: 0x100a87738 | FUN_100a87738 */

void FUN_100a87738(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_108 [72];
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (0 < param_1) {
    return;
  }
  local_78 = 0;
  local_70 = -0x2000000000000000;
  Swift::_StringGuts::grow(0x50,param_2);
  SVar8.bridgeObject = (void *)0x8000000100dbac10;
  SVar8.str = (char *)0xd000000000000042;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar8,SVar10);
  local_c0 = param_1;
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar8,SVar11);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar9.bridgeObject = (void *)0xec0000006c616765;
  SVar9.str = (char *)0x6c6c692073692027;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  lStack_68 = local_70;
  lVar1 = local_78;
  local_c0 = CONCAT71(local_c0._1_7_,1);
  lStack_b8 = local_78;
  lStack_b0 = local_70;
  lStack_a0 = -0x2fffffffffffffe7;
  local_a8 = 0;
  local_98 = -0x7ffffffeff245450;
  lStack_90 = -0x2fffffffffffffe1;
  local_88 = -0x7ffffffeff245430;
  local_80 = 0xa8;
  local_78 = CONCAT71(local_78._1_7_,1);
  local_70 = lVar1;
  uStack_58 = 0xd000000000000019;
  local_60 = 0;
  local_50 = 0x8000000100dbabb0;
  uStack_48 = 0xd00000000000001f;
  local_40 = 0x8000000100dbabd0;
  uStack_38 = 0xa8;
  FUN_100a50050(&local_c0,auStack_108);
  plVar7 = &local_78;
  FUN_100a5008c();
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,plVar7,0,0);
  lVar1 = local_c0;
  plVar7[1] = lStack_b8;
  *plVar7 = lVar1;
  lVar6 = local_88;
  lVar5 = lStack_90;
  lVar4 = local_98;
  lVar3 = lStack_a0;
  lVar2 = local_a8;
  lVar1 = lStack_b0;
  plVar7[8] = local_80;
  plVar7[5] = lVar4;
  plVar7[4] = lVar3;
  plVar7[7] = lVar6;
  plVar7[6] = lVar5;
  plVar7[3] = lVar2;
  plVar7[2] = lVar1;
  _swift_willThrow();
  return;
}



/* Address: 0x100a878bc | FUN_100a878bc */

void FUN_100a878bc(undefined8 param_1,Hasher param_2,char param_3)

{
  Hasher HVar1;
  
  HVar1.unknown = param_2.unknown;
  if (param_3 == '\x01') {
    param_2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
  }
  Swift::Hasher::_combine((__uint64)param_2.unknown,HVar1);
  return;
}



/* Address: 0x100a87900 | FUN_100a87900 */

void FUN_100a87900(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  Hasher HVar2;
  Hasher HVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  uVar1 = uVar4 & 0xff;
  Swift::Hasher::init(0);
  HVar3.unknown = (undefined *)0x0;
  if (uVar1 != 1) {
    HVar3.unknown._4_4_ = uVar5;
    HVar3.unknown._0_4_ = uVar4;
    Swift::Hasher::_combine(1,HVar3);
    HVar3.unknown = param_1;
  }
  HVar2.unknown._4_4_ = uVar5;
  HVar2.unknown._0_4_ = uVar4;
  Swift::Hasher::_combine((__uint64)HVar3.unknown,HVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a87960 | FUN_100a87960 */

void FUN_100a87960(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  Hasher HVar2;
  undefined *puVar3;
  __uint64 *unaff_x20;
  
  puVar3 = (undefined *)*unaff_x20;
  _Var1 = unaff_x20[1];
  Swift::Hasher::init(0);
  HVar2.unknown = (undefined *)0x0;
  if ((char)_Var1 != '\x01') {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = puVar3;
  }
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100a879c0 | FUN_100a879c0 */

void FUN_100a879c0(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 *unaff_x20;
  
  if ((char)unaff_x20[1] == '\x01') {
    _Var1 = 0;
  }
  else {
    _Var1 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100a87a08 | FUN_100a87a08 */

void FUN_100a87a08(__int64 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  if (cVar1 == '\x01') {
    HVar2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
  }
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100a87a68 | FUN_100a87a68 */

undefined8 FUN_100a87a68(long *param_1,long *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] == '\x01') {
      return 1;
    }
  }
  else if ((char)param_2[1] != '\x01' && *param_1 == *param_2) {
    return 1;
  }
  return 0;
}



/* Address: 0x100a87aa4 | FUN_100a87aa4 */

undefined1  [16] FUN_100a87aa4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  String SVar3;
  String SVar4;
  String SVar5;
  
  if (((uint)param_2.unknown & 0xff) == 1) {
    auVar2._8_8_ = 0xea00000000006c61;
    auVar2._0_8_ = 0x69746e6575716573;
    return auVar2;
  }
  Swift::_StringGuts::grow(0x20,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar3.bridgeObject = (void *)0xec00000073726f74;
  SVar3.str = (char *)0x7069726373656420;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  auVar1._8_8_ = 0x8000000100dbabf0;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Address: 0x100a87b80 | thunk_FUN_100a87b84 */

void thunk_FUN_100a87b84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9289c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9289c,&DAT_100f2e3c8);
  DAT_100ff7058 = pTVar1;
  return;
}



/* Address: 0x100a87b84 | FUN_100a87b84 */

void FUN_100a87b84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9289c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9289c,&DAT_100f2e3c8);
  DAT_100ff7058 = pTVar1;
  return;
}



/* Address: 0x100a87bc4 | thunk_FUN_100a87bc8 */

void thunk_FUN_100a87bc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9292c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9292c,&DAT_100f2e448);
  DAT_100ff7060 = pTVar1;
  return;
}



/* Address: 0x100a87bc8 | FUN_100a87bc8 */

void FUN_100a87bc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9292c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9292c,&DAT_100f2e448);
  DAT_100ff7060 = pTVar1;
  return;
}



/* Address: 0x100a87c08 | FUN_100a87c08 */

undefined1  [16] FUN_100a87c08(void)

{
  return ZEXT816(0x100f2e3c8);
}



/* Address: 0x100a87c18 | FUN_100a87c18 */

undefined1  [16] FUN_100a87c18(void)

{
  return ZEXT816(0x100f2e448);
}



/* Address: 0x100a87c28 | FUN_100a87c28 */

undefined1  [16] FUN_100a87c28(void)

{
  return ZEXT816(0x100f2e4e0);
}



/* Address: 0x100a87c38 | thunk_FUN_100a87c3c */

void thunk_FUN_100a87c3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c929b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c929b8,&DAT_100f2e4e0);
  DAT_100ff7068 = pTVar1;
  return;
}



/* Address: 0x100a87c3c | FUN_100a87c3c */

void FUN_100a87c3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c929b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c929b8,&DAT_100f2e4e0);
  DAT_100ff7068 = pTVar1;
  return;
}



/* Address: 0x100a87c7c | thunk_FUN_10050eb64 */

void thunk_FUN_10050eb64(void)

{
  FUN_10050eb64();
  return;
}



/* Address: 0x100a87c80 | thunk_FUN_100a879c0 */

void thunk_FUN_100a879c0(void)

{
  FUN_100a879c0();
  return;
}



/* Address: 0x100a87c84 | thunk_FUN_100a87a08 */

void thunk_FUN_100a87a08(void)

{
  FUN_100a87a08();
  return;
}



/* Address: 0x100a87c88 | thunk_FUN_100a87a68 */

void thunk_FUN_100a87a68(void)

{
  FUN_100a87a68();
  return;
}



/* Address: 0x100a87c8c | thunk_FUN_10051bb80 */

void thunk_FUN_10051bb80(void)

{
  FUN_10051bb80();
  return;
}



/* Address: 0x100a87c90 | thunk_FUN_1000e7900 */

void thunk_FUN_1000e7900(void)

{
  FUN_1000e7900();
  return;
}



/* Address: 0x100a87c94 | thunk_FUN_100a87900 */

void thunk_FUN_100a87900(void)

{
  FUN_100a87900();
  return;
}



/* Address: 0x100a87c98 | thunk_FUN_100a87aa4 */

void thunk_FUN_100a87aa4(void)

{
  FUN_100a87aa4();
  return;
}



/* Address: 0x100a87c9c | thunk_FUN_100a87960 */

void thunk_FUN_100a87960(void)

{
  FUN_100a87960();
  return;
}



/* Address: 0x100a87ca0 | thunk_FUN_100a878bc */

void thunk_FUN_100a878bc(void)

{
  FUN_100a878bc();
  return;
}



/* Address: 0x100a87ca4 | thunk_FUN_100a87720 */

void thunk_FUN_100a87720(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100a87aa4(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x100a87ca8 | FUN_100a87ca8 */

void FUN_100a87ca8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a87cb4 | FUN_100a87cb4 */

void FUN_100a87cb4(int *param_1)

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
  _swift_release(*(undefined8 *)param_1);
  return;
}



/* Address: 0x100a87cdc | FUN_100a87cdc */

undefined8 * FUN_100a87cdc(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)*(byte *)(param_2 + 10);
  if (1 < *(byte *)(param_2 + 10)) {
    uVar1 = *param_2 + 2;
  }
  if (uVar1 != 1) {
    *param_1 = *(undefined8 *)param_2;
    _swift_retain();
  }
  else {
    lVar2 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
  }
  *(bool *)(param_1 + 5) = uVar1 == 1;
  return param_1;
}



/* Address: 0x100a87d50 | FUN_100a87d50 */

int * FUN_100a87d50(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (1 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 2;
    }
    if (uVar2 == 1) {
      FUN_100004594(param_1);
    }
    else {
      _swift_release(*(undefined8 *)param_1);
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 2;
    }
    if (uVar2 == 1) {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 10) = 1;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)(param_1 + 10) = 0;
      _swift_retain();
    }
  }
  return param_1;
}



/* Address: 0x100a87e08 | FUN_100a87e08 */

void FUN_100a87e08(int *param_1,int *param_2)

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
      FUN_100004594();
    }
    else {
      _swift_release(*(undefined8 *)param_1);
    }
    uVar1 = (uint)*(byte *)(param_2 + 10);
    if (1 < *(byte *)(param_2 + 10)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 != 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
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
  return;
}



/* Address: 0x100a87ea4 | FUN_100a87ea4 */

void FUN_100a87ea4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a87eb0 | FUN_100a87eb0 */

code * FUN_100a87eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  FUN_100a88374(param_1,param_2,param_4,param_6);
  return FUN_100a889a0;
}



/* Address: 0x100a87ed8 | FUN_100a87ed8 */

void FUN_100a87ed8(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x88) = CONCAT71(extraout_var,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x90) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  _swift_task_switch(FUN_100a87f58,0,0);
  return;
}



/* Address: 0x100a87f58 | FUN_100a87f58 */

void FUN_100a87f58(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x70) + -8) + 0x10))
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x30);
    plVar1 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd0) = plVar1;
    uVar2 = 0;
    FUN_100a889c0(0,uVar4);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a8819c;
    FUN_100a884c4(*(undefined8 *)(unaff_x22 + 0x98),uVar2);
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar1;
  puVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a88098;
  FUN_1005fbb50(*(undefined8 *)(unaff_x22 + 0xa0),uVar5,*(undefined8 *)(unaff_x22 + 0x80),puVar3,
                &DAT_100ee9430,uVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                &PTR_PTR_100ee9390,uVar4);
  return;
}



/* Address: 0x100a88098 | FUN_100a88098 */

void FUN_100a88098(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a880fc;
  }
  else {
    pcVar1 = FUN_100a88290;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a880fc | FUN_100a880fc */

void FUN_100a880fc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0xa0),
             *(undefined8 *)(unaff_x22 + 0x88));
  lVar6 = 0;
  FUN_100a87ea4(0,uVar5,uVar1,uVar3);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar2,lVar6);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 5) = 0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a88198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a8819c | FUN_100a8819c */

void FUN_100a8819c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a88200;
  }
  else {
    pcVar1 = FUN_100a88304;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a88200 | FUN_100a88200 */

void FUN_100a88200(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x98),
             *(undefined8 *)(unaff_x22 + 0x88));
  FUN_100a88428(uVar3,unaff_x22 + 0x40,uVar1,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar2 + 0x20));
  (**(code **)(*(long *)(lVar4 + -8) + 8))(unaff_x22 + 0x40,lVar4);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a8828c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88290 | FUN_100a88290 */

void FUN_100a88290(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x78);
  lVar2 = 0;
  FUN_100a87ea4(0,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0xb8),
                *(undefined8 *)(unaff_x22 + 0xc0));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar1,lVar2);
  *puVar1 = uVar3;
  *(undefined1 *)(puVar1 + 5) = 0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a88300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88304 | FUN_100a88304 */

void FUN_100a88304(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xd8);
  FUN_100a88428(*(undefined8 *)(unaff_x22 + 0x78),unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x80)
                ,*(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x18),
                *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x20));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x22 + 0x40,lVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a88370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88374 | FUN_100a88374 */

undefined1  [16]
FUN_100a88374(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = *(long *)(param_3 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  pcVar5 = *(code **)(lVar3 + 0x20);
  (*pcVar5)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar6 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f2e628;
  _swift_allocObject(&DAT_100f2e628,uVar6 + lVar4,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (*pcVar5)(puVar1 + uVar6,&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3);
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = FUN_100a889a0;
  return auVar7;
}



/* Address: 0x100a88428 | FUN_100a88428 */

void FUN_100a88428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_70 [40];
  undefined1 local_48;
  
  lVar1 = 0;
  FUN_100a889c0(0,param_3);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(auStack_70,param_2,lVar1);
  local_48 = 1;
  lVar1 = 0;
  FUN_100a87ea4(0,param_3,param_4,param_5);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,auStack_70,lVar1);
  return;
}



/* Address: 0x100a884c4 | FUN_100a884c4 */

void FUN_100a884c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  _swift_task_switch(FUN_100a884e0,0,0);
  return;
}



/* Address: 0x100a884e0 | FUN_100a884e0 */

void FUN_100a884e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  FUN_10007d048(lVar4,uVar1);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x50) = CONCAT71(extraout_var,OVar3.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a885b0;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a885b0 | FUN_100a885b0 */

void FUN_100a885b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a88614;
  }
  else {
    pcVar1 = FUN_100a88710;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a88614 | FUN_100a88614 */

void FUN_100a88614(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  lVar5 = *(long *)(lVar3 + -8);
  uVar1 = uVar4;
  (**(code **)(lVar5 + 0x30))(uVar4,1,lVar3);
  if ((int)uVar1 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x50));
    _swift_task_dealloc(uVar4);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x28) = lVar3;
    FUN_10000cbb0(unaff_x22 + 0x10);
    (**(code **)(lVar5 + 0x20))();
    _swift_task_dealloc(uVar4);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  puVar2 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  lVar3 = *(long *)(lVar3 + 0x10);
  uVar4 = uVar1;
  _swift_dynamicCast(uVar1,unaff_x22 + 0x10,puVar2,lVar3,6);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar1,(uint)uVar4 ^ 1,1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a8870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88710 | FUN_100a88710 */

void FUN_100a88710(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100a88748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a8874c | FUN_100a8874c */

void FUN_100a8874c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a87ed8(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100a887b4 | FUN_100a887b4 */

void FUN_100a887b4(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005e8174;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a88848 | FUN_100a88848 */

void FUN_100a88848(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar4 = *(long *)(param_4 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (param_5,param_4,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(long *)(param_1 + 0x18) = lVar2;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  FUN_10000cbb0(param_1);
  (**(code **)(lVar5 + 0x20))();
  return;
}



/* Address: 0x100a88950 | FUN_100a88950 */

void FUN_100a88950(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}


