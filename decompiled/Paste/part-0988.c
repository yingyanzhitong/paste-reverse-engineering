/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a92a04 | thunk_FUN_1002c1800 */

void thunk_FUN_1002c1800(void)

{
  thunk_FUN_1002c1800();
  return;
}



/* Address: 0x100a92a08 | thunk_FUN_1002dd9d4 */

void thunk_FUN_1002dd9d4(void)

{
  FUN_1002dd9d4();
  return;
}



/* Address: 0x100a92a0c | thunk_FUN_100671a4c */

void thunk_FUN_100671a4c(void)

{
  thunk_FUN_100671a4c();
  return;
}



/* Address: 0x100a92a10 | thunk_FUN_100a8fc78 */

void thunk_FUN_100a8fc78(void)

{
  thunk_FUN_100a8fc78();
  return;
}



/* Address: 0x100a92a14 | thunk_FUN_100a8fcd8 */

void thunk_FUN_100a8fcd8(void)

{
  thunk_FUN_100a8fcd8();
  return;
}



/* Address: 0x100a92a18 | thunk_FUN_100a8fd48 */

void thunk_FUN_100a8fd48(void)

{
  thunk_FUN_100a8fd48();
  return;
}



/* Address: 0x100a92a1c | thunk_FUN_1002dd93c */

void thunk_FUN_1002dd93c(void)

{
  thunk_FUN_1002dd93c();
  return;
}



/* Address: 0x100a92a20 | thunk_FUN_1002c17b8 */

void thunk_FUN_1002c17b8(void)

{
  thunk_FUN_1002c17b8();
  return;
}



/* Address: 0x100a92a24 | FUN_100a92a24 */

void FUN_100a92a24(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  Result RVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  puVar3 = &DAT_100ff69f8;
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x80) = CONCAT71(extraout_var,RVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,RVar2.value) + -8);
  *(long *)(unaff_x22 + 0x88) = lVar7;
  lVar7 = *(long *)(lVar7 + 0x40);
  *(long *)(unaff_x22 + 0x90) = lVar7;
  uVar5 = lVar7 + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  iVar1 = *param_2;
  plVar6 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a92b04;
                    /* WARNING: Could not recover jumptable at 0x000100a92b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar6,uVar5);
  return;
}



/* Address: 0x100a92b04 | FUN_100a92b04 */

void FUN_100a92b04(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a92b68;
  }
  else {
    pcVar1 = FUN_100a92fc8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a92b68 | FUN_100a92b68 */

void FUN_100a92b68(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  _swift_storeEnumTagMultiPayload(uVar10,uVar9,0);
  (**(code **)(lVar1 + 0x20))(uVar7,uVar10,uVar9);
  _swift_task_dealloc(uVar10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_10062f364(unaff_x22 + 0x28,FUN_100004520,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x80),
                PTR___type_metadata_for____100eae0c8 + 8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x30);
  *(undefined1 *)(unaff_x22 + 0x31) = uVar2;
  puVar3 = &DAT_100f2f110;
  _swift_allocObject(&DAT_100f2f110,0x29,7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar3;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  puVar3[0x28] = uVar2;
  _swift_retain(uVar7);
  FUN_100308524(uVar9,uVar2);
  puVar4 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(uVar5,1,1,TVar6.unknown);
  puVar4 = &DAT_100f2f138;
  _swift_allocObject(&DAT_100f2f138,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = &DAT_100c93238;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  _swift_retain_n(puVar3,2);
  uVar7 = 0;
  FUN_100a934ac(0,0,uVar5,&DAT_100c93248,puVar4);
  *(undefined8 *)(unaff_x22 + 200) = uVar7;
  _swift_task_dealloc(uVar5);
  plVar8 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar8;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a92d64;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x100a92d64 | FUN_100a92d64 */

void FUN_100a92d64(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a92dc8;
  }
  else {
    pcVar1 = FUN_100a92f3c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a92dc8 | FUN_100a92dc8 */

void FUN_100a92dc8(void)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  _swift_release_n(uVar7,2);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x38);
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x78),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar1 = *(long *)(unaff_x22 + 0x88);
    FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined1 *)(unaff_x22 + 0x31));
    (**(code **)(lVar1 + 8))(uVar5,uVar7);
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x31);
    uVar4 = *(long *)(unaff_x22 + 0x90) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    (**(code **)(lVar1 + 0x10))();
    FUN_100628180(uVar6,uVar7,unaff_x22 + 0x50);
    (**(code **)(lVar1 + 8))(uVar5,uVar7);
    FUN_1002ec258(uVar9,uVar2);
    if (lVar8 == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar7);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100a92efc;
    }
    _swift_task_dealloc(uVar4);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100a92efc:
                    /* WARNING: Could not recover jumptable at 0x000100a92f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100a92f3c | FUN_100a92f3c */

