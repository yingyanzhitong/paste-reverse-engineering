/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000ddfac | FUN_1000ddfac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000ddfac(undefined8 param_1,long param_2)

{
  DecodingError DVar1;
  Date DVar2;
  ID self;
  NSString *pNVar3;
  Date DVar4;
  DecodingError DVar9;
  long extraout_x8;
  undefined *self_00;
  long extraout_x12;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  String SVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    SVar8 = Swift::SingleValueDecodingContainer::_decode();
    self_00 = &_OBJC_CLASS___NSISO8601DateFormatter;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setFormatOptions_(self,0xf73);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    DVar4.unknown = (undefined *)objc_stub::dateFromString_(self,pNVar3);
    if (DVar4.unknown == (undefined *)0x0) {
      DVar1 = Swift::DecodingError::typeMetadataAccessor();
      _DVar9 = (__int8)
               PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(DVar1.value,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      Swift::DecodingError::_dataCorruptedError(0x40,_DVar9,auStack_88,0xd000000000000013);
      _swift_willThrow();
    }
    else {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar4);
      pcVar5 = *(code **)(lVar7 + 0x20);
      (*pcVar5)(lVar6,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
      (*pcVar5)(param_1,lVar6,DVar2.unknown);
    }
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x1000de1b4 | FUN_1000de1b4 */

undefined * FUN_1000de1b4(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *capacity;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fad230;
    FUN_1000037f0(&DAT_100fad230,&DAT_100c2c118);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_a8;
      FUN_100011090(param_1,puVar5,&DAT_100fad238,&DAT_100c2c120);
      puVar3 = &local_a8;
      FUN_1000f1290();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000de2e8);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = local_88;
      puVar5[1] = uStack_a0;
      *puVar5 = local_a8;
      puVar5[3] = uStack_90;
      puVar5[2] = local_98;
      FUN_100011080(auStack_80,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000de2ec);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x48;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x1000de2ec | FUN_1000de2ec */

undefined8 FUN_1000de2ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar5 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_100fad220;
  FUN_1000037f0(&DAT_100fad220,&DAT_100c2c110);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_01;
  if ((((undefined *)*param_1 == (undefined *)*param_2) &&
      ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar3)) {
    if ((((undefined *)param_1[2] == (undefined *)param_2[2]) &&
        ((undefined *)param_1[3] == (undefined *)param_2[3])) ||
       (bVar3 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar3)) {
      _Var8.unknown = (undefined *)param_1[5];
      puVar9 = (undefined *)param_2[5];
      if (_Var8.unknown == (undefined *)0x0) {
        if (puVar9 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar9 == (undefined *)0x0) {
          return 0;
        }
        if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var8.unknown != puVar9)) &&
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[4],_Var8,
                               (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar3)) {
          return 0;
        }
      }
      lVar6 = 0;
      local_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      FUN_1000dcac4();
      iVar1 = *(int *)(lVar6 + 0x1c);
      lVar6 = (long)*(int *)(puVar5 + 0x30);
      FUN_100011090((long)param_1 + (long)iVar1,lVar10,&DAT_100fad0e8,&DAT_100c2bea0);
      FUN_100011090((long)param_2 + (long)iVar1,lVar10 + lVar6,&DAT_100fad0e8,&DAT_100c2bea0);
      pcVar12 = *(code **)(lVar13 + 0x30);
      lVar7 = lVar10;
      (*pcVar12)(lVar10,1,DVar4.unknown);
      if ((int)lVar7 == 1) {
        lVar6 = lVar10 + lVar6;
        (*pcVar12)(lVar6,1,DVar4.unknown);
        if ((int)lVar6 == 1) {
          FUN_100005808(lVar10,&DAT_100fad0e8,&DAT_100c2bea0);
          return 1;
        }
      }
      else {
        FUN_100011090(lVar10,lVar11,&DAT_100fad0e8,&DAT_100c2bea0);
        lVar7 = lVar10 + lVar6;
        (*pcVar12)(lVar7,1,DVar4.unknown);
        puVar2 = local_68;
        if ((int)lVar7 != 1) {
          (**(code **)(lVar13 + 0x20))(local_68,lVar10 + lVar6,DVar4.unknown);
          puVar5 = &DAT_100fad228;
          FUN_100003a00(&DAT_100fad228,PTR_typeMetadataAccessor_100ea7480,
                        PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
          bVar3 = Swift::Equatable::___infix(lVar11,puVar2,DVar4.unknown,puVar5);
          pcVar12 = *(code **)(lVar13 + 8);
          (*pcVar12)(puVar2,DVar4.unknown);
          (*pcVar12)(lVar11,DVar4.unknown);
          FUN_100005808(lVar10,&DAT_100fad0e8,&DAT_100c2bea0);
          if (!bVar3) {
            return 0;
          }
          return 1;
        }
        (**(code **)(lVar13 + 8))(lVar11,DVar4.unknown);
      }
      FUN_100005808(lVar10,&DAT_100fad220,&DAT_100c2c110);
    }
  }
  return 0;
}



