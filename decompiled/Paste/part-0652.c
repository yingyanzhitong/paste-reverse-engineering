/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006e8414 | FUN_1006e8414 */

void FUN_1006e8414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))
            (uVar1,uVar2,param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],param_2[7]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1006e8450 | FUN_1006e8450 */

void FUN_1006e8450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fddcf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fddce8;
  FUN_1000f8b08(&DAT_100fddce8,&DAT_100c72680);
  puVar2 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             puVar1);
  DAT_100fddcf0 = puVar2;
  return;
}



/* Address: 0x1006e84a0 | FUN_1006e84a0 */

void FUN_1006e84a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fddd10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72600;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72600,&DAT_100ef9cc0);
  DAT_100fddd10 = pTVar1;
  return;
}



/* Address: 0x1006e84e0 | FUN_1006e84e0 */

void FUN_1006e84e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fddd20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__RangeReplaceableCollection_100eac250;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__RangeReplaceableCollection_100eac250,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fddd20 = puVar1;
  return;
}



/* Address: 0x1006e8520 | thunk_FUN_10038d4f0 */

void thunk_FUN_10038d4f0(void)

{
  thunk_FUN_10038d4f0();
  return;
}



/* Address: 0x1006e8524 | FUN_1006e8524 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006e85a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006e8524(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  tuple2_conflict3 tVar3;
  undefined8 local_48;
  
  puVar1 = &DAT_100c726b0;
  local_48 = in_x3;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c726b0,&local_48);
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,&DAT_100f07a38,puVar1,0,0);
  tVar3 = Swift::Array<undefined>::_allocateUninitialized(0,uVar2);
  FUN_1006e8654(tVar3._0_8_,tVar3._.unknown.unknown);
  Swift::Dictionary::_init(tVar3._0_8_,&DAT_100f07a38,puVar1,tVar3._0_8_);
  return;
}



/* Address: 0x1006e85cc | FUN_1006e85cc */

void FUN_1006e85cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  _swift_bridgeObjectRetain(param_3);
  puVar1 = &DAT_100c726b0;
  local_48 = in_x6;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c726b0,&local_48);
  puVar2 = puVar1;
  FUN_1006e8654();
  Swift::Dictionary::_get_subscript(param_1,&local_40,param_4,&DAT_100f07a38,puVar1,puVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1006e8654 | FUN_1006e8654 */

void FUN_1006e8654(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fddd30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e478,&DAT_100f07a38);
  DAT_100fddd30 = pTVar1;
  return;
}



/* Address: 0x1006e8694 | FUN_1006e8694 */

void FUN_1006e8694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  Dictionary DVar4;
  Dictionary *unaff_x20;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  long local_60;
  
  puVar6 = unaff_x20->unknown;
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  local_88 = param_1;
  uStack_80 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = &DAT_100c726b0;
  local_90 = uVar5;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c726b0,&local_90);
  puVar3 = puVar2;
  FUN_1006e8654();
  Swift::Dictionary::_get_subscript(auStack_78,&local_88,puVar6,&DAT_100f07a38,puVar2,puVar3);
  _swift_bridgeObjectRelease(param_2);
  if (local_60 == 0) {
    FUN_100076688(param_3,auStack_78);
    local_88 = param_1;
    uStack_80 = param_2;
    DVar4 = Swift::Dictionary::typeMetadataAccessor();
    _swift_bridgeObjectRetain(param_2);
    Swift::Dictionary::_set_subscript(unaff_x20,auStack_78,&local_88,DVar4.unknown);
    return;
  }
  FUN_100004594(auStack_78);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e878c);
  (*pcVar1)();
}



/* Address: 0x1006e878c | FUN_1006e878c */

void FUN_1006e878c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  Dictionary DVar5;
  Dictionary *unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  long local_88;
  TargetProtocolConformanceDescriptor *local_80;
  undefined1 auStack_78 [24];
  long local_60;
  
  puVar7 = unaff_x20->unknown;
  local_a0 = (undefined *)0x44414548;
  puStack_98 = &DAT_e400000000000000;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = &DAT_100c726b0;
  local_b0 = uVar6;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c726b0,&local_b0);
  puVar2 = puVar1;
  FUN_1006e8654();
  Swift::Dictionary::_get_subscript(auStack_78,&local_a0,puVar7,&DAT_100f07a38,puVar1,puVar2);
  if (local_60 == 0) {
    local_b0 = 0x544547;
    puStack_a8 = (undefined1 *)0xe300000000000000;
    Swift::Dictionary::_get_subscript(&local_a0,&local_b0,puVar7,&DAT_100f07a38,puVar1,puVar2);
    if (local_88 == 0) {
      return;
    }
    FUN_100076508(&local_a0,auStack_78);
    FUN_100076688(auStack_78,&local_a0);
    puVar1 = &DAT_100ef9e08;
    _swift_allocObject(&DAT_100ef9e08,0x40,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar6;
    FUN_100076508(&local_a0,puVar1 + 0x18);
    puVar2 = &DAT_100c72728;
    FUN_100004520(&DAT_100c72728,puVar1,uVar6);
    lVar3 = 0;
    FUN_1006fc544(0,uVar6);
    pTVar4 = &TargetProtocolConformanceDescriptor_100c73690;
    local_88 = lVar3;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73690,lVar3);
    local_b0 = 0x44414548;
    puStack_a8 = &DAT_e400000000000000;
    local_a0 = puVar2;
    puStack_98 = puVar1;
    local_80 = pTVar4;
    DVar5 = Swift::Dictionary::typeMetadataAccessor();
    Swift::Dictionary::_set_subscript(unaff_x20,&local_a0,&local_b0,DVar5.unknown);
  }
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1006e8918 | FUN_1006e8918 */

void FUN_1006e8918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  _swift_task_switch(FUN_1006e8934,0,0);
  return;
}



/* Address: 0x1006e8934 | FUN_1006e8934 */

void FUN_1006e8934(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1006e89c0;
                    /* WARNING: Could not recover jumptable at 0x0001006e89bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0xa8),
             *(undefined8 *)(unaff_x22 + 0xb0),uVar2,lVar3);
  return;
}



/* Address: 0x1006e89c0 | FUN_1006e89c0 */

void FUN_1006e89c0(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xc0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006e8a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_1006e8a28,0,0);
  return;
}



/* Address: 0x1006e8a28 | FUN_1006e8a28 */

void FUN_1006e8a28(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xa0);
  FUN_100a00044(unaff_x22 + 0x10);
  FUN_1006a4e98(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 0x50);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0001006e8a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e8a94 | FUN_1006e8a94 */

undefined8
FUN_1006e8a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return param_2;
}



