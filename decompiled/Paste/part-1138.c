/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bca1e4 | FUN_100bca1e4 */

void FUN_100bca1e4(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffe8) {
    if (0x7fffffe7 < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 0x17);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000018;
    if (0x7fffffe7 < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x100bca234 | FUN_100bca234 */

undefined1  [16] FUN_100bca234(void)

{
  return ZEXT816(0x100f3b528);
}



/* Address: 0x100bca244 | thunk_FUN_100bc9ff0 */

void thunk_FUN_100bc9ff0(void)

{
  FUN_100bc9ff0();
  return;
}



/* Address: 0x100bca248 | thunk_FUN_100bca044 */

void thunk_FUN_100bca044(void)

{
  thunk_FUN_100bca044();
  return;
}



/* Address: 0x100bca24c | FUN_100bca24c */

void FUN_100bca24c(_StringGuts param_1)

{
  _StringComparisonResult unaff_w20;
  
  Swift::_stringCompareWithSmolCheck(param_1,(_StringGuts)0xe800000000000000,unaff_w20);
  return;
}



/* Address: 0x100bca260 | FUN_100bca260 */

void FUN_100bca260(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w20;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w20);
  return;
}



/* Address: 0x100bca270 | FUN_100bca270 */

void FUN_100bca270(void)

{
  return;
}



/* Address: 0x100bca284 | FUN_100bca284 */

ulong FUN_100bca284(ulong param_1)

{
  return param_1 & 0xffffffff | 0x6574796200000000;
}



/* Address: 0x100bca294 | FUN_100bca294 */

ulong FUN_100bca294(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Address: 0x100bca2a4 | FUN_100bca2a4 */

undefined1  [16] FUN_100bca2a4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100bca2b4 | thunk_FUN_100bca2b8 */

void thunk_FUN_100bca2b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9db14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9db14,&DAT_100f3b5f8);
  DAT_101047a48 = pTVar1;
  return;
}



/* Address: 0x100bca2b8 | FUN_100bca2b8 */

void FUN_100bca2b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9db14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9db14,&DAT_100f3b5f8);
  DAT_101047a48 = pTVar1;
  return;
}



/* Address: 0x100bca2f8 | FUN_100bca2f8 */

void FUN_100bca2f8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bca2a4();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100bca328 | FUN_100bca328 */

undefined1  [16] FUN_100bca328(void)

{
  return ZEXT816(0x100f3b5f8);
}



/* Address: 0x100bca338 | FUN_100bca338 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bca42c) */

ID FUN_100bca338(ID param_1)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ID unaff_x20;
  long unaff_x21;
  long lVar4;
  
  puVar1 = &DAT_101047a78;
  FUN_100b6730c();
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  IVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bcb964();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    _objc_allocWithZone();
    IVar2 = _objc_msgSend(unaff_x20,"init");
    FUN_100bca45c(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1)
    ;
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return IVar2;
}



/* Address: 0x100bca45c | FUN_100bca45c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bcb340) */
/* WARNING: Removing unreachable block (ram,0x000100bcab04) */
/* WARNING: Removing unreachable block (ram,0x000100bcaa54) */

void FUN_100bca45c(undefined8 param_1)

