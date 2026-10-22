/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004075a8 | FUN_1004075a8 */

void FUN_1004075a8(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004090fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004075cc | FUN_1004075cc */

void FUN_1004075cc(undefined1 *param_1)

{
  *param_1 = 9;
  return;
}



/* Address: 0x1004075d8 | FUN_1004075d8 */

String FUN_1004075d8(void)

{
  String SVar1;
  
  FUN_100408efc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100407600 | FUN_100407600 */

String FUN_100407600(void)

{
  String SVar1;
  
  FUN_100408efc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100407628 | thunk_FUN_1004086bc */

void thunk_FUN_1004086bc(void)

{
  FUN_1004086bc();
  return;
}



/* Address: 0x10040762c | FUN_10040762c */

/* WARNING: Removing unreachable block (ram,0x0001004077f8) */
/* WARNING: Removing unreachable block (ram,0x0001004077a8) */

void FUN_10040762c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100fc4ed0;
  FUN_1000037f0(&DAT_100fc4ed0,&DAT_100c47730);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100408efc();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar3);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar3);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[6],unaff_x20[7],&local_54,puVar3);
    uVar4 = unaff_x20[8];
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (uVar4,*(undefined1 *)(unaff_x20 + 9),&local_55,puVar3);
    local_56 = 5;
    FUN_100408f3c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + 0x49,&local_56,puVar3,&DAT_100ed21a8,uVar4);
    lVar5 = 0;
    FUN_100408ee8();
    iVar2 = *(int *)(lVar5 + 0x28);
    local_57 = 6;
    uVar4 = 0;
    FUN_100408dd0(0);
    puVar6 = &DAT_100fc4ee8;
    FUN_100003a00(&DAT_100fc4ee8,FUN_100408dd0,&TargetProtocolConformanceDescriptor_100c47820);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar2,&local_57,puVar3,uVar4,puVar6);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar5 + 0x2c));
    uVar4 = *puVar1;
    local_58 = 7;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar4,puVar1[1],&local_58,puVar3);
    iVar2 = *(int *)(lVar5 + 0x30);
    local_59 = 8;
    FUN_100408f7c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_59,puVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,uVar4);
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar3);
  }
  return;
}



/* Address: 0x1004078f0 | FUN_1004078f0 */

/* WARNING: Removing unreachable block (ram,0x000100407b68) */
/* WARNING: Removing unreachable block (ram,0x000100407bc8) */
/* WARNING: Removing unreachable block (ram,0x000100407af4) */
/* WARNING: Removing unreachable block (ram,0x000100407aac) */
/* WARNING: Removing unreachable block (ram,0x000100407b38) */
/* WARNING: Removing unreachable block (ram,0x000100407b54) */
/* WARNING: Removing unreachable block (ram,0x000100407b80) */
/* WARNING: Removing unreachable block (ram,0x000100407b8c) */
/* WARNING: Removing unreachable block (ram,0x000100407b6c) */
/* WARNING: Removing unreachable block (ram,0x000100407b78) */
/* WARNING: Removing unreachable block (ram,0x000100407a40) */
/* WARNING: Removing unreachable block (ram,0x000100407d1c) */
/* WARNING: Removing unreachable block (ram,0x000100407d7c) */
/* WARNING: Removing unreachable block (ram,0x000100407c78) */
/* WARNING: Removing unreachable block (ram,0x000100407c90) */
/* WARNING: Removing unreachable block (ram,0x000100407cd8) */
/* WARNING: Removing unreachable block (ram,0x000100407cbc) */
/* WARNING: Removing unreachable block (ram,0x000100407cd4) */
/* WARNING: Removing unreachable block (ram,0x000100407b94) */

