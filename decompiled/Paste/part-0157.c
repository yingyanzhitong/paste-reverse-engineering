/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001e9114 | FUN_1001e9114 */

void FUN_1001e9114(__uint64 param_1,undefined *param_2)

{
  Hasher HVar1;
  __int64 _Var2;
  Hasher HVar3;
  long unaff_x20;
  
  HVar3.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  Swift::Hasher::_combine(param_1,HVar3);
  HVar1.unknown = param_2;
  Swift::Hasher::_combine((__uint64)param_2,HVar3);
  _Var2 = Swift::Hasher::_finalize(HVar1);
  FUN_1001e9264(param_1,param_2,_Var2);
  return;
}



/* Address: 0x1001e9180 | FUN_1001e9180 */

void FUN_1001e9180(undefined *param_1,Hasher param_2)

{
  Hasher HVar1;
  __int64 _Var2;
  long unaff_x20;
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar1.unknown = param_1;
  Swift::Hasher::_combine((__uint64)param_1,param_2);
  _Var2 = Swift::Hasher::_finalize(HVar1);
  FUN_100071554(param_1,_Var2);
  return;
}



/* Address: 0x1001e91d8 | FUN_1001e91d8 */

void FUN_1001e91d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e91ec(param_1,param_2,PTR_hash_100eabef8,FUN_1000715b8);
  return;
}



/* Address: 0x1001e91ec | FUN_1001e91ec */

void FUN_1001e91ec(undefined8 param_1,undefined8 param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  Hasher HVar1;
  __int64 _Var2;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar1.unknown = auStack_88;
  (*param_3)(HVar1.unknown,param_1,param_2);
  _Var2 = Swift::Hasher::_finalize(HVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001e9260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,_Var2);
  return;
}



/* Address: 0x1001e9264 | FUN_1001e9264 */

void FUN_1001e9264(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
    if (*plVar1 == param_1 && plVar1[1] == param_2) {
      return;
    }
    param_3 = param_3 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  return;
}



/* Address: 0x1001e92d4 | FUN_1001e92d4 */

undefined * FUN_1001e92d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e93cc);
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
    puVar3 = &DAT_100fb5068;
    FUN_1000037f0(&DAT_100fb5068,&DAT_100c332a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) =
         (long)(puVar4 + -0x20) - ((long)(puVar4 + -0x20) >> 0x3f) & 0xfffffffffffffffe;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 << 1);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 2 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 << 1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001e93cc | FUN_1001e93cc */

undefined * FUN_1001e93cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e94d4);
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
    puVar3 = &DAT_100fb5050;
    FUN_1000037f0(&DAT_100fb5050,&DAT_100c33288);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001e94d4 | FUN_1001e94d4 */

undefined8 FUN_1001e94d4(char *param_1,void *param_2)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  void *pvVar3;
  
  if (DAT_100fb5078 != -1) {
    _swift_once(&DAT_100fb5078,FUN_1001e9654);
  }
  pvVar1 = DAT_100fb5080;
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  SVar5 = Swift::String::lowercased(SVar5);
  pvVar3 = SVar5.bridgeObject;
  if (*(long *)((long)pvVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar1);
    FUN_1001e9100();
    if (((ulong)SVar5.bridgeObject & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)((long)pvVar1 + 0x38) + (long)SVar5.str * 8);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(pvVar1);
      return uVar4;
    }
    _swift_bridgeObjectRelease(pvVar3);
    pvVar3 = pvVar1;
  }
  _swift_bridgeObjectRelease(pvVar3);
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000014,0x8000000100d9dc10,
             0xd9dc00);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e95f0);
  (*pcVar2)();
}



/* Address: 0x1001e95f0 | FUN_1001e95f0 */

undefined * FUN_1001e95f0(void)

{
  return &DAT_100c332b0;
}



/* Address: 0x1001e95fc | FUN_1001e95fc */

undefined8 FUN_1001e95fc(void)

{
  return 0x35;
}



/* Address: 0x1001e9604 | FUN_1001e9604 */

undefined * FUN_1001e9604(void)

{
  return &DAT_100c332b8;
}



/* Address: 0x1001e9610 | FUN_1001e9610 */

undefined8 FUN_1001e9610(void)

{
  return 0x33;
}



/* Address: 0x1001e9618 | FUN_1001e9618 */