/* Address: 0x1006e8adc | FUN_1006e8adc */

void FUN_1006e8adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Address: 0x1006e8b20 | FUN_1006e8b20 */

void FUN_1006e8b20(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1006e8b50 | FUN_1006e8b50 */

undefined8 * FUN_1006e8b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006e8ba4 | FUN_1006e8ba4 */

undefined8 * FUN_1006e8ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006e8c20 | FUN_1006e8c20 */

undefined8 * FUN_1006e8c20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006e8c6c | FUN_1006e8c6c */

void FUN_1006e8c6c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e8c78 | FUN_1006e8c78 */

void FUN_1006e8c78(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocObject();
  return;
}



/* Address: 0x1006e8c9c | FUN_1006e8c9c */

void FUN_1006e8c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006e8918(plVar1,param_1,param_2,param_3,unaff_x20 + 0x18,uVar2);
  return;
}



/* Address: 0x1006e8d20 | FUN_1006e8d20 */

void FUN_1006e8d20(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  ulong uVar2;
  undefined *puVar3;
  UUID UVar4;
  long extraout_x8;
  uint uVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  String SVar9;
  String local_90;
  long local_78;
  undefined *local_70;
  char *pcStack_68;
  void *local_60;
  ulong uStack_58;
  
  puVar3 = &DAT_100fdddb8;
  FUN_1000f7830(&DAT_100fdddb8,&DAT_100c72730);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  pvVar1 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_3 >> 0x38 & 0xf);
  }
  uVar5 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar2 = 7;
  if (uVar5 == 0) {
    uVar2 = 0xb;
  }
  SVar9.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar9.bridgeObject = param_2;
  local_70 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar9);
  pcStack_68 = SVar9.str;
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_100a3000c(&local_90,&local_70,param_4,param_5,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_3);
  if (local_78 == 0) {
    puVar3 = &DAT_100fdddc0;
    FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
    (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar7,1,1,puVar3);
  }
  else {
    SVar9 = Swift::String::__fromSubstring(local_90);
    Foundation::UUID::_init();
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    puVar3 = &DAT_100fdddc0;
    FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
    (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar7,0,1,puVar3);
    _swift_bridgeObjectRelease(local_78);
  }
  FUN_10011532c(lVar7,lVar6,&DAT_100fdddb8,&DAT_100c72730);
  puVar3 = &DAT_100fdddc0;
  FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
  pcVar8 = *(code **)(*(long *)(puVar3 + -8) + 0x30);
  lVar7 = lVar6;
  (*pcVar8)(lVar6,1,puVar3);
  if ((int)lVar7 == 1) {
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 0x38))(param_1,1,1,UVar4.unknown);
    lVar7 = lVar6;
    (*pcVar8)(lVar6,1,puVar3);
    if ((int)lVar7 != 1) {
      FUN_1000fb4c4(lVar6,&DAT_100fdddb8,&DAT_100c72730);
    }
  }
  else {
    FUN_10011532c(lVar6,param_1,&DAT_100fdddc0,&DAT_100c72738);
  }
  return;
}



/* Address: 0x1006e8fa0 | FUN_1006e8fa0 */

void FUN_1006e8fa0(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  UUID UVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  _StringGuts _Var6;
  void *pvVar7;
  long extraout_x8;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String local_a0;
  char *local_90;
  void *local_88;
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  
  puVar10 = &DAT_100fdddc0;
  FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_a0 - extraout_x8;
  pvVar7 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    pvVar7 = (void *)(param_3 >> 0x38 & 0xf);
  }
  uVar8 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar1 = 7;
  if (uVar8 == 0) {
    uVar1 = 0xb;
  }
  SVar12.str = (char *)(uVar1 | (long)pvVar7 << 0x10);
  SVar12.bridgeObject = param_2;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar12);
  pcStack_78 = SVar12.str;
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_100a3000c(&local_a0,&local_80,param_4,param_5,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_3);
  if (local_88 == (void *)0x0) {
    SVar12.str = (char *)0x8000000100db0f00;
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar10 = (undefined *)0xd000000000000021;
  }
  else {
    pvVar7 = local_88;
    SVar12 = Swift::String::__fromSubstring(local_a0);
    Foundation::UUID::_init();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    lVar11 = *(long *)(UVar2.unknown + -8);
    lVar3 = lVar9;
    (**(code **)(lVar11 + 0x30))(lVar9,1,UVar2.unknown);
    if ((int)lVar3 != 1) {
      _swift_bridgeObjectRelease(local_88);
      (**(code **)(lVar11 + 0x20))(param_1,lVar9,UVar2.unknown);
      return;
    }
    _Var6.unknown = &DAT_100fdddc0;
    SVar12.str = &DAT_100c72738;
    FUN_1000fb4c4(lVar9);
    local_80 = (undefined *)0x0;
    pcStack_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3f,_Var6);
    SVar13.bridgeObject = (void *)0xeb00000000272072;
    SVar13.str = (char *)0x6574656d61726150;
    SVar15.bridgeObject = pvVar7;
    SVar15.str = SVar12.str;
    Swift::String::append(SVar13,SVar15);
    pvVar7 = local_88;
    SVar12 = Swift::String::__fromSubstring(local_a0);
    SVar16.bridgeObject = pvVar7;
    SVar16.str = local_90;
    Swift::String::append(SVar12,SVar16);
    _swift_bridgeObjectRelease(local_88);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    SVar14.bridgeObject = (void *)0x8000000100db0f30;
    SVar14.str = &DAT_d000000000000032;
    SVar17.bridgeObject = pvVar7;
    SVar17.str = local_90;
    Swift::String::append(SVar14,SVar17);
    SVar12.str = pcStack_78;
    puVar10 = local_80;
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
  }
  puVar5 = puVar4;
  FUN_1006be0ac();
  _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
  builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
  *puVar5 = 400;
  puVar5[2] = 0xeb00000000747365;
  puVar5[3] = puVar4;
  puVar5[4] = puVar10;
  puVar5[5] = SVar12.str;
  _swift_willThrow();
  return;
}



/* Address: 0x1006e925c | FUN_1006e925c */

