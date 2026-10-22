/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004e4bd4 | FUN_1004e4bd4 */

String FUN_1004e4bd4(void)

{
  String SVar1;
  
  FUN_1004e8330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004e4bfc | FUN_1004e4bfc */

void FUN_1004e4bfc(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x1004e4c30 | FUN_1004e4c30 */

void FUN_1004e4c30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  long extraout_x8;
  long lVar1;
  
  FUN_1000f7830(param_4,param_5);
  lVar1 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*param_6)();
  Swift::Encoder::_container();
  (**(code **)(lVar1 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,param_4);
  return;
}



/* Address: 0x1004e4d00 | FUN_1004e4d00 */

void FUN_1004e4d00(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb28e8,
             &TargetProtocolRequirement_100cb2920);
                    /* WARNING: Could not recover jumptable at 0x0001004e4d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Address: 0x1004e4d54 | FUN_1004e4d54 */

void FUN_1004e4d54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  FUN_1004e4dd4(0,param_5,param_6);
  iVar1 = *(int *)(lVar2 + 0x24);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
                    /* WARNING: Could not recover jumptable at 0x0001004e4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + (long)iVar1,param_4,lVar2);
  return;
}



/* Address: 0x1004e4dd4 | FUN_1004e4dd4 */

void FUN_1004e4dd4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e4de0 | FUN_1004e4de0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e4e1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004e4de0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1004e4e44 | thunk_FUN_1004e4de0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e4e1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_1004e4de0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1004e4e48 | FUN_1004e4e48 */

undefined1  [16] FUN_1004e4e48(char param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 == '\0') {
    auVar3._8_8_ = &DAT_e700000000000000;
    auVar3._0_8_ = 0x6370726e6f736a;
    return auVar3;
  }
  uVar1 = 0x646f6874656d;
  if (param_1 != '\x01') {
    uVar1 = 0x736d61726170;
  }
  auVar2._8_8_ = &DAT_e600000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1004e4e98 | FUN_1004e4e98 */

void FUN_1004e4e98(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c532c8,param_1);
  (extension_Swift)::Swift::RawRepresentable::_get_hashValue();
  return;
}



/* Address: 0x1004e4ee4 | FUN_1004e4ee4 */

void FUN_1004e4ee4(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c532c8);
  (extension_Swift)::Swift::RawRepresentable::_hash(param_1);
  return;
}



/* Address: 0x1004e4f34 | FUN_1004e4f34 */

void FUN_1004e4f34(__int64 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c532c8);
  (extension_Swift)::Swift::RawRepresentable::__rawHashValue(param_1);
  return;
}



/* Address: 0x1004e4f84 | FUN_1004e4f84 */

