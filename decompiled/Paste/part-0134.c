/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10019881c | FUN_10019881c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100198858 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_10019881c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100198888 | FUN_100198888 */

undefined1  [16] FUN_100198888(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x79706f63;
  if (param_1 != '\x01') {
    uVar1 = 0x6574736170;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1001988b8 | thunk_FUN_1001988bc */

void thunk_FUN_1001988bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3ab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31a60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31a60,&DAT_100ebd298);
  DAT_100fb3ab0 = pTVar1;
  return;
}



/* Address: 0x1001988bc | FUN_1001988bc */

void FUN_1001988bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3ab0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31a60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31a60,&DAT_100ebd298);
  DAT_100fb3ab0 = pTVar1;
  return;
}



/* Address: 0x1001988fc | FUN_1001988fc */

void FUN_1001988fc(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x79706f63;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x6574736170;
  }
  HVar3.unknown = &DAT_e400000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100198970 | FUN_100198970 */

void FUN_100198970(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x79706f63;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x6574736170;
  }
  puVar2 = &DAT_e400000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1001989c0 | FUN_1001989c0 */

void FUN_1001989c0(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x79706f63;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x6574736170;
  }
  HVar3.unknown = &DAT_e400000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100198a30 | FUN_100198a30 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100198a70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100198a30(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100198aa8 | FUN_100198aa8 */

void FUN_100198aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x79706f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6574736170;
  }
  puVar2 = &DAT_e400000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100198adc | FUN_100198adc */

undefined1  [16] FUN_100198adc(void)

{
  return ZEXT816(0x100ebd298);
}



/* Address: 0x100198aec | FUN_100198aec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100198c30) */

void FUN_100198aec(undefined8 *param_1)

{
  ID self;
  int iVar1;
  undefined *puVar2;
  Data DVar3;
  NSString *pNVar4;
  Data DVar5;
  JSONDecoder *pJVar6;
  undefined *puVar7;
  Date DVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [16];
  
  puVar2 = &DAT_100fb3ba8;
  FUN_1000037f0(&DAT_100fb3ba8,&DAT_100c31b70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  DVar3.unknown = (undefined *)0x0;
  FUN_100198ea4();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x20);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar5.unknown = (undefined *)objc_stub::dataForKey_(self,pNVar4);
  if (DVar5.unknown == (undefined *)0x0) {
    *param_1 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10019084c();
    param_1[1] = puVar7;
    puVar7 = puVar2;
    FUN_10019084c();
    param_1[2] = puVar7;
    FUN_10019084c();
    param_1[3] = puVar2;
    iVar1 = *(int *)(DVar3.unknown + 0x20);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))
              ((long)param_1 + (long)iVar1,1,1,DVar8.unknown);
  }
  else {
    uVar9 = extraout_x1;
    DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
    pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar6 = Foundation::JSONDecoder::init(pJVar6);
    FUN_100003a00(&DAT_100fb3bb0,FUN_100198ea4,&TargetProtocolConformanceDescriptor_100c31b98);
    Foundation::JSONDecoder::_decode(pJVar6,DVar3);
    FUN_10003bf2c(DVar5.unknown,uVar9);
    _swift_release(pJVar6);
    (**(code **)(lVar12 + 0x38))(puVar10,0,1,DVar3.unknown);
    FUN_10019a9ec(puVar10,lVar11);
    FUN_10019a9ec(lVar11,param_1);
  }
  return;
}



/* Address: 0x100198d3c | FUN_100198d3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100198dbc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100198db4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100198d3c(void)

{
  JSONEncoder *pJVar1;
  undefined8 uVar2;
  undefined *puVar3;
  Data DVar4;
  NSData *pNVar5;
  NSString *pNVar6;
  long unaff_x20;
  ID self;
  
  pJVar1 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
  pJVar1 = Foundation::JSONEncoder::init(pJVar1);
  uVar2 = 0;
  FUN_100198ea4(0);
  puVar3 = &DAT_100fb3b88;
  FUN_100003a00(&DAT_100fb3b88,FUN_100198ea4,&TargetProtocolConformanceDescriptor_100c31bc0);
  DVar4 = Foundation::JSONEncoder::_encode(pJVar1,puVar3,uVar2,puVar3);
  _swift_release(pJVar1);
  self = *(ID *)(unaff_x20 + 0x20);
  pNVar5 = Foundation::Data::_bridgeToObjectiveC(DVar4);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setObject_forKey_(self,pNVar5,pNVar6);
  FUN_10003bf2c(DVar4.unknown,uVar2);
  return;
}



/* Address: 0x100198e50 | FUN_100198e50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100198e50(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100198e84 | FUN_100198e84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100198e84(void)

{
  return ZEXT816(0x100fb3af8);
}



/* Address: 0x100198ea4 | FUN_100198ea4 */

