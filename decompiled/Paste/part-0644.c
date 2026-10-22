/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006cf594 | FUN_1006cf594 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cf594(void)

{
  String SVar1;
  
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x7a37;
  _DAT_101058100 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cf5bc | FUN_1006cf5bc */

undefined8 * FUN_1006cf5bc(void)

{
  if (DAT_100fdce68 != -1) {
    _swift_once(&DAT_100fdce68,FUN_1006cf594);
  }
  return &DAT_101058100;
}



/* Address: 0x1006cf5fc | FUN_1006cf5fc */

void FUN_1006cf5fc(void)

{
  FUN_1006cf61c(&DAT_100fdce68,&DAT_101058100,&DAT_101058108,FUN_1006cf594);
  return;
}



/* Address: 0x1006cf61c | FUN_1006cf61c */

undefined1  [16]
FUN_1006cf61c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_4);
  }
  uVar1 = *param_2;
  uVar2 = *param_3;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1006cf674 | thunk_FUN_1006cf678 */

void thunk_FUN_1006cf678(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71798,&DAT_100ef8f80);
  DAT_100fdce70 = pTVar1;
  return;
}



/* Address: 0x1006cf678 | FUN_1006cf678 */

void FUN_1006cf678(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71798,&DAT_100ef8f80);
  DAT_100fdce70 = pTVar1;
  return;
}



/* Address: 0x1006cf6b8 | thunk_FUN_1006cf6bc */

void thunk_FUN_1006cf6bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c717d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c717d8,&DAT_100ef8f80);
  DAT_100fdce78 = pTVar1;
  return;
}



/* Address: 0x1006cf6bc | FUN_1006cf6bc */

void FUN_1006cf6bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c717d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c717d8,&DAT_100ef8f80);
  DAT_100fdce78 = pTVar1;
  return;
}



/* Address: 0x1006cf6fc | thunk_FUN_1006cf700 */

void thunk_FUN_1006cf700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71800,&DAT_100ef8f80);
  DAT_100fdce80 = pTVar1;
  return;
}



/* Address: 0x1006cf700 | FUN_1006cf700 */

void FUN_1006cf700(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdce80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71800,&DAT_100ef8f80);
  DAT_100fdce80 = pTVar1;
  return;
}



/* Address: 0x1006cf740 | FUN_1006cf740 */

undefined1  [16] FUN_1006cf740(void)

{
  return ZEXT816(0x100ef8f80);
}



/* Address: 0x1006cf750 | thunk_FUN_1006ccc88 */

void thunk_FUN_1006ccc88(void)

{
  FUN_1006ccc88();
  return;
}



/* Address: 0x1006cf754 | thunk_FUN_1006cccc8 */

void thunk_FUN_1006cccc8(void)

{
  thunk_FUN_1006cccc8();
  return;
}



/* Address: 0x1006cf758 | FUN_1006cf758 */

void FUN_1006cf758(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*param_2;
  FUN_100a33360();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x1006cf784 | FUN_1006cf784 */

void FUN_1006cf784(ulong *param_1,char *param_2,void *param_3)

{
  void *pvVar1;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  String SVar11;
  void *pvVar2;
  
  SVar11.bridgeObject = param_3;
  SVar11.str = param_2;
  SVar11 = Swift::String::lowercased(SVar11);
  pvVar2 = SVar11.bridgeObject;
  if (DAT_100fdce88 != -1) {
    _swift_once(&DAT_100fdce88,FUN_1006d12d0);
  }
  pvVar1 = DAT_101058110;
  if (*(long *)((long)DAT_101058110 + 0x10) == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DAT_101058110);
    FUN_10046483c();
    if (((ulong)SVar11.bridgeObject & 1) == 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      pbVar3 = (byte *)(*(long *)((long)pvVar1 + 0x38) + (long)SVar11.str * 0x38);
      uVar9 = (ulong)*pbVar3;
      uVar10 = *(ulong *)(pbVar3 + 8);
      uVar4 = *(ulong *)(pbVar3 + 0x10);
      uVar5 = *(ulong *)(pbVar3 + 0x18);
      uVar6 = *(ulong *)(pbVar3 + 0x20);
      uVar7 = *(ulong *)(pbVar3 + 0x28);
      uVar8 = *(ulong *)(pbVar3 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1006bcff0(uVar5,uVar6,uVar7,uVar8);
    }
    _swift_bridgeObjectRelease(pvVar2);
    pvVar2 = pvVar1;
  }
  _swift_bridgeObjectRelease(pvVar2);
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  return;
}



/* Address: 0x1006cf8b8 | FUN_1006cf8b8 */

bool FUN_1006cf8b8(char *param_1)

{
  undefined *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  bool bVar5;
  char *unaff_x20;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  
  if ((*unaff_x20 == '\n' || *param_1 == '\n') || *unaff_x20 == *param_1) {
    _Var8.unknown = *(undefined **)(param_1 + 8);
    _Var2.unknown = *(undefined **)(param_1 + 0x10);
    if ((((*(undefined **)(unaff_x20 + 8) == _Var8.unknown &&
           *(undefined **)(unaff_x20 + 0x10) == _Var2.unknown) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)(unaff_x20 + 8),
                             (_StringGuts)*(undefined **)(unaff_x20 + 0x10),
                             (_StringComparisonResult)(__int8)_Var8.unknown), bVar5)) ||
        ((_Var8.unknown == &DAT_0000002a && (_Var2.unknown == (undefined *)0xe100000000000000)))) ||
       (bVar5 = Swift::_stringCompareWithSmolCheck(_Var8,_Var2,(_StringComparisonResult)0x2a), bVar5
       )) {
      _Var8.unknown = *(undefined **)(param_1 + 0x20);
      if (_Var8.unknown == (undefined *)0x0) {
        return true;
      }
      puVar6 = *(undefined **)(unaff_x20 + 0x20);
      if (puVar6 != (undefined *)0x0) {
        _Var9.unknown = *(undefined **)(param_1 + 0x18);
        _Var2.unknown = *(undefined **)(param_1 + 0x28);
        _Var3.unknown = *(undefined **)(param_1 + 0x30);
        puVar7 = *(undefined **)(unaff_x20 + 0x18);
        puVar1 = *(undefined **)(unaff_x20 + 0x28);
        puVar4 = *(undefined **)(unaff_x20 + 0x30);
        FUN_1006bcff0(puVar7,puVar6,puVar1,puVar4);
        FUN_1006bcff0(puVar7,puVar6,puVar1,puVar4);
        _swift_bridgeObjectRetain(_Var8.unknown);
        FUN_1006bcff0(_Var9.unknown,_Var8.unknown,_Var2.unknown,_Var3.unknown);
        _swift_bridgeObjectRelease(puVar4);
        if ((_Var9.unknown == puVar7) && (_Var8.unknown == puVar6)) {
          _swift_bridgeObjectRelease_n(_Var8.unknown,2);
          _swift_bridgeObjectRelease(puVar6);
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var9,_Var8,(_StringComparisonResult)(__int8)puVar7);
          _swift_bridgeObjectRelease_n(_Var8.unknown,2);
          _swift_bridgeObjectRelease(puVar6);
          if (!bVar5) {
            _swift_bridgeObjectRelease(_Var3.unknown);
            FUN_1006bf814(puVar7,puVar6,puVar1,puVar4);
            return false;
          }
        }
        _swift_bridgeObjectRelease(puVar6);
        if ((_Var2.unknown == puVar1) && (_Var3.unknown == puVar4)) {
          _swift_bridgeObjectRelease(_Var3.unknown);
          _swift_bridgeObjectRelease(puVar4);
          return true;
        }
        bVar5 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var3,(_StringComparisonResult)(__int8)puVar1);
        _swift_bridgeObjectRelease(_Var3.unknown);
        _swift_bridgeObjectRelease(puVar4);
        return bVar5;
      }
    }
  }
  return false;
}



/* Address: 0x1006cfacc | FUN_1006cfacc */

undefined8 FUN_1006cfacc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1006bcff0(uVar1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return uVar1;
}



/* Address: 0x1006cfb18 | FUN_1006cfb18 */