void FUN_1004e4f84(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004e4de0(uVar1,param_2[1],*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004e4fb8 | FUN_1004e4fb8 */

void FUN_1004e4fb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1004e4fc4(param_1,param_2,thunk_FUN_1004e4e48);
  return;
}



/* Address: 0x1004e4fc4 | FUN_1004e4fc4 */

void FUN_1004e4fc4(ulong *param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *unaff_x20;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  uVar1 = (ulong)*unaff_x20;
  (*param_4)(uVar1,uVar2,*(undefined8 *)(param_2 + 0x18));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1004e4ff4 | FUN_1004e4ff4 */

void FUN_1004e4ff4(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1004e4e48(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1004e5000 | FUN_1004e5000 */

void FUN_1004e5000(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  thunk_FUN_1004e4de0(param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                      *(undefined8 *)(param_4 + 0x18));
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1004e502c | FUN_1004e502c */

void FUN_1004e502c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1000f77f0(uVar1,*(undefined8 *)(param_3 + 0x18));
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004e5054 | FUN_1004e5054 */

String FUN_1004e5054(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53384,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004e5088 | FUN_1004e5088 */

String FUN_1004e5088(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53384,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004e50bc | FUN_1004e50bc */

void FUN_1004e50bc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  KeyedEncodingContainer KVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  uStack_78 = *(undefined8 *)(param_2 + 0x10);
  local_80 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0xff;
  FUN_1004e52c8(0xff);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53384,uVar3);
  KVar4 = Swift::KeyedEncodingContainer::typeMetadataAccessor();
  lVar7 = *(long *)(KVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_80 - extraout_x8;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(0x302e32,0xe300000000000000,&local_51,KVar4.unknown);
  uVar2 = uStack_78;
  uVar3 = local_80;
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_52,KVar4.unknown);
    puVar5 = (undefined *)0x0;
    _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
    if (puVar5 == &DAT_100edb3f8) {
      (**(code **)(lVar7 + 8))(lVar6,KVar4.unknown);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x24);
      local_53 = 2;
      _swift_getAssociatedConformanceWitness
                (uVar3,uVar2,puVar5,0x100cb28e8,&TargetProtocolRequirement_100cb2910);
      Swift::KeyedEncodingContainer::_encode
                ((long)unaff_x20 + (long)iVar1,&local_53,KVar4.unknown,puVar5,uVar3);
      (**(code **)(lVar7 + 8))(lVar6,KVar4.unknown);
    }
  }
  else {
    (**(code **)(lVar7 + 8))(lVar6,KVar4.unknown);
  }
  return;
}



/* Address: 0x1004e52c8 | FUN_1004e52c8 */

void FUN_1004e52c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e52d4 | FUN_1004e52d4 */

/* WARNING: Removing unreachable block (ram,0x0001004e57c8) */
/* WARNING: Removing unreachable block (ram,0x0001004e5758) */
/* WARNING: Removing unreachable block (ram,0x0001004e57a8) */
/* WARNING: Removing unreachable block (ram,0x0001004e5960) */
/* WARNING: Removing unreachable block (ram,0x0001004e5988) */
/* WARNING: Removing unreachable block (ram,0x0001004e5970) */
/* WARNING: Removing unreachable block (ram,0x0001004e59f8) */
/* WARNING: Removing unreachable block (ram,0x0001004e5a08) */
/* WARNING: Removing unreachable block (ram,0x0001004e5704) */
/* WARNING: Removing unreachable block (ram,0x0001004e5a94) */
/* WARNING: Removing unreachable block (ram,0x0001004e5644) */

void FUN_1004e52d4(undefined8 param_1,long param_2,void *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  Optional OVar3;
  bool bVar4;
  DecodingError DVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar16;
  long unaff_x21;
  void *pvVar17;
  code *pcVar18;
  String *pSVar19;
  String SVar20;
  String SStack_120;
  long local_110;
  String *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  void *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [24];
  long local_78;
  long lStack_70;
  
  lVar6 = 0xff;
  local_e8 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_d8 = CONCAT71(extraout_var,OVar3.value);
  local_e0 = *(long *)(lStack_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e0 + 0x40));
  lVar15 = (long)&SStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  local_f8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_00;
  local_c0 = *(long *)(lVar6 + -8);
  local_d0 = lVar15;
  local_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_01;
  uVar7 = 0xff;
  local_f0 = lVar15;
  FUN_1004e52c8(0xff,param_3,param_4);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53384,uVar7);
  local_b0 = (undefined *)Swift::KeyedDecodingContainer::typeMetadataAccessor();
  local_98 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  lVar8 = 0;
  local_c8 = param_4;
  local_b8 = param_3;
  FUN_1004e4dd4(0,param_3,param_4);
  pvVar17 = *(void **)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)pvVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_container();
  lVar2 = local_a0;
  lVar6 = local_a8;
  puVar12 = local_b0;
  if (unaff_x21 == 0) {
    local_90[0] = 0;
    SStack_120.bridgeObject = pvVar17;
    local_110 = lVar8;
    local_108 = (String *)(lVar15 - extraout_x8_02);
    SVar20 = Swift::KeyedDecodingContainer::_decode(local_90,local_b0);
    _Var13.unknown = SVar20.bridgeObject;
    if (SVar20.str == (undefined *)0x302e32 && _Var13.unknown == (undefined *)0xe300000000000000) {
      _swift_bridgeObjectRelease(_Var13.unknown);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar20.str,_Var13,(_StringComparisonResult)0x32);
      _swift_bridgeObjectRelease(_Var13.unknown);
      if (!bVar4) {
        local_90[0] = 0;
        DVar5 = Swift::DecodingError::typeMetadataAccessor();
        puVar14 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(DVar5.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        puVar9 = 
        PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
        ;
        _swift_getWitnessTable
                  (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                   ,puVar12);
        Swift::DecodingError::_dataCorruptedError
                  (puVar14,local_90,lVar15,0xd000000000000018,0x8000000100dab550,puVar12,puVar9);
        _swift_willThrow();
        (**(code **)(local_98 + 8))(lVar15,puVar12);
        goto LAB_1004e565c;
      }
    }
    pvVar17 = local_b8;
    local_90[0] = 1;
    SVar20 = Swift::KeyedDecodingContainer::_decode(local_90,puVar12);
    local_a8 = lVar15;
    *local_108 = SVar20;
    lVar10 = lVar2;
    _swift_conformsToProtocol(lVar2,&TargetProtocolDescriptor_100cb2678);
    uVar7 = local_c8;
    _swift_getAssociatedConformanceWitness
              (local_c8,pvVar17,lVar2,0x100cb28e8,&TargetProtocolRequirement_100cb2908);
    lVar15 = local_a8;
    lVar8 = local_d0;
    if (lVar10 == 0) {
      local_90[0] = 2;
      local_b8 = SVar20.bridgeObject;
      Swift::KeyedDecodingContainer::_decode(lVar6,lVar2,local_90,puVar12,lVar2,uVar7);
      lVar10 = local_c0;
      (**(code **)(local_98 + 8))(lVar15,puVar12);
      (**(code **)(lVar10 + 0x38))(lVar6,0,1,lVar2);
      lVar8 = local_100;
      pcVar16 = *(code **)(lVar10 + 0x20);
      (*pcVar16)(local_100,lVar6,lVar2);
      pSVar19 = local_108;
      lVar6 = local_110;
      (*pcVar16)((long)&local_108->str + (long)*(int *)(local_110 + 0x24),lVar8,lVar2);
    }
    else {
      local_90[0] = 2;
      Swift::KeyedDecodingContainer::_decodeIfPresent(local_d0,lVar2,local_90,puVar12,lVar2);
      lVar1 = local_c0;
      lVar15 = local_f8;
      (**(code **)(local_e0 + 0x20))(local_f8,lVar8,lStack_d8);
      pcVar16 = *(code **)(lVar1 + 0x30);
      lVar6 = lVar15;
      (*pcVar16)(lVar15,1,lVar2);
      if ((int)lVar6 == 1) {
        pcVar18 = *(code **)(lVar10 + 8);
        local_78 = lVar2;
        puVar11 = local_90;
        lStack_70 = lVar10;
        FUN_10000cbb0(puVar11);
        (*pcVar18)(puVar11,lVar2,lVar10);
        (**(code **)(local_98 + 8))(local_a8,puVar12);
        puVar12 = &DAT_100fcc8b8;
        FUN_1000f7830(&DAT_100fcc8b8,&DAT_100c52a38);
        lVar8 = local_f0;
        _swift_dynamicCast(local_f0,local_90,puVar12,lVar2,7);
        lVar10 = lVar15;
        (*pcVar16)(lVar15,1,lVar2);
        lVar6 = local_110;
        if ((int)lVar10 != 1) {
          (**(code **)(local_e0 + 8))(lVar15,lStack_d8);
        }
      }
      else {
        (**(code **)(local_98 + 8))(local_a8,puVar12);
        lVar8 = local_f0;
        (**(code **)(lVar1 + 0x20))(local_f0,lVar15,lVar2);
        lVar6 = local_110;
      }
      pSVar19 = local_108;
      (**(code **)(lVar1 + 0x20))((long)&local_108->str + (long)*(int *)(lVar6 + 0x24),lVar8,lVar2);
    }
    pvVar17 = SStack_120.bridgeObject;
    (**(code **)((long)SStack_120.bridgeObject + 0x10))(local_e8,pSVar19,lVar6);
    FUN_100004594(param_2);
    (**(code **)((long)pvVar17 + 8))(pSVar19,lVar6);
  }
  else {
LAB_1004e565c:
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004e5aa4 | FUN_1004e5aa4 */

bool FUN_1004e5aa4(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar2)) {
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
    lVar4 = 0;
    FUN_1004e4dd4(0,param_3,param_4);
    iVar1 = *(int *)(lVar4 + 0x24);
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,uVar3,0x100cb28e8,&TargetProtocolRequirement_100cb2918);
    bVar2 = Swift::Equatable::___infix
                      ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,uVar3,
                       *(undefined8 *)(param_4 + 8));
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Address: 0x1004e5b7c | FUN_1004e5b7c */

