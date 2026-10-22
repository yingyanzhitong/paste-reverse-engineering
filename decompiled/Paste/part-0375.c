/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100497f68 | FUN_100497f68 */

void FUN_100497f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[10] = param_2[10];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x100497f8c | FUN_100497f8c */

undefined8 * FUN_100497f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100498008 | FUN_100498008 */

undefined1  [16] FUN_100498008(void)

{
  return ZEXT816(0x100ed8770);
}



/* Address: 0x100498018 | thunk_FUN_10049801c */

void thunk_FUN_10049801c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ef2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ef2c,&DAT_100ed86f8);
  DAT_100fca0e0 = pTVar1;
  return;
}



/* Address: 0x10049801c | FUN_10049801c */

void FUN_10049801c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ef2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ef2c,&DAT_100ed86f8);
  DAT_100fca0e0 = pTVar1;
  return;
}



/* Address: 0x10049805c | thunk_FUN_100498060 */

void thunk_FUN_100498060(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4efcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4efcc,&DAT_100ed8668);
  DAT_100fca0e8 = pTVar1;
  return;
}



/* Address: 0x100498060 | FUN_100498060 */

void FUN_100498060(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4efcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4efcc,&DAT_100ed8668);
  DAT_100fca0e8 = pTVar1;
  return;
}



/* Address: 0x1004980a0 | thunk_FUN_1004980a4 */

void thunk_FUN_1004980a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4eec4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4eec4,&DAT_100ed86f8);
  DAT_100fca0f0 = pTVar1;
  return;
}



/* Address: 0x1004980a4 | FUN_1004980a4 */

void FUN_1004980a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4eec4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4eec4,&DAT_100ed86f8);
  DAT_100fca0f0 = pTVar1;
  return;
}



/* Address: 0x1004980e4 | thunk_FUN_1004980e8 */

void thunk_FUN_1004980e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ee9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ee9c,&DAT_100ed86f8);
  DAT_100fca0f8 = pTVar1;
  return;
}



/* Address: 0x1004980e8 | FUN_1004980e8 */

void FUN_1004980e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ee9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ee9c,&DAT_100ed86f8);
  DAT_100fca0f8 = pTVar1;
  return;
}



/* Address: 0x100498128 | FUN_100498128 */

void FUN_100498128(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ef54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ef54,&DAT_100ed8668);
  DAT_100fca100 = pTVar1;
  return;
}



/* Address: 0x100498168 | FUN_100498168 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100498168(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_68 [3];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  puVar2 = auStack_68;
  FUN_100004640(puVar2,local_50);
  puVar3 = param_1;
  (**(code **)(*(long *)(lStack_48 + 8) + 0x20))(param_1,param_2,local_50);
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = auStack_68;
    FUN_100004594();
  }
  else {
    uVar1 = (uint)auStack_68;
    FUN_100004594();
    FUN_10032905c();
    if ((uVar1 & 0xff) == 2) {
      return puVar3;
    }
    puVar4 = (undefined8 *)0x0;
    puVar2 = puVar3;
  }
  FUN_100491028();
  _swift_allocError(&DAT_100ed8ab0,puVar4,0,0);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  *(undefined1 *)(puVar4 + 2) = 0;
  _swift_willThrow();
  _swift_bridgeObjectRetain(param_2);
  return puVar2;
}



/* Address: 0x100498250 | FUN_100498250 */

void FUN_100498250(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fca1b8;
  FUN_1000037f0(&DAT_100fca1b8,&DAT_100c4f0f0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100498794();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],&local_53,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10049839c | FUN_10049839c */

undefined1  [16] FUN_10049839c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x656d616e;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x6e756f436d657469;
  }
  puVar1 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xe900000000000074;
  }
  puVar2 = &SUB_00006469;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &SUB_e200000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x1004983e8 | FUN_1004983e8 */

void FUN_1004983e8(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004984b4();
  *param_1 = param_2;
  return;
}



/* Address: 0x10049840c | FUN_10049840c */

String FUN_10049840c(void)

