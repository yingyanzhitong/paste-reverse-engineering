/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10056dc80 | FUN_10056dc80 */

void FUN_10056dc80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0590 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5aed8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5aed8,&DAT_100ee0660);
  DAT_100fd0590 = pTVar1;
  return;
}



/* Address: 0x10056dcc0 | FUN_10056dcc0 */

void FUN_10056dcc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a7e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a7e0,&DAT_100ee0530);
  DAT_100fd0598 = pTVar1;
  return;
}



/* Address: 0x10056dd00 | FUN_10056dd00 */

/* WARNING: Removing unreachable block (ram,0x00010056de88) */
/* WARNING: Removing unreachable block (ram,0x00010056dde4) */

undefined8 FUN_10056dd00(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 local_78 [3];
  undefined1 local_51;
  
  puVar2 = &DAT_100fd07f8;
  FUN_1000f7830(&DAT_100fd07f8,&DAT_100c5b080);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar1);
  FUN_10056dc80();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_10056f228();
    puVar4 = &DAT_100ee0530;
    Swift::KeyedDecodingContainer::_decode
              (local_78,&DAT_100ee0530,&local_51,puVar2,&DAT_100ee0530,KVar3.unknown);
    local_51 = 1;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_78,&DAT_100edcda0,&local_51,puVar2,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_78[0] = uVar1;
  }
  return local_78[0];
}



/* Address: 0x10056deb4 | FUN_10056deb4 */

void FUN_10056deb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ae88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ae88,&DAT_100ee05d0);
  DAT_100fd05a8 = pTVar1;
  return;
}



/* Address: 0x10056def4 | FUN_10056def4 */

undefined4 FUN_10056def4(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x7365756c6176 || param_2 != &DAT_e600000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7365756c6176,(_StringGuts)0xe600000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x6c61746f74) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c61746f74,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x65726f4d736168) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x65726f4d736168,(_StringGuts)0xe700000000000000,expecting);
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



/* Address: 0x10056e000 | FUN_10056e000 */

/* WARNING: Removing unreachable block (ram,0x00010056e180) */
/* WARNING: Removing unreachable block (ram,0x00010056e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010056e110) */

undefined8 FUN_10056e000(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar2 = &DAT_100fd07f0;
  FUN_1000f7830(&DAT_100fd07f0,&DAT_100c5b078);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar1);
  FUN_10056deb4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_61 = 0;
    puVar4 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3,&local_61,puVar2,puVar3,puVar4);
    local_62 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_62,puVar2);
    local_63 = 2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_63,puVar2);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = uVar1;
  }
  return local_58;
}



/* Address: 0x10056e1f8 | thunk_FUN_10056e1fc */

void thunk_FUN_10056e1fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a470;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a470,&DAT_100ee0250);
  DAT_100fd05b0 = pTVar1;
  return;
}



/* Address: 0x10056e1fc | FUN_10056e1fc */

void FUN_10056e1fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a470;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a470,&DAT_100ee0250);
  DAT_100fd05b0 = pTVar1;
  return;
}



/* Address: 0x10056e23c | thunk_FUN_10056e240 */

void thunk_FUN_10056e240(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a528;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a528,&DAT_100ee02e8);
  DAT_100fd05b8 = pTVar1;
  return;
}



/* Address: 0x10056e240 | FUN_10056e240 */

void FUN_10056e240(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a528;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a528,&DAT_100ee02e8);
  DAT_100fd05b8 = pTVar1;
  return;
}



/* Address: 0x10056e280 | thunk_FUN_10056e284 */

void thunk_FUN_10056e284(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a5e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a5e0,&DAT_100ee0408);
  DAT_100fd05c0 = pTVar1;
  return;
}



/* Address: 0x10056e284 | FUN_10056e284 */

void FUN_10056e284(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a5e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a5e0,&DAT_100ee0408);
  DAT_100fd05c0 = pTVar1;
  return;
}



/* Address: 0x10056e2c4 | thunk_FUN_10056e2c8 */

void thunk_FUN_10056e2c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a698;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a698,&DAT_100ee0430);
  DAT_100fd05c8 = pTVar1;
  return;
}



/* Address: 0x10056e2c8 | FUN_10056e2c8 */

void FUN_10056e2c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a698;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a698,&DAT_100ee0430);
  DAT_100fd05c8 = pTVar1;
  return;
}



/* Address: 0x10056e308 | thunk_FUN_10056e30c */