void FUN_1004e5b7c(Hasher param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
  _swift_getAssociatedConformanceWitness
            (uVar2,uVar1,uVar3,0x100cb28e8,&TargetProtocolRequirement_100cb2918);
  Swift::Hashable::hash(param_1);
  return;
}



/* Address: 0x1004e5c14 | FUN_1004e5c14 */

void FUN_1004e5c14(undefined8 param_1)

{
  FUN_1004e5c20(param_1,FUN_1004e5b7c);
  return;
}



/* Address: 0x1004e5c20 | FUN_1004e5c20 */

void FUN_1004e5c20(undefined8 param_1,code *param_2)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  (*param_2)(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004e5c70 | thunk_FUN_1004e5c14 */

void thunk_FUN_1004e5c14(void)

{
  FUN_1004e5c14();
  return;
}



/* Address: 0x1004e5c74 | thunk_FUN_1004e5b7c */

void thunk_FUN_1004e5b7c(void)

{
  FUN_1004e5b7c();
  return;
}



/* Address: 0x1004e5c78 | FUN_1004e5c78 */

void FUN_1004e5c78(void)

{
  FUN_1004e5c84();
  return;
}



/* Address: 0x1004e5c84 | FUN_1004e5c84 */

void FUN_1004e5c84(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  (*param_4)(HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004e5cd0 | FUN_1004e5cd0 */

void FUN_1004e5cd0(undefined8 param_1,long param_2)

{
  FUN_1004e52d4(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1004e5cec | FUN_1004e5cec */

void FUN_1004e5cec(void)

{
  FUN_1004e50bc();
  return;
}



/* Address: 0x1004e5d00 | FUN_1004e5d00 */

void FUN_1004e5d00(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1004e5aa4(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x1004e5d0c | FUN_1004e5d0c */

undefined1  [16] FUN_1004e5d0c(undefined8 param_1,long param_2)

{
  undefined1 local_40 [16];
  
  (**(code **)(param_2 + 0x40))();
  FUN_1004e4d54(local_40);
  return local_40;
}



/* Address: 0x1004e5d58 | FUN_1004e5d58 */

void FUN_1004e5d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb28e8,&TargetProtocolRequirement_100cb2920);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_3;
  lVar3 = param_4;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffa0 + -extraout_x8,param_2,lVar1);
  FUN_1004e4d54(param_1,uVar2,lVar3,&stack0xffffffffffffffa0 + -extraout_x8,param_3,param_4);
  return;
}



/* Address: 0x1004e5e34 | thunk_FUN_1004e5e38 */

void thunk_FUN_1004e5e38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52ae0,&DAT_100edb3f8);
  DAT_100fcc8d8 = pTVar1;
  return;
}



/* Address: 0x1004e5e38 | FUN_1004e5e38 */

void FUN_1004e5e38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52ae0,&DAT_100edb3f8);
  DAT_100fcc8d8 = pTVar1;
  return;
}