/* Address: 0x1000de5f4 | FUN_1000de5f4 */

void FUN_1000de5f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad0f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c098;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c098,&DAT_100eb5f80);
  DAT_100fad0f8 = pTVar1;
  return;
}



/* Address: 0x1000de634 | FUN_1000de634 */

undefined8 FUN_1000de634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000de684 | FUN_1000de684 */

undefined8 FUN_1000de684(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000dcac4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1000de6c8 | FUN_1000de6c8 */

undefined8 FUN_1000de6c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000dcac4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1000de704 | FUN_1000de704 */

undefined4 FUN_1000de704(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x4b65736e6563696c || param_2 != -0x15ffffffffff869b) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x4b65736e6563696c,(_StringGuts)0xea00000000007965,expecting);
    if (!bVar1) {
      if (((param_1 == 0x4e65736e6563696c) && (param_2 == -0x14ffffffff9a929f)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4e65736e6563696c,(_StringGuts)0xeb00000000656d61,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x65636e6174736e69) || (param_2 != -0x15ffffffffff9bb7)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65636e6174736e69,(_StringGuts)0xea00000000006449,
                             expecting), !bVar1)) {
        if ((param_1 == 0x4173657269707865) && (param_2 == -0x16ffffffffffff8c)) {
          _swift_bridgeObjectRelease(0xe900000000000074);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x4173657269707865,(_StringGuts)0xe900000000000074,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1000de880 | FUN_1000de880 */

long FUN_1000de880(long param_1)

{
  if (param_1 < 0xfa1) {
    if ((param_1 == 0) || (param_1 == 1)) {
      return param_1;
    }
  }
  else {
    if (param_1 == 0xfa3) {
      return 4;
    }
    if (param_1 == 0xfa2) {
      return 3;
    }
    if (param_1 == 0xfa1) {
      return 2;
    }
  }
  return 5;
}



/* Address: 0x1000de8d0 | FUN_1000de8d0 */

/* WARNING: Removing unreachable block (ram,0x0001000de9d8) */

ulong FUN_1000de8d0(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  byte local_51;
  
  puVar1 = &DAT_100fad240;
  FUN_1000037f0(&DAT_100fad240,&DAT_100c2c1f8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ulong *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar3);
  FUN_1000df76c();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_52 = 0;
    FUN_1000df7ac();
    Swift::KeyedDecodingContainer::_decode
              (&local_51,&DAT_100eb6120,&local_52,puVar1,&DAT_100eb6120,KVar2.unknown);
    uVar3 = (ulong)local_51;
    local_53 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_53,puVar1);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar3;
}



/* Address: 0x1000dea40 | FUN_1000dea40 */

undefined * FUN_1000dea40(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fad218;
    FUN_1000037f0(&DAT_100fad218,&DAT_100c2c108);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000deb4c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000deb50);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1000deb50 | FUN_1000deb50 */

long * FUN_1000deb50(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  Date DVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    lVar8 = (long)*(int *)(param_3 + 0x1c);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar4.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    lVar6 = (long)param_2 + lVar8;
    (*pcVar10)(lVar6,1,DVar4.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar4.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar4.unknown);
    }
    else {
      puVar5 = &DAT_100fad0e8;
      FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000dec74 | FUN_1000dec74 */

void FUN_1000dec74(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000decf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1000decfc | FUN_1000decfc */

undefined8 * FUN_1000decfc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar4.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar4.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1000dedf4 | FUN_1000dedf4 */

undefined8 * FUN_1000dedf4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[4] = param_2[4];
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar2 = (long)param_1 + lVar6;
  (*pcVar8)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1000def5c | FUN_1000def5c */

undefined8 * FUN_1000def5c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1000df024 | FUN_1000df024 */

undefined8 * FUN_1000df024(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
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
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,DVar3.unknown);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
      return param_1;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,DVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
    return param_1;
  }
  puVar6 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1000df15c | FUN_1000df15c */

void FUN_1000df15c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000df168 | FUN_1000df168 */

ulong FUN_1000df168(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  uVar2 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0001000df1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x1000df1f4 | FUN_1000df1f4 */

void FUN_1000df1f4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000df200 | FUN_1000df200 */

void FUN_1000df200(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
                    /* WARNING: Could not recover jumptable at 0x0001000df27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x1c),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1000df280 | FUN_1000df280 */

void FUN_1000df280(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_40 = &DAT_100c2bf90;
  puStack_38 = &DAT_100c2bf90;
  local_30 = &DAT_100c2bfa8;
  lVar1 = 0x13f;
  FUN_1000df300();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1000df300 | FUN_1000df300 */

void FUN_1000df300(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fad190 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fad190 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1000df354 | FUN_1000df354 */

undefined1  [16] FUN_1000df354(void)

{
  return ZEXT816(0x100eb5ef0);
}



/* Address: 0x1000df364 | FUN_1000df364 */

void FUN_1000df364(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000df370 | FUN_1000df370 */

void FUN_1000df370(void)

{
  return;
}



/* Address: 0x1000df374 | FUN_1000df374 */

undefined1  [16] FUN_1000df374(void)

{
  return ZEXT816(0x100eb5f80);
}



/* Address: 0x1000df384 | thunk_FUN_1000df388 */

void thunk_FUN_1000df388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c070;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c070,&DAT_100eb5f80);
  DAT_100fad1c8 = pTVar1;
  return;
}



/* Address: 0x1000df388 | FUN_1000df388 */

void FUN_1000df388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c070;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c070,&DAT_100eb5f80);
  DAT_100fad1c8 = pTVar1;
  return;
}



/* Address: 0x1000df3c8 | thunk_FUN_1000df3cc */

void thunk_FUN_1000df3cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c008,&DAT_100eb5f80);
  DAT_100fad1d0 = pTVar1;
  return;
}



/* Address: 0x1000df3cc | FUN_1000df3cc */

void FUN_1000df3cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c008,&DAT_100eb5f80);
  DAT_100fad1d0 = pTVar1;
  return;
}