void FUN_1006cfb18(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  bVar3 = param_6 != 0;
  uVar2 = 0;
  if (bVar3) {
    uVar2 = param_5;
  }
  uVar1 = 0;
  if (bVar3) {
    uVar1 = param_7;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(long *)(param_1 + 0x20) = param_6;
  uVar2 = 0;
  if (bVar3) {
    uVar2 = param_8;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



/* Address: 0x1006cfb3c | FUN_1006cfb3c */

void FUN_1006cfb3c(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1006d34a4(&local_58);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x1006cfb84 | thunk_FUN_1006d3440 */

void thunk_FUN_1006d3440(void)

{
  FUN_1006d3440();
  return;
}



/* Address: 0x1006cfb88 | thunk_FUN_1006cfb8c */

uint thunk_FUN_1006cfb8c(undefined8 param_1)

{
  if (DAT_100fdcfc8 != -1) {
    _swift_once(&DAT_100fdcfc8,switchD_1006d0104::caseD_ba);
  }
  FUN_1006e3df8(param_1,DAT_101058118);
  return ((uint)param_1 ^ 0xffffffff) & 1;
}



/* Address: 0x1006cfb8c | FUN_1006cfb8c */

uint FUN_1006cfb8c(undefined8 param_1)

{
  if (DAT_100fdcfc8 != -1) {
    _swift_once(&DAT_100fdcfc8,switchD_1006d0104::caseD_ba);
  }
  FUN_1006e3df8(param_1,DAT_101058118);
  return ((uint)param_1 ^ 0xffffffff) & 1;
}



/* Address: 0x1006cfbec | FUN_1006cfbec */

void FUN_1006cfbec(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = *unaff_x20;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  local_60 = uVar2;
  uStack_58 = uVar3;
  FUN_10000ca28(&local_60,auStack_70);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  return;
}



/* Address: 0x1006cfc74 | FUN_1006cfc74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1006cfc74(Hasher param_1,byte ****param_2,byte ****param_3,void *param_4)

{
  byte ****ppppbVar1;
  Hasher into;
  byte ***pppbVar2;
  byte ***pppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  ulong uVar6;
  long lVar7;
  byte ***unaff_x19;
  Hasher HVar8;
  Hasher unaff_x20;
  byte ****unaff_x21;
  byte ****ppppbVar9;
  byte ****unaff_x22;
  byte ****ppppbVar10;
  byte ***unaff_x23;
  byte ****ppppbVar11;
  byte ****unaff_x24;
  byte ****ppppbVar12;
  undefined8 unaff_x30;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  byte ***local_50;
  byte ***pppbStack_48;
  
  ppppbVar1 = &local_50;
  ppppbVar4 = (byte ****)&DAT_eb000000006e6f69;
  ppppbVar11 = *(byte *****)((long)unaff_x20.unknown + 0x20);
  ppppbVar9 = unaff_x21;
  ppppbVar10 = unaff_x22;
  ppppbVar12 = unaff_x24;
  HVar8.unknown = unaff_x20.unknown;
  if (ppppbVar11 != (byte ****)0x0) {
    ppppbVar10 = *(byte *****)((long)unaff_x20.unknown + 0x28);
    ppppbVar9 = *(byte *****)((long)unaff_x20.unknown + 0x30);
    ppppbVar12 = *(byte *****)((long)unaff_x20.unknown + 0x18);
    ppppbVar5 = (byte ****)&DAT_746163696c707061;
    uVar6 = (ulong)(byte)*unaff_x20.unknown;
    lVar7 = (ulong)(&switchD_1006cfcd4::switchdataD_100c71850)[uVar6] * 4 + 0x1006cfcd8;
    switch(*unaff_x20.unknown) {
    case 0:
      goto switchD_1006cfcd4_caseD_0;
    default:
      ppppbVar4 = (byte ****)&DAT_e500000000000000;
    case 0x34:
    case 0x42:
    case 0x7a:
    case 0x94:
    case 0xa2:
    case 0xbc:
    case 0xca:
    case 0xe4:
    case 0xf2:
      ppppbVar5 = (byte ****)0x69647561;
      goto switchD_1006cfcd4_caseD_32;
    case 2:
      goto switchD_1006cfcd4_caseD_2;
    case 3:
      goto switchD_1006cfcd4_caseD_3;
    case 4:
    case 0x19:
      goto switchD_1006cfcd4_caseD_4;
    case 5:
      goto switchD_1006cfcd4_caseD_5;
    case 6:
      goto switchD_1006cfcd4_caseD_6;
    case 7:
    case 0xc0:
      goto switchD_1006cfcd4_caseD_7;
    case 8:
      goto switchD_1006cfcd4_caseD_8;
    case 9:
      goto switchD_1006cfcd4_caseD_9;
    case 10:
      goto switchD_1006cfcd4_caseD_a;
    case 0xb:
      goto switchD_1006cfcd4_caseD_b;
    case 0xd:
      goto switchD_1006cfcd4_caseD_d;
    case 0xe:
      goto switchD_1006cfcd4_caseD_e;
    case 0xf:
      goto switchD_1006cfcd4_caseD_f;
    case 0x10:
      goto switchD_1006cfcd4_caseD_10;
    case 0x11:
      goto switchD_1006cfcd4_caseD_11;
    case 0x12:
      goto switchD_1006cfcd4_caseD_12;
    case 0x13:
      goto switchD_1006cfcd4_caseD_13;
    case 0x14:
      goto switchD_1006cfcd4_caseD_14;
    case 0x15:
      goto switchD_1006cfcd4_caseD_15;
    case 0x16:
      goto switchD_1006cfcd4_caseD_16;
    case 0x18:
      goto switchD_1006cfcd4_caseD_18;
    case 0x1a:
    case 0xfc:
      break;
    case 0x1b:
    case 0x6c:
      goto switchD_1006cfcd4_caseD_1b;
    case 0x1c:
      goto switchD_1006cfcd4_caseD_1c;
    case 0x1d:
      goto switchD_1006cfcd4_caseD_1d;
    case 0x1e:
      goto switchD_1006cfcd4_caseD_1e;
    case 0x1f:
      goto switchD_1006cfcd4_caseD_1f;
    case 0x20:
      goto switchD_1006cfcd4_caseD_20;
    case 0x24:
      goto switchD_1006cfcd4_caseD_24;
    case 0x25:
    case 0x39:
    case 0x4d:
    case 0x61:
    case 0x69:
    case 0x71:
    case 0x85:
    case 0x99:
    case 0xad:
    case 0xc1:
    case 0xd5:
    case 0xe9:
    case 0xfd:
      goto switchD_1006cfcd4_caseD_25;
    case 0x26:
    case 0x3a:
    case 0x4e:
    case 0x62:
    case 0x6a:
    case 0x72:
    case 0x86:
    case 0x9a:
    case 0xae:
    case 0xc2:
    case 0xd6:
    case 0xd8:
    case 0xea:
    case 0xfe:
      goto switchD_1006cfcd4_caseD_26;
    case 0x28:
      param_1.unknown = (undefined *)(ulong)(byte)*unaff_x20.unknown;
      FUN_1006d00cc();
      _DAT_eb000000006e6f69 = (byte ****)param_1.unknown;
      _DAT_eb000000006e6f71 = param_2;
      goto switchD_1006cfd14_caseD_6d00bc;
    case 0x29:
    case 0x51:
    case 0x89:
    case 0xb1:
    case 0xd9:
      goto switchD_1006cfcd4_caseD_29;
    case 0x2a:
    case 0x52:
    case 0x8a:
    case 0xb2:
    case 0xda:
      goto switchD_1006cfcd4_caseD_2a;
    case 0x32:
    case 0x5a:
    case 0x5c:
    case 0x92:
    case 0xba:
    case 0xe2:
      goto switchD_1006cfcd4_caseD_32;
    case 0x38:
      goto switchD_1006cfcd4_caseD_38;
    case 0x3c:
      goto switchD_1006cfcd4_caseD_3c;
    case 0x3d:
    case 0x75:
    case 0x9d:
    case 0xc5:
    case 0xed:
      pppbVar2 = *(byte ****)param_1.unknown;
      pppbVar3 = *(byte ****)((long)param_1.unknown + 8);
      FUN_1006d3440(pppbVar2,pppbVar3);
      _DAT_eb000000006e6f69 = (byte ****)CONCAT71(DAT_eb000000006e6f69_1,(char)pppbVar2);
      auVar25._8_8_ = pppbVar3;
      auVar25._0_8_ = pppbVar2;
      return auVar25;
    case 0x3e:
    case 0x76:
    case 0x9e:
    case 0xc6:
    case 0xee:
      goto switchD_1006cfcd4_caseD_3e;
    case 0x3f:
    case 0x6f:
    case 0x77:
    case 0x9f:
    case 199:
    case 0xef:
      goto switchD_1006d0104_caseD_1;
    case 0x48:
      goto switchD_1006cfcd4_caseD_48;
    case 0x49:
    case 0x81:
      goto switchD_1006cfcd4_caseD_49;
    case 0x4a:
    case 0x82:
    case 0xaa:
    case 0xd2:
    case 0xfa:
      goto switchD_1006cfcd4_caseD_4a;
    case 0x4c:
      goto switchD_1006cfcd4_caseD_4c;
    case 0x50:
      goto switchD_1006cfcd4_caseD_50;
    case 0x60:
    case 0x68:
    case 0x70:
      goto switchD_1006cfcd4_caseD_60;
    case 100:
    case 0x84:
      goto switchD_1006cfcd4_caseD_64;
    case 0x65:
      goto switchD_1006cfcd4_caseD_65;
    case 0x66:
      goto switchD_1006cfcd4_caseD_66;
    case 0x6d:
      goto switchD_1006cfcd4_caseD_6d;
    case 0x6e:
      goto switchD_1006cfcd4_caseD_6e;
    case 0x74:
    case 0x88:
    case 0x9c:
      goto switchD_1006cfcd4_caseD_74;
    case 0x80:
      goto switchD_1006cfcd4_caseD_80;
    case 0x98:
      goto switchD_1006cfcd4_caseD_98;
    case 0xa8:
      goto switchD_1006cfcd4_caseD_a8;
    case 0xa9:
    case 0xd1:
    case 0xf9:
      goto switchD_1006cfcd4_caseD_a9;
    case 0xac:
      goto switchD_1006cfcd4_caseD_ac;
    case 0xb0:
      goto switchD_1006cfcd4_caseD_b0;
    case 0xc4:
      goto switchD_1006cfcd4_caseD_c4;
    case 0xd0:
      goto switchD_1006cfcd4_caseD_d0;
    case 0xd4:
      goto switchD_1006cfcd4_caseD_d4;
    case 0xe8:
      goto switchD_1006cfcd4_caseD_e8;
    case 0xec:
      goto switchD_1006cfcd4_caseD_ec;
    case 0xf8:
      goto switchD_1006cfcd4_caseD_f8;
    }
  }
  uVar6 = (ulong)(byte)*unaff_x20.unknown;
  ppppbVar5 = (byte ****)0x6c707061;
switchD_1006cfcd4_caseD_a8:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x636900000000);
switchD_1006cfcd4_caseD_66:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffffffff | 0x7461000000000000);
switchD_1006cfcd4_caseD_1f:
  lVar7 = (ulong)(&switchD_1006cfd14::switchdataD_100c7185b)[uVar6] * 4 + 0x1006cfd18;
switchD_1006cfcd4_caseD_18:
  into.unknown = param_1.unknown;
  switch(lVar7) {
  case 0x1006cfd18:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
  case 0x1006cfd1c:
switchD_1006cfcd4_caseD_e8:
    ppppbVar5 = (byte ****)0x69647561;
  case 0x1006cfd24:
    goto switchD_1006cfd14_caseD_6cfd24;
  case 0x1006cfd28:
    goto switchD_1006cfd14_caseD_6cfd28;
  case 0x1006cfd2c:
switchD_1006cfcd4_caseD_4:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
    ppppbVar5 = (byte ****)0x67616d69;
  case 0x1006cfd38:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6500000000);
  case 0x1006cfd3c:
    goto switchD_1006cfcd4_caseD_1d;
  case 0x1006cfd40:
switchD_1006cfcd4_caseD_9:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
    ppppbVar5 = (byte ****)0x65646976;
switchD_1006cfcd4_caseD_d4:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6f00000000);
    goto switchD_1006cfcd4_caseD_0;
  case 0x1006cfd54:
switchD_1006cfcd4_caseD_2:
    ppppbVar4 = (byte ****)&DAT_e700000000000000;
switchD_1006cfcd4_caseD_1b:
    ppppbVar5 = (byte ****)0x7865;
  case 0x1006cfd5c:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff | 0x656c706d610000);
switchD_1006cfcd4_caseD_6d:
switchD_1006cfcd4_caseD_0:
    local_50 = (byte ***)ppppbVar5;
    pppbStack_48 = (byte ***)ppppbVar4;
switchD_1006cfcd4_caseD_4a:
    param_1.unknown = (undefined *)0x2f;
switchD_1006cfd14_caseD_6cfdec:
    param_2 = (byte ****)0xe100000000000000;
switchD_1006cfcd4_caseD_65:
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1.unknown;
    SVar31.bridgeObject = param_4;
    SVar31.str = (char *)param_3;
    Swift::String::append(SVar13,SVar31);
    param_1.unknown = *(undefined **)((long)unaff_x20.unknown + 8);
    param_2 = *(byte *****)((long)unaff_x20.unknown + 0x10);
    goto switchD_1006cfcd4_caseD_3c;
  case 0x1006cfd6c:
switchD_1006cfcd4_caseD_3:
    ppppbVar4 = (byte ****)&DAT_e400000000000000;
switchD_1006cfcd4_caseD_1c:
    ppppbVar5 = (byte ****)0x746e6f66;
switchD_1006cfcd4_caseD_26:
    goto switchD_1006cfcd4_caseD_0;
  case 0x1006cfd7c:
switchD_1006cfcd4_caseD_7:
    ppppbVar5 = (byte ****)0x746c756d;
switchD_1006cfcd4_caseD_20:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffff | 0x7261706900000000);
  case 0x1006cfd8c:
    ppppbVar4 = (byte ****)0x74;
switchD_1006cfcd4_caseD_16:
    ppppbVar4 = (byte ****)((ulong)ppppbVar4 & 0xffffffffffff | 0xe900000000000000);
    goto switchD_1006cfcd4_caseD_1e;
  case 0x1006cfd98:
switchD_1006cfcd4_caseD_5:
    ppppbVar4 = (byte ****)&DAT_e700000000000000;
    ppppbVar5 = (byte ****)0x67617373656d;
  case 0x1006cfda8:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffffffff | 0x65000000000000);
switchD_1006cfcd4_caseD_ac:
    goto switchD_1006cfcd4_caseD_0;
  case 0x1006cfdb0:
switchD_1006cfcd4_caseD_6:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
    ppppbVar5 = (byte ****)0x6f6d;
  case 0x1006cfdb8:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffff0000ffff | 0x65640000);
  case 0x1006cfdbc:
    goto switchD_1006cfd14_caseD_6cfdbc;
  case 0x1006cfdc4:
switchD_1006cfcd4_caseD_a:
    ppppbVar4 = (byte ****)0xe300000000000000;
    ppppbVar5 = (byte ****)0x796e61;
  case 0x1006cfdd0:
    goto switchD_1006cfd14_caseD_6cfdd0;
  case 0x1006cfdd4:
switchD_1006cfcd4_caseD_8:
    ppppbVar4 = (byte ****)&DAT_e400000000000000;
    ppppbVar5 = (byte ****)0x74786574;
    goto switchD_1006cfcd4_caseD_0;
  case 0x1006cfdec:
    goto switchD_1006cfd14_caseD_6cfdec;
  case 0x1006cfe28:
    goto switchD_1006cfcd4_caseD_d;
  case 0x1006cfe30:
    goto switchD_1006cfd14_caseD_6cfe30;
  case 0x1006cfe38:
    goto switchD_1006cfd14_caseD_6cfe38;
  case 0x1006cfe40:
switchD_1006cfcd4_caseD_e:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
    ppppbVar5 = (byte ****)0x67616d69;
    goto switchD_1006cfcd4_caseD_64;
  case 0x1006cfe54:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
  case 0x1006cfe58:
switchD_1006cfcd4_caseD_d0:
    ppppbVar5 = (byte ****)0x6976;
  case 0x1006cfe5c:
    goto switchD_1006cfd14_caseD_6cfe5c;
  case 0x1006cfe68:
    ppppbVar4 = (byte ****)&DAT_e700000000000000;
switchD_1006cfcd4_caseD_10:
    ppppbVar5 = (byte ****)0x6c706d617865;
    goto switchD_1006cfcd4_caseD_48;
  case 0x1006cfe80:
    ppppbVar4 = (byte ****)&DAT_e400000000000000;
switchD_1006cfcd4_caseD_11:
    ppppbVar5 = (byte ****)0x746e6f66;
  case 0x1006cfe8c:
    break;
  case 0x1006cfe90:
    ppppbVar5 = (byte ****)0x746c756d;
  case 0x1006cfe98:
switchD_1006cfcd4_caseD_15:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffff | 0x7261706900000000);
    ppppbVar4 = (byte ****)0xe900000000000074;
switchD_1006cfcd4_caseD_13:
    break;
  case 0x1006cfeac:
switchD_1006cfcd4_caseD_4c:
    ppppbVar4 = (byte ****)&DAT_e700000000000000;
    ppppbVar5 = (byte ****)0x656d;
switchD_1006cfcd4_caseD_b:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffff0000ffff | 0x73730000);
  case 0x1006cfeb8:
    ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x676100000000);
  case 0x1006cfebc:
    goto switchD_1006cfcd4_caseD_25;
  case 0x1006cfec4:
    ppppbVar4 = (byte ****)&DAT_e500000000000000;
    ppppbVar5 = (byte ****)0x6c65646f6d;
    break;
  case 0x1006cfed8:
    ppppbVar4 = (byte ****)0xe300000000000000;
switchD_1006cfcd4_caseD_38:
    ppppbVar5 = (byte ****)0x796e61;
    break;
  case 0x1006cfee8:
    ppppbVar4 = (byte ****)&DAT_e400000000000000;
  case 0x1006cfeec:
    ppppbVar5 = (byte ****)0x74786574;
    break;
  case 0x1006cfefc:
    goto switchD_1006cfd14_caseD_6cfefc;
  case 0x1006cff1c:
    goto switchD_1006cfd14_caseD_6cff1c;
  case 0x1006cff4c:
    *(byte *****)((long)unaff_x20.unknown + 8) = unaff_x24;
    *(byte ****)unaff_x20.unknown = pppbStack_48;
    *(byte *****)((long)unaff_x20.unknown + 0x18) = unaff_x22;
    *(byte ****)((long)unaff_x20.unknown + 0x10) = unaff_x23;
switchD_1006cfcd4_caseD_ec:
    *(undefined **)((long)unaff_x20.unknown + 0x28) = unaff_x20.unknown;
    *(byte *****)((long)unaff_x20.unknown + 0x20) = unaff_x21;
switchD_1006cfcd4_caseD_29:
    *(byte ****)((long)unaff_x20.unknown + 0x30) = unaff_x19;
  case 0x1006cff68:
switchD_1006cfcd4_caseD_3e:
switchD_1006cfcd4_caseD_6e:
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = param_1.unknown;
    return auVar21;
  case 0x1006cff98:
switchD_1006cfcd4_caseD_80:
    param_1.unknown = unaff_x20.unknown;
switchD_1006cfcd4_caseD_49:
    FUN_1006d00cc();
  case 0x1006cffa0:
    goto switchD_1006cfcd4_caseD_a9;
  case 0x1006cffac:
    goto switchD_1006cfd14_caseD_6cffac;
  case 0x1006cffb0:
    goto switchD_1006cfd14_caseD_6cffb0;
  case 0x1006cffd8:
    ppppbVar1 = (byte ****)&stack0xffffffffffffff90;
  case 0x1006cffdc:
    goto switchD_1006cfd14_caseD_6cffdc;
  case 0x1006cffe0:
    goto switchD_1006cfd14_caseD_6cffe0;
  case 0x1006cfff8:
    goto switchD_1006cfd14_caseD_6cfff8;
  case 0x1006d0028:
    param_3 = (byte ****)(ulong)(byte)*unaff_x20.unknown;
    Swift::Hasher::init((__int64)param_1.unknown);
    FUN_1006d00cc();
    param_1.unknown = (undefined *)&pppbStack_48;
    unaff_x20.unknown = (undefined *)param_2;
  case 0x1006d0048:
    goto switchD_1006cfd14_caseD_6d0048;
  case 0x1006d00bc:
switchD_1006cfd14_caseD_6d00bc:
switchD_1006cfd14_caseD_6d00c0:
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = param_1.unknown;
    return auVar26;
  case 0x1006d00c0:
    goto switchD_1006cfd14_caseD_6d00c0;
  case 0x1006d00e8:
switchD_1006d0104_caseD_1:
    param_2 = (byte ****)&DAT_e500000000000000;
    param_1.unknown = (undefined *)0x69647561;
switchD_1006d0104_caseD_1c:
    auVar27._0_8_ = (ulong)param_1.unknown & 0xffff0000ffffffff | 0x6f00000000;
    auVar27._8_8_ = param_2;
    return auVar27;
  case 0x1006d0114:
    goto switchD_1006d0104_caseD_1c;
  }
switchD_1006cfd14_caseD_6cfef4:
  local_50 = (byte ***)ppppbVar5;
  pppbStack_48 = (byte ***)ppppbVar4;
switchD_1006cfd14_caseD_6cfefc:
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = (char *)0x2f;
  SVar36.bridgeObject = param_4;
  SVar36.str = (char *)param_3;
  Swift::String::append(SVar18,SVar36);
  param_1.unknown = *(undefined **)((long)unaff_x20.unknown + 8);
  param_2 = *(byte *****)((long)unaff_x20.unknown + 0x10);
switchD_1006cfcd4_caseD_24:
LAB_1006cff10:
  SVar19.bridgeObject = param_2;
  SVar19.str = param_1.unknown;
  SVar37.bridgeObject = param_4;
  SVar37.str = (char *)param_3;
  Swift::String::append(SVar19,SVar37);
  param_1.unknown = (undefined *)local_50;
  param_2 = (byte ****)pppbStack_48;
switchD_1006cfd14_caseD_6cff1c:
switchD_1006cfcd4_caseD_74:
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = param_1.unknown;
  return auVar20;
switchD_1006cfcd4_caseD_32:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6f00000000);
switchD_1006cfcd4_caseD_2a:
  goto switchD_1006cfcd4_caseD_0;
switchD_1006cfd14_caseD_6cffdc:
  *(undefined1 **)((long)ppppbVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)ppppbVar1 + 0x18) = unaff_x30;
  goto switchD_1006cfd14_caseD_6cffe0;
switchD_1006cfcd4_caseD_a9:
  into.unknown = (undefined *)&pppbStack_48;
  param_3 = (byte ****)param_1.unknown;
  unaff_x20.unknown = (undefined *)param_2;
switchD_1006cfd14_caseD_6cffac:
  param_2 = param_3;
  goto switchD_1006cfd14_caseD_6cffb0;
switchD_1006cfcd4_caseD_1e:
  goto switchD_1006cfcd4_caseD_0;
switchD_1006cfd14_caseD_6cfdbc:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6c00000000);
  goto switchD_1006cfcd4_caseD_0;
switchD_1006cfcd4_caseD_1d:
  goto switchD_1006cfcd4_caseD_0;
switchD_1006cfd14_caseD_6cfdd0:
  goto switchD_1006cfcd4_caseD_0;
switchD_1006cfcd4_caseD_3c:
  SVar14.bridgeObject = param_2;
  SVar14.str = param_1.unknown;
  SVar32.bridgeObject = param_4;
  SVar32.str = (char *)param_3;
  Swift::String::append(SVar14,SVar32);
switchD_1006cfcd4_caseD_f:
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x203b;
  SVar33.bridgeObject = param_4;
  SVar33.str = (char *)param_3;
  Swift::String::append(SVar15,SVar33);
switchD_1006cfcd4_caseD_14:
  param_1.unknown = (undefined *)ppppbVar12;
switchD_1006cfcd4_caseD_b0:
  param_2 = ppppbVar11;
switchD_1006cfcd4_caseD_98:
  SVar16.bridgeObject = param_2;
  SVar16.str = param_1.unknown;
  SVar34.bridgeObject = param_4;
  SVar34.str = (char *)param_3;
  Swift::String::append(SVar16,SVar34);
  param_1.unknown = (undefined *)0x3d;
switchD_1006cfcd4_caseD_d:
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = param_1.unknown;
  SVar35.bridgeObject = param_4;
  SVar35.str = (char *)param_3;
  Swift::String::append(SVar17,SVar35);
switchD_1006cfd14_caseD_6cfe30:
  param_1.unknown = (undefined *)ppppbVar10;
switchD_1006cfd14_caseD_6cfe38:
  param_2 = ppppbVar9;
  goto LAB_1006cff10;
switchD_1006cfd14_caseD_6cfe5c:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff00000000ffff | 0x6f65640000);
  goto switchD_1006cfd14_caseD_6cfef4;
switchD_1006cfcd4_caseD_25:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffffffff | 0x65000000000000);
  goto switchD_1006cfd14_caseD_6cfef4;
switchD_1006cfcd4_caseD_64:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6500000000);
switchD_1006cfcd4_caseD_12:
  goto switchD_1006cfd14_caseD_6cfef4;
switchD_1006cfcd4_caseD_48:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffffffffffff | 0x65000000000000);
switchD_1006cfcd4_caseD_60:
  goto switchD_1006cfd14_caseD_6cfef4;
switchD_1006cfd14_caseD_6cfd24:
  ppppbVar5 = (byte ****)((ulong)ppppbVar5 & 0xffff0000ffffffff | 0x6f00000000);
switchD_1006cfd14_caseD_6cfd28:
  goto switchD_1006cfd14_caseD_6cfef4;
switchD_1006cfd14_caseD_6cffe0:
  HVar8.unknown = param_1.unknown;
switchD_1006cfcd4_caseD_c4:
  param_3 = (byte ****)(ulong)(byte)*unaff_x20.unknown;
  FUN_1006d00cc();
  unaff_x20.unknown = (undefined *)param_2;
switchD_1006cfd14_caseD_6cfff8:
  param_2 = param_3;
  SVar29.bridgeObject = unaff_x20.unknown;
  SVar29.str = (char *)param_2;
  Swift::String::hash(HVar8,SVar29);
switchD_1006cfcd4_caseD_50:
  _swift_bridgeObjectRelease(unaff_x20.unknown);
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = unaff_x20.unknown;
  return auVar23;
switchD_1006cfd14_caseD_6cffb0:
  SVar28.bridgeObject = unaff_x20.unknown;
  SVar28.str = (char *)param_2;
  Swift::String::hash(into,SVar28);
switchD_1006cfcd4_caseD_f8:
  _swift_bridgeObjectRelease();
  auVar22._0_8_ = Swift::Hasher::_finalize(unaff_x20);
  auVar22._8_8_ = param_2;
  return auVar22;
switchD_1006cfd14_caseD_6d0048:
  SVar30.bridgeObject = unaff_x20.unknown;
  SVar30.str = (char *)param_3;
  Swift::String::hash(param_1,SVar30);
  _swift_bridgeObjectRelease();
  auVar24._0_8_ = Swift::Hasher::_finalize(unaff_x20);
  auVar24._8_8_ = param_3;
  return auVar24;
}



/* Address: 0x1006cff30 | FUN_1006cff30 */

void FUN_1006cff30(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1006d331c(&local_58);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x1006cff78 | FUN_1006cff78 */

void FUN_1006cff78(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_1006d00cc();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1006cffd8 | switchD_1006cfd14::caseD_6cffd8 */

void switchD_1006cfd14::caseD_6cffd8(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_1006d00cc();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1006d0018 | FUN_1006d0018 */

void FUN_1006d0018(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_1006d00cc();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1006d0074 | FUN_1006d0074 */

void FUN_1006d0074(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1006d3440(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1006d00a0 | FUN_1006d00a0 */

void FUN_1006d00a0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_1006d00cc();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006d00c8 | thunk_FUN_1006d00cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
thunk_FUN_1006d00cc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  _StringGuts minimumCapacity;
  Set<undefined> SVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined4 *puVar6;
  _StringComparisonResult expecting;
  undefined8 *puVar7;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined4 *unaff_x22;
  undefined8 in_register_00005008;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  String SVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_30 [16];
  
  puVar6 = _DAT_746163696c707081;
  pcVar4 = _DAT_746163696c707079;
  expecting.value = (__int8)param_4;
  _Var5.unknown = &DAT_eb000000006e6f69;
  minimumCapacity.unknown = &DAT_746163696c707061;
  puVar7 = (undefined8 *)(param_2 & 0xff);
  switch(puVar7) {
  default:
    _Var5.unknown = &DAT_e500000000000000;
  case (undefined8 *)0x1e:
  case (undefined8 *)0x2c:
  case (undefined8 *)0x64:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x8c:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xce:
  case (undefined8 *)0xdc:
  case (undefined8 *)0xf6:
    minimumCapacity.unknown = (undefined *)0x69647561;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x44:
  case (undefined8 *)0x46:
  case (undefined8 *)0x7c:
  case (undefined8 *)0xa4:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xf4:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6f00000000);
  case (undefined8 *)0x14:
  case (undefined8 *)0x3c:
  case (undefined8 *)0x74:
  case (undefined8 *)0x9c:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xec:
    auVar8._8_8_ = _Var5.unknown;
    auVar8._0_8_ = minimumCapacity.unknown;
    return auVar8;
  case (undefined8 *)0x2:
    _Var5.unknown = &DAT_e700000000000000;
    minimumCapacity.unknown = (undefined *)0x7865;
  case (undefined8 *)0xd2:
    auVar11._0_8_ = (ulong)minimumCapacity.unknown & 0xffff | 0x656c706d610000;
    auVar11._8_8_ = _Var5.unknown;
    return auVar11;
  case (undefined8 *)0x3:
    auVar12._8_8_ = &DAT_e400000000000000;
    auVar12._0_8_ = 0x746e6f66;
    return auVar12;
  case (undefined8 *)0x4:
  case (undefined8 *)0xe6:
    _Var5.unknown = &DAT_e500000000000000;
    minimumCapacity.unknown = (undefined *)0x67616d69;
  case (undefined8 *)0x92:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6500000000);
  case (undefined8 *)0x50:
    auVar9._8_8_ = _Var5.unknown;
    auVar9._0_8_ = minimumCapacity.unknown;
    return auVar9;
  case (undefined8 *)0x5:
  case (undefined8 *)0x56:
    _Var5.unknown = &DAT_e700000000000000;
    minimumCapacity.unknown = (undefined *)0x67617373656d;
  case (undefined8 *)0x57:
    auVar14._0_8_ = (ulong)minimumCapacity.unknown & 0xffffffffffff | 0x65000000000000;
    auVar14._8_8_ = _Var5.unknown;
    return auVar14;
  case (undefined8 *)0x6:
    _Var5.unknown = &DAT_e500000000000000;
    minimumCapacity.unknown = (undefined *)0x6f6d;
  case (undefined8 *)0x10:
  case (undefined8 *)0x24:
  case (undefined8 *)0x38:
  case (undefined8 *)0x4c:
  case (undefined8 *)0x54:
  case (undefined8 *)0x5c:
  case (undefined8 *)0x70:
  case (undefined8 *)0x84:
  case (undefined8 *)0x98:
  case (undefined8 *)0xac:
  case (undefined8 *)0xc0:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xe8:
  case (undefined8 *)0xfc:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffffffff0000ffff | 0x65640000);
  case (undefined8 *)0xaa:
    auVar15._0_8_ = (ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6c00000000;
    auVar15._8_8_ = _Var5.unknown;
    return auVar15;
  case (undefined8 *)0x7:
    _Var5.unknown = (undefined *)0xe900000000000074;
    minimumCapacity.unknown = (undefined *)0x746c756d;
  case (undefined8 *)0xbe:
    auVar13._0_8_ = (ulong)minimumCapacity.unknown & 0xffffffff | 0x7261706900000000;
    auVar13._8_8_ = _Var5.unknown;
    return auVar13;
  case (undefined8 *)0x8:
    auVar17._8_8_ = &DAT_e400000000000000;
    auVar17._0_8_ = 0x74786574;
    return auVar17;
  case (undefined8 *)0x9:
    auVar10._8_8_ = &DAT_e500000000000000;
    auVar10._0_8_ = 0x6f65646976;
    return auVar10;
  case (undefined8 *)0xa:
    _Var5.unknown = (undefined *)0xe300000000000000;
    minimumCapacity.unknown = (undefined *)0x796e61;
  case (undefined8 *)0x0:
    auVar16._8_8_ = _Var5.unknown;
    auVar16._0_8_ = minimumCapacity.unknown;
    return auVar16;
  case (undefined8 *)0x12:
    *(undefined1 *)puVar7 = 0;
    puVar7[1] = 0x2a;
    puVar7[2] = 0xe100000000000000;
    param_1 = 0;
    in_register_00005008 = 0;
  case (undefined8 *)0xfa:
    puVar7[4] = in_register_00005008;
    puVar7[3] = param_1;
    puVar7[6] = in_register_00005008;
    puVar7[5] = param_1;
    auVar24._8_8_ = &DAT_eb000000006e6f69;
    auVar24._0_8_ = &DAT_746163696c707061;
    return auVar24;
  case (undefined8 *)0x29:
  case (undefined8 *)0x59:
  case (undefined8 *)0x61:
  case (undefined8 *)0x89:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xd9:
    puVar7[1] = &switchD_1006d0104::switchdataD_100c71866;
    puVar7[2] = 0xe100000000000000;
    puVar7[4] = 0;
    puVar7[3] = 0;
    puVar7[6] = 0;
    puVar7[5] = 0;
    auVar25._8_8_ = &DAT_eb000000006e6f69;
    auVar25._0_8_ = &DAT_746163696c707061;
    return auVar25;
  case (undefined8 *)0x34:
  case (undefined8 *)0x6c:
  case (undefined8 *)0x94:
  case (undefined8 *)0xbc:
  case (undefined8 *)0xe4:
switchD_1006d0104_caseD_34:
    _Var5.unknown = (undefined *)unaff_x19;
    expecting.value = (__int8)param_4;
    unaff_x19 = (undefined4 *)_Var5.unknown;
  case (undefined8 *)0x4f:
    bVar1 = Swift::_stringCompareWithSmolCheck(minimumCapacity,_Var5,expecting);
    minimumCapacity.unknown = (undefined *)(ulong)bVar1;
  case (undefined8 *)0x26:
    uVar2 = (uint)minimumCapacity.unknown;
    puVar6 = (undefined4 *)_Var5.unknown;
    break;
  case (undefined8 *)0x3a:
    FUN_100004640(&DAT_746163696c707061,_DAT_746163696c707079);
    Swift::Encoder::_singleValueContainer();
    FUN_1006cfc74();
    FUN_10007d048(&stack0x00000008,in_stack_00000020);
    SVar22.bridgeObject = puVar6;
    SVar22.str = pcVar4;
    _Var5.unknown = (undefined *)puVar6;
    Swift::SingleValueEncodingContainer::_encode(SVar22);
    unaff_x22 = puVar6;
  case (undefined8 *)0x27:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x87:
    minimumCapacity.unknown = (undefined *)unaff_x22;
  case (undefined8 *)0xaf:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xff:
    _swift_bridgeObjectRelease(minimumCapacity.unknown);
    puVar7 = &stack0x00000008;
    FUN_100004594(puVar7);
    auVar23._8_8_ = _Var5.unknown;
    auVar23._0_8_ = puVar7;
    return auVar23;
  case (undefined8 *)0x4e:
  case (undefined8 *)0x6e:
    auVar19._8_8_ = &DAT_eb000000006e6f69;
    auVar19._0_8_ = &DAT_746163696c707061;
    return auVar19;
  case (undefined8 *)0x82:
switchD_1006d0104_caseD_82:
    auVar18._8_8_ = _Var5.unknown;
    auVar18._0_8_ = minimumCapacity.unknown;
    return auVar18;
  case (undefined8 *)0x96:
    minimumCapacity.unknown = (undefined *)(ulong)DAT_746163696c707061;
    param_4 = (undefined4 *)(ulong)DAT_eb000000006e6f69;
    thunk_FUN_1006d00cc();
    unaff_x20 = (undefined4 *)_Var5.unknown;
    thunk_FUN_1006d00cc();
    unaff_x19 = (undefined4 *)_Var5.unknown;
    if ((undefined4 *)minimumCapacity.unknown != param_4 || (undefined4 *)_Var5.unknown != unaff_x20
       ) goto switchD_1006d0104_caseD_34;
    uVar2 = 1;
    puVar6 = unaff_x20;
    break;
  case (undefined8 *)0x9a:
    goto switchD_1006d0104_caseD_9a;
  case (undefined8 *)0xba:
    register0x00000008 = (BADSPACEBASE *)auStack_30;
  case (undefined8 *)0x32:
    minimumCapacity.unknown = (undefined *)0x10;
  case (undefined8 *)0x4a:
  case (undefined8 *)0x52:
  case (undefined8 *)0x5a:
    SVar3 = Swift::Set::init(minimumCapacity.unknown);
    *(undefined **)((long)register0x00000008 + 8) = SVar3.unknown;
    unaff_x19 = &DAT_100fdcff8;
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),DAT_100fdcff8);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),DAT_100fdcffc);
  case (undefined8 *)0x36:
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[2];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0xfb:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
  case (undefined8 *)0xf:
  case (undefined8 *)0x23:
  case (undefined8 *)0x37:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x53:
  case (undefined8 *)0x5b:
  case (undefined8 *)0x6f:
  case (undefined8 *)0x83:
  case (undefined8 *)0x97:
  case (undefined8 *)0xab:
  case (undefined8 *)0xbf:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xe7:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[3]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[4]);
  case (undefined8 *)0x22:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[5]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[6]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[7]);
  case (undefined8 *)0xe:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[8]);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[9];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0x5e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x86:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[10]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[0xb]);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xc];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0xd6:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xd];
  case (undefined8 *)0x13:
  case (undefined8 *)0x3b:
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xc3:
  case (undefined8 *)0xeb:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),_Var5.unknown);
  case (undefined8 *)0x28:
  case (undefined8 *)0x60:
  case (undefined8 *)0x88:
  case (undefined8 *)0xb0:
  case (undefined8 *)0xd8:
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xe];
  case (undefined8 *)0x58:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),_Var5.unknown);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xf];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    DAT_101058118 = *(undefined8 *)((long)register0x00000008 + 8);
  case (undefined8 *)0x6a:
  case (undefined8 *)0x33:
  case (undefined8 *)0x6b:
  case (undefined8 *)0x93:
  case (undefined8 *)0xbb:
  case (undefined8 *)0xe3:
    auVar20._8_8_ = _Var5.unknown;
    auVar20._0_8_ = minimumCapacity.unknown;
    return auVar20;
  case (undefined8 *)0xe2:
    FUN_1006d37b8(&stack0x00000008);
    if (unaff_x21 == 0) {
      puVar7[1] = in_stack_00000010;
      *puVar7 = in_stack_00000008;
      puVar7[3] = in_stack_00000020;
      puVar7[2] = in_stack_00000018;
      puVar7[5] = in_stack_00000030;
      puVar7[4] = in_stack_00000028;
      puVar7[6] = in_stack_00000038;
    }
  case (undefined8 *)0xae:
  case (undefined8 *)0xfe:
    auVar21._8_8_ = _Var5.unknown;
    auVar21._0_8_ = minimumCapacity.unknown;
    return auVar21;
  }
  _Var5.unknown = (undefined *)puVar6;
  _swift_bridgeObjectRelease(unaff_x19);
  _swift_bridgeObjectRelease(unaff_x20);
  minimumCapacity.unknown = (undefined *)(ulong)(uVar2 & 1);
