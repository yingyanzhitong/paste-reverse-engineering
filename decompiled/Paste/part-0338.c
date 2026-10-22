/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100428c74 | thunk_FUN_100428c78 */

void thunk_FUN_100428c78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d04,&DAT_100ed42e0);
  DAT_100fc6208 = pTVar1;
  return;
}



/* Address: 0x100428c78 | FUN_100428c78 */

void FUN_100428c78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d04,&DAT_100ed42e0);
  DAT_100fc6208 = pTVar1;
  return;
}



/* Address: 0x100428cb8 | FUN_100428cb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100428cb8(void)

{
  undefined *puVar1;
  
  if (DAT_100fc5c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___SKDownload;
  _swift_getObjCClassMetadata();
  DAT_100fc5c38 = puVar1;
  return;
}



/* Address: 0x100428cfc | thunk_FUN_100425d50 */

void thunk_FUN_100425d50(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 7 | param_2 << 7;
  return;
}



/* Address: 0x100428d00 | thunk_FUN_100425d34 */

byte thunk_FUN_100425d34(long param_1)

{
  return *(byte *)(param_1 + 0x10) >> 7;
}



/* Address: 0x100428d04 | thunk_FUN_100425ef0 */

void thunk_FUN_100425ef0(void)

{
  FUN_100425ef0();
  return;
}



/* Address: 0x100428d08 | thunk_FUN_10042545c */

void thunk_FUN_10042545c(void)

{
  FUN_10042545c();
  return;
}



/* Address: 0x100428d0c | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x100428d10 | thunk_FUN_100425bf8 */

void thunk_FUN_100425bf8(void)

{
  FUN_100425bf8();
  return;
}



/* Address: 0x100428d14 | thunk_FUN_100425d74 */

void thunk_FUN_100425d74(void)

{
  FUN_100425d80();
  return;
}



/* Address: 0x100428d18 | thunk_FUN_100425e9c */

void thunk_FUN_100425e9c(void)

{
  FUN_100425e9c();
  return;
}



/* Address: 0x100428d1c | thunk_FUN_100428810 */

void thunk_FUN_100428810(void)

{
  FUN_100425d80();
  return;
}



/* Address: 0x100428d20 | thunk_FUN_100425d40 */

void thunk_FUN_100425d40(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0x7f;
  return;
}



/* Address: 0x100428d24 | FUN_100428d24 */

undefined * FUN_100428d24(undefined *param_1,Index param_2)

{
  __CocoaSet _Var1;
  bool bVar2;
  Index IVar3;
  Index IVar4;
  UnsafeMutablePointer UVar5;
  Index IVar6;
  undefined8 uVar7;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    IVar3.cmsgPointer.unknown =
         (UnsafeMutablePointer)Swift::_HashTable::get_startBucket((_HashTable)(param_1 + 0x38));
    uVar7 = 0;
    param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(ulong)*(uint *)(param_1 + 0x24);
    if (IVar3.cmsgPointer.unknown !=
        (UnsafeMutablePointer)(1L << ((ulong)(byte)param_1[0x20] & 0x3f))) goto LAB_100428df4;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    IVar3 = Swift::__CocoaSet::get_startIndex(_Var1);
    IVar6.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    IVar4 = Swift::__CocoaSet::get_endIndex(_Var1);
    bVar2 = Swift::__CocoaSet::Index::___infix(IVar3,param_2,IVar4);
    uVar7 = 1;
    FUN_10000cae0(IVar4.cmsgPointer.unknown,IVar6.cmsgPointer.unknown,1);
    if (!bVar2) {
LAB_100428df4:
      UVar5 = IVar3.cmsgPointer.unknown;
      FUN_10042c704(IVar3.cmsgPointer.unknown,param_2.cmsgPointer.unknown,uVar7,param_1);
      FUN_10000cae0(IVar3.cmsgPointer.unknown,param_2.cmsgPointer.unknown,uVar7);
      return UVar5.unknown;
    }
  }
  FUN_10000cae0(IVar3.cmsgPointer.unknown,param_2.cmsgPointer.unknown,uVar7);
  return (undefined *)0x0;
}



/* Address: 0x100428e38 | FUN_100428e38 */

undefined1  [16] FUN_100428e38(long param_1)

{
  Bucket BVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  BVar1 = Swift::_HashTable::get_startBucket((undefined *)(param_1 + 0x38));
  if (BVar1.offset == 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) {
    BVar1.offset = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)(param_1 + 0x24);
    FUN_10042d0b0(BVar1.offset,uVar2,0,param_1);
    _swift_bridgeObjectRetain(uVar2);
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = BVar1.offset;
  return auVar3;
}



