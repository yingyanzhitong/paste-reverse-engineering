/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004e2204 | FUN_1004e2204 */

void FUN_1004e2204(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_100403254(uVar1,*(undefined8 *)(param_3 + 0x18));
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004e222c | FUN_1004e222c */

void FUN_1004e222c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1004e3c14(uVar1,*(undefined8 *)(param_2 + 0x18),FUN_1004e3ae8);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004e2260 | FUN_1004e2260 */

String FUN_1004e2260(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53424,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004e2294 | FUN_1004e2294 */

String FUN_1004e2294(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53424,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004e22c8 | FUN_1004e22c8 */

/* WARNING: Removing unreachable block (ram,0x0001004e242c) */

void FUN_1004e22c8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  KeyedEncodingContainer KVar4;
  undefined8 uVar5;
  long extraout_x8;
  code *pcVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  uStack_78 = *(undefined8 *)(param_2 + 0x10);
  local_80 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0xff;
  FUN_1004e3ae8(0xff);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53424,uVar3);
  KVar4 = Swift::KeyedEncodingContainer::typeMetadataAccessor();
  lVar7 = *(long *)(KVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_container();
  local_51 = 0;
  uVar5 = 0x302e32;
  Swift::KeyedEncodingContainer::_encode(0x302e32,0xe300000000000000,&local_51,KVar4.unknown);
  uVar2 = uStack_78;
  uVar3 = local_80;
  if (unaff_x21 == 0) {
    local_52 = 1;
    FUN_1004e3af4();
    Swift::KeyedEncodingContainer::_encode(unaff_x20,&local_52,KVar4.unknown,&DAT_100edaca0,uVar5);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),&local_53,
               KVar4.unknown);
    iVar1 = *(int *)(param_2 + 0x28);
    local_54 = 3;
    uVar5 = 0;
    _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb2744);
    _swift_getAssociatedConformanceWitness
              (uVar3,uVar2,uVar5,0x100cb270c,&TargetProtocolRequirement_100cb271c);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar1,&local_54,KVar4.unknown,uVar5,uVar3);
    pcVar6 = *(code **)(lVar7 + 8);
  }
  else {
    pcVar6 = *(code **)(lVar7 + 8);
  }
  (*pcVar6)((long)&local_80 - extraout_x8,KVar4.unknown);
  return;
}



/* Address: 0x1004e24e8 | FUN_1004e24e8 */

bool FUN_1004e24e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  _Var3.unknown = (undefined *)*param_1;
  puVar6 = (undefined *)*param_2;
  if (*(char *)(param_1 + 2) == '\x01') {
    if (*(char *)(param_2 + 2) != '\x01' || _Var3.unknown != puVar6) {
      return false;
    }
  }
  else {
    if (*(char *)(param_2 + 2) == '\x01') {
      return false;
    }
    if ((_Var3.unknown != puVar6 || (undefined *)param_1[1] != (undefined *)param_2[1]) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          (_Var3,(undefined *)param_1[1],(_StringComparisonResult)(__int8)puVar6),
       !bVar2)) {
      return false;
    }
  }
  if (((undefined *)param_1[3] != (undefined *)param_2[3] ||
       (undefined *)param_1[4] != (undefined *)param_2[4]) &&
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[3],(undefined *)param_1[4],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[3]), !bVar2)) {
    return false;
  }
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  lVar5 = 0;
  FUN_1004e3b34(0,param_3,param_4);
  iVar1 = *(int *)(lVar5 + 0x28);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar4,0x100cb270c,&TargetProtocolRequirement_100cb2724);
  bVar2 = Swift::Equatable::___infix
                    ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,uVar4,
                     *(undefined8 *)(param_4 + 8));
  return bVar2;
}



/* Address: 0x1004e260c | FUN_1004e260c */

void FUN_1004e260c(Hasher param_1,Hasher param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  __uint64 *unaff_x20;
  char *pcVar5;
  void *pvVar6;
  String SVar7;
  
  pcVar5 = (char *)*unaff_x20;
  if ((char)unaff_x20[2] == '\x01') {
    HVar4.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)pcVar5,HVar4);
  }
  else {
    pvVar6 = (void *)unaff_x20[1];
    Swift::Hasher::_combine(0,param_2);
    SVar7.bridgeObject = pvVar6;
    SVar7.str = pcVar5;
    Swift::String::hash(param_1,SVar7);
  }
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 3));
  uVar1 = *(undefined8 *)(param_2.unknown + 0x10);
  uVar2 = *(undefined8 *)(param_2.unknown + 0x18);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar3,0x100cb270c,&TargetProtocolRequirement_100cb2724);
  Swift::Hashable::hash(param_1);
  return;
}



/* Address: 0x1004e26f4 | FUN_1004e26f4 */

void FUN_1004e26f4(undefined8 param_1)

{
  FUN_1004e5c20(param_1,FUN_1004e260c);
  return;
}



/* Address: 0x1004e2700 | thunk_FUN_1004e26f4 */

void thunk_FUN_1004e26f4(undefined8 param_1)

{
  FUN_1004e5c20(param_1,FUN_1004e260c);
  return;
}



/* Address: 0x1004e2704 | thunk_FUN_1004e260c */

void thunk_FUN_1004e260c(void)

{
  FUN_1004e260c();
  return;
}



/* Address: 0x1004e2708 | FUN_1004e2708 */