void FUN_1004078f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  char **ppcVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  long lVar10;
  String *pSVar11;
  String SVar12;
  String local_b0;
  String local_a0;
  String local_90;
  char *local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  lVar4 = 0;
  local_a0.bridgeObject = (void *)param_1;
  FUN_100408dd0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc4ef8;
  FUN_1000037f0(&DAT_100fc4ef8,&DAT_100c47738);
  lVar10 = *(long *)(puVar5 + -8);
  local_90.str = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100408ee8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  pSVar11 = (String *)((lVar9 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100408efc();
  local_90.bridgeObject = (void *)(lVar9 - extraout_x8_00);
  Swift::Decoder::_container();
  pcVar3 = local_90.str;
  if (unaff_x21 == 0) {
    local_70._0_1_ = 0;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_70,local_90.str);
    *pSVar11 = SVar12;
    local_70._0_1_ = 1;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_70,pcVar3);
    local_b0.bridgeObject = SVar12.bridgeObject;
    pSVar11[1] = SVar12;
    local_70._0_1_ = 2;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_70,pcVar3);
    local_b0.str = SVar12.bridgeObject;
    pSVar11[2] = SVar12;
    local_70._0_1_ = 3;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_70,pcVar3);
    local_a0.str = SVar12.bridgeObject;
    pSVar11[3] = SVar12;
    local_70._0_1_ = 4;
    ppcVar7 = &local_70;
    pcVar8 = pcVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar11[4].str = (char *)ppcVar7;
    *(char *)&pSVar11[4].bridgeObject = (char)pcVar8;
    local_51 = 5;
    FUN_100408fbc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,&DAT_100ed21a8,&local_51,pcVar3,&DAT_100ed21a8,ppcVar7);
    *(undefined1 *)((long)&pSVar11[4].bridgeObject + 1) = local_70._0_1_;
    local_70._0_1_ = 6;
    puVar5 = &DAT_100fc4f08;
    FUN_100003a00(&DAT_100fc4f08,FUN_100408dd0,&TargetProtocolConformanceDescriptor_100c477f8);
    Swift::KeyedDecodingContainer::_decode(lVar9,lVar4,&local_70,pcVar3,lVar4,puVar5);
    FUN_100408ea4(lVar9,(long)&pSVar11->str + (long)*(int *)(lVar6 + 0x28));
    local_70._0_1_ = 7;
    ppcVar7 = &local_70;
    pcVar8 = pcVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar1 = (undefined8 *)((long)&pSVar11->str + (long)*(int *)(lVar6 + 0x2c));
    *puVar1 = ppcVar7;
    puVar1[1] = pcVar8;
    local_51 = 8;
    FUN_100408ffc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_70,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_51,pcVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,ppcVar7);
    (**(code **)(lVar10 + 8))(local_90.bridgeObject,pcVar3);
    uVar2 = CONCAT71(local_70._1_7_,local_70._0_1_);
    puVar1 = (undefined8 *)((long)&pSVar11->str + (long)*(int *)(lVar6 + 0x30));
    puVar1[1] = uStack_68;
    *puVar1 = uVar2;
    FUN_1000c495c(pSVar11,local_a0.bridgeObject,FUN_100408ee8);
    FUN_100004594(param_2);
    FUN_10005241c(pSVar11,FUN_100408ee8);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100407de4 | FUN_100407de4 */

void FUN_100407de4(void)

{
  FUN_1004078f0();
  return;
}



/* Address: 0x100407df8 | FUN_100407df8 */

void FUN_100407df8(void)

{
  FUN_10040762c();
  return;
}



/* Address: 0x100407e0c | FUN_100407e0c */

undefined1  [16] FUN_100407e0c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6c61636974697263;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746c7561666564;
  }
  puVar2 = &DAT_e800000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e700000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100407e48 | FUN_100407e48 */