void FUN_100a92f3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar3 = *(long *)(unaff_x22 + 0x88);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  _swift_release_n(uVar1,2);
  FUN_1002ec258(uVar5,uVar4);
  (**(code **)(lVar3 + 8))(uVar6,uVar2);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000100a92fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a92fc8 | FUN_100a92fc8 */

void FUN_100a92fc8(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  TaskPriority TVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  *puVar1 = uVar9;
  _swift_storeEnumTagMultiPayload(puVar1,uVar8,1);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_10062f364(unaff_x22 + 0x28,FUN_100004520,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x80),
                PTR___type_metadata_for____100eae0c8 + 8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x30);
  *(undefined1 *)(unaff_x22 + 0x31) = uVar2;
  puVar3 = &DAT_100f2f110;
  _swift_allocObject(&DAT_100f2f110,0x29,7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar3;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  puVar3[0x28] = uVar2;
  _swift_retain(uVar8);
  FUN_100308524(uVar9,uVar2);
  puVar4 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(uVar5,1,1,TVar6.unknown);
  puVar4 = &DAT_100f2f138;
  _swift_allocObject(&DAT_100f2f138,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = &DAT_100c93238;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  _swift_retain_n(puVar3,2);
  uVar8 = 0;
  FUN_100a934ac(0,0,uVar5,&DAT_100c93248,puVar4);
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  _swift_task_dealloc(uVar5);
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a92d64;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x100a931b4 | FUN_100a931b4 */

void FUN_100a931b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_100a931d0,0,0);
  return;
}



/* Address: 0x100a931d0 | FUN_100a931d0 */