/* Address: 0x1004e5e78 | FUN_1004e5e78 */

void FUN_1004e5e78(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52be0,param_1);
  return;
}



/* Address: 0x1004e5e88 | thunk_FUN_1004e5e8c */

void thunk_FUN_1004e5e8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51f08,&DAT_100edaca0);
  DAT_100fcc8e0 = pTVar1;
  return;
}



/* Address: 0x1004e5e8c | FUN_1004e5e8c */

void FUN_1004e5e8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51f08,&DAT_100edaca0);
  DAT_100fcc8e0 = pTVar1;
  return;
}



/* Address: 0x1004e5ecc | FUN_1004e5ecc */

void FUN_1004e5ecc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52cd0,param_1);
  return;
}



/* Address: 0x1004e5edc | FUN_1004e5edc */

void FUN_1004e5edc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52d88,param_1);
  return;
}



/* Address: 0x1004e5eec | FUN_1004e5eec */

undefined1  [16] FUN_1004e5eec(void)

{
  return ZEXT816(0x100edb3f8);
}



/* Address: 0x1004e5efc | FUN_1004e5efc */

void FUN_1004e5efc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c52e00;
  puStack_30 = &DAT_100c52e18;
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1004e5f8c | FUN_1004e5f8c */

long * FUN_1004e5f8c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  lVar8 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && (*(uint *)(lVar8 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar5 - 0x29 | uVar5) - *(long *)(lVar8 + 0x40)) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    FUN_1004a7398(lVar1,lVar2,(char)lVar3);
    *param_1 = lVar1;
    param_1[1] = lVar2;
    *(char *)(param_1 + 2) = (char)lVar3;
    uVar6 = (ulong)param_1 & 0xfffffffffffffff8;
    uVar5 = (ulong)param_2 & 0xfffffffffffffff8;
    *(undefined8 *)(uVar6 + 0x18) = *(undefined8 *)(uVar5 + 0x18);
    *(undefined8 *)(uVar6 + 0x20) = *(undefined8 *)(uVar5 + 0x20);
    pcVar7 = *(code **)(lVar8 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar7)(uVar6 + 0x28,uVar5 + 0x28,lVar4);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004e6090 | FUN_1004e6090 */

void FUN_1004e6090(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  FUN_1004dc818(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_bridgeObjectRelease(*(undefined8 *)(((ulong)param_1 & 0xfffffffffffffff8) + 0x20));
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001004e6100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (((ulong)param_1 & 0xfffffffffffffff8) + uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff),
             lVar1);
  return;
}



/* Address: 0x1004e6104 | FUN_1004e6104 */

undefined8 * FUN_1004e6104(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar4,uVar1,uVar2);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  uVar5 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar6 = (ulong)param_2 & 0xfffffffffffffff8;
  *(undefined8 *)(uVar5 + 0x18) = *(undefined8 *)(uVar6 + 0x18);
  uVar4 = *(undefined8 *)(uVar6 + 0x20);
  *(undefined8 *)(uVar5 + 0x20) = uVar4;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar8)(uVar7 + 0x28 + uVar5 & (uVar7 ^ 0xffffffffffffffff),
            uVar7 + 0x28 + uVar6 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  return param_1;
}



/* Address: 0x1004e61cc | FUN_1004e61cc */