void FUN_1004e2708(void)

{
  FUN_1004e5c84();
  return;
}



/* Address: 0x1004e2714 | thunk_FUN_1004e4b5c */

void thunk_FUN_1004e4b5c(void)

{
  FUN_1004e4b5c();
  return;
}



/* Address: 0x1004e2718 | FUN_1004e2718 */

void FUN_1004e2718(undefined8 param_1,long param_2)

{
  FUN_1004e2734(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1004e2734 | FUN_1004e2734 */

/* WARNING: Removing unreachable block (ram,0x0001004e2d60) */
/* WARNING: Removing unreachable block (ram,0x0001004e2a9c) */
/* WARNING: Removing unreachable block (ram,0x0001004e2b20) */
/* WARNING: Removing unreachable block (ram,0x0001004e2984) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e2eec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e2734(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  KeyedDecodingContainer KVar2;
  Optional OVar3;
  bool bVar4;
  DecodingError DVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  _StringGuts _Var12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar15;
  char *pcVar16;
  long unaff_x21;
  undefined8 *puVar17;
  code *pcVar18;
  long lVar19;
  String SVar20;
  long alStack_140 [3];
  String local_128;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long lStack_c0;
  KeyedDecodingContainer local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar6 = (undefined *)0xff;
  local_e8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c0 = CONCAT71((int7)((ulong)puVar6 >> 8),OVar3.value);
  local_c8 = *(long *)(lStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  lVar14 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  local_f8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_00;
  local_d8 = *(long *)(puVar6 + -8);
  local_e0 = lVar14;
  local_b0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_01;
  uVar7 = 0xff;
  local_100 = lVar14;
  FUN_1004e3ae8(0xff,param_3,param_4);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53424,uVar7);
  local_b8 = Swift::KeyedDecodingContainer::typeMetadataAccessor();
  local_a0 = *(long *)(local_b8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar8 = 0;
  local_d0 = param_3;
  local_a8 = param_4;
  FUN_1004e3b34(0,param_3,param_4);
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar14 - extraout_x8_02);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_container();
  lVar11 = local_a0;
  uVar7 = local_a8;
  puVar6 = local_b0;
  KVar2.unknown = local_b8.unknown;
  if (unaff_x21 != 0) {
LAB_1004e2ab4:
    FUN_100004594(param_2);
    return;
  }
  local_90 = 0;
  local_118 = lVar19;
  local_110 = lVar8;
  SVar20 = Swift::KeyedDecodingContainer::_decode(&local_90,local_b8.unknown);
  _Var12.unknown = SVar20.bridgeObject;
  if (SVar20.str == (undefined *)0x302e32 && _Var12.unknown == (undefined *)0xe300000000000000) {
    _swift_bridgeObjectRelease(_Var12.unknown);
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar20.str,_Var12,(_StringComparisonResult)0x32);
    _swift_bridgeObjectRelease(_Var12.unknown);
    if (!bVar4) {
      local_90 = 0;
      DVar5 = Swift::DecodingError::typeMetadataAccessor();
      puVar9 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(DVar5.value,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar6 = 
      PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
      ;
      _swift_getWitnessTable
                (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                 ,KVar2.unknown);
      Swift::DecodingError::_dataCorruptedError
                (puVar9,&local_90,lVar14,0xd000000000000018,0x8000000100dab550,KVar2.unknown,puVar6)
      ;
      _swift_willThrow();
      (**(code **)(lVar11 + 8))(lVar14,KVar2.unknown);
      goto LAB_1004e2ab4;
    }
  }
  local_51 = 1;
  FUN_1004e3b40();
  Swift::KeyedDecodingContainer::_decode
            (&local_90,&DAT_100edaca0,&local_51,KVar2.unknown,&DAT_100edaca0,_Var12.unknown);
  uVar1 = CONCAT71(uStack_8f,local_90);
  *puVar17 = uVar1;
  puVar17[1] = uStack_88;
  local_128.bridgeObject = (void *)uStack_88;
  *(undefined1 *)(puVar17 + 2) = local_80;
  local_90 = 2;
  SVar20 = Swift::KeyedDecodingContainer::_decode(&local_90,KVar2.unknown);
  local_128.str = (char *)lVar14;
  *(String *)(puVar17 + 3) = SVar20;
  puVar9 = puVar6;
  alStack_140[1] = uVar1;
  alStack_140[2] = unaff_x21;
  _swift_conformsToProtocol(puVar6,&TargetProtocolDescriptor_100cb2678);
  _swift_getAssociatedConformanceWitness
            (uVar7,local_d0,puVar6,0x100cb270c,&TargetProtocolRequirement_100cb2714);
  lVar14 = local_e0;
  lVar8 = local_f0;
  pcVar16 = local_128.str;
  lVar11 = alStack_140[2];
  if (puVar9 != (undefined *)0x0) {
    local_90 = 3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_e0,puVar6,&local_90,KVar2.unknown,puVar6);
    lVar8 = local_f8;
    if (lVar11 == 0) {
      (**(code **)(local_c8 + 0x20))(local_f8,lVar14,lStack_c0);
      lVar11 = local_d8;
      pcVar15 = *(code **)(local_d8 + 0x30);
      lVar14 = lVar8;
      (*pcVar15)(lVar8,1,puVar6);
      if ((int)lVar14 == 1) {
        pcVar18 = *(code **)(puVar9 + 8);
        local_78 = puVar6;
        puVar10 = &local_90;
        puStack_70 = puVar9;
        FUN_10000cbb0(puVar10);
        (*pcVar18)(puVar10,puVar6,puVar9);
        lVar8 = local_f8;
        (**(code **)(local_a0 + 8))(local_128.str,KVar2.unknown);
        puVar9 = &DAT_100fcc8b8;
        FUN_1000f7830(&DAT_100fcc8b8,&DAT_100c52a38);
        lVar14 = local_100;
        _swift_dynamicCast(local_100,&local_90,puVar9,puVar6,7);
        lVar19 = lVar8;
        (*pcVar15)(lVar8,1,puVar6);
        uVar7 = local_e8;
        lVar11 = local_110;
        if ((int)lVar19 != 1) {
          (**(code **)(local_c8 + 8))(lVar8,lStack_c0);
        }
      }
      else {
        (**(code **)(local_a0 + 8))(local_128.str,KVar2.unknown);
        lVar14 = local_100;
        (**(code **)(lVar11 + 0x20))(local_100,lVar8,puVar6);
        uVar7 = local_e8;
        lVar11 = local_110;
      }
      (**(code **)(local_d8 + 0x20))((long)puVar17 + (long)*(int *)(lVar11 + 0x28),lVar14,puVar6);
      goto LAB_1004e2e34;
    }
    goto LAB_1004e2f1c;
  }
  local_90 = 3;
  Swift::KeyedDecodingContainer::_decode(local_f0,puVar6,&local_90,KVar2.unknown,puVar6,uVar7);
  lVar19 = lStack_c0;
  lVar14 = local_c8;
  if (lVar11 == 0) {
    (**(code **)(local_a0 + 8))(pcVar16,KVar2.unknown);
    lVar11 = local_d8;
    (**(code **)(local_d8 + 0x38))(lVar8,0,1,puVar6);
    lVar14 = local_108;
    pcVar15 = *(code **)(lVar11 + 0x20);
    (*pcVar15)(local_108,lVar8,puVar6);
    lVar11 = local_110;
    (*pcVar15)((long)puVar17 + (long)*(int *)(local_110 + 0x28),lVar14,puVar6);
    uVar7 = local_e8;
    goto LAB_1004e2e34;
  }
  uVar7 = 0xd000000000000014;
  _swift_errorRelease(lVar11);
  (**(code **)(local_d8 + 0x38))(lVar8,1,1,puVar6);
  (**(code **)(lVar14 + 8))(lVar8,lVar19);
  local_90 = 3;
  bVar4 = Swift::KeyedDecodingContainer::contains(&local_90,KVar2.unknown);
  if (bVar4) {
    local_90 = 3;
    bVar4 = Swift::KeyedDecodingContainer::_decodeNil(&local_90,KVar2.unknown);
    if (bVar4) goto LAB_1004e2e70;
    pcVar13 = "Invalid params field";
  }
  else {
LAB_1004e2e70:
    uVar7 = local_e8;
    if (puVar6 == &DAT_100edb3f8) {
      (**(code **)(local_a0 + 8))(local_128.str,KVar2.unknown);
      lVar11 = local_110;
      _swift_dynamicCast((long)puVar17 + (long)*(int *)(local_110 + 0x28));
LAB_1004e2e34:
      lVar8 = local_118;
      (**(code **)(local_118 + 0x10))(uVar7,puVar17,lVar11);
      FUN_100004594(param_2);
      (**(code **)(lVar8 + 8))(puVar17,lVar11);
      return;
    }
    pcVar13 = "Missing required params field";
    uVar7 = 0xd00000000000001d;
  }
  DVar5 = Swift::DecodingError::typeMetadataAccessor();
  lVar11 = CONCAT71((int7)((ulong)&local_90 >> 8),DVar5.value);
  puVar6 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar11,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  pcVar16 = local_128.str;
  Swift::KeyedDecodingContainer::_get_codingPath(KVar2);
  Swift::DecodingError::Context::_init
            (puVar6,lVar11,uVar7,(ulong)(pcVar13 + -0x20) | 0x8000000000000000,0);
  (**(code **)(*(long *)(lVar11 + -8) + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
             ,lVar11);
  _swift_willThrow();
LAB_1004e2f1c:
  (**(code **)(local_a0 + 8))(pcVar16,KVar2.unknown);
  lVar11 = alStack_140[1];
  FUN_100004594(param_2);
  FUN_1004dc818(lVar11,local_128.bridgeObject,local_80);
  if (alStack_140[2] == 0) {
    _swift_bridgeObjectRelease(puVar17[4]);
  }
  return;
}



/* Address: 0x1004e2fb0 | FUN_1004e2fb0 */

void FUN_1004e2fb0(void)

{
  FUN_1004e22c8();
  return;
}



/* Address: 0x1004e2fc4 | FUN_1004e2fc4 */

void FUN_1004e2fc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1004e24e8(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1004e2fd0 | FUN_1004e2fd0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e307c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e2fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  JSONEncoder *pJVar1;
  JSONDecoder *pJVar2;
  long lVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  Data DVar5;
  Data DVar6;
  long lVar7;
  long unaff_x21;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  pJVar1 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
  pJVar1 = Foundation::JSONEncoder::init(pJVar1);
  pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONDecoder::init(pJVar2);
  lVar3 = 0;
  FUN_1004e3b34(0,param_3,param_4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c52bb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52bb8,lVar3);
  lVar7 = lVar3;
  DVar5 = Foundation::JSONEncoder::_encode(pJVar1,pTVar4,lVar3,pTVar4);
  if (unaff_x21 == 0) {
    DVar6.unknown = &DAT_100fcb418;
    FUN_1000f7830(&DAT_100fcb418,&DAT_100c50268);
    FUN_100134584(&DAT_100fcd028,&DAT_100fcb418,&DAT_100c50268,
                  &TargetProtocolConformanceDescriptor_100c52b90);
    Foundation::JSONDecoder::_decode(pJVar2,DVar6);
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_2,lVar3);
    FUN_10003bf2c(DVar5.unknown,lVar7);
    _swift_release(pJVar1);
    _swift_release(pJVar2);
    param_1[5] = uStack_88;
    param_1[4] = local_90;
    param_1[7] = CONCAT71(local_77,uStack_78);
    param_1[6] = uStack_80;
    *(undefined8 *)((long)param_1 + 0x41) = uStack_6f;
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_70,local_77);
    param_1[1] = uStack_a8;
    *param_1 = local_b0;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
  }
  else {
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_2,lVar3);
    _swift_release(pJVar1);
    _swift_release(pJVar2);
  }
  return;
}