/* Address: 0x1000df40c | thunk_FUN_1000df410 */

void thunk_FUN_1000df410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2bfe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2bfe0,&DAT_100eb5f80);
  DAT_100fad1d8 = pTVar1;
  return;
}



/* Address: 0x1000df410 | FUN_1000df410 */

void FUN_1000df410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2bfe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2bfe0,&DAT_100eb5f80);
  DAT_100fad1d8 = pTVar1;
  return;
}



/* Address: 0x1000df450 | FUN_1000df450 */

undefined * FUN_1000df450(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fad200;
    FUN_1000037f0(&DAT_100fad200,&DAT_100c2c0e8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100fad208,&DAT_100c2c0f0);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000df578);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000df57c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1000df57c | FUN_1000df57c */

void FUN_1000df57c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c18c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c18c,&DAT_100eb5ff8);
  DAT_100fad1e8 = pTVar1;
  return;
}



/* Address: 0x1000df5bc | FUN_1000df5bc */

void FUN_1000df5bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad1f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c1b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c1b4,&DAT_100eb5ff8);
  DAT_100fad1f0 = pTVar1;
  return;
}



/* Address: 0x1000df5fc | thunk_FUN_1000df608 */

undefined1 * thunk_FUN_1000df608(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1000df600 | FUN_1000df600 */

void FUN_1000df600(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1000df608 | FUN_1000df608 */

undefined1 * FUN_1000df608(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1000df63c | FUN_1000df63c */

undefined1 * FUN_1000df63c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1000df684 | FUN_1000df684 */

void FUN_1000df684(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1000df698 | FUN_1000df698 */

undefined1 * FUN_1000df698(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1000df6d0 | FUN_1000df6d0 */

int FUN_1000df6d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000df718 | FUN_1000df718 */

void FUN_1000df718(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000df758 | FUN_1000df758 */

undefined1  [16] FUN_1000df758(void)

{
  return ZEXT816(0x100eb5ff8);
}



/* Address: 0x1000df768 | thunk_FUN_1000df5bc */

void thunk_FUN_1000df5bc(void)

{
  FUN_1000df5bc();
  return;
}



/* Address: 0x1000df76c | FUN_1000df76c */

void FUN_1000df76c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c388;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c388,&DAT_100eb6090);
  DAT_100fad248 = pTVar1;
  return;
}



/* Address: 0x1000df7ac | FUN_1000df7ac */

void FUN_1000df7ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c360;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c360,&DAT_100eb6120);
  DAT_100fad250 = pTVar1;
  return;
}



/* Address: 0x1000df7ec | FUN_1000df7ec */

undefined1  [16] FUN_1000df7ec(void)

{
  return ZEXT816(0x100eb6090);
}



/* Address: 0x1000df7fc | FUN_1000df7fc */

int FUN_1000df7fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1000df878;
        goto LAB_1000df85c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1000df85c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1000df878:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1000df88c | FUN_1000df88c */

void FUN_1000df88c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 4) {
    uVar3 = 4;
  }
  if (param_3 + 4 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfb < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfc) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1000df90c;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1000df90c:
      *param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfc >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfc);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1000df93c | FUN_1000df93c */

