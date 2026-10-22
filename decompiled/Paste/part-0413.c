/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100521f40 | FUN_100521f40 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005220a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double FUN_100521f40(long param_1)

{
  bool bVar1;
  bool bVar2;
  DecodingError DVar3;
  undefined *puVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  long unaff_x21;
  double unaff_d8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lVar4;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_78,local_60);
    unaff_d8 = Swift::SingleValueDecodingContainer::_decode();
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= unaff_d8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(unaff_d8)) {
        bVar1 = unaff_d8 == 1.0;
        bVar2 = 1.0 <= unaff_d8;
      }
    }
    if (!bVar2 || bVar1) {
      FUN_100004594(auStack_78);
      FUN_100004594(param_1);
      return unaff_d8;
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar4 = CONCAT71((int7)((ulong)param_1 >> 8),DVar3.value);
    pcVar7 = (char *)0x0;
    pvVar8 = (void *)0x0;
    puVar5 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar4,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                     );
    _Var6.unknown = *(undefined **)(param_1 + 0x20);
    FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
    Swift::Decoder::_get_codingPath();
    local_88 = 0;
    uStack_80 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var6);
    SVar9.bridgeObject = &DAT_e600000000000000;
    SVar9.str = (char *)0x2065756c6156;
    SVar11.bridgeObject = pvVar8;
    SVar11.str = pcVar7;
    Swift::String::append(SVar9,SVar11);
    pcVar7 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    double::_write((undefined *)&local_88,unaff_d8);
    SVar10.bridgeObject = (void *)0x8000000100dad0f0;
    SVar10.str = (char *)0xd000000000000016;
    SVar12.bridgeObject = pvVar8;
    SVar12.str = pcVar7;
    Swift::String::append(SVar10,SVar12);
    Swift::DecodingError::Context::_init(puVar5,lVar4,local_88,uStack_80,0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x68))
              (puVar5,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
               ,lVar4);
    _swift_willThrow();
    FUN_100004594(auStack_78);
  }
  FUN_100004594(param_1);
  return unaff_d8;
}



/* Address: 0x100522118 | thunk_FUN_10052211c */

void thunk_FUN_10052211c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce488 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54950,&DAT_100edc918);
  DAT_100fce488 = pTVar1;
  return;
}



/* Address: 0x10052211c | FUN_10052211c */

void FUN_10052211c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce488 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54950,&DAT_100edc918);
  DAT_100fce488 = pTVar1;
  return;
}



/* Address: 0x10052215c | FUN_10052215c */

undefined * FUN_10052215c(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_Double___Swift__ExpressibleByBuiltinFloatLiteral_in_Swift_100eac5f8
  ;
}



/* Address: 0x100522168 | FUN_100522168 */

undefined1  [16] FUN_100522168(void)

{
  return ZEXT816(0x100edc918);
}



/* Address: 0x100522178 | thunk_FUN_10052211c */

void thunk_FUN_10052211c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce488 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54950,&DAT_100edc918);
  DAT_100fce488 = pTVar1;
  return;
}



/* Address: 0x10052217c | FUN_10052217c */

undefined * FUN_10052217c(void)

{
  return &DAT_100edca08;
}



/* Address: 0x100522188 | FUN_100522188 */

undefined1  [16] FUN_100522188(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad110;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x1005221a4 | FUN_1005221a4 */

undefined8 FUN_1005221a4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1005221e8(uVar1,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return uVar1;
}



/* Address: 0x1005221e8 | FUN_1005221e8 */

void FUN_1005221e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1004a7398();
    return;
  }
  return;
}



/* Address: 0x1005221fc | FUN_1005221fc */

void FUN_1005221fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



/* Address: 0x10052220c | FUN_10052220c */

undefined1  [16] FUN_10052220c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6e6f73616572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4974736575716572;
  }
  puVar2 = &DAT_e600000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000064;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100522248 | FUN_100522248 */