/* Address: 0x1004e3198 | FUN_1004e3198 */

void FUN_1004e3198(void)

{
  _swift_task_switch(FUN_1004e31ac,0,0);
  return;
}



/* Address: 0x1004e31ac | FUN_1004e31ac */

void FUN_1004e31ac(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0x2;
  SVar1.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar1,(StaticString)0x65766f207473754d,0xed00006564697272,
             0xdab610);
  return;
}



/* Address: 0x1004e3220 | FUN_1004e3220 */

void FUN_1004e3220(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1004e325c | FUN_1004e325c */

void FUN_1004e325c(undefined8 param_1,undefined8 param_2)

{
  Result RVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(long **)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  lVar3 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar4,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  FUN_1004db3ac();
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 200) = CONCAT71(extraout_var,RVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar3 = 0;
  FUN_1004e3b80(0,uVar4,uVar5);
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  lVar3 = 0;
  FUN_1004e3b34(0,uVar4,uVar5);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  _swift_task_switch(FUN_1004e3394,0,0);
  return;
}



/* Address: 0x1004e3394 | FUN_1004e3394 */

/* WARNING: Removing unreachable block (ram,0x0001004e34c0) */
/* WARNING: Removing unreachable block (ram,0x0001004e34cc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e3470 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e3394(void)

{
  int iVar1;
  int *piVar2;
  JSONEncoder *pJVar3;
  JSONDecoder *pJVar4;
  undefined *puVar5;
  undefined *puVar6;
  Data DVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x90);
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  *(JSONEncoder **)(unaff_x22 + 0x110) = pJVar3;
  pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONDecoder::init(pJVar4);
  *(JSONDecoder **)(unaff_x22 + 0x118) = pJVar4;
  uVar10 = *puVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  uVar14 = puVar9[5];
  uVar13 = puVar9[4];
  uVar11 = puVar9[7];
  uVar10 = puVar9[6];
  uVar12 = *(undefined8 *)((long)puVar9 + 0x39);
  uVar16 = puVar9[3];
  uVar15 = puVar9[2];
  *(undefined8 *)(unaff_x22 + 0x51) = *(undefined8 *)((long)puVar9 + 0x41);
  *(undefined8 *)(unaff_x22 + 0x49) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
  puVar5 = &DAT_100fcb418;
  FUN_1000f7830(&DAT_100fcb418,&DAT_100c50268);
  puVar6 = &DAT_100fcd020;
  FUN_100134584(&DAT_100fcd020,&DAT_100fcb418,&DAT_100c50268,
                &TargetProtocolConformanceDescriptor_100c52bb8);
  DVar7 = Foundation::JSONEncoder::_encode(pJVar3,puVar6,puVar5,puVar6);
  *(undefined **)(unaff_x22 + 0x120) = DVar7.unknown;
  *(undefined **)(unaff_x22 + 0x128) = puVar5;
  DVar7.unknown = *(undefined **)(unaff_x22 + 0xf8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52b90,DVar7.unknown);
  Foundation::JSONDecoder::_decode(pJVar4,DVar7);
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x98) + 0x10);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1004e3588;
                    /* WARNING: Could not recover jumptable at 0x0001004e3584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar8,*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Address: 0x1004e3588 | FUN_1004e3588 */

void FUN_1004e3588(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004e35e4;
  }
  else {
    pcVar1 = FUN_1004e392c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004e35e4 | FUN_1004e35e4 */

/* WARNING: Removing unreachable block (ram,0x0001004e3868) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e3768 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e35e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  Data DVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  JSONEncoder *pJVar10;
  JSONDecoder *this;
  undefined1 uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x10))
            (uVar9,*(long *)(unaff_x22 + 0xf0) + (long)*(int *)(*(long *)(unaff_x22 + 0xe0) + 0x24),
             uVar4);
  _swift_getEnumCaseMultiPayload(uVar9,uVar4);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    puVar7 = *(undefined8 **)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar12 = *(long *)(unaff_x22 + 0xe8);
    puVar16 = *(undefined8 **)(unaff_x22 + 0xd8);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
              (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0xf8));
    FUN_10003bf2c(uVar9,uVar20);
    _swift_release(uVar8);
    _swift_release(uVar4);
    local_68 = *puVar16;
    local_70 = puVar16[1];
    uVar20 = puVar16[2];
    uVar17 = (ulong)*(byte *)(puVar16 + 3);
    uVar9 = *puVar7;
    uVar8 = puVar7[1];
    uVar11 = *(undefined1 *)(puVar7 + 2);
    FUN_1004a7398(uVar9,uVar8,uVar11);
    (**(code **)(lVar12 + 8))(puVar7,uVar13);
    uVar19 = 0;
    uVar6 = 1;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x138);
    pJVar10 = *(JSONEncoder **)(unaff_x22 + 0x110);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xd8),uVar20);
    _swift_getAssociatedConformanceWitness
              (uVar4,uVar9,uVar20,0x100cb270c,&TargetProtocolRequirement_100cb2734);
    DVar5 = Foundation::JSONEncoder::_encode(pJVar10,uVar4,uVar20,uVar4);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    this = *(JSONDecoder **)(unaff_x22 + 0x118);
    if (lVar12 != 0) {
      lVar12 = *(long *)(unaff_x22 + 0x100);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar2 = *(long *)(unaff_x22 + 0xe8);
      lVar1 = *(long *)(unaff_x22 + 0xb8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
      FUN_10003bf2c(uVar9,uVar8);
      _swift_release(this);
      _swift_release(uVar4);
      (**(code **)(lVar1 + 8))(uVar3,uVar18);
      (**(code **)(lVar2 + 8))(uVar20,uVar13);
      (**(code **)(lVar12 + 8))(uVar14,uVar15);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar20);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1004e38bc;
    }
    lVar12 = *(long *)(unaff_x22 + 0xb8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_1004dbda0();
    Foundation::JSONDecoder::_decode(this,(Data)0x100edd000);
    FUN_10003bf2c(DVar5.unknown,uVar20);
    FUN_10003bf2c(uVar9,uVar8);
    _swift_release(this);
    _swift_release(uVar4);
    (**(code **)(lVar12 + 8))(uVar13,uVar14);
    puVar7 = *(undefined8 **)(unaff_x22 + 0xf0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar12 = *(long *)(unaff_x22 + 0xe8);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
              (*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0xf8));
    local_68 = *(undefined8 *)(unaff_x22 + 0x60);
    local_70 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar17 = *(ulong *)(unaff_x22 + 0x78);
    uVar19 = *(undefined1 *)(unaff_x22 + 0x80);
    uVar9 = *puVar7;
    uVar8 = puVar7[1];
    uVar11 = *(undefined1 *)(puVar7 + 2);
    FUN_1004a7398(uVar9,uVar8,uVar11);
    (**(code **)(lVar12 + 8))(puVar7,uVar4);
    uVar6 = 0;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x88);
  *puVar7 = uVar9;
  puVar7[1] = uVar8;
  *(undefined1 *)(puVar7 + 2) = uVar11;
  puVar7[3] = local_68;
  puVar7[4] = local_70;
  puVar7[5] = uVar20;
  puVar7[6] = uVar17;
  *(undefined1 *)(puVar7 + 7) = uVar19;
  *(undefined1 *)((long)puVar7 + 0x39) = uVar6;
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1004e38bc:
                    /* WARNING: Could not recover jumptable at 0x0001004e38d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1004e392c | FUN_1004e392c */

void FUN_1004e392c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar1 = *(long *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128));
  _swift_release(uVar3);
  _swift_release(uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004e39c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004e39c8 | FUN_1004e39c8 */

void FUN_1004e39c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1004e39d0 | FUN_1004e39d0 */

void FUN_1004e39d0(undefined8 param_1,long param_2)

{
  int iVar1;
  Result RVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  FUN_1004db3ac();
  RVar2 = Swift::Result::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,RVar2.value));
  return;
}