/* Address: 0x100428eb0 | FUN_100428eb0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100428eb0(void)

{
  undefined *puVar1;
  ID IVar2;
  URL UVar3;
  URL UVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  long lVar7;
  objc_super local_50;
  
  puVar1 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  lVar7 = (long)&local_50 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar2 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar3.unknown = (undefined *)objc_stub::appStoreReceiptURL(IVar2);
  if (UVar3.unknown == (undefined *)0x0) {
    UVar4 = Foundation::URL::typeMetadataAccessor();
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    UVar4 = Foundation::URL::typeMetadataAccessor();
  }
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x38))(lVar7,UVar3.unknown == (undefined *)0x0,1);
  pcVar5 = (class_t *)0x0;
  FUN_10041ac8c();
  pcVar6 = pcVar5;
  _objc_allocWithZone();
  *(undefined8 *)
   ((long)&pcVar6->isa + _TtC14SwiftyStoreKit23InAppReceiptVerificator::receiptRefreshRequest) = 0;
  FUN_1000f8cac(lVar7,(long)&pcVar6->isa +
                      _TtC14SwiftyStoreKit23InAppReceiptVerificator::appStoreReceiptURL,
                &DAT_100fc57a0,&DAT_100c49360);
  local_50.receiver = (ID)pcVar6;
  local_50.super_class = pcVar5;
  IVar2 = _objc_msgSendSuper2(&local_50,"init");
  FUN_1000fb4c4(lVar7,&DAT_100fc57a0,&DAT_100c49360);
  return IVar2;
}



/* Address: 0x100429010 | FUN_100429010 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100429010(NSError *param_1,char *param_2,char *param_3,void *param_4,undefined8 param_5,
                  byte param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined4 param_10,code *param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  String SVar8;
  String SVar9;
  NSError *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  byte bStack_160;
  undefined7 uStack_15f;
  undefined8 local_158;
  undefined8 uStack_150;
  byte local_148;
  undefined7 uStack_147;
  code *pcStack_140;
  undefined *puStack_138;
  NSError *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  undefined *local_b0;
  undefined1 local_7f;
  
  pcVar5 = param_2;
  pcVar6 = param_3;
  pvVar7 = param_4;
  FUN_100428d24();
  if (param_1 == (NSError *)0x0) {
    if (param_3 == (char *)0x0) {
      FUN_100428e38();
      if (pcVar5 == (char *)0x0) {
        uVar1 = *(undefined8 *)PTR__SKErrorDomain_100ea8078;
        puVar4 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        local_f0 = (NSError *)objc_stub::initWithDomain_code_userInfo_((ID)puVar4,uVar1,0,0);
      }
      else {
        puVar4 = &DAT_100fc6510;
        FUN_1000f7830(&DAT_100fc6510,&DAT_100c49eb0);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar4 + 0x20) = SVar8;
        local_f0 = (NSError *)0x0;
        uStack_e8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x16,(_StringGuts)SVar8.bridgeObject);
        _swift_bridgeObjectRelease(uStack_e8);
        local_f0 = (NSError *)0xd000000000000014;
        uStack_e8 = 0x8000000100da6590;
        SVar8.bridgeObject = pcVar5;
        SVar8.str = param_2;
        SVar9.bridgeObject = pvVar7;
        SVar9.str = pcVar6;
        Swift::String::append(SVar8,SVar9);
        _swift_bridgeObjectRelease(pcVar5);
        *(NSError **)(puVar4 + 0x30) = local_f0;
        *(undefined8 *)(puVar4 + 0x38) = uStack_e8;
        puVar2 = puVar4;
        FUN_10042cb1c(puVar4);
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4((String *)(puVar4 + 0x20),&DAT_100fc6518,&DAT_100c49eb8);
        uVar1 = *(undefined8 *)PTR__SKErrorDomain_100ea8078;
        puVar4 = puVar2;
        FUN_100429348(puVar2);
        _swift_bridgeObjectRelease(puVar2);
        puVar2 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar4);
        local_f0 = (NSError *)objc_stub::initWithDomain_code_userInfo_((ID)puVar2,uVar1,3,pNVar3);
      }
      local_7f = 2;
      (*param_11)(&local_f0);
    }
    else {
      _swift_errorRetain(param_3);
      local_f0 = Foundation::__convertErrorToNSError();
      local_7f = 2;
      (*param_11)(&local_f0);
      _swift_errorRelease(param_3);
    }
    FUN_10042d97c(&local_f0);
  }
  else {
    puVar4 = &DAT_100ed4510;
    _swift_allocObject(&DAT_100ed4510,0x28,7);
    *(code **)(puVar4 + 0x10) = param_11;
    *(undefined8 *)(puVar4 + 0x18) = param_12;
    *(void **)(puVar4 + 0x20) = param_4;
    uStack_170 = 1;
    bStack_160 = param_6 & 1;
    local_148 = param_9 & 1;
    pcStack_140 = thunk_FUN_10042d9b0;
    uStack_c0 = CONCAT71(uStack_147,param_9) & 0xffffffffffffff01;
    pcStack_b8 = thunk_FUN_10042d9b0;
    uStack_d8 = CONCAT71(uStack_15f,param_6) & 0xffffffffffffff01;
    uStack_e8 = 1;
    local_178 = param_1;
    local_168 = param_5;
    local_158 = param_7;
    uStack_150 = param_8;
    puStack_138 = puVar4;
    local_f0 = param_1;
    uStack_e0 = param_5;
    local_d0 = param_7;
    uStack_c8 = param_8;
    local_b0 = puVar4;
    _swift_bridgeObjectRetain(param_8);
    _swift_retain(param_12);
    _swift_retain(param_4);
    FUN_10041bf44(&local_f0);
    FUN_10041e3d4(&local_178);
  }
  return;
}



/* Address: 0x100429348 | FUN_100429348 */

undefined * FUN_100429348(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  _DictionaryStorage *this;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *capacity;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [32];
  ulong local_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc64f0;
    FUN_1000f7830(&DAT_100fc64f0,&DAT_100c49e98);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar12 = capacity;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar9 = lVar14 << 10 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 4;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9);
      local_e0 = *puVar2;
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9);
      local_f0 = *puVar3;
      uVar4 = puVar3[1];
      uStack_e8 = uVar4;
      local_d8 = uVar5;
      _swift_bridgeObjectRetain_n(uVar5,2);
      _swift_bridgeObjectRetain_n(uVar4,2);
      _swift_dynamicCast(auStack_d0,&local_f0,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Any_100eae0c0 + 8,7);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      if (local_d8 == 0) {
        _swift_release(param_1);
        FUN_1000fb4c4(&local_e0,&DAT_100fc6520,&DAT_100c49ec0);
        _swift_release(puVar12);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004295ec);
        (*pcVar6)();
      }
      uVar13 = uVar13 - 1 & uVar13;
      local_b0 = local_e0;
      uStack_a8 = local_d8;
      FUN_100011080(auStack_d0,auStack_a0);
      uVar9 = uStack_a8;
      uVar5 = local_b0;
      FUN_100011080(auStack_a0,auStack_80);
      uVar8 = uVar5;
      uVar10 = uVar9;
      FUN_100071370();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004295bc);
          (*pcVar6)();
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar10 + 0x40) =
             *(ulong *)(puVar12 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar9;
        FUN_100011080(auStack_80,*(long *)(puVar12 + 0x38) + uVar8 * 0x20);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004295c0);
          (*pcVar6)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar5;
        puVar2[1] = uVar9;
        _swift_bridgeObjectRelease(uVar10);
        lVar1 = *(long *)(puVar12 + 0x38) + uVar8 * 0x20;
        FUN_100004594(lVar1);
        FUN_100011080(auStack_80,lVar1);
      }
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004295b8);
      (*pcVar6)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(puVar12);
  _swift_release(param_1);
  return puVar12;
}