void thunk_FUN_10056e30c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a750;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a750,&DAT_100ee0380);
  DAT_100fd05d0 = pTVar1;
  return;
}



/* Address: 0x10056e30c | FUN_10056e30c */

void FUN_10056e30c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a750;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a750,&DAT_100ee0380);
  DAT_100fd05d0 = pTVar1;
  return;
}



/* Address: 0x10056e34c | thunk_FUN_10056e350 */

void thunk_FUN_10056e350(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a808,&DAT_100ee0530);
  DAT_100fd05d8 = pTVar1;
  return;
}



/* Address: 0x10056e350 | FUN_10056e350 */

void FUN_10056e350(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a808,&DAT_100ee0530);
  DAT_100fd05d8 = pTVar1;
  return;
}



/* Address: 0x10056e390 | thunk_FUN_10056e394 */

void thunk_FUN_10056e394(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a8c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a8c0,&DAT_100ee04b0);
  DAT_100fd05e0 = pTVar1;
  return;
}



/* Address: 0x10056e394 | FUN_10056e394 */

void FUN_10056e394(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a8c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a8c0,&DAT_100ee04b0);
  DAT_100fd05e0 = pTVar1;
  return;
}



/* Address: 0x10056e3d4 | thunk_FUN_10056e3d8 */

void thunk_FUN_10056e3d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a700;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a700,&DAT_100ee0380);
  DAT_100fd05e8 = pTVar1;
  return;
}



/* Address: 0x10056e3d8 | FUN_10056e3d8 */

void FUN_10056e3d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a700;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a700,&DAT_100ee0380);
  DAT_100fd05e8 = pTVar1;
  return;
}



/* Address: 0x10056e418 | thunk_FUN_10056e41c */

void thunk_FUN_10056e41c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a728,&DAT_100ee0380);
  DAT_100fd05f0 = pTVar1;
  return;
}



/* Address: 0x10056e41c | FUN_10056e41c */

void FUN_10056e41c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a728,&DAT_100ee0380);
  DAT_100fd05f0 = pTVar1;
  return;
}



/* Address: 0x10056e45c | thunk_FUN_10056e460 */

void thunk_FUN_10056e460(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a6c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a6c0,&DAT_100ee0380);
  DAT_100fd05f8 = pTVar1;
  return;
}



/* Address: 0x10056e460 | FUN_10056e460 */

void FUN_10056e460(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd05f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a6c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a6c0,&DAT_100ee0380);
  DAT_100fd05f8 = pTVar1;
  return;
}



/* Address: 0x10056e4a0 | thunk_FUN_10056e4a4 */

void thunk_FUN_10056e4a4(void)

{
  FUN_10056e4a4();
  return;
}



/* Address: 0x10056e4a4 | FUN_10056e4a4 */

void FUN_10056e4a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a870,&DAT_100ee04b0);
  DAT_100fd0600 = pTVar1;
  return;
}



/* Address: 0x10056e4e4 | thunk_FUN_10056e4e8 */

void thunk_FUN_10056e4e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a898;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a898,&DAT_100ee04b0);
  DAT_100fd0608 = pTVar1;
  return;
}



/* Address: 0x10056e4e8 | FUN_10056e4e8 */

void FUN_10056e4e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a898;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a898,&DAT_100ee04b0);
  DAT_100fd0608 = pTVar1;
  return;
}



/* Address: 0x10056e528 | thunk_FUN_10056e52c */

void thunk_FUN_10056e52c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a830;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a830,&DAT_100ee04b0);
  DAT_100fd0610 = pTVar1;
  return;
}



/* Address: 0x10056e52c | FUN_10056e52c */

void FUN_10056e52c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a830;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a830,&DAT_100ee04b0);
  DAT_100fd0610 = pTVar1;
  return;
}



/* Address: 0x10056e56c | FUN_10056e56c */

undefined1  [16] FUN_10056e56c(void)

{
  return ZEXT816(0x100ee0250);
}



/* Address: 0x10056e57c | FUN_10056e57c */

void FUN_10056e57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\x01') {
    _swift_bridgeObjectRetain(param_4);
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x10056e5b0 | FUN_10056e5b0 */

void FUN_10056e5b0(undefined8 *param_1)

