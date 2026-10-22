/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006923c4 | FUN_1006923c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100692430 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006923c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100fda648;
  FUN_1000f7830(&DAT_100fda648,&DAT_100c6e300);
  puVar2 = puVar1;
  FUN_100693544();
  Swift::RangeExpression::_relative(&local_60,puVar2,puVar1,puVar2,param_5,param_6);
  FUN_100682798(local_60,uStack_58,param_2,param_3,param_4);
  return;
}



/* Address: 0x100692464 | FUN_100692464 */

void FUN_100692464(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fda640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fda638;
  FUN_1000f8b08(&DAT_100fda638,&DAT_100c6e2f0);
  puVar2 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,puVar1)
  ;
  DAT_100fda640 = puVar2;
  return;
}



/* Address: 0x1006924b4 | FUN_1006924b4 */

void FUN_1006924b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_3 + 0x10);
  FUN_10068978c(FUN_100692518,auStack_40,param_1,param_2,local_30,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100692518 | FUN_100692518 */

void FUN_100692518(undefined8 param_1,undefined8 param_2)

{
  UnsafeMutableBufferPointer UVar1;
  
  UVar1 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100692328(param_1,param_2,UVar1.unknown);
  return;
}



/* Address: 0x100692564 | FUN_100692564 */

__int64 FUN_100692564(UnsafePointer<undefined> param_1,__int64 param_2,UnsafeMutablePointer param_3,
                     long param_4)

{
  code *pcVar1;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    if (param_4 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006925ac);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,param_3);
  }
  return param_2;
}



/* Address: 0x1006925ac | FUN_1006925ac */

__int64 FUN_1006925ac(void)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  __int64 count;
  UnsafeMutablePointer in_x4;
  long in_x5;
  long in_x6;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar3.unknown);
  count = (extension_Swift)::Swift::Collection::get_count();
  if (count < 1) {
    count = 0;
  }
  else {
    if (in_x5 < count) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006926dc);
      (*pcVar1)();
    }
    Swift::Slice::get_base(SVar3);
    Swift::Slice::_get_startIndex(SVar3);
    Swift::UnsafeMutablePointer::initialize
              ((undefined *)(local_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * local_b8),count,
               in_x4);
  }
  return count;
}



/* Address: 0x1006926dc | FUN_1006926dc */

long FUN_1006926dc(UnsafePointer<undefined> param_1,__int64 param_2,long param_3)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  long in_x6;
  long start;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = local_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  lVar5 = local_90 - local_b8;
  UVar4 = Swift::UnsafeMutableBufferPointer::_init(start);
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    if (lVar5 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100692850);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,(UnsafeMutablePointer)UVar4.unknown);
  }
  Swift::Slice::_get_startIndex(SVar3);
  if (!SCARRY8(param_3,param_2)) {
    return param_3 + param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069284c);
  (*pcVar1)();
}



/* Address: 0x100692850 | FUN_100692850 */

long FUN_100692850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  long start;
  long in_stack_00000000;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = local_90 + *(long *)(*(long *)(in_stack_00000000 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  lVar5 = local_90 - local_b8;
  UVar4 = Swift::UnsafeMutableBufferPointer::_init(start);
  FUN_1006925ac(param_1,param_2,param_3,param_4,UVar4.unknown,lVar5,in_stack_00000000);
  Swift::Slice::_get_startIndex(SVar3);
  if (!SCARRY8(param_5,param_1)) {
    return param_5 + param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006929b8);
  (*pcVar1)();
}



/* Address: 0x1006929b8 | FUN_1006929b8 */

void FUN_1006929b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined1 *puVar6;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  initializing;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_70;
  
  local_c0 = param_1;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var,OVar4.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  local_e8 = auStack_100 + -(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_5 + -8);
  lVar7 = (long)local_e8 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_6 + 8);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  uVar2 = local_c0;
  local_f8 = *(long *)(lVar5 + -8);
  initializing.unknown =
       (undefined *)(lVar7 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_f0 = param_4;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_a0 = param_4;
  lStack_98 = param_5;
  local_90 = param_6;
  uStack_88 = param_2;
  local_80 = param_3;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_70 == '\x01') {
    (**(code **)(lVar8 + 0x10))(lVar7,uVar2,param_5);
    Swift::Sequence::__copyContents(initializing);
    _swift_getAssociatedConformanceWitness
              (uVar9,param_5,lVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    puVar1 = local_e8;
    Swift::IteratorProtocol::_next();
    (**(code **)(local_f8 + 8))(initializing.unknown,lVar5);
    puVar6 = puVar1;
    (**(code **)(*(long *)(local_f0 + -8) + 0x30))(puVar1,1);
    (**(code **)(local_d0 + 8))(puVar1,lStack_c8);
    if ((int)puVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100692b9c);
      (*pcVar3)();
    }
  }
  return;
}



/* Address: 0x100692b9c | FUN_100692b9c */

void FUN_100692b9c(UnsafePointer<undefined> param_1,__int64 param_2,UnsafeMutablePointer param_3,
                  long param_4)

{
  code *pcVar1;
  
  if (param_2 < 1) {
    return;
  }
  if (param_2 <= param_4) {
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100692bbc);
  (*pcVar1)();
}



/* Address: 0x100692bbc | thunk_FUN_1006925ac */

void thunk_FUN_1006925ac(void)

{
  FUN_1006925ac();
  return;
}



/* Address: 0x100692bc0 | FUN_100692bc0 */

void FUN_100692bc0(UnsafeMutablePointer<undefined> param_1,long param_2,UnsafeMutablePointer param_3
                  ,long param_4)