switchD_1006d0104_caseD_9a:
  goto switchD_1006d0104_caseD_82;
}



/* Address: 0x1006d00cc | FUN_1006d00cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1006d00cc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  _StringGuts minimumCapacity;
  Set<undefined> SVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined4 *puVar6;
  _StringComparisonResult expecting;
  undefined8 *puVar7;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined4 *unaff_x22;
  undefined8 in_register_00005008;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  String SVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_30 [16];
  
  puVar6 = _DAT_746163696c707081;
  pcVar4 = _DAT_746163696c707079;
  expecting.value = (__int8)param_4;
  _Var5.unknown = &DAT_eb000000006e6f69;
  minimumCapacity.unknown = &DAT_746163696c707061;
  puVar7 = (undefined8 *)(param_2 & 0xff);
  switch(puVar7) {
  default:
    _Var5.unknown = &DAT_e500000000000000;
  case (undefined8 *)0x1e:
  case (undefined8 *)0x2c:
  case (undefined8 *)0x64:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x8c:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xce:
  case (undefined8 *)0xdc:
  case (undefined8 *)0xf6:
    minimumCapacity.unknown = (undefined *)0x69647561;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x44:
  case (undefined8 *)0x46:
  case (undefined8 *)0x7c:
  case (undefined8 *)0xa4:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xf4:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6f00000000);
  case (undefined8 *)0x14:
  case (undefined8 *)0x3c:
  case (undefined8 *)0x74:
  case (undefined8 *)0x9c:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xec:
    auVar8._8_8_ = _Var5.unknown;
    auVar8._0_8_ = minimumCapacity.unknown;
    return auVar8;
  case (undefined8 *)0x2:
    _Var5.unknown = &DAT_e700000000000000;
    minimumCapacity.unknown = (undefined *)0x7865;
  case (undefined8 *)0xd2:
    auVar11._0_8_ = (ulong)minimumCapacity.unknown & 0xffff | 0x656c706d610000;
    auVar11._8_8_ = _Var5.unknown;
    return auVar11;
  case (undefined8 *)0x3:
    auVar12._8_8_ = &DAT_e400000000000000;
    auVar12._0_8_ = 0x746e6f66;
    return auVar12;
  case (undefined8 *)0x4:
  case (undefined8 *)0xe6:
    _Var5.unknown = &DAT_e500000000000000;
    minimumCapacity.unknown = (undefined *)0x67616d69;
  case (undefined8 *)0x92:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6500000000);
  case (undefined8 *)0x50:
    auVar9._8_8_ = _Var5.unknown;
    auVar9._0_8_ = minimumCapacity.unknown;
    return auVar9;
  case (undefined8 *)0x5:
  case (undefined8 *)0x56:
    _Var5.unknown = &DAT_e700000000000000;
    minimumCapacity.unknown = (undefined *)0x67617373656d;
  case (undefined8 *)0x57:
    auVar14._0_8_ = (ulong)minimumCapacity.unknown & 0xffffffffffff | 0x65000000000000;
    auVar14._8_8_ = _Var5.unknown;
    return auVar14;
  case (undefined8 *)0x6:
    _Var5.unknown = &DAT_e500000000000000;
    minimumCapacity.unknown = (undefined *)0x6f6d;
  case (undefined8 *)0x10:
  case (undefined8 *)0x24:
  case (undefined8 *)0x38:
  case (undefined8 *)0x4c:
  case (undefined8 *)0x54:
  case (undefined8 *)0x5c:
  case (undefined8 *)0x70:
  case (undefined8 *)0x84:
  case (undefined8 *)0x98:
  case (undefined8 *)0xac:
  case (undefined8 *)0xc0:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xe8:
  case (undefined8 *)0xfc:
    minimumCapacity.unknown =
         (undefined *)((ulong)minimumCapacity.unknown & 0xffffffff0000ffff | 0x65640000);
  case (undefined8 *)0xaa:
    auVar15._0_8_ = (ulong)minimumCapacity.unknown & 0xffff0000ffffffff | 0x6c00000000;
    auVar15._8_8_ = _Var5.unknown;
    return auVar15;
  case (undefined8 *)0x7:
    _Var5.unknown = (undefined *)0xe900000000000074;
    minimumCapacity.unknown = (undefined *)0x746c756d;
  case (undefined8 *)0xbe:
    auVar13._0_8_ = (ulong)minimumCapacity.unknown & 0xffffffff | 0x7261706900000000;
    auVar13._8_8_ = _Var5.unknown;
    return auVar13;
  case (undefined8 *)0x8:
    auVar17._8_8_ = &DAT_e400000000000000;
    auVar17._0_8_ = 0x74786574;
    return auVar17;
  case (undefined8 *)0x9:
    auVar10._8_8_ = &DAT_e500000000000000;
    auVar10._0_8_ = 0x6f65646976;
    return auVar10;
  case (undefined8 *)0xa:
    _Var5.unknown = (undefined *)0xe300000000000000;
    minimumCapacity.unknown = (undefined *)0x796e61;
  case (undefined8 *)0x0:
    auVar16._8_8_ = _Var5.unknown;
    auVar16._0_8_ = minimumCapacity.unknown;
    return auVar16;
  case (undefined8 *)0x12:
    *(undefined1 *)puVar7 = 0;
    puVar7[1] = 0x2a;
    puVar7[2] = 0xe100000000000000;
    param_1 = 0;
    in_register_00005008 = 0;
  case (undefined8 *)0xfa:
    puVar7[4] = in_register_00005008;
    puVar7[3] = param_1;
    puVar7[6] = in_register_00005008;
    puVar7[5] = param_1;
    auVar24._8_8_ = &DAT_eb000000006e6f69;
    auVar24._0_8_ = &DAT_746163696c707061;
    return auVar24;
  case (undefined8 *)0x29:
  case (undefined8 *)0x59:
  case (undefined8 *)0x61:
  case (undefined8 *)0x89:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xd9:
    puVar7[1] = &switchD_1006d0104::switchdataD_100c71866;
    puVar7[2] = 0xe100000000000000;
    puVar7[4] = 0;
    puVar7[3] = 0;
    puVar7[6] = 0;
    puVar7[5] = 0;
    auVar25._8_8_ = &DAT_eb000000006e6f69;
    auVar25._0_8_ = &DAT_746163696c707061;
    return auVar25;
  case (undefined8 *)0x34:
  case (undefined8 *)0x6c:
  case (undefined8 *)0x94:
  case (undefined8 *)0xbc:
  case (undefined8 *)0xe4:
switchD_1006d0104_caseD_34:
    _Var5.unknown = (undefined *)unaff_x19;
    expecting.value = (__int8)param_4;
    unaff_x19 = (undefined4 *)_Var5.unknown;
  case (undefined8 *)0x4f:
    bVar1 = Swift::_stringCompareWithSmolCheck(minimumCapacity,_Var5,expecting);
    minimumCapacity.unknown = (undefined *)(ulong)bVar1;
  case (undefined8 *)0x26:
    uVar2 = (uint)minimumCapacity.unknown;
    puVar6 = (undefined4 *)_Var5.unknown;
    break;
  case (undefined8 *)0x3a:
    FUN_100004640(&DAT_746163696c707061,_DAT_746163696c707079);
    Swift::Encoder::_singleValueContainer();
    FUN_1006cfc74();
    FUN_10007d048(&stack0x00000008,in_stack_00000020);
    SVar22.bridgeObject = puVar6;
    SVar22.str = pcVar4;
    _Var5.unknown = (undefined *)puVar6;
    Swift::SingleValueEncodingContainer::_encode(SVar22);
    unaff_x22 = puVar6;
  case (undefined8 *)0x27:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x87:
    minimumCapacity.unknown = (undefined *)unaff_x22;
  case (undefined8 *)0xaf:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xff:
    _swift_bridgeObjectRelease(minimumCapacity.unknown);
    puVar7 = &stack0x00000008;
    FUN_100004594(puVar7);
    auVar23._8_8_ = _Var5.unknown;
    auVar23._0_8_ = puVar7;
    return auVar23;
  case (undefined8 *)0x4e:
  case (undefined8 *)0x6e:
    auVar19._8_8_ = &DAT_eb000000006e6f69;
    auVar19._0_8_ = &DAT_746163696c707061;
    return auVar19;
  case (undefined8 *)0x82:
switchD_1006d0104_caseD_82:
    auVar18._8_8_ = _Var5.unknown;
    auVar18._0_8_ = minimumCapacity.unknown;
    return auVar18;
  case (undefined8 *)0x96:
    minimumCapacity.unknown = (undefined *)(ulong)DAT_746163696c707061;
    param_4 = (undefined4 *)(ulong)DAT_eb000000006e6f69;
    thunk_FUN_1006d00cc();
    unaff_x20 = (undefined4 *)_Var5.unknown;
    thunk_FUN_1006d00cc();
    unaff_x19 = (undefined4 *)_Var5.unknown;
    if ((undefined4 *)minimumCapacity.unknown != param_4 || (undefined4 *)_Var5.unknown != unaff_x20
       ) goto switchD_1006d0104_caseD_34;
    uVar2 = 1;
    puVar6 = unaff_x20;
    break;
  case (undefined8 *)0x9a:
    goto switchD_1006d0104_caseD_9a;
  case (undefined8 *)0xba:
    register0x00000008 = (BADSPACEBASE *)auStack_30;
  case (undefined8 *)0x32:
    minimumCapacity.unknown = (undefined *)0x10;
  case (undefined8 *)0x4a:
  case (undefined8 *)0x52:
  case (undefined8 *)0x5a:
    SVar3 = Swift::Set::init(minimumCapacity.unknown);
    *(undefined **)((long)register0x00000008 + 8) = SVar3.unknown;
    unaff_x19 = &DAT_100fdcff8;
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),DAT_100fdcff8);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),DAT_100fdcffc);
  case (undefined8 *)0x36:
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[2];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0xfb:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
  case (undefined8 *)0xf:
  case (undefined8 *)0x23:
  case (undefined8 *)0x37:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x53:
  case (undefined8 *)0x5b:
  case (undefined8 *)0x6f:
  case (undefined8 *)0x83:
  case (undefined8 *)0x97:
  case (undefined8 *)0xab:
  case (undefined8 *)0xbf:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xe7:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[3]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[4]);
  case (undefined8 *)0x22:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[5]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[6]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[7]);
  case (undefined8 *)0xe:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[8]);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[9];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0x5e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x86:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[10]);
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),unaff_x19[0xb]);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xc];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
  case (undefined8 *)0xd6:
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xd];
  case (undefined8 *)0x13:
  case (undefined8 *)0x3b:
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xc3:
  case (undefined8 *)0xeb:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),_Var5.unknown);
  case (undefined8 *)0x28:
  case (undefined8 *)0x60:
  case (undefined8 *)0x88:
  case (undefined8 *)0xb0:
  case (undefined8 *)0xd8:
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xe];
  case (undefined8 *)0x58:
    FUN_1006e60f8((undefined1 *)((long)register0x00000008 + 4),_Var5.unknown);
    _Var5.unknown = (undefined *)(ulong)(uint)unaff_x19[0xf];
    minimumCapacity.unknown = (undefined *)((long)register0x00000008 + 4);
    FUN_1006e60f8(minimumCapacity.unknown,_Var5.unknown);
    DAT_101058118 = *(undefined8 *)((long)register0x00000008 + 8);
  case (undefined8 *)0x6a:
  case (undefined8 *)0x33:
  case (undefined8 *)0x6b:
  case (undefined8 *)0x93:
  case (undefined8 *)0xbb:
  case (undefined8 *)0xe3:
    auVar20._8_8_ = _Var5.unknown;
    auVar20._0_8_ = minimumCapacity.unknown;
    return auVar20;
  case (undefined8 *)0xe2:
    FUN_1006d37b8(&stack0x00000008);
    if (unaff_x21 == 0) {
      puVar7[1] = in_stack_00000010;
      *puVar7 = in_stack_00000008;
      puVar7[3] = in_stack_00000020;
      puVar7[2] = in_stack_00000018;
      puVar7[5] = in_stack_00000030;
      puVar7[4] = in_stack_00000028;
      puVar7[6] = in_stack_00000038;
    }
  case (undefined8 *)0xae:
  case (undefined8 *)0xfe:
    auVar21._8_8_ = _Var5.unknown;
    auVar21._0_8_ = minimumCapacity.unknown;
    return auVar21;
  }
  _Var5.unknown = (undefined *)puVar6;
  _swift_bridgeObjectRelease(unaff_x19);
  _swift_bridgeObjectRelease(unaff_x20);
  minimumCapacity.unknown = (undefined *)(ulong)(uVar2 & 1);
switchD_1006d0104_caseD_9a:
  goto switchD_1006d0104_caseD_82;
}



/* Address: 0x1006d01d4 | FUN_1006d01d4 */