void FUN_100407e48(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x746c7561666564 || param_3 != &DAT_e700000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746c7561666564,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6c61636974697263) && (param_3 == &DAT_e800000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e800000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6c61636974697263,(_StringGuts)0xe800000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100407ea8;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100407ea8:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100407f20 | FUN_100407f20 */

String FUN_100407f20(void)

{
  String SVar1;
  
  FUN_10040903c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100407f48 | FUN_100407f48 */

String FUN_100407f48(void)

{
  String SVar1;
  
  FUN_10040903c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100407f70 | FUN_100407f70 */

String FUN_100407f70(void)

{
  String SVar1;
  
  FUN_10040907c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100407f98 | FUN_100407f98 */

String FUN_100407f98(void)

{
  String SVar1;
  
  FUN_10040907c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100407fc0 | FUN_100407fc0 */

String FUN_100407fc0(void)

{
  String SVar1;
  
  FUN_1004090bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100407fe8 | FUN_100407fe8 */

String FUN_100407fe8(void)

{
  String SVar1;
  
  FUN_1004090bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100408010 | FUN_100408010 */

void FUN_100408010(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4832c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4832c,&DAT_100ed25d8);
  DAT_100fc4e30 = pTVar1;
  return;
}



/* Address: 0x100408050 | FUN_100408050 */

void FUN_100408050(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c482dc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c482dc,&DAT_100ed2668);
  DAT_100fc4e38 = pTVar1;
  return;
}



/* Address: 0x100408090 | FUN_100408090 */

void FUN_100408090(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47988;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47988,&DAT_100ed2238);
  DAT_100fc4e40 = pTVar1;
  return;
}



/* Address: 0x1004080d0 | FUN_1004080d0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100408268 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004080d0(long param_1,char param_2)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc4f18;
  FUN_1000037f0(&DAT_100fc4f18,&DAT_100c47740);
  local_78 = *(long *)(puVar1 + -8);
  puStack_70 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_80 - extraout_x8;
  puVar1 = &DAT_100fc4f20;
  FUN_1000037f0(&DAT_100fc4f20,&DAT_100c47748);
  lVar8 = *(long *)(puVar1 + -8);
  local_80 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar6 - extraout_x8_00;
  puVar1 = &DAT_100fc4f28;
  FUN_1000037f0(&DAT_100fc4f28,&DAT_100c47750);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar9 - extraout_x8_01;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10040903c();
  KVar2 = Swift::Encoder::_container();
  if (param_2 == '\x01') {
    local_51 = 1;
    FUN_10040907c();
    Swift::KeyedEncodingContainer::_nestedContainer
              (lVar6,KVar2.unknown,&local_51,puVar1,&DAT_100ed2308,KVar2.unknown);
    pcVar4 = *(code **)(local_78 + 8);
    lVar9 = lVar6;
    puVar3 = puStack_70;
  }
  else {
    local_52 = 0;
    FUN_1004090bc();
    Swift::KeyedEncodingContainer::_nestedContainer
              (lVar9,KVar2.unknown,&local_52,puVar1,&DAT_100ed22e8,KVar2.unknown);
    pcVar4 = *(code **)(lVar8 + 8);
    puVar3 = local_80;
  }
  (*pcVar4)(lVar9,puVar3);
  (**(code **)(lVar5 + 8))(lVar7,puVar1);
  return;
}



/* Address: 0x1004082b0 | FUN_1004082b0 */

void FUN_1004082b0(void)

{
  FUN_1004093d0();
  return;
}



/* Address: 0x1004082c4 | FUN_1004082c4 */

void FUN_1004082c4(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1004093d0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1004082ec | FUN_1004082ec */

void FUN_1004082ec(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1004080d0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100408304 | FUN_100408304 */

bool FUN_100408304(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  Date DVar2;
  Calendar CVar3;
  Date DVar4;
  Calendar CVar5;
  bool bVar6;
  Calendar CVar7;
  Date DVar8;
  long lVar9;
  double *pdVar10;
  Calendar CVar11;
  long extraout_x8;
  undefined *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  code *pcVar14;
  double *pdVar15;
  long lVar16;
  long lVar17;
  Date local_90;
  Calendar local_88;
  Date local_80;
  Calendar local_78;
  long local_70;
  long local_68;
  
  CVar7 = Foundation::Calendar::typeMetadataAccessor();
  local_70 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  puVar12 = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_88.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = puVar12 + -extraout_x12;
  local_78.unknown = puVar12;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  local_68 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  puVar12 = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = 0;
  local_80.unknown = puVar12 + -extraout_x12_00;
  FUN_100408dd0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar17 = (long)(puVar12 + -extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pdVar15 = (double *)(lVar17 - extraout_x12_01);
  puVar12 = &DAT_100fc51a0;
  FUN_1000037f0(&DAT_100fc51a0,&DAT_100c483b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)pdVar15 - extraout_x8_02;
  pdVar1 = (double *)(lVar13 + *(int *)(puVar12 + 0x30));
  FUN_1000c495c(param_1,lVar13,FUN_100408dd0);
  FUN_1000c495c(param_2,pdVar1,FUN_100408dd0);
  lVar16 = lVar13;
  _swift_getEnumCaseMultiPayload(lVar13,lVar9);
  if ((int)lVar16 == 1) {
    FUN_1000c495c(lVar13,lVar17,FUN_100408dd0);
    puVar12 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    lVar16 = (long)*(int *)(puVar12 + 0x30);
    pdVar15 = pdVar1;
    _swift_getEnumCaseMultiPayload(pdVar1,lVar9);
    DVar4.unknown = local_80.unknown;
    if ((int)pdVar15 == 1) {
      pcVar14 = *(code **)(local_68 + 0x20);
      (*pcVar14)(local_80.unknown,lVar17,DVar8.unknown);
      DVar2.unknown = local_90.unknown;
      (*pcVar14)(local_90.unknown,pdVar1,DVar8.unknown);
      lVar9 = local_70;
      CVar5.unknown = local_78.unknown;
      pcVar14 = *(code **)(local_70 + 0x20);
      (*pcVar14)(local_78.unknown,lVar17 + lVar16,CVar7.unknown);
      CVar3.unknown = local_88.unknown;
      CVar11 = CVar7;
      (*pcVar14)(local_88.unknown,(long)pdVar1 + lVar16);
      bVar6 = Foundation::Date::___infix(DVar4,DVar2,(Date)CVar11.unknown);
      if (!bVar6) {
        pcVar14 = *(code **)(lVar9 + 8);
        (*pcVar14)(CVar3.unknown,CVar7.unknown);
        (*pcVar14)(CVar5.unknown,CVar7.unknown);
        pcVar14 = *(code **)(local_68 + 8);
        (*pcVar14)(DVar2.unknown,DVar8.unknown);
        (*pcVar14)(DVar4.unknown,DVar8.unknown);
        FUN_10005241c(lVar13,FUN_100408dd0);
        return false;
      }
      bVar6 = Foundation::Calendar::___infix(CVar5,CVar3,CVar11);
      pcVar14 = *(code **)(lVar9 + 8);
      (*pcVar14)(CVar3.unknown,CVar7.unknown);
      (*pcVar14)(CVar5.unknown,CVar7.unknown);
      pcVar14 = *(code **)(local_68 + 8);
      (*pcVar14)(DVar2.unknown,DVar8.unknown);
      (*pcVar14)(DVar4.unknown,DVar8.unknown);
LAB_1004085f0:
      FUN_10005241c(lVar13,FUN_100408dd0);
      return bVar6;
    }
    (**(code **)(local_70 + 8))(lVar17 + lVar16,CVar7.unknown);
    (**(code **)(local_68 + 8))(lVar17,DVar8.unknown);
  }
  else {
    FUN_1000c495c(lVar13,pdVar15,FUN_100408dd0);
    pdVar10 = pdVar1;
    _swift_getEnumCaseMultiPayload(pdVar1,lVar9);
    if ((int)pdVar10 != 1) {
      bVar6 = *pdVar15 == *pdVar1;
      goto LAB_1004085f0;
    }
  }
  FUN_100005808(lVar13,&DAT_100fc51a0,&DAT_100c483b0);
  return false;
}



/* Address: 0x1004086bc | FUN_1004086bc */

undefined8 FUN_1004086bc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  _StringGuts _Var10;
  ulong uVar11;
  _StringGuts _Var12;
  undefined *puVar13;
  undefined *puVar14;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar7 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar7)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar7 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar7)) {
      if ((((undefined *)param_1[4] == (undefined *)param_2[4]) &&
          ((undefined *)param_1[5] == (undefined *)param_2[5])) ||
         (bVar7 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[4],(undefined *)param_1[5],
                             (_StringComparisonResult)(__int8)(undefined *)param_2[4]), bVar7)) {
        if ((((undefined *)param_1[6] == (undefined *)param_2[6]) &&
            ((undefined *)param_1[7] == (undefined *)param_2[7])) ||
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[6],(undefined *)param_1[7],
                               (_StringComparisonResult)(__int8)(undefined *)param_2[6]), bVar7)) {
          if (*(char *)(param_1 + 9) == '\x01') {
            if ((char)param_2[9] != '\x01') {
              return 0;
            }
          }
          else {
            if ((char)param_2[9] == '\x01') {
              return 0;
            }
            if (param_1[8] != param_2[8]) {
              return 0;
            }
          }
          if (*(char *)((long)param_1 + 0x49) == '\x02') {
            if (*(char *)((long)param_2 + 0x49) != '\x02') {
              return 0;
            }
          }
          else if (*(char *)((long)param_1 + 0x49) != *(char *)((long)param_2 + 0x49)) {
            return 0;
          }
          lVar8 = 0;
          FUN_100408ee8();
          uVar9 = (long)param_1 + (long)*(int *)(lVar8 + 0x28);
          FUN_100408304(uVar9,(long)param_2 + (long)*(int *)(lVar8 + 0x28));
          if ((uVar9 & 1) != 0) {
            puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
            _Var12.unknown = (undefined *)puVar1[1];
            puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
            puVar14 = (undefined *)puVar2[1];
            if (_Var12.unknown == (undefined *)0x0) {
              if (puVar14 != (undefined *)0x0) {
                return 0;
              }
            }
            else {
              if (puVar14 == (undefined *)0x0) {
                return 0;
              }
              _Var10.unknown = (undefined *)*puVar1;
              puVar13 = (undefined *)*puVar2;
              if (((_Var10.unknown != puVar13) || (_Var12.unknown != puVar14)) &&
                 (bVar7 = Swift::_stringCompareWithSmolCheck
                                    (_Var10,_Var12,(_StringComparisonResult)(__int8)puVar13), !bVar7
                 )) {
                return 0;
              }
            }
            puVar3 = (ulong *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
            puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
            uVar9 = *puVar3;
            uVar5 = puVar3[1];
            uVar4 = *puVar1;
            uVar6 = puVar1[1];
            if (uVar5 >> 0x3c < 0xf) {
              if (uVar6 >> 0x3c < 0xf) {
                FUN_10011da54(uVar9,uVar5);
                FUN_10011da54(uVar4,uVar6);
                uVar11 = uVar9;
                FUN_10031b830(uVar9,uVar5,uVar4,uVar6);
                FUN_10003bf18(uVar4,uVar6);
                FUN_10003bf18(uVar9,uVar5);
                if ((uVar11 & 1) == 0) {
                  return 0;
                }
                return 1;
              }
            }
            else if (0xe < uVar6 >> 0x3c) {
              FUN_10011da54(uVar9,uVar5);
              FUN_10011da54(uVar4,uVar6);
              FUN_10003bf18(uVar9,uVar5);
              return 1;
            }
            FUN_10011da54(uVar9,uVar5);
            FUN_10011da54(uVar4,uVar6);
            FUN_10003bf18(uVar9,uVar5);
            FUN_10003bf18(uVar4,uVar6);
          }
        }
      }
    }
  }
  return 0;
}