{
  code *pcVar1;
  
  if ((param_1.unknown != (undefined *)0x0) && (param_2 != 0)) {
    if (param_2 <= param_4) {
      Swift::UnsafeMutablePointer::moveInitialize(param_1,param_2,param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100692be0);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100692be0 | thunk_FUN_100692be4 */

long thunk_FUN_100692be4(void)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> from;
  long count;
  UnsafeMutablePointer in_x4;
  long in_x5;
  long in_x6;
  long start;
  undefined8 uStack_b8;
  undefined8 uStack_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = uStack_90;
  if (uStack_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = uStack_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * uStack_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  count = uStack_90 - uStack_b8;
  from = Swift::UnsafeMutableBufferPointer::_init(start);
  if (from.unknown == (undefined *)0x0) {
    count = 0;
  }
  else if (count != 0) {
    if (in_x5 < count) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100692d34);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize
              ((UnsafeMutablePointer<undefined>)from.unknown,count,in_x4);
  }
  return count;
}



/* Address: 0x100692be4 | FUN_100692be4 */

long FUN_100692be4(void)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> from;
  long count;
  UnsafeMutablePointer in_x4;
  long in_x5;
  long in_x6;
  long start;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = local_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  count = local_90 - local_b8;
  from = Swift::UnsafeMutableBufferPointer::_init(start);
  if (from.unknown == (undefined *)0x0) {
    count = 0;
  }
  else if (count != 0) {
    if (in_x5 < count) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100692d34);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize
              ((UnsafeMutablePointer<undefined>)from.unknown,count,in_x4);
  }
  return count;
}



/* Address: 0x100692d34 | FUN_100692d34 */

void FUN_100692d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_7 + 8),param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  FUN_100692dc0(param_1,param_2,param_3,param_4,param_5,uVar1,param_6,param_7);
  return;
}



/* Address: 0x100692dc0 | FUN_100692dc0 */

long FUN_100692dc0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  UnsafeMutableBufferPointer UVar7;
  Slice SVar8;
  tuple2_conflict2 tVar9;
  long lVar10;
  long local_150;
  long local_148;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  local_f0 = param_1;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_118 = CONCAT71(extraout_var,OVar5.value);
  local_120 = *(long *)(local_118 + -8);
  local_128 = (long)&local_150 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_150 = *(long *)(param_7 + -8);
  lVar10 = local_128 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f8 = *(undefined8 *)(param_8 + 8);
  lVar6 = 0;
  local_148 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,local_f8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_138 = *(long *)(lVar6 + -8);
  local_140.unknown =
       (undefined *)(lVar10 - (*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_130 = lVar6;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  lStack_c8 = param_5;
  UVar7 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar7.unknown);
  SVar8 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar8);
  lVar6 = local_78;
  if (local_78 != 0) {
    local_98 = param_2;
    local_90 = param_3;
    local_88 = param_4;
    uStack_80 = param_5;
    Swift::Slice::_get_startIndex(SVar8);
    lVar6 = lVar6 + *(long *)(*(long *)(param_6 + -8) + 0x48) * local_a0;
  }
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  lStack_c8 = param_5;
  Swift::Slice::_get_endIndex(SVar8);
  local_110 = param_3;
  uStack_108 = param_4;
  local_100 = param_5;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  Swift::Slice::_get_startIndex(SVar8);
  lVar10 = local_78 - local_a0;
  puStack_b8 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(lVar6);
  uVar3 = local_f0;
  uVar2 = local_f8;
  local_d0 = param_6;
  lStack_c8 = param_7;
  local_c0 = param_8;
  local_b0 = lVar10;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  tVar9._ = local_98;
  if ((char)local_90 == '\x01') {
    (**(code **)(local_150 + 0x10))(local_148,uVar3,param_7);
    UVar1.unknown = local_140.unknown;
    tVar9 = Swift::Sequence::__copyContents(local_140);
    lVar6 = local_130;
    _swift_getAssociatedConformanceWitness
              (uVar2,param_7,local_130,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar10 = local_128;
    Swift::IteratorProtocol::_next();
    (**(code **)(local_138 + 8))(UVar1.unknown,lVar6);
    lVar6 = lVar10;
    (**(code **)(*(long *)(param_6 + -8) + 0x30))(lVar10,1,param_6);
    (**(code **)(local_120 + 8))(lVar10,local_118);
    if ((int)lVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006930c8);
      (*pcVar4)();
    }
  }
  uStack_d8 = local_110;
  local_d0 = uStack_108;
  lStack_c8 = local_100;
  local_e0 = param_2;
  Swift::Slice::_get_startIndex(SVar8);
  if (SCARRY8(local_98,tVar9._)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10069311c);
    (*pcVar4)();
  }
  return local_98 + tVar9._;
}



/* Address: 0x10069311c | FUN_10069311c */

void FUN_10069311c(UnsafePointer<undefined> param_1,__int64 param_2)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  long in_x6;
  long start;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = local_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  lVar5 = local_90 - local_b8;
  UVar4 = Swift::UnsafeMutableBufferPointer::_init(start);
  if (0 < param_2) {
    if (lVar5 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693260);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,(UnsafeMutablePointer)UVar4.unknown);
  }
  return;
}



/* Address: 0x100693260 | FUN_100693260 */

void FUN_100693260(void)

{
  FUN_100693400();
  return;
}



/* Address: 0x10069328c | FUN_10069328c */

void FUN_10069328c(UnsafeMutablePointer<undefined> param_1,long param_2)

{
  code *pcVar1;
  UnsafeMutableBufferPointer UVar2;
  Slice SVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  long in_x6;
  long start;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar2 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar2.unknown);
  SVar3 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar3);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar3);
    start = local_90 + *(long *)(*(long *)(in_x6 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar3);
  Swift::Slice::_get_startIndex(SVar3);
  lVar5 = local_90 - local_b8;
  UVar4 = Swift::UnsafeMutableBufferPointer::_init(start);
  if ((param_1.unknown != (undefined *)0x0) && (param_2 != 0)) {
    if (lVar5 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006933d4);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize(param_1,param_2,(UnsafeMutablePointer)UVar4.unknown)
    ;
  }
  return;
}



/* Address: 0x1006933d4 | FUN_1006933d4 */

void FUN_1006933d4(void)

{
  FUN_100693400();
  return;
}



/* Address: 0x100693400 | FUN_100693400 */

void FUN_100693400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  UnsafeMutableBufferPointer UVar1;
  Slice SVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  long lVar4;
  long start;
  long in_stack_00000000;
  code *in_stack_00000008;
  undefined8 local_b8;
  undefined8 local_90;
  
  UVar1 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar1.unknown);
  SVar2 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar2);
  start = local_90;
  if (local_90 != 0) {
    Swift::Slice::_get_startIndex(SVar2);
    start = local_90 + *(long *)(*(long *)(in_stack_00000000 + -8) + 0x48) * local_b8;
  }
  Swift::Slice::_get_endIndex(SVar2);
  Swift::Slice::_get_startIndex(SVar2);
  lVar4 = local_90 - local_b8;
  UVar3 = Swift::UnsafeMutableBufferPointer::_init(start);
  (*in_stack_00000008)(param_1,param_2,param_3,param_4,UVar3.unknown,lVar4,in_stack_00000000);
  return;
}