void FUN_100198ea4(undefined8 param_1)

{
  if (DAT_100fb3c20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca6800);
  return;
}



/* Address: 0x100198edc | FUN_100198edc */

undefined8 FUN_100198edc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100198ea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100198f18 | FUN_100198f18 */

undefined1  [16] FUN_100198f18(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar1 = 0x8000000100d97980;
  uVar6 = 0xd000000000000017;
  if (bVar3 != 3) {
    uVar1 = 0xef65746144747261;
    uVar6 = 0x7453646f69726570;
  }
  uVar2 = 0x8000000100d97960;
  uVar5 = 0xd000000000000016;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  uVar6 = 0xd000000000000011;
  pcVar4 = "6ylIIxVmn3RlSkA";
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000012;
    pcVar4 = "interactionsCount";
  }
  if (bVar3 < 2) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar5 = uVar6;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x100198fc8 | FUN_100198fc8 */

void FUN_100198fc8(undefined1 *param_1,undefined1 param_2)

{
  FUN_10019b450();
  *param_1 = param_2;
  return;
}



/* Address: 0x100198fec | FUN_100198fec */

void FUN_100198fec(undefined1 *param_1)

{
  *param_1 = 5;
  return;
}



/* Address: 0x100198ff8 | FUN_100198ff8 */

String FUN_100198ff8(void)