/* Address: 0x100408928 | FUN_100408928 */

undefined * FUN_100408928(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *capacity;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc5190;
    FUN_1000037f0(&DAT_100fc5190,&DAT_100c483a0);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      uVar4 = 0;
      FUN_10040b0b8(param_1);
      puVar3 = &local_98;
      FUN_1000f1290();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100408a3c);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = local_78;
      puVar5[1] = uStack_90;
      *puVar5 = local_98;
      puVar5[3] = uStack_80;
      puVar5[2] = local_88;
      FUN_100011080(auStack_70,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100408a40);
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



/* Address: 0x100408a40 | FUN_100408a40 */

undefined * FUN_100408a40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc5170;
    uVar6 = 0;
    FUN_1000037f0();
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      uVar5 = uVar1;
      FUN_1001e9180();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100408b14);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100408b18);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
  }
  return puVar4;
}



/* Address: 0x100408b18 | FUN_100408b18 */

/* WARNING: Removing unreachable block (ram,0x000100408c60) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100408cec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100408b18(ulong param_1)

{
  int iVar1;
  KeyedDecodingContainer KVar2;
  DecodingError DVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  KeyedDecodingContainer KVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  ulong local_80;
  KeyedDecodingContainer local_78;
  ulong local_70;
  byte local_51;
  
  puVar4 = &DAT_100fc51a8;
  FUN_1000037f0(&DAT_100fc51a8,&DAT_100c483b8);
  lVar9 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_80 - extraout_x8;
  puVar5 = &DAT_100fc51b0;
  FUN_1000037f0(&DAT_100fc51b0,&DAT_100c483c0);
  lVar11 = *(long *)(puVar5 + -8);
  local_78.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100408010();
  local_70 = lVar10 - extraout_x8_00;
  Swift::Decoder::_container();
  KVar2.unknown = local_78.unknown;
  if (unaff_x21 == 0) {
    KVar7.unknown = local_78.unknown;
    local_80 = param_1;
    Swift::KeyedDecodingContainer::get_allKeys(local_78);
    if (*(long *)(KVar7.unknown + 0x10) == 1) {
      FUN_100408050();
      Swift::KeyedDecodingContainer::_nestedContainer(lVar10);
      FUN_10040b108();
      Swift::KeyedDecodingContainer::_decode(&local_51);
      (**(code **)(lVar9 + 8))(lVar10,puVar4);
      (**(code **)(lVar11 + 8))(local_70,KVar2.unknown);
      _swift_unknownObjectRelease(KVar7.unknown);
      FUN_100004594(local_80);
      return (ulong)local_51;
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar9 = CONCAT71((int7)((ulong)KVar7.unknown >> 8),DVar3.value);
    puVar8 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar9,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100fc4ea8;
    FUN_1000037f0(&DAT_100fc4ea8,&DAT_100c47718);
    uVar6 = local_70;
    iVar1 = *(int *)(puVar4 + 0x30);
    *puVar8 = &DAT_100ed21a8;
    Swift::KeyedDecodingContainer::_get_codingPath(KVar2);
    Swift::DecodingError::Context::_init
              ((long)puVar8 + (long)iVar1,puVar4,0xd00000000000002b,0x8000000100da2320,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x68))
              (puVar8,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
               ,lVar9);
    _swift_willThrow();
    (**(code **)(lVar11 + 8))(uVar6,KVar2.unknown);
    _swift_unknownObjectRelease(KVar7.unknown);
    param_1 = local_80;
  }
  FUN_100004594(param_1);
  return uVar6;
}



/* Address: 0x100408dd0 | FUN_100408dd0 */