/* Address: 0x100693544 | FUN_100693544 */

void FUN_100693544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fda650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fda648;
  FUN_1000f8b08(&DAT_100fda648,&DAT_100c6e300);
  puVar2 = puVar1;
  FUN_1006935bc();
  local_30 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
  puVar3 = PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968,puVar1,&local_30);
  DAT_100fda650 = puVar3;
  return;
}



/* Address: 0x1006935bc | FUN_1006935bc */

void FUN_1006935bc(void)

{
  undefined *puVar1;
  
  if (DAT_100fda658 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fda658 = puVar1;
  return;
}



/* Address: 0x1006935fc | FUN_1006935fc */

bool FUN_1006935fc(long param_1,long param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    if (param_1 != 0) {
      return false;
    }
    param_2 = 0;
    param_4 = 0;
  }
  else {
    if (param_3 != param_1) {
      return false;
    }
    param_4 = param_4 - param_3;
    param_2 = param_2 - param_3;
  }
  return param_4 == param_2;
}



/* Address: 0x100693634 | FUN_100693634 */

/* WARNING: Removing unreachable block (ram,0x00010069374c) */

void FUN_100693634(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long local_78;
  undefined1 auStack_70 [16];
  long local_60;
  
  lVar6 = *(long *)(param_2 + 0x10);
  local_60 = lVar6;
  if (*unaff_x20 == 0) {
    local_78 = unaff_x20[2];
    lVar4 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
    local_78 = unaff_x20[2];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069374c);
      (*pcVar1)();
    }
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = (unaff_x20[1] * lVar5) / lVar5;
    }
  }
  UVar3 = Swift::UnsafeMutableBufferPointer::_init(*unaff_x20);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_10068ba40(param_1,UVar3.unknown,lVar4,FUN_1006937f8,auStack_70,&local_78,lVar6,
                PTR___type_metadata_for_Swift_Never_100eadc38,OVar2.value,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  Swift::Optional::typeMetadataAccessor();
  if (local_78 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693744);
    (*pcVar1)();
  }
  if (local_78 <= unaff_x20[1]) {
    unaff_x20[2] = local_78;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100693748);
  (*pcVar1)();
}



/* Address: 0x10069377c | FUN_10069377c */

void FUN_10069377c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_4;
  if (lVar1 < 1) {
    lVar2 = *(long *)(param_5 + -8);
  }
  else {
    *param_4 = lVar1 + -1;
    lVar2 = *(long *)(param_5 + -8);
    Swift::UnsafeMutablePointer::move
              ((undefined *)(param_2 + *(long *)(lVar2 + 0x48) * (lVar1 + -1)));
  }
  (**(code **)(lVar2 + 0x38))(param_1,lVar1 < 1,1,param_5);
  return;
}



/* Address: 0x1006937f8 | FUN_1006937f8 */

void FUN_1006937f8(void)

{
  FUN_10069377c();
  return;
}



/* Address: 0x100693814 | FUN_100693814 */

/* WARNING: Removing unreachable block (ram,0x0001006938fc) */

void FUN_100693814(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long local_68;
  
  if (0 < param_2) {
    if (*unaff_x20 == 0) {
      local_68 = unaff_x20[2];
    }
    else {
      local_68 = unaff_x20[2];
      if (*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006938fc);
        (*pcVar1)();
      }
    }
    Swift::UnsafeMutableBufferPointer::_init(*unaff_x20);
    FUN_10068ba40();
    if (local_68 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006938f4);
      (*pcVar1)();
    }
    if (unaff_x20[1] < local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006938f8);
      (*pcVar1)();
    }
    unaff_x20[2] = local_68;
  }
  return;
}



/* Address: 0x10069392c | FUN_10069392c */

void FUN_10069392c(undefined8 param_1,long param_2,long *param_3,
                  UnsafeMutablePointer<undefined> param_4,long param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  UnsafeMutablePointer UVar3;
  undefined *puVar4;
  
  UVar3.unknown = (undefined *)*param_3;
  puVar1 = UVar3.unknown + param_5;
  if (SCARRY8((long)UVar3.unknown,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006939c0);
    (*pcVar2)();
  }
  if ((long)puVar1 <= param_2) {
    puVar4 = puVar1;
    FUN_1006939c8(UVar3.unknown,puVar1,param_1,param_2,param_6);
    if ((param_4.unknown != (undefined *)0x0) && (param_5 != 0)) {
      if ((long)puVar4 < param_5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006939c8);
        (*pcVar2)();
      }
      Swift::UnsafeMutablePointer::moveInitialize(param_4,param_5,UVar3);
    }
    *param_3 = (long)puVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006939c4);
  (*pcVar2)();
}



/* Address: 0x1006939c8 | FUN_1006939c8 */

void FUN_1006939c8(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  
  if (param_3 == 0) {
    Swift::UnsafeMutableBufferPointer::init();
    return;
  }
  if (!SBORROW8(param_2,param_1)) {
    Swift::UnsafeMutableBufferPointer::_init
              (param_3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006939f4);
  (*pcVar1)();
}



/* Address: 0x1006939f4 | FUN_1006939f4 */

/* WARNING: Removing unreachable block (ram,0x000100693ad4) */

void FUN_1006939f4(long *param_1,long param_2)

{
  code *pcVar1;
  long local_58;
  
  if (*param_1 == 0) {
    local_58 = param_1[2];
  }
  else {
    local_58 = param_1[2];
    if (*(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693ad4);
      (*pcVar1)();
    }
  }
  Swift::UnsafeMutableBufferPointer::_init(*param_1);
  FUN_10068ba40();
  if (-1 < local_58) {
    if (param_1[1] < local_58) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693ad0);
      (*pcVar1)();
    }
    param_1[2] = local_58;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100693acc);
  (*pcVar1)();
}



/* Address: 0x100693b04 | FUN_100693b04 */