{
  String SVar1;
  
  FUN_10019b234();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100199020 | FUN_100199020 */

String FUN_100199020(void)

{
  String SVar1;
  
  FUN_10019b234();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100199048 | FUN_100199048 */

void FUN_100199048(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  Date DVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [11];
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fb3c70;
  FUN_1000037f0(&DAT_100fb3c70,&DAT_100c31be8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10019b234();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    puVar3 = &DAT_100fb31a0;
    FUN_1000037f0(&DAT_100fb31a0,&DAT_100c31010);
    puVar4 = &DAT_100fb3c80;
    FUN_10019b274(&DAT_100fb3c80,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR___protocol_witness_table_for_Swift_Int___Swift_Encodable_in_Swift_100eac700,
                  PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 1,&local_52,puVar2,puVar3,puVar4);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 2,&local_53,puVar2,puVar3,puVar4);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 3,&local_54,puVar2,puVar3,puVar4);
    lVar5 = 0;
    FUN_100198ea4();
    iVar1 = *(int *)(lVar5 + 0x20);
    local_55 = 4;
    DVar6 = Foundation::Date::typeMetadataAccessor();
    puVar3 = &DAT_100fb3c88;
    FUN_100003a00(&DAT_100fb3c88,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_55,puVar2,DVar6.unknown,puVar3);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x10019926c | FUN_10019926c */

/* WARNING: Removing unreachable block (ram,0x000100199568) */
/* WARNING: Removing unreachable block (ram,0x000100199444) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100199438 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10019926c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  Date DVar8;
  __int64 _Var9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  __int64 *p_Var11;
  long lVar12;
  long local_c0;
  undefined *local_b8 [2];
  __int64 local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_100fb32a8;
  local_a8 = param_1;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb3c90;
  local_a0 = (long)&local_c0 - extraout_x8;
  FUN_1000037f0(&DAT_100fb3c90,&DAT_100c31bf0);
  local_90 = *(long *)(puVar4 + -8);
  local_88 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = ((long)&local_c0 - extraout_x8) - extraout_x8_00;
  lVar5 = 0;
  FUN_100198ea4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  p_Var11 = (__int64 *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  *p_Var11 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10019084c();
  local_98 = puVar6;
  p_Var11[1] = (__int64)puVar6;
  puVar7 = puVar4;
  FUN_10019084c();
  p_Var11[2] = (__int64)puVar7;
  FUN_10019084c();
  p_Var11[3] = (__int64)puVar4;
  iVar1 = *(int *)(lVar5 + 0x20);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))((long)p_Var11 + (long)iVar1,1,1,DVar8.unknown)
  ;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10019b234();
  Swift::Decoder::_container();
  puVar3 = local_88;
  lVar5 = local_90;
  puVar6 = local_98;
  if (unaff_x21 == 0) {
    local_58 = 0;
    local_c0 = (long)iVar1;
    local_b8[0] = puVar4;
    local_b8[1] = DVar8.unknown;
    _Var9 = Swift::KeyedDecodingContainer::_decode(DVar8.unknown,local_88);
    *p_Var11 = _Var9;
    puVar4 = &DAT_100fb31a0;
    FUN_1000037f0(&DAT_100fb31a0,&DAT_100c31010);
    local_61 = 1;
    puVar10 = &DAT_100fb3c98;
    FUN_10019b274(&DAT_100fb3c98,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR___protocol_witness_table_for_Swift_Int___Swift_Decodable_in_Swift_100eac728,
                  PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar4,&local_61,puVar3,puVar4,puVar10);
    _swift_bridgeObjectRelease(puVar6);
    p_Var11[1] = CONCAT71(uStack_57,local_58);
    local_61 = 2;
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar4,&local_61,puVar3,puVar4,puVar10);
    _swift_bridgeObjectRelease(puVar7);
    p_Var11[2] = CONCAT71(uStack_57,local_58);
    local_61 = 3;
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar4,&local_61,puVar3,puVar4,puVar10);
    _swift_bridgeObjectRelease(local_b8[0]);
    p_Var11[3] = CONCAT71(uStack_57,local_58);
    local_58 = 4;
    puVar4 = &DAT_100fb3ca0;
    FUN_100003a00(&DAT_100fb3ca0,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    lVar2 = local_a0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_a0,local_b8[1],&local_58,puVar3,local_b8[1],puVar4);
    (**(code **)(lVar5 + 8))(lVar12,puVar3);
    FUN_10019b2e0(lVar2,(long)p_Var11 + local_c0);
    FUN_10019b330(p_Var11,local_a8);
  }
  FUN_100004594(param_2);
  FUN_100198edc(p_Var11);
  return;
}



/* Address: 0x100199640 | FUN_100199640 */

void FUN_100199640(void)

{
  FUN_10019926c();
  return;
}



/* Address: 0x100199654 | FUN_100199654 */

void FUN_100199654(void)

{
  FUN_100199048();
  return;
}



/* Address: 0x100199668 | FUN_100199668 */

void FUN_100199668(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fb3bb8;
  FUN_1000037f0(&DAT_100fb3bb8,&DAT_100c31b78);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1001997e4:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100199750;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100199750:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10019980c);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1001997e4;
        }
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



/* Address: 0x10019980c | FUN_10019980c */

void FUN_10019980c(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fb31b8;
  FUN_1000037f0(&DAT_100fb31b8,&DAT_100c31018);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_1001998e8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1001998e8:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100199974);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10019994c;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_10019994c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100199974 | FUN_100199974 */

void FUN_100199974(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  this = (_DictionaryStorage *)&DAT_100fb31c0;
  FUN_1000037f0(&DAT_100fb31c0,&DAT_100c31020);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100199b10:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100199a5c;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar11 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x28;
      FUN_100011090(*(long *)(original + 0x38) + lVar10,&local_88,&DAT_100fb32b0,&DAT_100c31a50);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x38) + lVar10);
      puVar2[1] = uStack_80;
      *puVar2 = local_88;
      puVar2[3] = uStack_70;
      puVar2[2] = local_78;
      puVar2[4] = local_68;
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100199a5c:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100199b38);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100199b10;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Address: 0x100199b38 | FUN_100199b38 */

