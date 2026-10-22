/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007c2c0c | FUN_1007c2c0c */

void FUN_1007c2c0c(void)

{
  long unaff_x20;
  
  FUN_1007b0d1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007c2c30 | FUN_1007c2c30 */

void FUN_1007c2c30(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2c3c | FUN_1007c2c3c */

void FUN_1007c2c3c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c787d8,param_1);
  return;
}



/* Address: 0x1007c2c4c | FUN_1007c2c4c */

undefined1  [16] FUN_1007c2c4c(void)

{
  return ZEXT816(0x100f01e38);
}



/* Address: 0x1007c2c5c | FUN_1007c2c5c */

void FUN_1007c2c5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1007acb10();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1007c2c80 | FUN_1007c2c80 */

void FUN_1007c2c80(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (1 < uVar1) {
    FUN_1007acb10();
    _swift_release(uVar1);
  }
  uVar1 = param_1[1];
  FUN_1007ae2a8();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1007c2cc0 | FUN_1007c2cc0 */

long * FUN_1007c2cc0(long *param_1,long *param_2,long param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = *param_2;
  if (lVar3 != 1) {
    if (lVar2 == 1) {
      FUN_1007c0a44(0xff,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                    *(undefined8 *)(param_3 + 0x20));
      OVar1 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
                (param_1,CONCAT71(extraout_var,OVar1.value));
      lVar2 = 1;
    }
    else if (lVar3 != 0) {
      if (lVar2 == 0) {
        FUN_1007acb10();
        _swift_release(lVar3);
        *param_1 = 0;
      }
      else {
        *param_1 = lVar2;
        _swift_release(lVar3);
      }
      goto LAB_1007c2d48;
    }
  }
  *param_1 = lVar2;
LAB_1007c2d48:
  lVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(lVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1007c2d88 | FUN_1007c2d88 */

void FUN_1007c2d88(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2d94 | FUN_1007c2d94 */

undefined * FUN_1007c2d94(undefined8 *param_1)

{
  Optional OVar1;
  undefined *puVar2;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    FUN_1007c0a44(0xff,*param_1,param_1[1],param_1[2]);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    puVar2 = (undefined *)0x0;
    FUN_100793c60(0,OVar1.value);
    return puVar2;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007c2da0 | FUN_1007c2da0 */

void FUN_1007c2da0(undefined8 *param_1)

{
  Optional OVar1;
  
  FUN_1007c0a44(0xff,*param_1,param_1[1],param_1[2]);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_100793c60(0,OVar1.value);
  return;
}



/* Address: 0x1007c2de8 | FUN_1007c2de8 */

undefined * FUN_1007c2de8(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_1007c2e24(0,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007c2df4 | FUN_1007c2df4 */

void FUN_1007c2df4(undefined8 *param_1)

{
  FUN_1007c2e24(0,*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007c2e24 | FUN_1007c2e24 */

void FUN_1007c2e24(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2e30 | FUN_1007c2e30 */

void FUN_1007c2e30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1007ae2a8();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1007c2e54 | FUN_1007c2e54 */

void FUN_1007c2e54(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
    _swift_release();
    return;
  }
  return;
}



/* Address: 0x1007c2e6c | FUN_1007c2e6c */

undefined8 * FUN_1007c2e6c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 0xffffffff) {
      _swift_release(uVar1);
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      _swift_release(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1007c2ee4 | FUN_1007c2ee4 */

void FUN_1007c2ee4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2ef0 | thunk_FUN_1007c2ef4 */

void thunk_FUN_1007c2ef4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Address: 0x1007c2ef4 | FUN_1007c2ef4 */

void FUN_1007c2ef4(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x68);
  return;
}



/* Address: 0x1007c2f38 | FUN_1007c2f38 */

void FUN_1007c2f38(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2f44 | FUN_1007c2f44 */

void FUN_1007c2f44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  FUN_1007c2f70(0xff,*param_1,param_1[1],param_1[2]);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78a4c,uVar1);
  return;
}



/* Address: 0x1007c2f70 | FUN_1007c2f70 */

void FUN_1007c2f70(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2f7c | FUN_1007c2f7c */

void FUN_1007c2f7c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78aa8,param_1);
  return;
}



/* Address: 0x1007c2f8c | FUN_1007c2f8c */

void FUN_1007c2f8c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2f98 | thunk_FUN_1007c2ef4 */

void thunk_FUN_1007c2ef4(void)

{
  thunk_FUN_1007c2ef4();
  return;
}



/* Address: 0x1007c2f9c | thunk_FUN_1005da450 */

void thunk_FUN_1005da450(void)

{
  FUN_1005da450();
  return;
}



/* Address: 0x1007c2fa0 | FUN_1007c2fa0 */

void FUN_1007c2fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(long *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(param_5 + 8) + 8),param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar2 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  _swift_task_switch(FUN_1007c30cc,0,0);
  return;
}



/* Address: 0x1007c30cc | FUN_1007c30cc */

void FUN_1007c30cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  Swift::RangeReplaceableCollection::init();
  (**(code **)(lVar1 + 0x10))(uVar4,uVar3,uVar2);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x80),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1007c31b0;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c31b0 | FUN_1007c31b0 */

void FUN_1007c31b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007c3214;
  }
  else {
    pcVar1 = FUN_1007c33ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007c3214 | FUN_1007c3214 */

void FUN_1007c3214(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar6 = uVar8;
  (**(code **)(lVar2 + 0x30))(uVar8,1,uVar1);
  if ((int)uVar6 == 1) {
    lVar2 = *(long *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
    (**(code **)(lVar2 + 8))(uVar3,uVar4);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001007c32d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(lVar2 + 0x20))(uVar3,uVar8,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar6,uVar3,uVar1);
  Swift::RangeReplaceableCollection::_append();
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x80),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1007c31b0;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c33ac | FUN_1007c33ac */

void FUN_1007c33ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar1 + 8))(uVar7,uVar8);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar6,lVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007c3468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c346c | FUN_1007c346c */

void FUN_1007c346c(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Address: 0x1007c3484 | FUN_1007c3484 */

void FUN_1007c3484(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))
            ((long)puVar3 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  FUN_100628180(param_1,param_2,puVar3);
  if (unaff_x21 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    _swift_allocError(lVar2,uVar1,0,0);
    (**(code **)(lVar4 + 0x20))(uVar1,puVar3,lVar2);
  }
  return;
}



/* Address: 0x1007c3560 | FUN_1007c3560 */

void FUN_1007c3560(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(long *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_SetAlgebra_100eacce0,
             PTR___associated_type_descriptor_for_Swift_SetAlgebra_Element_100eabd08);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  lVar2 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  _swift_task_switch(FUN_1007c3698,0,0);
  return;
}



/* Address: 0x1007c3698 | FUN_1007c3698 */

void FUN_1007c3698(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  Swift::SetAlgebra::init();
  (**(code **)(lVar1 + 0x10))(uVar4,uVar3,uVar2);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x88),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1007c377c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c377c | FUN_1007c377c */

void FUN_1007c377c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007c37e0;
  }
  else {
    pcVar1 = FUN_1007c39a4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007c37e0 | FUN_1007c37e0 */

void FUN_1007c37e0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar5 = uVar10;
  (**(code **)(lVar2 + 0x30))(uVar10,1,uVar1);
  if ((int)uVar5 == 1) {
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
              (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
    (**(code **)(lVar2 + 8))(uVar3,uVar8);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001007c38b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(lVar2 + 0x20))(uVar3,uVar10,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar8,uVar3,uVar1);
  Swift::SetAlgebra::_insert();
  pcVar7 = *(code **)(lVar2 + 8);
  (*pcVar7)(uVar5,uVar1);
  (*pcVar7)(uVar3,uVar1);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x88),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1007c377c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c39a4 | FUN_1007c39a4 */

void FUN_1007c39a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(lVar1 + 8))(uVar7,uVar8);
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar6,lVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001007c3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c3a74 | FUN_1007c3a74 */

void FUN_1007c3a74(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c3a80 | FUN_1007c3a80 */

void FUN_1007c3a80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar1 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_4 + -8);
  lVar2 = lVar1 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2,param_2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_1007c3fbc(0,&local_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Address: 0x1007c3b74 | FUN_1007c3b74 */

void FUN_1007c3b74(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar2 = *(long *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar3 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = lVar2;
  local_70 = lVar2;
  FUN_1007d6b4c(0,&local_80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,1,1,lVar2);
  FUN_1007d7684();
  (**(code **)(lVar4 + 8))(lVar3,CONCAT71(extraout_var,OVar1.value));
  FUN_1007c3c5c(unaff_x20);
  return;
}



/* Address: 0x1007c3c5c | FUN_1007c3c5c */

void FUN_1007c3c5c(long *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_38 = *(undefined8 *)(lVar1 + 0x58);
  local_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_28 = *(undefined8 *)(lVar1 + 0x70);
  uStack_30 = *(undefined8 *)(lVar1 + 0x68);
  lVar1 = 0;
  FUN_1007c3fd4(0,&local_40);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x1007c3cac | FUN_1007c3cac */

void FUN_1007c3cac(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_1007d2b14();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1007c3cec | FUN_1007c3cec */

void FUN_1007c3cec(void)

{
  FUN_1007c3cac();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007c3d0c | FUN_1007c3d0c */

void FUN_1007c3d0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x22;
  long lVar9;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar9 = *unaff_x20;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x30) = CONCAT71(extraout_var,OVar3.value);
  lVar9 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,CONCAT71(extraout_var,OVar3.value),0,0);
  *(long *)(unaff_x22 + 0x38) = lVar9;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var_00,OVar3.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar6;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar9;
  uVar6 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar7;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar6;
  _swift_task_switch(FUN_1007c3e3c,0,0);
  return;
}



/* Address: 0x1007c3e3c | FUN_1007c3e3c */

void FUN_1007c3e3c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007584f0;
  FUN_1007d2cf4(plVar1,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1007c3e98 | FUN_1007c3e98 */

void FUN_1007c3e98(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_1007c3eb0,0,0);
  return;
}



/* Address: 0x1007c3eb0 | FUN_1007c3eb0 */

void FUN_1007c3eb0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_1007c3d0c(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1007c3f0c | FUN_1007c3f0c */

void FUN_1007c3f0c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007c3e98(plVar1,param_1);
  return;
}



/* Address: 0x1007c3f64 | FUN_1007c3f64 */

void FUN_1007c3f64(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1007c3b74();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}



/* Address: 0x1007c3fac | FUN_1007c3fac */

void FUN_1007c3fac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78bb0,param_1);
  return;
}



/* Address: 0x1007c3fbc | FUN_1007c3fbc */

void FUN_1007c3fbc(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc0eec);
  return;
}



/* Address: 0x1007c3fc8 | FUN_1007c3fc8 */

void FUN_1007c3fc8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cc0f34);
  return;
}