void FUN_100522248(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x4974736575716572 || param_3 != (undefined1 *)0xe900000000000064) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x4974736575716572,(_StringGuts)0xe900000000000064,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6e6f73616572) && (param_3 == &DAT_e600000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e600000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6e6f73616572,(_StringGuts)0xe600000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_1005222b0;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1005222b0:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100522324 | FUN_100522324 */

String FUN_100522324(void)

{
  String SVar1;
  
  FUN_100522970();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10052234c | FUN_10052234c */

String FUN_10052234c(void)

{
  String SVar1;
  
  FUN_100522970();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100522374 | thunk_FUN_100522880 */

void thunk_FUN_100522880(void)

{
  FUN_100522880();
  return;
}



/* Address: 0x100522378 | FUN_100522378 */

void FUN_100522378(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fce490;
  FUN_1000f7830(&DAT_100fce490,&DAT_100c54ac0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100522970();
  KVar2 = Swift::Encoder::_container();
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  local_60 = *(undefined1 *)(unaff_x20 + 2);
  local_71 = 0;
  FUN_1004e3af4();
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (&local_70,&local_71,puVar1,&DAT_100edaca0,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_70 = CONCAT71(local_70._1_7_,1);
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[3],unaff_x20[4],&local_70,puVar1);
    (**(code **)(lVar3 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005224c4 | FUN_1005224c4 */

void FUN_1005224c4(Hasher param_1,Hasher param_2)

{
  char cVar1;
  char *pcVar2;
  String *unaff_x20;
  char *pcVar3;
  String SVar4;
  
  cVar1 = *(char *)&unaff_x20[1].str;
  if (cVar1 == -1) {
    Swift::Hasher::_combine(0,param_2);
    pcVar3 = unaff_x20[2].str;
  }
  else {
    pcVar2 = unaff_x20->str;
    SVar4 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    if (cVar1 == '\x01') {
      Swift::Hasher::_combine(1,param_2);
      Swift::Hasher::_combine((__uint64)pcVar2,param_2);
      pcVar3 = unaff_x20[2].str;
    }
    else {
      Swift::Hasher::_combine(0,param_2);
      Swift::String::hash(param_1,SVar4);
      pcVar3 = unaff_x20[2].str;
      param_2.unknown = pcVar2;
    }
  }
  if (pcVar3 != (char *)0x0) {
    pcVar2 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(1,param_2);
    SVar4.bridgeObject = pcVar3;
    SVar4.str = pcVar2;
    Swift::String::hash(param_1,SVar4);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x100522594 | FUN_100522594 */

void FUN_100522594(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  Hasher into;
  char *pcVar2;
  String *unaff_x20;
  char *pcVar3;
  String SVar4;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(0);
  cVar1 = *(char *)&unaff_x20[1].str;
  if (cVar1 == -1) {
    Swift::Hasher::_combine(0,param_2);
    pcVar3 = unaff_x20[2].str;
  }
  else {
    pcVar2 = unaff_x20->str;
    SVar4 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    if (cVar1 == '\x01') {
      Swift::Hasher::_combine(1,param_2);
      Swift::Hasher::_combine((__uint64)pcVar2,param_2);
      pcVar3 = unaff_x20[2].str;
    }
    else {
      Swift::Hasher::_combine(0,param_2);
      Swift::String::hash((Hasher)auStack_88,SVar4);
      pcVar3 = unaff_x20[2].str;
      param_2.unknown = pcVar2;
    }
  }
  if (pcVar3 == (char *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    pcVar2 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(1,param_2);
    into.unknown = auStack_88;
    SVar4.bridgeObject = pcVar3;
    SVar4.str = pcVar2;
    Swift::String::hash(into,SVar4);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100522688 | FUN_100522688 */

void FUN_100522688(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1005229b0(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    param_1[4] = local_28;
  }
  return;
}



/* Address: 0x1005226cc | thunk_FUN_100522594 */

void thunk_FUN_100522594(void)

{
  FUN_100522594();
  return;
}



/* Address: 0x1005226d0 | thunk_FUN_1005224c4 */

void thunk_FUN_1005224c4(void)

{
  FUN_1005224c4();
  return;
}



/* Address: 0x1005226d4 | FUN_1005226d4 */

void FUN_1005226d4(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005224c4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10052270c | FUN_10052270c */

void FUN_10052270c(void)

{
  FUN_100522378();
  return;
}



/* Address: 0x100522720 | FUN_100522720 */

uint FUN_100522720(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100522880(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x100522768 | FUN_100522768 */

String FUN_100522768(void)

{
  String SVar1;
  
  FUN_100522b6c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100522790 | FUN_100522790 */

String FUN_100522790(void)

{
  String SVar1;
  
  FUN_100522b6c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005227b8 | FUN_1005227b8 */

void FUN_1005227b8(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fce4a0;
  FUN_1000f7830(&DAT_100fce4a0,&DAT_100c54ac8);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100522b6c();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100522880 | FUN_100522880 */

undefined8 FUN_100522880(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  
  cVar1 = (char)param_2[2];
  if (*(char *)(param_1 + 2) == -1) {
    if (cVar1 != -1) {
      return 0;
    }
  }
  else {
    if (cVar1 == -1) {
      return 0;
    }
    _Var4.unknown = (undefined *)*param_1;
    puVar3 = (undefined *)*param_2;
    if (*(char *)(param_1 + 2) == '\x01') {
      if (cVar1 != '\x01' || _Var4.unknown != puVar3) {
        return 0;
      }
    }
    else {
      if (cVar1 == '\x01') {
        return 0;
      }
      if (((_Var4.unknown != puVar3) || ((undefined *)param_1[1] != (undefined *)param_2[1])) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            (_Var4,(undefined *)param_1[1],(_StringComparisonResult)(__int8)puVar3),
         !bVar2)) {
        return 0;
      }
    }
  }
  _Var4.unknown = (undefined *)param_1[4];
  puVar3 = (undefined *)param_2[4];
  if (_Var4.unknown == (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      return 1;
    }
  }
  else if (puVar3 != (undefined *)0x0) {
    if (((undefined *)param_1[3] == (undefined *)param_2[3]) && (_Var4.unknown == puVar3)) {
      return 1;
    }
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)param_1[3],_Var4,
                       (_StringComparisonResult)(__int8)(undefined *)param_2[3]);
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100522970 | FUN_100522970 */

void FUN_100522970(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce498 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54de4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54de4,&DAT_100edcb58);
  DAT_100fce498 = pTVar1;
  return;
}



/* Address: 0x1005229b0 | FUN_1005229b0 */

/* WARNING: Removing unreachable block (ram,0x000100522b08) */
/* WARNING: Removing unreachable block (ram,0x000100522a98) */

void FUN_1005229b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_51;
  
  puVar2 = &DAT_100fce560;
  FUN_1000f7830(&DAT_100fce560,&DAT_100c54e38);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100522970();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_1004e3b40();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_78,&DAT_100edaca0,&local_51,puVar2,&DAT_100edaca0,KVar3.unknown);
    uVar1 = CONCAT71(uStack_77,local_78);
    local_80 = uStack_70;
    local_78 = 1;
    puVar4 = &local_78;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar6 + 8))((long)&local_80 - extraout_x8,puVar2);
    FUN_100004594(param_2);
    *param_1 = uVar1;
    param_1[1] = local_80;
    *(undefined1 *)(param_1 + 2) = local_68;
    param_1[3] = puVar4;
    param_1[4] = puVar5;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100522b6c | FUN_100522b6c */

void FUN_100522b6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d94,&DAT_100edcac8);
  DAT_100fce4a8 = pTVar1;
  return;
}



/* Address: 0x100522bac | thunk_FUN_100522bb0 */

void thunk_FUN_100522bb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b60,&DAT_100edcaa0);
  DAT_100fce4b0 = pTVar1;
  return;
}



/* Address: 0x100522bb0 | FUN_100522bb0 */

void FUN_100522bb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b60,&DAT_100edcaa0);
  DAT_100fce4b0 = pTVar1;
  return;
}



/* Address: 0x100522bf0 | thunk_FUN_100522bf4 */

void thunk_FUN_100522bf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b10,&DAT_100edcaa0);
  DAT_100fce4b8 = pTVar1;
  return;
}



/* Address: 0x100522bf4 | FUN_100522bf4 */

void FUN_100522bf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b10,&DAT_100edcaa0);
  DAT_100fce4b8 = pTVar1;
  return;
}



/* Address: 0x100522c34 | thunk_FUN_100522c38 */

void thunk_FUN_100522c38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b38,&DAT_100edcaa0);
  DAT_100fce4c0 = pTVar1;
  return;
}



/* Address: 0x100522c38 | FUN_100522c38 */

void FUN_100522c38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54b38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54b38,&DAT_100edcaa0);
  DAT_100fce4c0 = pTVar1;
  return;
}