undefined * FUN_1001e9618(void)

{
  return &DAT_100c332c0;
}



/* Address: 0x1001e9624 | FUN_1001e9624 */

undefined8 FUN_1001e9624(void)

{
  return 0x75;
}



/* Address: 0x1001e962c | FUN_1001e962c */

undefined * FUN_1001e962c(void)

{
  return &DAT_100c332c8;
}



/* Address: 0x1001e9638 | FUN_1001e9638 */

undefined8 FUN_1001e9638(void)

{
  return 0x7b;
}



/* Address: 0x1001e9640 | FUN_1001e9640 */

undefined * FUN_1001e9640(void)

{
  return &DAT_100c332d0;
}



/* Address: 0x1001e964c | FUN_1001e964c */

undefined8 FUN_1001e964c(void)

{
  return 0x7c;
}



/* Address: 0x1001e9654 | FUN_1001e9654 */

void FUN_1001e9654(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  this = (_DictionaryStorage *)&DAT_100fb5500;
  FUN_1000037f0(&DAT_100fb5500,&DAT_100c332e0);
  lVar9 = 0x2e;
  lVar5 = 0x2e;
  Swift::_DictionaryStorage::_allocate(this,0x2e);
  _swift_retain();
  puVar10 = &DAT_100fb50c0;
  while( true ) {
    uVar2 = puVar10[-2];
    uVar3 = puVar10[-1];
    uVar11 = *puVar10;
    _swift_bridgeObjectRetain(uVar3);
    uVar6 = uVar2;
    uVar8 = uVar3;
    FUN_1001e9100();
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e9760);
      (*pcVar4)();
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar5 + 0x40 + uVar8) = *(ulong *)(lVar5 + 0x40 + uVar8) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) break;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar9 = lVar9 + -1;
    puVar10 = puVar10 + 3;
    if (lVar9 == 0) {
      _swift_release(lVar5);
      puVar7 = &DAT_100fb5508;
      FUN_1000037f0(&DAT_100fb5508,&DAT_100c332e8);
      _swift_arrayDestroy(&DAT_100fb50b0,0x2e,puVar7);
      DAT_100fb5080 = lVar5;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e9764);
  (*pcVar4)();
}



/* Address: 0x1001e9764 | FUN_1001e9764 */

undefined1  [16] FUN_1001e9764(void)

{
  return ZEXT816(0x100ebecf8);
}



/* Address: 0x1001e9774 | FUN_1001e9774 */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1001e9774(char param_1,uint param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  if ((param_2 >> 0x12 & 1) != 0) {
    pcVar1 = (char *)0x838ce2;
    if (param_1 != '\0') {
      pcVar1 = (char *)0x746e6f4320838ce2;
    }
    pvVar2 = (void *)0xa300000000000000;
    if (param_1 != '\0') {
      pvVar2 = (void *)0xab000000006c6f72;
    }
    SVar4.bridgeObject = pvVar2;
    SVar4.str = pcVar1;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar4,SVar8);
    _swift_bridgeObjectRelease(pvVar2);
  }
  if ((param_2 >> 0x13 & 1) != 0) {
    pcVar1 = (char *)0xa58ce2;
    if (param_1 != '\0') {
      pcVar1 = (char *)0x6974704f20a58ce2;
    }
    pvVar2 = (void *)0xa300000000000000;
    if (param_1 != '\0') {
      pvVar2 = (void *)0xaa00000000006e6f;
    }
    SVar5.bridgeObject = pvVar2;
    SVar5.str = pcVar1;
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar5,SVar9);
    _swift_bridgeObjectRelease(pvVar2);
  }
  if ((param_2 >> 0x11 & 1) != 0) {
    pcVar1 = (char *)0xa787e2;
    if (param_1 != '\0') {
      pcVar1 = (char *)0x6669685320a787e2;
    }
    pvVar2 = (void *)0xa300000000000000;
    if (param_1 != '\0') {
      pvVar2 = (void *)0xa900000000000074;
    }
    SVar6.bridgeObject = pvVar2;
    SVar6.str = pcVar1;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar6,SVar10);
    _swift_bridgeObjectRelease(pvVar2);
  }
  if ((param_2 >> 0x14 & 1) != 0) {
    pcVar1 = (char *)0x988ce2;
    if (param_1 != '\0') {
      pcVar1 = (char *)0x6d6d6f4320988ce2;
    }
    pvVar2 = (void *)0xa300000000000000;
    if (param_1 != '\0') {
      pvVar2 = (void *)0xab00000000646e61;
    }
    SVar3.bridgeObject = pvVar2;
    SVar3.str = pcVar1;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar3,SVar7);
    _swift_bridgeObjectRelease(pvVar2);
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1001e98e8 | thunk_FUN_1001e98ec */

