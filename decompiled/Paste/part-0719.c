/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007dfae8 | FUN_1007dfae8 */

void FUN_1007dfae8(undefined8 *param_1,undefined8 *param_2)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_28 = *param_1;
  uStack_38 = param_2[1];
  local_40 = *param_2;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar1.unknown
            );
  FUN_1007e023c(&local_28,&local_40,CVar1.unknown,puVar2);
  return;
}



/* Address: 0x1007dfb4c | FUN_1007dfb4c */

void FUN_1007dfb4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1007de3b4(param_1,param_2,thunk_FUN_1007de320);
  return;
}



/* Address: 0x1007dfb58 | FUN_1007dfb58 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007dfcc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007dfb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  AncestorRepresentation AVar2;
  DisplayStyle DVar3;
  undefined *puVar4;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lVar5;
  
  local_a0 = param_7;
  local_98 = param_1;
  AVar2 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  lVar8 = (long)&local_a0 -
          (*(long *)(*(long *)(CONCAT71((int7)((ulong)param_2 >> 8),AVar2.value) + -8) + 0x40) +
           0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fe6698;
  FUN_1000f7830(&DAT_100fe6698,&TargetResilientWitness_100c79308);
  lVar9 = lVar8 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_DisplayStyle_collection_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd80
  ;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = param_4;
  DVar3 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)puVar4 >> 8),DVar3.value);
  lVar10 = *(long *)(lVar5 + -8);
  (**(code **)(lVar10 + 0x68))(lVar9,uVar1,lVar5);
  (**(code **)(lVar10 + 0x38))(lVar9,0,1,lVar5);
  uVar6 = 0;
  FUN_1007e0304(0,param_5,param_6,local_a0);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar6);
  FUN_1007de1ec(lVar8,uVar6,uVar6,pTVar7);
  _swift_retain_n(param_2,2);
  _swift_retain_n(param_3,2);
  _swift_retain_n(param_4,2);
  Swift::Mirror::_init(local_98,pTVar7,&local_90,lVar9,lVar8,uVar6,uVar6,pTVar7);
  return;
}



/* Address: 0x1007dfce4 | FUN_1007dfce4 */

void FUN_1007dfce4(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007dfb58(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1007dfcfc | thunk_FUN_1007e0458 */

bool thunk_FUN_1007e0458(ulong param_1,undefined8 param_2,ContiguousArray<undefined> param_3,
                        undefined8 param_4,undefined8 param_5,ContiguousArray<undefined> param_6,
                        undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  
  FUN_1007e93ac(param_1,param_2,param_4,param_5,param_7,param_9);
  if ((param_1 & 1) != 0) {
    bVar1 = (extension_Swift)::Swift::ContiguousArray::____infix(param_3,param_6);
    return bVar1;
  }
  return false;
}



/* Address: 0x1007dfd00 | FUN_1007dfd00 */

uint FUN_1007dfd00(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  thunk_FUN_1007e0458(uVar1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],
                      *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                      *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + -8));
  return (uint)uVar1 & 1;
}



/* Address: 0x1007dfd4c | thunk_FUN_1007e0650 */

