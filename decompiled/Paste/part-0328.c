/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10040fb14 | FUN_10040fb14 */

void FUN_10040fb14(void)

{
  String SVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  Hasher HVar4;
  undefined1 auStack_88 [72];
  
  SVar1 = *unaff_x20;
  HVar3.unknown = unaff_x20[1].str;
  SVar2 = unaff_x20[1];
  HVar4.unknown = unaff_x20[2].str;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_88,SVar1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10040fb90 | FUN_10040fb90 */

void FUN_10040fb90(Hasher param_1)

{
  String SVar1;
  Hasher HVar2;
  String *unaff_x20;
  char *pcVar3;
  
  HVar2.unknown = unaff_x20[1].str;
  SVar1 = unaff_x20[1];
  pcVar3 = unaff_x20[2].str;
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,SVar1);
  Swift::Hasher::_combine((__uint64)pcVar3,HVar2);
  return;
}



/* Address: 0x10040fbe0 | FUN_10040fbe0 */

void FUN_10040fbe0(__int64 param_1)

{
  String SVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  Hasher HVar4;
  undefined1 auStack_88 [72];
  
  SVar1 = *unaff_x20;
  HVar3.unknown = unaff_x20[1].str;
  SVar2 = unaff_x20[1];
  HVar4.unknown = unaff_x20[2].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10040fc58 | FUN_10040fc58 */

bool FUN_10040fc58(undefined8 *param_1,long *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  
  _Var3.unknown = (undefined *)param_1[2];
  _Var1.unknown = (undefined *)param_1[3];
  lVar4 = param_1[4];
  puVar2 = (undefined *)param_2[2];
  puVar5 = (undefined *)param_2[3];
  lVar7 = param_2[4];
  if ((((undefined *)*param_1 == (undefined *)*param_2 &&
        (undefined *)param_1[1] == (undefined *)param_2[1]) ||
      (bVar6 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar6)) &&
     ((_Var3.unknown == puVar2 && _Var1.unknown == puVar5 ||
      (bVar6 = Swift::_stringCompareWithSmolCheck
                         (_Var3,_Var1,(_StringComparisonResult)(__int8)puVar2), bVar6)))) {
    bVar6 = lVar4 == lVar7;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



/* Address: 0x10040fcf0 | FUN_10040fcf0 */

undefined * FUN_10040fcf0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10040fe1c);
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
    puVar3 = &DAT_100fc4e10;
    FUN_1000037f0(&DAT_100fc4e10,&DAT_100c476c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
  }
  else {
    if (puVar3 < param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
    }
    else if (puVar3 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10040fe1c | FUN_10040fe1c */

undefined * FUN_10040fe1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10040ff1c);
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
    puVar3 = &DAT_100fc54a0;
    FUN_1000037f0(&DAT_100fc54a0,&DAT_100c48a18);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10040ff1c | FUN_10040ff1c */

undefined * FUN_10040ff1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041000c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc5498;
    FUN_1000037f0(&DAT_100fc5498,&DAT_100c48a10);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10041000c | FUN_10041000c */

undefined * FUN_10041000c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100410188);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc5488;
    FUN_1000037f0(&DAT_100fc5488,&DAT_100c48a00);
    lVar5 = 0;
    FUN_100408ee8();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100410180);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100410184);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_100408ee8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x100410188 | FUN_100410188 */

undefined * FUN_100410188(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004102a4);
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
    puVar3 = &DAT_100fc54a8;
    FUN_1000037f0(&DAT_100fc54a8,&DAT_100c48a20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed2bf8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1004102a4 | thunk_FUN_1004102a8 */

void thunk_FUN_1004102a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48728,&DAT_100ed2af8);
  DAT_100fc5448 = pTVar1;
  return;
}



/* Address: 0x1004102a8 | FUN_1004102a8 */

void FUN_1004102a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48728,&DAT_100ed2af8);
  DAT_100fc5448 = pTVar1;
  return;
}



/* Address: 0x1004102e8 | thunk_FUN_1004102ec */

void thunk_FUN_1004102ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48760;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48760,&DAT_100ed2af8);
  DAT_100fc5450 = pTVar1;
  return;
}



/* Address: 0x1004102ec | FUN_1004102ec */

void FUN_1004102ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48760;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48760,&DAT_100ed2af8);
  DAT_100fc5450 = pTVar1;
  return;
}



/* Address: 0x10041032c | thunk_FUN_100410330 */

void thunk_FUN_100410330(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48828,&DAT_100ed2af8);
  DAT_100fc5458 = pTVar1;
  return;
}



/* Address: 0x100410330 | FUN_100410330 */

void FUN_100410330(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48828,&DAT_100ed2af8);
  DAT_100fc5458 = pTVar1;
  return;
}



/* Address: 0x100410370 | thunk_FUN_100410374 */

void thunk_FUN_100410374(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5460 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48850;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48850,&DAT_100ed2af8);
  DAT_100fc5460 = pTVar1;
  return;
}



/* Address: 0x100410374 | FUN_100410374 */

void FUN_100410374(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5460 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48850;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48850,&DAT_100ed2af8);
  DAT_100fc5460 = pTVar1;
  return;
}



/* Address: 0x1004103b4 | thunk_FUN_1004103b8 */

void thunk_FUN_1004103b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5468 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c488f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c488f8,&DAT_100ed2b78);
  DAT_100fc5468 = pTVar1;
  return;
}



