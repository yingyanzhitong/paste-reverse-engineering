/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a84130 | FUN_100a84130 */

void FUN_100a84130(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff6fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff6cd8;
  FUN_1000f8b08(&DAT_100ff6cd8,&DAT_100c911e8);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100ff6fb8 = puVar2;
  return;
}



/* Address: 0x100a84180 | thunk_FUN_100a845a8 */

void thunk_FUN_100a845a8(void)

{
  FUN_100a845a8();
  return;
}



/* Address: 0x100a84184 | switchD_100a83e7c::caseD_a8 */

void switchD_100a83e7c::caseD_a8(Hasher param_1)

{
  Hasher HVar1;
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  HVar1.unknown = unaff_x20[1].str;
  Swift::String::hash(param_1,unaff_x20[1]);
  Swift::Hasher::_combine((__uint64)unaff_x20[2].str,HVar1);
  return;
}



/* Address: 0x100a841c0 | switchD_100a83e7c::caseD_84 */

void switchD_100a83e7c::caseD_84(void)

{
  Hasher HVar1;
  Hasher HVar2;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_68,*unaff_x20);
  HVar2.unknown = unaff_x20[1].str;
  Swift::String::hash((Hasher)auStack_68,unaff_x20[1]);
  HVar1.unknown = unaff_x20[2].str;
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100a84218 | FUN_100a84218 */

uint FUN_100a84218(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_100a845a8(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x100a84260 | switchD_100a83e7c::caseD_5c */

void switchD_100a83e7c::caseD_5c(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x100a84268 | switchD_100a83ff4::caseD_3d */

undefined1  [16]
switchD_100a83ff4::caseD_3d(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 *puVar2;
  
  pcVar3 = param_3;
  Swift::_StringGuts::grow(0x27,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar5.bridgeObject = param_2.unknown;
  SVar5.str = param_1;
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar3;
  Swift::String::append(SVar5,SVar9);
  SVar4.bridgeObject = (void *)0x8000000100dbab10;
  SVar4.str = (char *)0xd00000000000001c;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar3;
  Swift::String::append(SVar4,SVar10);
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar3;
  Swift::String::append(SVar5,SVar11);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x2029;
  puVar2 = &SUB_e200000000000000;
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar3;
  Swift::String::append(SVar6,SVar12);
  FUN_1005aacac();
  SVar7.bridgeObject = puVar2;
  SVar7.str = param_3;
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar3;
  Swift::String::append(SVar7,SVar13);
  _swift_bridgeObjectRelease(puVar2);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2e27;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar3;
  Swift::String::append(SVar8,SVar14);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x27;
  return auVar1;
}



/* Address: 0x100a8436c | FUN_100a8436c */

bool FUN_100a8436c(_StringGuts param_1,_StringGuts param_2,int param_3,undefined *param_4,
                  undefined *param_5,int param_6)

{
  bool bVar1;
  
  if (((param_1.unknown != param_4) || (param_2.unknown != param_5)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_4), !bVar1)) {
    return false;
  }
  return param_3 == param_6;
}



/* Address: 0x100a843c0 | FUN_100a843c0 */

void FUN_100a843c0(Hasher param_1,Hasher param_2,void *param_3,__uint32 param_4)

{
  String SVar1;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2.unknown;
  Swift::String::hash(param_1,SVar1);
  Swift::Hasher::_combine(param_4,param_2);
  return;
}



/* Address: 0x100a843ec | switchD_100a83ff4::caseD_21 */

void switchD_100a83ff4::caseD_21(Hasher param_1,void *param_2,Hasher param_3)

{
  String SVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1.unknown;
  Swift::String::hash((Hasher)auStack_78,SVar1);
  Swift::Hasher::_combine((__uint32)param_3.unknown,param_1);
  Swift::Hasher::_finalize(param_3);
  return;
}



/* Address: 0x100a84450 | FUN_100a84450 */

void FUN_100a84450(void)

{
  uint uVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  Hasher HVar4;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  uVar1 = *(uint *)&unaff_x20[1].str;
  HVar4.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_78,SVar2);
  Swift::Hasher::_combine(uVar1,HVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100a844b0 | FUN_100a844b0 */

void FUN_100a844b0(Hasher param_1)

{
  __uint32 _Var1;
  Hasher HVar2;
  String *unaff_x20;
  
  HVar2.unknown = unaff_x20->str;
  _Var1 = *(__uint32 *)&unaff_x20[1].str;
  Swift::String::hash(param_1,*unaff_x20);
  Swift::Hasher::_combine(_Var1,HVar2);
  return;
}



/* Address: 0x100a844e4 | FUN_100a844e4 */

void FUN_100a844e4(__int64 param_1)

{
  uint uVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  Hasher HVar4;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  uVar1 = *(uint *)&unaff_x20[1].str;
  HVar4.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_78,SVar2);
  Swift::Hasher::_combine(uVar1,HVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100a84540 | FUN_100a84540 */

void FUN_100a84540(void)

{
  undefined8 *unaff_x20;
  
  switchD_100a83ff4::caseD_3d(*unaff_x20,unaff_x20[1],*(undefined4 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100a8454c | FUN_100a8454c */

bool FUN_100a8454c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 2);
  lVar2 = param_2[2];
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar3)) {
    return false;
  }
  return iVar1 == (int)lVar2;
}



/* Address: 0x100a845a8 | FUN_100a845a8 */

bool FUN_100a845a8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar1)) {
      return param_1[4] == param_2[4];
    }
  }
  return false;
}