/* Address: 0x100522c78 | thunk_FUN_100522c7c */

void thunk_FUN_100522c7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54ad0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54ad0,&DAT_100edcaa0);
  DAT_100fce4c8 = pTVar1;
  return;
}



/* Address: 0x100522c7c | FUN_100522c7c */

void FUN_100522c7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce4c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54ad0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54ad0,&DAT_100edcaa0);
  DAT_100fce4c8 = pTVar1;
  return;
}



/* Address: 0x100522cbc | FUN_100522cbc */

void FUN_100522cbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100522cf0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100522d30();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_100522d70();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x100522cf0 | FUN_100522cf0 */

void FUN_100522cf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54be4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54be4,&DAT_100edca28);
  DAT_100fce518 = pTVar1;
  return;
}



/* Address: 0x100522d30 | FUN_100522d30 */

void FUN_100522d30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54c0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54c0c,&DAT_100edca28);
  DAT_100fce520 = pTVar1;
  return;
}



/* Address: 0x100522d70 | FUN_100522d70 */

void FUN_100522d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54ba4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54ba4,&DAT_100edca28);
  DAT_100fce528 = pTVar1;
  return;
}



/* Address: 0x100522db0 | thunk_FUN_100522db4 */

void thunk_FUN_100522db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54c34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54c34,&DAT_100edca28);
  DAT_100fce530 = pTVar1;
  return;
}