/* Address: 0x1004295ec | FUN_1004295ec */

void FUN_1004295ec(undefined8 param_1,undefined8 param_2,code *param_3)

{
  FUN_10042d32c();
  (*param_3)();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x100429630 | FUN_100429630 */

void FUN_100429630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  String SVar1;
  undefined8 uVar2;
  _StringGuts _Var3;
  undefined1 uVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  char *local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  byte local_37;
  
  _Var3.unknown = (undefined *)&local_a8;
  FUN_10042d118();
  if (local_37 < 2) {
    if (local_37 == 0) {
      param_1[9] = uStack_60;
      param_1[8] = local_68;
      param_1[0xb] = CONCAT71(uStack_4f,uStack_50);
      param_1[10] = uStack_58;
      param_1[0xd] = CONCAT71(uStack_3f,uStack_40);
      param_1[0xc] = CONCAT71(uStack_47,local_48);
      *(undefined1 *)(param_1 + 0xe) = local_38;
      param_1[1] = pvStack_a0;
      *param_1 = local_a8;
      param_1[3] = uStack_90;
      param_1[2] = uStack_98;
      param_1[5] = uStack_80;
      param_1[4] = local_88;
      param_1[7] = uStack_70;
      param_1[6] = uStack_78;
      *(undefined1 *)((long)param_1 + 0x71) = 0;
      return;
    }
    uStack_d8 = uStack_60;
    local_e0 = local_68;
    uStack_d0 = uStack_58;
    pvStack_118 = pvStack_a0;
    local_120 = local_a8;
    uStack_108 = uStack_90;
    uStack_110 = uStack_98;
    uStack_f8 = uStack_80;
    local_100 = local_88;
    uStack_e8 = uStack_70;
    uStack_f0 = uStack_78;
    Swift::_StringGuts::grow(0x2c,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar1.bridgeObject = pvStack_118;
    SVar1.str = local_120;
    SVar6.bridgeObject = param_5;
    SVar6.str = param_4;
    Swift::String::append(SVar1,SVar6);
    SVar5.bridgeObject = (void *)0x8000000100da6530;
    SVar5.str = (char *)0xd000000000000013;
    SVar7.bridgeObject = param_5;
    SVar7.str = param_4;
    Swift::String::append(SVar5,SVar7);
    uVar2 = 0;
    FUN_10042d154(0,0xd000000000000017,0x8000000100da6510);
    _swift_bridgeObjectRelease(0x8000000100da6510);
    FUN_1002c4c0c(&local_120);
    *param_1 = uVar2;
  }
  else {
    if (local_37 == 2) {
      param_1[9] = uStack_60;
      param_1[8] = local_68;
      param_1[0xb] = CONCAT71(uStack_4f,uStack_50);
      param_1[10] = uStack_58;
      param_1[0xd] = CONCAT71(uStack_3f,uStack_40);
      param_1[0xc] = CONCAT71(uStack_47,local_48);
      *(undefined1 *)(param_1 + 0xe) = local_38;
      param_1[1] = pvStack_a0;
      *param_1 = local_a8;
      param_1[3] = uStack_90;
      param_1[2] = uStack_98;
      param_1[5] = uStack_80;
      param_1[4] = local_88;
      param_1[7] = uStack_70;
      param_1[6] = uStack_78;
      uVar4 = 1;
      goto LAB_10042978c;
    }
    *param_1 = local_a8;
  }
  uVar4 = 2;
LAB_10042978c:
  *(undefined1 *)((long)param_1 + 0x71) = uVar4;
  return;
}



/* Address: 0x1004297a4 | FUN_1004297a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004297a4(void)

{
  return;
}



/* Address: 0x1004297d0 | FUN_1004297d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004297d0(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100429804 | FUN_100429804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100429804(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  ID self;
  long lVar7;
  long lVar8;
  long lVar9;
  ID IVar10;
  long lVar11;
  objc_super local_70;
  objc_super local_60;
  
  uVar3 = 0;
  FUN_10041e78c();
  _swift_allocObject();
  pcVar4 = (class_t *)0x0;
  FUN_10041ef20();
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  *(undefined **)
   ((long)&pcVar5->isa + _TtC14SwiftyStoreKit22ProductsInfoController::inflightRequests) =
       PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar1 = (undefined8 *)
           ((long)&pcVar5->isa +
           _TtC14SwiftyStoreKit22ProductsInfoController::inAppProductRequestBuilder);
  *puVar1 = uVar3;
  puVar1[1] = &PTR_PTR_100ed3958;
  local_60.receiver = (ID)pcVar5;
  local_60.super_class = pcVar4;
  _swift_retain(uVar3);
  IVar6 = _objc_msgSendSuper2(&local_60,"init");
  _swift_release(uVar3);
  self = SKPaymentQueue::defaultQueue((ID)&_OBJC_CLASS___SKPaymentQueue);
  lVar7 = 0;
  FUN_10041da2c();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(lVar7 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar8 = 0;
  FUN_1004202b0();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined **)(lVar8 + 0x38) = puVar2;
  lVar9 = 0;
  FUN_1004156e8();
  _swift_allocObject();
  pcVar4 = (class_t *)0x0;
  FUN_10041c6b8();
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar5->isa + _TtC14SwiftyStoreKit22PaymentQueueController::entitlementRevocation
           );
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)&pcVar5->isa +
           _TtC14SwiftyStoreKit22PaymentQueueController::shouldAddStorePaymentHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)&pcVar5->isa +
           _TtC14SwiftyStoreKit22PaymentQueueController::updatedDownloadsHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar11 = (long)&pcVar5->isa + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  *(undefined ***)(lVar11 + 8) = &PTR_PTR_100ed3600;
  _swift_unknownObjectUnownedInit(lVar11,self);
  *(long *)((long)&pcVar5->isa + _TtC14SwiftyStoreKit22PaymentQueueController::paymentsController) =
       lVar7;
  *(long *)((long)&pcVar5->isa +
           _TtC14SwiftyStoreKit22PaymentQueueController::restorePurchasesController) = lVar8;
  *(long *)((long)&pcVar5->isa +
           _TtC14SwiftyStoreKit22PaymentQueueController::completeTransactionsController) = lVar9;
  local_70.receiver = (ID)pcVar5;
  local_70.super_class = pcVar4;
  _swift_retain(lVar7);
  _swift_retain(lVar8);
  _swift_retain(lVar9);
  IVar10 = _objc_msgSendSuper2(&local_70,"init");
  SKPaymentQueue::addTransactionObserver_(self,IVar10);
  _swift_release(lVar7);
  _swift_release(lVar8);
  _swift_release();
  FUN_100428eb0();
  lVar11 = lVar9;
  FUN_10042d0f8();
  _swift_allocObject();
  *(ID *)(lVar11 + 0x10) = IVar6;
  *(ID *)(lVar11 + 0x18) = IVar10;
  *(long *)(lVar11 + 0x20) = lVar9;
  DAT_100fc63e8 = lVar11;
  return;
}



/* Address: 0x100429a6c | FUN_100429a6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100429a6c(void)

{
  SKPaymentQueue::canMakePayments((ID)&_OBJC_CLASS___SKPaymentQueue);
  return;
}



/* Address: 0x100429a8c | FUN_100429a8c */

void FUN_100429a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  FUN_10041e7ac(param_1,param_2,param_3);
  return;
}



