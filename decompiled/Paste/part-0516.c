/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005e76e8 | FUN_1005e76e8 */

void FUN_1005e76e8(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  Continuation CVar2;
  undefined7 extraout_var;
  long lVar3;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar2 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (param_2,CONCAT71(extraout_var,OVar1.value));
  lVar3 = *(long *)(CVar2.unknown + -8);
  (**(code **)(lVar3 + 0x10))(param_2,param_1,CVar2.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001005e778c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_2,0,1,CVar2.unknown);
  return;
}



/* Address: 0x1005e7790 | FUN_1005e7790 */

void FUN_1005e7790(undefined8 param_1)

{
  undefined4 uVar1;
  BufferingPolicy BVar2;
  undefined7 extraout_var;
  
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
  ;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  BVar2 = Swift::AsyncThrowingStream::Continuation::BufferingPolicy::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e7800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar2.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var,BVar2.value));
  return;
}



/* Address: 0x1005e7804 | FUN_1005e7804 */

void FUN_1005e7804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  AsyncThrowingStream AVar1;
  undefined8 uVar2;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  AVar1 = Swift::AsyncThrowingStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar1.unknown + -8) + 0x20))(param_1,param_2,AVar1.unknown);
  uVar2 = 0;
  FUN_1005e8278(0,param_3);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  return;
}



/* Address: 0x1005e788c | FUN_1005e788c */

void FUN_1005e788c(undefined8 param_1)

{
  FUN_1005e7898(param_1,FUN_1005e828c);
  return;
}



/* Address: 0x1005e7898 | FUN_1005e7898 */

void FUN_1005e7898(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005e78d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1005e78d8 | FUN_1005e78d8 */

void FUN_1005e78d8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1005e828c(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005e7910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1005e7914 | FUN_1005e7914 */

void FUN_1005e7914(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  AsyncThrowingStream AVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = 0;
  FUN_1005e8278();
  lVar9 = *(long *)(lVar1 + -8);
  puVar6 = (undefined8 *)
           (&stack0xffffffffffffffa0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar9 + 0x10))(puVar6,param_2,lVar1);
  puVar2 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar1);
  if ((int)puVar2 == 1) {
    uVar7 = *puVar6;
    puVar3 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    uVar4 = uVar7;
    FUN_1005fbac8(uVar7,param_3,puVar3,&DAT_100ee9430,&DAT_100ee8cc8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                  &PTR_PTR_100ee9390,&PTR_PTR_100ee8a88);
    _swift_release(uVar7);
    (**(code **)(lVar9 + 8))(param_2,lVar1);
    *param_1 = uVar4;
    uVar4 = 0;
    FUN_1005e828c(0,param_3);
    _swift_storeEnumTagMultiPayload(param_1,uVar4,1);
  }
  else {
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    AVar5 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    lVar10 = *(long *)(AVar5.unknown + -8);
    lVar8 = (long)puVar6 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar10 + 0x20))(lVar8,puVar6,AVar5.unknown);
    Swift::AsyncThrowingStream::_makeAsyncIterator(AVar5);
    (**(code **)(lVar9 + 8))(param_2,lVar1);
    (**(code **)(lVar10 + 8))(lVar8,AVar5.unknown);
    uVar4 = 0;
    FUN_1005e828c(0,param_3);
    _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  }
  return;
}



/* Address: 0x1005e7af0 | FUN_1005e7af0 */

void FUN_1005e7af0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x28) = CONCAT71(extraout_var,OVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x30) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar3 = 0;
  FUN_1005e828c(0,uVar4);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_1005e7b90,0,0);
  return;
}



/* Address: 0x1005e7b90 | FUN_1005e7b90 */

void FUN_1005e7b90(void)