undefined1  [16] FUN_1000df93c(void)

{
  return ZEXT816(0x100eb6120);
}



/* Address: 0x1000df94c | thunk_FUN_1000df950 */

void thunk_FUN_1000df950(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c280;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c280,&DAT_100eb6120);
  DAT_100fad258 = pTVar1;
  return;
}



/* Address: 0x1000df950 | FUN_1000df950 */

void FUN_1000df950(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c280;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c280,&DAT_100eb6120);
  DAT_100fad258 = pTVar1;
  return;
}



/* Address: 0x1000df990 | thunk_FUN_1000df994 */

void thunk_FUN_1000df994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad260 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c338,&DAT_100eb6090);
  DAT_100fad260 = pTVar1;
  return;
}



/* Address: 0x1000df994 | FUN_1000df994 */

void FUN_1000df994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad260 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c338,&DAT_100eb6090);
  DAT_100fad260 = pTVar1;
  return;
}



/* Address: 0x1000df9d4 | thunk_FUN_1000df9d8 */

void thunk_FUN_1000df9d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c2d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c2d0,&DAT_100eb6090);
  DAT_100fad268 = pTVar1;
  return;
}



/* Address: 0x1000df9d8 | FUN_1000df9d8 */

void FUN_1000df9d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c2d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c2d0,&DAT_100eb6090);
  DAT_100fad268 = pTVar1;
  return;
}



/* Address: 0x1000dfa18 | thunk_FUN_1000dfa1c */

void thunk_FUN_1000dfa1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c2a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c2a8,&DAT_100eb6090);
  DAT_100fad270 = pTVar1;
  return;
}



/* Address: 0x1000dfa1c | FUN_1000dfa1c */

void FUN_1000dfa1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c2a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c2a8,&DAT_100eb6090);
  DAT_100fad270 = pTVar1;
  return;
}



/* Address: 0x1000dfa5c | FUN_1000dfa5c */

void FUN_1000dfa5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2c208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2c208,&DAT_100eb6120);
  DAT_100fad278 = pTVar1;
  return;
}



/* Address: 0x1000dfa9c | thunk_FUN_10002b9b0 */

void thunk_FUN_10002b9b0(void)

{
  FUN_10002b9b0();
  return;
}



/* Address: 0x1000dfaa0 | thunk_FUN_10002b7e4 */

void thunk_FUN_10002b7e4(void)

{
  FUN_10002b7e4();
  return;
}



/* Address: 0x1000dfaa4 | thunk_FUN_10002ba14 */

void thunk_FUN_10002ba14(void)

{
  thunk_FUN_10002ba14();
  return;
}