{
  String SVar1;
  
  FUN_100498794();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100498434 | FUN_100498434 */

String FUN_100498434(void)

{
  String SVar1;
  
  FUN_100498794();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10049845c | FUN_10049845c */

void FUN_10049845c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1004985c8(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    param_1[4] = local_28;
  }
  return;
}



/* Address: 0x1004984a0 | FUN_1004984a0 */

void FUN_1004984a0(void)

{
  FUN_100498250();
  return;
}



/* Address: 0x1004984b4 | FUN_1004984b4 */

undefined4 FUN_1004984b4(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != (undefined1 *)0x656d616e) || (param_2 != &DAT_e400000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting),
         !bVar1)) {
        if ((param_1 == (undefined1 *)0x6e756f436d657469) &&
           (param_2 == (undefined1 *)0xe900000000000074)) {
          _swift_bridgeObjectRelease(0xe900000000000074);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6e756f436d657469,(_StringGuts)0xe900000000000074,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004985c8 | FUN_1004985c8 */

/* WARNING: Removing unreachable block (ram,0x0001004986fc) */
/* WARNING: Removing unreachable block (ram,0x000100498754) */
/* WARNING: Removing unreachable block (ram,0x000100498768) */
/* WARNING: Removing unreachable block (ram,0x000100498694) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100498734 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004985c8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  String SVar3;
  String SVar4;
  undefined1 auStack_80 [8];
  __int64 local_78;
  char *local_70;
  char *local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fca1a8;
  FUN_1000037f0(&DAT_100fca1a8,&DAT_100c4f0e8);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100498794();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar3 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    local_68 = SVar3.str;
    local_52 = 1;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    local_70 = SVar4.str;
    local_78 = Swift::KeyedDecodingContainer::_decode(local_70,puVar1);
    (**(code **)(lVar2 + 8))(auStack_80 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = local_68;
    param_1[1] = SVar3.bridgeObject;
    param_1[2] = local_70;
    param_1[3] = SVar4.bridgeObject;
    param_1[4] = local_78;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100498794 | FUN_100498794 */

void FUN_100498794(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f1f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f1f8,&DAT_100ed88e8);
  DAT_100fca1b0 = pTVar1;
  return;
}



/* Address: 0x1004987d4 | FUN_1004987d4 */

undefined1  [16] FUN_1004987d4(void)

{
  return ZEXT816(0x100ed88e8);
}



/* Address: 0x1004987e4 | FUN_1004987e4 */

void FUN_1004987e4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1004987f8 | FUN_1004987f8 */

undefined1  [16] FUN_1004987f8(void)

{
  return ZEXT816(0x100ed8960);
}



/* Address: 0x100498808 | thunk_FUN_10049880c */

void thunk_FUN_10049880c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f1d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f1d0,&DAT_100ed88e8);
  DAT_100fca1c0 = pTVar1;
  return;
}



/* Address: 0x10049880c | FUN_10049880c */

void FUN_10049880c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f1d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f1d0,&DAT_100ed88e8);
  DAT_100fca1c0 = pTVar1;
  return;
}



/* Address: 0x10049884c | thunk_FUN_100498850 */

void thunk_FUN_100498850(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f168;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f168,&DAT_100ed88e8);
  DAT_100fca1c8 = pTVar1;
  return;
}



/* Address: 0x100498850 | FUN_100498850 */

void FUN_100498850(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f168;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f168,&DAT_100ed88e8);
  DAT_100fca1c8 = pTVar1;
  return;
}



/* Address: 0x100498890 | thunk_FUN_100498894 */

void thunk_FUN_100498894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f140;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f140,&DAT_100ed88e8);
  DAT_100fca1d0 = pTVar1;
  return;
}



/* Address: 0x100498894 | FUN_100498894 */

void FUN_100498894(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f140;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f140,&DAT_100ed88e8);
  DAT_100fca1d0 = pTVar1;
  return;
}



/* Address: 0x1004988d4 | FUN_1004988d4 */

undefined1  [16] FUN_1004988d4(undefined8 param_1,undefined1 param_2)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  local_60 = param_1;
  local_58 = param_2;
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_48 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_48,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_10049a590();
  puVar6 = &DAT_100ed93d8;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x100498ae4 | FUN_100498ae4 */

undefined1  [16] FUN_100498ae4(undefined8 *param_1)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  uStack_78 = param_1[9];
  local_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_58 = param_1[0xd];
  local_60 = param_1[0xc];
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_48 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_48,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_100492c2c();
  puVar6 = &DAT_100ed8000;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x100498d08 | FUN_100498d08 */

undefined1  [16] FUN_100498d08(undefined8 *param_1)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_48;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  local_70 = param_1[8];
  local_60 = param_1[10];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_48 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_48,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_1004912bc();
  puVar6 = &DAT_100ed8770;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x100498f2c | FUN_100498f2c */