/* Address: 0x100429b08 | FUN_100429b08 */

undefined1  [16]
FUN_100429b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar1 = DAT_100fc63e8;
  puVar2 = &DAT_100fc5b40;
  FUN_1000f7830(&DAT_100fc5b40,&DAT_100c49550);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = puVar2;
  FUN_10042cd58(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_10000caac(puVar2 + 0x20);
  puVar2 = &DAT_100ed43f8;
  _swift_allocObject(&DAT_100ed43f8,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4 & 1;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  puVar2[0x38] = param_7 & 1;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(param_6);
  _swift_retain(param_9);
  pcVar5 = FUN_10042ce20;
  puVar4 = puVar3;
  FUN_10041e7ac(puVar3,FUN_10042ce20,puVar2);
  _swift_bridgeObjectRelease(puVar3);
  _swift_release(puVar2);
  auVar6._8_8_ = *(undefined8 *)(pcVar5 + 8);
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Address: 0x100429c84 | FUN_100429c84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100429c84(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  undefined *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_80;
  undefined7 uStack_7f;
  code *local_78;
  undefined *puStack_70;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar1 = DAT_100fc63e8;
  puVar2 = &DAT_100ed4420;
  _swift_allocObject(&DAT_100ed4420,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  local_98 = param_3 & 1;
  local_80 = param_6 & 1;
  local_78 = thunk_FUN_10042d9b0;
  uStack_d0 = CONCAT71(uStack_7f,param_6) & 0xffffffffffffff01;
  pcStack_c8 = thunk_FUN_10042d9b0;
  uStack_e8 = CONCAT71(uStack_97,param_3) & 0xffffffffffffff01;
  local_100 = param_1;
  uStack_f8 = param_7;
  uStack_f0 = param_2;
  local_e0 = param_4;
  uStack_d8 = param_5;
  local_c0 = puVar2;
  local_b0 = param_1;
  uStack_a8 = param_7;
  local_a0 = param_2;
  local_90 = param_4;
  uStack_88 = param_5;
  puStack_70 = puVar2;
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_9);
  _swift_retain(uVar1);
  FUN_10041e768(param_7);
  FUN_10041bf44(&local_100);
  FUN_10041e3d4(&local_b0);
  return;
}



/* Address: 0x100429db4 | FUN_100429db4 */

void FUN_100429db4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar5 = DAT_100fc63e8;
  lVar13 = *(long *)(DAT_100fc63e8 + 0x18);
  puVar6 = &DAT_100ed4448;
  _swift_allocObject(&DAT_100ed4448,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  *(undefined8 *)(puVar6 + 0x20) = param_5;
  lVar10 = _TtC14SwiftyStoreKit22PaymentQueueController::restorePurchasesController;
  if (*(long *)(*(long *)(lVar13 + _TtC14SwiftyStoreKit22PaymentQueueController::
                                   restorePurchasesController) + 0x28) != 0) {
    _swift_retain(lVar5);
    _swift_retain(param_5);
    _swift_release(puVar6);
    return;
  }
  lVar8 = lVar13 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar7 = lVar8;
  _swift_unknownObjectUnownedLoadStrong(lVar8);
  lVar11 = *(long *)(lVar8 + 8);
  lVar8 = lVar7;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar11 + 0x40);
  _swift_retain(lVar5);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(param_3);
  (*pcVar9)(param_2,param_3,lVar8,lVar11);
  _swift_unknownObjectRelease(lVar7);
  lVar10 = *(long *)(lVar13 + lVar10);
  uVar1 = *(undefined8 *)(lVar10 + 0x10);
  uVar3 = *(undefined8 *)(lVar10 + 0x18);
  uVar2 = *(undefined8 *)(lVar10 + 0x20);
  uVar4 = *(undefined8 *)(lVar10 + 0x28);
  uVar12 = *(undefined8 *)(lVar10 + 0x30);
  *(ulong *)(lVar10 + 0x10) = param_1 & 1;
  *(undefined8 *)(lVar10 + 0x18) = param_2;
  *(undefined8 *)(lVar10 + 0x20) = param_3;
  *(code **)(lVar10 + 0x28) = FUN_10042ce8c;
  *(undefined **)(lVar10 + 0x30) = puVar6;
  _swift_bridgeObjectRetain(param_3);
  _swift_retain(puVar6);
  FUN_1004204f0(uVar1,uVar3,uVar2,uVar4,uVar12);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100429f74 | FUN_100429f74 */

void FUN_100429f74(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  String SVar3;
  String separator;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar2 = *(long *)(*(long *)(DAT_100fc63e8 + 0x18) +
                   _TtC14SwiftyStoreKit22PaymentQueueController::completeTransactionsController);
  if (*(long *)(lVar2 + 0x18) != 0) {
    pcVar1 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'j';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '0';
    pcVar1[0x29] = 'd';
    pcVar1[0x2a] = -0x26;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar3.bridgeObject = (void *)0x20;
    SVar3.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar3,separator);
    _swift_release(pcVar1);
    return;
  }
  *(ulong *)(lVar2 + 0x10) = param_1 & 1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x10042a084 | FUN_10042a084 */

void FUN_10042a084(long param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  String SVar3;
  String separator;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  plVar1 = (long *)(*(long *)(DAT_100fc63e8 + 0x18) +
                   _TtC14SwiftyStoreKit22PaymentQueueController::entitlementRevocation);
  if (*plVar1 != 0) {
    pcVar2 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _swift_allocObject();
    pcVar2[0x18] = '\x02';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x01';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar2[0x20] = 'm';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = -0x30;
    pcVar2[0x28] = -0x60;
    pcVar2[0x29] = 'd';
    pcVar2[0x2a] = -0x26;
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\x01';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = -0x80;
    SVar3.bridgeObject = (void *)0x20;
    SVar3.str = pcVar2;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar3,separator);
    _swift_release(pcVar2);
    return;
  }
  *plVar1 = param_1;
  plVar1[1] = param_2;
  _swift_retain(param_2);
  return;
}



/* Address: 0x10042a180 | FUN_10042a180 */

void FUN_10042a180(undefined8 param_1)

{
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  FUN_10041c1a0(param_1);
  return;
}



/* Address: 0x10042a1dc | FUN_10042a1dc */

undefined8 * FUN_10042a1dc(void)

{
  return &DAT_101057a70;
}



/* Address: 0x10042a1e8 | FUN_10042a1e8 */

void FUN_10042a1e8(void)

{
  FUN_10042a418(&DAT_101057a70,&DAT_101057a78,thunk_FUN_100011128);
  return;
}



/* Address: 0x10042a200 | FUN_10042a200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042a200(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(&DAT_101057a70,auStack_58,1,0);
  uVar3 = DAT_101057a78;
  uVar2 = DAT_101057a70;
  DAT_101057a70 = param_1;
  DAT_101057a78 = param_2;
  FUN_100011128(param_1,param_2);
  FUN_100004550(uVar2,uVar3);
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar5 = DAT_101057a78;
  uVar4 = DAT_101057a70;
  lVar6 = *(long *)(DAT_100fc63e8 + 0x18);
  FUN_100011128(DAT_101057a70,DAT_101057a78);
  FUN_100004550(param_1,param_2);
  puVar1 = (undefined8 *)
           (lVar6 + _TtC14SwiftyStoreKit22PaymentQueueController::shouldAddStorePaymentHandler);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  FUN_100004550(uVar2,uVar3);
  return 0;
}



/* Address: 0x10042a2f0 | FUN_10042a2f0 */

undefined1  [16] FUN_10042a2f0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(&DAT_101057a70,param_1,0x21,0);
  auVar1._8_8_ = &DAT_101057a70;
  auVar1._0_8_ = FUN_10042a330;
  return auVar1;
}