void FUN_100693b04(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x21;
  long local_38;
  
  lVar2 = *param_3;
  FUN_1006939c8(0,lVar2,param_1,param_2);
  if (0 < lVar2) {
    if (*param_4 == 0) {
      local_38 = param_4[2];
    }
    else {
      local_38 = param_4[2];
      if (*(long *)(*(long *)(param_5 + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100693c20);
        (*pcVar1)();
      }
    }
    Swift::UnsafeMutableBufferPointer::_init(*param_4);
    FUN_10068ba40();
    if (unaff_x21 != 0) {
      FUN_10068bab4(&local_38,param_4,param_5,PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693c50);
      (*pcVar1)();
    }
    if (local_38 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693c18);
      (*pcVar1)();
    }
    if (param_4[1] < local_38) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693c1c);
      (*pcVar1)();
    }
    param_4[2] = local_38;
  }
  *param_3 = 0;
  return;
}



/* Address: 0x100693c50 | FUN_100693c50 */

/* WARNING: Removing unreachable block (ram,0x000100693d30) */

void FUN_100693c50(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long local_68;
  
  if (*unaff_x20 == 0) {
    local_68 = unaff_x20[2];
  }
  else {
    local_68 = unaff_x20[2];
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693d30);
      (*pcVar1)();
    }
  }
  Swift::UnsafeMutableBufferPointer::_init(*unaff_x20);
  FUN_10068ba40();
  if (-1 < local_68) {
    if (unaff_x20[1] < local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100693d2c);
      (*pcVar1)();
    }
    unaff_x20[2] = local_68;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100693d28);
  (*pcVar1)();
}



/* Address: 0x100693d60 | FUN_100693d60 */

void FUN_100693d60(undefined8 param_1,long param_2,long *param_3,UnsafePointer<undefined> param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  UnsafeMutablePointer UVar3;
  UnsafeBufferPointer UVar4;
  undefined *puVar5;
  
  UVar3.unknown = (undefined *)*param_3;
  puVar1 = UVar3.unknown + param_5;
  if (SCARRY8((long)UVar3.unknown,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100693e20);
    (*pcVar2)();
  }
  if ((long)puVar1 <= param_2) {
    puVar5 = puVar1;
    FUN_1006939c8(UVar3.unknown,puVar1,param_1,param_2,param_6);
    UVar4 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
               UVar4.unknown);
    if ((param_4.unknown != (undefined *)0x0) && (param_5 != 0)) {
      if ((long)puVar5 < param_5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100693e28);
        (*pcVar2)();
      }
      Swift::UnsafeMutablePointer::initialize(param_4,param_5,UVar3);
    }
    *param_3 = (long)puVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100693e24);
  (*pcVar2)();
}



/* Address: 0x100693e28 | FUN_100693e28 */

void FUN_100693e28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_3 + 0x10);
  FUN_10068978c(FUN_100694104,auStack_40,param_1,param_2,local_30,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100693e8c | FUN_100693e8c */

/* WARNING: Removing unreachable block (ram,0x000100693f74) */

void FUN_100693e8c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_x20;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693f64);
    (*pcVar1)();
  }
  uVar2 = unaff_x20[2];
  if (uVar2 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693f68);
    (*pcVar1)();
  }
  if ((*unaff_x20 != 0) && (*(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x48) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693f74);
    (*pcVar1)();
  }
  Swift::UnsafeMutableBufferPointer::_init(*unaff_x20);
  FUN_10068ba40();
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693f6c);
    (*pcVar1)();
  }
  if (unaff_x20[1] < (long)uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100693f70);
    (*pcVar1)();
  }
  unaff_x20[2] = uVar2;
  return;
}



/* Address: 0x100693fa4 | FUN_100693fa4 */

void FUN_100693fa4(long param_1,undefined8 param_2,long *param_3,long param_4,code *param_5,
                  undefined8 param_6,long param_7)