void thunk_FUN_1001e98ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c332f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c332f0,&DAT_100ebed98);
  DAT_100fb5510 = pTVar1;
  return;
}



/* Address: 0x1001e98ec | FUN_1001e98ec */

void FUN_1001e98ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c332f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c332f0,&DAT_100ebed98);
  DAT_100fb5510 = pTVar1;
  return;
}



/* Address: 0x1001e992c | thunk_FUN_1001e9930 */

void thunk_FUN_1001e9930(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fb4f60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1001e7790(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c33204;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33204,uVar1);
  DAT_100fb4f60 = pTVar2;
  return;
}



/* Address: 0x1001e9930 | FUN_1001e9930 */

void FUN_1001e9930(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fb4f60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1001e7790(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c33204;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33204,uVar1);
  DAT_100fb4f60 = pTVar2;
  return;
}



/* Address: 0x1001e9974 | FUN_1001e9974 */

void FUN_1001e9974(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001e9980 | FUN_1001e9980 */

undefined1  [16] FUN_1001e9980(void)

{
  return ZEXT816(0x100ebed98);
}



/* Address: 0x1001e9990 | FUN_1001e9990 */

undefined1  [16] FUN_1001e9990(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = (undefined1 *)0x8000000100d9dc30;
  uVar1 = 0xd000000000000011;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e700000000000000;
    uVar1 = 0x65646f4379656b;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1001e99d0 | FUN_1001e99d0 */

void FUN_1001e99d0(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x65646f4379656b || param_3 != &DAT_e700000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65646f4379656b,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == -0x2fffffffffffffef) && (param_3 == (undefined1 *)0x8000000100d9dc30)) {
        _swift_bridgeObjectRelease(0x8000000100d9dc30);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000011,(_StringGuts)0x8000000100d9dc30,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_1001e9a30;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1001e9a30:
  *param_1 = uVar2;
  return;
}



/* Address: 0x1001e9ab0 | FUN_1001e9ab0 */

String FUN_1001e9ab0(void)

{
  String SVar1;
  
  FUN_1001e9c34();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1001e9ad8 | FUN_1001e9ad8 */

String FUN_1001e9ad8(void)

{
  String SVar1;
  
  FUN_1001e9c34();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1001e9b00 | FUN_1001e9b00 */

void FUN_1001e9b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fb5518;
  FUN_1000037f0(&DAT_100fb5518,&DAT_100c333c0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1001e9c34();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(param_2,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(param_3,&local_52,puVar1);
    (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1001e9c34 | FUN_1001e9c34 */

void FUN_1001e9c34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33588;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33588,&DAT_100ebeee0);
  DAT_100fb5520 = pTVar1;
  return;
}



/* Address: 0x1001e9c74 | FUN_1001e9c74 */

void FUN_1001e9c74(void)

{
  FUN_1001e9d68();
  return;
}



/* Address: 0x1001e9c88 | FUN_1001e9c88 */

void FUN_1001e9c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_1001e9d68();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x1001e9cb0 | FUN_1001e9cb0 */

void FUN_1001e9cb0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1001e9b00(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1001e9cc8 | FUN_1001e9cc8 */

undefined1  [16] FUN_1001e9cc8(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  
  uVar2 = 0;
  FUN_1001e9774();
  pvVar3 = param_2;
  FUN_1001e7e50();
  SVar4.bridgeObject = pvVar3;
  SVar4.str = param_1;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(pvVar3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Address: 0x1001e9d18 | FUN_1001e9d18 */

undefined1  [16] FUN_1001e9d18(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *unaff_x20;
  String SVar6;
  String SVar7;
  
  pcVar3 = (char *)*unaff_x20;
  pvVar4 = (void *)unaff_x20[1];
  uVar2 = 0;
  FUN_1001e9774();
  pvVar5 = pvVar4;
  FUN_1001e7e50();
  SVar6.bridgeObject = pvVar5;
  SVar6.str = pcVar3;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  _swift_bridgeObjectRelease(pvVar5);
  auVar1._8_8_ = pvVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Address: 0x1001e9d68 | FUN_1001e9d68 */

/* WARNING: Removing unreachable block (ram,0x0001001e9e2c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001e9e24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1001e9d68(long param_1)

{
  undefined *puVar1;
  __uint64 _Var2;
  long extraout_x8;
  __int64 unaff_x21;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fb5548;
  FUN_1000037f0(&DAT_100fb5548,&DAT_100c335d8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var2 = *(__uint64 *)(param_1 + 0x18);
  FUN_100004640(param_1,_Var2);
  FUN_1001e9c34();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    unaff_x21 = Swift::KeyedDecodingContainer::_decode(puVar1,puVar1);
    local_52 = 1;
    _Var2 = Swift::KeyedDecodingContainer::_decode(unaff_x21,puVar1);
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  auVar4._8_8_ = _Var2;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Address: 0x1001e9ebc | thunk_FUN_1001e9ec0 */

void thunk_FUN_1001e9ec0(void)

{
  FUN_1001e9ec0();
  return;
}



/* Address: 0x1001e9ec0 | FUN_1001e9ec0 */

void FUN_1001e9ec0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33458;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33458,&DAT_100ebee48);
  DAT_100fb5528 = pTVar1;
  return;
}



/* Address: 0x1001e9f00 | FUN_1001e9f00 */

void FUN_1001e9f00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001e9f0c | FUN_1001e9f0c */

undefined1  [16] FUN_1001e9f0c(void)

{
  return ZEXT816(0x100ebee48);
}



/* Address: 0x1001e9f1c | FUN_1001e9f1c */

undefined1  [16] FUN_1001e9f1c(void)

{
  return ZEXT816(0x100ebeee0);
}



/* Address: 0x1001e9f2c | thunk_FUN_1001e9f30 */

void thunk_FUN_1001e9f30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33560;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33560,&DAT_100ebeee0);
  DAT_100fb5530 = pTVar1;
  return;
}



/* Address: 0x1001e9f30 | FUN_1001e9f30 */

void FUN_1001e9f30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c33560;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c33560,&DAT_100ebeee0);
  DAT_100fb5530 = pTVar1;
  return;
}



/* Address: 0x1001e9f70 | thunk_FUN_1001e9f74 */

void thunk_FUN_1001e9f74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c334f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c334f8,&DAT_100ebeee0);
  DAT_100fb5538 = pTVar1;
  return;
}