/* Address: 0x1004e3a44 | FUN_1004e3a44 */

void FUN_1004e3a44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  Result RVar2;
  long lVar3;
  undefined7 extraout_var;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  lVar3 = 0;
  FUN_1004e3b80(0,param_6,param_7);
  iVar1 = *(int *)(lVar3 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  FUN_1004db3ac();
  RVar2 = Swift::Result::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e3ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_5,CONCAT71(extraout_var,RVar2.value));
  return;
}



/* Address: 0x1004e3ae8 | FUN_1004e3ae8 */

void FUN_1004e3ae8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e3af4 | FUN_1004e3af4 */

void FUN_1004e3af4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c520b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c520b0,&DAT_100edaca0);
  DAT_100fcc8a8 = pTVar1;
  return;
}



/* Address: 0x1004e3b34 | FUN_1004e3b34 */

void FUN_1004e3b34(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e3b40 | FUN_1004e3b40 */

void FUN_1004e3b40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52088,&DAT_100edaca0);
  DAT_100fcc8b0 = pTVar1;
  return;
}



/* Address: 0x1004e3b80 | FUN_1004e3b80 */

void FUN_1004e3b80(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e3b8c | FUN_1004e3b8c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e3bcc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004e3b8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x1004e3bf8 | FUN_1004e3bf8 */

void FUN_1004e3bf8(void)

{
  FUN_1004e3b8c();
  return;
}



/* Address: 0x1004e3c14 | FUN_1004e3c14 */

long FUN_1004e3c14(undefined8 param_1,undefined8 param_2,code *param_3)

{
  _ContiguousArrayStorage *p_Var1;
  tuple2_conflict3 tVar2;
  
  (*param_3)(0xff,param_1,param_2);
  p_Var1 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
  _swift_allocObject(p_Var1,0x24,7);
  tVar2 = Swift::Array<undefined>::__adoptStorage();
  *(undefined4 *)(tVar2._0_8_ + 0x20) = 0x3020100;
  Swift::Array<undefined>::typeMetadataAccessor();
  return tVar2._0_8_;
}



/* Address: 0x1004e3c84 | FUN_1004e3c84 */

undefined1  [16] FUN_1004e3c84(byte param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  puVar4 = (undefined1 *)0x6370726e6f736a;
  puVar1 = (undefined1 *)0x746c75736572;
  if (param_1 != 2) {
    puVar1 = (undefined1 *)0x726f727265;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  if (param_1 != 0) {
    puVar4 = &SUB_00006469;
  }
  puVar3 = &DAT_e700000000000000;
  if (param_1 != 0) {
    puVar3 = &SUB_e200000000000000;
  }
  if (param_1 < 2) {
    puVar2 = puVar3;
    puVar1 = puVar4;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Address: 0x1004e3cec | FUN_1004e3cec */

void FUN_1004e3cec(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c531d8,param_1);
  (extension_Swift)::Swift::RawRepresentable::_get_hashValue();
  return;
}



/* Address: 0x1004e3d38 | FUN_1004e3d38 */

void FUN_1004e3d38(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c531d8);
  (extension_Swift)::Swift::RawRepresentable::_hash(param_1);
  return;
}



/* Address: 0x1004e3d88 | FUN_1004e3d88 */

void FUN_1004e3d88(__int64 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c531d8);
  (extension_Swift)::Swift::RawRepresentable::__rawHashValue(param_1);
  return;
}



/* Address: 0x1004e3dd8 | FUN_1004e3dd8 */

void FUN_1004e3dd8(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004e3b8c(uVar1,param_2[1],*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                &DAT_100fccf20);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004e3e14 | FUN_1004e3e14 */

void FUN_1004e3e14(undefined8 param_1,undefined8 param_2)

{
  FUN_1004e4fc4(param_1,param_2,thunk_FUN_1004e3c84);
  return;
}



/* Address: 0x1004e3e20 | FUN_1004e3e20 */

void FUN_1004e3e20(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1004e3c84(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1004e3e2c | FUN_1004e3e2c */

void FUN_1004e3e2c(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_1004e3bf8(param_2,param_3,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1004e3e58 | FUN_1004e3e58 */

void FUN_1004e3e58(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1004e3c14(uVar1,*(undefined8 *)(param_2 + 0x18),FUN_1004e422c);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004e3e8c | FUN_1004e3e8c */

String FUN_1004e3e8c(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c533d4,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004e3ec0 | FUN_1004e3ec0 */

String FUN_1004e3ec0(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c533d4,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004e3ef4 | FUN_1004e3ef4 */

void FUN_1004e3ef4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Result RVar7;
  long lVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  KeyedEncodingContainer KVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar14;
  long extraout_x8_01;
  code *pcVar15;
  long unaff_x20;
  long unaff_x21;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong local_d0 [4];
  ulong *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_68;
  undefined1 local_51;
  
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar8 = 0;
  local_98 = param_2;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar11,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  local_a0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0[0] = (long)local_d0 - extraout_x8;
  FUN_1004db3ac();
  RVar7 = Swift::Result::typeMetadataAccessor();
  local_d0[3] = CONCAT71(extraout_var,RVar7.value);
  local_a8 = *(long *)(local_d0[3] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (ulong *)(((long)local_d0 - extraout_x8) - extraout_x8_00);
  uVar9 = 0xff;
  local_d0[1] = uVar2;
  local_d0[2] = uVar11;
  local_b0 = puVar14;
  FUN_1004e422c(0xff,uVar11,uVar2);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c533d4,uVar9);
  KVar10 = Swift::KeyedEncodingContainer::typeMetadataAccessor();
  lVar17 = *(long *)(KVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar14 - extraout_x8_01;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_container();
  local_80 = local_80 & 0xffffffffffffff00;
  uVar11 = 0x302e32;
  Swift::KeyedEncodingContainer::_encode(0x302e32,0xe300000000000000,&local_80,KVar10.unknown);
  lVar6 = local_98;
  lVar5 = local_a0;
  lVar4 = local_a8;
  puVar14 = local_b0;
  if (unaff_x21 == 0) {
    local_80._0_1_ = 1;
    FUN_1004e3af4();
    Swift::KeyedEncodingContainer::_encode(unaff_x20,&local_80,KVar10.unknown,&DAT_100edaca0,uVar11)
    ;
    uVar1 = local_d0[3];
    (**(code **)(lVar4 + 0x10))(puVar14,unaff_x20 + *(int *)(lVar6 + 0x24),local_d0[3]);
    puVar12 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,uVar1);
    uVar1 = local_d0[0];
    if ((int)puVar12 == 1) {
      uVar1 = *puVar14;
      uVar13 = puVar14[1];
      uVar16 = puVar14[2];
      uVar3 = puVar14[3];
      local_51 = 3;
      local_80 = uVar1;
      uStack_78 = uVar13;
      local_70 = uVar16;
      local_68 = (char)uVar3;
      FUN_1004e4238();
      Swift::KeyedEncodingContainer::_encode
                (&local_80,&local_51,KVar10.unknown,&DAT_100eda9c8,puVar12);
      (**(code **)(lVar17 + 8))(lVar18,KVar10.unknown);
      FUN_1004d9f84(uVar1,uVar13,uVar16,(char)uVar3);
      return;
    }
    (**(code **)(lVar5 + 0x20))(local_d0[0],puVar14,lVar8);
    local_80 = CONCAT71(local_80._1_7_,2);
    uVar13 = local_d0[1];
    _swift_getAssociatedConformanceWitness
              (local_d0[1],local_d0[2],lVar8,0x100cb270c,&TargetProtocolRequirement_100cb2734);
    Swift::KeyedEncodingContainer::_encode(uVar1,&local_80,KVar10.unknown,lVar8,uVar13);
    (**(code **)(lVar5 + 8))(uVar1,lVar8);
    pcVar15 = *(code **)(lVar17 + 8);
  }
  else {
    pcVar15 = *(code **)(lVar17 + 8);
  }
  (*pcVar15)(lVar18,KVar10.unknown);
  return;
}



/* Address: 0x1004e422c | FUN_1004e422c */

void FUN_1004e422c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e4238 | FUN_1004e4238 */

void FUN_1004e4238(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51ba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51ba0,&DAT_100eda9c8);
  DAT_100fcc8c0 = pTVar1;
  return;
}



/* Address: 0x1004e4278 | FUN_1004e4278 */

/* WARNING: Removing unreachable block (ram,0x0001004e4694) */
/* WARNING: Removing unreachable block (ram,0x0001004e4624) */
/* WARNING: Removing unreachable block (ram,0x0001004e45a4) */

void FUN_1004e4278(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  Optional OVar5;
  bool bVar6;
  DecodingError DVar7;
  Result RVar8;
  long lVar9;
  undefined7 extraout_var;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  _StringGuts _Var14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar17;
  long unaff_x21;
  long lVar18;
  String SVar19;
  long local_110 [3];
  undefined8 *local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 local_90;
  undefined7 uStack_8f;
  long lStack_88;
  undefined1 local_80;
  undefined1 local_51;
  
  lVar9 = 0xff;
  local_a8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_e0 = CONCAT71(extraout_var,OVar5.value);
  local_e8 = *(long *)(lStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(long *)(lVar9 + -8);
  local_c0 = (long)local_110 - extraout_x8;
  local_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)local_110 - extraout_x8) - extraout_x8_00;
  uVar10 = 0xff;
  local_f0 = lVar16;
  FUN_1004e422c(0xff,param_3,param_4);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c533d4,uVar10);
  local_b8 = (undefined *)Swift::KeyedDecodingContainer::typeMetadataAccessor();
  local_a0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  lVar11 = 0;
  local_d8 = param_4;
  uStack_d0 = param_3;
  FUN_1004e3b80(0,param_3,param_4);
  lVar18 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_container();
  uVar10 = local_a8;
  lVar9 = local_b0;
  puVar4 = local_b8;
  if (unaff_x21 == 0) {
    local_90 = 0;
    local_110[2] = lVar11;
    local_f8 = (undefined8 *)(lVar16 - extraout_x8_02);
    SVar19 = Swift::KeyedDecodingContainer::_decode(&local_90,local_b8);
    _Var14.unknown = SVar19.bridgeObject;
    if (SVar19.str == (undefined *)0x302e32 && _Var14.unknown == (undefined *)0xe300000000000000) {
      _swift_bridgeObjectRelease(_Var14.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar19.str,_Var14,(_StringComparisonResult)0x32);
      _swift_bridgeObjectRelease(_Var14.unknown);
      if (!bVar6) {
        local_90 = 0;
        DVar7 = Swift::DecodingError::typeMetadataAccessor();
        puVar15 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(DVar7.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        puVar12 = 
        PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
        ;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                   ,puVar4);
        Swift::DecodingError::_dataCorruptedError
                  (puVar15,&local_90,lVar16,0xd000000000000018,0x8000000100dab550,puVar4,puVar12);
        _swift_willThrow();
        (**(code **)(local_a0 + 8))(lVar16,puVar4);
        goto LAB_1004e4478;
      }
    }
    local_51 = 1;
    FUN_1004e3b40();
    Swift::KeyedDecodingContainer::_decode
              (&local_90,&DAT_100edaca0,&local_51,puVar4,&DAT_100edaca0,_Var14.unknown);
    puVar2 = local_f8;
    local_110[1] = param_2;
    *local_f8 = CONCAT71(uStack_8f,local_90);
    puVar2[1] = lStack_88;
    local_110[0] = lStack_88;
    *(undefined1 *)(puVar2 + 2) = local_80;
    local_90 = 2;
    uVar13 = local_d8;
    _swift_getAssociatedConformanceWitness
              (local_d8,uStack_d0,lVar9,0x100cb270c,&TargetProtocolRequirement_100cb272c);
    lVar3 = local_c0;
    Swift::KeyedDecodingContainer::_decode(local_c0,lVar9,&local_90,puVar4,lVar9,uVar13);
    (**(code **)(local_a0 + 8))(lVar16,puVar4);
    lVar11 = local_c8;
    (**(code **)(local_c8 + 0x38))(lVar3,0,1,lVar9);
    lVar16 = local_f0;
    pcVar17 = *(code **)(lVar11 + 0x20);
    (*pcVar17)(local_f0,lVar3,lVar9);
    lVar11 = local_110[2];
    iVar1 = *(int *)(local_110[2] + 0x24);
    (*pcVar17)((long)puVar2 + (long)iVar1,lVar16,lVar9);
    FUN_1004db3ac();
    RVar8 = Swift::Result::typeMetadataAccessor();
    _swift_storeEnumTagMultiPayload((long)puVar2 + (long)iVar1,RVar8.value,0);
    lVar9 = local_110[1];
    (**(code **)(lVar18 + 0x10))(uVar10,puVar2,lVar11);
    FUN_100004594(lVar9);
    (**(code **)(lVar18 + 8))(puVar2,lVar11);
  }
  else {
LAB_1004e4478:
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004e4870 | FUN_1004e4870 */

void FUN_1004e4870(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51b78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51b78,&DAT_100eda9c8);
  DAT_100fcc8c8 = pTVar1;
  return;
}



/* Address: 0x1004e48b0 | FUN_1004e48b0 */

bool FUN_1004e48b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _Var2.unknown = (undefined *)*param_1;
  puVar4 = (undefined *)*param_2;
  if (*(char *)(param_1 + 2) == '\x01') {
    if (*(char *)(param_2 + 2) == '\x01' && _Var2.unknown == puVar4) {
LAB_1004e4954:
      FUN_1004e3b80(0,param_3,param_4);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb270c,&TargetProtocolRequirement_100cb274c);
      _swift_getAssociatedConformanceWitness
                (param_4,param_3,uVar3,0x100cb270c,&TargetProtocolRequirement_100cb273c);
      FUN_1004db3f0();
      FUN_1004db3ac();
      bVar1 = (extension_Swift)::Swift::Result::____infix();
      return bVar1;
    }
  }
  else if ((*(char *)(param_2 + 2) != '\x01') &&
          ((_Var2.unknown == puVar4 && (undefined *)param_1[1] == (undefined *)param_2[1] ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              (_Var2,(undefined *)param_1[1],(_StringComparisonResult)(__int8)puVar4
                              ), bVar1)))) goto LAB_1004e4954;
  return false;
}



/* Address: 0x1004e49f4 | FUN_1004e49f4 */

void FUN_1004e49f4(Hasher param_1,Hasher param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  __uint64 *unaff_x20;
  char *pcVar5;
  void *pvVar6;
  String SVar7;
  
  pcVar5 = (char *)*unaff_x20;
  if ((char)unaff_x20[2] == '\x01') {
    HVar4.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)pcVar5,HVar4);
  }
  else {
    pvVar6 = (void *)unaff_x20[1];
    Swift::Hasher::_combine(0,param_2);
    SVar7.bridgeObject = pvVar6;
    SVar7.str = pcVar5;
    Swift::String::hash(param_1,SVar7);
  }
  uVar1 = *(undefined8 *)(param_2.unknown + 0x10);
  uVar2 = *(undefined8 *)(param_2.unknown + 0x18);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,0x100cb270c,&TargetProtocolRequirement_100cb274c)
  ;
  FUN_1004db3ac();
  Swift::Result::typeMetadataAccessor();
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar3,0x100cb270c,&TargetProtocolRequirement_100cb273c);
  FUN_1004e4afc();
  (extension_Swift)::Swift::Result::_hash(param_1);
  return;
}