/* Address: 0x1004103b8 | FUN_1004103b8 */

void FUN_1004103b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5468 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c488f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c488f8,&DAT_100ed2b78);
  DAT_100fc5468 = pTVar1;
  return;
}



/* Address: 0x1004103f8 | FUN_1004103f8 */

undefined1  [16] FUN_1004103f8(void)

{
  return ZEXT816(0x100ed2af8);
}



/* Address: 0x100410408 | FUN_100410408 */

void FUN_100410408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10041041c | FUN_10041041c */

undefined1  [16] FUN_10041041c(void)

{
  return ZEXT816(0x100ed2b78);
}



/* Address: 0x10041042c | FUN_10041042c */

undefined8 * FUN_10041042c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100410470 | FUN_100410470 */

undefined8 * FUN_100410470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1004104e4 | FUN_1004104e4 */

void FUN_1004104e4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1004104f8 | FUN_1004104f8 */

undefined8 * FUN_1004104f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x100410544 | FUN_100410544 */

undefined1  [16] FUN_100410544(void)

{
  return ZEXT816(0x100ed2bf8);
}



/* Address: 0x100410554 | thunk_FUN_100410558 */

void thunk_FUN_100410558(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4897c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4897c,&DAT_100ed2bf8);
  DAT_100fc5470 = pTVar1;
  return;
}



/* Address: 0x100410558 | FUN_100410558 */

void FUN_100410558(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4897c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4897c,&DAT_100ed2bf8);
  DAT_100fc5470 = pTVar1;
  return;
}



/* Address: 0x100410598 | FUN_100410598 */

undefined * FUN_100410598(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004106dc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc5478;
    FUN_1000037f0(&DAT_100fc5478,&DAT_100c489e8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc5480;
    FUN_1000037f0(&DAT_100fc5480,&DAT_100c489f0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1004106dc | FUN_1004106dc */

undefined * FUN_1004106dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100410800);
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
    puVar3 = &DAT_100fc5490;
    FUN_1000037f0(&DAT_100fc5490,&DAT_100c48a08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x68) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed2f00);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x68 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x68);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100410800 | thunk_FUN_100410330 */

void thunk_FUN_100410330(void)

{
  thunk_FUN_100410330();
  return;
}



/* Address: 0x100410804 | thunk_FUN_10000862c */

void thunk_FUN_10000862c(void)

{
  thunk_FUN_10000862c();
  return;
}



/* Address: 0x100410808 | FUN_100410808 */