undefined * FUN_1006e925c(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  UUID UVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  code *pcVar14;
  String SVar15;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  
  puVar9 = &DAT_100fdddc0;
  FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  local_88 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  local_90 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar10 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar2 = 7;
  if (uVar10 == 0) {
    uVar2 = 0xb;
  }
  SVar15.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar15.bridgeObject = param_1;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar15);
  ppuVar5 = &local_80;
  pcStack_78 = SVar15.str;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_100a30a30(ppuVar5,param_3,param_4,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  local_98 = ppuVar5[2];
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_98 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    ppuVar13 = ppuVar5 + 7;
    do {
      if (ppuVar5[2] <= puVar12) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1006e9518);
        (*pcVar14)();
      }
      puVar7 = *ppuVar13;
      SVar15 = *(String *)(ppuVar13 + -3);
      _swift_bridgeObjectRetain(puVar7);
      SVar15 = Swift::String::__fromSubstring(SVar15);
      Foundation::UUID::_init();
      _swift_bridgeObjectRelease(puVar7);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      lVar3 = local_88;
      puVar6 = puVar11;
      (**(code **)(local_88 + 0x30))(puVar11,1,UVar4.unknown);
      if ((int)puVar6 == 1) {
        FUN_1000fb4c4(puVar11,&DAT_100fdddc0,&DAT_100c72738);
      }
      else {
        pcVar14 = *(code **)(lVar3 + 0x20);
        (*pcVar14)(local_90,puVar11,UVar4.unknown);
        puVar7 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1006a2e2c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar2 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1006a2e2c(puVar9,uVar2 + 1,1,puVar8);
        }
        *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
        (*pcVar14)(puVar9 + *(long *)(local_88 + 0x48) * uVar2 +
                            ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)),local_90,
                   UVar4.unknown);
      }
      puVar12 = puVar12 + 1;
      ppuVar13 = ppuVar13 + 4;
    } while (local_98 != puVar12);
  }
  _swift_bridgeObjectRelease(ppuVar5);
  return puVar9;
}



/* Address: 0x1006e9518 | FUN_1006e9518 */

undefined8 * FUN_1006e9518(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  undefined *puVar3;
  UUID UVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  _StringGuts _Var9;
  char *pcVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long extraout_x8_00;
  uint uVar13;
  long lVar14;
  long extraout_x12;
  undefined8 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined1 auStack_d0 [8];
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  
  puVar16 = &DAT_100fdddc0;
  FUN_1000f7830(&DAT_100fdddc0,&DAT_100c72738);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_d0 + -extraout_x8;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar13 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar13 = 1;
  }
  uVar2 = 7;
  if (uVar13 == 0) {
    uVar2 = 0xb;
  }
  SVar23.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar23.bridgeObject = param_1;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar23);
  ppuVar5 = &local_80;
  pcStack_78 = SVar23.str;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_100a30a30(ppuVar5,param_3,param_4,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  puVar15 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar16 = ppuVar5[2];
  if (puVar16 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(ppuVar5);
    puVar15 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1006bf8b4(0,puVar16,0);
    puVar18 = (undefined *)0x0;
    ppuVar19 = ppuVar5 + 7;
    do {
      if (ppuVar5[2] <= puVar18) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1006e9908);
        (*pcVar17)();
      }
      SVar22 = *(String *)(ppuVar19 + -3);
      SVar21 = *(String *)(ppuVar19 + -3);
      SVar23.str = ppuVar19[-1];
      puVar3 = *ppuVar19;
      _swift_bridgeObjectRetain(puVar3);
      puVar11 = puVar3;
      SVar21 = Swift::String::__fromSubstring(SVar21);
      Foundation::UUID::_init();
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      puVar6 = puVar12;
      (**(code **)(lVar20 + 0x30))(puVar12,1,UVar4.unknown);
      if ((int)puVar6 == 1) {
        _Var9.unknown = &DAT_100fdddc0;
        pcVar10 = &DAT_100c72738;
        FUN_1000fb4c4(puVar12);
        Swift::_StringGuts::grow(0x4b,_Var9);
        SVar21.bridgeObject = (void *)0x8000000100db0f70;
        SVar21.str = (char *)0xd000000000000017;
        SVar24.bridgeObject = puVar11;
        SVar24.str = pcVar10;
        Swift::String::append(SVar21,SVar24);
        puVar16 = puVar3;
        SVar21 = Swift::String::__fromSubstring(SVar22);
        SVar25.bridgeObject = puVar16;
        SVar25.str = SVar23.str;
        Swift::String::append(SVar21,SVar25);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        SVar22.bridgeObject = (void *)0x8000000100db0f30;
        SVar22.str = &DAT_d000000000000032;
        SVar26.bridgeObject = puVar16;
        SVar26.str = SVar23.str;
        Swift::String::append(SVar22,SVar26);
        puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10085d78c();
        puVar8 = puVar7;
        FUN_1006be0ac();
        _swift_allocError(&DAT_100ef7ae0,puVar8,0,0);
        builtin_strncpy((char *)(puVar8 + 1),"Bad Requ",8);
        *puVar8 = 400;
        puVar8[2] = 0xeb00000000747365;
        puVar8[3] = puVar7;
        puVar8[4] = 0;
        puVar8[5] = 0xe000000000000000;
        _swift_willThrow();
        _swift_release(puVar15);
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(ppuVar5);
        return puVar7;
      }
      _swift_bridgeObjectRelease(puVar3);
      pcVar17 = *(code **)(lVar20 + 0x20);
      (*pcVar17)(lVar14,puVar12,UVar4.unknown);
      (*pcVar17)(lVar14 - extraout_x12,lVar14,UVar4.unknown);
      uVar2 = *(ulong *)((long)puVar15 + 0x10);
      if (*(ulong *)((long)puVar15 + 0x18) >> 1 <= uVar2) {
        FUN_1006bf8b4(1 < *(ulong *)((long)puVar15 + 0x18),uVar2 + 1,1);
      }
      puVar18 = puVar18 + 1;
      *(ulong *)((long)puVar15 + 0x10) = uVar2 + 1;
      (*pcVar17)((undefined *)
                 ((long)puVar15 +
                 *(long *)(lVar20 + 0x48) * uVar2 +
                 ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff))),lVar14 - extraout_x12,
                 UVar4.unknown);
      ppuVar19 = ppuVar19 + 4;
    } while (puVar16 != puVar18);
    _swift_bridgeObjectRelease(ppuVar5);
  }
  return puVar15;
}



/* Address: 0x1006e9908 | FUN_1006e9908 */