/* Address: 0x100a84624 | thunk_FUN_100a84628 */

void thunk_FUN_100a84628(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92260,&DAT_100f2dec0);
  DAT_100ff6fc0 = pTVar1;
  return;
}



/* Address: 0x100a84628 | FUN_100a84628 */

void FUN_100a84628(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92260;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92260,&DAT_100f2dec0);
  DAT_100ff6fc0 = pTVar1;
  return;
}



/* Address: 0x100a84668 | thunk_FUN_100a8466c */

void thunk_FUN_100a8466c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c922c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c922c8,&DAT_100f2df40);
  DAT_100ff6fc8 = pTVar1;
  return;
}



/* Address: 0x100a8466c | FUN_100a8466c */

void FUN_100a8466c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c922c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c922c8,&DAT_100f2df40);
  DAT_100ff6fc8 = pTVar1;
  return;
}



/* Address: 0x100a846ac | thunk_FUN_100a846b0 */

void thunk_FUN_100a846b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92398;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92398,&DAT_100f2dfc8);
  DAT_100ff6fd0 = pTVar1;
  return;
}



/* Address: 0x100a846b0 | FUN_100a846b0 */

void FUN_100a846b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92398;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92398,&DAT_100f2dfc8);
  DAT_100ff6fd0 = pTVar1;
  return;
}



/* Address: 0x100a846f0 | FUN_100a846f0 */

void FUN_100a846f0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x100a84728 | FUN_100a84728 */

undefined1 * FUN_100a84728(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  _swift_errorRetain(uVar1);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100a847b4 | FUN_100a847b4 */

undefined1 * FUN_100a847b4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _swift_errorRetain(uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_errorRelease(uVar1);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



/* Address: 0x100a8486c | FUN_100a8486c */

undefined1 * FUN_100a8486c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



/* Address: 0x100a848e0 | FUN_100a848e0 */

int FUN_100a848e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100a84928 | FUN_100a84928 */

void FUN_100a84928(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100a84978 | FUN_100a84978 */

undefined1  [16] FUN_100a84978(void)

{
  return ZEXT816(0x100f2de38);
}



/* Address: 0x100a84988 | FUN_100a84988 */

undefined1  [16] FUN_100a84988(void)

{
  return ZEXT816(0x100f2dec0);
}



/* Address: 0x100a84998 | FUN_100a84998 */

void FUN_100a84998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100a849ac | FUN_100a849ac */

undefined1  [16] FUN_100a849ac(void)

{
  return ZEXT816(0x100f2df40);
}



/* Address: 0x100a849bc | FUN_100a849bc */

void FUN_100a849bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a849d0 | FUN_100a849d0 */

undefined1  [16] FUN_100a849d0(void)

{
  return ZEXT816(0x100f2dfc8);
}



/* Address: 0x100a849e0 | FUN_100a849e0 */

undefined1  [16] FUN_100a849e0(void)

{
  return ZEXT816(0x100f2e060);
}



/* Address: 0x100a849f0 | thunk_FUN_100a849f4 */

void thunk_FUN_100a849f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92478,&DAT_100f2e060);
  DAT_100ff6fd8 = pTVar1;
  return;
}



/* Address: 0x100a849f4 | FUN_100a849f4 */

void FUN_100a849f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92478,&DAT_100f2e060);
  DAT_100ff6fd8 = pTVar1;
  return;
}



