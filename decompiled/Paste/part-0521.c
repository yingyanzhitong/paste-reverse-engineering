/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005f4a48 | FUN_1005f4a48 */

void FUN_1005f4a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined1 *puVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  UnsafeBufferPointer<undefined> mutating;
  UnsafeMutableBufferPointer<undefined> UVar5;
  undefined1 *puVar6;
  long lVar7;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  initializing;
  undefined8 uVar8;
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  char local_b0;
  char local_a8;
  long local_90;
  long lStack_88;
  long local_80;
  undefined *puStack_78;
  long local_70;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  local_d8 = auStack_100 + -(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(param_6 + -8);
  lVar7 = (long)local_d8 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_7 + 8);
  lVar4 = 0;
  local_e0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,uVar8,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_f8 = *(long *)(lVar4 + -8);
  initializing.unknown =
       (undefined *)(lVar7 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005f4cc4);
    (*pcVar2)();
  }
  mutating.unknown = (undefined *)0x0;
  local_f0 = lVar4;
  local_c0 = param_1;
  lStack_b8 = param_3;
  FUN_100684644(0,param_3,param_1,param_2,param_5);
  UVar5 = Swift::UnsafeMutableBufferPointer::init(mutating);
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  puStack_78 = UVar5.unknown;
  local_70 = param_3;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_b0 == '\x01') {
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    puStack_78 = UVar5.unknown;
    local_70 = param_3;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_a8 == '\x01') {
      (**(code **)(local_e8 + 0x10))(local_e0,param_4,param_6);
      Swift::Sequence::__copyContents(initializing);
      lVar4 = local_f0;
      _swift_getAssociatedConformanceWitness
                (uVar8,param_6,local_f0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      puVar1 = local_d8;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_f8 + 8))(initializing.unknown,lVar4);
      puVar6 = puVar1;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(puVar1,1,param_5);
      (**(code **)(local_d0 + 8))(puVar1,lStack_c8);
      if ((int)puVar6 != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005f4cc8);
        (*pcVar2)();
      }
    }
  }
  *(long *)(local_c0 + 8) = lStack_b8;
  return;
}



/* Address: 0x1005f4cc8 | FUN_1005f4cc8 */

void FUN_1005f4cc8(UnsafePointer<undefined> param_1,long param_2,UnsafeMutablePointer param_3,
                  long param_4)

{
  code *pcVar1;
  UnsafeBufferPointer UVar2;
  
  UVar2 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar2.unknown);
  if ((param_1.unknown != (undefined *)0x0) && (param_2 != 0)) {
    if (param_4 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005f4d50);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,param_3);
  }
  return;
}



/* Address: 0x1005f4d50 | FUN_1005f4d50 */

undefined8 FUN_1005f4d50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Address: 0x1005f4d58 | FUN_1005f4d58 */

long FUN_1005f4d58(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  
  lVar6 = *(long *)(param_4 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_64 = param_1;
  FUN_1005f524c(0,param_3,param_4,param_5);
  lVar1 = (long)puVar4 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1005f5070(0,param_3,param_4,param_5);
  lVar3 = *(long *)(lVar2 + -8);
  lVar5 = lVar1 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar4,param_2,param_4);
  FUN_1005edea8(lVar1,local_64,puVar4,param_3,param_4,param_5);
  FUN_1005ed67c(lVar5,lVar1,param_3,param_4,param_5);
  lVar1 = lVar5;
  FUN_1006037a8(lVar5,lVar2);
  (**(code **)(lVar3 + 8))(lVar5,lVar2);
  return lVar1;
}



/* Address: 0x1005f4e98 | FUN_1005f4e98 */

void FUN_1005f4e98(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  FUN_1005f4d58(param_1,param_3,param_4,param_5,param_6);
  lVar1 = 0;
  FUN_1005f5694(0,param_4,param_5,param_6);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  return;
}



/* Address: 0x1005f4f10 | FUN_1005f4f10 */

long FUN_1005f4f10(void)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fd65b0;
  FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
  _swift_initStaticObject();
  lVar1 = *(long *)(puVar2 + 0x10);
  *(long *)(puVar2 + 0x10) = lVar1 + 1;
  return lVar1;
}



/* Address: 0x1005f4f4c | FUN_1005f4f4c */