void FUN_1006e9908(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006e992c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006e992c | FUN_1006e992c */

void FUN_1006e992c(void)

{
  UUID UVar1;
  undefined *puVar2;
  
  if (DAT_100fdddc8 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__UUID_>Swift__Encodable_100ea7510;
  _swift_getWitnessTable(PTR_Foundation__Foundation__UUID_>Swift__Encodable_100ea7510,UVar1.unknown)
  ;
  DAT_100fdddc8 = puVar2;
  return;
}



/* Address: 0x1006e9970 | FUN_1006e9970 */

String FUN_1006e9970(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  uint uVar3;
  String SVar4;
  String local_70;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  void *local_40;
  ulong uStack_38;
  
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar3 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  uVar2 = 7;
  if (uVar3 == 0) {
    uVar2 = 0xb;
  }
  SVar4.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar4.bridgeObject = param_1;
  local_50 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar4);
  pcStack_48 = SVar4.str;
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_100a3000c(&local_70,&local_50,param_3,param_4,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  if (local_58 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = Swift::String::__fromSubstring(local_70);
    _swift_bridgeObjectRelease(local_58);
  }
  return SVar4;
}



/* Address: 0x1006e9a54 | FUN_1006e9a54 */

void FUN_1006e9a54(void)

{
  FUN_1006e9ac8();
  return;
}



/* Address: 0x1006e9a60 | FUN_1006e9a60 */

void FUN_1006e9a60(String *param_1)

{
  String SVar1;
  
  SVar1 = Swift::String::__fromSubstring(*param_1);
  Swift::LosslessStringConvertible::_init(SVar1);
  return;
}



/* Address: 0x1006e9abc | FUN_1006e9abc */

void FUN_1006e9abc(void)

{
  FUN_1006e9ac8();
  return;
}



/* Address: 0x1006e9ac8 | FUN_1006e9ac8 */

void FUN_1006e9ac8(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  void *pvVar1;
  ulong uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  uint uVar7;
  long extraout_x12;
  undefined8 extraout_x13;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  String SVar12;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  long lVar4;
  
  local_d8 = param_9;
  local_d0 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar1 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_3 >> 0x38 & 0xf);
  }
  uVar7 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar2 = 7;
  if (uVar7 == 0) {
    uVar2 = 0xb;
  }
  SVar12.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar12.bridgeObject = param_2;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar12);
  pcStack_78 = SVar12.str;
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_100a3000c(auStack_a0,&local_80,param_5,param_6,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_3);
  puVar5 = &DAT_100fdddd0;
  local_b0 = param_7;
  uStack_a8 = param_8;
  FUN_1000f7830(&DAT_100fdddd0,&DAT_100c72770);
  FUN_1001b8460((long)puVar11 - extraout_x12,local_d8,auStack_c0,puVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar4,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_bridgeObjectRelease(local_88);
  (**(code **)(lVar10 + 0x20))(puVar11,(long)puVar11 - extraout_x12,extraout_x13);
  lVar9 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar6 = puVar11;
  (*pcVar8)(puVar11,1,lVar4);
  if ((int)puVar6 == 1) {
    (**(code **)(*(long *)(param_7 + -8) + 0x38))(local_d0,1,1,param_7);
    puVar6 = puVar11;
    (*pcVar8)(puVar11,1,lVar4);
    if ((int)puVar6 != 1) {
      (**(code **)(lVar10 + 8))(puVar11,extraout_x13);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(local_d0,puVar11,lVar4);
  }
  return;
}



/* Address: 0x1006e9ce8 | FUN_1006e9ce8 */

void FUN_1006e9ce8(String *param_1)

{
  Swift::String::__fromSubstring(*param_1);
  Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1006e9d4c | FUN_1006e9d4c */

void FUN_1006e9d4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006e9ce8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Address: 0x1006e9d68 | FUN_1006e9d68 */

String FUN_1006e9d68(void *param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  String SVar6;
  String SVar7;
  String local_70;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  void *local_40;
  void *pvStack_38;
  
  pvVar1 = param_1;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)((ulong)param_2 >> 0x38 & 0xf);
  }
  uVar5 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if (((ulong)param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar2 = 7;
  if (uVar5 == 0) {
    uVar2 = 0xb;
  }
  SVar7.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar7.bridgeObject = param_1;
  local_50 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar7);
  pcStack_48 = SVar7.str;
  local_40 = param_1;
  pvStack_38 = param_2;
  FUN_100a3000c(&local_70,&local_50,param_3,param_4,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  if (local_58 == 0) {
    SVar6.bridgeObject = param_2;
    SVar6.str = (char *)0x8000000100db0f00;
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar4 = puVar3;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar4,0,0);
    builtin_strncpy((char *)(puVar4 + 1),"Bad Requ",8);
    *puVar4 = 400;
    puVar4[2] = 0xeb00000000747365;
    puVar4[3] = puVar3;
    puVar4[4] = 0xd000000000000021;
    puVar4[5] = 0x8000000100db0f00;
    _swift_willThrow();
  }
  else {
    SVar6 = Swift::String::__fromSubstring(local_70);
    _swift_bridgeObjectRelease(local_58);
  }
  return SVar6;
}



/* Address: 0x1006e9ebc | FUN_1006e9ebc */

void FUN_1006e9ebc(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char *param_7,void *param_8)

{
  ulong uVar1;
  String SVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long extraout_x8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
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
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  void *pvStack_98;
  char *local_90;
  void *local_88;
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  _StringGuts _Var4;
  
  local_a8 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _Var4.unknown = (undefined *)CONCAT71(extraout_var,OVar3.value);
  lVar13 = *(long *)(_Var4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_b0 - extraout_x8;
  pvVar8 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    pvVar8 = (void *)(param_3 >> 0x38 & 0xf);
  }
  uVar9 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar1 = 7;
  if (uVar9 == 0) {
    uVar1 = 0xb;
  }
  SVar14.str = (char *)(uVar1 | (long)pvVar8 << 0x10);
  SVar14.bridgeObject = param_2;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar14);
  pcStack_78 = SVar14.str;
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_100a3000c(&local_a0,&local_80,param_5,param_6,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_3);
  if (local_88 == (void *)0x0) {
    SVar14.str = (char *)0x8000000100db0f00;
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar11 = (undefined *)0xd000000000000021;
  }
  else {
    SVar2.bridgeObject = pvStack_98;
    SVar2.str = local_a0;
    local_b0 = local_a0;
    SVar14 = Swift::String::__fromSubstring(SVar2);
    Swift::LosslessStringConvertible::_init(SVar14);
    lVar10 = *(long *)(param_7 + -8);
    lVar5 = lVar12;
    SVar14.str = param_7;
    (**(code **)(lVar10 + 0x30))(lVar12,1);
    if ((int)lVar5 != 1) {
      _swift_bridgeObjectRelease(local_88);
      (**(code **)(lVar10 + 0x20))(local_a8,lVar12,param_7);
      return;
    }
    (**(code **)(lVar13 + 8))(lVar12);
    local_80 = (undefined *)0x0;
    pcStack_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3d,_Var4);
    SVar15.bridgeObject = (void *)0xeb00000000272072;
    SVar15.str = (char *)0x6574656d61726150;
    SVar19.bridgeObject = param_8;
    SVar19.str = SVar14.str;
    Swift::String::append(SVar15,SVar19);
    SVar16.bridgeObject = pvStack_98;
    SVar16.str = local_b0;
    pvVar8 = local_88;
    SVar14 = Swift::String::__fromSubstring(SVar16);
    SVar20.bridgeObject = pvVar8;
    SVar20.str = local_90;
    Swift::String::append(SVar14,SVar20);
    _swift_bridgeObjectRelease(local_88);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar17.bridgeObject = (void *)0x8000000100db0f90;
    SVar17.str = (char *)0xd00000000000002d;
    SVar21.bridgeObject = pvVar8;
    SVar21.str = local_90;
    Swift::String::append(SVar17,SVar21);
    SVar14 = Swift::__typeName(SUB81(param_7,0));
    SVar22.bridgeObject = pvVar8;
    SVar22.str = local_90;
    Swift::String::append(SVar14,SVar22);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x29;
    SVar23.bridgeObject = pvVar8;
    SVar23.str = local_90;
    Swift::String::append(SVar18,SVar23);
    SVar14.str = pcStack_78;
    puVar11 = local_80;
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
  }
  puVar7 = puVar6;
  FUN_1006be0ac();
  _swift_allocError(&DAT_100ef7ae0,puVar7,0,0);
  builtin_strncpy((char *)(puVar7 + 1),"Bad Requ",8);
  *puVar7 = 400;
  puVar7[2] = 0xeb00000000747365;
  puVar7[3] = puVar6;
  puVar7[4] = puVar11;
  puVar7[5] = SVar14.str;
  _swift_willThrow();
  return;
}



