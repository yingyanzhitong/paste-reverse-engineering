/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100424778 | FUN_100424778 */

void FUN_100424778(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49dbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49dbc,&DAT_100ed42e0);
  DAT_100fc5fc8 = pTVar1;
  return;
}



/* Address: 0x1004247b8 | FUN_1004247b8 */

undefined4 FUN_1004247b8(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x49746375646f7270 || param_2 != (undefined1 *)0xe900000000000064) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x49746375646f7270,(_StringGuts)0xe900000000000064,expecting);
    if (!bVar1) {
      if (((param_1 == 0x797469746e617571) && (param_2 == &DAT_e800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x797469746e617571,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == 0x746361736e617274) && (param_2 == (undefined1 *)0xed000064496e6f69)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x746361736e617274,(_StringGuts)0xed000064496e6f69,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == -0x2fffffffffffffeb) && (param_2 == (undefined1 *)0x8000000100da6300)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000015,(_StringGuts)0x8000000100da6300,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == 0x6573616863727570) && (param_2 == (undefined1 *)0xec00000065746144)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6573616863727570,(_StringGuts)0xec00000065746144,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != -0x2fffffffffffffec) || (param_2 != (undefined1 *)0x8000000100da6320)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000014,(_StringGuts)0x8000000100da6320,
                             expecting), !bVar1)) {
        if (((param_1 == -0x2fffffffffffffee) && (param_2 == (undefined1 *)0x8000000100da6340)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd000000000000012,(_StringGuts)0x8000000100da6340,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 6;
        }
        if (((param_1 == -0x2fffffffffffffe6) && (param_2 == (undefined1 *)0x8000000100da6360)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd00000000000001a,(_StringGuts)0x8000000100da6360,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        if (((param_1 != -0x2ffffffffffffff0) || (param_2 != (undefined1 *)0x8000000100da6380)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd000000000000010,(_StringGuts)0x8000000100da6380,
                               expecting), !bVar1)) {
          if (((param_1 != 0x506c616972547369) || (param_2 != (undefined1 *)0xed0000646f697265)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x506c616972547369,(_StringGuts)0xed0000646f697265,
                                 expecting), !bVar1)) {
            if (((param_1 != -0x2fffffffffffffec) || (param_2 != (undefined1 *)0x8000000100da63a0))
               && (bVar1 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0xd000000000000014,
                                      (_StringGuts)0x8000000100da63a0,expecting), !bVar1)) {
              if ((param_1 == 0x6461726770557369) && (param_2 == (undefined1 *)0xea00000000006465))
              {
                _swift_bridgeObjectRelease(0xea00000000006465);
                return 0xb;
              }
              bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x6461726770557369,(_StringGuts)0xea00000000006465,
                                 expecting);
              _swift_bridgeObjectRelease(param_2);
              if (bVar1) {
                return 0xb;
              }
              return 0xc;
            }
            _swift_bridgeObjectRelease(param_2);
            return 10;
          }
          _swift_bridgeObjectRelease(param_2);
          return 9;
        }
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100424ba0 | FUN_100424ba0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100424bdc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100424ba0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fc5798,&DAT_100c48d50);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x100424c04 | FUN_100424c04 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100424c40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100424c04(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fc5798,&DAT_100c48d50);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100424c68 | thunk_FUN_100424c6c */

void thunk_FUN_100424c6c(void)

{
  byte *pbVar1;
  
  if (DAT_100fc5fe8 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c497c8;
  _swift_getWitnessTable(&BYTE_100c497c8,&DAT_100ed3f80);
  DAT_100fc5fe8 = pbVar1;
  return;
}



/* Address: 0x100424c6c | FUN_100424c6c */

void FUN_100424c6c(void)

{
  byte *pbVar1;
  
  if (DAT_100fc5fe8 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c497c8;
  _swift_getWitnessTable(&BYTE_100c497c8,&DAT_100ed3f80);
  DAT_100fc5fe8 = pbVar1;
  return;
}



/* Address: 0x100424cac | thunk_FUN_100424cb0 */

void thunk_FUN_100424cb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5ff0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49890,&DAT_100ed40a0);
  DAT_100fc5ff0 = pTVar1;
  return;
}



/* Address: 0x100424cb0 | FUN_100424cb0 */

void FUN_100424cb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5ff0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49890,&DAT_100ed40a0);
  DAT_100fc5ff0 = pTVar1;
  return;
}



/* Address: 0x100424cf0 | thunk_FUN_100424cf4 */