void FUN_100408dd0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc5070,&TargetEnumDescriptor_100caf23c);
  return;
}



/* Address: 0x100408de4 | FUN_100408de4 */

void FUN_100408de4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4828c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4828c,&DAT_100ed2428);
  DAT_100fc4e60 = pTVar1;
  return;
}



/* Address: 0x100408e24 | FUN_100408e24 */

void FUN_100408e24(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4823c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4823c,&DAT_100ed2548);
  DAT_100fc4e70 = pTVar1;
  return;
}



/* Address: 0x100408e64 | FUN_100408e64 */

void FUN_100408e64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4e88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c481ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c481ec,&DAT_100ed24b8);
  DAT_100fc4e88 = pTVar1;
  return;
}



/* Address: 0x100408ea4 | FUN_100408ea4 */

undefined8 FUN_100408ea4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100408dd0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100408ee8 | FUN_100408ee8 */

void FUN_100408ee8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc4fa8,&TargetStructDescriptor_100caf1f8);
  return;
}



/* Address: 0x100408efc | FUN_100408efc */

void FUN_100408efc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4ed8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4819c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4819c,&DAT_100ed2398);
  DAT_100fc4ed8 = pTVar1;
  return;
}



/* Address: 0x100408f3c | FUN_100408f3c */

void FUN_100408f3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c477a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c477a8,&DAT_100ed21a8);
  DAT_100fc4ee0 = pTVar1;
  return;
}



/* Address: 0x100408f7c | FUN_100408f7c */

void FUN_100408f7c(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fc4ef0 = puVar1;
  return;
}



/* Address: 0x100408fbc | FUN_100408fbc */

void FUN_100408fbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47780;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47780,&DAT_100ed21a8);
  DAT_100fc4f00 = pTVar1;
  return;
}



/* Address: 0x100408ffc | FUN_100408ffc */

void FUN_100408ffc(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fc4f10 = puVar1;
  return;
}



/* Address: 0x10040903c | FUN_10040903c */

void FUN_10040903c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4814c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4814c,&DAT_100ed22c8);
  DAT_100fc4f30 = pTVar1;
  return;
}



/* Address: 0x10040907c | FUN_10040907c */

void FUN_10040907c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c480fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c480fc,&DAT_100ed2308);
  DAT_100fc4f38 = pTVar1;
  return;
}



/* Address: 0x1004090bc | FUN_1004090bc */

void FUN_1004090bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c480ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c480ac,&DAT_100ed22e8);
  DAT_100fc4f40 = pTVar1;
  return;
}



/* Address: 0x1004090fc | FUN_1004090fc */