{
  undefined *puVar1;
  Date DVar2;
  NSString *pNVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Date DVar6;
  NSDate *pNVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  NSArray *pNVar10;
  undefined8 *puVar11;
  __ContiguousArrayStorageBase *p_Var12;
  __ContiguousArrayStorageBase *p_Var13;
  ulong uVar14;
  ID unaff_x20;
  undefined1 *puVar15;
  long unaff_x21;
  code *pcVar16;
  long lVar17;
  __ContiguousArrayStorageBase *p_Var18;
  long lVar19;
  String SVar20;
  undefined8 auStack_90 [2];
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined1 local_58;
  uint7 uStack_57;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar5 = (undefined *)
           ((long)&local_80 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
           );
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar2.unknown + -8);
  lVar19 = (long)puVar5 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_58 = 0;
  puVar1 = &DAT_101047a78;
  FUN_100b6730c();
  SVar20 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar1);
  if (unaff_x21 != 0) {
    return;
  }
  local_80 = lVar17;
  local_78 = puVar5;
  local_70 = param_1;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  _objc_msgSend((ID)&objc::class_t::SentryEventSwiftHelper,"setEventIdString:event:",pNVar3);
  uVar4 = 0;
  FUN_100b79bf4(0);
  local_61 = 1;
  puVar5 = &DAT_101047a88;
  FUN_100003a00(&DAT_101047a88,FUN_100b79bf4,&TargetProtocolConformanceDescriptor_100c99d48);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar4,&local_61,puVar1,uVar4,puVar5);
  _objc_msgSend(unaff_x20,"setMessage:",CONCAT71(uStack_57,local_58));
  local_58 = 2;
  puVar5 = &DAT_101045578;
  FUN_100003a00(&DAT_101045578,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
  DVar6 = DVar2;
  Swift::KeyedDecodingContainer::_decode(lVar19,DVar2.unknown,&local_58,puVar1,DVar2.unknown,puVar5)
  ;
  pNVar7 = Foundation::Date::_bridgeToObjectiveC(DVar6);
  pcVar16 = *(code **)(local_80 + 8);
  (*pcVar16)(lVar19,DVar2.unknown);
  _objc_msgSend(unaff_x20,"setTimestamp:",pNVar7);
  puVar8 = local_78;
  local_58 = 3;
  Swift::KeyedDecodingContainer::_decodeIfPresent
            (local_78,DVar2.unknown,&local_58,puVar1,DVar2.unknown,puVar5);
  DVar6.unknown = puVar8;
  FUN_1000c9ff0(puVar8,1,DVar2.unknown);
  if ((int)DVar6.unknown == 1) {
    pNVar7 = (NSDate *)0x0;
  }
  else {
    pNVar7 = Foundation::Date::_bridgeToObjectiveC(DVar6);
    (*pcVar16)(puVar8,DVar2.unknown);
  }
  _objc_msgSend(unaff_x20,"setStartTimestamp:",pNVar7);
  local_58 = 4;
  puVar15 = &local_58;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(puVar15);
  if (puVar5 == (undefined *)0x0) {
    puVar15 = (undefined1 *)0x0;
  }
  else {
    uVar4 = 0;
    FUN_100be6f80(0);
    FUN_100be6e38(puVar15,puVar5,uVar4);
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setLevel:",puVar15);
  local_58 = 5;
  SVar20 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar1);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  _objc_msgSend(unaff_x20,"setPlatform:",pNVar3);
  local_58 = 6;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setLogger:",pNVar3);
  local_58 = 7;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setServerName:",pNVar3);
  local_58 = 8;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setReleaseName:",pNVar3);
  local_58 = 9;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setDist:",pNVar3);
  local_58 = 10;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setEnvironment:",pNVar3);
  local_58 = 0xb;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setTransaction:",pNVar3);
  local_58 = 0xc;
  puVar5 = puVar1;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
  if (puVar5 == (undefined *)0x0) {
    pNVar3 = (NSString *)0x0;
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
  }
  _objc_msgSend(unaff_x20,"setType:",pNVar3);
  puVar5 = &DAT_101044b60;
  FUN_100b6730c(&DAT_101044b60);
  local_61 = 0xd;
  puVar8 = puVar5;
  switchD_100bab490::caseD_25();
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 == 0) {
    pNVar9 = (NSDictionary *)0x0;
  }
  else {
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar17);
  }
  _objc_msgSend(unaff_x20,"setTags:",pNVar9);
  *(undefined8 *)(lVar19 + -0x10) = local_70;
  pcVar16 = FUN_100bcbabc;
  FUN_100bd03e0();
  if (pcVar16 == (code *)0x0) {
    pNVar9 = (NSDictionary *)0x0;
  }
  else {
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(unaff_x20,"setExtra:",pNVar9);
  *(undefined8 *)(lVar19 + -0x10) = local_70;
  pcVar16 = FUN_100bcbb60;
  FUN_100bd03e0();
  if (pcVar16 == (code *)0x0) {
    pNVar9 = (NSDictionary *)0x0;
  }
  else {
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(unaff_x20,"setSdk:",pNVar9);
  local_61 = 0x10;
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 == 0) {
    pNVar9 = (NSDictionary *)0x0;
  }
  else {
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar17);
  }
  _objc_msgSend(unaff_x20,"setModules:",pNVar9);
  puVar5 = &DAT_101044808;
  FUN_100b6730c(&DAT_101044808);
  local_61 = 0x11;
  puVar8 = puVar5;
  FUN_100b79e64();
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 == 0) {
    pNVar10 = (NSArray *)0x0;
  }
  else {
    pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar17);
  }
  _objc_msgSend(unaff_x20,"setFingerprint:",pNVar10);
  uVar4 = 0;
  FUN_100ba6e8c(0);
  local_61 = 0x12;
  puVar5 = &DAT_101047a90;
  FUN_100003a00(&DAT_101047a90,FUN_100ba6e8c,&DAT_100c9bb08);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar4,&local_61,puVar1,uVar4,puVar5);
  _objc_msgSend(unaff_x20,"setUser:",CONCAT71(uStack_57,local_58));
  *(undefined8 *)(lVar19 + -0x10) = local_70;
  pcVar16 = FUN_100bcbc24;
  FUN_100bd04f8();
  if (pcVar16 == (code *)0x0) {
    pNVar9 = (NSDictionary *)0x0;
  }
  else {
    FUN_100b6730c(&DAT_101044968);
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pcVar16);
  }
  _objc_msgSend(unaff_x20,"setContext:",pNVar9);
  puVar5 = &DAT_101047a98;
  FUN_100b6730c(&DAT_101047a98);
  local_61 = 0x14;
  puVar8 = &DAT_101047aa0;
  FUN_100bcbe3c(&DAT_101047aa0,&DAT_101047a98,FUN_100bcbc3c);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 != 0) {
    if (*(long *)(lVar17 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lVar17);
LAB_100bcafac:
      pNVar10 = (NSArray *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar17);
      lVar19 = 0x7365756c6176;
      uVar14 = 0;
      FUN_100071370();
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar17,2);
        goto LAB_100bcafac;
      }
      p_Var18 = *(__ContiguousArrayStorageBase **)(*(long *)(lVar17 + 0x38) + lVar19 * 8);
      _swift_bridgeObjectRetain(p_Var18);
      _swift_bridgeObjectRelease_n(lVar17,2);
      if ((ulong)p_Var18 >> 0x3e == 0) {
        p_Var13 = p_Var18;
        _swift_bridgeObjectRetain();
        Swift::__ContiguousArrayStorageBase::_get_staticElementType
                  ((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),p_Var13);
        FUN_100b673ec(0,&DAT_101044928,&PTR_SentryThread_100f8de78);
        p_Var13 = p_Var18;
      }
      else {
        p_Var13 = (__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8);
        if ((long)p_Var18 < 0) {
          p_Var13 = p_Var18;
        }
        FUN_100b673ec((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),0,
                      &DAT_101044928,&PTR_SentryThread_100f8de78);
        _swift_bridgeObjectRetain(p_Var18);
        Swift::__bridgeCocoaArray();
        _swift_bridgeObjectRelease(p_Var18);
      }
      _swift_bridgeObjectRelease(p_Var18);
      FUN_100b673ec(0,&DAT_101044928,&PTR_SentryThread_100f8de78);
      pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(p_Var13);
    }
    _objc_msgSend(unaff_x20,"setThreads:",pNVar10);
  }
  puVar5 = &DAT_101047ac0;
  FUN_100b6730c(&DAT_101047ac0);
  local_61 = 0x15;
  puVar8 = &DAT_101047ac8;
  FUN_100bcbe3c(&DAT_101047ac8,&DAT_101047ac0,FUN_100bcbcbc);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 != 0) {
    if (*(long *)(lVar17 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lVar17);
LAB_100bcb104:
      pNVar10 = (NSArray *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar17);
      lVar19 = 0x7365756c6176;
      uVar14 = 0;
      FUN_100071370();
      if ((uVar14 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar17,2);
        goto LAB_100bcb104;
      }
      p_Var18 = *(__ContiguousArrayStorageBase **)(*(long *)(lVar17 + 0x38) + lVar19 * 8);
      _swift_bridgeObjectRetain(p_Var18);
      _swift_bridgeObjectRelease_n(lVar17,2);
      if ((ulong)p_Var18 >> 0x3e == 0) {
        p_Var13 = p_Var18;
        _swift_bridgeObjectRetain();
        Swift::__ContiguousArrayStorageBase::_get_staticElementType
                  ((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),p_Var13);
        FUN_100b673ec(0,&DAT_101044a20,&PTR_SentryException_100f8dde0);
        p_Var13 = p_Var18;
      }
      else {
        p_Var13 = (__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8);
        if ((long)p_Var18 < 0) {
          p_Var13 = p_Var18;
        }
        FUN_100b673ec((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),0,
                      &DAT_101044a20,&PTR_SentryException_100f8dde0);
        _swift_bridgeObjectRetain(p_Var18);
        Swift::__bridgeCocoaArray();
        _swift_bridgeObjectRelease(p_Var18);
      }
      _swift_bridgeObjectRelease(p_Var18);
      FUN_100b673ec(0,&DAT_101044a20,&PTR_SentryException_100f8dde0);
      pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(p_Var13);
    }
    _objc_msgSend(unaff_x20,"setExceptions:",pNVar10);
  }
  uVar4 = 0;
  FUN_100bc4e30(0);
  local_61 = 0x16;
  puVar11 = &DAT_101045248;
  FUN_100003a00(&DAT_101045248,FUN_100bc4e30,&TargetProtocolConformanceDescriptor_100c9d37c);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar4,&local_61,puVar1,uVar4,puVar11);
  _objc_msgSend(unaff_x20,"setStacktrace:",CONCAT71(uStack_57,local_58));
  puVar5 = &DAT_101047ae8;
  FUN_100b6730c(&DAT_101047ae8);
  local_61 = 0x17;
  puVar8 = &DAT_101047af0;
  FUN_100bcbe3c(&DAT_101047af0,&DAT_101047ae8,FUN_100bcbd3c);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  lVar17 = CONCAT71(uStack_57,local_58);
  if (lVar17 == 0) goto LAB_100bcb2f8;
  if (*(long *)(lVar17 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar17);
LAB_100bcb2d8:
    pNVar10 = (NSArray *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar17);
    lVar19 = 0x736567616d69;
    uVar14 = 0;
    FUN_100071370();
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lVar17,2);
      goto LAB_100bcb2d8;
    }
    p_Var18 = *(__ContiguousArrayStorageBase **)(*(long *)(lVar17 + 0x38) + lVar19 * 8);
    _swift_bridgeObjectRetain(p_Var18);
    _swift_bridgeObjectRelease_n(lVar17,2);
    if ((ulong)p_Var18 >> 0x3e == 0) {
      p_Var13 = p_Var18;
      _swift_bridgeObjectRetain();
      Swift::__ContiguousArrayStorageBase::_get_staticElementType
                ((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),p_Var13);
      FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
      p_Var13 = p_Var18;
    }
    else {
      p_Var13 = (__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8);
      if ((long)p_Var18 < 0) {
        p_Var13 = p_Var18;
      }
      FUN_100b673ec((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),0,
                    &DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
      _swift_bridgeObjectRetain(p_Var18);
      Swift::__bridgeCocoaArray();
      _swift_bridgeObjectRelease(p_Var18);
    }
    _swift_bridgeObjectRelease(p_Var18);
    FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
    pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(p_Var13);
  }
  _objc_msgSend(unaff_x20,"setDebugMeta:",pNVar10);