{
  UnsafeMutablePointer UVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  UnsafeMutablePointer UVar7;
  undefined1 auStack_80 [8];
  long *local_78;
  
  lVar3 = *(long *)(param_7 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  lVar5 = *param_3;
  local_78 = param_3;
  if (param_4 < lVar5) {
    lVar6 = *(long *)(lVar3 + 0x48);
    UVar7.unknown = (undefined *)(param_1 + lVar6 * param_4);
    lVar4 = param_4;
    do {
      UVar1.unknown = UVar7.unknown;
      (*param_5)();
      if (((ulong)UVar1.unknown & 1) == 0) {
        if (lVar4 != param_4) {
          Swift::UnsafeMutablePointer::move(UVar7);
          (**(code **)(lVar3 + 0x20))
                    (param_1 + lVar6 * param_4,auStack_80 + -(lVar2 + 0xfU & 0xfffffffffffffff0),
                     param_7);
        }
        param_4 = param_4 + 1;
      }
      else {
        Swift::UnsafeMutablePointer::deinitialize(1,UVar7);
      }
      lVar4 = lVar4 + 1;
      UVar7.unknown = UVar7.unknown + lVar6;
    } while (lVar5 != lVar4);
  }
  *local_78 = param_4;
  return;
}



/* Address: 0x1006940a8 | FUN_1006940a8 */

void FUN_1006940a8(void)

{
  FUN_10069392c();
  return;
}



/* Address: 0x1006940c8 | FUN_1006940c8 */

void FUN_1006940c8(void)

{
  FUN_100693b04();
  return;
}



/* Address: 0x1006940e4 | FUN_1006940e4 */

void FUN_1006940e4(void)

{
  FUN_100693d60();
  return;
}



/* Address: 0x100694104 | FUN_100694104 */

void FUN_100694104(undefined8 param_1,undefined8 param_2)

{
  OutputSpan OVar1;
  
  OVar1 = Swift::OutputSpan::typeMetadataAccessor();
  FUN_100693c50(param_1,param_2,OVar1.unknown);
  return;
}



/* Address: 0x100694150 | FUN_100694150 */

void FUN_100694150(void)

{
  FUN_100693fa4();
  return;
}



/* Address: 0x100694170 | FUN_100694170 */

void FUN_100694170(void)

{
  FUN_1006940a8();
  return;
}



/* Address: 0x100694184 | FUN_100694184 */

void FUN_100694184(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  code *local_88;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Strideable_100eacb68;
  lVar8 = *(long *)(param_3 + -8);
  lVar9 = (long)&local_b0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_90 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Strideable_100eacb68,
             PTR___associated_type_descriptor_for_Swift_Strideable_Stride_100eabcf8);
  lVar11 = *(long *)(lVar4 + -8);
  uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = lVar9 - uVar10;
  lVar13 = local_a8 - uVar10;
  lVar5 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Strideable_Swift_Strideable_Stride__Swift_SignedNumeric_100eacb50
            );
  puVar1 = 
  PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898;
  local_98 = *(long *)(lVar5 + 8);
  uVar12 = *(undefined8 *)(local_98 + 0x10);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar14 = lVar13 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = uVar12;
  _swift_getAssociatedConformanceWitness
            (uVar12,lVar4,lVar6,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  local_b0 = uVar7;
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar14,&DAT_100c6c6b8,0x100,lVar6);
  local_a0 = uVar12;
  Swift::ExpressibleByIntegerLiteral::_init();
  lVar5 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Strideable_100eacb68,
             PTR___associated_conformance_descriptor_for_Swift_Strideable_Swift_Strideable_Stride__Swift_Comparable_100eacb48
            );
  bVar3 = Swift::Comparable::>__infix(param_1,lVar13,lVar4,lVar5);
  local_88 = *(code **)(lVar11 + 8);
  (*local_88)(lVar13,lVar4);
  uVar7 = local_90;
  if (bVar3) {
    bVar3 = Swift::Comparable::>__infix(local_90,unaff_x20,param_3);
    lVar11 = local_a8;
    if (!bVar3) {
LAB_100694478:
      (**(code **)(lVar8 + 0x20))(lVar9,unaff_x20,param_3);
      Swift::Strideable::_advanced();
      (*local_88)(param_1,lVar4);
      (**(code **)(lVar8 + 8))(lVar9,param_3);
      Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar14,&DAT_100c6c6b8,0x100,lVar6,local_b0);
      Swift::ExpressibleByIntegerLiteral::_init();
      return;
    }
    Swift::Strideable::_distance(local_a8,uVar7,param_3,param_4);
    Swift::_min(lVar13,param_1,lVar11,lVar4,lVar5);
  }
  else {
    bVar3 = Swift::Comparable::<__infix(local_90,unaff_x20,param_3,*(undefined8 *)(param_4 + 8));
    lVar11 = local_a8;
    if (!bVar3) goto LAB_100694478;
    Swift::Strideable::_distance(local_a8,uVar7,param_3,param_4);
    Swift::_max(lVar13,param_1,lVar11,lVar4,lVar5);
  }
  pcVar2 = local_88;
  (*local_88)(lVar11,lVar4);
  (**(code **)(lVar8 + 0x20))(lVar9,unaff_x20,param_3);
  Swift::Strideable::_advanced();
  (**(code **)(lVar8 + 8))(lVar9,param_3);
  Swift::AdditiveArithmetic::___infix(param_1,lVar13,lVar4,*(undefined8 *)(local_98 + 8));
  (*pcVar2)(lVar13,lVar4);
  return;
}



/* Address: 0x100694520 | FUN_100694520 */

void FUN_100694520(long param_1)

{
  code *pcVar1;
  UnsafeMutableBufferPointer<undefined> UVar2;
  long lVar3;
  __int64 *unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  UVar2 = Swift::UnsafeMutableBufferPointer::_init(*unaff_x20);
  if ((*(uint *)(*(long *)(lVar3 + -8) + 0x50) & (uint)UVar2.unknown & 0xff) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100694568);
  (*pcVar1)();
}



/* Address: 0x100694568 | FUN_100694568 */

code * FUN_100694568(undefined8 param_1,undefined8 param_2)

{
  FUN_100694520(param_2);
  return FUN_100004520;
}



/* Address: 0x100694598 | FUN_100694598 */

void FUN_100694598(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10069459c);
  (*pcVar1)();
}



/* Address: 0x10069459c | FUN_10069459c */

void FUN_10069459c(undefined8 *param_1)

{
  UnsafeMutablePointer UVar1;
  
  UVar1.unknown = (undefined *)*param_1;
  Swift::UnsafeMutablePointer::deinitialize(1,UVar1);
  Swift::UnsafeMutablePointer::deallocate(UVar1);
  return;
}



/* Address: 0x1006945d4 | FUN_1006945d4 */

void FUN_1006945d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1006945e0 | FUN_1006945e0 */

void FUN_1006945e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1006945ec | FUN_1006945ec */

void FUN_1006945ec(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006945f8 | FUN_1006945f8 */

void FUN_1006945f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
                    /* WARNING: Could not recover jumptable at 0x00010069466c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100694670 | FUN_100694670 */

void FUN_100694670(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar1,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
                    /* WARNING: Could not recover jumptable at 0x0001006946e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))();
  return;
}



/* Address: 0x1006946ec | FUN_1006946ec */

void FUN_1006946ec(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar6 = *(long *)(param_5 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar7 + -8);
  lVar2 = (long)puVar4 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar2 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_5;
  local_70 = param_8;
  local_68 = param_3;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar3 + 0x30))(lVar5,1,lVar7);
  if ((int)lVar1 == 1) {
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
  }
  else {
    (**(code **)(lVar3 + 0x20))(lVar2,lVar5,lVar7);
    (*param_2)(param_1,lVar2,puVar4);
    (**(code **)(lVar3 + 8))(lVar2,lVar7);
    if (unaff_x21 != 0) {
      (**(code **)(lVar6 + 0x20))(local_70,puVar4,local_78);
    }
  }
  return;
}



/* Address: 0x10069484c | FUN_10069484c */

void FUN_10069484c(void)

{
  FUN_100694860();
  return;
}



/* Address: 0x100694860 | FUN_100694860 */

void FUN_100694860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffb0 +
             -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
  Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x100694910 | FUN_100694910 */