void FUN_100a931d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  TaskPriority TVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = 0x25000000;
  _swift_getFunctionTypeMetadata0(0x25000000,uVar1);
  FUN_1005cfcb0(unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x20),uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  puVar3 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar4,1,1,TVar5.unknown);
  puVar3 = &DAT_100f2f160;
  _swift_allocObject(&DAT_100f2f160,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x30) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  _swift_retain(uVar6);
  _swift_retain(uVar2);
  uVar6 = 0;
  FUN_100a936d0(0,0,uVar4,&DAT_100c93260,puVar3,uVar1);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  _swift_task_dealloc(uVar4);
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a93354;
  Swift::Task::get_value((Task)*(undefined **)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x100a93354 | FUN_100a93354 */

void FUN_100a93354(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a933b8;
  }
  else {
    pcVar1 = FUN_100a933fc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a933b8 | FUN_100a933b8 */

void FUN_100a933b8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a933f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a933fc | FUN_100a933fc */

void FUN_100a933fc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a9343c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a93440 | FUN_100a93440 */

void FUN_100a93440(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a934a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Address: 0x100a934ac | FUN_100a934ac */

void FUN_100a934ac(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100a93ce0(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100a93d30(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100a93d30(param_3);
    puVar2 = &DAT_100ff7e40;
    FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,puVar2,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    _swift_retain(param_5);
    puVar2 = &DAT_100ff7e40;
    FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar11 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,puVar2,param_4,param_5);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_100a93d30(param_3);
  }
  return;
}



/* Address: 0x100a936d0 | FUN_100a936d0 */

ulong FUN_100a936d0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                   undefined *param_5,undefined8 param_6)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_100ff7e38;
  local_70 = param_4;
  puStack_68 = param_5;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  puVar9 = auStack_a0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100a93ce0(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100a93d30(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100a93d30(param_3);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puVar8 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,param_6,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    FUN_100542748(&local_98,CVar7.unknown + 0x20,*(undefined8 *)(CVar7.unknown + 0x10),uVar10,
                  UVar6.unknown,lVar11,&local_70,param_6);
    _swift_release(CVar7.unknown);
    FUN_100a93d30(param_3);
    _swift_release(param_5);
    uVar10 = local_98;
  }
  return uVar10;
}



/* Address: 0x100a938bc | FUN_100a938bc */

void FUN_100a938bc(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a93938;
                    /* WARNING: Could not recover jumptable at 0x000100a93934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(param_4,param_5);
  return;
}



/* Address: 0x100a93938 | FUN_100a93938 */

void FUN_100a93938(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9399c;
  }
  else {
    pcVar1 = FUN_100a939b4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9399c | FUN_100a9399c */

void FUN_100a9399c(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100a939b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a939b4 | FUN_100a939b4 */

void FUN_100a939b4(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(puVar1 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100a939d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a939d4 | FUN_100a939d4 */

void FUN_100a939d4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a93a04 | FUN_100a93a04 */

void FUN_100a93a04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)&DAT_00000030;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_100a938bc(plVar4,param_1,uVar1,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x100a93a88 | FUN_100a93a88 */

void FUN_100a93a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a93af0;
                    /* WARNING: Could not recover jumptable at 0x000100a93aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a93af0 | FUN_100a93af0 */

void FUN_100a93af0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a93b54;
  }
  else {
    pcVar1 = FUN_1002f312c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a93b54 | FUN_100a93b54 */

void FUN_100a93b54(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x18);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100a93b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a93b74 | FUN_100a93b74 */

void FUN_100a93b74(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a93ba0 | FUN_100a93ba0 */

void FUN_100a93ba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100a93a88(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100a93c2c | FUN_100a93c2c */

void FUN_100a93c2c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a93c58 | FUN_100a93c58 */

void FUN_100a93c58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a93440(plVar5,param_1,uVar1,uVar3,uVar4,uVar6,uVar2);
  return;
}



/* Address: 0x100a93ce0 | FUN_100a93ce0 */

undefined8 FUN_100a93ce0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a93d30 | FUN_100a93d30 */

undefined8 FUN_100a93d30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a93d78 | FUN_100a93d78 */

void FUN_100a93d78(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  _swift_task_switch(FUN_100a93d90,0,0);
  return;
}



/* Address: 0x100a93d90 | FUN_100a93d90 */

void FUN_100a93d90(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long unaff_x22;
  code *pcVar13;
  long lVar14;
  long lVar15;
  String isolation;
  String SVar16;
  String function;
  
  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942d4);
    (*pcVar13)();
  }
  puVar4 = &DAT_100ff7ee8;
  FUN_1000f7830(&DAT_100ff7ee8,&DAT_100c93298);
  uVar9 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  puVar4 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  lVar15 = *(long *)(puVar4 + -8);
  pcVar13 = *(code **)(lVar15 + 0x38);
  (*pcVar13)(uVar5,1,1,puVar4);
  if (*(long *)(lVar14 + 0x10) < 1) {
    uVar8 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    uVar11 = uVar9 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100a94848(uVar5,uVar11);
    uVar7 = uVar11;
    (**(code **)(lVar15 + 0x30))(uVar11,1,puVar4);
    if ((int)uVar7 == 1) {
      FUN_100a94800(uVar11);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar8);
      iVar2 = 1;
    }
    else {
      (**(code **)(lVar15 + 0x20))(uVar8,uVar11,puVar4);
      _swift_task_dealloc(uVar11);
      puVar12 = (ulong *)(lVar14 + 0x18);
      uVar7 = *puVar12;
      lVar10 = *(long *)(uVar7 + 0x18);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942dc);
        (*pcVar13)();
      }
      bVar1 = *(byte *)(lVar15 + 0x50);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar11 = *puVar12;
      if ((*(long *)(uVar11 + 0x10) < lVar10 + 1) || ((uVar7 & 1) == 0)) {
        FUN_100aa1424();
        uVar11 = *puVar12;
      }
      FUN_100a948a0(uVar11 + 0x10,uVar11 + (bVar1 + 0x28 & (bVar1 ^ 0xffffffff)),uVar8);
      (**(code **)(lVar15 + 8))(uVar8,puVar4);
      _swift_task_dealloc(uVar8);
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0;
    *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + -1;
  }
  FUN_100a94800(uVar5);
  _swift_task_dealloc(uVar5);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942d8);
    (*pcVar13)();
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a94038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (iVar2 != 1) {
LAB_100a94040:
    SVar16.bridgeObject = (void *)0x2;
    SVar16.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar16,(StaticString)0x0,0xe000000000000000,0xdbad30);
    return;
  }
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1009eb14c;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar6;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008c4d50;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  uVar5 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  function.bridgeObject = (void *)0xea00000000002928;
  function.str = (char *)0x6e656b6f54746567;
  Swift::CheckedContinuation::init(continuation,function);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942e0);
    (*pcVar13)();
  }
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar15 + 0x10))();
  (*pcVar13)(uVar8,0,1,puVar4);
  if (*(long *)(lVar14 + 0x10) < 1) {
    uVar5 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar5);
    uVar9 = uVar9 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100a94848(uVar8,uVar9);
    uVar11 = uVar9;
    (**(code **)(lVar15 + 0x30))(uVar9,1,puVar4);
    if ((int)uVar11 == 1) {
      FUN_100a94800(uVar9);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar5);
      iVar2 = 1;
    }
    else {
      (**(code **)(lVar15 + 0x20))(uVar5,uVar9,puVar4);
      _swift_task_dealloc(uVar9);
      puVar12 = (ulong *)(lVar14 + 0x18);
      uVar9 = *puVar12;
      lVar10 = *(long *)(uVar9 + 0x18);
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942e8);
        (*pcVar13)();
      }
      bVar1 = *(byte *)(lVar15 + 0x50);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar11 = *puVar12;
      if ((*(long *)(uVar11 + 0x10) < lVar10 + 1) || ((uVar9 & 1) == 0)) {
        FUN_100aa1424();
        uVar11 = *puVar12;
      }
      FUN_100a948a0(uVar11 + 0x10,uVar11 + (bVar1 + 0x28 & (bVar1 ^ 0xffffffff)),uVar5);
      (**(code **)(lVar15 + 8))(uVar5,puVar4);
      _swift_task_dealloc(uVar5);
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0;
    *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + -1;
  }
  FUN_100a94800(uVar8);
  _swift_task_dealloc(uVar8);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a942e4);
    (*pcVar13)();
  }
  if (iVar2 == 0) {
    Swift::CheckedContinuation::resume(0,puVar4);
  }
  else if (iVar2 == 1) goto LAB_100a94040;
  (**(code **)(lVar15 + 8))(uVar7,puVar4);
  _swift_task_dealloc(uVar7);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a942e8 | FUN_100a942e8 */