LAB_100bcb2f8:
  puVar5 = &DAT_101047b10;
  FUN_100b6730c(&DAT_101047b10);
  local_61 = 0x18;
  puVar8 = puVar5;
  FUN_100bcbdbc();
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar5,&local_61,puVar1,puVar5,puVar8);
  p_Var18 = (__ContiguousArrayStorageBase *)CONCAT71(uStack_57,local_58);
  if (p_Var18 == (__ContiguousArrayStorageBase *)0x0) {
    pNVar10 = (NSArray *)0x0;
  }
  else {
    p_Var13 = p_Var18;
    if (uStack_57 >> 0x36 == 0) {
      p_Var12 = p_Var18;
      _swift_bridgeObjectRetain();
      Swift::__ContiguousArrayStorageBase::_get_staticElementType
                ((__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8),p_Var12);
      FUN_100b673ec(0,&DAT_101047b30,&PTR_SentryBreadcrumb_100f8d9e0);
    }
    else {
      if (-1 < (int7)uStack_57) {
        p_Var13 = (__ContiguousArrayStorageBase *)((ulong)p_Var18 & 0xffffffffffffff8);
      }
      FUN_100b673ec(0,&DAT_101047b30,&PTR_SentryBreadcrumb_100f8d9e0);
      _swift_bridgeObjectRetain(p_Var18);
      Swift::__bridgeCocoaArray();
      _swift_bridgeObjectRelease(p_Var18);
    }
    _swift_bridgeObjectRelease(p_Var18);
    FUN_100b673ec(0,&DAT_101047b30,&PTR_SentryBreadcrumb_100f8d9e0);
    pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(p_Var13);
  }
  _objc_msgSend(unaff_x20,"setBreadcrumbs:",pNVar10);
  uVar4 = 0;
  FUN_100bab3dc(0);
  local_61 = 0x19;
  puVar5 = &DAT_101047b28;
  FUN_100003a00(&DAT_101047b28,FUN_100bab3dc,&DAT_100c9bdd8);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar4,&local_61,puVar1,uVar4,puVar5);
  _objc_msgSend(unaff_x20,"setRequest:",CONCAT71(uStack_57,local_58));
  return;
}