/* Address: 0x1006ea190 | FUN_1006ea190 */

void FUN_1006ea190(undefined8 param_1,void *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char *param_7)

{
  ulong uVar1;
  String SVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long extraout_x8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  void *pvStack_98;
  char *local_90;
  void *local_88;
  String local_80;
  void *local_70;
  ulong uStack_68;
  _StringGuts _Var4;
  String SVar15;
  
  local_a8 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _Var4.unknown = (undefined *)CONCAT71(extraout_var,OVar3.value);
  lVar13 = *(long *)(_Var4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_b0 - extraout_x8;
  pvVar8 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    pvVar8 = (void *)(param_3 >> 0x38 & 0xf);
  }
  uVar9 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar1 = 7;
  if (uVar9 == 0) {
    uVar1 = 0xb;
  }
  SVar15.str = (char *)(uVar1 | (long)pvVar8 << 0x10);
  SVar15.bridgeObject = param_2;
  local_80.str = (char *)Swift::String::get_subscript((Range<Index>)0xf,SVar15);
  local_70 = param_2;
  uStack_68 = param_3;
  local_80.bridgeObject = SVar15.str;
  FUN_100a3000c(&local_a0,&local_80,param_5,param_6,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_3);
  if (local_88 == (void *)0x0) {
    pcVar11 = (char *)0x8000000100db0f00;
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    SVar15.str = (char *)0xd000000000000021;
  }
  else {
    SVar2.bridgeObject = pvStack_98;
    SVar2.str = local_a0;
    local_b0 = local_a0;
    pvVar8 = local_88;
    local_80 = Swift::String::__fromSubstring(SVar2);
    Swift::RawRepresentable::_init();
    lVar10 = *(long *)(param_7 + -8);
    lVar5 = lVar12;
    SVar15.str = param_7;
    (**(code **)(lVar10 + 0x30))(lVar12,1);
    if ((int)lVar5 != 1) {
      _swift_bridgeObjectRelease(local_88);
      (**(code **)(lVar10 + 0x20))(local_a8,lVar12,param_7);
      return;
    }
    (**(code **)(lVar13 + 8))(lVar12);
    local_80.str = (char *)0x0;
    local_80.bridgeObject = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3d,_Var4);
    SVar14.bridgeObject = (void *)0xeb00000000272072;
    SVar14.str = (char *)0x6574656d61726150;
    SVar19.bridgeObject = pvVar8;
    SVar19.str = SVar15.str;
    Swift::String::append(SVar14,SVar19);
    SVar16.bridgeObject = pvStack_98;
    SVar16.str = local_b0;
    pvVar8 = local_88;
    SVar15 = Swift::String::__fromSubstring(SVar16);
    SVar20.bridgeObject = pvVar8;
    SVar20.str = local_90;
    Swift::String::append(SVar15,SVar20);
    _swift_bridgeObjectRelease(local_88);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    SVar17.bridgeObject = (void *)0x8000000100db0f90;
    SVar17.str = (char *)0xd00000000000002d;
    SVar21.bridgeObject = pvVar8;
    SVar21.str = local_90;
    Swift::String::append(SVar17,SVar21);
    SVar15 = Swift::__typeName(SUB81(param_7,0));
    SVar22.bridgeObject = pvVar8;
    SVar22.str = local_90;
    Swift::String::append(SVar15,SVar22);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x29;
    SVar23.bridgeObject = pvVar8;
    SVar23.str = local_90;
    Swift::String::append(SVar18,SVar23);
    pcVar11 = local_80.bridgeObject;
    SVar15.str = local_80.str;
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
  }
  puVar7 = puVar6;
  FUN_1006be0ac();
  _swift_allocError(&DAT_100ef7ae0,puVar7,0,0);
  builtin_strncpy((char *)(puVar7 + 1),"Bad Requ",8);
  *puVar7 = 400;
  puVar7[2] = 0xeb00000000747365;
  puVar7[3] = puVar6;
  puVar7[4] = SVar15.str;
  puVar7[5] = pcVar11;
  _swift_willThrow();
  return;
}



/* Address: 0x1006ea46c | FUN_1006ea46c */