undefined4 FUN_1004090fc(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x656c746974) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x656c746974627573) && (param_2 == &DAT_e800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974627573,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x79646f62) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x79646f62,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x6567646162) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6567646162,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != (undefined1 *)0x646e756f73) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x646e756f73,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if (((param_1 != (undefined1 *)0x72656767697274) || (param_2 != &DAT_e700000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x72656767697274,(_StringGuts)0xe700000000000000,
                               expecting), !bVar1)) {
          if (((param_1 != (undefined1 *)0x79726f6765746163) ||
              (param_2 != (undefined1 *)0xea00000000006449)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x79726f6765746163,(_StringGuts)0xea00000000006449,
                                 expecting), !bVar1)) {
            if ((param_1 == (undefined1 *)0x6f666e4972657375) &&
               (param_2 == (undefined1 *)0xec00000061746144)) {
              _swift_bridgeObjectRelease(0xec00000061746144);
              return 8;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f666e4972657375,(_StringGuts)0xec00000061746144,
                               expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 8;
            }
            return 9;
          }
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004093d0 | FUN_1004093d0 */

/* WARNING: Removing unreachable block (ram,0x0001004096a4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100409694 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004093d0(ulong param_1)

{
  char cVar1;
  int iVar2;
  DecodingError DVar3;
  undefined *puVar4;
  KeyedDecodingContainer KVar5;
  ulong uVar6;
  KeyedDecodingContainer KVar7;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  char local_52;
  char local_51;
  long lVar8;
  
  puVar4 = &DAT_100fc5178;
  FUN_1000037f0(&DAT_100fc5178,&DAT_100c48388);
  local_88 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc5180;
  local_70 = (long)&local_90 - extraout_x8;
  FUN_1000037f0(&DAT_100fc5180,&DAT_100c48390);
  lVar11 = *(long *)(puVar4 + -8);
  local_80 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  KVar5.unknown = &DAT_100fc5188;
  FUN_1000037f0(&DAT_100fc5188,&DAT_100c48398);
  lVar13 = *(long *)(KVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = lVar10 - extraout_x8_01;
  uVar6 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10040903c();
  Swift::Decoder::_container();
  lVar8 = local_70;
  if (unaff_x21 == 0) {
    KVar7.unknown = KVar5.unknown;
    local_90 = param_1;
    Swift::KeyedDecodingContainer::get_allKeys(KVar5);
    if ((*(long *)(KVar7.unknown + 0x10) != 0) &&
       (cVar1 = KVar7.unknown[0x20], *(long *)(KVar7.unknown + 0x10) == 1 && cVar1 != '\x02')) {
      if (cVar1 != '\x01') {
        puVar4 = KVar7.unknown;
        local_52 = cVar1;
        FUN_1004090bc();
        Swift::KeyedDecodingContainer::_nestedContainer
                  (lVar10,puVar4,&local_52,KVar5.unknown,&DAT_100ed22e8,puVar4);
        (**(code **)(lVar11 + 8))(lVar10,local_80);
        (**(code **)(lVar13 + 8))(uVar12,KVar5.unknown);
        _swift_unknownObjectRelease(KVar7.unknown);
      }
      else {
        puVar4 = KVar7.unknown;
        local_51 = cVar1;
        FUN_10040907c();
        Swift::KeyedDecodingContainer::_nestedContainer
                  (lVar8,puVar4,&local_51,KVar5.unknown,&DAT_100ed2308,puVar4);
        (**(code **)(local_88 + 8))(lVar8,local_78);
        (**(code **)(lVar13 + 8))(uVar12,KVar5.unknown);
        _swift_unknownObjectRelease(KVar7.unknown);
      }
      FUN_100004594(local_90);
      return (ulong)(cVar1 == '\x01');
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)KVar7.unknown >> 8),DVar3.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar8,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100fc4ea8;
    FUN_1000037f0(&DAT_100fc4ea8,&DAT_100c47718);
    iVar2 = *(int *)(puVar4 + 0x30);
    *puVar9 = &DAT_100ed2238;
    Swift::KeyedDecodingContainer::_get_codingPath(KVar5);
    Swift::DecodingError::Context::_init
              ((long)puVar9 + (long)iVar2,puVar4,0xd00000000000002b,0x8000000100da2320,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
               ,lVar8);
    _swift_willThrow();
    (**(code **)(lVar13 + 8))(uVar12,KVar5.unknown);
    _swift_unknownObjectRelease(KVar7.unknown);
    uVar6 = uVar12;
    param_1 = local_90;
  }
  FUN_100004594(param_1);
  return uVar6;
}



/* Address: 0x100409728 | thunk_FUN_10040972c */

void thunk_FUN_10040972c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47938;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47938,&DAT_100ed2238);
  DAT_100fc4f48 = pTVar1;
  return;
}



/* Address: 0x10040972c | FUN_10040972c */

void FUN_10040972c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47938;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47938,&DAT_100ed2238);
  DAT_100fc4f48 = pTVar1;
  return;
}



/* Address: 0x10040976c | FUN_10040976c */