/* Address: 0x100bcb594 | _TtC6Sentry20SentryEventDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEventDecodable::init(ID param_1,SEL param_2)

{
  FUN_100b813a8();
  return param_1;
}



/* Address: 0x100bcb5b4 | FUN_100bcb5b4 */

void FUN_100bcb5b4(undefined8 param_1)

{
  FUN_100b69e00();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithLevel:",param_1);
  return;
}



/* Address: 0x100bcb5f4 | _TtC6Sentry20SentryEventDecodable::initWithLevel: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry20SentryEventDecodable::initWithLevel_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bcb5b4();
  return param_3;
}



/* Address: 0x100bcb618 | FUN_100bcb618 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bcb618(void)

{
  return ZEXT816(0x100fa4550);
}



/* Address: 0x100bcb638 | FUN_100bcb638 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bcb674 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bcb638(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCaseWithCache(param_1,param_1,param_2,&DAT_1010442d0);
  _swift_bridgeObjectRelease(param_2);
  if (0x19 < uVar1) {
    uVar1 = 0x1a;
  }
  return uVar1;
}



/* Address: 0x100bcb69c | thunk_FUN_100bcb638 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bcb674 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bcb638(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCaseWithCache(param_1,param_1,param_2,&DAT_1010442d0);
  _swift_bridgeObjectRelease(param_2);
  if (0x19 < uVar1) {
    uVar1 = 0x1a;
  }
  return uVar1;
}



/* Address: 0x100bcb6a0 | FUN_100bcb6a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100bcb6a0(ulong param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
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
  
  puVar4 = &DAT_e800000000000000;
  pTVar1 = (TargetProtocolConformanceDescriptor *)&DAT_64695f746e657665;
  puVar6 = (undefined8 *)(param_1 & 0xff);
  switch(puVar6) {
  default:
    puVar4 = &DAT_e700000000000000;
  case (undefined8 *)0x58:
  case (undefined8 *)0x66:
  case (undefined8 *)0x8c:
  case (undefined8 *)0x9a:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xfa:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x7373656d;
  case (undefined8 *)0x4e:
  case (undefined8 *)0x56:
  case (undefined8 *)0x82:
  case (undefined8 *)0x8a:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xda:
  case (undefined8 *)0xdc:
    uVar2 = (ulong)pTVar1 & 0xffff0000ffffffff | 0x676100000000;
    break;
  case (undefined8 *)0x2:
    SVar14.bridgeObject = &SUB_e900000000000070;
    SVar14.str = &DAT_6d617473656d6974;
    return SVar14;
  case (undefined8 *)0x3:
    puVar4 = (undefined *)0xef706d617473656d;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x7473;
  case (undefined8 *)0x70:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffffffff0000ffff | 0x72610000);
  case (undefined8 *)0x3b:
  case (undefined8 *)0x6e:
  case (undefined8 *)0xa2:
  case (undefined8 *)0xca:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffff0000ffffffff | 0x5f7400000000);
  case (undefined8 *)0x36:
    SVar16.str = (char *)((ulong)pTVar1 & 0xffffffffffff | 0x6974000000000000);
    SVar16.bridgeObject = puVar4;
    return SVar16;
  case (undefined8 *)0x4:
    puVar4 = &DAT_e500000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)&DAT_6c6576656c;
  case (undefined8 *)0x22:
    SVar9.bridgeObject = puVar4;
    SVar9.str = (char *)pTVar1;
    return SVar9;
  case (undefined8 *)0x5:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6f6674616c70;
  case (undefined8 *)0x40:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffffffffffff | 0x6d72000000000000);
  case (undefined8 *)0x41:
    SVar20.bridgeObject = &DAT_e800000000000000;
    SVar20.str = (char *)pTVar1;
    return SVar20;
  case (undefined8 *)0x6:
  case (undefined8 *)0x32:
  case (undefined8 *)0x39:
  case (undefined8 *)0x74:
    puVar4 = &DAT_e600000000000000;
  case (undefined8 *)0x3e:
  case (undefined8 *)0x71:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6f6c;
  case (undefined8 *)0xd0:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffff00000000ffff | 0x726567670000);
  case (undefined8 *)0x34:
    SVar23.bridgeObject = puVar4;
    SVar23.str = (char *)pTVar1;
    return SVar23;
  case (undefined8 *)0x7:
    puVar4 = (undefined *)0xeb00000000656d61;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6573;
  case (undefined8 *)0x76:
    SVar17.str = (char *)((ulong)pTVar1 & 0xffff | 0x6e5f726576720000);
    SVar17.bridgeObject = puVar4;
    return SVar17;
  case (undefined8 *)0x8:
    puVar4 = &DAT_e700000000000000;
    uVar2 = 0x7361656c6572;
    break;
  case (undefined8 *)0x9:
    puVar4 = &DAT_e400000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6964;
  case (undefined8 *)0x4d:
  case (undefined8 *)0x81:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xd1:
    SVar11.str = (char *)(ulong)((uint)pTVar1 & 0xffff | 0x74730000);
    SVar11.bridgeObject = puVar4;
    return SVar11;
  case (undefined8 *)0xa:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x69766e65;
  case (undefined8 *)0x35:
  case (undefined8 *)0x78:
  case (undefined8 *)0xe0:
  case (undefined8 *)0xe8:
  case (undefined8 *)0xf0:
    SVar25.str = (char *)((ulong)pTVar1 & 0xffffffff | 0x6d6e6f7200000000);
    SVar25.bridgeObject = (void *)0xeb00000000746e65;
    return SVar25;
  case (undefined8 *)0xb:
  case (undefined8 *)0x21:
    puVar4 = (undefined *)0x6f69;
  case (undefined8 *)0x1f:
    puVar4 = (undefined *)((ulong)puVar4 & 0xffffffffffff | 0xeb000000006e0000);
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6e617274;
  case (undefined8 *)0x23:
    SVar8.str = (char *)((ulong)pTVar1 & 0xffffffff | 0x7463617300000000);
    SVar8.bridgeObject = puVar4;
    return SVar8;
  case (undefined8 *)0xc:
    SVar10.bridgeObject = &DAT_e400000000000000;
    SVar10.str = &DAT_65707974;
    return SVar10;
  case (undefined8 *)0xd:
    puVar4 = &DAT_e400000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6174;
  case (undefined8 *)0x42:
    pTVar1 = (TargetProtocolConformanceDescriptor *)(ulong)((uint)pTVar1 & 0xffff | 0x73670000);
  case (undefined8 *)0xe4:
    SVar22.bridgeObject = puVar4;
    SVar22.str = (char *)pTVar1;
    return SVar22;
  case (undefined8 *)0xe:
  case (undefined8 *)0x1e:
    puVar4 = &DAT_e500000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x7865;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x60:
  case (undefined8 *)0xec:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffff00000000ffff | 0x6172740000);
  case (undefined8 *)0x1d:
    SVar7.bridgeObject = puVar4;
    SVar7.str = (char *)pTVar1;
    return SVar7;
  case (undefined8 *)0xf:
    SVar15.bridgeObject = (void *)0xe300000000000000;
    SVar15.str = (char *)0x6b6473;
    return SVar15;
  case (undefined8 *)0x10:
    puVar4 = &DAT_e700000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6f6d;
  case (undefined8 *)0xe6:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffff00000000ffff | 0x656c75640000);
  case (undefined8 *)0x1a:
LAB_100bcb844:
    SVar19.str = (char *)((ulong)pTVar1 & 0xffffffffffff | 0x73000000000000);
    SVar19.bridgeObject = puVar4;
    return SVar19;
  case (undefined8 *)0x11:
    puVar4 = (undefined *)0xeb00000000746e69;
  case (undefined8 *)0x30:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x6966;
  case (undefined8 *)0x6c:
    SVar18.str = (char *)((ulong)pTVar1 & 0xffff | 0x72707265676e0000);
    SVar18.bridgeObject = puVar4;
    return SVar18;
  case (undefined8 *)0x12:
  case (undefined8 *)0x79:
    puVar4 = &DAT_e400000000000000;
  case (undefined8 *)0x33:
  case (undefined8 *)0x3a:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x72657375;
  case (undefined8 *)0x37:
    SVar24.bridgeObject = puVar4;
    SVar24.str = (char *)pTVar1;
    return SVar24;
  case (undefined8 *)0x13:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x73747865746e6f63;
  case (undefined8 *)0xb8:
    SVar28.bridgeObject = &DAT_e800000000000000;
    SVar28.str = (char *)pTVar1;
    return SVar28;
  case (undefined8 *)0x14:
    puVar4 = &DAT_e700000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x646165726874;
    goto LAB_100bcb844;
  case (undefined8 *)0x15:
  case (undefined8 *)0x3d:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x7865;
  case (undefined8 *)0x3f:
  case (undefined8 *)0x72:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffffffff0000ffff | 0x65630000);
  case (undefined8 *)0x31:
  case (undefined8 *)0x38:
  case (undefined8 *)0x3c:
  case (undefined8 *)0x43:
  case (undefined8 *)0x77:
    pTVar1 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar1 & 0xffffffff | 0x6f69747000000000);
  case (undefined8 *)0x75:
    puVar4 = (undefined *)0xe90000000000006e;
  case (undefined8 *)0x73:
    SVar21.bridgeObject = puVar4;
    SVar21.str = (char *)pTVar1;
    return SVar21;
  case (undefined8 *)0x16:
  case (undefined8 *)0xcc:
    SVar27.bridgeObject = (void *)0xea00000000006563;
    SVar27.str = (char *)0x6172746b63617473;
    return SVar27;
  case (undefined8 *)0x17:
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x656d5f6775626564;
    puVar4 = (undefined *)0xea00000000006174;
  case (undefined8 *)0xa8:
    SVar29.bridgeObject = puVar4;
    SVar29.str = (char *)pTVar1;
    return SVar29;
  case (undefined8 *)0x18:
    puVar4 = (undefined *)0xeb0000000073626d;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x636461657262;
  case (undefined8 *)0x94:
  case (undefined8 *)0xf4:
    SVar13.str = (char *)((ulong)pTVar1 & 0xffffffffffff | 0x7572000000000000);
    SVar13.bridgeObject = puVar4;
    return SVar13;
  case (undefined8 *)0x19:
    puVar4 = &DAT_e700000000000000;
    pTVar1 = (TargetProtocolConformanceDescriptor *)0x74736575716572;
  case (undefined8 *)0x0:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x92:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xba:
  case (undefined8 *)0xce:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
    SVar12.bridgeObject = puVar4;
    SVar12.str = (char *)pTVar1;
    return SVar12;
  case (undefined8 *)0x48:
    *(undefined1 *)unaff_x19 = 0x65;
  case (undefined8 *)0x49:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x91:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xb9:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xe1:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xf1:
    SVar34.bridgeObject = &DAT_e800000000000000;
    SVar34.str = &DAT_64695f746e657665;
    return SVar34;
  case (undefined8 *)0x5c:
    FUN_100bcb6a0();
    *unaff_x19 = pTVar1;
    unaff_x19[1] = puVar4;
    SVar33.bridgeObject = puVar4;
    SVar33.str = (char *)pTVar1;
    return SVar33;
  case (undefined8 *)0x61:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xed:
  case (undefined8 *)0xf5:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0x95:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (undefined8 *)0xbc:
    FUN_10044b2dc();
    *(char *)puVar6 = (char)pTVar1;
  case (undefined8 *)0x6d:
  case (undefined8 *)0xa1:
  case (undefined8 *)0xc9:
    SVar35.bridgeObject = puVar4;
    SVar35.str = (char *)pTVar1;
    return SVar35;
  case (undefined8 *)0x62:
  case (undefined8 *)0x96:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xee:
  case (undefined8 *)0xf6:
    FUN_100bcb964();
  case (undefined8 *)0xc8:
    SVar36 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar36;
  case (undefined8 *)0x63:
  case (undefined8 *)0x97:
  case (undefined8 *)0xbf:
  case (undefined8 *)0xef:
  case (undefined8 *)0xf7:
    SVar37.bridgeObject = &DAT_e800000000000000;
    SVar37.str = &DAT_64695f746e657665;
    return SVar37;
  case (undefined8 *)0x7c:
    pTVar1 = (TargetProtocolConformanceDescriptor *)(ulong)DAT_64695f746e657665;
  case (undefined8 *)0xe5:
    FUN_100bec620(pTVar1);
    SVar31.bridgeObject = puVar4;
    SVar31.str = (char *)pTVar1;
    return SVar31;
  case (undefined8 *)0x80:
    pcVar3 = (char *)CONCAT71(uRam64695f746e657666,DAT_64695f746e657665);
    pvVar5 = _DAT_64695f746e65766d;
    FUN_100bcb638(pcVar3,_DAT_64695f746e65766d);
    *(char *)puVar6 = (char)pcVar3;
    SVar32.bridgeObject = pvVar5;
    SVar32.str = pcVar3;
    return SVar32;
  case (undefined8 *)0x90:
    pTVar1 = &TargetProtocolConformanceDescriptor_100c9dd3c;
    puVar4 = &DAT_100f3b6e0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9dd3c,&DAT_100f3b6e0);
    puVar6 = &_TtC6Sentry19SentryReplayOptions::includedViewClasses;
  case (undefined8 *)0x4c:
    puVar6[0x150] = pTVar1;
    SVar30.bridgeObject = puVar4;
    SVar30.str = (char *)pTVar1;
    return SVar30;
  case (undefined8 *)0xa4:
    FUN_100bca338();
    unaff_x19 = puVar6;
    if (unaff_x21 != 0) goto LAB_100bcb958;
  case (undefined8 *)0xa0:
    *unaff_x19 = pTVar1;
LAB_100bcb958:
    SVar36.bridgeObject = puVar4;
    SVar36.str = (char *)pTVar1;
    return SVar36;
  }
  SVar26.str = (char *)(uVar2 & 0xffffffffffff | 0x65000000000000);
  SVar26.bridgeObject = puVar4;
  return SVar26;
}



/* Address: 0x100bcb938 | thunk_FUN_100bcb6a0 */