void thunk_FUN_1007e0650(undefined *param_1,undefined8 param_2,undefined8 param_3,
                        ContiguousArray param_4,long param_5,undefined *param_6,undefined8 param_7,
                        undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  long lVar5;
  undefined7 extraout_var;
  __uint64 _Var6;
  undefined8 uVar7;
  long lVar8;
  Hasher HVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  Hasher HStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lStack_b8 = *(long *)(param_6 + -8);
  lVar13 = (long)&puStack_e0 - (*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = *(long *)(param_5 + -8);
  lVar11 = lVar13 - (*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  uStack_b0 = param_8;
  uStack_88 = param_7;
  _swift_getTupleTypeMetadata2(0xff,param_5,param_6,"key value ",0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,OVar4.value);
  lStack_98 = *(long *)(lStack_90 + -8);
  uVar10 = *(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_a0 = lVar11 - uVar10;
  lVar12 = lStack_a0 - uVar10;
  HVar9.unknown = param_6;
  _Var6 = Swift::ContiguousArray::get_count(param_4);
  HStack_c0.unknown = param_1;
  Swift::Hasher::_combine(_Var6,HVar9);
  uStack_68 = 0;
  uVar7 = 0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  puStack_70 = param_4.unknown;
  FUN_1007e4458(0,param_5,param_6,uStack_88);
  uStack_d0 = param_2;
  uStack_a8 = uVar7;
  _swift_retain(param_2);
  uStack_d8 = param_3;
  _swift_retain(param_3);
  puStack_e0 = param_4.unknown;
  _swift_retain(param_4.unknown);
  lVar3 = lStack_b8;
  while( true ) {
    lVar2 = lStack_a0;
    FUN_1007e40f0(lStack_a0,uStack_a8);
    (**(code **)(lStack_98 + 0x20))(lVar12,lVar2,lStack_90);
    lVar8 = lVar12;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar12,1,lVar5);
    lVar2 = lStack_c8;
    if ((int)lVar8 == 1) break;
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(lStack_c8 + 0x20))(lVar11,lVar12,param_5);
    (**(code **)(lVar3 + 0x20))(lVar13,lVar12 + iVar1,param_6);
    HVar9.unknown = HStack_c0.unknown;
    Swift::Hashable::hash(HStack_c0);
    Swift::Hashable::hash(HVar9);
    (**(code **)(lVar3 + 8))(lVar13,param_6);
    (**(code **)(lVar2 + 8))(lVar11,param_5);
  }
  _swift_release(puStack_e0);
  _swift_release(uStack_d8);
  _swift_release(uStack_d0);
  return;
}



/* Address: 0x1007dfd50 | FUN_1007dfd50 */

void FUN_1007dfd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Hasher HVar1;
  undefined1 auStack_98 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_98;
  FUN_1007e0650(HVar1.unknown,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007dfddc | FUN_1007dfddc */

void FUN_1007dfddc(long param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1007dfd50(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x1007dfdf8 | FUN_1007dfdf8 */

void FUN_1007dfdf8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1007e0650(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                      *(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x1007dfe14 | FUN_1007dfe14 */

void FUN_1007dfe14(__int64 param_1,long param_2,long param_3)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  thunk_FUN_1007e0650(HVar1.unknown,*unaff_x20,unaff_x20[1],unaff_x20[2],
                      *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                      *(undefined8 *)(param_2 + 0x20),uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007dfe70 | FUN_1007dfe70 */

void FUN_1007dfe70(void)

{
  FUN_1007e00a8();
  return;
}



/* Address: 0x1007dfe7c | FUN_1007dfe7c */

void FUN_1007dfe7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x18),
                *(undefined8 *)(param_6 + 0x20));
  FUN_1007e284c(param_1,param_2,param_3,param_4,param_5,uVar1);
  return;
}



/* Address: 0x1007dfee0 | FUN_1007dfee0 */

void FUN_1007dfee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  FUN_1007e2af0(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1007dff34 | FUN_1007dff34 */

void FUN_1007dff34(void)

{
  FUN_1007e01e4();
  return;
}



/* Address: 0x1007dff50 | FUN_1007dff50 */

void FUN_1007dff50(long param_1)

{
  FUN_1007e85b0(0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  FUN_1007e2d50();
  return;
}



/* Address: 0x1007dff80 | FUN_1007dff80 */

void FUN_1007dff80(undefined8 param_1)

{
  FUN_1007dffe8(param_1,FUN_1007e2d98);
  return;
}



/* Address: 0x1007dff8c | FUN_1007dff8c */

void FUN_1007dff8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  FUN_1007e2db0(param_1,uVar1,param_3,param_4);
  return;
}



/* Address: 0x1007dffdc | FUN_1007dffdc */

void FUN_1007dffdc(undefined8 param_1)

{
  FUN_1007dffe8(param_1,FUN_1007e3140);
  return;
}



/* Address: 0x1007dffe8 | FUN_1007dffe8 */

void FUN_1007dffe8(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  FUN_1007e85b0(0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001007e0014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1007e0018 | FUN_1007e0018 */

void FUN_1007e0018(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  FUN_1007e395c(param_1,uVar1);
  return;
}



/* Address: 0x1007e0050 | FUN_1007e0050 */

void FUN_1007e0050(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  FUN_1007e39bc(param_1,param_2,param_3,uVar1);
  return;
}



/* Address: 0x1007e009c | FUN_1007e009c */

void FUN_1007e009c(void)

{
  FUN_1007e00a8();
  return;
}



/* Address: 0x1007e00a8 | FUN_1007e00a8 */

void FUN_1007e00a8(undefined8 param_1,undefined8 param_2,long param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001007e00fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1007e0100 | FUN_1007e0100 */

void FUN_1007e0100(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  FUN_1007e3ac0(param_1,uVar1,param_3,param_4);
  return;
}



/* Address: 0x1007e0150 | FUN_1007e0150 */

void FUN_1007e0150(void)

{
  FUN_1007e00a8();
  return;
}



/* Address: 0x1007e015c | FUN_1007e015c */

void FUN_1007e015c(undefined8 param_1,undefined8 param_2)

{
  FUN_1007e0180(param_1,param_2,FUN_1007e3c1c);
  return;
}



/* Address: 0x1007e0168 | FUN_1007e0168 */

void FUN_1007e0168(void)

{
  FUN_1007e00a8();
  return;
}



/* Address: 0x1007e0174 | FUN_1007e0174 */

void FUN_1007e0174(undefined8 param_1,undefined8 param_2)

{
  FUN_1007e0180(param_1,param_2,FUN_1007e3d74);
  return;
}



/* Address: 0x1007e0180 | FUN_1007e0180 */

void FUN_1007e0180(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  (*param_3)(param_1,uVar1);
  return;
}



/* Address: 0x1007e01c8 | FUN_1007e01c8 */

void FUN_1007e01c8(void)

{
  FUN_1007e01e4();
  return;
}



/* Address: 0x1007e01e4 | FUN_1007e01e4 */

void FUN_1007e01e4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1007e85b0(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  (*param_4)(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1007e023c | FUN_1007e023c */

void FUN_1007e023c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ClosedRange CVar5;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  bVar3 = Swift::Comparable::<__infix(param_2,param_1,uVar4,param_4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e0300);
    (*pcVar2)();
  }
  CVar5 = Swift::ClosedRange::typeMetadataAccessor();
  bVar3 = Swift::Comparable::<__infix
                    (param_1,param_2 + *(int *)(CVar5.unknown + 0x24),uVar4,param_4);
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007e0304);
  (*pcVar2)();
}



/* Address: 0x1007e0304 | FUN_1007e0304 */

void FUN_1007e0304(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007e0310 | FUN_1007e0310 */

void FUN_1007e0310(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c79a80,param_1);
  return;
}



/* Address: 0x1007e0320 | FUN_1007e0320 */

void FUN_1007e0320(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c79740,param_1);
  return;
}



/* Address: 0x1007e0330 | FUN_1007e0330 */

void FUN_1007e0330(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79488,param_1);
  return;
}



/* Address: 0x1007e0340 | FUN_1007e0340 */

void FUN_1007e0340(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,param_1);
  return;
}



/* Address: 0x1007e0350 | FUN_1007e0350 */

void FUN_1007e0350(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c794d8,param_1);
  return;
}



/* Address: 0x1007e0360 | FUN_1007e0360 */

void FUN_1007e0360(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79688,param_1);
  return;
}



/* Address: 0x1007e0370 | FUN_1007e0370 */

void FUN_1007e0370(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  return;
}



/* Address: 0x1007e0380 | FUN_1007e0380 */

void FUN_1007e0380(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c798f8,param_1,&local_18);
  return;
}



/* Address: 0x1007e03b8 | FUN_1007e03b8 */

undefined8 * FUN_1007e03b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1007e042c | FUN_1007e042c */

void FUN_1007e042c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007e0440 | thunk_FUN_1007df2b8 */

void thunk_FUN_1007df2b8(void)

{
  thunk_FUN_1007df2b8();
  return;
}



/* Address: 0x1007e0444 | thunk_FUN_1007df588 */

void thunk_FUN_1007df588(void)

{
  FUN_1007df588();
  return;
}



/* Address: 0x1007e0448 | thunk_FUN_1007de320 */

void thunk_FUN_1007de320(void)

{
  thunk_FUN_1007de320();
  return;
}



/* Address: 0x1007e044c | thunk_FUN_1007df490 */

void thunk_FUN_1007df490(void)

{
  thunk_FUN_1007df490();
  return;
}



/* Address: 0x1007e0450 | thunk_FUN_1007df3c0 */

void thunk_FUN_1007df3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1007df414(param_1[3],param_1,param_1[4],param_1[6],param_1[5]);
  uVar1 = *param_1;
  uVar2 = param_1[2];
  _swift_release(param_1[1]);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007e0454 | thunk_FUN_1002d1568 */

void thunk_FUN_1002d1568(void)

{
  thunk_FUN_1002d1568();
  return;
}



/* Address: 0x1007e0458 | FUN_1007e0458 */

bool FUN_1007e0458(ulong param_1,undefined8 param_2,ContiguousArray<undefined> param_3,
                  undefined8 param_4,undefined8 param_5,ContiguousArray<undefined> param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  
  FUN_1007e93ac(param_1,param_2,param_4,param_5,param_7,param_9);
  if ((param_1 & 1) != 0) {
    bVar1 = (extension_Swift)::Swift::ContiguousArray::____infix(param_3,param_6);
    return bVar1;
  }
  return false;
}



/* Address: 0x1007e04c0 | FUN_1007e04c0 */

uint FUN_1007e04c0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1007e0458(uVar1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],
                *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + -8));
  return (uint)uVar1 & 1;
}