/* Address: 0x10042a330 | FUN_10042a330 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042a330(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_endAccess();
  if ((param_2 & 1) != 0) {
    return param_1;
  }
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar5 = DAT_101057a78;
  uVar4 = DAT_101057a70;
  puVar1 = (undefined8 *)
           (*(long *)(DAT_100fc63e8 + 0x18) +
           _TtC14SwiftyStoreKit22PaymentQueueController::shouldAddStorePaymentHandler);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = DAT_101057a70;
  puVar1[1] = uVar5;
  FUN_100011128(uVar4,uVar5);
  FUN_100004550(uVar2,uVar3);
  return 0;
}



/* Address: 0x10042a3f4 | FUN_10042a3f4 */

undefined8 * FUN_10042a3f4(void)

{
  return &DAT_101057a80;
}



/* Address: 0x10042a400 | FUN_10042a400 */

void FUN_10042a400(void)

{
  FUN_10042a418(&DAT_101057a80,&DAT_101057a88,thunk_FUN_100011128);
  return;
}



/* Address: 0x10042a418 | FUN_10042a418 */

undefined1  [16] FUN_10042a418(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1,auStack_48,0,0);
  uVar2 = *param_1;
  uVar1 = *param_2;
  (*param_3)(uVar2,uVar1);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x10042a478 | FUN_10042a478 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042a478(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(&DAT_101057a80,auStack_58,1,0);
  uVar3 = DAT_101057a88;
  uVar2 = DAT_101057a80;
  DAT_101057a80 = param_1;
  DAT_101057a88 = param_2;
  FUN_100011128(param_1,param_2);
  FUN_100004550(uVar2,uVar3);
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar5 = DAT_101057a88;
  uVar4 = DAT_101057a80;
  lVar6 = *(long *)(DAT_100fc63e8 + 0x18);
  FUN_100011128(DAT_101057a80,DAT_101057a88);
  FUN_100004550(param_1,param_2);
  puVar1 = (undefined8 *)
           (lVar6 + _TtC14SwiftyStoreKit22PaymentQueueController::updatedDownloadsHandler);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  FUN_100004550(uVar2,uVar3);
  return 0;
}