void FUN_100410808(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100410834 | FUN_100410834 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100410834(void)

{
  return ZEXT816(0x100fc54f0);
}



/* Address: 0x100410854 | FUN_100410854 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100410854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  NSSet *pNVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_70,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_1004110b4(&local_58,param_1,param_2,param_3);
  _swift_endAccess(auStack_70);
  _swift_bridgeObjectRelease(local_50);
  _swift_bridgeObjectRelease(local_48);
  FUN_1000da768(&local_58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  FUN_100410984();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = uVar1;
  FUN_1004124e0(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
  FUN_10041261c();
  pNVar2 = (extension_Foundation)::Swift::Set::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  objc_stub::FUN_100c0cd40(local_58,pNVar2);
  return 0;
}



/* Address: 0x100410984 | FUN_100410984 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100410984(long param_1,ContiguousArray param_2)

{
  _HashTable _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  code *pcVar7;
  Bucket BVar8;
  NSString *pNVar9;
  NSString *pNVar10;
  ID IVar11;
  NSArray *pNVar12;
  NSArray *pNVar13;
  ContiguousArray CVar14;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ContiguousArray CVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar28 = *(long *)(param_1 + 0x10);
  if (lVar28 == 0) {
    return puVar6;
  }
  Swift::ContiguousArray::_reserveCapacity(lVar28,param_2);
  _Var1.unknown = (undefined *)(param_1 + 0x38);
  CVar14.unknown = (undefined *)~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
  BVar8 = Swift::_HashTable::get_startBucket(_Var1);
  uVar5 = *(uint *)(param_1 + 0x24);
  if ((ulong)BVar8.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) == 0) {
    lVar25 = 1;
    puVar22 = puVar6;
    do {
      puVar20 = (undefined *)(ulong)uVar5;
      uVar16 = (ulong)BVar8.offset >> 6;
      uVar17 = 1L << (BVar8.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar16 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100410d4c);
        (*pcVar7)();
      }
      lVar15 = *(long *)(param_1 + 0x30) + BVar8.offset * 0x18;
      uVar2 = *(undefined8 *)(lVar15 + 8);
      lVar26 = *(long *)(lVar15 + 0x10);
      lVar15 = *(long *)(lVar26 + 0x10);
      if (lVar15 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(lVar26);
        puVar24 = puVar22;
      }
      else {
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(lVar26);
        Swift::ContiguousArray::_reserveCapacity(lVar15,CVar14);
        puVar27 = (undefined8 *)(lVar26 + 0x40);
        do {
          uVar3 = puVar27[-3];
          uVar4 = puVar27[-1];
          uVar21 = *puVar27;
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          FUN_100410d78(uVar21);
          pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar3);
          pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar4);
          IVar11 = objc_stub::FUN_100bfd2e0
                             ((ID)&_OBJC_CLASS___UNNotificationAction,pNVar9,pNVar10,uVar21);
          CVar14.unknown = extraout_x1;
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
          CVar23.unknown = puVar22[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar23.unknown,CVar14);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar23.unknown,IVar11);
          Swift::ContiguousArray::__endMutation(CVar23);
          lVar15 = lVar15 + -1;
          puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
          puVar27 = puVar27 + 5;
        } while (lVar15 != 0);
      }
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      FUN_10000ec2c(0,&DAT_100fc5570,&PTR__OBJC_CLASS___UNNotificationAction_100f8dca8);
      pNVar12 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar22);
      pNVar13 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      IVar11 = objc_stub::FUN_100bff120
                         ((ID)&_OBJC_CLASS___UNNotificationCategory,pNVar9,pNVar12,pNVar13,0);
      CVar14.unknown = extraout_x1_00;
      _swift_bridgeObjectRelease(lVar26);
      _swift_bridgeObjectRelease(uVar2);
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
      CVar23.unknown = puVar6[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar23.unknown,CVar14);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar23.unknown,IVar11);
      Swift::ContiguousArray::__endMutation(CVar23);
      uVar19 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar19 <= (ulong)BVar8.offset) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100410d50);
        (*pcVar7)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar16 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100410d54);
        (*pcVar7)();
      }
      if (puVar20 != (undefined *)(ulong)*(uint *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100410d58);
        (*pcVar7)();
      }
      uVar17 = *(ulong *)(_Var1.unknown + uVar16 * 8) & -2L << (BVar8.offset & 0x3fU);
      if (uVar17 == 0) {
        lVar15 = uVar16 << 6;
        puVar18 = (ulong *)(param_1 + 0x40 + uVar16 * 8);
        do {
          uVar16 = uVar16 + 1;
          if (uVar19 + 0x3f >> 6 <= uVar16) {
            FUN_10000cae0(BVar8.offset,puVar20,0);
            goto LAB_100410cfc;
          }
          uVar17 = *puVar18;
          lVar15 = lVar15 + 0x40;
          puVar18 = puVar18 + 1;
        } while (uVar17 == 0);
        FUN_10000cae0(BVar8.offset,puVar20,0);
        uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar19 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) + lVar15;
      }
      else {
        uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar19 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | BVar8.offset & 0x7fffffffffffffc0U;
      }
LAB_100410cfc:
      if (lVar25 == lVar28) {
        return puVar6;
      }
      uVar5 = *(uint *)(param_1 + 0x24);
      lVar25 = lVar25 + 1;
      CVar14.unknown = puVar20;
      BVar8.offset = uVar19;
      puVar22 = puVar24;
    } while (uVar19 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) == 0);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100410d1c);
  (*pcVar7)();
}



/* Address: 0x100410d58 | FUN_100410d58 */

void FUN_100410d58(void)

{
  FUN_100410854();
  return;
}



/* Address: 0x100410d78 | FUN_100410d78 */

ulong FUN_100410d78(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar3 = &DAT_100fc55c0;
  FUN_1000037f0(&DAT_100fc55c0,&DAT_100c48a98);
  _swift_initStaticObject();
  FUN_100408a40();
  uVar8 = 0;
  lVar4 = 0;
  uVar5 = 1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((puVar3[0x20] & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(puVar3 + 0x40);
  while( true ) {
    while (uVar6 != 0) {
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 << 6;
      if ((*(ulong *)(*(long *)(puVar3 + 0x30) + uVar7 * 8) & (param_1 ^ 0xffffffffffffffff)) == 0)
      {
        uVar8 = *(ulong *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) | uVar8;
      }
    }
    bVar2 = SCARRY8(lVar4,1);
    lVar4 = lVar4 + 1;
    if (bVar2) break;
    if ((long)(uVar5 + 0x3f >> 6) <= lVar4) {
      _swift_release();
      return uVar8;
    }
    uVar6 = *(ulong *)((long)(puVar3 + 0x40) + lVar4 * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100410e6c);
  (*pcVar1)();
}



/* Address: 0x100410e6c | FUN_100410e6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100410e6c(undefined8 *param_1,__CocoaSet param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  __CocoaSet _Var4;
  undefined8 uVar5;
  ulong uVar6;
  __int64 _Var7;
  __CocoaSet _Var8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined *puVar10;
  undefined *local_68;
  
  puVar10 = (undefined *)*unaff_x20;
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
    uVar6 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar10 + 0x28));
    uVar9 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0) {
      do {
        bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(puVar10 + 0x30) + uVar6 * 8),
                           (NSObject *)param_2.unknown);
        if (bVar3) {
          *param_1 = *(undefined8 *)(*(long *)(puVar10 + 0x30) + uVar6 * 8);
          return 0;
        }
        uVar6 = uVar6 + 1 & ~uVar9;
      } while ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0);
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = (undefined *)*unaff_x20;
    FUN_1004115bc(param_2.unknown,uVar6,uVar5);
    *unaff_x20 = local_68;
  }
  else {
    _Var8.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var8.unknown = puVar10;
    }
    _swift_bridgeObjectRetain(puVar10);
    _Var4.unknown = param_2.unknown;
    Swift::__CocoaSet::_member(param_2);
    if (_Var4.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar10);
      uVar5 = 0;
      local_68 = _Var4.unknown;
      FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
      _swift_dynamicCast(param_1,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar5,7);
      return 0;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var8);
    if (SCARRY8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004110b4);
      (*pcVar2)();
    }
    FUN_1004113c0(_Var8.unknown,_Var7 + 1);
    local_68 = _Var8.unknown;
    if (*(ulong *)(_Var8.unknown + 0x18) <= *(ulong *)(_Var8.unknown + 0x10)) {
      FUN_100411ff0(*(ulong *)(_Var8.unknown + 0x10) + 1);
    }
    puVar1 = local_68;
    FUN_10036bd88(param_2.unknown,local_68);
    _swift_bridgeObjectRelease(puVar10);
    *unaff_x20 = puVar1;
  }
  *param_1 = param_2.unknown;
  return 1;
}



/* Address: 0x1004110b4 | FUN_1004110b4 */

undefined8 FUN_1004110b4(undefined8 *param_1,char *param_2,undefined *param_3,long param_4)

{
  _StringGuts _Var1;
  undefined *puVar2;
  __uint64 _Var3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  String SVar7;
  bool bVar8;
  Hasher HVar9;
  ulong uVar10;
  Hasher HVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x20;
  long lVar16;
  long *plVar17;
  long lVar18;
  __uint64 *p_Var19;
  long *plVar20;
  long lVar21;
  long lVar22;
  __uint64 _Var23;
  undefined8 uVar24;
  String SVar25;
  long local_b0 [10];
  
  lVar21 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar21 + 0x28));
  SVar25.bridgeObject = param_3;
  SVar25.str = param_2;
  HVar11.unknown = param_2;
  Swift::String::hash((Hasher)local_b0,SVar25);
  HVar9.unknown = *(undefined **)(param_4 + 0x10);
  Swift::Hasher::_combine((__uint64)HVar9.unknown,HVar11);
  lVar16 = *(long *)(param_4 + 0x10);
  if (lVar16 != 0) {
    p_Var19 = (__uint64 *)(param_4 + 0x40);
    do {
      HVar9.unknown = (undefined *)p_Var19[-3];
      SVar25 = *(String *)(p_Var19 + -4);
      HVar11.unknown = ((String *)(p_Var19 + -2))->str;
      _Var3 = p_Var19[-1];
      SVar7 = *(String *)(p_Var19 + -2);
      _Var23 = *p_Var19;
      _swift_bridgeObjectRetain(HVar9.unknown);
      _swift_bridgeObjectRetain(_Var3);
      Swift::String::hash((Hasher)local_b0,SVar25);
      Swift::String::hash((Hasher)local_b0,SVar7);
      Swift::Hasher::_combine(_Var23,HVar11);
      _swift_bridgeObjectRelease(_Var3);
      _swift_bridgeObjectRelease();
      lVar16 = lVar16 + -1;
      p_Var19 = p_Var19 + 5;
    } while (lVar16 != 0);
  }
  uVar10 = Swift::Hasher::_finalize(HVar9);
  uVar12 = -1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar10 = uVar10 & (uVar12 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar21 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
    lVar16 = *(long *)(lVar21 + 0x30);
    do {
      puVar13 = (undefined8 *)(lVar16 + uVar10 * 0x18);
      _Var4.unknown = (undefined *)puVar13[1];
      lVar14 = puVar13[2];
      if ((((undefined *)*puVar13 == param_2 && _Var4.unknown == param_3) ||
          (bVar8 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)*puVar13,_Var4,(_StringComparisonResult)(__int8)param_2),
          bVar8)) && (lVar22 = *(long *)(lVar14 + 0x10), lVar22 == *(long *)(param_4 + 0x10))) {
        if (lVar22 == 0 || lVar14 == param_4) {
LAB_1004112dc:
          _swift_bridgeObjectRetain(_Var4.unknown);
          _swift_bridgeObjectRelease();
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRelease(param_3);
          puVar13 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar10 * 0x18);
          *param_1 = *puVar13;
          uVar15 = puVar13[2];
          uVar24 = puVar13[1];
          param_1[2] = puVar13[2];
          param_1[1] = uVar24;
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar15);
          return 0;
        }
        plVar20 = (long *)(lVar14 + 0x40);
        plVar17 = (long *)(param_4 + 0x40);
        while( true ) {
          _Var1.unknown = (undefined *)plVar20[-2];
          _Var5.unknown = (undefined *)plVar20[-1];
          lVar18 = *plVar20;
          puVar2 = (undefined *)plVar17[-2];
          puVar6 = (undefined *)plVar17[-1];
          lVar14 = *plVar17;
          if (((((undefined *)plVar20[-4] != (undefined *)plVar17[-4] ||
                 (undefined *)plVar20[-3] != (undefined *)plVar17[-3]) &&
               (bVar8 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)plVar20[-4],(undefined *)plVar20[-3],
                                   (_StringComparisonResult)(__int8)(undefined *)plVar17[-4]),
               !bVar8)) ||
              ((_Var1.unknown != puVar2 || _Var5.unknown != puVar6 &&
               (bVar8 = Swift::_stringCompareWithSmolCheck
                                  (_Var1,_Var5,(_StringComparisonResult)(__int8)puVar2), !bVar8))))
             || (lVar18 != lVar14)) break;
          plVar20 = plVar20 + 5;
          plVar17 = plVar17 + 5;
          lVar22 = lVar22 + -1;
          if (lVar22 == 0) goto LAB_1004112dc;
        }
      }
      uVar10 = uVar10 + 1 & ~uVar12;
    } while ((*(ulong *)(lVar21 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
  }
  lVar16 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar16);
  local_b0[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  FUN_100411714(param_2,param_3,param_4,uVar10,lVar16);
  *unaff_x20 = local_b0[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return 1;
}



/* Address: 0x1004113c0 | FUN_1004113c0 */

undefined * FUN_1004113c0(__CocoaSet param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __CocoaSet _Var5;
  Iterator *this_00;
  undefined8 uVar6;
  Iterator *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Iterator *local_78;
  undefined8 local_70;
  undefined *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    _Var5.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    this = (_SetStorage *)&DAT_100fc5568;
    FUN_1000037f0(&DAT_100fc5568,&DAT_100c48a90);
    _Var5.unknown = param_1.unknown;
    Swift::_SetStorage::_convert(this,param_1,param_2);
    local_68 = _Var5.unknown;
    this_00 = Swift::__CocoaSet::makeIterator(param_1);
    pIVar7 = this_00;
    Swift::__CocoaSet::Iterator::_next(this_00);
    if (pIVar7 != (Iterator *)0x0) {
      uVar6 = 0;
      FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
      puVar2 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
      do {
        local_78 = pIVar7;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar6,7);
        uVar3 = local_70;
        if (*(ulong *)(_Var5.unknown + 0x18) <= *(ulong *)(_Var5.unknown + 0x10)) {
          FUN_100411ff0(*(ulong *)(_Var5.unknown + 0x10) + 1);
          _Var5.unknown = local_68;
        }
        pIVar7 = (Iterator *)
                 (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                           (*(__int64 *)(_Var5.unknown + 0x28));
        uVar11 = -1L << ((ulong)(byte)_Var5.unknown[0x20] & 0x3f);
        uVar10 = (ulong)pIVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1004115bc);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(_Var5.unknown + uVar8 + 0x38) =
             1L << (uVar9 & 0x3f) | *(ulong *)(_Var5.unknown + uVar8 + 0x38);
        *(undefined8 *)(*(long *)(_Var5.unknown + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(_Var5.unknown + 0x10) = *(long *)(_Var5.unknown + 0x10) + 1;
        Swift::__CocoaSet::Iterator::_next(this_00);
      } while (pIVar7 != (Iterator *)0x0);
    }
    _swift_release(this_00);
  }
  return _Var5.unknown;
}



/* Address: 0x1004115bc | FUN_1004115bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004115bc(NSObject *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_100411d28();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1004119cc(uVar3 + 1);
    }
    else {
      FUN_100411ff0();
    }
    lVar5 = *unaff_x20;
    param_2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(lVar5 + 0x28));
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(lVar5 + 0x30) + param_2 * 8),param_1);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100411714);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar4 = *unaff_x20;
  lVar5 = lVar4 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(NSObject **)(*(long *)(lVar4 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100411708);
  (*pcVar1)();
}



/* Address: 0x100411714 | FUN_100411714 */

void FUN_100411714(char *param_1,undefined *param_2,long param_3,ulong param_4,ulong param_5)

{
  _StringGuts _Var1;
  undefined *puVar2;
  __uint64 _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  String SVar6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  Hasher HVar10;
  Hasher HVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  __uint64 *p_Var18;
  long *plVar19;
  long lVar20;
  __uint64 _Var21;
  long *plVar22;
  undefined1 auStack_a8 [72];
  
  uVar12 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar12 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_5 & 1) == 0) {
      FUN_100411e78();
    }
  }
  else {
    if ((param_5 & 1) == 0) {
      FUN_100411bd0(uVar12 + 1);
    }
    else {
      FUN_10041221c();
    }
    lVar13 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar13 + 0x28));
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    HVar11.unknown = param_1;
    Swift::String::hash((Hasher)auStack_a8,SVar6);
    HVar10.unknown = *(undefined **)(param_3 + 0x10);
    Swift::Hasher::_combine((__uint64)HVar10.unknown,HVar11);
    lVar16 = *(long *)(param_3 + 0x10);
    if (lVar16 != 0) {
      p_Var18 = (__uint64 *)(param_3 + 0x40);
      do {
        HVar10.unknown = (undefined *)p_Var18[-3];
        SVar6 = *(String *)(p_Var18 + -4);
        HVar11.unknown = ((String *)(p_Var18 + -2))->str;
        _Var3 = p_Var18[-1];
        SVar7 = *(String *)(p_Var18 + -2);
        _Var21 = *p_Var18;
        _swift_bridgeObjectRetain(HVar10.unknown);
        _swift_bridgeObjectRetain(_Var3);
        Swift::String::hash((Hasher)auStack_a8,SVar6);
        Swift::String::hash((Hasher)auStack_a8,SVar7);
        Swift::Hasher::_combine(_Var21,HVar11);
        _swift_bridgeObjectRelease(_Var3);
        _swift_bridgeObjectRelease();
        lVar16 = lVar16 + -1;
        p_Var18 = p_Var18 + 5;
      } while (lVar16 != 0);
    }
    param_4 = Swift::Hasher::_finalize(HVar10);
    uVar12 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    param_4 = param_4 & (uVar12 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar13 + 0x38 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
      lVar16 = *(long *)(lVar13 + 0x30);
      do {
        puVar14 = (undefined8 *)(lVar16 + param_4 * 0x18);
        lVar15 = puVar14[2];
        if ((((undefined *)*puVar14 == param_1 && (undefined *)puVar14[1] == param_2) ||
            (bVar9 = Swift::_stringCompareWithSmolCheck
                               ((undefined *)*puVar14,(undefined *)puVar14[1],
                                (_StringComparisonResult)(__int8)param_1), bVar9)) &&
           (lVar17 = *(long *)(lVar15 + 0x10), lVar17 == *(long *)(param_3 + 0x10))) {
          if (lVar17 == 0 || lVar15 == param_3) {
LAB_100411948:
            Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100411958);
            (*pcVar8)();
          }
          plVar19 = (long *)(lVar15 + 0x40);
          plVar22 = (long *)(param_3 + 0x40);
          while( true ) {
            _Var1.unknown = (undefined *)plVar19[-2];
            _Var4.unknown = (undefined *)plVar19[-1];
            lVar20 = *plVar19;
            puVar2 = (undefined *)plVar22[-2];
            puVar5 = (undefined *)plVar22[-1];
            lVar15 = *plVar22;
            if (((((undefined *)plVar19[-4] != (undefined *)plVar22[-4] ||
                   (undefined *)plVar19[-3] != (undefined *)plVar22[-3]) &&
                 (bVar9 = Swift::_stringCompareWithSmolCheck
                                    ((undefined *)plVar19[-4],(undefined *)plVar19[-3],
                                     (_StringComparisonResult)(__int8)(undefined *)plVar22[-4]),
                 !bVar9)) ||
                ((_Var1.unknown != puVar2 || _Var4.unknown != puVar5 &&
                 (bVar9 = Swift::_stringCompareWithSmolCheck
                                    (_Var1,_Var4,(_StringComparisonResult)(__int8)puVar2), !bVar9)))
                ) || (lVar20 != lVar15)) break;
            plVar19 = plVar19 + 5;
            plVar22 = plVar22 + 5;
            lVar17 = lVar17 + -1;
            if (lVar17 == 0) goto LAB_100411948;
          }
        }
        param_4 = param_4 + 1 & ~uVar12;
      } while ((*(ulong *)(lVar13 + 0x38 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
    }
  }
  lVar13 = *unaff_x20;
  lVar16 = lVar13 + (param_4 >> 6) * 8;
  *(ulong *)(lVar16 + 0x38) = *(ulong *)(lVar16 + 0x38) | 1L << (param_4 & 0x3f);
  puVar14 = (undefined8 *)(*(long *)(lVar13 + 0x30) + param_4 * 0x18);
  *puVar14 = param_1;
  puVar14[1] = param_2;
  puVar14[2] = param_3;
  if (!SCARRY8(*(long *)(lVar13 + 0x10),1)) {
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1004119cc);
  (*pcVar8)();
}