long * FUN_10040976c(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  Date DVar13;
  undefined *puVar14;
  Calendar CVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar6;
    lVar7 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar7;
    lVar11 = param_2[6];
    lVar8 = param_2[7];
    lVar16 = param_2[8];
    *(char *)(param_1 + 9) = (char)param_2[9];
    param_1[7] = lVar8;
    param_1[8] = lVar16;
    *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    param_1[6] = lVar11;
    lVar11 = 0;
    FUN_100408dd0();
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar8);
    pvVar12 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar11);
    if ((int)pvVar12 == 1) {
      DVar13 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar13.unknown + -8) + 0x10))(pvVar1,pvVar2,DVar13.unknown);
      puVar14 = &DAT_100fc4e68;
      FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
      iVar10 = *(int *)(puVar14 + 0x30);
      CVar15 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar15.unknown + -8) + 0x10))
                ((long)pvVar1 + (long)iVar10,(long)pvVar2 + (long)iVar10,CVar15.unknown);
      _swift_storeEnumTagMultiPayload(pvVar1,lVar11,1);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
    iVar10 = *(int *)(param_3 + 0x30);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar18 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar18;
    puVar3 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar4 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar17 = puVar4[1];
    _swift_bridgeObjectRetain();
    if (uVar17 >> 0x3c < 0xf) {
      uVar18 = *puVar4;
      FUN_1001037b4(uVar18,uVar17);
      *puVar3 = uVar18;
      puVar3[1] = uVar17;
    }
    else {
      uVar18 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar18;
    }
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar17 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar11 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100409934 | FUN_100409934 */

void FUN_100409934(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Date DVar6;
  undefined *puVar7;
  Calendar CVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  lVar1 = param_1 + *(int *)(param_2 + 0x28);
  uVar4 = 0;
  FUN_100408dd0(0);
  lVar5 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,uVar4);
  if ((int)lVar5 == 1) {
    DVar6 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(lVar1,DVar6.unknown);
    puVar7 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar3 = *(int *)(puVar7 + 0x30);
    CVar8 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar8.unknown + -8) + 8))(lVar1 + iVar3,CVar8.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x30));
  if (0xe < (ulong)puVar2[1] >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*puVar2);
  return;
}



/* Address: 0x100409a2c | FUN_100409a2c */

undefined8 * FUN_100409a2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  void *pvVar11;
  Date DVar12;
  undefined *puVar13;
  Calendar CVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar17 = param_2[6];
  uVar8 = param_2[7];
  uVar15 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[7] = uVar8;
  param_1[8] = uVar15;
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  param_1[6] = uVar17;
  lVar10 = 0;
  FUN_100408dd0();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  pvVar11 = pvVar2;
  _swift_getEnumCaseMultiPayload(pvVar2,lVar10);
  if ((int)pvVar11 == 1) {
    DVar12 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar12.unknown + -8) + 0x10))(pvVar1,pvVar2,DVar12.unknown);
    puVar13 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar9 = *(int *)(puVar13 + 0x30);
    CVar14 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar14.unknown + -8) + 0x10))
              ((long)pvVar1 + (long)iVar9,(long)pvVar2 + (long)iVar9,CVar14.unknown);
    _swift_storeEnumTagMultiPayload(pvVar1,lVar10,1);
  }
  else {
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x30);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar17 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar17;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar9);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar9);
  uVar16 = param_2[1];
  _swift_bridgeObjectRetain();
  if (uVar16 >> 0x3c < 0xf) {
    uVar17 = *param_2;
    FUN_1001037b4(uVar17,uVar16);
    *puVar3 = uVar17;
    puVar3[1] = uVar16;
  }
  else {
    uVar17 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar17;
  }
  return param_1;
}



/* Address: 0x100409bc8 | FUN_100409bc8 */

undefined8 * FUN_100409bc8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  Date DVar9;
  undefined *puVar10;
  Calendar CVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar13 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[2] = param_2[2];
  uVar13 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[4] = param_2[4];
  uVar13 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[6] = param_2[6];
  uVar13 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar13;
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  if (param_1 != param_2) {
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    FUN_10005241c(pvVar1,FUN_100408dd0);
    lVar7 = 0;
    FUN_100408dd0();
    pvVar8 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar7);
    if ((int)pvVar8 == 1) {
      DVar9 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar9.unknown + -8) + 0x10))(pvVar1,pvVar2,DVar9.unknown);
      puVar10 = &DAT_100fc4e68;
      FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
      iVar6 = *(int *)(puVar10 + 0x30);
      CVar11 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar11.unknown + -8) + 0x10))
                ((long)pvVar1 + (long)iVar6,(long)pvVar2 + (long)iVar6,CVar11.unknown);
      _swift_storeEnumTagMultiPayload(pvVar1,lVar7,1);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
    }
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar3 = *puVar4;
  uVar13 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar12 = param_2[1];
  if ((ulong)puVar3[1] >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      uVar14 = *param_2;
      FUN_1001037b4(uVar14,uVar12);
      uVar13 = *puVar3;
      uVar5 = puVar3[1];
      *puVar3 = uVar14;
      puVar3[1] = uVar12;
      FUN_10003bf2c(uVar13,uVar5);
      return param_1;
    }
    FUN_10031275c(puVar3);
  }
  else if (uVar12 >> 0x3c < 0xf) {
    uVar13 = *param_2;
    FUN_1001037b4(uVar13,uVar12);
    *puVar3 = uVar13;
    puVar3[1] = uVar12;
    return param_1;
  }
  uVar13 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar13;
  return param_1;
}



/* Address: 0x100409e10 | FUN_100409e10 */