void FUN_100a942e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  long local_70 [2];
  
  lVar13 = *(long *)(param_2 + 0x10);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar13 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a94508);
    (*pcVar2)();
  }
  puVar5 = &DAT_100ff7ee8;
  FUN_1000f7830(&DAT_100ff7ee8,&DAT_100c93298);
  uVar8 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)local_70 - uVar8;
  puVar5 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  lVar14 = *(long *)(puVar5 + -8);
  (**(code **)(lVar14 + 0x10))(lVar11,param_1,puVar5);
  (**(code **)(lVar14 + 0x38))(lVar11,0,1,puVar5);
  if (*(long *)(lVar13 + 0x10) < 1) {
    lVar12 = lVar11 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar9 = lVar12 - uVar8;
    FUN_100a94848(lVar11,lVar9);
    lVar6 = lVar9;
    (**(code **)(lVar14 + 0x30))(lVar9,1,puVar5);
    if ((int)lVar6 == 1) {
      FUN_100a94800(lVar9);
      iVar3 = 1;
    }
    else {
      local_70[0] = lVar11;
      (**(code **)(lVar14 + 0x20))(lVar12,lVar9,puVar5);
      puVar10 = (ulong *)(lVar13 + 0x18);
      uVar8 = *puVar10;
      lVar6 = *(long *)(uVar8 + 0x18);
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a94510);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(lVar14 + 0x50);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = *puVar10;
      if ((*(long *)(uVar7 + 0x10) < lVar6 + 1) || ((uVar8 & 1) == 0)) {
        FUN_100aa1424();
        uVar7 = *puVar10;
      }
      FUN_100a948a0(uVar7 + 0x10,uVar7 + (bVar1 + 0x28 & (bVar1 ^ 0xffffffff)),lVar12);
      (**(code **)(lVar14 + 8))(lVar12,puVar5);
      iVar3 = 2;
    }
  }
  else {
    iVar3 = 0;
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + -1;
  }
  FUN_100a94800(lVar11);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar13 + 0x20));
  if (iVar4 == 0) {
    if (iVar3 == 0) {
      Swift::CheckedContinuation::resume(0,puVar5);
    }
    else if (iVar3 != 2) {
      SVar15.bridgeObject = (void *)0x2;
      SVar15.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar15,(StaticString)0x0,0xe000000000000000,0xdbad30);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a94554);
      (*pcVar2)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a9450c);
  (*pcVar2)();
}