/* Address: 0x1007c3fd4 | FUN_1007c3fd4 */

void FUN_1007c3fd4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cc0f7c);
  return;
}



/* Address: 0x1007c3fe0 | FUN_1007c3fe0 */

void FUN_1007c3fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = param_10;
  lVar3 = *(long *)(param_7 + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_6 + -8);
  lVar5 = lVar4 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = lVar5 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_1;
  local_70 = param_8;
  local_68 = param_9;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar1,param_2,param_5);
  (**(code **)(lVar2 + 0x10))(lVar5,param_3,param_6);
  (**(code **)(lVar3 + 0x10))(lVar4,param_4,param_7);
  *(undefined8 *)(lVar1 + -0x10) = local_80;
  FUN_1007c4104(local_78,lVar1,lVar5,lVar4,param_5,param_6,param_7,local_70,local_68);
  return;
}



/* Address: 0x1007c4104 | FUN_1007c4104 */

void FUN_1007c4104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  uStack_68 = param_10;
  lVar1 = 0;
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1007c4604(0,&local_90);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x44),param_3,param_6);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x48),param_4,param_7);
  return;
}



/* Address: 0x1007c41d4 | FUN_1007c41d4 */

void FUN_1007c41d4(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar3 = *(long *)(param_1 + 0x20);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar4 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  local_70 = lVar3;
  FUN_1007d6b4c(0,&local_80);
  lVar2 = *(long *)(lVar3 + -8);
  (**(code **)(lVar2 + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x48),lVar3);
  (**(code **)(lVar2 + 0x38))(lVar4,0,1,lVar3);
  FUN_1007d7684();
  (**(code **)(lVar5 + 8))(lVar4,CONCAT71(extraout_var,OVar1.value));
  FUN_1007c42d0(unaff_x20);
  return;
}