bool FUN_1006d01d4(byte *param_1,_StringGuts param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  
  _Var2.unknown = (undefined *)(ulong)*param_1;
  puVar4 = (undefined *)(ulong)(byte)*param_2.unknown;
  thunk_FUN_1006d00cc();
  _Var3.unknown = param_2.unknown;
  thunk_FUN_1006d00cc();
  if (_Var2.unknown == puVar4 && param_2.unknown == _Var3.unknown) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (_Var2,param_2,(_StringComparisonResult)(__int8)puVar4);
  }
  _swift_bridgeObjectRelease(param_2.unknown);
  _swift_bridgeObjectRelease(_Var3.unknown);
  return bVar1;
}



/* Address: 0x1006d0258 | FUN_1006d0258 */

void FUN_1006d0258(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  thunk_FUN_1006d00cc();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006d0280 | FUN_1006d0280 */

void FUN_1006d0280(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_1006d00cc(*unaff_x20);
  return;
}



/* Address: 0x1006d0288 | switchD_1006d0104::caseD_ba */

void switchD_1006d0104::caseD_ba(void)

{
  undefined1 auStack_2c [4];
  undefined *local_28;
  
  local_28 = (undefined *)Swift::Set::init(0x10);
  FUN_1006e60f8(auStack_2c,DAT_100fdcff8);
  FUN_1006e60f8(auStack_2c,DAT_100fdcffc);
  FUN_1006e60f8(auStack_2c,DAT_100fdd000);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd004);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd008);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd00c);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd010);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd014);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd018);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd01c);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd020);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd024);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd028);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd02c);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd030);
  FUN_1006e60f8(auStack_2c,uRam0000000100fdd034);
  DAT_101058118 = local_28;
  return;
}