/* Address: 0x1004119cc | FUN_1004119cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004119cc(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar12;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc5568;
  FUN_1000037f0(&DAT_100fc5568,&DAT_100c48a90);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100411b98:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100411bcc);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_100411b98;
        uVar11 = *(ulong *)(original + 0x38 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar12 = lVar7;
    }
    uVar4 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar12 << 6) * 8);
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100411bd0);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = uVar4;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x100411bd0 | FUN_100411bd0 */

void FUN_100411bd0(long param_1)

{
  long lVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __RawSetStorage *p_Var5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  __RawSetStorage *original;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc55c8;
  FUN_1000037f0(&DAT_100fc55c8,&DAT_100c48aa0);
  p_Var5 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100411cfc:
    _swift_release(original);
    *unaff_x20 = p_Var5;
    return;
  }
  lVar10 = 0;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  if (uVar11 == 0) goto LAB_100411c8c;
  do {
    uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar11 = uVar11 - 1 & uVar11;
    while( true ) {
      puVar7 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar10 << 6) * 0x18);
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar9 = puVar7[2];
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      FUN_100412390(uVar2,uVar3,uVar9,p_Var5);
      if (uVar11 != 0) break;
LAB_100411c8c:
      do {
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100411d28);
          (*pcVar4)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar1) goto LAB_100411cfc;
        uVar11 = *(ulong *)(original + 0x38 + lVar1 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar10 = lVar1;
    }
  } while( true );
}