undefined * FUN_1006ea46c(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  String SVar13;
  undefined *local_80;
  char *pcStack_78;
  void *local_70;
  ulong uStack_68;
  
  ppuVar5 = &local_80;
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar9 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 7;
  if (uVar9 == 0) {
    uVar10 = 0xb;
  }
  SVar13.str = (char *)(uVar10 | (long)pvVar1 << 0x10);
  SVar13.bridgeObject = param_1;
  local_80 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar13);
  pcStack_78 = SVar13.str;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_100a30a30(&local_80,param_3,param_4,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  uVar10 = *(ulong *)((long)ppuVar5 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar10 != 0) {
    uVar11 = 0;
    puVar12 = (undefined8 *)((long)ppuVar5 + 0x38);
    do {
      if (*(ulong *)((long)ppuVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ea618);
        (*pcVar4)();
      }
      uVar3 = *puVar12;
      SVar13 = *(String *)(puVar12 + -3);
      _swift_bridgeObjectRetain(uVar3);
      SVar13 = Swift::String::__fromSubstring(SVar13);
      _swift_bridgeObjectRelease(uVar3);
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_1006a2520(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1006a2520(puVar8,uVar2 + 1,1,puVar7);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(String *)(puVar8 + uVar2 * 0x10 + 0x20) = SVar13;
      puVar12 = puVar12 + 4;
    } while (uVar10 != uVar11);
  }
  _swift_bridgeObjectRelease(ppuVar5);
  return puVar8;
}



/* Address: 0x1006ea618 | FUN_1006ea618 */

void FUN_1006ea618(void)

{
  FUN_1006ea630();
  return;
}



/* Address: 0x1006ea624 | FUN_1006ea624 */

void FUN_1006ea624(void)

{
  FUN_1006ea630();
  return;
}



/* Address: 0x1006ea630 | FUN_1006ea630 */

undefined8
FUN_1006ea630(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  ulong uVar2;
  undefined **ppuVar3;
  uint uVar4;
  String SVar5;
  undefined *local_60;
  char *pcStack_58;
  void *local_50;
  ulong uStack_48;
  
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar4 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar2 = 7;
  if (uVar4 == 0) {
    uVar2 = 0xb;
  }
  SVar5.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar5.bridgeObject = param_1;
  local_60 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar5);
  ppuVar3 = &local_60;
  pcStack_58 = SVar5.str;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_100a30a30(ppuVar3,param_4,param_5,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  FUN_1000f7830(&DAT_100fdddd8,&DAT_100c72778);
  FUN_1006eb3c4(&DAT_100fddde0,PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  (extension_Swift)::Swift::Sequence::_compactMap();
  _swift_bridgeObjectRelease(ppuVar3);
  return param_8;
}



/* Address: 0x1006ea750 | FUN_1006ea750 */

void FUN_1006ea750(void)

{
  FUN_1006ea994();
  return;
}



/* Address: 0x1006ea76c | FUN_1006ea76c */

void FUN_1006ea76c(undefined8 param_1,String *param_2,char *param_3,void *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  void *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  _StringGuts _Var4;
  
  local_88 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  _Var4.unknown = (undefined *)CONCAT71(extraout_var,OVar3.value);
  lVar13 = *(long *)(_Var4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_90 + -extraout_x8;
  pcStack_78 = param_2->str;
  local_80 = param_2->bridgeObject;
  pcVar10 = param_2[1].str;
  pvVar11 = param_2[1].bridgeObject;
  SVar15 = Swift::String::__fromSubstring(*param_2);
  Swift::LosslessStringConvertible::_init(SVar15);
  lVar12 = *(long *)(param_3 + -8);
  puVar5 = puVar14;
  pcVar9 = param_3;
  (**(code **)(lVar12 + 0x30))(puVar14,1);
  if ((int)puVar5 == 1) {
    (**(code **)(lVar13 + 8))(puVar14);
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x49,_Var4);
    SVar15.bridgeObject = (void *)0x8000000100db0f70;
    SVar15.str = (char *)0xd000000000000017;
    SVar19.bridgeObject = param_4;
    SVar19.str = pcVar9;
    Swift::String::append(SVar15,SVar19);
    SVar16.bridgeObject = local_80;
    SVar16.str = pcStack_78;
    SVar15 = Swift::String::__fromSubstring(SVar16);
    SVar20.bridgeObject = pvVar11;
    SVar20.str = pcVar10;
    Swift::String::append(SVar15,SVar20);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    SVar17.bridgeObject = (void *)0x8000000100db0f90;
    SVar17.str = (char *)0xd00000000000002d;
    SVar21.bridgeObject = pvVar11;
    SVar21.str = pcVar10;
    Swift::String::append(SVar17,SVar21);
    SVar15 = Swift::__typeName(SUB81(param_3,0));
    SVar22.bridgeObject = pvVar11;
    SVar22.str = pcVar10;
    Swift::String::append(SVar15,SVar22);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x29;
    SVar23.bridgeObject = pvVar11;
    SVar23.str = pcVar10;
    Swift::String::append(SVar18,SVar23);
    uVar2 = uStack_68;
    uVar1 = local_70;
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar7 = puVar6;
    FUN_1006be0ac();
    puVar8 = &DAT_100ef7ae0;
    _swift_allocError(&DAT_100ef7ae0,puVar7,0,0);
    builtin_strncpy((char *)(puVar7 + 1),"Bad Requ",8);
    *puVar7 = 400;
    puVar7[2] = 0xeb00000000747365;
    puVar7[3] = puVar6;
    puVar7[4] = uVar1;
    puVar7[5] = uVar2;
    _swift_willThrow();
    *param_5 = puVar8;
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_88,puVar14,param_3);
  }
  return;
}



/* Address: 0x1006ea978 | FUN_1006ea978 */

void FUN_1006ea978(void)

{
  FUN_1006ea994();
  return;
}



/* Address: 0x1006ea994 | FUN_1006ea994 */

undefined8
FUN_1006ea994(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  String SVar8;
  undefined1 local_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *pcStack_68;
  void *local_60;
  ulong uStack_58;
  
  pvVar1 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    pvVar1 = (void *)(param_2 >> 0x38 & 0xf);
  }
  uVar7 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar2 = 7;
  if (uVar7 == 0) {
    uVar2 = 0xb;
  }
  SVar8.str = (char *)(uVar2 | (long)pvVar1 << 0x10);
  SVar8.bridgeObject = param_1;
  local_70 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar8);
  ppuVar3 = &local_70;
  pcStack_68 = SVar8.str;
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_100a30a30(ppuVar3,param_4,param_5,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_bridgeObjectRelease(param_2);
  puVar4 = &DAT_100fdddd8;
  local_80 = param_6;
  uStack_78 = param_7;
  FUN_1000f7830(&DAT_100fdddd8,&DAT_100c72778);
  puVar5 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar6 = &DAT_100fddde8;
  FUN_1006eb3c4(&DAT_100fddde8,PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  FUN_100193cd8(param_8,auStack_90,puVar4,param_6,puVar5,puVar6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_98);
  _swift_bridgeObjectRelease(ppuVar3);
  return param_8;
}



/* Address: 0x1006eaaf8 | FUN_1006eaaf8 */

void FUN_1006eaaf8(undefined8 param_1,String *param_2,char *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  String SVar14;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  void *local_80;
  char *pcStack_78;
  String local_70;
  _StringGuts _Var2;
  String SVar15;
  
  local_88 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  _Var2.unknown = (undefined *)CONCAT71(extraout_var,OVar1.value);
  lVar12 = *(long *)(_Var2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  pcStack_78 = param_2->str;
  local_80 = param_2->bridgeObject;
  pcVar8 = param_2[1].str;
  pvVar10 = param_2[1].bridgeObject;
  pvVar9 = pvVar10;
  local_70 = Swift::String::__fromSubstring(*param_2);
  Swift::RawRepresentable::_init();
  lVar11 = *(long *)(param_3 + -8);
  puVar3 = puVar13;
  pcVar7 = param_3;
  (**(code **)(lVar11 + 0x30))(puVar13,1);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar12 + 8))(puVar13);
    local_70.str = (char *)0x0;
    local_70.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x49,_Var2);
    SVar14.bridgeObject = (void *)0x8000000100db0f70;
    SVar14.str = (char *)0xd000000000000017;
    SVar18.bridgeObject = pvVar9;
    SVar18.str = pcVar7;
    Swift::String::append(SVar14,SVar18);
    SVar15.bridgeObject = local_80;
    SVar15.str = pcStack_78;
    SVar14 = Swift::String::__fromSubstring(SVar15);
    SVar19.bridgeObject = pvVar10;
    SVar19.str = pcVar8;
    Swift::String::append(SVar14,SVar19);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar16.bridgeObject = (void *)0x8000000100db0f90;
    SVar16.str = (char *)0xd00000000000002d;
    SVar20.bridgeObject = pvVar10;
    SVar20.str = pcVar8;
    Swift::String::append(SVar16,SVar20);
    SVar14 = Swift::__typeName(SUB81(param_3,0));
    SVar21.bridgeObject = pvVar10;
    SVar21.str = pcVar8;
    Swift::String::append(SVar14,SVar21);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar17.bridgeObject = (void *)0xe100000000000000;
    SVar17.str = (char *)0x29;
    SVar22.bridgeObject = pvVar10;
    SVar22.str = pcVar8;
    Swift::String::append(SVar17,SVar22);
    pvVar10 = local_70.bridgeObject;
    pcVar8 = local_70.str;
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar5 = puVar4;
    FUN_1006be0ac();
    puVar6 = &DAT_100ef7ae0;
    _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
    builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
    *puVar5 = 400;
    puVar5[2] = 0xeb00000000747365;
    puVar5[3] = puVar4;
    puVar5[4] = pcVar8;
    puVar5[5] = pvVar10;
    _swift_willThrow();
    *param_5 = puVar6;
  }
  else {
    (**(code **)(lVar11 + 0x20))(local_88,puVar13,param_3);
  }
  return;
}