{
  FUN_10054aa44(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x10056e5c4 | FUN_10056e5c4 */

undefined8 * FUN_10056e5c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_10056e57c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x10056e624 | FUN_10056e624 */

undefined8 * FUN_10056e624(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_10056e57c(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_10054aa44(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x10056e694 | FUN_10056e694 */

undefined8 * FUN_10056e694(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_10054aa44(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x10056e6dc | FUN_10056e6dc */

undefined1  [16] FUN_10056e6dc(void)

{
  return ZEXT816(0x100ee02e8);
}



/* Address: 0x10056e6ec | FUN_10056e6ec */

undefined1  [16] FUN_10056e6ec(void)

{
  return ZEXT816(0x100ee0308);
}



/* Address: 0x10056e6fc | FUN_10056e6fc */

void FUN_10056e6fc(undefined8 *param_1)

{
  FUN_10054aa44(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  _swift_bridgeObjectRelease(param_1[6]);
  _swift_bridgeObjectRelease(param_1[8]);
  _swift_bridgeObjectRelease(param_1[9]);
  return;
}



/* Address: 0x10056e740 | FUN_10056e740 */

undefined8 * FUN_10056e740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *(undefined1 *)(param_2 + 4);
  FUN_10056e57c(uVar4,uVar1,uVar5,uVar2,uVar3);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar3;
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  param_1[7] = param_2[7];
  uVar4 = param_2[9];
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x10056e7ec | FUN_10056e7ec */

undefined8 * FUN_10056e7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  uVar10 = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  uVar8 = *(undefined1 *)(param_2 + 4);
  FUN_10056e57c(uVar10,uVar4,uVar1,uVar5,uVar8);
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  *param_1 = uVar10;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar9 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar8;
  FUN_10054aa44(uVar2,uVar6,uVar3,uVar7,uVar9);
  param_1[5] = param_2[5];
  uVar10 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[7] = param_2[7];
  uVar10 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  uVar10 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  return param_1;
}



/* Address: 0x10056e8c0 | FUN_10056e8c0 */

undefined8 * FUN_10056e8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar2 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar1;
  FUN_10054aa44(uVar3,uVar5,uVar4,uVar6,uVar2);
  uVar5 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(param_1[8]);
  uVar5 = param_1[9];
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x10056e938 | FUN_10056e938 */

int FUN_10056e938(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10056e980 | FUN_10056e980 */

void FUN_10056e980(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[6] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10056e9d4 | FUN_10056e9d4 */

undefined1  [16] FUN_10056e9d4(void)

{
  return ZEXT816(0x100ee0380);
}



/* Address: 0x10056e9e4 | FUN_10056e9e4 */

undefined1  [16] FUN_10056e9e4(void)

{
  return ZEXT816(0x100ee0408);
}



/* Address: 0x10056e9f4 | FUN_10056e9f4 */

undefined1  [16] FUN_10056e9f4(void)

{
  return ZEXT816(0x100ee0430);
}



/* Address: 0x10056ea04 | FUN_10056ea04 */

void FUN_10056ea04(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x10056ea2c | FUN_10056ea2c */

undefined8 * FUN_10056ea2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10056ea70 | FUN_10056ea70 */

undefined8 * FUN_10056ea70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10056eae4 | FUN_10056eae4 */

undefined8 * FUN_10056eae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10056eb38 | FUN_10056eb38 */

undefined1  [16] FUN_10056eb38(void)

{
  return ZEXT816(0x100ee04b0);
}



/* Address: 0x10056eb48 | thunk_FUN_10056eb4c */

undefined8 * thunk_FUN_10056eb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10056eb4c | FUN_10056eb4c */

undefined8 * FUN_10056eb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10056eb80 | FUN_10056eb80 */

undefined8 * FUN_10056eb80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Address: 0x10056ebdc | FUN_10056ebdc */

void FUN_10056ebdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10056ebf0 | FUN_10056ebf0 */

undefined8 * FUN_10056ebf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10056ec34 | FUN_10056ec34 */

int FUN_10056ec34(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10056ec7c | FUN_10056ec7c */

void FUN_10056ec7c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x12) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x12) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10056ecbc | FUN_10056ecbc */

undefined1  [16] FUN_10056ecbc(void)

{
  return ZEXT816(0x100ee0530);
}



/* Address: 0x10056eccc | FUN_10056eccc */

undefined1  [16] FUN_10056eccc(void)

{
  return ZEXT816(0x100ee05d0);
}



/* Address: 0x10056ecdc | FUN_10056ecdc */

undefined1  [16] FUN_10056ecdc(void)

{
  return ZEXT816(0x100ee0660);
}