undefined1  [16] FUN_100498f2c(void)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined auStack_60 [8];
  undefined *local_58;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_58 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_58,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_100495b40();
  puVar6 = &DAT_100ed8518;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x100499134 | FUN_100499134 */

undefined1  [16] FUN_100499134(undefined8 *param_1)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_48 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_48,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_1004945f0();
  puVar6 = &DAT_100ed8300;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x100499348 | FUN_100499348 */

undefined1  [16] FUN_100499348(undefined8 *param_1)

{
  Encoding EVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data data;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  Data unaff_x21;
  undefined1 auVar9 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_48;
  
  EVar1 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  local_60 = param_1[4];
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  OVar4.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar4.unknown + 0x18) = 2;
  *(undefined8 *)(OVar4.unknown + 0x10) = 1;
  OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
  local_48 = OVar4.unknown;
  FUN_10049a54c();
  puVar6 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar7 = puVar6;
  FUN_1004701bc();
  Swift::SetAlgebra::_init
            (puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_48,puVar6,puVar7,
             OVar2.unknown,OVar5.unknown);
  Foundation::JSONEncoder::set_outputFormatting
            (pJVar3,(OutputFormatting)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_100490534();
  puVar6 = &DAT_100ed8960;
  data = Foundation::JSONEncoder::_encode();
  if (unaff_x21.unknown == (undefined *)0x0) {
    Encoding::_get_utf8((Encoding)data.unknown);
    unaff_x21 = data;
    puVar8 = puVar6;
    (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
    if (puVar8 == (undefined *)0x0) {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
      puVar8 = &SUB_e200000000000000;
      unaff_x21.unknown = (undefined *)0x7d7b;
    }
    else {
      FUN_10003bf2c(data.unknown,puVar6);
      _swift_release(pJVar3);
    }
  }
  else {
    _swift_release(pJVar3);
  }
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = unaff_x21.unknown;
  return auVar9;
}



/* Address: 0x10049955c | FUN_10049955c */

void FUN_10049955c(void)

{
  FUN_10049a1dc();
  return;
}



/* Address: 0x100499570 | FUN_100499570 */

void FUN_100499570(void)

{
  FUN_100499584();
  return;
}



/* Address: 0x100499584 | FUN_100499584 */

undefined * FUN_100499584(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  local_30 = param_1[4];
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  uVar3 = 0xa0;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &local_50;
  FUN_100499348();
  if (unaff_x21 == 0) {
    local_c0 = 1;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_d0 = puVar2;
    uStack_c8 = uVar3;
    FUN_10049a544(&local_d0);
    *(undefined8 *)(puVar1 + 0x68) = uStack_88;
    *(undefined8 *)(puVar1 + 0x60) = local_90;
    *(undefined8 *)(puVar1 + 0x78) = uStack_78;
    *(undefined8 *)(puVar1 + 0x70) = uStack_80;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_67,uStack_68);
    *(undefined8 *)(puVar1 + 0x80) = local_70;
    *(undefined8 *)(puVar1 + 0x91) = uStack_5f;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_60,uStack_67);
    *(undefined8 *)(puVar1 + 0x28) = uStack_c8;
    *(undefined8 **)(puVar1 + 0x20) = local_d0;
    *(undefined8 *)(puVar1 + 0x38) = local_b8;
    *(undefined8 *)(puVar1 + 0x30) = local_c0;
    *(undefined8 *)(puVar1 + 0x48) = local_a8;
    *(undefined8 *)(puVar1 + 0x40) = uStack_b0;
    *(undefined8 *)(puVar1 + 0x58) = local_98;
    *(undefined8 *)(puVar1 + 0x50) = uStack_a0;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x100499660 | FUN_100499660 */

undefined * FUN_100499660(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_58 = param_1[9];
  local_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  local_40 = param_1[0xc];
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  local_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  uVar3 = 0xa0;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &local_a0;
  FUN_100498ae4();
  if (unaff_x21 == 0) {
    local_110 = 1;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_120 = puVar2;
    uStack_118 = uVar3;
    FUN_10049a544(&local_120);
    *(undefined8 *)(puVar1 + 0x68) = uStack_d8;
    *(undefined8 *)(puVar1 + 0x60) = local_e0;
    *(undefined8 *)(puVar1 + 0x78) = uStack_c8;
    *(undefined8 *)(puVar1 + 0x70) = uStack_d0;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_b7,uStack_b8);
    *(undefined8 *)(puVar1 + 0x80) = local_c0;
    *(undefined8 *)(puVar1 + 0x91) = uStack_af;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_b0,uStack_b7);
    *(undefined8 *)(puVar1 + 0x28) = uStack_118;
    *(undefined8 **)(puVar1 + 0x20) = local_120;
    *(undefined8 *)(puVar1 + 0x38) = local_108;
    *(undefined8 *)(puVar1 + 0x30) = local_110;
    *(undefined8 *)(puVar1 + 0x48) = local_f8;
    *(undefined8 *)(puVar1 + 0x40) = uStack_100;
    *(undefined8 *)(puVar1 + 0x58) = local_e8;
    *(undefined8 *)(puVar1 + 0x50) = uStack_f0;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x100499754 | FUN_100499754 */

undefined * FUN_100499754(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  local_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  uVar3 = 0xa0;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &local_60;
  FUN_100499134();
  if (unaff_x21 == 0) {
    local_d0 = 1;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    local_e0 = puVar2;
    uStack_d8 = uVar3;
    FUN_10049a544(&local_e0);
    *(undefined8 *)(puVar1 + 0x68) = uStack_98;
    *(undefined8 *)(puVar1 + 0x60) = local_a0;
    *(undefined8 *)(puVar1 + 0x78) = uStack_88;
    *(undefined8 *)(puVar1 + 0x70) = uStack_90;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_77,uStack_78);
    *(undefined8 *)(puVar1 + 0x80) = local_80;
    *(undefined8 *)(puVar1 + 0x91) = uStack_6f;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_70,uStack_77);
    *(undefined8 *)(puVar1 + 0x28) = uStack_d8;
    *(undefined8 **)(puVar1 + 0x20) = local_e0;
    *(undefined8 *)(puVar1 + 0x38) = local_c8;
    *(undefined8 *)(puVar1 + 0x30) = local_d0;
    *(undefined8 *)(puVar1 + 0x48) = local_b8;
    *(undefined8 *)(puVar1 + 0x40) = uStack_c0;
    *(undefined8 *)(puVar1 + 0x58) = local_a8;
    *(undefined8 *)(puVar1 + 0x50) = uStack_b0;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x100499830 | FUN_100499830 */

undefined * FUN_100499830(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar3 = *param_1;
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  uVar2 = 0xa0;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_100498f2c();
  if (unaff_x21 == 0) {
    local_a0 = 1;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_78 = 0;
    local_b0 = uVar3;
    uStack_a8 = uVar2;
    FUN_10049a544(&local_b0);
    *(undefined8 *)(puVar1 + 0x68) = uStack_68;
    *(undefined8 *)(puVar1 + 0x60) = local_70;
    *(undefined8 *)(puVar1 + 0x78) = uStack_58;
    *(undefined8 *)(puVar1 + 0x70) = uStack_60;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_47,uStack_48);
    *(undefined8 *)(puVar1 + 0x80) = local_50;
    *(undefined8 *)(puVar1 + 0x91) = uStack_3f;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_40,uStack_47);
    *(undefined8 *)(puVar1 + 0x28) = uStack_a8;
    *(undefined8 *)(puVar1 + 0x20) = local_b0;
    *(undefined8 *)(puVar1 + 0x38) = local_98;
    *(undefined8 *)(puVar1 + 0x30) = local_a0;
    *(undefined8 *)(puVar1 + 0x48) = local_88;
    *(undefined8 *)(puVar1 + 0x40) = uStack_90;
    *(undefined8 *)(puVar1 + 0x58) = local_78;
    *(undefined8 *)(puVar1 + 0x50) = uStack_80;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x100499908 | FUN_100499908 */

/* WARNING: Removing unreachable block (ram,0x000100499a08) */

void FUN_100499908(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar8;
  
  *(long *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cb1a58,&TargetProtocolRequirement_100cb1a80);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cb1a58,&TargetProtocolRequirement_100cb1a78);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  lVar8 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  FUN_100499d54(uVar5,param_4);
  (**(code **)(lVar8 + 0x20))(uVar3,uVar5,lVar2);
  piVar7 = *(int **)(param_6 + 0x40);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100499b6c;
                    /* WARNING: Could not recover jumptable at 0x000100499b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar6,uVar4,param_2,param_3 & 0xcfffffffffffffff,uVar3,param_5,param_6);
  return;
}



/* Address: 0x100499b6c | FUN_100499b6c */

/* WARNING: Removing unreachable block (ram,0x000100499be4) */

void FUN_100499b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar13 = *unaff_x22;
  lVar10 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 200));
  if (unaff_x20 == 0) {
    uVar6 = *(undefined8 *)(lVar13 + 0xa0);
    (**(code **)(*(long *)(lVar13 + 0x78) + 0x50))(uVar6,*(undefined8 *)(lVar13 + 0x70));
    uVar9 = *(undefined8 *)(lVar13 + 0xc0);
    uVar1 = *(undefined8 *)(lVar13 + 0xa8);
    lVar4 = *(long *)(lVar13 + 0xb0);
    uVar11 = *(undefined8 *)(lVar13 + 0xa0);
    lVar3 = *(long *)(lVar13 + 0x90);
    uVar5 = *(undefined8 *)(lVar13 + 0x98);
    uVar12 = *(undefined8 *)(lVar13 + 0x88);
    uVar2 = *(undefined8 *)(lVar13 + 0x70);
    uVar7 = *(undefined8 *)(lVar13 + 0x78);
    (**(code **)(lVar3 + 0x10))(uVar5,uVar11,uVar12);
    uVar14 = uVar7;
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar2,uVar12,0x100cb1a58,&TargetProtocolRequirement_100cb1a68);
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar2,uVar12,0x100cb1a58,&TargetProtocolRequirement_100cb1a70);
    FUN_1005a48ac(lVar13 + 0x10,uVar6,uVar5,0,0,uVar12,uVar14,uVar7);
    (**(code **)(lVar3 + 8))(uVar11,uVar12);
    (**(code **)(lVar4 + 8))(uVar9,uVar1);
    uVar1 = *(undefined8 *)(lVar13 + 0xb8);
    uVar5 = *(undefined8 *)(lVar13 + 0xc0);
    uVar2 = *(undefined8 *)(lVar13 + 0x98);
    uVar7 = *(undefined8 *)(lVar13 + 0xa0);
    puVar8 = *(undefined8 **)(lVar13 + 0x68);
    uVar6 = *(undefined8 *)(lVar13 + 0x18);
    uVar14 = *(undefined8 *)(lVar13 + 0x10);
    uVar11 = *(undefined8 *)(lVar13 + 0x28);
    uVar9 = *(undefined8 *)(lVar13 + 0x20);
    uVar15 = *(undefined8 *)(lVar13 + 0x38);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    puVar8[6] = *(undefined8 *)(lVar13 + 0x40);
    puVar8[3] = uVar11;
    puVar8[2] = uVar9;
    puVar8[5] = uVar15;
    puVar8[4] = uVar12;
    puVar8[1] = uVar6;
    *puVar8 = uVar14;
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  }
  else {
    (**(code **)(*(long *)(lVar13 + 0xb0) + 8))
              (*(undefined8 *)(lVar13 + 0xc0),*(undefined8 *)(lVar13 + 0xa8));
    uVar1 = *(undefined8 *)(lVar13 + 0xb8);
    uVar2 = *(undefined8 *)(lVar13 + 0x98);
    uVar5 = *(undefined8 *)(lVar13 + 0xa0);
    _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xc0));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100499c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100499d54 | FUN_100499d54 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100499e34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100499d54(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  KeyDecodingStrategy KVar2;
  undefined *puVar4;
  JSONEncoder *pJVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data DVar8;
  JSONDecoder *pJVar9;
  Data DVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  long lVar3;
  
  local_70 = param_3;
  local_68 = param_1;
  KVar2 = Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor();
  lVar3 = CONCAT71((int7)((ulong)param_2 >> 8),KVar2.value);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10045afd8();
  }
  pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
  _swift_bridgeObjectRetain(param_2);
  pJVar5 = Foundation::JSONEncoder::init(pJVar5);
  puVar6 = &DAT_100fca1d8;
  FUN_1000037f0(&DAT_100fca1d8,&DAT_100c4f270);
  puVar7 = puVar6;
  FUN_10049a2c8();
  DVar8 = Foundation::JSONEncoder::_encode(pJVar5,puVar7,puVar6,puVar7);
  _swift_bridgeObjectRelease(puVar4);
  _swift_release(pJVar5);
  if (unaff_x21 == 0) {
    pJVar9 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar9,*(undefined4 *)(pJVar9 + 0x30),*(undefined2 *)(pJVar9 + 0x34));
    pJVar9 = Foundation::JSONDecoder::init(pJVar9);
    (**(code **)(lVar11 + 0x68))
              (lVar12,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONDecoder_KeyDecodingStrategy_convertFromSnakeCase_Foundation_JSONDecoder_KeyDecodingStrategy_Type___>_Foundation_JSONDecoder_KeyDecodingStrategy_100ea6a18
               ,lVar3);
    Foundation::JSONDecoder::set_keyDecodingStrategy(pJVar9,(KeyDecodingStrategy)(__int8)lVar12);
    uVar1 = local_70;
    DVar10.unknown = (undefined *)0x0;
    _swift_getAssociatedTypeWitness
              (0,param_4,local_70,0x100cb1a58,&TargetProtocolRequirement_100cb1a78);
    _swift_getAssociatedConformanceWitness
              (param_4,uVar1,DVar10.unknown,0x100cb1a58,&TargetProtocolRequirement_100cb1a60);
    Foundation::JSONDecoder::_decode(pJVar9,DVar10);
    _swift_release(pJVar9);
    FUN_10003bf2c(DVar8.unknown,puVar6);
  }
  return;
}