/* Address: 0x100522db4 | FUN_100522db4 */

void FUN_100522db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54c34;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54c34,&DAT_100edca28);
  DAT_100fce530 = pTVar1;
  return;
}



/* Address: 0x100522df4 | FUN_100522df4 */

undefined1  [16] FUN_100522df4(void)

{
  return ZEXT816(0x100edca28);
}



/* Address: 0x100522e04 | FUN_100522e04 */

void FUN_100522e04(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) != -1) {
    FUN_1004dc818(*param_1,param_1[1]);
  }
  _swift_bridgeObjectRelease(param_1[4]);
  return;
}



/* Address: 0x100522e38 | FUN_100522e38 */

undefined8 * FUN_100522e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = *(char *)(param_2 + 2);
  if (cVar2 == -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  else {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_1004a7398(uVar3,uVar1,cVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(char *)(param_1 + 2) = cVar2;
  }
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100522eb4 | FUN_100522eb4 */

undefined8 * FUN_100522eb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar3 = *(char *)(param_2 + 2);
  if (*(char *)(param_1 + 2) == -1) {
    if (cVar3 == -1) {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      param_1[1] = uVar6;
      *param_1 = uVar5;
    }
    else {
      uVar5 = *param_2;
      uVar6 = param_2[1];
      FUN_1004a7398(uVar5,uVar6,cVar3);
      *param_1 = uVar5;
      param_1[1] = uVar6;
      *(char *)(param_1 + 2) = cVar3;
    }
  }
  else if (cVar3 == -1) {
    FUN_100522fa0(param_1);
    uVar4 = *(undefined1 *)(param_2 + 2);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
  else {
    uVar5 = *param_2;
    uVar1 = param_2[1];
    FUN_1004a7398(uVar5,uVar1,cVar3);
    uVar6 = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar5;
    param_1[1] = uVar1;
    uVar4 = *(undefined1 *)(param_1 + 2);
    *(char *)(param_1 + 2) = cVar3;
    FUN_1004dc818(uVar6,uVar2,uVar4);
  }
  param_1[3] = param_2[3];
  uVar5 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x100522fa0 | FUN_100522fa0 */

undefined8 FUN_100522fa0(undefined8 param_1)

{
  FUN_1004dc808();
  return param_1;
}



/* Address: 0x100522fd4 | FUN_100522fd4 */

void FUN_100522fd4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100522fe8 | FUN_100522fe8 */

undefined8 * FUN_100522fe8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 2) != -1) {
    cVar1 = *(char *)(param_2 + 2);
    if (cVar1 != -1) {
      uVar4 = *param_1;
      uVar2 = param_1[1];
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(char *)(param_1 + 2) = cVar1;
      FUN_1004dc818(uVar4,uVar2);
      goto LAB_100523044;
    }
    FUN_100522fa0(param_1);
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
LAB_100523044:
  uVar4 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar4;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100523064 | FUN_100523064 */

int FUN_100523064(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005230c0 | FUN_1005230c0 */

void FUN_1005230c0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x10052311c | FUN_10052311c */

undefined1  [16] FUN_10052311c(void)

{
  return ZEXT816(0x100edcaa0);
}



/* Address: 0x10052312c | FUN_10052312c */

undefined1  [16] FUN_10052312c(void)

{
  return ZEXT816(0x100edcac8);
}



/* Address: 0x10052313c | FUN_10052313c */

undefined1  [16] FUN_10052313c(void)

{
  return ZEXT816(0x100edcb58);
}



/* Address: 0x10052314c | thunk_FUN_100523150 */

void thunk_FUN_100523150(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d1c,&DAT_100edcb58);
  DAT_100fce538 = pTVar1;
  return;
}



/* Address: 0x100523150 | FUN_100523150 */

void FUN_100523150(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d1c,&DAT_100edcb58);
  DAT_100fce538 = pTVar1;
  return;
}



/* Address: 0x100523190 | thunk_FUN_100523194 */

void thunk_FUN_100523194(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d6c,&DAT_100edcac8);
  DAT_100fce540 = pTVar1;
  return;
}



/* Address: 0x100523194 | FUN_100523194 */

void FUN_100523194(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d6c,&DAT_100edcac8);
  DAT_100fce540 = pTVar1;
  return;
}



/* Address: 0x1005231d4 | thunk_FUN_1005231d8 */

void thunk_FUN_1005231d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d44,&DAT_100edcac8);
  DAT_100fce548 = pTVar1;
  return;
}



/* Address: 0x1005231d8 | FUN_1005231d8 */

void FUN_1005231d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54d44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54d44,&DAT_100edcac8);
  DAT_100fce548 = pTVar1;
  return;
}