void thunk_FUN_100424cf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49930,&DAT_100ed41c0);
  DAT_100fc5ff8 = pTVar1;
  return;
}



/* Address: 0x100424cf4 | FUN_100424cf4 */

void FUN_100424cf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49930,&DAT_100ed41c0);
  DAT_100fc5ff8 = pTVar1;
  return;
}



/* Address: 0x100424d34 | thunk_FUN_100424d38 */

void thunk_FUN_100424d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c499d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c499d0,&DAT_100ed4130);
  DAT_100fc6000 = pTVar1;
  return;
}



/* Address: 0x100424d38 | FUN_100424d38 */

void FUN_100424d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c499d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c499d0,&DAT_100ed4130);
  DAT_100fc6000 = pTVar1;
  return;
}



/* Address: 0x100424d78 | thunk_FUN_100424d7c */

void thunk_FUN_100424d7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49a70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49a70,&DAT_100ed4250);
  DAT_100fc6008 = pTVar1;
  return;
}



/* Address: 0x100424d7c | FUN_100424d7c */

void FUN_100424d7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49a70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49a70,&DAT_100ed4250);
  DAT_100fc6008 = pTVar1;
  return;
}



/* Address: 0x100424dbc | FUN_100424dbc */

void FUN_100424dbc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  FUN_100004594(param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100004594(param_1 + 0x40);
    return;
  }
  return;
}



/* Address: 0x100424e00 | FUN_100424e00 */

undefined8 * FUN_100424e00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
  pcVar3 = (code *)**(undefined8 **)(lVar1 + -8);
  _swift_bridgeObjectRetain();
  (*pcVar3)(param_1 + 3,param_2 + 3,lVar1);
  lVar1 = param_2[0xb];
  if (lVar1 == 0) {
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
  }
  else {
    uVar2 = param_2[0xc];
    param_1[0xb] = lVar1;
    param_1[0xc] = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Address: 0x100424ea4 | FUN_100424ea4 */

undefined8 * FUN_100424ea4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  FUN_10008820c(param_1 + 3,param_2 + 3);
  lVar1 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (lVar1 != 0) {
      param_1[0xb] = lVar1;
      param_1[0xc] = param_2[0xc];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 8);
      goto LAB_100424f4c;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10008820c(param_1 + 8,param_2 + 8);
      goto LAB_100424f4c;
    }
    FUN_100004594(param_1 + 8);
  }
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
LAB_100424f4c:
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Address: 0x100424f68 | FUN_100424f68 */

void FUN_100424f68(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x59) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100424f94 | FUN_100424f94 */

undefined8 * FUN_100424f94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  FUN_100004594(param_1 + 3);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  if (param_1[0xb] != 0) {
    FUN_100004594(param_1 + 8);
  }
  uVar2 = param_2[8];
  uVar3 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar3;
  param_1[10] = uVar1;
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



/* Address: 0x100425018 | FUN_100425018 */

int FUN_100425018(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100425060 | FUN_100425060 */

void FUN_100425060(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xc] = 0;
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
    *(undefined1 *)(param_1 + 0xd) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x69) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x69) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004250bc | FUN_1004250bc */

undefined1  [16] FUN_1004250bc(void)

{
  return ZEXT816(0x100ed3b70);
}



/* Address: 0x1004250cc | FUN_1004250cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004250cc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  FUN_100004594(param_1 + 0x20);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_100004594(param_1 + 0x48);
    return;
  }
  return;
}



/* Address: 0x100425118 | FUN_100425118 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100425118(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar1;
  pcVar3 = (code *)**(undefined8 **)(lVar1 + -8);
  _swift_bridgeObjectRetain();
  (*pcVar3)(param_1 + 4,param_2 + 4,lVar1);
  lVar1 = param_2[0xc];
  if (lVar1 == 0) {
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  else {
    uVar2 = param_2[0xd];
    param_1[0xc] = lVar1;
    param_1[0xd] = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 9);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Address: 0x1004251d4 | FUN_1004251d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1004251d4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  FUN_10008820c(param_1 + 4,param_2 + 4);
  lVar1 = param_2[0xc];
  if (param_1[0xc] == 0) {
    if (lVar1 != 0) {
      param_1[0xc] = lVar1;
      param_1[0xd] = param_2[0xd];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 9);
      goto LAB_10042529c;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10008820c(param_1 + 9,param_2 + 9);
      goto LAB_10042529c;
    }
    FUN_100004594(param_1 + 9);
  }
  uVar3 = param_2[10];
  uVar2 = param_2[9];
  uVar5 = param_2[0xc];
  uVar4 = param_2[0xb];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[9] = uVar2;
LAB_10042529c:
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Address: 0x1004252b8 | FUN_1004252b8 */