/* Address: 0x10042a568 | FUN_10042a568 */

undefined1  [16] FUN_10042a568(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(&DAT_101057a80,param_1,0x21,0);
  auVar1._8_8_ = &DAT_101057a80;
  auVar1._0_8_ = FUN_10042a5a8;
  return auVar1;
}



/* Address: 0x10042a5a8 | FUN_10042a5a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042a5a8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_endAccess();
  if ((param_2 & 1) != 0) {
    return param_1;
  }
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  uVar5 = DAT_101057a88;
  uVar4 = DAT_101057a80;
  puVar1 = (undefined8 *)
           (*(long *)(DAT_100fc63e8 + 0x18) +
           _TtC14SwiftyStoreKit22PaymentQueueController::updatedDownloadsHandler);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = DAT_101057a80;
  puVar1[1] = uVar5;
  FUN_100011128(uVar4,uVar5);
  FUN_100004550(uVar2,uVar3);
  return 0;
}



/* Address: 0x10042a66c | FUN_10042a66c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042a66c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar2 = *(long *)(DAT_100fc63e8 + 0x18) +
          _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar3 = *(long *)(lVar2 + 8);
  lVar2 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x20))(param_1,lVar2,lVar3);
  _swift_unknownObjectRelease(lVar1);
  return;
}



/* Address: 0x10042a72c | FUN_10042a72c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042a72c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar2 = *(long *)(DAT_100fc63e8 + 0x18) +
          _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar3 = *(long *)(lVar2 + 8);
  lVar2 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x28))(param_1,lVar2,lVar3);
  _swift_unknownObjectRelease(lVar1);
  return;
}



/* Address: 0x10042a7ec | FUN_10042a7ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042a7ec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar2 = *(long *)(DAT_100fc63e8 + 0x18) +
          _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar3 = *(long *)(lVar2 + 8);
  lVar2 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x30))(param_1,lVar2,lVar3);
  _swift_unknownObjectRelease(lVar1);
  return;
}



/* Address: 0x10042a8ac | FUN_10042a8ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042a8ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar2 = *(long *)(DAT_100fc63e8 + 0x18) +
          _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar3 = *(long *)(lVar2 + 8);
  lVar2 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x38))(param_1,lVar2,lVar3);
  _swift_unknownObjectRelease(lVar1);
  return;
}



/* Address: 0x10042a96c | FUN_10042a96c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010042aa8c) */

undefined1  [16] FUN_10042a96c(void)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  Data DVar4;
  undefined8 uVar5;
  NSDataReadingOptions contentsOf;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_50 [16];
  
  puVar1 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  puVar6 = auStack_50 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  contentsOf.unknown = puVar6 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  FUN_1000f8cac(*(long *)(DAT_100fc63e8 + 0x20) +
                _TtC14SwiftyStoreKit23InAppReceiptVerificator::appStoreReceiptURL,puVar6,
                &DAT_100fc57a0,&DAT_100c49360);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar2.unknown);
  if ((int)puVar3 == 1) {
    FUN_1000fb4c4(puVar6,&DAT_100fc57a0,&DAT_100c49360);
    DVar4.unknown = (undefined *)0x0;
    uVar5 = 0xf000000000000000;
  }
  else {
    (**(code **)(lVar7 + 0x20))(contentsOf.unknown,puVar6,UVar2.unknown);
    uVar5 = 0;
    DVar4 = Foundation::Data::_init(contentsOf);
    (**(code **)(lVar7 + 8))(contentsOf.unknown,UVar2.unknown);
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = DVar4.unknown;
  return auVar8;
}



/* Address: 0x10042ab10 | FUN_10042ab10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010042aca8) */