__int64 FUN_1005f4f4c(undefined8 param_1,__int64 param_2,undefined8 param_3,undefined8 param_4)

{
  __int64 _Var1;
  __int64 _Var2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  __int64 local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  __int64 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  __int64 _Stack_58;
  undefined8 local_50;
  
  _Var1 = Swift::Collection::get_count();
  if (0 < _Var1) {
    _Var2 = _Var1;
    FUN_100683e8c(_Var1,param_2);
    pcStack_98 = FUN_1005fb624;
    local_90 = auStack_80;
    local_a0 = param_2;
    local_70 = param_2;
    uStack_68 = param_3;
    local_60 = param_4;
    _Stack_58 = _Var1;
    local_50 = param_1;
    _swift_retain();
    puVar3 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    FUN_1006034cc(FUN_1005bc29c,auStack_b0,_Var2,&DAT_100ef5140,param_2,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    _swift_release(_Var2);
    return _Var2;
  }
  FUN_100683d64(param_2);
  return param_2;
}



/* Address: 0x1005f5054 | FUN_1005f5054 */

void FUN_1005f5054(undefined8 param_1)

{
  FUN_1005f50e4(param_1,FUN_1005ed7e4);
  return;
}



/* Address: 0x1005f5070 | FUN_1005f5070 */

void FUN_1005f5070(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f507c | FUN_1005f507c */

void FUN_1005f507c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5088 | FUN_1005f5088 */

void FUN_1005f5088(undefined8 param_1)

{
  FUN_1005fb46c(param_1,FUN_1005f267c);
  return;
}



/* Address: 0x1005f50a4 | FUN_1005f50a4 */

void FUN_1005f50a4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f50b0 | FUN_1005f50b0 */

void FUN_1005f50b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f50bc | FUN_1005f50bc */

void FUN_1005f50bc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f50c8 | FUN_1005f50c8 */

void FUN_1005f50c8(undefined8 param_1)

{
  FUN_1005f50e4(param_1,FUN_1005edb44);
  return;
}



/* Address: 0x1005f50e4 | FUN_1005f50e4 */

void FUN_1005f50e4(byte *param_1,undefined8 param_2,code *param_3)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  (*param_3)();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x1005f5140 | FUN_1005f5140 */

void FUN_1005f5140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1005f2f80();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



/* Address: 0x1005f5198 | FUN_1005f5198 */

void FUN_1005f5198(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f51a4 | FUN_1005f51a4 */

void FUN_1005f51a4(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    FUN_10000cae0();
    _swift_errorRelease(in_x3);
    return;
  }
  return;
}



/* Address: 0x1005f51d0 | FUN_1005f51d0 */

void FUN_1005f51d0(ulong *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = (undefined1)uVar3;
  FUN_1005edf48();
  *param_1 = uVar4;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Address: 0x1005f522c | FUN_1005f522c */

void FUN_1005f522c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5238 | FUN_1005f5238 */

void FUN_1005f5238(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_10000cae0();
    return;
  }
  return;
}



/* Address: 0x1005f524c | FUN_1005f524c */

void FUN_1005f524c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5258 | FUN_1005f5258 */

void FUN_1005f5258(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005ed76c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005f5278 | FUN_1005f5278 */

void FUN_1005f5278(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5284 | FUN_1005f5284 */

void FUN_1005f5284(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5290 | FUN_1005f5290 */

void FUN_1005f5290(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1005c804c;
  FUN_1005ee7e8(plVar9,param_1,uVar7,uVar4,uVar8,uVar1,uVar5,uVar2,uVar6,uVar3);
  return;
}



/* Address: 0x1005f5348 | FUN_1005f5348 */

void FUN_1005f5348(void)

{
  long unaff_x20;
  
  FUN_1005f0b14(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1005f535c | FUN_1005f535c */

void FUN_1005f535c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd5b18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c669f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c669f0,&DAT_100ee94c0);
  DAT_100fd5b18 = pTVar1;
  return;
}



/* Address: 0x1005f539c | FUN_1005f539c */

void FUN_1005f539c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f53a8 | FUN_1005f53a8 */

void FUN_1005f53a8(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100fd5b20 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100fd5b20 = puVar2;
  return;
}



/* Address: 0x1005f53ec | FUN_1005f53ec */

void FUN_1005f53ec(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f53f8 | FUN_1005f53f8 */

void FUN_1005f53f8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005f524c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f3454(param_1);
  return;
}



/* Address: 0x1005f5444 | FUN_1005f5444 */

bool FUN_1005f5444(long *param_1)

{
  long unaff_x20;
  
  return *param_1 == *(long *)(unaff_x20 + 0x28);
}



/* Address: 0x1005f5458 | FUN_1005f5458 */

void FUN_1005f5458(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1005f1aa8(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x1005f54f8 | FUN_1005f54f8 */

void FUN_1005f54f8(void)

{
  long unaff_x20;
  
  FUN_1005f2554(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005f5508 | thunk_FUN_1005f550c */

void thunk_FUN_1005f550c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd5b28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c66950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66950,&DAT_100ee9560);
  DAT_100fd5b28 = pTVar1;
  return;
}



/* Address: 0x1005f550c | FUN_1005f550c */

void FUN_1005f550c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd5b28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c66950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66950,&DAT_100ee9560);
  DAT_100fd5b28 = pTVar1;
  return;
}



/* Address: 0x1005f554c | thunk_FUN_1005f5550 */

void thunk_FUN_1005f5550(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd5b30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c66a98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66a98,&DAT_100ee94c0);
  DAT_100fd5b30 = pTVar1;
  return;
}



/* Address: 0x1005f5550 | FUN_1005f5550 */

void FUN_1005f5550(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd5b30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c66a98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66a98,&DAT_100ee94c0);
  DAT_100fd5b30 = pTVar1;
  return;
}



/* Address: 0x1005f5590 | FUN_1005f5590 */

void FUN_1005f5590(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66ae8,param_1);
  return;
}



/* Address: 0x1005f55a0 | FUN_1005f55a0 */

void FUN_1005f55a0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66b78,param_1);
  return;
}