/* Address: 0x100a94554 | FUN_100a94554 */

void FUN_100a94554(void)

{
  long lVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  puVar5 = &DAT_100ff7ee8;
  FUN_1000f7830(&DAT_100ff7ee8,&DAT_100c93298);
  lVar12 = *(long *)(*(long *)(puVar5 + -8) + 0x40);
  uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_70 + -uVar9;
  lVar13 = *(long *)(unaff_x20 + 0x10);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar13 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a947c4);
    (*pcVar7)();
  }
  puVar5 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  lVar11 = *(long *)(puVar5 + -8);
  lVar8 = (long)puVar6 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - uVar9;
  uVar9 = *(ulong *)(lVar13 + 0x18);
  if (*(long *)(uVar9 + 0x18) < 1) {
    pcVar7 = *(code **)(lVar11 + 0x38);
    (*pcVar7)(lVar10,1,1,puVar5);
    FUN_100a94800(lVar10);
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    (*pcVar7)(puVar6,1,1,puVar5);
    puVar3 = puVar6;
  }
  else {
    bVar2 = *(byte *)(lVar11 + 0x50);
    local_68 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar9 & 1) == 0) {
      FUN_100a9f33c();
    }
    uVar9 = *(ulong *)(lVar13 + 0x18);
    pcVar7 = *(code **)(lVar11 + 0x20);
    (*pcVar7)(lVar10,uVar9 + (bVar2 + 0x28 & (bVar2 ^ 0xffffffff)) +
                     *(long *)(lVar11 + 0x48) * *(long *)(uVar9 + 0x20),puVar5);
    lVar1 = *(long *)(uVar9 + 0x20) + 1;
    if (SCARRY8(*(long *)(uVar9 + 0x20),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a947cc);
      (*pcVar7)();
    }
    if (*(long *)(uVar9 + 0x10) <= lVar1) {
      lVar1 = 0;
    }
    *(long *)(uVar9 + 0x20) = lVar1;
    if (SBORROW8(*(long *)(uVar9 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a947d0);
      (*pcVar7)();
    }
    *(long *)(uVar9 + 0x18) = *(long *)(uVar9 + 0x18) + -1;
    pcVar14 = *(code **)(lVar11 + 0x38);
    (*pcVar14)(lVar10,0,1,puVar5);
    (*pcVar7)(lVar8,lVar10,puVar5);
    (*pcVar7)(puVar6,lVar8,puVar5);
    (*pcVar14)(puVar6,0,1,puVar5);
    puVar3 = local_68;
  }
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar13 + 0x20));
  if (iVar4 == 0) {
    lVar13 = (long)puVar3 - (lVar12 + 0xfU & 0xfffffffffffffff0);
    FUN_100a94848(puVar6,lVar13);
    lVar12 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,puVar5);
    if ((int)lVar12 == 1) {
      FUN_100a94800(puVar6);
      FUN_100a94800(lVar13);
    }
    else {
      Swift::CheckedContinuation::resume();
      FUN_100a94800(puVar6);
      (**(code **)(lVar11 + 8))(lVar13,puVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100a947c8);
  (*pcVar7)();
}



/* Address: 0x100a947d0 | FUN_100a947d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a947d0(void)

{
  return ZEXT816(0x100ff7e88);
}



/* Address: 0x100a947f0 | FUN_100a947f0 */

undefined1  [16] FUN_100a947f0(void)

{
  return ZEXT816(0x100f2f1e0);
}



/* Address: 0x100a94800 | FUN_100a94800 */