/* Address: 0x1006d03d8 | thunk_FUN_1006cfc74 */

void thunk_FUN_1006cfc74(void)

{
  FUN_1006cfc74();
  return;
}



/* Address: 0x1006d03dc | FUN_1006d03dc */

void FUN_1006d03dc(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1006d37b8(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    param_1[6] = local_28;
  }
  return;
}



/* Address: 0x1006d0428 | FUN_1006d0428 */

void FUN_1006d0428(long param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x20);
  FUN_100004640(param_1,pcVar1);
  Swift::Encoder::_singleValueContainer();
  FUN_1006cfc74();
  FUN_10007d048(auStack_68,local_50);
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  Swift::SingleValueEncodingContainer::_encode(SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1006d04d8 | switchD_1006d0104::caseD_12 */

void switchD_1006d0104::caseD_12(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d04f8 | FUN_1006d04f8 */

void FUN_1006d04f8(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d051c | FUN_1006d051c */

void FUN_1006d051c(undefined1 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0540 | FUN_1006d0540 */

void FUN_1006d0540(undefined1 *param_1)

{
  *param_1 = 3;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0564 | FUN_1006d0564 */

void FUN_1006d0564(undefined1 *param_1)

{
  *param_1 = 4;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0588 | FUN_1006d0588 */

void FUN_1006d0588(undefined1 *param_1)

{
  *param_1 = 5;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d05ac | FUN_1006d05ac */

void FUN_1006d05ac(undefined1 *param_1)

{
  *param_1 = 6;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d05d0 | FUN_1006d05d0 */

void FUN_1006d05d0(undefined1 *param_1)

{
  *param_1 = 7;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d05f4 | FUN_1006d05f4 */

void FUN_1006d05f4(undefined1 *param_1)

{
  *param_1 = 8;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0618 | FUN_1006d0618 */

void FUN_1006d0618(undefined1 *param_1)

{
  *param_1 = 9;
  *(undefined8 *)(param_1 + 8) = 0x2a;
  *(undefined8 *)(param_1 + 0x10) = 0xe100000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d063c | FUN_1006d063c */

void FUN_1006d063c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x726f776962612d78;
  *(undefined8 *)(param_1 + 0x10) = 0xe900000000000064;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d066c | FUN_1006d066c */

void FUN_1006d066c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x7261656572662d78;
  *(undefined8 *)(param_1 + 0x10) = 0xe900000000000063;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d069c | FUN_1006d069c */

void FUN_1006d069c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x67676f;
  *(undefined8 *)(param_1 + 0x10) = 0xe300000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d06c0 | FUN_1006d06c0 */

void FUN_1006d06c0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0xd000000000000010;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000100db0670;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d06f0 | FUN_1006d06f0 */

void FUN_1006d06f0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x74732d746574636f;
  *(undefined8 *)(param_1 + 0x10) = 0xec0000006d616572;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0724 | FUN_1006d0724 */

void FUN_1006d0724(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x70697a622d78;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e600000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d074c | FUN_1006d074c */

void FUN_1006d074c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x3270697a622d78;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e700000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0778 | FUN_1006d0778 */

void FUN_1006d0778(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x6873632d78;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e500000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d07a0 | FUN_1006d07a0 */

void FUN_1006d07a0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x64726f77736d;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e600000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d07c8 | FUN_1006d07c8 */

void FUN_1006d07c8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0xd00000000000003b;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000100db0690;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d07f8 | FUN_1006d07f8 */

void FUN_1006d07f8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0xd000000000000011;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000100db06d0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0828 | FUN_1006d0828 */

void FUN_1006d0828(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0xd000000000000014;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000100db06f0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d0858 | FUN_1006d0858 */

void FUN_1006d0858(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x70697a67;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e400000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d087c | FUN_1006d087c */

void FUN_1006d087c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x6372612d6176616a;
  *(undefined8 *)(param_1 + 0x10) = 0xec00000065766968;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Address: 0x1006d08b0 | FUN_1006d08b0 */

void FUN_1006d08b0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0x6e6f736a;
  *(undefined1 **)(param_1 + 0x10) = &DAT_e400000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