void FUN_100199b38(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  long lVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb3bc0;
  FUN_1000037f0(&DAT_100fb3bc0,&DAT_100c31b80);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100199dcc:
    _swift_release(original);
LAB_100199dd4:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100199dfc);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100199dd4;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100199dcc;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar9;
    }
    uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar11 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar9 = *(long *)(original + 0x38) + uVar11 * 0x28;
    if ((param_2 & 1U) == 0) {
      FUN_100076688(lVar9,auStack_88);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100076508(lVar9,auStack_88);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_d0;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar14 >> 6;
      do {
        uVar10 = uVar12 + 1;
        if ((uVar10 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100199e00);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar10 != uVar11) {
          uVar12 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar11 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100076508(auStack_88,*(long *)(p_Var8 + 0x38) + uVar11 * 0x28);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Address: 0x100199e00 | FUN_100199e00 */

void FUN_100199e00(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb3bb8;
  FUN_1000037f0(&DAT_100fb3bb8,&DAT_100c31b78);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10019a088:
    _swift_release(original);
LAB_10019a090:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10019a0b8);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10019a090;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10019a088;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10019a0bc);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x10019a0bc | FUN_10019a0bc */

void FUN_10019a0bc(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar15;
  ulong uVar16;
  __RawDictionaryStorage *p_Var17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb31b8;
  FUN_1000037f0(&DAT_100fb31b8,&DAT_100c31018);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10019a31c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var17 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)p_Var17;
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10019a34c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var17 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(p_Var17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10019a31c;
        }
        uVar16 = *(ulong *)(p_Var17 + lVar18 * 8);
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
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar15 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10019a350);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar15;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x10019a350 | FUN_10019a350 */

void FUN_10019a350(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  undefined8 *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d8 [72];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb31c0;
  FUN_1000037f0(&DAT_100fb31c0,&DAT_100c31020);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10019a600:
    _swift_release(original);
LAB_10019a608:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10019a630);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10019a608;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10019a600;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    puVar8 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x28);
    if ((param_2 & 1U) == 0) {
      FUN_100011090(puVar8,&local_90,&DAT_100fb32b0,&DAT_100c31a50);
      _swift_bridgeObjectRetain(pvVar3);
    }
    else {
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_78 = puVar8[3];
      uStack_80 = puVar8[2];
      local_70 = puVar8[4];
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    into.unknown = auStack_d8;
    Swift::String::hash(into,SVar4);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10019a634);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar5 = (bool)(uVar9 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
    *puVar8 = pcVar2;
    puVar8[1] = pvVar3;
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 0x28);
    puVar8[4] = local_70;
    puVar8[1] = uStack_88;
    *puVar8 = local_90;
    puVar8[3] = uStack_78;
    puVar8[2] = uStack_80;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x10019a634 | FUN_10019a634 */

String FUN_10019a634(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  if ((long)param_1 < 7) {
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = (void *)0xe100000000000000;
    SVar6.str = (char *)0x64;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar6,SVar7);
    return SVar5;
  }
  pcVar4 = (char *)0x6437322d3132;
  if (0x1b < param_1) {
    pcVar4 = (char *)0x2b643832;
  }
  puVar1 = &DAT_e600000000000000;
  if (0x1b < param_1) {
    puVar1 = &DAT_e400000000000000;
  }
  pcVar2 = (char *)0x6430322d3431;
  if (0x14 < param_1) {
    pcVar2 = pcVar4;
  }
  puVar3 = &DAT_e600000000000000;
  if (0x14 < param_1) {
    puVar3 = puVar1;
  }
  pcVar4 = (char *)0x6433312d37;
  if (0xd < param_1) {
    pcVar4 = pcVar2;
  }
  puVar1 = &DAT_e500000000000000;
  if (0xd < param_1) {
    puVar1 = puVar3;
  }
  SVar5.bridgeObject = puVar1;
  SVar5.str = pcVar4;
  return SVar5;
}



/* Address: 0x10019a6f4 | FUN_10019a6f4 */

undefined * FUN_10019a6f4(long param_1)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  _SetStorage *this;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  long lVar4;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fb3b90;
    FUN_1000037f0(&DAT_100fb3b90,&DAT_100c31b68);
    puVar5 = puVar14;
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar15 = (undefined *)0x0;
    local_70 = puVar5 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar12 + 0x48);
    pcVar16 = *(code **)(lVar12 + 0x10);
    local_98 = puVar14;
    do {
      lVar1 = local_88;
      (*pcVar16)(local_88,local_90 + lVar17 * (long)puVar15,lVar4);
      local_78 = *(code **)(lVar12 + 0x20);
      (*local_78)(local_68,lVar1,lVar4);
      seed = *(__int64 *)(puVar5 + 0x28);
      FUN_100003a00(&DAT_100fb3b98,PTR_typeMetadataAccessor_100ea7668,
                    PTR_Foundation__Foundation__Calendar__Component_>Swift__Hashable_100ea7678);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        local_80 = puVar15;
        do {
          (*pcVar16)(puVar11,*(long *)(puVar5 + 0x30) + uVar6 * lVar17,lVar4);
          puVar14 = &DAT_100fb3ba0;
          FUN_100003a00(&DAT_100fb3ba0,PTR_typeMetadataAccessor_100ea7668,
                        PTR_Foundation__Foundation__Calendar__Component_>Swift__Equatable_100ea7680)
          ;
          bVar3 = Swift::Equatable::___infix(puVar11,local_68,lVar4,puVar14);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar4);
          if (bVar3) {
            (*pcVar13)(local_68,lVar4);
            puVar14 = local_98;
            puVar15 = local_80;
            goto LAB_10019a800;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(local_70 + uVar7 * 8);
          uVar9 = 1L << (uVar6 & 0x3f);
          puVar14 = local_98;
          puVar15 = local_80;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (*local_78)(*(long *)(puVar5 + 0x30) + uVar6 * lVar17,local_68,lVar4);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10019a99c);
        (*pcVar16)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_10019a800:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  return puVar5;
}