/* Address: 0x1001e9f74 | FUN_1001e9f74 */

void FUN_1001e9f74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c334f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c334f8,&DAT_100ebeee0);
  DAT_100fb5538 = pTVar1;
  return;
}



/* Address: 0x1001e9fb4 | thunk_FUN_1001e9fb8 */

void thunk_FUN_1001e9fb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c334d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c334d0,&DAT_100ebeee0);
  DAT_100fb5540 = pTVar1;
  return;
}



/* Address: 0x1001e9fb8 | FUN_1001e9fb8 */

void FUN_1001e9fb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c334d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c334d0,&DAT_100ebeee0);
  DAT_100fb5540 = pTVar1;
  return;
}



/* Address: 0x1001e9ff8 | FUN_1001e9ff8 */

undefined1  [16] FUN_1001e9ff8(ulong param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_1 & 0xff00000000) == 0x100000000) {
    Swift::_StringGuts::grow(0x30,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = 0xd00000000000002d;
    local_38 = 0x8000000100d9dcb0;
  }
  else {
    Swift::_StringGuts::grow(0x35,param_2);
    local_40 = 0;
    local_38 = 0xe000000000000000;
    SVar2.bridgeObject = (void *)0x8000000100d9dce0;
    SVar2.str = &DAT_d000000000000032;
    SVar4.bridgeObject = param_4;
    SVar4.str = param_3;
    Swift::String::append(SVar2,SVar4);
  }
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x29;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar3,SVar6);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x1001ea0ec | FUN_1001ea0ec */

void FUN_1001ea0ec(void)

{
  uint5 *unaff_x20;
  
  FUN_1001e9ff8((ulong)*unaff_x20);
  return;
}



/* Address: 0x1001ea0fc | FUN_1001ea0fc */