/* Address: 0x100499f40 | FUN_100499f40 */

undefined1  [16] FUN_100499f40(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 auVar11 [16];
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  
  uVar1 = (uint)param_3 & 0xff;
  if (uVar1 < 3) {
    if (((ulong)param_3 & 0xff) == 0) {
      Swift::_StringGuts::grow(0x42,param_2);
      SVar6.bridgeObject = (void *)0x8000000100da9740;
      SVar6.str = (char *)0xd00000000000001a;
      SVar14.bridgeObject = param_4;
      SVar14.str = param_3;
      Swift::String::append(SVar6,SVar14);
      SVar7.bridgeObject = param_2.unknown;
      SVar7.str = param_1;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar7,SVar15);
      pcVar3 = "No pinboard found with id ";
      pcVar2 = (char *)0xd000000000000026;
    }
    else if (uVar1 == 1) {
      Swift::_StringGuts::grow(0x5c,param_2);
      SVar4.bridgeObject = (void *)0xe900000000000020;
      SVar4.str = (char *)0x6472616f626e6950;
      SVar12.bridgeObject = param_4;
      SVar12.str = param_3;
      Swift::String::append(SVar4,SVar12);
      SVar5.bridgeObject = param_2.unknown;
      SVar5.str = param_1;
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar5,SVar13);
      pcVar3 = "find valid item ids.";
      pcVar2 = (char *)0xd000000000000051;
    }
    else {
      Swift::_StringGuts::grow(0x46,param_2);
      SVar8.bridgeObject = (void *)0x8000000100da9680;
      SVar8.str = (char *)0xd000000000000020;
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar8,SVar16);
      SVar9.bridgeObject = param_2.unknown;
      SVar9.str = param_1;
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3;
      Swift::String::append(SVar9,SVar17);
      pcVar3 = "m found with id ";
      pcVar2 = (char *)0xd000000000000024;
    }
    SVar10.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
    SVar10.str = pcVar2;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar10,SVar18);
    param_1 = (char *)0x0;
    param_2.unknown = (undefined *)0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_2.unknown);
  }
  auVar11._8_8_ = param_2.unknown;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Address: 0x10049a0f0 | FUN_10049a0f0 */