/* Address: 0x10019a99c | FUN_10019a99c */

undefined8 FUN_10019a99c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10019a9ec | FUN_10019a9ec */

undefined8 FUN_10019a9ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100198ea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10019aa30 | FUN_10019aa30 */

long * FUN_10019aa30(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar10 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar10;
    lVar5 = param_2[2];
    lVar1 = param_2[3];
    param_1[3] = lVar1;
    lVar7 = (long)*(int *)(param_3 + 0x20);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar3.unknown + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar1);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
    }
    else {
      puVar4 = &DAT_100fb32a8;
      FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10019ab5c | FUN_10019ab5c */

void FUN_10019ab5c(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010019abe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x10019abe4 | FUN_10019abe4 */

undefined8 * FUN_10019abe4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar9 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar9;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  lVar6 = (long)*(int *)(param_3 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar3.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar3.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb32a8;
    FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
    _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10019ace4 | FUN_10019ace4 */

undefined8 * FUN_10019ace4(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x20);
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
  puVar4 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x10019ae3c | FUN_10019ae3c */

undefined8 * FUN_10019ae3c(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  lVar4 = (long)*(int *)(param_3 + 0x20);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fb32a8;
    FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10019aefc | FUN_10019aefc */

undefined8 * FUN_10019aefc(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x20);
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
  puVar6 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}



/* Address: 0x10019b034 | FUN_10019b034 */

void FUN_10019b034(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10019b040 | FUN_10019b040 */

ulong FUN_10019b040(long param_1,undefined8 param_2,long param_3)

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
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  uVar2 = param_1 + *(int *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010019b0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x10019b0cc | FUN_10019b0cc */

void FUN_10019b0cc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10019b0d8 | FUN_10019b0d8 */

void FUN_10019b0d8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
                    /* WARNING: Could not recover jumptable at 0x00010019b154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x20),param_2,param_2,puVar1);
  return;
}



/* Address: 0x10019b158 | FUN_10019b158 */

void FUN_10019b158(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  lVar1 = 0x13f;
  local_38 = puStack_40;
  puStack_30 = puStack_40;
  FUN_10019b1e0();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10019b1e0 | FUN_10019b1e0 */

void FUN_10019b1e0(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb3c30 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fb3c30 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10019b234 | FUN_10019b234 */

void FUN_10019b234(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3c78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31cbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31cbc,&DAT_100ebd328);
  DAT_100fb3c78 = pTVar1;
  return;
}



/* Address: 0x10019b274 | FUN_10019b274 */

void FUN_10019b274(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fb31a0;
    FUN_100005c24(&DAT_100fb31a0,&DAT_100c31010);
    local_40 = param_2;
    uStack_38 = param_3;
    _swift_getWitnessTable(param_4,puVar1,&local_40);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x10019b2e0 | FUN_10019b2e0 */

undefined8 FUN_10019b2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10019b330 | FUN_10019b330 */

undefined8 FUN_10019b330(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100198ea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10019b374 | FUN_10019b374 */

undefined1  [16] FUN_10019b374(void)

{
  return ZEXT816(0x100ebd328);
}



/* Address: 0x10019b384 | thunk_FUN_10019b388 */

void thunk_FUN_10019b388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c94,&DAT_100ebd328);
  DAT_100fb3ca8 = pTVar1;
  return;
}



/* Address: 0x10019b388 | FUN_10019b388 */

void FUN_10019b388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c94,&DAT_100ebd328);
  DAT_100fb3ca8 = pTVar1;
  return;
}



/* Address: 0x10019b3c8 | thunk_FUN_10019b3cc */

void thunk_FUN_10019b3cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c2c,&DAT_100ebd328);
  DAT_100fb3cb0 = pTVar1;
  return;
}



/* Address: 0x10019b3cc | FUN_10019b3cc */

void FUN_10019b3cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c2c,&DAT_100ebd328);
  DAT_100fb3cb0 = pTVar1;
  return;
}