void FUN_1004252b8(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Address: 0x1004252e4 | FUN_1004252e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1004252e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  FUN_100004594(param_1 + 4);
  uVar2 = param_2[4];
  uVar3 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar3;
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  if (param_1[0xc] != 0) {
    FUN_100004594(param_1 + 9);
  }
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Address: 0x100425370 | FUN_100425370 */

int FUN_100425370(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x71) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004253b8 | FUN_1004253b8 */

void FUN_1004253b8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xd] = 0;
    param_1[0xc] = 0;
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
    *(undefined1 *)(param_1 + 0xe) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x71) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x71) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100425418 | FUN_100425418 */

undefined1  [16] FUN_100425418(void)

{
  return ZEXT816(0x100ed3c00);
}



/* Address: 0x100425428 | thunk_FUN_10042545c */

void thunk_FUN_10042545c(void)

{
  FUN_10042545c();
  return;
}



/* Address: 0x10042542c | FUN_10042542c */

void FUN_10042542c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_errorRelease(param_1[2]);
  return;
}



/* Address: 0x10042545c | FUN_10042545c */

undefined8 * FUN_10042545c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_errorRetain(uVar2);
  param_1[2] = uVar2;
  return param_1;
}



/* Address: 0x1004254ac | FUN_1004254ac */

undefined8 * FUN_1004254ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  _swift_errorRetain(uVar1);
  param_1[2] = uVar1;
  _swift_errorRelease(uVar2);
  return param_1;
}



/* Address: 0x100425524 | FUN_100425524 */