void FUN_10049a0f0(void)

{
  undefined8 *unaff_x20;
  
  FUN_100499f40(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10049a0fc | FUN_10049a0fc */

undefined * FUN_10049a0fc(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x21;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar2 = *param_1;
  uVar3 = (ulong)*(byte *)(param_1 + 1);
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_1004988d4();
  if (unaff_x21 == 0) {
    local_a0 = 1;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    local_78 = 0;
    local_b0 = uVar2;
    uStack_a8 = uVar3;
    FUN_10049a544(&local_b0);
    *(undefined8 *)(puVar1 + 0x68) = uStack_68;
    *(undefined8 *)(puVar1 + 0x60) = local_70;
    *(undefined8 *)(puVar1 + 0x78) = uStack_58;
    *(undefined8 *)(puVar1 + 0x70) = uStack_60;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_47,uStack_48);
    *(undefined8 *)(puVar1 + 0x80) = local_50;
    *(undefined8 *)(puVar1 + 0x91) = uStack_3f;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_40,uStack_47);
    *(ulong *)(puVar1 + 0x28) = uStack_a8;
    *(undefined8 *)(puVar1 + 0x20) = local_b0;
    *(undefined8 *)(puVar1 + 0x38) = local_98;
    *(undefined8 *)(puVar1 + 0x30) = local_a0;
    *(undefined8 *)(puVar1 + 0x48) = local_88;
    *(undefined8 *)(puVar1 + 0x40) = uStack_90;
    *(undefined8 *)(puVar1 + 0x58) = local_78;
    *(undefined8 *)(puVar1 + 0x50) = uStack_80;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x10049a1dc | FUN_10049a1dc */

undefined * FUN_10049a1dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_38 = param_1[9];
  local_40 = param_1[8];
  local_30 = param_1[10];
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  puVar1 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  uVar3 = 0xa0;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &local_80;
  FUN_100498d08();
  if (unaff_x21 == 0) {
    local_f0 = 1;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_100 = puVar2;
    uStack_f8 = uVar3;
    FUN_10049a544(&local_100);
    *(undefined8 *)(puVar1 + 0x68) = uStack_b8;
    *(undefined8 *)(puVar1 + 0x60) = local_c0;
    *(undefined8 *)(puVar1 + 0x78) = uStack_a8;
    *(undefined8 *)(puVar1 + 0x70) = uStack_b0;
    *(ulong *)(puVar1 + 0x88) = CONCAT71(uStack_97,uStack_98);
    *(undefined8 *)(puVar1 + 0x80) = local_a0;
    *(undefined8 *)(puVar1 + 0x91) = uStack_8f;
    *(ulong *)(puVar1 + 0x89) = CONCAT17(uStack_90,uStack_97);
    *(undefined8 *)(puVar1 + 0x28) = uStack_f8;
    *(undefined8 **)(puVar1 + 0x20) = local_100;
    *(undefined8 *)(puVar1 + 0x38) = local_e8;
    *(undefined8 *)(puVar1 + 0x30) = local_f0;
    *(undefined8 *)(puVar1 + 0x48) = local_d8;
    *(undefined8 *)(puVar1 + 0x40) = uStack_e0;
    *(undefined8 *)(puVar1 + 0x58) = local_c8;
    *(undefined8 *)(puVar1 + 0x50) = uStack_d0;
  }
  else {
    *(undefined8 *)(puVar1 + 0x10) = 0;
    _swift_release(puVar1);
  }
  return puVar1;
}



/* Address: 0x10049a2c8 | FUN_10049a2c8 */

void FUN_10049a2c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fca1e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fca1d8;
  FUN_100005c24(&DAT_100fca1d8,&DAT_100c4f270);
  puVar2 = puVar1;
  FUN_10049a340();
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,puVar1,
             &local_30);
  DAT_100fca1e0 = puVar3;
  return;
}