/* Address: 0x1007e050c | FUN_1007e050c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e05a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 *
FUN_1007e050c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  
  local_48 = param_1;
  _swift_getTupleTypeMetadata2(0xff,param_2,param_3,0,0);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar1) {
    _swift_bridgeObjectRelease(param_1);
    FUN_1007f61ec(param_2,param_4);
    Swift::Array<undefined>::_allocateUninitialized(0,param_3);
    Swift::ContiguousArray::_init(param_2,param_3);
    puVar4 = param_2;
  }
  else {
    puVar3 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    local_48 = param_1;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar2);
    puVar4 = &local_48;
    FUN_1007e18c4(puVar4,param_2,param_3,uVar2,param_4,puVar3);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar4;
}



/* Address: 0x1007e061c | FUN_1007e061c */

void FUN_1007e061c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  FUN_1007e050c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1007e0650 | FUN_1007e0650 */

void FUN_1007e0650(undefined *param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4,
                  long param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  long lVar5;
  undefined7 extraout_var;
  __uint64 _Var6;
  undefined8 uVar7;
  long lVar8;
  Hasher HVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  Hasher local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_b8 = *(long *)(param_6 + -8);
  lVar13 = (long)&local_e0 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(long *)(param_5 + -8);
  lVar11 = lVar13 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  local_b0 = param_8;
  local_88 = param_7;
  _swift_getTupleTypeMetadata2(0xff,param_5,param_6,"key value ",0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,OVar4.value);
  local_98 = *(long *)(lStack_90 + -8);
  uVar10 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar11 - uVar10;
  lVar12 = local_a0 - uVar10;
  HVar9.unknown = param_6;
  _Var6 = Swift::ContiguousArray::get_count(param_4);
  local_c0.unknown = param_1;
  Swift::Hasher::_combine(_Var6,HVar9);
  uStack_68 = 0;
  uVar7 = 0;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4.unknown;
  FUN_1007e4458(0,param_5,param_6,local_88);
  local_d0 = param_2;
  local_a8 = uVar7;
  _swift_retain(param_2);
  local_d8 = param_3;
  _swift_retain(param_3);
  local_e0 = param_4.unknown;
  _swift_retain(param_4.unknown);
  lVar3 = local_b8;
  while( true ) {
    lVar2 = local_a0;
    FUN_1007e40f0(local_a0,local_a8);
    (**(code **)(local_98 + 0x20))(lVar12,lVar2,lStack_90);
    lVar8 = lVar12;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar12,1,lVar5);
    lVar2 = local_c8;
    if ((int)lVar8 == 1) break;
    iVar1 = *(int *)(lVar5 + 0x30);
    (**(code **)(local_c8 + 0x20))(lVar11,lVar12,param_5);
    (**(code **)(lVar3 + 0x20))(lVar13,lVar12 + iVar1,param_6);
    HVar9.unknown = local_c0.unknown;
    Swift::Hashable::hash(local_c0);
    Swift::Hashable::hash(HVar9);
    (**(code **)(lVar3 + 8))(lVar13,param_6);
    (**(code **)(lVar2 + 8))(lVar11,param_5);
  }
  _swift_release(local_e0);
  _swift_release(local_d8);
  _swift_release(local_d0);
  return;
}