undefined8 * FUN_100425524(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Address: 0x100425570 | FUN_100425570 */

undefined1  [16] FUN_100425570(void)

{
  return ZEXT816(0x100ed3c90);
}



/* Address: 0x100425580 | FUN_100425580 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

int * FUN_100425580(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x71);
  if (2 < *(byte *)((long)param_1 + 0x71)) {
    uVar2 = *param_1 + 3;
  }
  if (uVar2 != 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    piVar1 = param_1 + 8;
    FUN_100004594(piVar1);
    if (*(long *)(param_1 + 0x18) != 0) {
      param_1 = param_1 + 0x12;
      FUN_100004594(param_1);
      return param_1;
    }
    return piVar1;
  }
  return (int *)0x0;
}



/* Address: 0x1004255fc | FUN_1004255fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1004255fc(undefined8 *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar2 = (uint)*(byte *)((long)param_2 + 0x71);
  if (2 < *(byte *)((long)param_2 + 0x71)) {
    uVar2 = *param_2 + 3;
  }
  if (uVar2 == 2) {
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + 0x71) = 2;
  }
  else if (uVar2 == 1) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 6);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    param_1[3] = uVar3;
    lVar1 = *(long *)(param_2 + 0xe);
    param_1[8] = *(undefined8 *)(param_2 + 0x10);
    param_1[7] = lVar1;
    pcVar4 = (code *)**(undefined8 **)(lVar1 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar4)(param_1 + 4,param_2 + 8,lVar1);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x12);
      param_1[10] = *(undefined8 *)(param_2 + 0x14);
      param_1[9] = uVar3;
      uVar3 = *(undefined8 *)(param_2 + 0x16);
      param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
      param_1[0xb] = uVar3;
      param_1[0xd] = *(undefined8 *)(param_2 + 0x1a);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x1a);
      param_1[0xc] = lVar1;
      param_1[0xd] = uVar3;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 0x12);
    }
    *(char *)(param_1 + 0xe) = (char)param_2[0x1c];
    *(undefined1 *)((long)param_1 + 0x71) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 6);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    param_1[3] = uVar3;
    lVar1 = *(long *)(param_2 + 0xe);
    param_1[8] = *(undefined8 *)(param_2 + 0x10);
    param_1[7] = lVar1;
    pcVar4 = (code *)**(undefined8 **)(lVar1 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar4)(param_1 + 4,param_2 + 8,lVar1);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x12);
      param_1[10] = *(undefined8 *)(param_2 + 0x14);
      param_1[9] = uVar3;
      uVar3 = *(undefined8 *)(param_2 + 0x16);
      param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
      param_1[0xb] = uVar3;
      param_1[0xd] = *(undefined8 *)(param_2 + 0x1a);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x1a);
      param_1[0xc] = lVar1;
      param_1[0xd] = uVar3;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 0x12);
    }
    *(char *)(param_1 + 0xe) = (char)param_2[0x1c];
    *(undefined1 *)((long)param_1 + 0x71) = 0;
  }
  return param_1;
}



/* Address: 0x100425788 | FUN_100425788 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

int * FUN_100425788(int *param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)((long)param_1 + 0x71);
    if (2 < *(byte *)((long)param_1 + 0x71)) {
      uVar1 = *param_1 + 3;
    }
    if (uVar1 != 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 8);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100004594(param_1 + 0x12);
      }
    }
    uVar1 = (uint)*(byte *)((long)param_2 + 0x71);
    if (2 < *(byte *)((long)param_2 + 0x71)) {
      uVar1 = *param_2 + 3;
    }
    if (uVar1 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x71) = 2;
    }
    else if (uVar1 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      lVar2 = *(long *)(param_2 + 0xe);
      *(long *)(param_1 + 0xe) = lVar2;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar3)(param_1 + 8,param_2 + 8,lVar2);
      lVar2 = *(long *)(param_2 + 0x18);
      if (lVar2 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x14);
        uVar4 = *(undefined8 *)(param_2 + 0x12);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x16);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x16) = uVar6;
        *(undefined8 *)(param_1 + 0x14) = uVar5;
        *(undefined8 *)(param_1 + 0x12) = uVar4;
      }
      else {
        *(long *)(param_1 + 0x18) = lVar2;
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0x12,param_2 + 0x12);
      }
      *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
      *(undefined1 *)((long)param_1 + 0x71) = 1;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      lVar2 = *(long *)(param_2 + 0xe);
      *(long *)(param_1 + 0xe) = lVar2;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar3)(param_1 + 8,param_2 + 8,lVar2);
      lVar2 = *(long *)(param_2 + 0x18);
      if (lVar2 == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x14);
        uVar4 = *(undefined8 *)(param_2 + 0x12);
        uVar7 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = *(undefined8 *)(param_2 + 0x16);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x16) = uVar6;
        *(undefined8 *)(param_1 + 0x14) = uVar5;
        *(undefined8 *)(param_1 + 0x12) = uVar4;
      }
      else {
        *(long *)(param_1 + 0x18) = lVar2;
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0x12,param_2 + 0x12);
      }
      *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
      *(undefined1 *)((long)param_1 + 0x71) = 0;
    }
  }
  return param_1;
}



/* Address: 0x1004259a0 | FUN_1004259a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

int * FUN_1004259a0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)((long)param_1 + 0x71);
    if (2 < *(byte *)((long)param_1 + 0x71)) {
      uVar2 = *param_1 + 3;
    }
    if (uVar2 != 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 8);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100004594(param_1 + 0x12);
      }
    }
    uVar2 = (uint)*(byte *)((long)param_2 + 0x71);
    if (2 < *(byte *)((long)param_2 + 0x71)) {
      uVar2 = *param_2 + 3;
    }
    if (uVar2 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar1 = 2;
    }
    else {
      if (uVar2 != 1) {
        *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = *(undefined8 *)(param_2 + 0x16);
        uVar4 = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        *(undefined8 *)(param_1 + 0x16) = uVar5;
        *(undefined8 *)(param_1 + 0x14) = uVar4;
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        uVar3 = *(undefined8 *)param_2;
        uVar5 = *(undefined8 *)(param_2 + 6);
        uVar4 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 6) = uVar5;
        *(undefined8 *)(param_1 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 10);
        uVar3 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)(param_2 + 0xe);
        uVar5 = *(undefined8 *)(param_2 + 0xc);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = *(undefined8 *)(param_2 + 0x16);
        uVar4 = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        *(undefined8 *)(param_1 + 0x16) = uVar5;
        *(undefined8 *)(param_1 + 0x14) = uVar4;
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
        uVar3 = *(undefined8 *)param_2;
        uVar5 = *(undefined8 *)(param_2 + 6);
        uVar4 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar3;
        *(undefined8 *)(param_1 + 6) = uVar5;
        *(undefined8 *)(param_1 + 4) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 10);
        uVar3 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)(param_2 + 0xe);
        uVar5 = *(undefined8 *)(param_2 + 0xc);
      }
      uVar1 = uVar2 == 1;
      *(undefined8 *)(param_1 + 10) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0xe) = uVar6;
      *(undefined8 *)(param_1 + 0xc) = uVar5;
    }
    *(undefined1 *)((long)param_1 + 0x71) = uVar1;
  }
  return param_1;
}



/* Address: 0x100425ab0 | FUN_100425ab0 */

int FUN_100425ab0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x72) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)((long)param_1 + 0x71)) {
    iVar1 = (*(byte *)((long)param_1 + 0x71) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100425aec | FUN_100425aec */

void FUN_100425aec(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x72) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x71) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x72) = 1;
    }
  }
  return;
}