undefined8 * FUN_100409e10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  Date DVar8;
  undefined *puVar9;
  Calendar CVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar12 = param_2[5];
  uVar11 = param_2[4];
  uVar14 = param_2[7];
  uVar13 = param_2[6];
  param_1[8] = param_2[8];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  lVar6 = 0;
  FUN_100408dd0();
  pvVar7 = pvVar2;
  _swift_getEnumCaseMultiPayload(pvVar2,lVar6);
  if ((int)pvVar7 == 1) {
    DVar8 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x20))(pvVar1,pvVar2,DVar8.unknown);
    puVar9 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar3 = *(int *)(puVar9 + 0x30);
    CVar10 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar10.unknown + -8) + 0x20))
              ((long)pvVar1 + (long)iVar3,(long)pvVar2 + (long)iVar3,CVar10.unknown);
    _swift_storeEnumTagMultiPayload(pvVar1,lVar6,1);
  }
  else {
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x30);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar11 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar11;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar4[1] = param_2[1];
  *puVar4 = uVar11;
  return param_1;
}



/* Address: 0x100409f30 | FUN_100409f30 */

undefined8 * FUN_100409f30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  Date DVar9;
  undefined *puVar10;
  Calendar CVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  uVar12 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  uVar12 = param_2[3];
  uVar6 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  uVar12 = param_2[5];
  uVar6 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  uVar12 = param_2[7];
  uVar6 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  param_1[8] = param_2[8];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  if (param_1 != param_2) {
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    FUN_10005241c(pvVar1,FUN_100408dd0);
    lVar7 = 0;
    FUN_100408dd0();
    pvVar8 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar7);
    if ((int)pvVar8 == 1) {
      DVar9 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar9.unknown + -8) + 0x20))(pvVar1,pvVar2,DVar9.unknown);
      puVar10 = &DAT_100fc4e68;
      FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
      iVar5 = *(int *)(puVar10 + 0x30);
      CVar11 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar11.unknown + -8) + 0x20))
                ((long)pvVar1 + (long)iVar5,(long)pvVar2 + (long)iVar5,CVar11.unknown);
      _swift_storeEnumTagMultiPayload(pvVar1,lVar7,1);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
    }
  }
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = puVar4[1];
  uVar6 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar12;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  if ((ulong)puVar3[1] >> 0x3c < 0xf) {
    uVar13 = param_2[1];
    if (uVar13 >> 0x3c < 0xf) {
      uVar12 = *puVar3;
      *puVar3 = *param_2;
      puVar3[1] = uVar13;
      FUN_10003bf2c(uVar12);
      return param_1;
    }
    FUN_10031275c(puVar3);
  }
  uVar12 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar12;
  return param_1;
}



/* Address: 0x10040a0f0 | FUN_10040a0f0 */

void FUN_10040a0f0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10040a0fc | FUN_10040a0fc */

ulong FUN_10040a0fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_100408dd0();
  uVar2 = param_1 + *(int *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010040a174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Address: 0x10040a178 | FUN_10040a178 */

void FUN_10040a178(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10040a184 | FUN_10040a184 */

void FUN_10040a184(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_100408dd0();
                    /* WARNING: Could not recover jumptable at 0x00010040a1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x28),param_2,param_2,lVar1);
  return;
}



/* Address: 0x10040a1f8 | FUN_10040a1f8 */

void FUN_10040a1f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_68 = &DAT_100c479d8;
  puStack_60 = &DAT_100c479d8;
  local_58 = &DAT_100c479d8;
  puStack_50 = &DAT_100c479d8;
  local_48 = &DAT_100c479f0;
  puStack_40 = &DAT_100c47a08;
  lVar1 = 0x13f;
  FUN_100408dd0();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c47a20;
    local_28 = &DAT_100c47a38;
    _swift_initStructMetadata(param_1,0x100,9,&local_68,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10040a298 | FUN_10040a298 */

void FUN_10040a298(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10040a2a4 | FUN_10040a2a4 */

void FUN_10040a2a4(void)

{
  return;
}



/* Address: 0x10040a2a8 | FUN_10040a2a8 */

undefined1  [16] FUN_10040a2a8(void)

{
  return ZEXT816(0x100ed21a8);
}



/* Address: 0x10040a2b8 | FUN_10040a2b8 */

long * FUN_10040a2b8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  undefined *puVar4;
  Calendar CVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar6 != 1) {
      plVar6 = _memcpy(param_1,param_2,*(size_t *)(lVar8 + 0x40));
      return plVar6;
    }
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,param_2,DVar3.unknown);
    puVar4 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar2 = *(int *)(puVar4 + 0x30);
    CVar5 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,CVar5.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10040a3ac | FUN_10040a3ac */

void FUN_10040a3ac(long param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  undefined *puVar4;
  Calendar CVar5;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar2 == 1) {
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 8))(param_1,DVar3.unknown);
    puVar4 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar1 = *(int *)(puVar4 + 0x30);
    CVar5 = Foundation::Calendar::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010040a41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(CVar5.unknown + -8) + 8))(param_1 + iVar1,CVar5.unknown);
    return;
  }
  return;
}



/* Address: 0x10040a42c | FUN_10040a42c */

void * FUN_10040a42c(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined *puVar3;
  Calendar CVar4;
  void *pvVar5;
  
  pvVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar5 == 1) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
    puVar3 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar1 = *(int *)(puVar3 + 0x30);
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,CVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  pvVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar5;
}