/* Address: 0x100411d28 | FUN_100411d28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100411d28(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar8;
  
  this = (_SetStorage *)&DAT_100fc5568;
  FUN_1000037f0(&DAT_100fc5568,&DAT_100c48a90);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    lVar7 = 0;
    do {
      if (uVar4 == 0) {
        do {
          lVar8 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100411e78);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_100411e50;
          uVar4 = *(ulong *)(p_Var1 + lVar8 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
      }
      else {
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
        lVar8 = lVar7;
      }
      uVar6 = LZCOUNT(uVar6) | lVar8 << 6;
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
      lVar7 = lVar8;
    } while( true );
  }
LAB_100411e50:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x100411e78 | FUN_100411e78 */

void FUN_100411e78(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _SetStorage *this;
  __RawSetStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  __RawSetStorage *original;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  this = (_SetStorage *)&DAT_100fc55c8;
  FUN_1000037f0(&DAT_100fc55c8,&DAT_100c48aa0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x38) {
      _memmove(p_Var5 + 0x38,p_Var1,uVar6 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x38);
    if (uVar6 == 0) goto LAB_100411f54;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        lVar9 = (LZCOUNT(uVar8) | lVar11 << 6) * 0x18;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar9);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x30) + lVar9);
        uVar10 = puVar2[2];
        uVar13 = puVar2[2];
        uVar12 = puVar2[1];
        *puVar3 = *puVar2;
        puVar3[2] = uVar13;
        puVar3[1] = uVar12;
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar10);
        if (uVar6 != 0) break;