undefined8 * FUN_1004e61cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar8,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar8;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1004dc818(uVar1,uVar3,uVar5);
  uVar9 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar10 = (ulong)param_2 & 0xfffffffffffffff8;
  *(undefined8 *)(uVar9 + 0x18) = *(undefined8 *)(uVar10 + 0x18);
  uVar8 = *(undefined8 *)(uVar9 + 0x20);
  *(undefined8 *)(uVar9 + 0x20) = *(undefined8 *)(uVar10 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  (**(code **)(*(long *)(lVar6 + -8) + 0x18))
            (uVar7 + 0x28 + uVar9 & (uVar7 ^ 0xffffffffffffffff),
             uVar7 + 0x28 + uVar10 & (uVar7 ^ 0xffffffffffffffff),lVar6);
  return param_1;
}



/* Address: 0x1004e629c | FUN_1004e629c */

undefined8 * FUN_1004e629c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar4 = (ulong)param_2 & 0xfffffffffffffff8;
  uVar5 = *(undefined8 *)(uVar4 + 0x18);
  *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
  *(undefined8 *)(uVar3 + 0x18) = uVar5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            (uVar2 + 0x28 + uVar3 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x28 + uVar4 & (uVar2 ^ 0xffffffffffffffff),lVar1);
  return param_1;
}



/* Address: 0x1004e6328 | FUN_1004e6328 */

undefined8 * FUN_1004e6328(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1004dc818(uVar3,uVar5,uVar2);
  uVar8 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar7 = (ulong)param_2 & 0xfffffffffffffff8;
  *(undefined8 *)(uVar8 + 0x18) = *(undefined8 *)(uVar7 + 0x18);
  uVar3 = *(undefined8 *)(uVar8 + 0x20);
  *(undefined8 *)(uVar8 + 0x20) = *(undefined8 *)(uVar7 + 0x20);
  _swift_bridgeObjectRelease(uVar3);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))
            (uVar6 + 0x28 + uVar8 & (uVar6 ^ 0xffffffffffffffff),
             uVar6 + 0x28 + uVar7 & (uVar6 ^ 0xffffffffffffffff),lVar4);
  return param_1;
}



/* Address: 0x1004e63dc | FUN_1004e63dc */

ulong FUN_1004e63dc(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  lVar5 = *(long *)(lVar4 + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1004e64b0;
  lVar1 = (uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar5 + 0x40);
  uVar8 = (uint)lVar1;
  uVar6 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar9 = (param_2 - uVar2) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_1004e64b0;
      goto LAB_1004e6470;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + lVar1);
    }
  }
  else {
LAB_1004e6470:
    uVar9 = (uint)*(byte *)((long)param_1 + lVar1);
  }
  if (uVar9 != 0) {
    uVar3 = 0;
    if (uVar8 < 4) {
      uVar3 = uVar9 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar8 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
      if (uVar8 < 4) {
        uVar6 = uVar8;
      }
      if ((int)uVar6 < 3) {
        if (uVar6 == 1) {
          uVar6 = (uint)(byte)*param_1;
        }
        else {
          uVar6 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar6 == 3) {
        uVar6 = (uint)(uint3)*param_1;
      }
      else {
        uVar6 = *param_1;
      }
    }
    return (ulong)(uVar2 + (uVar6 | uVar3) + 1);
  }
LAB_1004e64b0:
  if (-1 < (int)uVar3) {
    uVar7 = *(ulong *)(((ulong)param_1 & 0xfffffffffffffff8) + 0x20);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = ((ulong)param_1 & 0xfffffffffffffff8) + uVar7 + 0x28 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001004e64f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar7,uVar3,lVar4);
  return uVar7;
}



/* Address: 0x1004e6558 | FUN_1004e6558 */