/* Address: 0x1007e0880 | FUN_1007e0880 */

void FUN_1007e0880(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(0x100c799b0,param_1,&local_18);
  return;
}



/* Address: 0x1007e08b8 | FUN_1007e08b8 */

void FUN_1007e08b8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007e0650(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x1007e08d4 | FUN_1007e08d4 */

void FUN_1007e08d4(__int64 param_1,long param_2,long param_3)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_1007e0650(HVar1.unknown,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007e0930 | FUN_1007e0930 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e0964 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1007e0930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1007f61ec(param_1,param_3);
  Swift::Array<undefined>::_allocateUninitialized(0,param_2);
  Swift::ContiguousArray::_init(param_1,param_2);
  return param_1;
}



/* Address: 0x1007e0984 | FUN_1007e0984 */

void FUN_1007e0984(void)

{
  FUN_1007e135c();
  return;
}



/* Address: 0x1007e0990 | FUN_1007e0990 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e09d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

__int64 FUN_1007e0990(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  
  _Var1 = param_1;
  FUN_1007f6ae0();
  Swift::Array<undefined>::_allocateUninitialized(0,param_4);
  Swift::ContiguousArray::_init(_Var1,param_4);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(param_1,CVar2);
  return _Var1;
}



/* Address: 0x1007e0a18 | FUN_1007e0a18 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e0b98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 ****
FUN_1007e0a18(undefined8 *param_1,undefined8 ****param_2,long param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  Optional OVar5;
  long lVar6;
  long lVar7;
  Dictionary DVar8;
  undefined8 uVar9;
  ContiguousArray CVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_f0 [8];
  __int64 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar17 = *(long *)(param_3 + -8);
  uVar13 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = auStack_f0 + -uVar13;
  lVar18 = (long)local_b8 - uVar13;
  pppuVar15 = param_2[-1];
  uVar19 = lVar18 - ((long)pppuVar15[8] + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  local_c0 = param_1;
  local_80 = param_5;
  _swift_getTupleTypeMetadata2();
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_98 = CONCAT71((int7)((ulong)lVar6 >> 8),OVar5.value);
  local_a0 = *(long *)(lStack_98 + -8);
  uVar13 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = uVar19 - uVar13;
  lVar16 = local_a8 - uVar13;
  local_d0 = *(long *)(param_4 + -8);
  lVar14 = lVar16 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_d8 = lVar14;
  local_b0 = param_6;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_e0 = *(long *)(lVar7 + -8);
  local_90 = lVar14 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar7;
  DVar8 = Swift::Dictionary::typeMetadataAccessor();
  puVar2 = local_c0;
  local_c8 = param_4;
  if (param_4 == DVar8.unknown) {
    local_78 = (undefined8 ***)*local_c0;
    puVar11 = PTR_Swift__Swift__Dictionary<undefined,undefined>_>Swift__Sequence_100eabe70;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Dictionary<undefined,undefined>_>Swift__Sequence_100eabe70,
               DVar8.unknown);
    ppppuVar12 = &local_78;
    FUN_1007e1bf8(ppppuVar12,param_2,param_3,DVar8.unknown,local_80,puVar11);
    (**(code **)(local_d0 + 8))(puVar2,local_c8);
  }
  else {
    ppppuVar12 = param_2;
    uVar9 = local_80;
    FUN_1007f61ec();
    Swift::Array<undefined>::_allocateUninitialized(0,param_3);
    local_68 = (undefined *)Swift::ContiguousArray::_init(ppppuVar12,param_3);
    puVar11 = local_c8;
    local_78 = ppppuVar12;
    uStack_70 = uVar9;
    local_e8 = Swift::Sequence::get_underestimatedCount();
    uVar9 = 0;
    FUN_1007e85b0(0,param_2,param_3,local_80);
    FUN_1007e3fa0(local_e8,uVar9);
    (**(code **)(local_d0 + 0x10))(local_d8,local_c0,puVar11);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (local_b0,puVar11,local_88,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    while( true ) {
      lVar7 = local_a8;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_a0 + 0x20))(lVar16,lVar7,lStack_98);
      lVar7 = lVar16;
      (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar16,1,lVar6);
      if ((int)lVar7 == 1) break;
      iVar1 = *(int *)(lVar6 + 0x30);
      (*(code *)pppuVar15[4])(uVar19,lVar16,param_2);
      (**(code **)(lVar17 + 0x20))(lVar18,lVar16 + iVar1,param_3);
      uVar9 = 0;
      FUN_1007fa688(0,param_2,local_80);
      uVar13 = uVar19;
      FUN_1007ea300(uVar19,uVar9);
      puVar3 = local_b8;
      if ((uVar13 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007e0dd4);
        (*pcVar4)();
      }
      (**(code **)(lVar17 + 0x10))(local_b8,lVar18,param_3);
      CVar10 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(&local_78,puVar3,CVar10.unknown);
      (**(code **)(lVar17 + 8))(lVar18,param_3);
      (*(code *)pppuVar15[1])(uVar19,param_2);
    }
    (**(code **)(local_d0 + 8))(local_c0,local_c8);
    (**(code **)(local_e0 + 8))(local_90,local_88);
    ppppuVar12 = (undefined8 ****)local_78;
  }
  return ppppuVar12;
}



/* Address: 0x1007e0dd4 | FUN_1007e0dd4 */

void FUN_1007e0dd4(void)

{
  FUN_1007e135c();
  return;
}



/* Address: 0x1007e0de0 | FUN_1007e0de0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007e0e80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined **
FUN_1007e0de0(undefined8 param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
             long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  ContiguousArray<undefined> CVar2;
  ContiguousArray<undefined> CVar3;
  __int64 _Var4;
  __int64 _Var5;
  ContiguousArray CVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  local_70 = param_9;
  lVar10 = *(long *)(param_6 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  lVar11 = *(long *)(param_5 + -8);
  local_88 = param_7;
  local_78 = param_1;
  (**(code **)(lVar11 + 0x10))
            ((long)(auStack_90 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) -
             (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0),param_1,param_5);
  CVar2 = Swift::ContiguousArray::_init(param_1,param_3.unknown,param_5,param_8);
  local_80 = param_2;
  (**(code **)(lVar10 + 0x10))(auStack_90 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_2,param_6);
  CVar3 = Swift::ContiguousArray::_init(CVar2.unknown,param_4,param_6,local_70);
  _Var4 = Swift::ContiguousArray::get_count((ContiguousArray)CVar2.unknown);
  _Var5 = Swift::ContiguousArray::get_count((ContiguousArray)CVar3.unknown);
  if (_Var4 != _Var5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e0f98);
    (*pcVar1)();
  }
  local_68 = CVar2.unknown;
  CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar7 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar6.unknown);
  ppuVar8 = &local_68;
  FUN_1007e966c(ppuVar8,param_3.unknown,CVar6.unknown,local_88,puVar7);
  _Var4 = Swift::ContiguousArray::get_count(param_3);
  _Var5 = Swift::ContiguousArray::get_count((ContiguousArray)CVar3.unknown);
  (**(code **)(lVar10 + 8))(local_80,param_6);
  (**(code **)(lVar11 + 8))(local_78,param_5);
  if (_Var4 == _Var5) {
    return ppuVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007e0f9c);
  (*pcVar1)();
}