undefined8 FUN_100a94800(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff7ee8;
  FUN_1000f7830(&DAT_100ff7ee8,&DAT_100c93298);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a94848 | FUN_100a94848 */

undefined8 FUN_100a94848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff7ee8;
  FUN_1000f7830(&DAT_100ff7ee8,&DAT_100c93298);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a94898 | FUN_100a94898 */

void FUN_100a94898(void)

{
  FUN_100a942e8();
  return;
}



/* Address: 0x100a948a0 | FUN_100a948a0 */

void FUN_100a948a0(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2] + lVar4;
  if (SCARRY8(param_1[2],lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a94958);
    (*pcVar1)();
  }
  if (lVar4 < 0) {
    if (lVar5 < 0) {
      bVar2 = SCARRY8(lVar5,*param_1);
      lVar5 = lVar5 + *param_1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a94960);
        (*pcVar1)();
      }
    }
  }
  else {
    lVar4 = *param_1;
    bVar2 = SBORROW8(lVar5,lVar4);
    if ((lVar4 <= lVar5) && (lVar5 = lVar5 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a948ec);
      (*pcVar1)();
    }
  }
  puVar3 = &DAT_100ff7ef0;
  FUN_1000f7830(&DAT_100ff7ef0,&DAT_100c932a0);
  (**(code **)(*(long *)(puVar3 + -8) + 0x10))
            (param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar5,param_3,puVar3);
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a9495c);
  (*pcVar1)();
}



/* Address: 0x100a94960 | FUN_100a94960 */

void FUN_100a94960(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a949cc;
                    /* WARNING: Could not recover jumptable at 0x000100a949c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a949cc | FUN_100a949cc */

void FUN_100a949cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a94a30;
  }
  else {
    pcVar1 = FUN_100a94be8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a94a30 | FUN_100a94a30 */

void FUN_100a94a30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  TaskPriority TVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined1 auVar8 [16];
  
  auVar8 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x10),
                    *(undefined1 (*) [16])(unaff_x22 + 0x10),8,1);
  *(long *)(unaff_x22 + 0x78) = auVar8._8_8_;
  *(long *)(unaff_x22 + 0x70) = auVar8._0_8_;
  *(undefined4 *)(unaff_x22 + 0x68) = *(undefined4 *)(unaff_x22 + 0x20);
  *(undefined2 *)(unaff_x22 + 0x6c) = *(undefined2 *)(unaff_x22 + 0x24);
  *(undefined1 *)(unaff_x22 + 0x6e) = *(undefined1 *)(unaff_x22 + 0x26);
  *(undefined1 *)(unaff_x22 + 0x31) = 0;
  puVar1 = &DAT_100f2f6b0;
  _swift_allocObject(&DAT_100f2f6b0,0x29,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  puVar1[0x28] = 0;
  _swift_retain(uVar2);
  FUN_100308524();
  puVar3 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar4,1,1,TVar5.unknown);
  puVar3 = &DAT_100f2f6d8;
  _swift_allocObject(&DAT_100f2f6d8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934e8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar6 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934f0,puVar3);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  _swift_task_dealloc(uVar4);
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a94da4;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a94be8 | FUN_100a94be8 */

void FUN_100a94be8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  TaskPriority TVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_errorRetain(uVar7);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined1 *)(unaff_x22 + 0x6e) = 0;
  *(undefined2 *)(unaff_x22 + 0x6c) = 0;
  *(undefined4 *)(unaff_x22 + 0x68) = 0;
  *(undefined1 *)(unaff_x22 + 0x31) = 1;
  puVar1 = &DAT_100f2f6b0;
  _swift_allocObject(&DAT_100f2f6b0,0x29,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  puVar1[0x28] = 1;
  _swift_retain(uVar2);
  FUN_100308524(uVar7,1);
  puVar3 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar4,1,1,TVar5.unknown);
  puVar3 = &DAT_100f2f6d8;
  _swift_allocObject(&DAT_100f2f6d8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934e8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934f0,puVar3);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  _swift_task_dealloc(uVar4);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar6;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a94da4;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a94da4 | FUN_100a94da4 */