void FUN_1004e6558(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb2744);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar10 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else if (uVar10 < 4) {
    uVar11 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
    ;
    bVar5 = 2;
    if (0xfffe < uVar11) {
      bVar5 = 4;
    }
    if (uVar11 < 0xff) {
      bVar5 = uVar11 != 0;
    }
  }
  else {
    bVar5 = 1;
  }
  uVar11 = (uint)param_2;
  if (uVar2 < uVar11) {
    uVar11 = uVar11 + ~uVar2;
    if (uVar10 < 4) {
      iVar12 = (uVar11 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = uVar11 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)uVar11;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = uVar11;
      iVar12 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar12;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar12;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar11 != 0) {
      uVar9 = (ulong)param_1 & 0xfffffffffffffff8;
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004e6710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(uVar9 + uVar8 + 0x28 & ~uVar8,param_2,uVar3,lVar6);
        return;
      }
      if ((int)uVar11 < 0) {
        *(ulong *)(uVar9 + 0x18) = (ulong)(uVar11 & 0x7fffffff);
        *(undefined8 *)(uVar9 + 0x20) = 0;
      }
      else {
        *(ulong *)(uVar9 + 0x20) = (ulong)(uVar11 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1004e6774 | FUN_1004e6774 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004e6774(void)

{
  return ZEXT816(0x100fcc9a8);
}



/* Address: 0x1004e6794 | thunk_FUN_1004e7ccc */

void thunk_FUN_1004e7ccc(void)

{
  FUN_1004e7ccc();
  return;
}



/* Address: 0x1004e6798 | FUN_1004e6798 */

void FUN_1004e6798(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e67a4 | FUN_1004e67a4 */

undefined1  [16] FUN_1004e67a4(long param_1)

{
  Result RVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c52e00;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  FUN_1004db3ac();
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar3 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1004e684c | FUN_1004e684c */

long * FUN_1004e684c(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar18 = *(long *)(lVar10 + -8);
  uVar11 = (ulong)*(uint *)(lVar18 + 0x50) & 0xf8 | 7;
  uVar15 = *(ulong *)(lVar18 + 0x40);
  if (uVar15 < 0x1a) {
    uVar15 = 0x19;
  }
  if ((*(uint *)(lVar18 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar15 - (-uVar11 - 0x12 | uVar11)) {
    lVar10 = *param_2;
    *param_1 = lVar10;
    _swift_retain();
    return (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  lVar3 = *param_2;
  lVar5 = param_2[1];
  lVar9 = param_2[2];
  FUN_1004a7398(lVar3,lVar5,(char)lVar9);
  *param_1 = lVar3;
  param_1[1] = lVar5;
  *(char *)(param_1 + 2) = (char)lVar9;
  uVar11 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar12 = (ulong)param_2 & 0xfffffffffffffff8;
  puVar1 = (uint *)(uVar12 + 0x18);
  bVar8 = *(byte *)((long)puVar1 + uVar15);
  uVar13 = (uint)bVar8;
  if (1 < bVar8) {
    uVar17 = (uint)uVar15;
    uVar14 = 4;
    if (uVar17 < 4) {
      uVar14 = uVar17;
    }
    if ((int)uVar14 < 2) {
      if (uVar14 == 0) goto LAB_1004e698c;
      uVar14 = (uint)*(byte *)puVar1;
    }
    else if (uVar14 == 2) {
      uVar14 = (uint)*(ushort *)puVar1;
    }
    else if (uVar14 == 3) {
      uVar14 = (uint)*(uint3 *)puVar1;
    }
    else {
      uVar14 = *puVar1;
    }
    uVar13 = uVar14 | bVar8 - 2 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar13 = uVar14;
    }
    uVar13 = uVar13 + 2;
  }
LAB_1004e698c:
  puVar2 = (undefined8 *)(uVar11 + 0x18);
  if (uVar13 == 1) {
    uVar4 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(uVar12 + 0x20);
    uVar16 = *(undefined8 *)(uVar12 + 0x28);
    uVar7 = *(undefined1 *)(uVar12 + 0x30);
    FUN_1004d9ee8(uVar4,uVar6,uVar16,uVar7);
    *puVar2 = uVar4;
    *(undefined8 *)(uVar11 + 0x20) = uVar6;
    *(undefined8 *)(uVar11 + 0x28) = uVar16;
    *(undefined1 *)(uVar11 + 0x30) = uVar7;
    *(undefined1 *)((long)puVar2 + uVar15) = 1;
  }
  else {
    (**(code **)(lVar18 + 0x10))(puVar2,puVar1,lVar10);
    *(undefined1 *)((long)puVar2 + uVar15) = 0;
  }
  return param_1;
}



/* Address: 0x1004e6a00 | FUN_1004e6a00 */

void FUN_1004e6a00(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_1004dc818(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar4 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  puVar3 = (uint *)((long)param_1 + uVar6 + 0x11 & (uVar6 ^ 0xffffffffffffffff));
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (uVar6 < 0x1a) {
    uVar6 = 0x19;
  }
  bVar1 = *(byte *)((long)puVar3 + uVar6);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar6;
    uVar8 = 4;
    if (uVar5 < 4) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1004e6ae4;
      uVar8 = (uint)(byte)*puVar3;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar3;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar3;
    }
    else {
      uVar8 = *puVar3;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1004e6ae4:
  if (uVar7 == 1) {
    FUN_1004d9f84(*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 4),
                  (byte)puVar3[6]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004e6b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Address: 0x1004e6b18 | FUN_1004e6b18 */

undefined8 * FUN_1004e6b18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar2,uVar3,uVar4);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar8 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(uint *)(lVar8 + 0x50) & 0xf8;
  lVar1 = uVar9 + 0x18;
  uVar9 = (uVar9 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar12 = (undefined8 *)(lVar1 + (long)param_1 & uVar9);
  puVar7 = (uint *)(lVar1 + (long)param_2 & uVar9);
  uVar9 = *(ulong *)(lVar8 + 0x40);
  if (uVar9 < 0x1a) {
    uVar9 = 0x19;
  }
  bVar5 = *(byte *)((long)puVar7 + uVar9);
  uVar10 = (uint)bVar5;
  if (1 < bVar5) {
    uVar14 = (uint)uVar9;
    uVar11 = 4;
    if (uVar14 < 4) {
      uVar11 = uVar14;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1004e6c28;
      uVar11 = (uint)(byte)*puVar7;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar7;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar7;
    }
    else {
      uVar11 = *puVar7;
    }
    uVar10 = uVar11 | bVar5 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1004e6c28:
  if (uVar10 != 1) {
    (**(code **)(lVar8 + 0x10))(puVar12,puVar7,lVar6);
  }
  else {
    uVar2 = *(undefined8 *)puVar7;
    uVar3 = *(undefined8 *)(puVar7 + 2);
    uVar13 = *(undefined8 *)(puVar7 + 4);
    uVar11 = puVar7[6];
    FUN_1004d9ee8(uVar2,uVar3,uVar13,(byte)uVar11);
    *puVar12 = uVar2;
    puVar12[1] = uVar3;
    puVar12[2] = uVar13;
    *(byte *)(puVar12 + 3) = (byte)uVar11;
  }
  *(bool *)((long)puVar12 + uVar9) = uVar10 == 1;
  return param_1;
}



/* Address: 0x1004e6c94 | FUN_1004e6c94 */

undefined8 * FUN_1004e6c94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  
  uVar2 = *param_2;
  uVar15 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar2,uVar15,uVar5);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar15;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1004dc818(uVar3,uVar4,uVar6);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar14 = *(long *)(lVar8 + -8);
  uVar9 = (ulong)*(uint *)(lVar14 + 0x50) & 0xf8;
  lVar1 = uVar9 + 0x18;
  uVar9 = (uVar9 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar12 = (uint *)(lVar1 + (long)param_1 & uVar9);
  puVar13 = (uint *)(lVar1 + (long)param_2 & uVar9);
  if (puVar12 == puVar13) {
    return param_1;
  }
  uVar9 = *(ulong *)(lVar14 + 0x40);
  if (uVar9 < 0x1a) {
    uVar9 = 0x19;
  }
  bVar7 = *(byte *)((long)puVar12 + uVar9);
  uVar10 = (uint)bVar7;
  uVar16 = (uint)uVar9;
  if (1 < bVar7) {
    uVar11 = 4;
    if (uVar16 < 4) {
      uVar11 = uVar16;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1004e6db8;
      uVar11 = (uint)(byte)*puVar12;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar12;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar12;
    }
    else {
      uVar11 = *puVar12;
    }
    uVar10 = uVar11 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1004e6db8:
  if (uVar10 == 1) {
    FUN_1004d9f84(*(undefined8 *)puVar12,*(undefined8 *)(puVar12 + 2),*(undefined8 *)(puVar12 + 4),
                  (byte)puVar12[6]);
  }
  else {
    (**(code **)(lVar14 + 8))(puVar12,lVar8);
  }
  bVar7 = *(byte *)((long)puVar13 + uVar9);
  uVar10 = (uint)bVar7;
  if (1 < bVar7) {
    uVar11 = 4;
    if (uVar16 < 4) {
      uVar11 = uVar16;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1004e6e58;
      uVar11 = (uint)(byte)*puVar13;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar13;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar13;
    }
    else {
      uVar11 = *puVar13;
    }
    uVar10 = uVar11 | bVar7 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1004e6e58:
  if (uVar10 != 1) {
    (**(code **)(lVar14 + 0x10))(puVar12,puVar13,lVar8);
  }
  else {
    uVar2 = *(undefined8 *)puVar13;
    uVar3 = *(undefined8 *)(puVar13 + 2);
    uVar15 = *(undefined8 *)(puVar13 + 4);
    uVar16 = puVar13[6];
    FUN_1004d9ee8(uVar2,uVar3,uVar15,(byte)uVar16);
    *(undefined8 *)puVar12 = uVar2;
    *(undefined8 *)(puVar12 + 2) = uVar3;
    *(undefined8 *)(puVar12 + 4) = uVar15;
    *(byte *)(puVar12 + 6) = (byte)uVar16;
  }
  *(bool *)((long)puVar12 + uVar9) = uVar10 == 1;
  return param_1;
}



/* Address: 0x1004e6ecc | FUN_1004e6ecc */

undefined8 * FUN_1004e6ecc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8;
  lVar1 = uVar6 + 0x18;
  uVar6 = (uVar6 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar9 = (undefined8 *)(lVar1 + (long)param_1 & uVar6);
  puVar4 = (uint *)(lVar1 + (long)param_2 & uVar6);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (uVar6 < 0x1a) {
    uVar6 = 0x19;
  }
  bVar2 = *(byte *)((long)puVar4 + uVar6);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar10 = (uint)uVar6;
    uVar8 = 4;
    if (uVar10 < 4) {
      uVar8 = uVar10;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1004e6fc0;
      uVar8 = (uint)(byte)*puVar4;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar4;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar4;
    }
    else {
      uVar8 = *puVar4;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1004e6fc0:
  if (uVar7 != 1) {
    (**(code **)(lVar5 + 0x20))(puVar9,puVar4,lVar3);
  }
  else {
    uVar12 = *(undefined8 *)(puVar4 + 2);
    uVar11 = *(undefined8 *)puVar4;
    uVar13 = *(undefined8 *)((long)puVar4 + 9);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar4 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar13;
    puVar9[1] = uVar12;
    *puVar9 = uVar11;
  }
  *(bool *)((long)puVar9 + uVar6) = uVar7 == 1;
  return param_1;
}



/* Address: 0x1004e7008 | FUN_1004e7008 */

undefined8 * FUN_1004e7008(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar2 = *(undefined1 *)(param_2 + 2);
  uVar5 = *param_1;
  uVar7 = param_1[1];
  uVar15 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  uVar3 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar2;
  FUN_1004dc818(uVar5,uVar7,uVar3);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  lVar13 = *(long *)(lVar6 + -8);
  uVar8 = (ulong)*(uint *)(lVar13 + 0x50) & 0xf8;
  lVar1 = uVar8 + 0x18;
  uVar8 = (uVar8 ^ 0xffffffffffffffff) & 0xfffffffffffffff8;
  puVar11 = (uint *)(lVar1 + (long)param_1 & uVar8);
  puVar12 = (uint *)(lVar1 + (long)param_2 & uVar8);
  if (puVar11 == puVar12) {
    return param_1;
  }
  uVar8 = *(ulong *)(lVar13 + 0x40);
  if (uVar8 < 0x1a) {
    uVar8 = 0x19;
  }
  bVar4 = *(byte *)((long)puVar11 + uVar8);
  uVar9 = (uint)bVar4;
  uVar14 = (uint)uVar8;
  if (1 < bVar4) {
    uVar10 = 4;
    if (uVar14 < 4) {
      uVar10 = uVar14;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1004e711c;
      uVar10 = (uint)(byte)*puVar11;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar11;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar11;
    }
    else {
      uVar10 = *puVar11;
    }
    uVar9 = uVar10 | bVar4 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1004e711c:
  if (uVar9 == 1) {
    FUN_1004d9f84(*(undefined8 *)puVar11,*(undefined8 *)(puVar11 + 2),*(undefined8 *)(puVar11 + 4),
                  (byte)puVar11[6]);
  }
  else {
    (**(code **)(lVar13 + 8))(puVar11,lVar6);
  }
  bVar4 = *(byte *)((long)puVar12 + uVar8);
  uVar9 = (uint)bVar4;
  if (1 < bVar4) {
    uVar10 = 4;
    if (uVar14 < 4) {
      uVar10 = uVar14;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1004e71bc;
      uVar10 = (uint)(byte)*puVar12;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar12;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar12;
    }
    else {
      uVar10 = *puVar12;
    }
    uVar9 = uVar10 | bVar4 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_1004e71bc:
  if (uVar9 != 1) {
    (**(code **)(lVar13 + 0x20))(puVar11,puVar12,lVar6);
  }
  else {
    uVar7 = *(undefined8 *)(puVar12 + 2);
    uVar5 = *(undefined8 *)puVar12;
    uVar15 = *(undefined8 *)((long)puVar12 + 9);
    *(undefined8 *)((long)puVar11 + 0x11) = *(undefined8 *)((long)puVar12 + 0x11);
    *(undefined8 *)((long)puVar11 + 9) = uVar15;
    *(undefined8 *)(puVar11 + 2) = uVar7;
    *(undefined8 *)puVar11 = uVar5;
  }
  *(bool *)((long)puVar11 + uVar8) = uVar9 == 1;
  return param_1;
}



/* Address: 0x1004e7210 | FUN_1004e7210 */

int FUN_1004e7210(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cb270c,
             &TargetProtocolRequirement_100cb274c);
  uVar6 = *(ulong *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 0x1a) {
    uVar6 = 0x19;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_1004e72fc;
  uVar7 = (ulong)*(uint *)(*(long *)(lVar4 + -8) + 0x50) & 0xf8;
  uVar6 = uVar6 + ((ulong)~(uint)uVar7 & uVar7 + 0x18) + 1;
  uVar5 = (uint)uVar6;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfe >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1004e72fc;
      goto LAB_1004e7288;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1004e7288:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_1004e72fc:
  iVar3 = 0;
  if (1 < (byte)param_1[4]) {
    iVar3 = ((byte)param_1[4] ^ 0xff) + 1;
  }
  return iVar3;
}