LAB_100411f54:
        do {
          lVar9 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100411ff0);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar9) goto LAB_100411fc8;
          uVar6 = *(ulong *)(p_Var1 + lVar9 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar11 = lVar9;
      }
    } while( true );
  }
LAB_100411fc8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x100411ff0 | FUN_100411ff0 */

void FUN_100411ff0(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  __RawSetStorage *original;
  __RawSetStorage *p_Var11;
  long lVar12;
  ulong uVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc5568;
  FUN_1000037f0(&DAT_100fc5568,&DAT_100c48a90);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004121ec:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x38;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)p_Var11;
  lVar6 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100412218);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar12) {
          uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var11 = -1L << (uVar13 & 0x3f);
          }
          else {
            _bzero(p_Var11,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004121ec;
        }
        uVar13 = *(ulong *)(p_Var11 + lVar12 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar13 == 0);
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar6;
    }
    uVar10 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar5) | lVar12 << 6) * 8);
    uVar4 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10041221c);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x38);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar10;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar12;
  } while( true );
}



/* Address: 0x10041221c | FUN_10041221c */

void FUN_10041221c(long param_1)

{
  long lVar1;
  __int64 capacity;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var7;
  long lVar8;
  ulong uVar9;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc55c8;
  FUN_1000037f0(&DAT_100fc55c8,&DAT_100c48aa0);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100412368:
    _swift_release(original);
    *unaff_x20 = p_Var3;
    return;
  }
  lVar8 = 0;
  p_Var7 = original + 0x38;
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)p_Var7;
  if (uVar9 == 0) goto LAB_1004122d8;
  do {
    uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar9 = uVar9 - 1 & uVar9;
    while( true ) {
      puVar5 = (undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar4) | lVar8 << 6) * 0x18);
      FUN_100412390(*puVar5,puVar5[1],puVar5[2],p_Var3);
      if (uVar9 != 0) break;