/* Address: 0x1005f55b0 | FUN_1005f55b0 */

undefined8 * FUN_1005f55b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1005f5604 | FUN_1005f5604 */

void FUN_1005f5604(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1005f5618 | FUN_1005f5618 */

undefined8 * FUN_1005f5618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1005f5654 | FUN_1005f5654 */

undefined1  [16] FUN_1005f5654(void)

{
  return ZEXT816(0x100ee94c0);
}



/* Address: 0x1005f5664 | FUN_1005f5664 */

void FUN_1005f5664(void)

{
  return;
}



/* Address: 0x1005f5668 | FUN_1005f5668 */

undefined1  [16] FUN_1005f5668(void)

{
  return ZEXT816(0x100ee9560);
}



/* Address: 0x1005f5678 | FUN_1005f5678 */

void FUN_1005f5678(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5684 | FUN_1005f5684 */

void FUN_1005f5684(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5690 | thunk_FUN_1005f56ac */

void thunk_FUN_1005f56ac(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &DAT_100c66cc0;
  puStack_18 = &DAT_100c66cd8;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0x68);
  return;
}



/* Address: 0x1005f5694 | FUN_1005f5694 */

void FUN_1005f5694(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f56a0 | FUN_1005f56a0 */

void FUN_1005f56a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f56ac | FUN_1005f56ac */

void FUN_1005f56ac(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = &DAT_100c66cc0;
  puStack_18 = &DAT_100c66cd8;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x68);
  return;
}



/* Address: 0x1005f56f4 | FUN_1005f56f4 */

undefined8 * FUN_1005f56f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005f572c | FUN_1005f572c */

void FUN_1005f572c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005f5738 | FUN_1005f5738 */

undefined8 * FUN_1005f5738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005f5768 | FUN_1005f5768 */

void FUN_1005f5768(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5774 | FUN_1005f5774 */

void FUN_1005f5774(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005f5780 | FUN_1005f5780 */

void FUN_1005f5780(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1005f5278(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c66da8;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1005f57f8 | FUN_1005f57f8 */

byte * FUN_1005f57f8(byte *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar15 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar15 + -8);
  uVar18 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  lVar11 = *(long *)(lVar17 + 0x40);
  uVar4 = (uVar18 + 1 & (uVar18 ^ 0xffffffffffffffff)) + lVar11;
  uVar12 = (uVar18 + 0x21 & (uVar18 ^ 0xffffffffffffffff)) + lVar11;
  if (uVar12 <= uVar4) {
    uVar12 = uVar4;
  }
  lVar11 = lVar11 + 7;
  uVar4 = (lVar11 + (uVar18 + 0x31 & (uVar18 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar4 <= uVar12) {
    uVar4 = uVar12;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if ((7 < (uint)uVar18 || (*(uint *)(lVar17 + 0x50) & 0x100000) != 0) ||
      0x18 < (uVar4 & 0xfffffffffffffff8) + 0x18) {
    lVar11 = *(long *)param_2;
    *(long *)param_1 = lVar11;
    param_1 = (byte *)(lVar11 + ((ulong)((uint)uVar18 & 0xf8 ^ 0x1f8) & uVar18 + 0x10));
    goto LAB_1005f5b70;
  }
  bVar5 = *(byte *)((long)param_2 + uVar4);
  uVar8 = (uint)bVar5;
  if (3 < bVar5) {
    uVar16 = (uint)uVar4;
    uVar1 = 4;
    if (uVar16 < 4) {
      uVar1 = uVar16;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f5948;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    if (uVar16 < 4) {
      uVar8 = (uVar8 | bVar5 - 4 << (ulong)((uVar16 & 3) << 3)) + 4;
    }
    else {
      uVar8 = uVar8 + 4;
    }
  }
LAB_1005f5948:
  uVar12 = ~uVar18;
  if ((int)uVar8 < 2) {
    if (uVar8 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar17 + 0x10))
                ((ulong)(param_1 + uVar18 + 1) & uVar12,(ulong)((long)param_2 + uVar18 + 1) & uVar12
                 ,lVar15);
      param_1[uVar4] = 0;
    }
    else {
      if (uVar8 == 1) {
        *param_1 = (byte)*param_2;
        param_1[1] = *(byte *)((long)param_2 + 1);
        puVar6 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
        puVar9 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
        *puVar6 = *puVar9;
        uVar13 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = *(undefined1 *)(puVar9 + 3);
        _swift_bridgeObjectRetain();
        FUN_1005e4618(uVar13,uVar2,uVar3);
        puVar6[1] = uVar13;
        puVar6[2] = uVar2;
        *(undefined1 *)(puVar6 + 3) = uVar3;
        (**(code **)(lVar17 + 0x10))
                  ((long)(puVar6 + 1) + uVar18 + 0x11 & uVar12,
                   (long)(puVar9 + 1) + uVar18 + 0x11 & uVar12,lVar15);
        bVar5 = 1;
        goto LAB_1005f5b40;
      }
LAB_1005f5a20:
      _memcpy(param_1,param_2,uVar4 + 1);
    }
  }
  else {
    if (uVar8 == 2) {
      *param_1 = (byte)*param_2;
      param_1[1] = *(byte *)((long)param_2 + 1);
      puVar9 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
      puVar6 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
      uVar13 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = *(undefined1 *)(puVar6 + 2);
      FUN_1005e4618(uVar13,uVar2,uVar3);
      *puVar9 = uVar13;
      puVar9[1] = uVar2;
      *(undefined1 *)(puVar9 + 2) = uVar3;
      puVar6 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
      *puVar6 = *puVar9;
      uVar13 = puVar9[1];
      uVar3 = *(undefined1 *)(puVar9 + 2);
      _swift_bridgeObjectRetain();
      FUN_1005f5ba4(uVar13,uVar3);
      puVar6[1] = uVar13;
      *(undefined1 *)(puVar6 + 2) = uVar3;
      uVar14 = (long)(puVar6 + 1) + uVar18 + 9 & uVar12;
      uVar12 = (long)(puVar9 + 1) + uVar18 + 9 & uVar12;
      (**(code **)(lVar17 + 0x10))(uVar14,uVar12,lVar15);
      uVar13 = *(undefined8 *)(lVar11 + uVar12 & 0xfffffffffffffff8);
      _swift_errorRetain(uVar13);
      *(undefined8 *)(lVar11 + uVar14 & 0xfffffffffffffff8) = uVar13;
      bVar5 = 2;
    }
    else {
      if (uVar8 != 3) goto LAB_1005f5a20;
      uVar13 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar13);
      *(undefined8 *)param_1 = uVar13;
      bVar5 = 3;
    }
LAB_1005f5b40:
    param_1[uVar4] = bVar5;
  }
  puVar7 = (ulong *)((ulong)(param_1 + uVar4 + 8) & 0xfffffffffffffff8);
  puVar10 = (ulong *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  if (*puVar10 < 0xffffffff) {
    uVar4 = *puVar10;
    puVar7[1] = puVar10[1];
    *puVar7 = uVar4;
    return param_1;
  }
  uVar4 = puVar10[1];
  *puVar7 = *puVar10;
  puVar7[1] = uVar4;
LAB_1005f5b70:
  _swift_retain();
  return param_1;
}



/* Address: 0x1005f5ba4 | FUN_1005f5ba4 */

void FUN_1005f5ba4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x1005f5bb8 | FUN_1005f5bb8 */

void FUN_1005f5bb8(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar9 = *(long *)(param_2 + 0x18);
  lVar13 = *(long *)(lVar9 + -8);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar8 = *(long *)(lVar13 + 0x40);
  uVar1 = (uVar10 + 1 & (uVar10 ^ 0xffffffffffffffff)) + lVar8;
  uVar11 = (uVar10 + 0x21 & (uVar10 ^ 0xffffffffffffffff)) + lVar8;
  if (uVar11 <= uVar1) {
    uVar11 = uVar1;
  }
  uVar1 = (lVar8 + 7 + (uVar10 + 0x31 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar7 = (uint)bVar3;
  if (3 < bVar3) {
    uVar12 = (uint)uVar1;
    uVar2 = 4;
    if (uVar12 < 4) {
      uVar2 = uVar12;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1005f5cbc;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    if (uVar12 < 4) {
      uVar7 = (uVar7 | bVar3 - 4 << (ulong)((uVar12 & 3) << 3)) + 4;
    }
    else {
      uVar7 = uVar7 + 4;
    }
  }
LAB_1005f5cbc:
  if ((int)uVar7 < 2) {
    if (uVar7 == 0) {
      pbVar5 = (byte *)((long)param_1 + uVar10 + 1);
    }
    else {
      if (uVar7 != 1) goto LAB_1005f5d94;
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_10000cae0(puVar14[1],puVar14[2],*(undefined1 *)(puVar14 + 3));
      pbVar5 = (byte *)((long)(puVar14 + 1) + uVar10 + 0x11);
    }
    (**(code **)(lVar13 + 8))((ulong)pbVar5 & ~uVar10,lVar9);
  }
  else {
    if (uVar7 == 2) {
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
      FUN_10000cae0(*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2));
      puVar14 = (undefined8 *)((ulong)((long)param_1 + 0x21U) & 0xfffffffffffffff8);
      _swift_bridgeObjectRelease(*puVar14);
      FUN_1005e46ac(puVar14[1],*(undefined1 *)(puVar14 + 2));
      uVar11 = (long)(puVar14 + 1) + uVar10 + 9 & ~uVar10;
      (**(code **)(lVar13 + 8))(uVar11,lVar9);
      uVar4 = *(undefined8 *)(lVar8 + 7 + uVar11 & 0xfffffffffffffff8);
    }
    else {
      if (uVar7 != 3) goto LAB_1005f5d94;
      uVar4 = *(undefined8 *)param_1;
    }
    _swift_errorRelease(uVar4);
  }
LAB_1005f5d94:
  puVar6 = (ulong *)((ulong)((long)param_1 + uVar1 + 8) & 0xfffffffffffffff8);
  if (*puVar6 < 0xffffffff) {
    return;
  }
  _swift_release(puVar6[1]);
  return;
}



/* Address: 0x1005f5de4 | FUN_1005f5de4 */

byte * FUN_1005f5de4(byte *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar5 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar5 + -8);
  uVar18 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar10 = *(long *)(lVar13 + 0x40);
  uVar4 = (uVar18 + 1 & (uVar18 ^ 0xffffffffffffffff)) + lVar10;
  uVar14 = (uVar18 + 0x21 & (uVar18 ^ 0xffffffffffffffff)) + lVar10;
  if (uVar14 <= uVar4) {
    uVar14 = uVar4;
  }
  lVar10 = lVar10 + 7;
  uVar4 = (lVar10 + (uVar18 + 0x31 & (uVar18 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 8;
  if (uVar4 <= uVar14) {
    uVar4 = uVar14;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar6 = *(byte *)((long)param_2 + uVar4);
  uVar9 = (uint)bVar6;
  if (3 < bVar6) {
    uVar17 = (uint)uVar4;
    uVar1 = 4;
    if (uVar17 < 4) {
      uVar1 = uVar17;
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) goto LAB_1005f5ef4;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar1 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar1 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar17 < 4) {
      uVar9 = (uVar9 | bVar6 - 4 << (ulong)((uVar17 & 3) << 3)) + 4;
    }
    else {
      uVar9 = uVar9 + 4;
    }
  }
LAB_1005f5ef4:
  uVar14 = ~uVar18;
  if ((int)uVar9 < 2) {
    if (uVar9 == 0) {
      *param_1 = (byte)*param_2;
      (**(code **)(lVar13 + 0x10))
                ((ulong)(param_1 + uVar18 + 1) & uVar14,(ulong)((long)param_2 + uVar18 + 1) & uVar14
                );
      param_1[uVar4] = 0;
      goto LAB_1005f60d4;
    }
    if (uVar9 != 1) {
LAB_1005f5fb8:
      _memcpy(param_1,param_2,uVar4 + 1);
      goto LAB_1005f60d4;
    }
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar7 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    *puVar7 = *puVar11;
    uVar15 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = *(undefined1 *)(puVar11 + 3);
    _swift_bridgeObjectRetain();
    FUN_1005e4618(uVar15,uVar2,uVar3);
    puVar7[1] = uVar15;
    puVar7[2] = uVar2;
    *(undefined1 *)(puVar7 + 3) = uVar3;
    (**(code **)(lVar13 + 0x10))
              ((long)(puVar7 + 1) + uVar18 + 0x11 & uVar14,
               (long)(puVar11 + 1) + uVar18 + 0x11 & uVar14,lVar5);
    bVar6 = 1;
  }
  else if (uVar9 == 2) {
    *param_1 = (byte)*param_2;
    param_1[1] = *(byte *)((long)param_2 + 1);
    puVar11 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((ulong)((long)param_2 + 9U) & 0xfffffffffffffff8);
    uVar15 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = *(undefined1 *)(puVar7 + 2);
    FUN_1005e4618(uVar15,uVar2,uVar3);
    *puVar11 = uVar15;
    puVar11[1] = uVar2;
    *(undefined1 *)(puVar11 + 2) = uVar3;
    puVar7 = (undefined8 *)((ulong)(param_1 + 0x21) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + 0x21U) & 0xfffffffffffffff8);
    *puVar7 = *puVar11;
    uVar15 = puVar11[1];
    uVar3 = *(undefined1 *)(puVar11 + 2);
    _swift_bridgeObjectRetain();
    FUN_1005f5ba4(uVar15,uVar3);
    puVar7[1] = uVar15;
    *(undefined1 *)(puVar7 + 2) = uVar3;
    uVar16 = (long)(puVar7 + 1) + uVar18 + 9 & uVar14;
    uVar14 = (long)(puVar11 + 1) + uVar18 + 9 & uVar14;
    (**(code **)(lVar13 + 0x10))(uVar16,uVar14,lVar5);
    uVar15 = *(undefined8 *)(lVar10 + uVar14 & 0xfffffffffffffff8);
    _swift_errorRetain(uVar15);
    *(undefined8 *)(lVar10 + uVar16 & 0xfffffffffffffff8) = uVar15;
    bVar6 = 2;
  }
  else {
    if (uVar9 != 3) goto LAB_1005f5fb8;
    uVar15 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar15);
    *(undefined8 *)param_1 = uVar15;
    bVar6 = 3;
  }
  param_1[uVar4] = bVar6;
LAB_1005f60d4:
  puVar8 = (ulong *)((ulong)(param_1 + uVar4 + 8) & 0xfffffffffffffff8);
  puVar12 = (ulong *)((ulong)(uVar4 + 8 + (long)param_2) & 0xfffffffffffffff8);
  if (*puVar12 < 0xffffffff) {
    uVar4 = *puVar12;
    puVar8[1] = puVar12[1];
    *puVar8 = uVar4;
  }
  else {
    uVar4 = puVar12[1];
    *puVar8 = *puVar12;
    puVar8[1] = uVar4;
    _swift_retain();
  }
  return param_1;
}