/* Address: 0x100425b44 | FUN_100425b44 */

uint FUN_100425b44(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x71);
  if (2 < *(byte *)((long)param_1 + 0x71)) {
    uVar1 = *param_1 + 3;
  }
  return uVar1;
}



/* Address: 0x100425b60 | FUN_100425b60 */

void FUN_100425b60(int *param_1,uint param_2)

{
  int iVar1;
  
  if (2 < param_2) {
    iVar1 = param_2 - 3;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_2 = 3;
    *param_1 = iVar1;
  }
  *(char *)((long)param_1 + 0x71) = (char)param_2;
  return;
}



/* Address: 0x100425b94 | FUN_100425b94 */

undefined1  [16] FUN_100425b94(void)

{
  return ZEXT816(0x100ed3d30);
}



/* Address: 0x100425ba4 | FUN_100425ba4 */

undefined1  [16] FUN_100425ba4(void)

{
  return ZEXT816(0x100ed3da8);
}



/* Address: 0x100425bb4 | thunk_FUN_100425bf8 */

void thunk_FUN_100425bf8(void)

{
  FUN_100425bf8();
  return;
}



/* Address: 0x100425bb8 | FUN_100425bb8 */

void FUN_100425bb8(undefined8 *param_1)

{
  FUN_100425be8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),FUN_10003bf2c,FUN_10041ae14);
  return;
}



/* Address: 0x100425be8 | FUN_100425be8 */

void FUN_100425be8(undefined8 param_1,undefined8 param_2,uint param_3,code *UNRECOVERED_JUMPTABLE_00
                  ,code *UNRECOVERED_JUMPTABLE)

{
  if ((param_3 >> 7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100425bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100425bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3 & 0x7f);
  return;
}



/* Address: 0x100425bf8 | FUN_100425bf8 */

undefined8 * FUN_100425bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100425be8(uVar1,uVar2,uVar3,FUN_1001037b4,FUN_10041aea8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100425c50 | FUN_100425c50 */

undefined8 * FUN_100425c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100425be8(uVar1,uVar3,uVar5,FUN_1001037b4,FUN_10041aea8);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_100425be8(uVar2,uVar4,uVar6,FUN_10003bf2c,FUN_10041ae14);
  return param_1;
}



/* Address: 0x100425cc4 | FUN_100425cc4 */

void FUN_100425cc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100425cd8 | FUN_100425cd8 */

undefined8 * FUN_100425cd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_100425be8(uVar3,uVar4,uVar2,FUN_10003bf2c,FUN_10041ae14);
  return param_1;
}



/* Address: 0x100425d2c | thunk_FUN_100425e9c */

void thunk_FUN_100425e9c(void)

{
  FUN_100425e9c();
  return;
}



/* Address: 0x100425d30 | thunk_FUN_100425ef0 */

void thunk_FUN_100425ef0(void)

{
  FUN_100425ef0();
  return;
}



/* Address: 0x100425d34 | FUN_100425d34 */

byte FUN_100425d34(long param_1)

{
  return *(byte *)(param_1 + 0x10) >> 7;
}



/* Address: 0x100425d40 | FUN_100425d40 */

void FUN_100425d40(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0x7f;
  return;
}



/* Address: 0x100425d50 | FUN_100425d50 */

void FUN_100425d50(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 7 | param_2 << 7;
  return;
}



/* Address: 0x100425d64 | FUN_100425d64 */

undefined1  [16] FUN_100425d64(void)

{
  return ZEXT816(0x100ed3e40);
}



/* Address: 0x100425d74 | FUN_100425d74 */

void FUN_100425d74(void)

{
  FUN_100425d80();
  return;
}



/* Address: 0x100425d80 | FUN_100425d80 */

undefined8 * FUN_100425d80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100425dc8 | FUN_100425dc8 */

void FUN_100425dc8(undefined8 *param_1)

{
  FUN_10041ae04(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100425dd8 | FUN_100425dd8 */

void FUN_100425dd8(void)

{
  FUN_100425dec();
  return;
}



/* Address: 0x100425dec | FUN_100425dec */

undefined8 *
FUN_100425dec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}