/* Address: 0x10019b40c | thunk_FUN_10019b410 */

void thunk_FUN_10019b410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3cb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c04,&DAT_100ebd328);
  DAT_100fb3cb8 = pTVar1;
  return;
}



/* Address: 0x10019b410 | FUN_10019b410 */

void FUN_10019b410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3cb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31c04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31c04,&DAT_100ebd328);
  DAT_100fb3cb8 = pTVar1;
  return;
}



/* Address: 0x10019b450 | FUN_10019b450 */

undefined4 FUN_10019b450(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffeff2686e0)) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000011,(_StringGuts)0x8000000100d97920,expecting);
    if (!bVar1) {
      if (((param_1 == -0x2fffffffffffffee) && (param_2 == -0x7ffffffeff2686c0)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000012,(_StringGuts)0x8000000100d97940,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffeff2686a0)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000016,(_StringGuts)0x8000000100d97960,
                             expecting), !bVar1)) {
        if (((param_1 != -0x2fffffffffffffe9) || (param_2 != -0x7ffffffeff268680)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd000000000000017,(_StringGuts)0x8000000100d97980,
                               expecting), !bVar1)) {
          if ((param_1 == 0x7453646f69726570) && (param_2 == -0x109a8b9ebb8b8d9f)) {
            _swift_bridgeObjectRelease(0xef65746144747261);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7453646f69726570,(_StringGuts)0xef65746144747261,
                             expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10019b60c | FUN_10019b60c */

void FUN_10019b60c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3d30;
  FUN_1000037f0(&DAT_100fb3d30,&DAT_100c31d80);
  _swift_allocObject();
  FUN_1000db2a8();
  DAT_101057388 = puVar1;
  return;
}



/* Address: 0x10019b654 | FUN_10019b654 */

undefined8 * FUN_10019b654(void)

{
  if (DAT_100fb3cc0 != -1) {
    _swift_once(&DAT_100fb3cc0,FUN_10019b60c);
  }
  return &DAT_101057388;
}



/* Address: 0x10019b694 | FUN_10019b694 */

void FUN_10019b694(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3cc8;
  FUN_1000037f0(&DAT_100fb3cc8,&DAT_100c31d10);
  FUN_1000d80e0(param_1,"PasteTelemetry/DI+PasteTelemetry.swift",0x26,2,0xd,0x13,FUN_10019b6f0,0,
                puVar1);
  return;
}



/* Address: 0x10019b6f0 | FUN_10019b6f0 */

void FUN_10019b6f0(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_90;
  undefined1 local_81;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  if (DAT_100fb3cc0 != -1) {
    _swift_once(&DAT_100fb3cc0,FUN_10019b60c);
  }
  plVar2 = DAT_101057388;
  (**(code **)(*DAT_101057388 + 0x80))(&local_80);
  if (local_70 == (undefined1 *)0x0) {
    local_80 = 0;
    local_78 = 0x6e776f6e6b6e75;
    local_70 = &DAT_e700000000000000;
    local_68 = 0;
    (**(code **)(*plVar2 + 0x88))(&local_80);
  }
  else {
    _swift_bridgeObjectRelease();
  }
  puVar4 = &DAT_100c31d20;
  _swift_getKeyPath(&DAT_100c31d20);
  pcVar7 = *(code **)(*plVar2 + 0x98);
  (*pcVar7)(&local_81);
  _swift_release(puVar4);
  puVar4 = &DAT_100c31d40;
  _swift_getKeyPath(&DAT_100c31d40);
  (*pcVar7)(&local_80);
  _swift_release(puVar4);
  uVar3 = local_78;
  uVar1 = CONCAT71(uStack_7f,local_80);
  puVar4 = &DAT_100c31d60;
  _swift_getKeyPath(&DAT_100c31d60);
  (*pcVar7)(&local_90);
  _swift_release(puVar4);
  lVar5 = 0;
  FUN_10019cf88();
  lVar6 = lVar5;
  _swift_allocObject();
  *(undefined1 *)(lVar6 + 0x10) = local_81;
  *(undefined8 *)(lVar6 + 0x18) = uVar1;
  *(undefined8 *)(lVar6 + 0x20) = uVar3;
  *(undefined8 *)(lVar6 + 0x28) = local_90;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_PTR_100ebd5b0;
  *param_1 = lVar6;
  return;
}