{
  long *plVar1;
  undefined *puVar2;
  Iterator IVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x10))(uVar6,*(undefined8 *)(unaff_x22 + 0x18),uVar5);
  _swift_getEnumCaseMultiPayload(uVar6,uVar5);
  if ((int)uVar6 == 1) {
    uVar6 = **(undefined8 **)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
    plVar1 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar1;
    puVar2 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1005e7e2c;
    FUN_1005fbb50(*(undefined8 *)(unaff_x22 + 0x10),uVar6,*(undefined8 *)(unaff_x22 + 0x20),puVar2,
                  &DAT_100ee9430,&DAT_100ee8cc8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                  &PTR_PTR_100ee9390,&PTR_PTR_100ee8a88);
    return;
  }
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  IVar3 = Swift::AsyncThrowingStream::Iterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = IVar3.unknown;
  lVar7 = *(long *)(IVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  (**(code **)(lVar7 + 0x20))();
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005e7d2c;
  Swift::AsyncThrowingStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1005e7d2c | FUN_1005e7d2c */

void FUN_1005e7d2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005e7d90;
  }
  else {
    pcVar1 = FUN_1005e7ee0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e7d90 | FUN_1005e7d90 */

void FUN_1005e7d90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x28));
  FUN_1005e7fac(uVar3,uVar2,uVar5);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  _swift_task_dealloc(uVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001005e7e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e7e2c | FUN_1005e7e2c */

void FUN_1005e7e2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005e7e90;
  }
  else {
    pcVar1 = FUN_1005e7f5c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005e7e90 | FUN_1005e7e90 */

void FUN_1005e7e90(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e7edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e7ee0 | FUN_1005e7ee0 */

void FUN_1005e7ee0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1005e7fac(*(undefined8 *)(unaff_x22 + 0x18),uVar3,*(undefined8 *)(unaff_x22 + 0x20));
  (**(code **)(lVar1 + 8))(uVar3,uVar2);
  _swift_task_dealloc(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005e7f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e7f5c | FUN_1005e7f5c */

void FUN_1005e7f5c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005e7fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005e7fac | FUN_1005e7fac */

void FUN_1005e7fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  Iterator IVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  FUN_1005e828c(0,param_3);
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  IVar2 = Swift::AsyncThrowingStream::Iterator::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar2.unknown + -8) + 0x10))(puVar3,param_2,IVar2.unknown);
  _swift_storeEnumTagMultiPayload(puVar3,lVar1,0);
  (**(code **)(lVar4 + 0x28))(param_1,puVar3,lVar1);
  return;
}



/* Address: 0x1005e8078 | FUN_1005e8078 */