LAB_1004122d8:
      do {
        lVar1 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100412390);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar1) {
          uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var7 = -1L << (uVar9 & 0x3f);
          }
          else {
            _bzero(p_Var7,uVar9 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100412368;
        }
        uVar9 = *(ulong *)(p_Var7 + lVar1 * 8);
        lVar8 = lVar8 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar1;
    }
  } while( true );
}



/* Address: 0x100412390 | FUN_100412390 */

void FUN_100412390(char *param_1,void *param_2,long param_3,long param_4)

{
  _HashTable _Var1;
  __uint64 _Var2;
  String SVar3;
  Hasher HVar4;
  ulong uVar5;
  Bucket BVar6;
  Hasher HVar7;
  undefined8 *puVar8;
  __uint64 *p_Var9;
  __uint64 _Var10;
  long lVar11;
  String SVar12;
  undefined1 auStack_a8 [72];
  
  Swift::Hasher::init(*(__int64 *)(param_4 + 0x28));
  SVar12.bridgeObject = param_2;
  SVar12.str = param_1;
  HVar7.unknown = param_1;
  Swift::String::hash((Hasher)auStack_a8,SVar12);
  HVar4.unknown = *(undefined **)(param_3 + 0x10);
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar7);
  lVar11 = *(long *)(param_3 + 0x10);
  if (lVar11 != 0) {
    p_Var9 = (__uint64 *)(param_3 + 0x40);
    do {
      HVar4.unknown = (undefined *)p_Var9[-3];
      SVar12 = *(String *)(p_Var9 + -4);
      HVar7.unknown = ((String *)(p_Var9 + -2))->str;
      _Var2 = p_Var9[-1];
      SVar3 = *(String *)(p_Var9 + -2);
      _Var10 = *p_Var9;
      _swift_bridgeObjectRetain(HVar4.unknown);
      _swift_bridgeObjectRetain(_Var2);
      Swift::String::hash((Hasher)auStack_a8,SVar12);
      Swift::String::hash((Hasher)auStack_a8,SVar3);
      Swift::Hasher::_combine(_Var10,HVar7);
      _swift_bridgeObjectRelease(_Var2);
      _swift_bridgeObjectRelease();
      lVar11 = lVar11 + -1;
      p_Var9 = p_Var9 + 5;
    } while (lVar11 != 0);
  }
  uVar5 = Swift::Hasher::_finalize(HVar4);
  _Var1.unknown = (undefined *)(param_4 + 0x38);
  BVar6 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar5 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar5 = (ulong)BVar6.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar5) =
       1L << (BVar6.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar5);
  puVar8 = (undefined8 *)(*(long *)(param_4 + 0x30) + BVar6.offset * 0x18);
  *puVar8 = param_1;
  puVar8[1] = param_2;
  puVar8[2] = param_3;
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
  return;
}