/* Address: 0x1006ead0c | FUN_1006ead0c */

void FUN_1006ead0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  String SVar2;
  undefined1 *puVar1;
  
  SVar2.bridgeObject = &DAT_e400000000000000;
  SVar2.str = (char *)0x3a2a2a3a;
  puVar1 = &DAT_e400000000000000;
  DAT_101058120 = Swift::Substring::init(SVar2);
  DAT_101058128 = puVar1;
  DAT_101058130 = param_3;
  DAT_101058138 = param_4;
  return;
}



/* Address: 0x1006ead3c | FUN_1006ead3c */

undefined8 * FUN_1006ead3c(void)

{
  if (DAT_100fdddf0 != -1) {
    _swift_once(&DAT_100fdddf0,FUN_1006ead0c);
  }
  return &DAT_101058120;
}



/* Address: 0x1006ead7c | FUN_1006ead7c */

undefined8 FUN_1006ead7c(void)

{
  undefined8 uVar1;
  
  if (DAT_100fdddf0 != -1) {
    _swift_once(&DAT_100fdddf0,FUN_1006ead0c);
  }
  uVar1 = DAT_101058120;
  _swift_bridgeObjectRetain(DAT_101058138);
  return uVar1;
}



/* Address: 0x1006eadec | FUN_1006eadec */

undefined * FUN_1006eadec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (DAT_100fdddf0 != -1) {
    _swift_once(&DAT_100fdddf0,FUN_1006ead0c);
  }
  FUN_100a3000c(&local_50,&DAT_101058120,param_1,param_2,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_38 != 0) {
    _swift_bridgeObjectRetain(local_38);
    puVar1 = (undefined *)0x2f;
    FUN_1006eaec8(0x2f,0xe100000000000000,0x7fffffffffffffff,1,local_50,local_48,uStack_40,local_38)
    ;
    _swift_bridgeObjectRelease(local_38);
  }
  return puVar1;
}



/* Address: 0x1006eaec8 | FUN_1006eaec8 */

undefined *
FUN_1006eaec8(char *param_1,void *param_2,long param_3,uint param_4,Range<Index> param_5,
             Substring param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  Character CVar2;
  code *pcVar3;
  bool bVar4;
  Index after;
  Substring SVar5;
  Index IVar6;
  undefined *puVar7;
  Substring SVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  Index IVar11;
  Range<Index> RVar12;
  Substring SVar13;
  ulong uVar14;
  ulong uVar15;
  Character CVar16;
  undefined *local_80;
  
  CVar2.bridgeObject = param_2;
  CVar2.str = param_1;
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006eb24c);
    (*pcVar3)();
  }
  uVar14 = (ulong)param_5.unknown >> 0xe;
  uVar15 = (ulong)param_6.unknown >> 0xe;
  SVar13.unknown = param_6.unknown;
  if ((param_3 != 0) && (uVar14 != uVar15)) {
    _swift_bridgeObjectRetain(param_8);
    IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_5.unknown;
    local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1006eaf3c:
    uVar14 = (ulong)IVar6.cmsgPointer.unknown >> 0xe;
    after.cmsgPointer.unknown = IVar6.cmsgPointer.unknown;
    if (uVar14 != uVar15) {
      do {
        CVar16 = Swift::Substring::get_subscript(after,(Substring)param_5.unknown);
        _Var10.unknown = CVar16.bridgeObject;
        if (CVar16 == CVar2) {
          _swift_bridgeObjectRelease(_Var10.unknown);
LAB_1006eafe4:
          if (((ulong)IVar6.cmsgPointer.unknown >> 0xe != uVar14) || ((param_4 & 1) == 0))
          goto LAB_1006eb028;
          after = Swift::Substring::index(after,(Substring)param_5.unknown);
          IVar6 = after;
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar16.str,_Var10,(_StringComparisonResult)(__int8)param_1
                            );
          _swift_bridgeObjectRelease(_Var10.unknown);
          if (bVar4) goto LAB_1006eafe4;
          after = Swift::Substring::index(after,(Substring)param_5.unknown);
        }
        uVar14 = (ulong)after.cmsgPointer.unknown >> 0xe;
        if (uVar14 == uVar15) break;
      } while( true );
    }
    goto LAB_1006eb134;
  }
  if ((uVar14 == uVar15) && (local_80 = PTR___swiftEmptyArrayStorage_100eae0d8, (param_4 & 1) != 0))
  goto LAB_1006eb214;
  if (uVar15 < uVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006eb270);
    (*pcVar3)();
  }
  SVar8 = Swift::Substring::get_subscript(param_5,param_6);
  puVar9 = (undefined *)0x0;
  FUN_1006a2740(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar14 = *(ulong *)(puVar9 + 0x10);
  uVar15 = *(ulong *)(puVar9 + 0x18);
LAB_1006eb1f4:
  local_80 = puVar9;
  if (uVar15 >> 1 <= uVar14) {
    local_80 = (undefined *)(ulong)(1 < uVar15);
    FUN_1006a2740(local_80,uVar14 + 1,1,puVar9);
  }
  *(ulong *)(local_80 + 0x10) = uVar14 + 1;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x20) = SVar8.unknown;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x28) = param_6.unknown;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x30) = param_5.unknown;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x38) = SVar13.unknown;