/* Address: 0x1007c42d0 | FUN_1007c42d0 */

void FUN_1007c42d0(long *param_1)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *param_1;
  uStack_48 = *(undefined8 *)(lVar1 + 0x58);
  local_50 = *(undefined8 *)(lVar1 + 0x50);
  uStack_38 = *(undefined8 *)(lVar1 + 0x68);
  uStack_40 = *(undefined8 *)(lVar1 + 0x60);
  uStack_28 = *(undefined8 *)(lVar1 + 0x78);
  local_30 = *(undefined8 *)(lVar1 + 0x70);
  lVar1 = 0;
  FUN_1007c461c(0,&local_50);
  _swift_allocObject();
  *(long **)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x1007c4324 | FUN_1007c4324 */

void FUN_1007c4324(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x22;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8;
  lVar10 = *unaff_x20;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x50),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x58),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x60),puVar2,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,OVar3.value);
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata3(0xff,uVar4,uVar5,CONCAT71(extraout_var,OVar3.value),0,0);
  *(long *)(unaff_x22 + 0x40) = lVar10;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x48) = CONCAT71(extraout_var_00,OVar3.value);
  lVar9 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  *(long *)(unaff_x22 + 0x50) = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar7;
  lVar10 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar10;
  uVar7 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar8;
  uVar8 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar8;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar7;
  _swift_task_switch(FUN_1007c4484,0,0);
  return;
}



/* Address: 0x1007c4484 | FUN_1007c4484 */

void FUN_1007c4484(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758eac;
  FUN_1007d2cf4(plVar1,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x1007c44e0 | FUN_1007c44e0 */

void FUN_1007c44e0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_1007c44f8,0,0);
  return;
}



/* Address: 0x1007c44f8 | FUN_1007c44f8 */

void FUN_1007c44f8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_1007c4324(plVar1,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1007c4554 | FUN_1007c4554 */

void FUN_1007c4554(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007c44e0(plVar1,param_1);
  return;
}



/* Address: 0x1007c45ac | FUN_1007c45ac */

void FUN_1007c45ac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1007c41d4();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  return;
}