/* Address: 0x1004124e0 | FUN_1004124e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Set<undefined> FUN_1004124e0(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  Set<undefined> SVar3;
  code *pcVar4;
  Set<undefined> SVar5;
  ulong uVar6;
  __int64 minimumCapacity;
  long lVar7;
  ulong uVar8;
  undefined1 local_60 [8];
  undefined *local_58;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    minimumCapacity = *(__int64 *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    minimumCapacity = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  FUN_10000ec2c(0,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
  FUN_10041261c();
  SVar5 = Swift::Set::init(minimumCapacity);
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar7 = *(long *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
    SVar3 = SVar5;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    local_58 = SVar5.unknown;
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    SVar3.unknown = local_58;
  }
  local_58 = SVar5.unknown;
  if (lVar7 != 0) {
    uVar8 = 0;
    local_58 = SVar3.unknown;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100412608);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_1.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
      }
      lVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100412604);
        (*pcVar4)();
      }
      FUN_100410e6c(local_60,uVar6);
      uVar8 = uVar8 + 1;
    } while (lVar1 != lVar7);
  }
  return (Set<undefined>)local_58;
}



/* Address: 0x10041261c | FUN_10041261c */

void FUN_10041261c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc5560 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fc5558,&PTR__OBJC_CLASS___UNNotificationCategory_100f8dca0);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fc5560 = puVar2;
  return;
}



/* Address: 0x100412670 | thunk_FUN_100412674 */

void thunk_FUN_100412674(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc55d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48ab0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48ab0,&DAT_100ed2e08);
  DAT_100fc55d0 = pTVar1;
  return;
}



/* Address: 0x100412674 | FUN_100412674 */

void FUN_100412674(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc55d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48ab0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48ab0,&DAT_100ed2e08);
  DAT_100fc55d0 = pTVar1;
  return;
}



/* Address: 0x1004126b4 | FUN_1004126b4 */

undefined1  [16] FUN_1004126b4(void)

{
  return ZEXT816(0x100ed2e08);
}



/* Address: 0x1004126c4 | FUN_1004126c4 */

void FUN_1004126c4(void)

{
  long unaff_x20;
  
  FUN_1003085ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1004126f4 | FUN_1004126f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004126f4(void)

{
  return ZEXT816(0x100fc5618);
}



/* Address: 0x100412714 | FUN_100412714 */

void FUN_100412714(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  FUN_100076688(param_1,auStack_78);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_90,0x21,0);
  uVar9 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x28) = uVar9;
  uVar7 = uVar9;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_100410598(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(unaff_x20 + 0x28) = uVar7;
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar9 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100410598(uVar9,uVar6 + 1,1,uVar7);
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  FUN_100076508(auStack_78,uVar9 + uVar6 * 0x28 + 0x20);
  *(ulong *)(unaff_x20 + 0x28) = uVar9;
  _swift_endAccess(auStack_90);
  cVar5 = *(char *)(unaff_x20 + 0x20);
  if (cVar5 != -1) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    if (cVar5 == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x20);
      FUN_100004640(param_1,uVar2);
      pcVar8 = *(code **)(lVar4 + 0x10);
      FUN_100308598(uVar1,uVar3,1);
      (*pcVar8)(uVar1,uVar2,lVar4);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x20);
      FUN_100004640(param_1,uVar2);
      pcVar8 = *(code **)(lVar4 + 8);
      FUN_100308598(uVar1,uVar3,cVar5);
      (*pcVar8)(uVar1,uVar3,uVar2,lVar4);
    }
    FUN_1003085ac(uVar1,uVar3,cVar5);
  }
  return;
}



/* Address: 0x100412898 | FUN_100412898 */

void FUN_100412898(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  FUN_1003085ac(uVar1,uVar2,uVar3);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == 0) {
    FUN_1001037b4(param_1,param_2);
  }
  else {
    lVar6 = lVar5 + 0x20;
    FUN_1001037b4(param_1,param_2);
    _swift_bridgeObjectRetain(lVar5);
    do {
      FUN_100076688(lVar6,auStack_90);
      lVar4 = lStack_70;
      uVar1 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar4 + 8))(param_1,param_2,uVar1,lVar4);
      FUN_100004594(auStack_90);
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  return;
}



/* Address: 0x100412988 | FUN_100412988 */

void FUN_100412988(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  FUN_1003085ac(uVar1,uVar2,uVar3);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == 0) {
    _swift_errorRetain(param_1);
  }
  else {
    lVar6 = lVar5 + 0x20;
    _swift_errorRetain(param_1);
    _swift_bridgeObjectRetain(lVar5);
    do {
      FUN_100076688(lVar6,auStack_90);
      lVar4 = lStack_70;
      uVar1 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar4 + 0x10))(param_1,uVar1,lVar4);
      FUN_100004594(auStack_90);
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  return;
}



/* Address: 0x100412a6c | FUN_100412a6c */

void FUN_100412a6c(void)

{
  FUN_100412714();
  return;
}



/* Address: 0x100412a8c | FUN_100412a8c */

void FUN_100412a8c(void)

{
  FUN_100412898();
  return;
}



/* Address: 0x100412aac | FUN_100412aac */

void FUN_100412aac(void)

{
  FUN_100412988();
  return;
}