/* Address: 0x100a84a34 | thunk_FUN_1004289a8 */

void thunk_FUN_1004289a8(void)

{
  thunk_FUN_1004289a8();
  return;
}



/* Address: 0x100a84a38 | thunk_FUN_1005a9570 */

void thunk_FUN_1005a9570(void)

{
  thunk_FUN_1005a9570();
  return;
}



/* Address: 0x100a84a3c | thunk_FUN_100428918 */

void thunk_FUN_100428918(void)

{
  thunk_FUN_100428918();
  return;
}



/* Address: 0x100a84a40 | FUN_100a84a40 */

void FUN_100a84a40(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccaf88);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x30);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a84b38;
                    /* WARNING: Could not recover jumptable at 0x000100a84b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,uVar4,param_2,param_3 & 0x101,param_6,param_8);
  return;
}



/* Address: 0x100a84b38 | FUN_100a84b38 */

void FUN_100a84b38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a84b9c;
  }
  else {
    pcVar1 = FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a84b9c | FUN_100a84b9c */

void FUN_100a84b9c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2e100;
  _swift_allocObject(&DAT_100f2e100,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a674a0;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c924c0,unaff_x22 + 0x10,
                &DAT_100c924d0,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a84ca8 | FUN_100a84ca8 */

void FUN_100a84ca8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccaf90);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x38);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a84da4;
                    /* WARNING: Could not recover jumptable at 0x000100a84da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4,param_2,param_3 & 0x101ffffffff00ff,param_6,param_8);
  return;
}



/* Address: 0x100a84da4 | FUN_100a84da4 */

void FUN_100a84da4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a84e08;
  }
  else {
    pcVar1 = thunk_FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a84e08 | FUN_100a84e08 */

void FUN_100a84e08(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2e128;
  _swift_allocObject(&DAT_100f2e128,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a67944;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c924e8,unaff_x22 + 0x10,
                &DAT_100c924f8,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a84f14 | FUN_100a84f14 */

void FUN_100a84f14(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x48);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a8500c;
                    /* WARNING: Could not recover jumptable at 0x000100a85008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(plVar5,uVar4,param_2,param_3 & 0x101,param_6,param_8);
  return;
}



/* Address: 0x100a8500c | FUN_100a8500c */

void FUN_100a8500c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a85070;
  }
  else {
    pcVar1 = thunk_FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a85070 | FUN_100a85070 */

void FUN_100a85070(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2e150;
  _swift_allocObject(&DAT_100f2e150,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a67944;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c92510,unaff_x22 + 0x10,
                &DAT_100c92520,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a8517c | FUN_100a8517c */

void FUN_100a8517c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_6 + 0x90);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,param_4,0,&UNK_100c92530,0,&UNK_100c92538,0,param_5,param_6);
  return;
}



/* Address: 0x100a85238 | FUN_100a85238 */

void FUN_100a85238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_5 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100838ee4;
                    /* WARNING: Could not recover jumptable at 0x000100a852d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,1,param_4,param_5);
  return;
}



/* Address: 0x100a852d4 | FUN_100a852d4 */

void FUN_100a852d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a85368 | FUN_100a85368 */

void FUN_100a85368(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 in_x3;
  long in_x5;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,in_x3,0x100ccaf78,&TargetProtocolRequirement_100ccafa0)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,in_x3,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad3c)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,uVar2,uVar3,0x100ccad0c,&TargetProtocolRequirement_100ccad1c);
  lVar5 = *(long *)(in_x5 + 8);
  piVar6 = *(int **)(lVar5 + 0x60);
  uVar2 = 0;
  _swift_checkMetadataState(0,uVar3);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar5);
  return;
}