void thunk_FUN_100bcb6a0(void)

{
  FUN_100bcb6a0();
  return;
}



/* Address: 0x100bcb93c | FUN_100bcb93c */

void FUN_100bcb93c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bca338();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bcb964 | FUN_100bcb964 */

void FUN_100bcb964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9dd3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9dd3c,&DAT_100f3b6e0);
  DAT_101047a80 = pTVar1;
  return;
}



/* Address: 0x100bcb9a4 | FUN_100bcb9a4 */

void FUN_100bcb9a4(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bec620(*param_1,*param_2);
  return;
}



/* Address: 0x100bcb9b0 | FUN_100bcb9b0 */

void FUN_100bcb9b0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec8a0(*unaff_x20);
  return;
}



/* Address: 0x100bcb9b8 | FUN_100bcb9b8 */

void FUN_100bcb9b8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becff0::caseD_c6(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bcb9c0 | FUN_100bcb9c0 */

void FUN_100bcb9c0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed2cc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bcb9c8 | FUN_100bcb9c8 */

void FUN_100bcb9c8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bcb638(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bcb9f4 | FUN_100bcb9f4 */

void FUN_100bcb9f4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bcb6a0();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bcba1c | FUN_100bcba1c */

void FUN_100bcba1c(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_100bcb6a0(*unaff_x20);
  return;
}



/* Address: 0x100bcba24 | FUN_100bcba24 */

void FUN_100bcba24(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bcb638();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bcba48 | switchD_100bcb6d0::caseD_61 */

void switchD_100bcb6d0::caseD_61(undefined1 *param_1,undefined1 param_2)

{
  FUN_10044b2dc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bcba6c | FUN_100bcba6c */

String FUN_100bcba6c(void)

{
  String SVar1;
  
  FUN_100bcb964();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bcba94 | FUN_100bcba94 */

String FUN_100bcba94(void)

{
  String SVar1;
  
  FUN_100bcb964();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bcbabc | FUN_100bcbabc */

void FUN_100bcbabc(void)

{
  long unaff_x20;
  
  FUN_100bcbad8(*(undefined8 *)(unaff_x20 + 0x10),0xe);
  return;
}



/* Address: 0x100bcbad8 | FUN_100bcbad8 */

void FUN_100bcbad8(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  puVar2 = &DAT_101047a78;
  local_39 = param_2;
  FUN_100b6730c(&DAT_101047a78);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100bcbb60 | FUN_100bcbb60 */

void FUN_100bcbb60(void)

{
  long unaff_x20;
  
  FUN_100bcbad8(*(undefined8 *)(unaff_x20 + 0x10),0xf);
  return;
}



/* Address: 0x100bcbb7c | FUN_100bcbb7c */

void FUN_100bcbb7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_41;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101047b38;
  FUN_100b6730c(&DAT_101047b38);
  local_41 = 0x13;
  puVar2 = &DAT_101047a78;
  FUN_100b6730c(&DAT_101047a78);
  puVar3 = &DAT_101047b40;
  FUN_100bcbe3c(&DAT_101047b40,&DAT_101047b38,switchD_100b81688::caseD_d8);
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_41,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100bcbc24 | FUN_100bcbc24 */

void FUN_100bcbc24(void)

{
  long unaff_x20;
  
  FUN_100bcbb7c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100bcbc3c | FUN_100bcbc3c */

void FUN_100bcbc3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_28;
  
  if (DAT_101047aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047ab0;
  FUN_100b6734c(&DAT_101047ab0);
  puVar2 = &DAT_101047ab8;
  FUN_100003a00(&DAT_101047ab8,FUN_100be0968,&DAT_100c9ec78);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&puStack_28);
  DAT_101047aa8 = puVar3;
  return;
}



/* Address: 0x100bcbc4c | FUN_100bcbc4c */

void FUN_100bcbc4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  puVar1 = &DAT_101047ab0;
  FUN_100b6734c(&DAT_101047ab0);
  puVar2 = &DAT_101047ab8;
  FUN_100003a00(&DAT_101047ab8,FUN_100be0968,&DAT_100c9ec78);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101047aa8 = puVar3;
  return;
}



/* Address: 0x100bcbcbc | FUN_100bcbcbc */

void FUN_100bcbcbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_28;
  
  if (DAT_101047ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047ad8;
  FUN_100b6734c(&DAT_101047ad8);
  puVar2 = &DAT_101047ae0;
  FUN_100003a00(&DAT_101047ae0,FUN_100b7e240,&DAT_100c9a0f4);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&puStack_28);
  DAT_101047ad0 = puVar3;
  return;
}



/* Address: 0x100bcbccc | FUN_100bcbccc */

void FUN_100bcbccc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  puVar1 = &DAT_101047ad8;
  FUN_100b6734c(&DAT_101047ad8);
  puVar2 = &DAT_101047ae0;
  FUN_100003a00(&DAT_101047ae0,FUN_100b7e240,&DAT_100c9a0f4);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101047ad0 = puVar3;
  return;
}



/* Address: 0x100bcbd3c | FUN_100bcbd3c */

void FUN_100bcbd3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_28;
  
  if (DAT_101047af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047b00;
  FUN_100b6734c(&DAT_101047b00);
  puVar2 = &DAT_101047b08;
  FUN_100003a00(&DAT_101047b08,FUN_100bb63b4,&DAT_100c9c724);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&puStack_28);
  DAT_101047af8 = puVar3;
  return;
}



/* Address: 0x100bcbd4c | FUN_100bcbd4c */

void FUN_100bcbd4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  puVar1 = &DAT_101047b00;
  FUN_100b6734c(&DAT_101047b00);
  puVar2 = &DAT_101047b08;
  FUN_100003a00(&DAT_101047b08,FUN_100bb63b4,&DAT_100c9c724);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101047af8 = puVar3;
  return;
}



/* Address: 0x100bcbdbc | FUN_100bcbdbc */

void FUN_100bcbdbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_101047b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047b10;
  FUN_100b6734c(&DAT_101047b10);
  puVar2 = &DAT_101047b20;
  FUN_100003a00(&DAT_101047b20,FUN_100b815dc,&DAT_100c9a5e4);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101047b18 = puVar3;
  return;
}



/* Address: 0x100bcbe3c | FUN_100bcbe3c */

void FUN_100bcbe3c(long *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_100b6734c();
    uVar1 = param_2;
    (*param_3)();
    local_40 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
    puVar2 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
    uStack_38 = uVar1;
    _swift_getWitnessTable
              (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,
               param_2,&local_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Address: 0x100bcbea8 | FUN_100bcbea8 */

int FUN_100bcbea8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100bcbf28;
  }
  if (param_2 < 0xe7) {
LAB_100bcbf1c:
    iVar2 = *param_1 - 0x1a;
    if (*param_1 < 0x1a) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x19) {
      iVar2 = 4;
    }
    if (param_2 + 0x19 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100bcbf00:
      if (uVar1 == 0) goto LAB_100bcbf1c;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100bcbf00;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100bcbf1c;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 0x1a;
  }
LAB_100bcbf28:
  return iVar2 + 1;
}



/* Address: 0x100bcbf30 | FUN_100bcbf30 */

void FUN_100bcbf30(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 0x19) {
    uVar2 = 4;
  }
  if (param_3 + 0x19 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xe6 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xe7) {
                    /* WARNING: Could not recover jumptable at 0x000100bcbf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bcbf7c + (ulong)(&BYTE_100c9dbef)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x19';
                    /* WARNING: Could not recover jumptable at 0x000100bcbfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bcbfb0 + (ulong)(&BYTE_100c9dbea)[uVar1] * 4))();
  return;
}



/* Address: 0x100bcbfec | FUN_100bcbfec */

undefined1  [16] FUN_100bcbfec(void)

{
  return ZEXT816(0x100f3b6e0);
}



/* Address: 0x100bcbffc | thunk_FUN_100bcc000 */

void thunk_FUN_100bcc000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9dd14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9dd14,&DAT_100f3b6e0);
  DAT_101047b48 = pTVar1;
  return;
}