void FUN_1001ea0fc(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_d8 [11];
  int aiStack_80 [6];
  undefined8 local_68;
  long lStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x18) = IVar2;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001e7678();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = &DAT_100c33708;
  _swift_getKeyPath();
  puVar3 = &DAT_100fb4f50;
  FUN_1000037f0(&DAT_100fb4f50,&DAT_100c33050);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar3);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  local_d8[0] = 0x56b657962;
  _GetEventDispatcherTarget();
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),aiStack_80,0x21,0);
  _InstallEventHandler(puVar1,FUN_1001ea96c,1,local_d8);
  _swift_endAccess(aiStack_80);
  iVar7 = (int)puVar1;
  if (iVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_retain(uVar6);
    FUN_1000da768(aiStack_80);
    _swift_release(uVar6);
    piVar4 = aiStack_80;
    FUN_100004640(piVar4,local_68);
    FUN_1001eb9e8();
    puVar1 = &DAT_100ebf020;
    _swift_allocError(&DAT_100ebf020,piVar4,0,0);
    *piVar4 = iVar7;
    *(undefined1 *)(piVar4 + 1) = 0;
    puVar3 = &DAT_100fb5558;
    FUN_1000037f0(&DAT_100fb5558,&DAT_100c335e0);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = 0x737574617473;
    *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined1 **)(puVar3 + 0x28) = &DAT_e600000000000000;
    *(long *)(puVar3 + 0x30) = (long)iVar7;
    puVar5 = puVar3;
    FUN_1001e7874();
    _swift_setDeallocating(puVar3);
    FUN_100005808(puVar3 + 0x20,&DAT_100fb4f90,&DAT_100c33240);
    (**(code **)(lStack_60 + 0x28))(puVar1,puVar5,local_68,lStack_60);
    _swift_bridgeObjectRelease(puVar5);
    _swift_errorRelease(puVar1);
    FUN_100004594(aiStack_80);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001ea338 | FUN_1001ea338 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ea338(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  OS_dispatch_queue *pOVar12;
  _StringGuts _Var13;
  char *pcVar14;
  void *pvVar15;
  long extraout_x8;
  long extraout_x8_00;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x20;
  long lVar20;
  long lVar21;
  DispatchWorkItemFlags qos;
  ID self;
  long lVar22;
  ulong *puVar23;
  String SVar24;
  String SVar25;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar21 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar22 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  qos.unknown = (undefined *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uVar7 = param_1;
  _GetEventClass();
  if ((int)uVar7 == 0x6b657962) {
    local_110 = 0;
    local_148 = lVar22;
    local_140 = DVar6.unknown;
    local_138 = lVar21;
    local_130 = DVar5.unknown;
    _GetEventParameter(param_1,0x2d2d2d2d,0x686b6964,0,8,0,&local_110);
    self = *(ID *)(unaff_x20 + 0x18);
    objc_stub::lock(self);
    _swift_beginAccess(unaff_x20 + 0x20,auStack_88,0,0);
    pvVar16 = (void *)0x0;
    lVar21 = *(long *)(unaff_x20 + 0x20);
    puVar23 = (ulong *)(lVar21 + 0x40);
    uVar19 = -1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if (-uVar19 < 0x40) {
      uVar17 = ~(-1L << (-uVar19 & 0x3f));
    }
    uVar17 = uVar17 & *puVar23;
    uVar1 = uVar17;
    pvVar2 = pvVar16;
    do {
      while (pvVar15 = pvVar2, uVar18 = uVar1, uVar17 == 0) {
        bVar4 = SCARRY8((long)pvVar16,1);
        pvVar16 = (void *)((long)pvVar16 + 1);
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ea968);
          (*pcVar3)();
        }
        if ((long)(0x3f - uVar19 >> 6) <= (long)pvVar16) {
          _swift_bridgeObjectRetain(lVar21);
          FUN_10000c650();
          objc_stub::unlock(self);
          FUN_1000da768(&local_108);
          pcVar3 = local_e8;
          puVar11 = local_f0;
          FUN_100004640(&local_108,local_f0);
          puVar8 = &DAT_100fb5730;
          FUN_1000037f0(&DAT_100fb5730,&DAT_100c33740);
          _swift_initStaticObject();
          puVar9 = puVar8;
          FUN_1001e7a58();
          FUN_100005808(puVar8 + 0x20,&DAT_100fb5738,&DAT_100c33748);
          puVar8 = &DAT_100fb5558;
          FUN_1000037f0(&DAT_100fb5558,&DAT_100c335e0);
          _swift_initStackObject();
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          *(undefined8 *)(puVar8 + 0x20) = 0x695f6e6f62726163;
          *(undefined **)(puVar8 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
          *(undefined8 *)(puVar8 + 0x28) = 0xe900000000000064;
          *(ulong *)(puVar8 + 0x30) = local_110 >> 0x20;
          puVar10 = puVar8;
          FUN_1001e7874();
          _swift_setDeallocating(puVar8);
          FUN_100005808(puVar8 + 0x20,&DAT_100fb4f90,&DAT_100c33240);
          (**(code **)(pcVar3 + 0x38))
                    (0xd000000000000037,0x8000000100d9dd20,2,puVar9,puVar10,puVar11,pcVar3);
          _swift_bridgeObjectRelease(puVar9);
          _swift_bridgeObjectRelease(puVar10);
          FUN_100004594(&local_108);
          goto LAB_1001ea65c;
        }
        uVar1 = uVar18;
        pvVar2 = pvVar15;
        uVar17 = puVar23[(long)pvVar16];
      }
      uVar1 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                        (long)pvVar16 * 0x200);
      uVar1 = uVar17;
      pvVar2 = pvVar16;
    } while (*(int *)(lVar22 + 0x20) != local_110._4_4_);
    _swift_bridgeObjectRetain(lVar21);
    _swift_retain(lVar22);
    FUN_10000c650(lVar21,puVar23,~uVar19,pvVar15,uVar18);
    uStack_158 = *(undefined8 *)(lVar22 + 0x18);
    local_160 = *(undefined8 *)(lVar22 + 0x10);
    _swift_retain(*(undefined8 *)(lVar22 + 0x18));
    _swift_release(lVar22);
    puVar8 = &DAT_100ebf090;
    _swift_allocObject(&DAT_100ebf090,0x20,7);
    *(undefined8 *)(puVar8 + 0x18) = uStack_158;
    *(undefined8 *)(puVar8 + 0x10) = local_160;
    objc_stub::unlock(self);
    puVar11 = &DAT_100ebf040;
    pcVar14 = (char *)0x7;
    _swift_allocObject(&DAT_100ebf040,0x20);
    *(code **)(puVar11 + 0x10) = FUN_1000386a0;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    _swift_retain();
    FUN_1000da768(&local_108);
    _Var13.unknown = local_f0;
    FUN_100004640(&local_108);
    local_120 = (undefined *)0x0;
    local_118 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x11,_Var13);
    _swift_bridgeObjectRelease(local_118);
    local_120 = (undefined *)0x6163206465726966;
    local_118 = 0xef3d44496e6f6272;
    local_124 = local_110._4_4_;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = pvVar15;
    SVar25.str = pcVar14;
    Swift::String::append(SVar24,SVar25);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar7 = local_118;
    (**(code **)(local_e8 + 0x30))
              (0x74756374726f6873,&DAT_e800000000000000,local_120,local_118,local_f0,local_e8);
    _swift_bridgeObjectRelease(uVar7);
    FUN_100004594(&local_108);
    pOVar12 = (OS_dispatch_queue *)0x0;
    FUN_1001ebb34();
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
    local_e8 = FUN_1000386a0;
    local_108 = PTR___NSConcreteStackBlock_100ea82a0;
    local_100 = 0x42000000;
    local_f8 = FUN_100030410;
    local_f0 = &DAT_100ebf058;
    local_e0 = puVar11;
    pvVar16 = __Block_copy(&local_108);
    DVar6.unknown = puVar11;
    _swift_retain();
    DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1001ebb94();
    puVar8 = &DAT_100fb5750;
    FUN_1000037f0(&DAT_100fb5750,&DAT_100c33750);
    puVar10 = puVar8;
    FUN_1001ebbd8();
    puVar9 = local_130;
    Swift::SetAlgebra::_init(lVar20,&local_120,puVar8,puVar10,local_130,DVar6.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar16);
    _swift_release_n(puVar11,2);
    (**(code **)(local_138 + 8))(lVar20,puVar9);
    (**(code **)(local_148 + 8))(qos.unknown,local_140);
    _swift_release(local_e0);
  }