/* Address: 0x100a85488 | FUN_100a85488 */

void FUN_100a85488(void)

{
  FUN_100a86180(&TargetProtocolRequirement_100ccaf88);
  return;
}



/* Address: 0x100a85494 | FUN_100a85494 */

void FUN_100a85494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccaf78,&TargetProtocolRequirement_100ccaf88);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a85368(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a8554c | FUN_100a8554c */

void FUN_100a8554c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a855e0 | FUN_100a855e0 */

void FUN_100a855e0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
  _swift_getAssociatedConformanceWitness
            (param_6,uVar2,uVar3,0x100ccad0c,&TargetProtocolRequirement_100ccad34);
  if (param_2 == '\x01') {
    piVar6 = *(int **)(param_6 + 0x20);
    uVar2 = 0;
    _swift_checkMetadataState(0,uVar3);
    iVar1 = *piVar6;
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005cd444;
                    /* WARNING: Could not recover jumptable at 0x000100a85710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(0,uVar2,param_6);
    return;
  }
  lVar5 = *(long *)(param_6 + 8);
  piVar6 = *(int **)(lVar5 + 0x60);
  uVar2 = 0;
  _swift_checkMetadataState(0,uVar3);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar5);
  return;
}



/* Address: 0x100a85778 | FUN_100a85778 */

void FUN_100a85778(void)

{
  FUN_100a86180(&TargetProtocolRequirement_100ccaf90);
  return;
}



/* Address: 0x100a85784 | FUN_100a85784 */

void FUN_100a85784(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar1,0x100ccaf78,&TargetProtocolRequirement_100ccaf90);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a855e0(param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),uVar1,
                uVar2,uVar6);
  return;
}



/* Address: 0x100a8583c | FUN_100a8583c */

void FUN_100a8583c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(long *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccaf98);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = lVar2 + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  piVar6 = *(int **)(param_8 + 0x40);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a85938;
                    /* WARNING: Could not recover jumptable at 0x000100a85934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,uVar4,param_2,param_3 & 0x101ffffffff00ff,param_6,param_8);
  return;
}



/* Address: 0x100a85938 | FUN_100a85938 */

void FUN_100a85938(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a8599c;
  }
  else {
    pcVar1 = thunk_FUN_100a67564;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a8599c | FUN_100a8599c */

void FUN_100a8599c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0xa0),uVar4);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f2e178;
  _swift_allocObject(&DAT_100f2e178,uVar8 + lVar3,uVar7 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar8,uVar1,uVar4);
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a67944;
  FUN_100a92a24(plVar6,*(undefined8 *)(unaff_x22 + 0x50),&DAT_100c92558,unaff_x22 + 0x10,
                &DAT_100c92568,puVar5,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a85aa8 | FUN_100a85aa8 */

void FUN_100a85aa8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 in_x3;
  long in_x5;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,in_x3,0x100ccaf78,&TargetProtocolRequirement_100ccafa0)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,in_x3,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad4c)
  ;
  _swift_getAssociatedConformanceWitness
            (in_x5,uVar2,uVar3,0x100ccad0c,&TargetProtocolRequirement_100ccad24);
  lVar5 = *(long *)(in_x5 + 8);
  piVar6 = *(int **)(lVar5 + 0x60);
  uVar2 = 0;
  _swift_checkMetadataState(0,uVar3);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a85bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar5);
  return;
}



/* Address: 0x100a85bc8 | FUN_100a85bc8 */

void FUN_100a85bc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}