undefined1  [16]
FUN_10042ab10(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  Data DVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  undefined *self;
  ID IVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  code *pcVar14;
  NSDataReadingOptions contentsOf;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_d0 [16];
  objc_super local_c0;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  puVar2 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  puVar13 = auStack_d0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar3.unknown + -8);
  contentsOf.unknown = puVar13 + -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar11 = *(long *)(DAT_100fc63e8 + 0x20);
  FUN_100076688(param_1,auStack_88);
  FUN_100076688(auStack_88,auStack_b0);
  puVar2 = &DAT_100ed4470;
  _swift_allocObject(&DAT_100ed4470,0x50,7);
  *(long *)(puVar2 + 0x10) = lVar11;
  FUN_100076508(auStack_88,puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  FUN_1000f8cac(lVar11 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::appStoreReceiptURL,puVar13,
                &DAT_100fc57a0,&DAT_100c49360);
  puVar4 = puVar13;
  (**(code **)(lVar15 + 0x30))(puVar13,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    _swift_retain(param_4);
    FUN_1000fb4c4(puVar13,&DAT_100fc57a0,&DAT_100c49360);
  }
  else {
    (**(code **)(lVar15 + 0x20))(contentsOf.unknown,puVar13,UVar3.unknown);
    _swift_retain(param_4);
    uVar10 = 0;
    DVar5 = Foundation::Data::_init(contentsOf);
    (**(code **)(lVar15 + 8))(contentsOf.unknown,UVar3.unknown);
    if ((param_2 & 1) == 0) {
      FUN_100004640(auStack_b0,local_98);
      puVar9 = &DAT_100ed44c0;
      _swift_allocObject(&DAT_100ed44c0,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = param_3;
      *(undefined8 *)(puVar9 + 0x18) = param_4;
      pcVar14 = *(code **)(lStack_90 + 8);
      _swift_retain(param_4);
      FUN_1001037b4(DVar5.unknown,uVar10);
      (*pcVar14)(DVar5.unknown,uVar10,FUN_10041af58,puVar9,local_98,lStack_90);
      _swift_release(puVar9);
      FUN_10003bf2c(DVar5.unknown,uVar10);
      _swift_release(puVar2);
      FUN_10003bf2c(DVar5.unknown,uVar10);
      FUN_100004594(auStack_b0);
      IVar8 = 0;
      ppuVar12 = (undefined **)0x0;
      goto LAB_10042adf8;
    }
    FUN_10003bf2c(DVar5.unknown,uVar10);
  }
  puVar9 = &DAT_100ed4498;
  _swift_allocObject(&DAT_100ed4498,0x28,7);
  *(long *)(puVar9 + 0x10) = lVar11;
  *(code **)(puVar9 + 0x18) = FUN_10042cecc;
  *(undefined **)(puVar9 + 0x20) = puVar2;
  pcVar6 = (class_t *)0x0;
  FUN_10041a684();
  pcVar7 = pcVar6;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar7->isa + _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::callback);
  *puVar1 = FUN_10042cee0;
  puVar1[1] = puVar9;
  self = &_OBJC_CLASS___SKReceiptRefreshRequest;
  _objc_allocWithZone();
  _swift_retain(puVar2);
  _swift_retain(puVar9);
  IVar8 = objc_stub::initWithReceiptProperties_((ID)self,0);
  *(ID *)((long)&pcVar7->isa +
         _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest) = IVar8;
  local_c0.receiver = (ID)pcVar7;
  local_c0.super_class = pcVar6;
  IVar8 = _objc_msgSendSuper2(&local_c0,"init");
  lVar15 = _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest;
  objc_stub::setDelegate_
            (*(ID *)(IVar8 + _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest
                    ),IVar8);
  objc_stub::start(*(ID *)(IVar8 + lVar15));
  _swift_release(puVar2);
  _swift_release(puVar9);
  FUN_100004594(auStack_b0);
  *(ID *)(lVar11 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::receiptRefreshRequest) = IVar8;
  ppuVar12 = &PTR_PTR_100ed3518;
LAB_10042adf8:
  auVar16._8_8_ = ppuVar12;
  auVar16._0_8_ = IVar8;
  return auVar16;
}



/* Address: 0x10042aee8 | FUN_10042aee8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010042b024) */

undefined1  [16] FUN_10042aee8(ulong param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  Data DVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  undefined *self;
  ID IVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  long lVar12;
  NSDataReadingOptions contentsOf;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [16];
  objc_super local_70;
  
  puVar2 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  puVar11 = auStack_80 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  contentsOf.unknown = puVar11 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fc63e0 != -1) {
    _swift_once(&DAT_100fc63e0,FUN_100429804);
  }
  lVar12 = *(long *)(DAT_100fc63e8 + 0x20);
  FUN_1000f8cac(lVar12 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::appStoreReceiptURL,puVar11,
                &DAT_100fc57a0,&DAT_100c49360);
  puVar4 = puVar11;
  (**(code **)(lVar13 + 0x30))(puVar11,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar11,&DAT_100fc57a0,&DAT_100c49360);
  }
  else {
    (**(code **)(lVar13 + 0x20))(contentsOf.unknown,puVar11,UVar3.unknown);
    uVar9 = 0;
    DVar5 = Foundation::Data::_init(contentsOf);
    (**(code **)(lVar13 + 8))(contentsOf.unknown,UVar3.unknown);
    if ((param_1 & 1) == 0) {
      FUN_1001037b4(DVar5.unknown,uVar9);
      (*param_2)(DVar5.unknown,uVar9,0);
      FUN_10003bf2c(DVar5.unknown,uVar9);
      FUN_10003bf2c(DVar5.unknown,uVar9);
      IVar8 = 0;
      ppuVar10 = (undefined **)0x0;
      goto LAB_10042b164;
    }
    FUN_10003bf2c(DVar5.unknown,uVar9);
  }
  puVar2 = &DAT_100ed44e8;
  _swift_allocObject(&DAT_100ed44e8,0x28,7);
  *(long *)(puVar2 + 0x10) = lVar12;
  *(code **)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  pcVar6 = (class_t *)0x0;
  FUN_10041a684();
  pcVar7 = pcVar6;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar7->isa + _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::callback);
  *puVar1 = thunk_FUN_10042cee0;
  puVar1[1] = puVar2;
  self = &_OBJC_CLASS___SKReceiptRefreshRequest;
  _objc_allocWithZone();
  _swift_retain(param_3);
  _swift_retain(puVar2);
  IVar8 = objc_stub::initWithReceiptProperties_((ID)self,0);
  *(ID *)((long)&pcVar7->isa +
         _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest) = IVar8;
  local_70.receiver = (ID)pcVar7;
  local_70.super_class = pcVar6;
  IVar8 = _objc_msgSendSuper2(&local_70,"init");
  lVar13 = _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest;
  objc_stub::setDelegate_
            (*(ID *)(IVar8 + _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest
                    ),IVar8);
  objc_stub::start(*(ID *)(IVar8 + lVar13));
  _swift_release(puVar2);
  *(ID *)(lVar12 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::receiptRefreshRequest) = IVar8;
  ppuVar10 = &PTR_PTR_100ed3518;
LAB_10042b164:
  auVar14._8_8_ = ppuVar10;
  auVar14._0_8_ = IVar8;
  return auVar14;
}