LAB_1001ea65c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1001ea96c | FUN_1001ea96c */

undefined8 FUN_1001ea96c(undefined8 param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    _swift_retain(param_3);
    FUN_1001ea338(param_2);
    _swift_release(param_3);
  }
  return 0;
}



/* Address: 0x1001ea9b0 | FUN_1001ea9b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ea9b0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _RemoveEventHandler();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001eaa04 | FUN_1001eaa04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eaa04(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _RemoveEventHandler();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001eaa64 | FUN_1001eaa64 */

void FUN_1001eaa64(ulong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  _StringGuts _Var10;
  char *pcVar11;
  undefined8 uVar12;
  long unaff_x20;
  ID self;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined4 auStack_90 [6];
  undefined *local_78;
  long lStack_70;
  
  FUN_1001eae90();
  FUN_1001eb0b4(0);
  _swift_allocObject();
  _swift_retain(param_4);
  uVar3 = param_1;
  FUN_1001eb8d0(param_1,param_2,param_3,param_4);
  _swift_release(param_4);
  if (*(int *)(uVar3 + 0x24) == 0) {
    self = *(ID *)(unaff_x20 + 0x18);
    objc_stub::lock(self);
    _swift_beginAccess(unaff_x20 + 0x20,auStack_90,0x21,0);
    _swift_retain(uVar3);
    pvVar9 = *(void **)(unaff_x20 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    pcVar11 = param_2;
    FUN_1001eb1e4(uVar3,param_1);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
    _swift_endAccess(auStack_90);
    objc_stub::unlock(self);
    FUN_1000da768(auStack_90);
    _Var10.unknown = local_78;
    FUN_100004640(auStack_90);
    Swift::_StringGuts::grow(0x2e,_Var10);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar13 = Swift::CustomStringConvertible::get_description();
    SVar15.bridgeObject = pvVar9;
    SVar15.str = pcVar11;
    Swift::String::append(SVar13,SVar15);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    SVar13.bridgeObject = (void *)0xe90000000000003d;
    SVar13.str = (char *)0x65646f4379656b20;
    SVar16.bridgeObject = pvVar9;
    SVar16.str = pcVar11;
    Swift::String::append(SVar13,SVar16);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eae8c);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eae90);
      (*pcVar2)();
    }
    SVar13 = Swift::CustomStringConvertible::get_description();
    SVar17.bridgeObject = pvVar9;
    SVar17.str = pcVar11;
    Swift::String::append(SVar13,SVar17);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    SVar14.bridgeObject = (void *)0xeb000000003d7372;
    SVar14.str = (char *)0x65696669646f6d20;
    SVar18.bridgeObject = pvVar9;
    SVar18.str = pcVar11;
    Swift::String::append(SVar14,SVar18);
    FUN_1001e7d58(param_1,param_2);
    SVar13 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = pvVar9;
    SVar19.str = pcVar11;
    Swift::String::append(SVar13,SVar19);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    (**(code **)(lStack_70 + 0x30))
              (0x74756374726f6873,&DAT_e800000000000000,0xd000000000000014,0x8000000100d9dc70,
               local_78,lStack_70);
    _swift_bridgeObjectRelease(0x8000000100d9dc70);
  }
  else {
    FUN_1000da768(auStack_90);
    puVar4 = auStack_90;
    FUN_100004640(puVar4,local_78);
    uVar1 = *(undefined4 *)(uVar3 + 0x24);
    FUN_1001eb9e8();
    puVar5 = &DAT_100ebf020;
    _swift_allocError(&DAT_100ebf020,puVar4,0,0);
    *puVar4 = uVar1;
    *(undefined1 *)(puVar4 + 1) = 1;
    puVar6 = &DAT_100fb5558;
    FUN_1000037f0(&DAT_100fb5558,&DAT_100c335e0);
    _swift_initStackObject();
    *(undefined8 *)(puVar6 + 0x20) = 0x737574617473;
    *(undefined8 *)(puVar6 + 0x18) = 6;
    *(undefined8 *)(puVar6 + 0x10) = 3;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e600000000000000;
    puVar8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(long *)(puVar6 + 0x30) = (long)*(int *)(uVar3 + 0x24);
    *(undefined **)(puVar6 + 0x48) = puVar8;
    *(undefined8 *)(puVar6 + 0x50) = 0x6b5f6e6f62726163;
    *(undefined8 *)(puVar6 + 0x58) = 0xef65646f635f7965;
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eae84);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eae88);
      (*pcVar2)();
    }
    *(ulong *)(puVar6 + 0x60) = param_1;
    *(undefined **)(puVar6 + 0x78) = puVar8;
    *(undefined8 *)(puVar6 + 0x80) = 0xd000000000000010;
    *(undefined8 *)(puVar6 + 0x88) = 0x8000000100d9dc50;
    FUN_1001e7d58(param_1,param_2);
    *(undefined **)(puVar6 + 0xa8) = puVar8;
    *(ulong *)(puVar6 + 0x90) = param_1 & 0xffffffff;
    puVar7 = puVar6;
    FUN_1001e7874(puVar6);
    _swift_setDeallocating(puVar6);
    puVar8 = &DAT_100fb4f90;
    FUN_1000037f0(&DAT_100fb4f90,&DAT_100c33240);
    _swift_arrayDestroy(puVar6 + 0x20,3,puVar8);
    (**(code **)(lStack_70 + 0x28))(puVar5,puVar7,local_78,lStack_70);
    _swift_bridgeObjectRelease(puVar7);
    _swift_errorRelease(puVar5);
  }
  _swift_release(uVar3);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x1001eae90 | FUN_1001eae90 */