/* Address: 0x1004e4afc | FUN_1004e4afc */

void FUN_1004e4afc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51bf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51bf0,&DAT_100eda9c8);
  DAT_100fcc8d0 = pTVar1;
  return;
}



/* Address: 0x1004e4b3c | FUN_1004e4b3c */

void FUN_1004e4b3c(undefined8 param_1)

{
  FUN_1004e5c20(param_1,FUN_1004e49f4);
  return;
}



/* Address: 0x1004e4b48 | thunk_FUN_1004e4b3c */

void thunk_FUN_1004e4b3c(undefined8 param_1)

{
  FUN_1004e5c20(param_1,FUN_1004e49f4);
  return;
}



/* Address: 0x1004e4b4c | thunk_FUN_1004e49f4 */

void thunk_FUN_1004e49f4(void)

{
  FUN_1004e49f4();
  return;
}



/* Address: 0x1004e4b50 | FUN_1004e4b50 */

void FUN_1004e4b50(void)

{
  FUN_1004e5c84();
  return;
}



/* Address: 0x1004e4b5c | FUN_1004e4b5c */

void FUN_1004e4b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_x20 + 2);
  FUN_1004a7398();
  return;
}



/* Address: 0x1004e4b70 | FUN_1004e4b70 */

void FUN_1004e4b70(undefined8 param_1,long param_2)

{
  FUN_1004e4278(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1004e4b8c | FUN_1004e4b8c */

void FUN_1004e4b8c(void)

{
  FUN_1004e3ef4();
  return;
}



/* Address: 0x1004e4ba0 | FUN_1004e4ba0 */

void FUN_1004e4ba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1004e48b0(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1004e4bac | FUN_1004e4bac */

String FUN_1004e4bac(void)

{
  String SVar1;
  
  FUN_1004e8330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}