/* Address: 0x10042b1e8 | FUN_10042b1e8 */

void FUN_10042b1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1004181fc(0);
  FUN_10041702c(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Address: 0x10042b23c | FUN_10042b23c */

void FUN_10042b23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1004181fc(0);
  puVar1 = &DAT_100fc5b40;
  FUN_1000f7830(&DAT_100fc5b40,&DAT_100c49550);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  _swift_bridgeObjectRetain(param_5);
  puVar2 = puVar1;
  FUN_10042cf3c(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_10000caac(puVar1 + 0x20);
  FUN_100417488(param_1,param_2,param_3,puVar2,param_6,param_7);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10042b328 | FUN_10042b328 */

void FUN_10042b328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1004181fc(0);
  FUN_100417488(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
  return;
}



/* Address: 0x10042b394 | thunk_FUN_10041a03c */

void thunk_FUN_10041a03c(void)

{
  FUN_10041a03c();
  return;
}



/* Address: 0x10042b398 | FUN_10042b398 */

undefined8 FUN_10042b398(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_10042b8f0(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x10042b4dc | FUN_10042b4dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042b4dc(undefined8 *param_1,__CocoaSet param_2)

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
    FUN_10042d2a4(0);
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
    FUN_10042ba54(param_2.unknown,uVar6,uVar5);
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
      FUN_10042d2a4(0);
      _swift_dynamicCast(param_1,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar5,7);
      return 0;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var8);
    if (SCARRY8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10042b704);
      (*pcVar2)();
    }
    FUN_10042b704(_Var8.unknown,_Var7 + 1);
    local_68 = _Var8.unknown;
    if (*(ulong *)(_Var8.unknown + 0x18) <= *(ulong *)(_Var8.unknown + 0x10)) {
      FUN_10042c4d8(*(ulong *)(_Var8.unknown + 0x10) + 1);
    }
    puVar1 = local_68;
    FUN_10036bd88(param_2.unknown,local_68);
    _swift_bridgeObjectRelease(puVar10);
    *unaff_x20 = puVar1;
  }
  *param_1 = param_2.unknown;
  return 1;
}



/* Address: 0x10042b704 | FUN_10042b704 */

undefined * FUN_10042b704(__CocoaSet param_1,long param_2)

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
    this = (_SetStorage *)&DAT_100fc6500;
    FUN_1000f7830(&DAT_100fc6500,&DAT_100c49ea0);
    _Var5.unknown = param_1.unknown;
    Swift::_SetStorage::_convert(this,param_1,param_2);
    local_68 = _Var5.unknown;
    this_00 = Swift::__CocoaSet::makeIterator(param_1);
    pIVar7 = this_00;
    Swift::__CocoaSet::Iterator::_next(this_00);
    if (pIVar7 != (Iterator *)0x0) {
      uVar6 = 0;
      FUN_10042d2a4(0);
      puVar2 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
      do {
        local_78 = pIVar7;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar6,7);
        uVar3 = local_70;
        if (*(ulong *)(_Var5.unknown + 0x18) <= *(ulong *)(_Var5.unknown + 0x10)) {
          FUN_10042c4d8(*(ulong *)(_Var5.unknown + 0x10) + 1);
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
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10042b8f0);
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



/* Address: 0x10042b8f0 | FUN_10042b8f0 */

void FUN_10042b8f0(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_10042bfc8();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_10042bb9c(uVar6 + 1);
    }
    else {
      FUN_10042c274();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10042ba54);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10042ba44);
  (*pcVar4)();
}



/* Address: 0x10042ba54 | FUN_10042ba54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042ba54(NSObject *param_1,ulong param_2,uint param_3)

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
      FUN_10042c124();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_10042bdc4(uVar3 + 1);
    }
    else {
      FUN_10042c4d8();
    }
    lVar5 = *unaff_x20;
    param_2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(lVar5 + 0x28));
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_10042d2a4(0);
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(lVar5 + 0x30) + param_2 * 8),param_1);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10042bb9c);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042bb90);
  (*pcVar1)();
}



/* Address: 0x10042bb9c | FUN_10042bb9c */

void FUN_10042bb9c(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc6508;
  FUN_1000f7830(&DAT_100fc6508,&DAT_100c49ea8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10042bd8c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10042bdc0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_10042bd8c;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10042bdc4);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x10042bdc4 | FUN_10042bdc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10042bdc4(long param_1)

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
  this = (_SetStorage *)&DAT_100fc6500;
  FUN_1000f7830(&DAT_100fc6500,&DAT_100c49ea0);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10042bf90:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10042bfc4);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_10042bf90;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10042bfc8);
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



/* Address: 0x10042bfc8 | FUN_10042bfc8 */

void FUN_10042bfc8(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fc6508;
  FUN_1000f7830(&DAT_100fc6508,&DAT_100c49ea8);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_10042c0a4;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_10042c0a4:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10042c124);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_10042c0fc;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_10042c0fc:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x10042c124 | FUN_10042c124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10042c124(void)

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
  
  this = (_SetStorage *)&DAT_100fc6500;
  FUN_1000f7830(&DAT_100fc6500,&DAT_100c49ea0);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10042c274);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_10042c24c;
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
LAB_10042c24c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x10042c274 | FUN_10042c274 */

void FUN_10042c274(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc6508;
  FUN_1000f7830(&DAT_100fc6508,&DAT_100c49ea8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_10042c4a4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10042c4d4);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10042c4a4;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10042c4d8);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x10042c4d8 | FUN_10042c4d8 */

void FUN_10042c4d8(long param_1)

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
  this = (_SetStorage *)&DAT_100fc6500;
  FUN_1000f7830(&DAT_100fc6500,&DAT_100c49ea0);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_10042c6d4:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10042c700);
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
          goto LAB_10042c6d4;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10042c704);
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