void FUN_100694910(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined7 extraout_var_00;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  long lVar3;
  
  lVar11 = *(long *)(param_3 + 0x10);
  local_70 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar10 = *(long *)(lVar3 + -8);
  lVar8 = (long)&local_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_3 + 0x18),lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar12 = lVar8 - (*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 0x40) + 0xfU &
                   0xfffffffffffffff0);
  local_68 = param_2;
  (**(code **)(lVar10 + 0x10))(lVar8,param_2,lVar3);
  lVar7 = *(long *)(lVar11 + -8);
  lVar9 = lVar8;
  (**(code **)(lVar7 + 0x30))(lVar8,1,lVar11);
  bVar1 = (int)lVar9 == 1;
  lVar9 = lVar3;
  lVar6 = lVar10;
  if (!bVar1) {
    Swift::RawRepresentable::_get_rawValue();
    lVar9 = lVar11;
    lVar6 = lVar7;
  }
  (**(code **)(lVar6 + 8))(lVar8,lVar9);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar12,bVar1,1,lVar4);
  lVar9 = *(long *)(param_3 + 0x20);
  uVar5 = 0;
  _swift_getAssociatedTypeWitness(0,lVar9,lVar4,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  _swift_getAssociatedConformanceWitness
            (lVar9,lVar4,uVar5,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  (**(code **)(lVar9 + 0x10))(local_70,lVar12,uVar5,lVar9);
  (**(code **)(lVar10 + 8))(local_68,lVar3);
  return;
}



/* Address: 0x100694ad8 | FUN_100694ad8 */

void FUN_100694ad8(undefined8 param_1,long param_2)

{
  long lVar1;
  Optional OVar2;
  undefined8 uVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  long lVar5;
  
  lVar1 = *(long *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar1,uVar3,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar2.value);
  lVar9 = *(long *)(lVar5 + -8);
  lVar8 = (long)(auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),unaff_x20,lVar4);
  lVar6 = lVar1;
  _swift_getAssociatedConformanceWitness
            (lVar1,uVar3,lVar4,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  (**(code **)(lVar6 + 0x18))(lVar8,lVar4,lVar6);
  local_80 = uVar10;
  uStack_78 = uVar11;
  local_70 = lVar1;
  local_68 = uVar10;
  FUN_1006946ec(param_1,FUN_100696484,auStack_90,lVar5,PTR___type_metadata_for_Swift_Never_100eadc38
                ,uVar10,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(*(long *)(param_2 + -8) + 8))(unaff_x20,param_2);
  (**(code **)(lVar9 + 8))(lVar8,lVar5);
  return;
}



/* Address: 0x100694c74 | FUN_100694c74 */

void FUN_100694c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  long lVar3;
  
  uStack_a8 = *(undefined8 *)(param_4 + 0x18);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar2 = 0xff;
  local_b0 = uVar9;
  local_a0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_4 + 0x18),uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  lVar7 = (long)&local_b0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x20);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,lVar8,uVar2,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar5 = lVar8;
  _swift_getAssociatedConformanceWitness
            (lVar8,uVar2,uVar4,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  (**(code **)(lVar5 + 0x20))(lVar7,param_2,param_3,uVar4,lVar5);
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  local_68 = local_b0;
  local_70 = lVar8;
  FUN_1006946ec(local_a0,FUN_100696464,auStack_90,lVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,uVar9,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar6 + 8))(lVar7,lVar3);
  return;
}



/* Address: 0x100694ddc | FUN_100694ddc */