/* Address: 0x100bcc000 | FUN_100bcc000 */

void FUN_100bcc000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9dd14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9dd14,&DAT_100f3b6e0);
  DAT_101047b48 = pTVar1;
  return;
}



/* Address: 0x100bcc040 | thunk_FUN_100bcc044 */

void thunk_FUN_100bcc044(void)

{
  undefined *puVar1;
  
  if (DAT_101047b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9dc74;
  _swift_getWitnessTable(&DAT_100c9dc74,&DAT_100f3b6e0);
  DAT_101047b50 = puVar1;
  return;
}



/* Address: 0x100bcc044 | FUN_100bcc044 */

void FUN_100bcc044(void)

{
  undefined *puVar1;
  
  if (DAT_101047b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9dc74;
  _swift_getWitnessTable(&DAT_100c9dc74,&DAT_100f3b6e0);
  DAT_101047b50 = puVar1;
  return;
}



/* Address: 0x100bcc084 | thunk_FUN_100bcc088 */

void thunk_FUN_100bcc088(void)

{
  undefined *puVar1;
  
  if (DAT_101047b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9dc4c;
  _swift_getWitnessTable(&DAT_100c9dc4c,&DAT_100f3b6e0);
  DAT_101047b58 = puVar1;
  return;
}



/* Address: 0x100bcc088 | FUN_100bcc088 */

void FUN_100bcc088(void)

{
  undefined *puVar1;
  
  if (DAT_101047b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9dc4c;
  _swift_getWitnessTable(&DAT_100c9dc4c,&DAT_100f3b6e0);
  DAT_101047b58 = puVar1;
  return;
}



/* Address: 0x100bcc0c8 | FUN_100bcc0c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bcc0f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100bcc0c8(undefined8 param_1)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = Swift::Dictionary::_init
                    (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  FUN_100b6730c(&DAT_101047b98);
  _swift_allocObject();
  thunk_FUN_100b88668();
  DAT_101047b60 = DVar1.unknown;
  return;
}



/* Address: 0x100bcc130 | FUN_100bcc130 */

void FUN_100bcc130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_101042e80 != -1) {
    _swift_once(&DAT_101042e80,FUN_100bcc0c8);
  }
  uVar1 = DAT_101047b60;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(uVar1);
  FUN_100be6694();
  FUN_100bccbb4();
  FUN_100b69e90(param_2);
  return;
}



/* Address: 0x100bcc1b8 | FUN_100bcc1b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bcc1b8(String *param_1,ulong *param_2,char *param_3,void *param_4,ulong *param_5,
                  undefined *param_6)

{
  UUID UVar1;
  UUID UVar2;
  Encoding EVar3;
  NSString *pNVar4;
  undefined *puVar5;
  char *pcVar6;
  _StringGuts _Var7;
  void *pvVar8;
  long lVar9;
  Encoding unaff_x19;
  void *pvVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  char *local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  ulong *local_80;
  String *local_78;
  String local_70;
  
  local_98 = param_6;
  local_78 = param_1;
  local_88 = (undefined *)Encoding::_typeMetadataAccessor();
  local_90 = *(long *)(local_88 + -8);
  FUN_100bccb98();
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  pvVar10 = (void *)*param_2;
  if (*(long *)((long)pvVar10 + 0x10) != 0) {
    local_80 = param_5;
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(pvVar10);
    pcVar6 = param_3;
    pvVar8 = param_4;
    FUN_100071370();
    if (((ulong)pvVar8 & 1) != 0) {
      SVar12 = *(String *)(*(long *)((long)pvVar10 + 0x38) + (long)pcVar6 * 0x10);
      FUN_100bccbc4();
      _swift_bridgeObjectRelease(param_4);
      param_4 = pvVar10;
      goto LAB_100bcc48c;
    }
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(pvVar10);
  }
  pcVar6 = param_3;
  pvVar10 = param_4;
  local_80 = param_2;
  FUN_100bcc4bc();
  if (pvVar10 == (void *)0x0) {
    UVar2 = Foundation::UUID::init();
    SVar12 = Foundation::UUID::get_uuidString(UVar2);
    (**(code **)(lVar11 + 8))((long)&local_a0 - (lVar9 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
    EVar3.unknown = param_3;
    pvVar10 = param_4;
    FUN_100bcc5d8();
    local_a0 = EVar3.unknown;
    local_70 = SVar12;
    FUN_100bccbc4();
    Encoding::_get_utf8(EVar3);
    FUN_100008378();
    pcVar6 = (char *)0x0;
    (extension_Foundation)::Swift::StringProtocol::_data(unaff_x19,false);
    local_98 = unaff_x19.unknown;
    (**(code **)(local_90 + 8))();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    if ((ulong)pcVar6 >> 0x3c < 0xf) {
      _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pvVar8 = (void *)0x0;
      _Var7.unknown = local_98;
      FUN_100bccb30();
      if (((ulong)pNVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100b84dac();
        local_70.str = (char *)0x0;
        local_70.bridgeObject = (void *)0xe000000000000000;
        local_88 = puVar5;
        Swift::_StringGuts::grow(0x2e,_Var7);
        _swift_bridgeObjectRelease(local_70.bridgeObject);
        local_70.bridgeObject = (void *)0x8000000100dd06a0;
        local_70.str = (char *)0xd00000000000002c;
        SVar13.bridgeObject = pvVar10;
        SVar13.str = local_a0;
        SVar14.bridgeObject = pvVar8;
        SVar14.str = pcVar6;
        Swift::String::append(SVar13,SVar14);
        _swift_bridgeObjectRelease(pvVar10);
        pvVar10 = local_70.bridgeObject;
        FUN_100b84df8(4,local_70.str,local_70.bridgeObject,0xd00000000000005a,0x8000000100dd06d0,
                      0x22);
        FUN_100bccbcc();
      }
      else {
        FUN_100bccbcc(0);
      }
    }
    _swift_bridgeObjectRelease(pvVar10);
  }
  else {
    SVar12.bridgeObject = pvVar10;
    SVar12.str = pcVar6;
  }
  _swift_bridgeObjectRetain(param_4);
  FUN_100bccbc4();
  FUN_100bd5a94(SVar12.str,SVar12.bridgeObject,param_3,param_4);
LAB_100bcc48c:
  _swift_bridgeObjectRelease(param_4);
  *local_78 = SVar12;
  return;
}



/* Address: 0x100bcc4bc | FUN_100bcc4bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100bcc4bc(undefined8 param_1,undefined8 param_2)

{
  Encoding EVar1;
  ID self;
  NSString *pNVar2;
  Data DVar3;
  Data data;
  char *pcVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  EVar1 = Encoding::_typeMetadataAccessor();
  FUN_100bccb98(*(undefined8 *)(EVar1.unknown + -8));
  FUN_100bcc5d8(param_1,param_2);
  self = _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pcVar4 = "contentsAtPath:";
  DVar3.unknown = (undefined *)_objc_msgSend(self,"contentsAtPath:",pNVar2);
  if (DVar3.unknown == (undefined *)0x0) {
    DVar3.unknown = (undefined *)0x0;
    pcVar5 = (char *)0x0;
  }
  else {
    data = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
    Encoding::_get_utf8((Encoding)0x0);
    DVar3 = data;
    pcVar5 = pcVar4;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    FUN_10003bf2c(data.unknown,pcVar4);
  }
  auVar6._8_8_ = pcVar5;
  auVar6._0_8_ = DVar3.unknown;
  return auVar6;
}



/* Address: 0x100bcc5d8 | FUN_100bcc5d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bcc5d8(void)

{
  NSString *self;
  NSString *pNVar1;
  String SVar2;
  
  self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend((ID)self,"stringByAppendingPathComponent:",pNVar1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar2;
}