void FUN_100a94da4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a94e08;
  }
  else {
    pcVar1 = FUN_100a95014;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a94e08 | FUN_100a94e08 */

void FUN_100a94e08(void)

{
  undefined8 uVar1;
  uint7 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_release_n(uVar6,2);
  if (*(char *)(unaff_x22 + 0x30) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x28);
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(uint7 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0xa0),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar1,uVar4);
      FUN_10090ef88(uVar6,uVar7,(ulong)uVar2,uVar4);
      goto LAB_100a94ff4;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
    FUN_10090ef88(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x70),
                  (ulong)*(uint7 *)(unaff_x22 + 0x68),uVar4);
  }
  else {
    if (*(long *)(unaff_x22 + 0x60) == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar2 = *(uint7 *)(unaff_x22 + 0x68);
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x80),*(undefined1 *)(unaff_x22 + 0x31));
                    /* WARNING: Could not recover jumptable at 0x000100a94fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x70),(ulong)uVar2);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(uint7 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
      _swift_errorRetain(uVar6);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x40,uVar5,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar7,uVar4);
      FUN_10090ef88(uVar1,uVar8,(ulong)uVar2,1);
      goto LAB_100a94ff4;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
  }
  FUN_1002ec258(uVar6,uVar4);
LAB_100a94ff4:
                    /* WARNING: Could not recover jumptable at 0x000100a95010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a95014 | FUN_100a95014 */

void FUN_100a95014(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint7 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(uint7 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_release_n(uVar1,2);
  FUN_1002ec258(uVar3,uVar4);
  FUN_10090ef88(uVar2,uVar6,(ulong)uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a950a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a950ac | FUN_100a950ac */

void FUN_100a950ac(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a95118;
  (*(code *)((long)iVar1 + (long)param_1))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a95118 | FUN_100a95118 */

void FUN_100a95118(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9517c;
  }
  else {
    pcVar1 = FUN_100a95314;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9517c | FUN_100a9517c */

void FUN_100a9517c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  TaskPriority TVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(unaff_x22 + 0x19) = 0;
  puVar1 = &DAT_100f2f660;
  _swift_allocObject(&DAT_100f2f660,0x29,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  puVar1[0x28] = 0;
  _swift_retain(uVar2);
  FUN_100308524();
  puVar3 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar4,1,1,TVar5.unknown);
  puVar3 = &DAT_100f2f688;
  _swift_allocObject(&DAT_100f2f688,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934d8,puVar3);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  _swift_task_dealloc(uVar4);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a954c0;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a95314 | FUN_100a95314 */

void FUN_100a95314(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  TaskPriority TVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_errorRetain(uVar7);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  *(undefined1 *)(unaff_x22 + 0x19) = 1;
  puVar1 = &DAT_100f2f660;
  _swift_allocObject(&DAT_100f2f660,0x29,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  puVar1[0x28] = 1;
  _swift_retain(uVar2);
  FUN_100308524(uVar7,1);
  puVar3 = &DAT_100ff7e38;
  FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar4,1,1,TVar5.unknown);
  puVar3 = &DAT_100f2f688;
  _swift_allocObject(&DAT_100f2f688,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934d8,puVar3);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  _swift_task_dealloc(uVar4);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a954c0;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a954c0 | FUN_100a954c0 */

void FUN_100a954c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a95524;
  }
  else {
    pcVar1 = FUN_100a956a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a95524 | FUN_100a95524 */

void FUN_100a95524(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release_n(uVar6,2);
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x20);
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x60),uVar4);
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x88),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar6,uVar4);
    }
  }
  else {
    if (*(long *)(unaff_x22 + 0x58) == 0) {
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x68),*(undefined1 *)(unaff_x22 + 0x19));
                    /* WARNING: Could not recover jumptable at 0x000100a9567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
      _swift_errorRetain(uVar6);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,uVar5,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar1,uVar4);
      uVar4 = 1;
    }
  }
  FUN_1002ec258(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a956a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a956a8 | FUN_100a956a8 */

void FUN_100a956a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release_n(uVar1,2);
  FUN_1002ec258(uVar3,uVar4);
  FUN_1002ec258(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a95714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a95718 | FUN_100a95718 */

void FUN_100a95718(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a95784;
                    /* WARNING: Could not recover jumptable at 0x000100a95780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a95784 | FUN_100a95784 */

void FUN_100a95784(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a957e8;
  }
  else {
    pcVar1 = FUN_100a95980;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}