void FUN_100694ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined7 extraout_var_00;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lVar3;
  
  lVar12 = *(long *)(param_4 + 0x10);
  local_78 = param_2;
  uStack_70 = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar11 = *(long *)(lVar3 + -8);
  puVar9 = auStack_80 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_4 + 0x18),lVar12,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar13 = (long)puVar9 -
           (*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  local_68 = param_1;
  (**(code **)(lVar11 + 0x10))(puVar9,param_1,lVar3);
  lVar8 = *(long *)(lVar12 + -8);
  puVar5 = puVar9;
  (**(code **)(lVar8 + 0x30))(puVar9,1,lVar12);
  bVar1 = (int)puVar5 == 1;
  lVar10 = lVar3;
  lVar7 = lVar11;
  if (!bVar1) {
    Swift::RawRepresentable::_get_rawValue();
    lVar10 = lVar12;
    lVar7 = lVar8;
  }
  (**(code **)(lVar7 + 8))(puVar9,lVar10);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar13,bVar1,1,lVar4);
  lVar10 = *(long *)(param_4 + 0x20);
  uVar6 = 0;
  _swift_getAssociatedTypeWitness(0,lVar10,lVar4,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  _swift_getAssociatedConformanceWitness
            (lVar10,lVar4,uVar6,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  (**(code **)(lVar10 + 0x28))(lVar13,local_78,uStack_70,uVar6,lVar10);
  (**(code **)(lVar11 + 8))(local_68,lVar3);
  return;
}



/* Address: 0x100694fa4 | FUN_100694fa4 */

void FUN_100694fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined7 extraout_var_00;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  long lVar3;
  
  lVar10 = *(long *)(param_5 + 0x10);
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar13 = *(long *)(lVar3 + -8);
  lVar9 = (long)&local_d0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = *(undefined8 *)(param_5 + 0x18);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,local_a0,lVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_c8 = CONCAT71(extraout_var_00,OVar2.value);
  local_d0 = *(long *)(local_c8 + -8);
  uVar7 = *(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar9 - uVar7;
  lVar14 = lVar11 - uVar7;
  local_a8 = param_2;
  (**(code **)(lVar13 + 0x10))(lVar9,param_2,lVar3);
  lVar12 = *(long *)(lVar10 + -8);
  lVar5 = lVar9;
  (**(code **)(lVar12 + 0x30))(lVar9,1,lVar10);
  bVar1 = (int)lVar5 == 1;
  lVar5 = lVar3;
  lVar8 = lVar13;
  if (!bVar1) {
    Swift::RawRepresentable::_get_rawValue();
    lVar5 = lVar10;
    lVar8 = lVar12;
  }
  (**(code **)(lVar8 + 8))(lVar9,lVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,bVar1,1,lVar4);
  lVar8 = *(long *)(param_5 + 0x20);
  uVar6 = 0;
  _swift_getAssociatedTypeWitness(0,lVar8,lVar4,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar5 = lVar8;
  _swift_getAssociatedConformanceWitness
            (lVar8,lVar4,uVar6,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  (**(code **)(lVar5 + 0x30))(lVar14,lVar11,local_c0,uStack_b8,uVar6,lVar5);
  lVar5 = local_c8;
  uStack_78 = local_a0;
  local_80 = lVar10;
  local_70 = lVar8;
  lStack_68 = lVar10;
  FUN_1006946ec(local_b0,FUN_100696484,auStack_90,local_c8,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar10,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar13 + 8))(local_a8,lVar3);
  (**(code **)(local_d0 + 8))(lVar14,lVar5);
  return;
}



/* Address: 0x1006951dc | FUN_1006951dc */

ulong FUN_1006951dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  int iVar1;
  bool bVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  byte abStack_130 [8];
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  byte *local_108;
  long local_100;
  byte *local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long lVar4;
  
  lVar13 = *(long *)(param_6 + 0x10);
  local_e8 = param_4;
  local_e0 = param_5;
  local_d0 = param_1;
  local_b0 = param_3;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  lVar11 = *(long *)(lVar4 + -8);
  uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar9 = abStack_130 + -uVar10;
  lVar12 = (long)pbVar9 - uVar10;
  local_c8 = *(undefined8 *)(param_6 + 0x18);
  lVar5 = 0xff;
  local_118 = param_6;
  _swift_getAssociatedTypeWitness
            (0xff,local_c8,lVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_d8 = CONCAT71(extraout_var_00,OVar3.value);
  local_110 = *(long *)(local_d8 + -8);
  uVar10 = *(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_120 = lVar12 - uVar10;
  lVar16 = local_120 - uVar10;
  lVar6 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,local_d8,"exchanged original ",0);
  local_100 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = (byte *)(lVar16 - uVar10);
  local_108 = local_f8 + -uVar10;
  pcVar14 = *(code **)(lVar11 + 0x10);
  local_f0 = lVar6;
  (*pcVar14)(lVar12,param_2,lVar4);
  local_128 = *(long *)(lVar13 + -8);
  pcVar17 = *(code **)(local_128 + 0x30);
  lVar6 = lVar12;
  (*pcVar17)(lVar12,1,lVar13);
  bVar2 = (int)lVar6 == 1;
  local_c0 = lVar11;
  local_b8 = lVar4;
  if (!bVar2) {
    Swift::RawRepresentable::_get_rawValue();
    lVar11 = local_128;
    lVar4 = lVar13;
  }
  (**(code **)(lVar11 + 8))(lVar12,lVar4);
  pcVar15 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar15)(lVar16,bVar2,1,lVar5);
  lVar11 = local_b8;
  (*pcVar14)(pbVar9,local_b0,local_b8);
  pbVar7 = pbVar9;
  (*pcVar17)(pbVar9,1,lVar13);
  lVar6 = local_120;
  bVar2 = (int)pbVar7 == 1;
  lVar4 = local_c0;
  if (!bVar2) {
    Swift::RawRepresentable::_get_rawValue();
    lVar4 = local_128;
    lVar11 = lVar13;
  }
  (**(code **)(lVar4 + 8))(pbVar9,lVar11);
  (*pcVar15)(lVar6,bVar2,1,lVar5);
  lVar11 = local_f0;
  iVar1 = *(int *)(local_f0 + 0x30);
  lVar12 = *(long *)(local_118 + 0x20);
  uVar8 = 0;
  _swift_getAssociatedTypeWitness(0,lVar12,lVar5,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar4 = lVar12;
  _swift_getAssociatedConformanceWitness
            (lVar12,lVar5,uVar8,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  pbVar7 = local_108;
  pbVar9 = local_108 + iVar1;
  (**(code **)(lVar4 + 0x38))(pbVar9,lVar16,lVar6,local_e8,local_e0,uVar8,lVar4);
  lVar4 = local_d8;
  pcVar14 = *(code **)(local_110 + 8);
  (*pcVar14)(lVar16,local_d8);
  *pbVar7 = (byte)pbVar9 & 1;
  pbVar9 = local_f8;
  lVar6 = local_100;
  (**(code **)(local_100 + 0x10))(local_f8,pbVar7,lVar11);
  local_e0 = CONCAT44(local_e0._4_4_,(uint)*pbVar9);
  local_e8 = (long)*(int *)(lVar11 + 0x30);
  uStack_88 = local_c8;
  local_90 = lVar13;
  local_80 = lVar12;
  lStack_78 = lVar13;
  FUN_1006946ec(local_d0,FUN_100696484,auStack_a0,lVar4,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar13,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(local_c0 + 8))(local_b0,local_b8);
  (**(code **)(lVar6 + 8))(pbVar7,lVar11);
  (*pcVar14)(pbVar9 + local_e8,lVar4);
  return local_e0 & 0xffffffff;
}



/* Address: 0x100695588 | FUN_100695588 */

ulong FUN_100695588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  byte *local_110;
  long local_108;
  byte *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long lVar5;
  
  lVar13 = *(long *)(param_7 + 0x10);
  local_f0 = param_4;
  local_e8 = param_5;
  local_e0 = param_6;
  local_d0 = param_1;
  local_b0 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar4.value);
  lVar11 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)&local_130 - uVar10;
  lVar12 = lVar16 - uVar10;
  local_c8 = *(undefined8 *)(param_7 + 0x18);
  lVar6 = 0xff;
  local_120 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,local_c8,lVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_d8 = CONCAT71(extraout_var_00,OVar4.value);
  local_118 = *(long *)(local_d8 + -8);
  uVar10 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_128 = lVar12 - uVar10;
  lVar18 = local_128 - uVar10;
  lVar7 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,local_d8,"exchanged original ",0);
  local_108 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (byte *)(lVar18 - uVar10);
  local_110 = local_100 + -uVar10;
  pcVar14 = *(code **)(lVar11 + 0x10);
  local_f8 = lVar7;
  (*pcVar14)(lVar12,param_2,lVar5);
  local_130 = *(long *)(lVar13 + -8);
  pcVar15 = *(code **)(local_130 + 0x30);
  lVar7 = lVar12;
  (*pcVar15)(lVar12,1,lVar13);
  bVar3 = (int)lVar7 == 1;
  local_c0 = lVar11;
  local_b8 = lVar5;
  if (!bVar3) {
    Swift::RawRepresentable::_get_rawValue();
    lVar11 = local_130;
    lVar5 = lVar13;
  }
  (**(code **)(lVar11 + 8))(lVar12,lVar5);
  pcVar17 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar17)(lVar18,bVar3,1,lVar6);
  lVar11 = local_b8;
  (*pcVar14)(lVar16,local_b0,local_b8);
  lVar5 = lVar16;
  (*pcVar15)(lVar16,1,lVar13);
  lVar7 = local_128;
  bVar3 = (int)lVar5 == 1;
  lVar5 = local_c0;
  if (!bVar3) {
    Swift::RawRepresentable::_get_rawValue();
    lVar5 = local_130;
    lVar11 = lVar13;
  }
  (**(code **)(lVar5 + 8))(lVar16,lVar11);
  (*pcVar17)(lVar7,bVar3,1,lVar6);
  lVar11 = local_f8;
  iVar1 = *(int *)(local_f8 + 0x30);
  lVar12 = *(long *)(local_120 + 0x20);
  uVar8 = 0;
  local_130 = (long)iVar1;
  _swift_getAssociatedTypeWitness(0,lVar12,lVar6,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar5 = lVar12;
  _swift_getAssociatedConformanceWitness
            (lVar12,lVar6,uVar8,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  pbVar2 = local_110;
  pbVar9 = local_110 + iVar1;
  (**(code **)(lVar5 + 0x40))(pbVar9,lVar18,lVar7,local_f0,local_e8,local_e0,uVar8,lVar5);
  lVar5 = local_d8;
  pcVar14 = *(code **)(local_118 + 8);
  (*pcVar14)(lVar18,local_d8);
  *pbVar2 = (byte)pbVar9 & 1;
  pbVar9 = local_100;
  lVar7 = local_108;
  (**(code **)(local_108 + 0x10))(local_100,pbVar2,lVar11);
  local_e0 = CONCAT44(local_e0._4_4_,(uint)*pbVar9);
  iVar1 = *(int *)(lVar11 + 0x30);
  uStack_88 = local_c8;
  local_90 = lVar13;
  local_80 = lVar12;
  lStack_78 = lVar13;
  FUN_1006946ec(local_d0,FUN_100696484,auStack_a0,lVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar13,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(local_c0 + 8))(local_b0,local_b8);
  (**(code **)(lVar7 + 8))(pbVar2,lVar11);
  (*pcVar14)(pbVar9 + iVar1,lVar5);
  return local_e0 & 0xffffffff;
}



/* Address: 0x100695954 | FUN_100695954 */

ulong FUN_100695954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  byte *local_110;
  long local_108;
  byte *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long lVar5;
  
  lVar13 = *(long *)(param_7 + 0x10);
  local_f0 = param_4;
  local_e8 = param_5;
  local_e0 = param_6;
  local_d0 = param_1;
  local_b0 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar4.value);
  lVar11 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)&local_130 - uVar10;
  lVar12 = lVar16 - uVar10;
  local_c8 = *(undefined8 *)(param_7 + 0x18);
  lVar6 = 0xff;
  local_120 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,local_c8,lVar13,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_d8 = CONCAT71(extraout_var_00,OVar4.value);
  local_118 = *(long *)(local_d8 + -8);
  uVar10 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_128 = lVar12 - uVar10;
  lVar18 = local_128 - uVar10;
  lVar7 = 0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Bool_100eac570,local_d8,"exchanged original ",0);
  local_108 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (byte *)(lVar18 - uVar10);
  local_110 = local_100 + -uVar10;
  pcVar14 = *(code **)(lVar11 + 0x10);
  local_f8 = lVar7;
  (*pcVar14)(lVar12,param_2,lVar5);
  local_130 = *(long *)(lVar13 + -8);
  pcVar15 = *(code **)(local_130 + 0x30);
  lVar7 = lVar12;
  (*pcVar15)(lVar12,1,lVar13);
  bVar3 = (int)lVar7 == 1;
  local_c0 = lVar11;
  local_b8 = lVar5;
  if (!bVar3) {
    Swift::RawRepresentable::_get_rawValue();
    lVar11 = local_130;
    lVar5 = lVar13;
  }
  (**(code **)(lVar11 + 8))(lVar12,lVar5);
  pcVar17 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar17)(lVar18,bVar3,1,lVar6);
  lVar11 = local_b8;
  (*pcVar14)(lVar16,local_b0,local_b8);
  lVar5 = lVar16;
  (*pcVar15)(lVar16,1,lVar13);
  lVar7 = local_128;
  bVar3 = (int)lVar5 == 1;
  lVar5 = local_c0;
  if (!bVar3) {
    Swift::RawRepresentable::_get_rawValue();
    lVar5 = local_130;
    lVar11 = lVar13;
  }
  (**(code **)(lVar5 + 8))(lVar16,lVar11);
  (*pcVar17)(lVar7,bVar3,1,lVar6);
  lVar11 = local_f8;
  iVar1 = *(int *)(local_f8 + 0x30);
  lVar12 = *(long *)(local_120 + 0x20);
  uVar8 = 0;
  local_130 = (long)iVar1;
  _swift_getAssociatedTypeWitness(0,lVar12,lVar6,0x100cbabac,&TargetProtocolRequirement_100cbabc4);
  lVar5 = lVar12;
  _swift_getAssociatedConformanceWitness
            (lVar12,lVar6,uVar8,0x100cbabac,&TargetProtocolRequirement_100cbabbc);
  pbVar2 = local_110;
  pbVar9 = local_110 + iVar1;
  (**(code **)(lVar5 + 0x50))(pbVar9,lVar18,lVar7,local_f0,local_e8,local_e0,uVar8,lVar5);
  lVar5 = local_d8;
  pcVar14 = *(code **)(local_118 + 8);
  (*pcVar14)(lVar18,local_d8);
  *pbVar2 = (byte)pbVar9 & 1;
  pbVar9 = local_100;
  lVar7 = local_108;
  (**(code **)(local_108 + 0x10))(local_100,pbVar2,lVar11);
  local_e0 = CONCAT44(local_e0._4_4_,(uint)*pbVar9);
  iVar1 = *(int *)(lVar11 + 0x30);
  uStack_88 = local_c8;
  local_90 = lVar13;
  local_80 = lVar12;
  lStack_78 = lVar13;
  FUN_1006946ec(local_d0,FUN_100696484,auStack_a0,lVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar13,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(local_c0 + 8))(local_b0,local_b8);
  (**(code **)(lVar7 + 8))(pbVar2,lVar11);
  (*pcVar14)(pbVar9 + iVar1,lVar5);
  return local_e0 & 0xffffffff;
}