LAB_1006eb214:
  _swift_bridgeObjectRelease(param_8);
  return local_80;
LAB_1006eb028:
  if (uVar14 < (ulong)IVar6.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006eb298);
    (*pcVar3)();
  }
  IVar11.cmsgPointer.unknown = after.cmsgPointer.unknown;
  RVar12.unknown = param_5.unknown;
  SVar8.unknown = param_6.unknown;
  SVar5 = Swift::Substring::get_subscript
                    ((Range<Index>)IVar6.cmsgPointer.unknown,(Substring)after.cmsgPointer.unknown);
  puVar7 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1006a2740(0,*plVar1 + 1,1);
  }
  uVar14 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar14) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1006a2740(puVar7,uVar14 + 1,1,local_80);
    local_80 = puVar7;
  }
  *(ulong *)(local_80 + 0x10) = uVar14 + 1;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x20) = SVar5.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar14 * 0x20 + 0x28) = IVar11.cmsgPointer.unknown;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x30) = RVar12.unknown;
  *(undefined **)(local_80 + uVar14 * 0x20 + 0x38) = SVar8.unknown;
  IVar6 = Swift::Substring::index(after,(Substring)param_5.unknown);
  if (*(long *)(local_80 + 0x10) == param_3) goto LAB_1006eb134;
  goto LAB_1006eaf3c;
LAB_1006eb134:
  if (((ulong)IVar6.cmsgPointer.unknown >> 0xe == uVar15) && ((param_4 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_8);
    goto LAB_1006eb214;
  }
  if (uVar15 < (ulong)IVar6.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006eb274);
    (*pcVar3)();
  }
  SVar8 = Swift::Substring::get_subscript((Range<Index>)IVar6.cmsgPointer.unknown,param_6);
  _swift_bridgeObjectRelease(param_8);
  puVar7 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar9 = local_80;
  if (((ulong)puVar7 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    FUN_1006a2740(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
  }
  uVar14 = *(ulong *)(puVar9 + 0x10);
  uVar15 = *(ulong *)(puVar9 + 0x18);
  goto LAB_1006eb1f4;
}



/* Address: 0x1006eb298 | FUN_1006eb298 */

void FUN_1006eb298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (DAT_100fdddf0 != -1) {
    _swift_once(&DAT_100fdddf0,FUN_1006ead0c,uVar2);
  }
  uVar3 = 0;
  FUN_100a30b80(&DAT_101058120,uVar1,uVar2,PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  if ((uVar3 & 1) == 0) {
    uStack_88 = DAT_101058128;
    local_90 = DAT_101058120;
    local_80 = DAT_101058130;
    uStack_78 = DAT_101058138;
    local_70 = param_1;
    uStack_68 = param_2;
    local_60 = param_3;
    uStack_58 = param_4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_4);
    puVar4 = &DAT_100fdddf8;
    FUN_1000f7830(&DAT_100fdddf8,&DAT_100c72780);
    FUN_100a3017c(&local_70,&local_90,puVar4);
  }
  return;
}



/* Address: 0x1006eb390 | FUN_1006eb390 */

void FUN_1006eb390(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006e9ce8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006eb3a8 | FUN_1006eb3a8 */

void FUN_1006eb3a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006ea76c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Address: 0x1006eb3c4 | FUN_1006eb3c4 */

void FUN_1006eb3c4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fdddd8;
    FUN_1000f8b08(&DAT_100fdddd8,&DAT_100c72778);
    _swift_getWitnessTable(param_2,puVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1006eb410 | FUN_1006eb410 */

void FUN_1006eb410(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006eaaf8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Address: 0x1006eb42c | FUN_1006eb42c */

undefined8 FUN_1006eb42c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  String SVar2;
  undefined1 auStack_80 [56];
  undefined8 local_48;
  
  uVar1 = param_1;
  thunk_FUN_10085c548();
  local_48 = uVar1;
  FUN_10085d7bc(4);
  _swift_bridgeObjectRetain(param_2);
  FUN_100857650(auStack_80,0x2d746e65746e6f43,0xec00000065707954,0x2d746e65746e6f63,
                0xec00000065707974,param_1,param_2);
  FUN_10085d8f8();
  FUN_1006bd6b8();
  Swift::RangeReplaceableCollection::_insert();
  FUN_1006cb580();
  SVar2 = (extension_Swift)::Swift::BinaryInteger::get_description();
  FUN_100857650(auStack_80,0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,
                0xee006874676e656c,SVar2.str,SVar2.bridgeObject);
  FUN_10085d8f8();
  Swift::RangeReplaceableCollection::_insert();
  return local_48;
}



/* Address: 0x1006eb55c | FUN_1006eb55c */

void FUN_1006eb55c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1006be04c();
  uVar1 = unaff_x20[4];
  uVar3 = unaff_x20[7];
  uVar2 = unaff_x20[6];
  param_1[5] = unaff_x20[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_x20 + 8);
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1006eb5a4 | FUN_1006eb5a4 */

void FUN_1006eb5a4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_48 = unaff_x20[5];
  local_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  local_30 = *(undefined1 *)(unaff_x20 + 8);
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  FUN_1006be04c(&local_70,auStack_b8);
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  *(undefined1 *)(param_1 + 8) = local_30;
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Address: 0x1006eb60c | FUN_1006eb60c */

void FUN_1006eb60c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ec108(&local_68,param_2,param_4,param_5,param_6,param_7);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb668 | FUN_1006eb668 */

void FUN_1006eb668(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ec108(&local_68,param_2,*unaff_x20,unaff_x20[1],param_4,param_5);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb6c8 | FUN_1006eb6c8 */

void FUN_1006eb6c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ec270(&local_68,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}