void FUN_1005e8078(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1005e7af0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1005e80e0 | FUN_1005e80e0 */

void FUN_1005e80e0(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005e8174;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005e8174 | FUN_1005e8174 */

void FUN_1005e8174(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005e81cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005e81d0 | FUN_1005e81d0 */

void FUN_1005e81d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_1005e8278(0,uVar3);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  FUN_1005e7914(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),uVar3);
  return;
}



/* Address: 0x1005e8248 | FUN_1005e8248 */

void FUN_1005e8248(long param_1)

{
  FUN_1005e81d0();
                    /* WARNING: Could not recover jumptable at 0x0001005e8274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1005e8278 | FUN_1005e8278 */

void FUN_1005e8278(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e8284 | FUN_1005e8284 */

void FUN_1005e8284(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005e76e8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005e828c | FUN_1005e828c */

void FUN_1005e828c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e8298 | FUN_1005e8298 */

void FUN_1005e8298(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66380,param_1);
  return;
}



/* Address: 0x1005e82a8 | FUN_1005e82a8 */

void FUN_1005e82a8(void)

{
  FUN_1005e87f0();
  return;
}



/* Address: 0x1005e82b4 | FUN_1005e82b4 */

void FUN_1005e82b4(void)

{
  FUN_1005e8870();
  return;
}



/* Address: 0x1005e82c8 | FUN_1005e82c8 */

void FUN_1005e82c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005e8980(param_1,param_2,FUN_1005e8278,PTR_typeMetadataAccessor_100eaeea0);
  return;
}



/* Address: 0x1005e82dc | FUN_1005e82dc */

void FUN_1005e82dc(void)

{
  FUN_1005e8a30();
  return;
}



/* Address: 0x1005e82f0 | FUN_1005e82f0 */

void FUN_1005e82f0(void)

{
  FUN_1005e8b0c();
  return;
}



/* Address: 0x1005e8304 | FUN_1005e8304 */

void FUN_1005e8304(void)

{
  FUN_1005e8c04();
  return;
}



/* Address: 0x1005e8318 | FUN_1005e8318 */

void FUN_1005e8318(void)

{
  FUN_1005e8cec();
  return;
}



/* Address: 0x1005e832c | FUN_1005e832c */

void FUN_1005e832c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e8338 | FUN_1005e8338 */

void FUN_1005e8338(void)

{
  FUN_1005e8df0();
  return;
}



/* Address: 0x1005e8344 | FUN_1005e8344 */

void FUN_1005e8344(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e8350 | FUN_1005e8350 */

void FUN_1005e8350(void)

{
  FUN_1005e8e48();
  return;
}



/* Address: 0x1005e835c | FUN_1005e835c */

void FUN_1005e835c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e8368 | FUN_1005e8368 */

undefined1  [16] FUN_1005e8368(long param_1)

{
  Continuation CVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  if (uVar3 < 0x40) {
    local_28 = *(long *)(CVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
    CVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = CVar1.unknown;
  return auVar4;
}



/* Address: 0x1005e83f8 | FUN_1005e83f8 */

void FUN_1005e83f8(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e8460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(CVar1.unknown + -8))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1005e8464 | FUN_1005e8464 */

void FUN_1005e8464(undefined8 param_1)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e84bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 8))(param_1,CVar1.unknown);
  return;
}



/* Address: 0x1005e84c0 | FUN_1005e84c0 */

undefined8 FUN_1005e84c0(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1005e8534 | FUN_1005e8534 */

undefined8 FUN_1005e8534(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x18))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1005e85a8 | FUN_1005e85a8 */

undefined8 FUN_1005e85a8(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1005e861c | FUN_1005e861c */

undefined8 FUN_1005e861c(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x28))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1005e8690 | FUN_1005e8690 */

void FUN_1005e8690(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e869c | FUN_1005e869c */

void FUN_1005e869c(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e8704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x30))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1005e8708 | FUN_1005e8708 */

void FUN_1005e8708(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e8714 | FUN_1005e8714 */

void FUN_1005e8714(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e8780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1005e8784 | FUN_1005e8784 */

void FUN_1005e8784(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e8790 | FUN_1005e8790 */

void FUN_1005e8790(void)

{
  FUN_1005e8ea4();
  return;
}



/* Address: 0x1005e879c | FUN_1005e879c */

void FUN_1005e879c(void)

{
  FUN_1005e8f54();
  return;
}



/* Address: 0x1005e87a8 | FUN_1005e87a8 */

void FUN_1005e87a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005e9050(param_1,param_2,PTR_typeMetadataAccessor_100eaeea0);
  return;
}



/* Address: 0x1005e87b4 | FUN_1005e87b4 */

void FUN_1005e87b4(void)

{
  FUN_1005e90e8();
  return;
}



/* Address: 0x1005e87c0 | FUN_1005e87c0 */

void FUN_1005e87c0(void)

{
  FUN_1005e91b0();
  return;
}



/* Address: 0x1005e87cc | FUN_1005e87cc */

void FUN_1005e87cc(void)

{
  FUN_1005e9294();
  return;
}



/* Address: 0x1005e87d8 | FUN_1005e87d8 */

void FUN_1005e87d8(void)

{
  FUN_1005e9368();
  return;
}



/* Address: 0x1005e87e4 | FUN_1005e87e4 */

void FUN_1005e87e4(void)

{
  FUN_1005e87f0();
  return;
}



/* Address: 0x1005e87f0 | FUN_1005e87f0 */

void FUN_1005e87f0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  (*param_4)();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1005e885c | FUN_1005e885c */

void FUN_1005e885c(void)

{
  FUN_1005e8870();
  return;
}



/* Address: 0x1005e8870 | FUN_1005e8870 */

long * FUN_1005e8870(long *param_1,long *param_2,long param_3,code *param_4,code *param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = 0;
  (*param_4)(0,uVar8);
  uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      puVar5 = &DAT_100fd4f20;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      lVar6 = 0;
      (*param_5)(0,uVar8,puVar5,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar3,!bVar2);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005e896c | FUN_1005e896c */

void FUN_1005e896c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005e8980(param_1,param_2,FUN_1005e828c,PTR_typeMetadataAccessor_100eaee90);
  return;
}



/* Address: 0x1005e8980 | FUN_1005e8980 */

void FUN_1005e8980(undefined8 *param_1,long param_2,code *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0;
  (*param_3)(0,uVar5);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
    return;
  }
  puVar3 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  lVar4 = 0;
  (*param_4)(0,uVar5,puVar3,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001005e8a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
  return;
}



/* Address: 0x1005e8a1c | FUN_1005e8a1c */

void FUN_1005e8a1c(void)

{
  FUN_1005e8a30();
  return;
}



/* Address: 0x1005e8a30 | FUN_1005e8a30 */

undefined8 *
FUN_1005e8a30(undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4,code *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = 0;
  (*param_4)(0,uVar6);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    puVar4 = &DAT_100fd4f20;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    lVar5 = 0;
    (*param_5)(0,uVar6,puVar4,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar2,!bVar1);
  return param_1;
}