void FUN_1001eae90(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  long unaff_x20;
  ID self;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_88 [24];
  undefined *local_70;
  long lStack_68;
  
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  pcVar4 = (char *)0x21;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_88);
  uVar2 = param_1;
  FUN_1001eb160(param_1,param_2);
  _swift_endAccess(auStack_88);
  objc_stub::unlock(self);
  if (uVar2 != 0) {
    FUN_1000da768(auStack_88);
    _Var3.unknown = local_70;
    FUN_100004640(auStack_88);
    Swift::_StringGuts::grow(0x30,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar8.bridgeObject = pvVar5;
    SVar8.str = pcVar4;
    Swift::String::append(SVar6,SVar8);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    SVar6.bridgeObject = (void *)0xe90000000000003d;
    SVar6.str = (char *)0x65646f4379656b20;
    SVar9.bridgeObject = pvVar5;
    SVar9.str = pcVar4;
    Swift::String::append(SVar6,SVar9);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001eb0b0);
      (*pcVar1)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001eb0b4);
      (*pcVar1)();
    }
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar10.bridgeObject = pvVar5;
    SVar10.str = pcVar4;
    Swift::String::append(SVar6,SVar10);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    SVar7.bridgeObject = (void *)0xeb000000003d7372;
    SVar7.str = (char *)0x65696669646f6d20;
    SVar11.bridgeObject = pvVar5;
    SVar11.str = pcVar4;
    Swift::String::append(SVar7,SVar11);
    FUN_1001e7d58(param_1,param_2);
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::append(SVar6,SVar12);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    (**(code **)(lStack_68 + 0x30))
              (0x74756374726f6873,&DAT_e800000000000000,0xd000000000000016,0x8000000100d9dc90,
               local_70,lStack_68);
    _swift_bridgeObjectRelease(0x8000000100d9dc90);
    _swift_release(uVar2);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x1001eb0b4 | FUN_1001eb0b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001eb0b4(void)

{
  return ZEXT816(0x100fb5658);
}



/* Address: 0x1001eb0d4 | FUN_1001eb0d4 */

void FUN_1001eb0d4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb56e0;
  FUN_1000037f0(&DAT_100fb56e0,&DAT_100c33700);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  DAT_100fb56d8 = puVar1;
  return;
}



/* Address: 0x1001eb110 | FUN_1001eb110 */

void FUN_1001eb110(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _UnregisterEventHotKey();
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001eb160 | FUN_1001eb160 */

undefined8 FUN_1001eb160(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  FUN_1001e9114();
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1001eb330();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_1001eb72c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Address: 0x1001eb1e4 | FUN_1001eb1e4 */

void FUN_1001eb1e4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_1001e9114();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb2bc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1001eb490(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_1001e9114();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb284);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001eb330();
    lVar6 = *unaff_x20;
    goto joined_r0x0001001eb2d0;
  }
  lVar6 = *unaff_x20;
joined_r0x0001001eb2d0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    _swift_release(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001eb330);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}