/* Address: 0x10049a340 | FUN_10049a340 */

void FUN_10049a340(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca1e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55480;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55480,&DAT_100edd000);
  DAT_100fca1e8 = pTVar1;
  return;
}



/* Address: 0x10049a380 | thunk_FUN_10049a3c4 */

undefined8 * thunk_FUN_10049a3c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10049a384(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x10049a384 | FUN_10049a384 */

void FUN_10049a384(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 7) {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x10049a39c | FUN_10049a39c */

void FUN_10049a39c(undefined8 *param_1)

{
  FUN_10049a3ac(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10049a3ac | FUN_10049a3ac */

void FUN_10049a3ac(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 7) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x10049a3c4 | FUN_10049a3c4 */

undefined8 * FUN_10049a3c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10049a384(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x10049a40c | FUN_10049a40c */

undefined8 * FUN_10049a40c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10049a384(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10049a3ac(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x10049a460 | FUN_10049a460 */

undefined8 * FUN_10049a460(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10049a3ac(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x10049a4a4 | FUN_10049a4a4 */

int FUN_10049a4a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10049a4ec | FUN_10049a4ec */

void FUN_10049a4ec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    param_1[1] = 0;
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x10049a530 | FUN_10049a530 */

undefined1  [16] FUN_10049a530(void)

{
  return ZEXT816(0x100ed8ab0);
}



/* Address: 0x10049a540 | thunk_FUN_100491028 */

void thunk_FUN_100491028(void)

{
  FUN_100491028();
  return;
}


