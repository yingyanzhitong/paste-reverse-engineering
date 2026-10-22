/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a957e8 | FUN_100a957e8 */

void FUN_100a957e8(void)

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
  puVar1 = &DAT_100f2f368;
  _swift_allocObject(&DAT_100f2f368,0x29,7);
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
  puVar3 = &DAT_100f2f390;
  _swift_allocObject(&DAT_100f2f390,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c933d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c933d8,puVar3);
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
  plVar6[1] = (long)FUN_100a95b2c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a95980 | FUN_100a95980 */

void FUN_100a95980(void)

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
  puVar1 = &DAT_100f2f368;
  _swift_allocObject(&DAT_100f2f368,0x29,7);
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
  puVar3 = &DAT_100f2f390;
  _swift_allocObject(&DAT_100f2f390,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c933d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c933d8,puVar3);
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
  plVar6[1] = (long)FUN_100a95b2c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a95b2c | FUN_100a95b2c */

void FUN_100a95b2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a95b90;
  }
  else {
    pcVar1 = FUN_100a95d1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a95b90 | FUN_100a95b90 */

void FUN_100a95b90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release_n(uVar6,2);
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x20);
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x88),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar1,uVar4);
      FUN_100908090(uVar6,uVar4);
      goto LAB_100a95d00;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
    FUN_100908090(*(undefined8 *)(unaff_x22 + 0x60),uVar4);
  }
  else {
    if (*(long *)(unaff_x22 + 0x58) == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x68),*(undefined1 *)(unaff_x22 + 0x19));
                    /* WARNING: Could not recover jumptable at 0x000100a95cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar6);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar3 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
      _swift_errorRetain(uVar6);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,uVar5,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar2,uVar4);
      FUN_100908090(uVar1,1);
      goto LAB_100a95d00;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x19);
  }
  FUN_1002ec258(uVar6,uVar4);
LAB_100a95d00:
                    /* WARNING: Could not recover jumptable at 0x000100a95d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a95d1c | FUN_100a95d1c */

void FUN_100a95d1c(void)

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
  FUN_100908090(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a95d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a95d8c | FUN_100a95d8c */

void FUN_100a95d8c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  plVar2[1] = (long)FUN_100a95df8;
                    /* WARNING: Could not recover jumptable at 0x000100a95df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a95df8 | FUN_100a95df8 */

void FUN_100a95df8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a95e5c;
  }
  else {
    pcVar1 = FUN_100a95ff8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a95e5c | FUN_100a95e5c */

void FUN_100a95e5c(void)

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
  *(long *)(unaff_x22 + 0x70) = auVar8._8_8_;
  *(long *)(unaff_x22 + 0x68) = auVar8._0_8_;
  *(undefined1 *)(unaff_x22 + 0x21) = 0;
  puVar1 = &DAT_100f2f4f8;
  _swift_allocObject(&DAT_100f2f4f8,0x29,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
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
  puVar3 = &DAT_100f2f520;
  _swift_allocObject(&DAT_100f2f520,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c93468;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar6 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c93470,puVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  _swift_task_dealloc(uVar4);
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a961a8;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a95ff8 | FUN_100a95ff8 */

void FUN_100a95ff8(void)

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
  *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined1 *)(unaff_x22 + 0x21) = 1;
  puVar1 = &DAT_100f2f4f8;
  _swift_allocObject(&DAT_100f2f4f8,0x29,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
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
  puVar3 = &DAT_100f2f520;
  _swift_allocObject(&DAT_100f2f520,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c93468;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c93470,puVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  _swift_task_dealloc(uVar4);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a961a8;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a961a8 | FUN_100a961a8 */

void FUN_100a961a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a9620c;
  }
  else {
    pcVar1 = FUN_100a963b0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9620c | FUN_100a9620c */

void FUN_100a9620c(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release_n(uVar5,2);
  if (*(char *)(unaff_x22 + 0x30) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x28);
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x21);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x98),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar1,uVar3);
      FUN_10081c820(uVar5,uVar6,uVar3);
      goto LAB_100a96394;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x21);
    FUN_10081c820(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),uVar3);
  }
  else {
    if (*(long *)(unaff_x22 + 0x60) == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x78),*(undefined1 *)(unaff_x22 + 0x21));
                    /* WARNING: Could not recover jumptable at 0x000100a96384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x68));
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x21);
      _swift_errorRetain(uVar5);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x40,uVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar6,uVar3);
      FUN_10081c820(uVar1,uVar7,1);
      goto LAB_100a96394;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x21);
  }
  FUN_1002ec258(uVar5,uVar3);
LAB_100a96394:
                    /* WARNING: Could not recover jumptable at 0x000100a963ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a963b0 | FUN_100a963b0 */

void FUN_100a963b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x21);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release_n(uVar1,2);
  FUN_1002ec258(uVar3,uVar4);
  FUN_10081c820(uVar2,uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a9642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a96430 | FUN_100a96430 */

void FUN_100a96430(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  plVar2[1] = (long)FUN_100a9649c;
                    /* WARNING: Could not recover jumptable at 0x000100a96498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a9649c | FUN_100a9649c */

void FUN_100a9649c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a96500;
  }
  else {
    pcVar1 = FUN_100a9669c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a96500 | FUN_100a96500 */

void FUN_100a96500(void)

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
  *(long *)(unaff_x22 + 0x70) = auVar8._8_8_;
  *(long *)(unaff_x22 + 0x68) = auVar8._0_8_;
  *(undefined1 *)(unaff_x22 + 0x21) = 0;
  puVar1 = &DAT_100f2f5e8;
  _swift_allocObject(&DAT_100f2f5e8,0x29,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
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
  puVar3 = &DAT_100f2f610;
  _swift_allocObject(&DAT_100f2f610,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934b8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar6 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934c0,puVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  _swift_task_dealloc(uVar4);
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a9684c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a9669c | FUN_100a9669c */

void FUN_100a9669c(void)

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
  *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined1 *)(unaff_x22 + 0x21) = 1;
  puVar1 = &DAT_100f2f5e8;
  _swift_allocObject(&DAT_100f2f5e8,0x29,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
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
  puVar3 = &DAT_100f2f610;
  _swift_allocObject(&DAT_100f2f610,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c934b8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c934c0,puVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  _swift_task_dealloc(uVar4);
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  FUN_1000f7830(&DAT_100ff7e40,&DAT_100c933e0);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a9684c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100a9684c | FUN_100a9684c */

void FUN_100a9684c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a968b0;
  }
  else {
    pcVar1 = FUN_100a96a58;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a968b0 | FUN_100a968b0 */

void FUN_100a968b0(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release_n(uVar5,2);
  if (*(char *)(unaff_x22 + 0x30) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x28);
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x21);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x98),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar4,uVar2);
      FUN_100aa2de4(uVar5,uVar6,uVar2);
      goto LAB_100a96a3c;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x21);
    FUN_100aa2de4(*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),uVar2);
  }
  else {
    if (*(long *)(unaff_x22 + 0x60) == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x78),*(undefined1 *)(unaff_x22 + 0x21));
                    /* WARNING: Could not recover jumptable at 0x000100a96a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar5,uVar4);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x21);
      _swift_errorRetain(uVar5);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x40,uVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar6,uVar2);
      FUN_100aa2de4(uVar4,uVar7,1);
      goto LAB_100a96a3c;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x21);
  }
  FUN_1002ec258(uVar5,uVar2);
LAB_100a96a3c:
                    /* WARNING: Could not recover jumptable at 0x000100a96a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a96a58 | FUN_100a96a58 */

void FUN_100a96a58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x21);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release_n(uVar1,2);
  FUN_1002ec258(uVar3,uVar4);
  FUN_100aa2de4(uVar2,uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a96ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a96ad8 | FUN_100a96ad8 */

void FUN_100a96ad8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a96b40;
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a96b40 | FUN_100a96b40 */

void FUN_100a96b40(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a96ba4;
  }
  else {
    pcVar1 = FUN_100a96d3c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a96ba4 | FUN_100a96ba4 */

void FUN_100a96ba4(void)

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
  puVar1 = &DAT_100f2f3e0;
  _swift_allocObject(&DAT_100f2f3e0,0x29,7);
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
  puVar3 = &DAT_100f2f408;
  _swift_allocObject(&DAT_100f2f408,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c933f0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c933f8,puVar3);
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
  plVar6[1] = (long)FUN_100a96ee8;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a96d3c | FUN_100a96d3c */

void FUN_100a96d3c(void)

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
  puVar1 = &DAT_100f2f3e0;
  _swift_allocObject(&DAT_100f2f3e0,0x29,7);
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
  puVar3 = &DAT_100f2f408;
  _swift_allocObject(&DAT_100f2f408,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_100c933f0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain_n(puVar1,2);
  uVar2 = 0;
  FUN_100a934ac(0,0,uVar4,&DAT_100c933f8,puVar3);
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
  plVar6[1] = (long)FUN_100a96ee8;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x100a96ee8 | FUN_100a96ee8 */

void FUN_100a96ee8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a96f4c;
  }
  else {
    pcVar1 = FUN_100a956a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a96f4c | FUN_100a96f4c */

void FUN_100a96f4c(void)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_release_n(uVar5,2);
  if (*(char *)(unaff_x22 + 0x28) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x20);
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) == 0) {
      puVar3 = (undefined8 *)(unaff_x22 + 0x68);
      puVar7 = (undefined8 *)(unaff_x22 + 0x60);
    }
    else {
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x88),
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      puVar7 = (undefined8 *)(unaff_x22 + 0x68);
      puVar3 = (undefined8 *)(unaff_x22 + 0x60);
    }
    uVar5 = *puVar3;
    uVar2 = *(undefined1 *)(unaff_x22 + 0x19);
    FUN_1002ec258(*puVar7,uVar2);
  }
  else {
    if (*(long *)(unaff_x22 + 0x58) == 0) {
      FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x68),*(undefined1 *)(unaff_x22 + 0x19));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100a9709c;
    }
    puVar7 = (undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *puVar7;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) == 0) {
      puVar7 = (undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x19);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x19);
      _swift_errorRetain(uVar5);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x38,uVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1002ec258(uVar6,uVar2);
      uVar2 = 1;
    }
    uVar5 = *puVar7;
  }
  FUN_1002ec258(uVar5,uVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100a9709c:
                    /* WARNING: Could not recover jumptable at 0x000100a970b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100a970b4 | FUN_100a970b4 */

void FUN_100a970b4(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa2) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined2 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_100a970d8,0,0);
  return;
}



/* Address: 0x100a970d8 | FUN_100a970d8 */

void FUN_100a970d8(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xa2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined2 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar3 = &DAT_100f2f340;
  _swift_allocObject(&DAT_100f2f340,0x2a,7);
  *(undefined **)(unaff_x22 + 0x68) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar3[0x18] = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x28] = (byte)uVar2 & 1;
  puVar3[0x29] = (byte)((ushort)uVar2 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  puVar4 = &DAT_100ff6db8;
  FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a971c4;
  FUN_100912dec(unaff_x22 + 0x40,FUN_100aa2874,puVar3,puVar4);
  return;
}



/* Address: 0x100a971c4 | FUN_100a971c4 */

void FUN_100a971c4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x70));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a97230;
  }
  else {
    pcVar2 = FUN_100a4b66c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a97230 | FUN_100a97230 */

void FUN_100a97230(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  _swift_retain(uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 **)(unaff_x22 + 0x30) = (undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a972d4;
  FUN_100a95718(&UNK_100c933b0,unaff_x22 + 0x10,&UNK_100c933c0,uVar2);
  return;
}



/* Address: 0x100a972d4 | FUN_100a972d4 */

void FUN_100a972d4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x98) = param_1;
    pcVar2 = FUN_100a97350;
  }
  else {
    pcVar2 = FUN_100a4b6c0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a97350 | FUN_100a97350 */

void FUN_100a97350(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100a9738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x100a97390 | FUN_100a97390 */

void FUN_100a97390(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xaa) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined2 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_100a973b4,0,0);
  return;
}



/* Address: 0x100a973b4 | FUN_100a973b4 */

void FUN_100a973b4(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xaa);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined2 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar3 = &DAT_100f2f4d0;
  _swift_allocObject(&DAT_100f2f4d0,0x2a,7);
  *(undefined **)(unaff_x22 + 0x68) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar3[0x18] = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x28] = (byte)uVar2 & 1;
  puVar3[0x29] = (byte)((ushort)uVar2 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  puVar4 = &DAT_100ff6db8;
  FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a974a0;
  FUN_100912dec(unaff_x22 + 0x40,FUN_100aa2e6c,puVar3,puVar4);
  return;
}



/* Address: 0x100a974a0 | FUN_100a974a0 */

void FUN_100a974a0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x70));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a9750c;
  }
  else {
    pcVar2 = thunk_FUN_100a4b66c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a9750c | FUN_100a9750c */

void FUN_100a9750c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  _swift_retain(uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 **)(unaff_x22 + 0x30) = (undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a975b0;
  FUN_100a95d8c(&UNK_100c93448,unaff_x22 + 0x10,&UNK_100c93458,uVar2);
  return;
}



/* Address: 0x100a975b0 | FUN_100a975b0 */

void FUN_100a975b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x98) = param_2;
    *(undefined8 *)(lVar3 + 0xa0) = param_1;
    pcVar2 = thunk_FUN_100a978e0;
  }
  else {
    pcVar2 = thunk_FUN_100a4b6c0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a97638 | FUN_100a97638 */

void FUN_100a97638(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xaa) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined2 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_100a9765c,0,0);
  return;
}



/* Address: 0x100a9765c | FUN_100a9765c */

void FUN_100a9765c(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xaa);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined2 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar3 = &DAT_100f2f5c0;
  _swift_allocObject(&DAT_100f2f5c0,0x2a,7);
  *(undefined **)(unaff_x22 + 0x68) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar3[0x18] = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x28] = (byte)uVar2 & 1;
  puVar3[0x29] = (byte)((ushort)uVar2 >> 8) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  puVar4 = &DAT_100ff6db8;
  FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a97748;
  FUN_100912dec(unaff_x22 + 0x40,FUN_100aa2e6c,puVar3,puVar4);
  return;
}



/* Address: 0x100a97748 | FUN_100a97748 */

void FUN_100a97748(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x70));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a977b4;
  }
  else {
    pcVar2 = FUN_100a4b66c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a977b4 | FUN_100a977b4 */

void FUN_100a977b4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  _swift_retain(uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 **)(unaff_x22 + 0x30) = (undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a97858;
  FUN_100a96430(&UNK_100c93498,unaff_x22 + 0x10,&UNK_100c934a8,uVar2);
  return;
}



/* Address: 0x100a97858 | FUN_100a97858 */

void FUN_100a97858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x98) = param_2;
    *(undefined8 *)(lVar3 + 0xa0) = param_1;
    pcVar2 = FUN_100a978e0;
  }
  else {
    pcVar2 = FUN_100a4b6c0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a978e0 | FUN_100a978e0 */

void FUN_100a978e0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100a9791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x100a97920 | FUN_100a97920 */

/* WARNING: Removing unreachable block (ram,0x000100a979a0) */

void FUN_100a97920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x412) = param_9;
  *(undefined8 *)(unaff_x22 + 0x328) = param_8;
  *(undefined8 *)(unaff_x22 + 800) = param_7;
  *(undefined8 *)(unaff_x22 + 0x318) = param_6;
  *(undefined8 *)(unaff_x22 + 0x310) = param_5;
  *(undefined8 *)(unaff_x22 + 0x308) = param_4;
  *(undefined8 *)(unaff_x22 + 0x300) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2f8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2f0) = param_1;
  _swift_task_switch(FUN_100a979a4,0,0);
  return;
}



/* Address: 0x100a979a4 | FUN_100a979a4 */

void FUN_100a979a4(void)

{
  pthread_mutexattr_t *ppVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ea82f0;
  ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x2c8);
  puVar6 = &DAT_100ff7ef8;
  FUN_1000f7830(&DAT_100ff7ef8,&DAT_100c932b8);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined4 *)(puVar6 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x30) = 0;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
  ppVar1->__sig = 0;
  _pthread_mutexattr_init(ppVar1);
  iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar6 + 0x38),ppVar1);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a97d5c);
    (*pcVar3)();
  }
  lVar15 = *(long *)(unaff_x22 + 0x2f0);
  puVar7 = &DAT_100ff7f00;
  FUN_1000f7830(&DAT_100ff7f00,&DAT_100c932c0);
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x330) = puVar7;
  *(undefined **)(puVar7 + 0x10) = puVar6;
  puVar8 = &DAT_100ff7f08;
  FUN_1000f7830(&DAT_100ff7f08,&DAT_100c932c8);
  lVar11 = 0x19;
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x338) = puVar8;
  *(undefined **)(puVar8 + 0x10) = puVar6;
  puVar8[0x18] = 0;
  _swift_retain(puVar6);
  _swift_bridgeObjectRetain();
  FUN_1005ad054();
  lVar9 = lVar15;
  FUN_1005ac824();
  _swift_bridgeObjectRelease(lVar15);
  if (lVar11 != lVar9) {
    uVar2 = *(undefined1 *)(unaff_x22 + 0x412);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar13 = *(undefined8 *)(unaff_x22 + 800);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar17 = *(undefined8 *)(puVar8 + 0x10);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar14);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x310);
    FUN_100a9f9fc(uVar16,4,uVar14,uVar17);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(uVar14);
    puVar6 = &DAT_100f2f208;
    _swift_allocObject(&DAT_100f2f208,0x18,7);
    *(undefined **)(unaff_x22 + 0x340) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined **)(unaff_x22 + 0x120) = puVar6;
    *(undefined **)(unaff_x22 + 0x128) = puVar8;
    *(undefined **)(unaff_x22 + 0x130) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
    *(undefined1 *)(unaff_x22 + 0x140) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar19;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) == 0) {
      lVar9 = unaff_x22 + 0x10;
      lVar15 = *(long *)(unaff_x22 + 0x300);
      _swift_taskGroup_initialize(lVar9,PTR___type_metadata_for____100eae0c8 + 8);
      *(long *)(unaff_x22 + 0x2d8) = lVar9;
      FUN_1005ebbb4(puVar7,&DAT_100f2d7d8,&DAT_100f2f2a0,&DAT_100f2f280,&PTR_PTR_100f2f2c8,
                    &PTR_PTR_100f2f2b0);
      *(undefined **)(unaff_x22 + 0x350) = puVar7;
      _swift_beginAccess(puVar6 + 0x10,unaff_x22 + 0x268,1,0);
      if (lVar15 < 0) {
        *(undefined8 *)(unaff_x22 + 0x360) = 0;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
          _swift_taskGroup_wait_next_throwing
                    (unaff_x22 + 0x410,lVar9,FUN_100a97e14,unaff_x22 + 0x1b0);
          return;
        }
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x358) = 0;
        *(undefined8 *)(unaff_x22 + 0x368) = 0;
        uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x350) + 0x10);
        pcVar3 = thunk_FUN_100aa233c;
        _swift_task_addCancellationHandler(thunk_FUN_100aa233c,uVar13);
        *(code **)(unaff_x22 + 0x370) = pcVar3;
        plVar10 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x378) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_100a97ebc;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
          FUN_100a697f8(uVar13);
          return;
        }
      }
    }
    else {
      plVar10 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x348) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a97d64;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar12) {
        Swift::_withThrowingTaskGroup();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a97d60);
  (*pcVar3)();
}



/* Address: 0x100a97d64 | FUN_100a97d64 */

void FUN_100a97d64(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x348));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a97e10;
    pcVar1 = FUN_100a9a600;
  }
  else {
    *(long *)(lVar3 + 0x408) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a97e10:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a9a688;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a97e14 | FUN_100a97e14 */

void FUN_100a97e14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x360);
    *(undefined8 *)(unaff_x22 + 0x3c0) = 0;
    *(undefined1 *)(unaff_x22 + 0x414) = *(undefined1 *)(unaff_x22 + 0x410);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a97eb8;
    pcVar1 = FUN_100a98ee4;
  }
  else {
    *(long *)(unaff_x22 + 0x3b8) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a97eb8:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a98e00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a97ebc | FUN_100a97ebc */

void FUN_100a97ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long **)(lVar3 + 0x1d8) = unaff_x22;
  *(undefined8 *)(lVar3 + 0x1e0) = param_1;
  *(undefined8 *)(lVar3 + 0x1e8) = param_2;
  *(undefined8 *)(lVar3 + 0x1f0) = param_3;
  *(long *)(lVar3 + 0x1f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x378));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x380) = param_1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a97f80;
    pcVar1 = FUN_100a97f84;
  }
  else {
    _swift_errorRelease();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a97f80:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a98660;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a97f84 | FUN_100a97f84 */

/* WARNING: Removing unreachable block (ram,0x000100a97fe8) */

void FUN_100a97f84(void)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined7 uVar6;
  code *pcVar7;
  __uint8 _Var8;
  bool bVar9;
  int iVar10;
  undefined4 extraout_var;
  ulong uVar11;
  TaskPriority TVar12;
  ulong uVar13;
  long *plVar14;
  ThrowingTaskGroup TVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  TaskPriority TVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long unaff_x22;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar26 = *(long *)(unaff_x22 + 0x380);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x370));
  if (lVar26 == 0) {
    lVar26 = *(long *)(unaff_x22 + 0x368) + -1;
    if (SBORROW8(*(long *)(unaff_x22 + 0x368),1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a9864c);
      (*pcVar7)();
    }
    *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar26;
    if (lVar26 == 0) {
      lVar26 = *(long *)(*(long *)(unaff_x22 + 0x338) + 0x10);
      iVar10 = _pthread_mutex_lock((pthread_mutex_t *)(lVar26 + 0x38));
      puVar23 = (undefined8 *)CONCAT44(extraout_var,iVar10);
      if (iVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a98654);
        (*pcVar7)();
      }
      uVar18 = (uint)*(byte *)(lVar26 + 0x22);
      if (*(byte *)(lVar26 + 0x22) < 3) {
        bVar2 = *(byte *)(lVar26 + 0x10);
        if (uVar18 == 0) {
          FUN_1006883ac();
          uVar28 = *(undefined8 *)(lVar26 + 0x10);
          uVar20 = *(undefined8 *)(lVar26 + 0x18);
          *(undefined8 *)(lVar26 + 0x10) = *puVar23;
          *(ulong *)(lVar26 + 0x18) = (ulong)bVar2 & 1 | 0x100;
          uVar5 = *(undefined2 *)(lVar26 + 0x20);
          *(undefined2 *)(lVar26 + 0x20) = 0;
          uVar4 = *(undefined1 *)(lVar26 + 0x22);
          *(undefined1 *)(lVar26 + 0x22) = 2;
          _swift_retain();
          FUN_100aa2428(uVar28,uVar20,uVar5,uVar4);
          goto LAB_100a98500;
        }
        uVar6 = *(undefined7 *)(lVar26 + 0x11);
        if (uVar18 != 1) {
          _swift_retain(*(undefined8 *)(lVar26 + 0x10));
          _swift_release(CONCAT71(uVar6,bVar2));
          goto LAB_100a98500;
        }
        lVar32 = *(long *)(lVar26 + 0x18);
        bVar3 = *(byte *)(lVar26 + 0x21);
        lVar30 = CONCAT71(uVar6,bVar2);
        if (lVar32 == 0) {
          bVar9 = false;
          *(long *)(lVar26 + 0x10) = lVar30;
          *(byte *)(lVar26 + 0x18) = bVar3 & 1;
          *(undefined1 *)(lVar26 + 0x19) = 1;
          *(undefined1 *)(lVar26 + 0x22) = 2;
        }
        else {
          lVar29 = *(long *)(lVar30 + 0x18);
          _swift_retain(*(undefined8 *)(lVar26 + 0x10));
          _swift_release(lVar30);
          if (lVar29 != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100a9865c);
            (*pcVar7)();
          }
          FUN_100aa2428(*(undefined8 *)(lVar26 + 0x10),*(undefined8 *)(lVar26 + 0x18),
                        *(undefined2 *)(lVar26 + 0x20),*(undefined1 *)(lVar26 + 0x22));
          *(ulong *)(lVar26 + 0x10) = (ulong)bVar3 & 1;
          *(undefined8 *)(lVar26 + 0x18) = 0;
          *(undefined4 *)(lVar26 + 0x20) = 0x1040000;
          bVar9 = true;
        }
      }
      else {
        if (1 < uVar18 - 3) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a984a8);
          (*pcVar7)();
        }
LAB_100a98500:
        lVar32 = 0;
        bVar9 = false;
      }
      iVar10 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar26 + 0x38));
      if (iVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a98658);
        (*pcVar7)();
      }
      if (lVar32 != 0) {
        if (bVar9) {
          puVar23 = *(undefined8 **)(*(long *)(lVar32 + 0x40) + 0x28);
          puVar23[1] = 0;
          puVar23[2] = 0;
          *puVar23 = 1;
          _swift_continuation_throwingResume(lVar32);
        }
        else {
          puVar16 = PTR___type_metadata_for_Swift_Never_100eadc38;
          _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                            PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                            ,0,0);
          puVar17 = &DAT_100ff69f8;
          FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
          puVar23 = (undefined8 *)
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
          _swift_allocError();
          *puVar23 = puVar16;
          _swift_continuation_throwingResumeWithError(lVar32,puVar17);
        }
      }
      lVar26 = 0;
    }
  }
  else {
    TVar15.unknown = (undefined *)(unaff_x22 + 0x10);
    if (lVar26 == 1) {
      (extension_Swift)::Swift::Task::_checkCancellation();
      puVar17 = &DAT_100ff69f8;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      *(undefined **)(unaff_x22 + 0x388) = puVar17;
      bVar9 = Swift::ThrowingTaskGroup::get_isEmpty(TVar15);
      if (bVar9) {
        _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
        plVar14 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3a0) = plVar14;
        TVar15.unknown = &DAT_100ff7f10;
        FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
        *plVar14 = unaff_x22;
        plVar14[1] = (long)FUN_100a98c10;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
          Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar15);
          return;
        }
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x390) = 0;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
          pcVar7 = FUN_100a98814;
          lVar19 = unaff_x22 + 0x411;
          lVar26 = unaff_x22 + 0x200;
          goto LAB_100a98478;
        }
      }
      goto LAB_100a9865c;
    }
    uVar20 = *(undefined8 *)(unaff_x22 + 0x380);
    uVar1 = *(ulong *)(unaff_x22 + 0x1e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1f0);
    lVar26 = *(long *)(unaff_x22 + 0x368);
    if ((uVar1 & 0xff) == 4) {
      bVar9 = SCARRY8(lVar26,1);
      lVar26 = lVar26 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a98650);
        (*pcVar7)();
      }
      *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar26;
    }
    uVar27 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x412);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x328);
    TVar21.unknown = *(undefined **)(unaff_x22 + 800);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x308);
    puVar17 = &DAT_100ff7e38;
    FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
    uVar13 = *(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xf;
    uVar11 = uVar13 & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar12 = Swift::TaskPriority::typeMetadataAccessor();
    uVar34 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x310);
    lVar32 = *(long *)(TVar12.unknown + -8);
    (**(code **)(lVar32 + 0x38))(uVar11,1,1,TVar12.unknown);
    puVar17 = &DAT_100f2f258;
    _swift_allocObject(&DAT_100f2f258,0x78,7);
    *(undefined8 *)(puVar17 + 0x10) = 0;
    *(undefined8 *)(puVar17 + 0x18) = 0;
    *(undefined8 *)(puVar17 + 0x20) = uVar24;
    puVar17[0x28] = uVar4;
    *(undefined8 *)(puVar17 + 0x30) = uVar20;
    puVar17[0x38] = (char)uVar1;
    *(undefined8 *)(puVar17 + 0x40) = uVar28;
    *(undefined8 *)(puVar17 + 0x48) = uVar27;
    *(undefined8 *)(puVar17 + 0x50) = uVar31;
    *(undefined8 *)(puVar17 + 0x58) = uVar22;
    *(undefined8 *)(puVar17 + 0x68) = uVar34;
    *(undefined8 *)(puVar17 + 0x60) = uVar33;
    *(undefined **)(puVar17 + 0x70) = TVar21.unknown;
    uVar13 = uVar13 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100a93ce0(uVar11,uVar13);
    uVar25 = uVar13;
    (**(code **)(lVar32 + 0x30))(uVar13,1,TVar12.unknown);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar28);
    _swift_retain(uVar24);
    _swift_retain(uVar27);
    _swift_retain(uVar31);
    _swift_retain(uVar33);
    _swift_retain();
    if ((int)uVar25 == 1) {
      FUN_100a93d30(uVar13);
      uVar25 = 0x3100;
    }
    else {
      _Var8 = Swift::TaskPriority::get_rawValue(TVar21);
      (**(code **)(lVar32 + 8))(uVar13,TVar12.unknown);
      uVar25 = (ulong)_Var8 | 0x3100;
    }
    _swift_task_dealloc(uVar13);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x380);
    lVar32 = *(long *)(unaff_x22 + 0x358);
    lVar30 = *(long *)(unaff_x22 + 0x300);
    *(undefined8 *)(unaff_x22 + 0x2b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0;
    *(undefined **)(unaff_x22 + 0x2c0) = TVar15.unknown;
    _swift_retain(puVar17);
    _swift_task_create(uVar25,unaff_x22 + 0x2b0,PTR___type_metadata_for____100eae0c8 + 8,
                       &DAT_100c93308,puVar17);
    _swift_release();
    FUN_100aa2418(uVar20,uVar1,uVar28);
    _swift_release(puVar17);
    FUN_100a93d30(uVar11);
    _swift_task_dealloc(uVar11);
    lVar32 = lVar32 + 1;
    if (lVar30 < lVar32) {
      *(long *)(unaff_x22 + 0x360) = lVar26;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
        pcVar7 = FUN_100a97e14;
        lVar19 = unaff_x22 + 0x410;
        lVar26 = unaff_x22 + 0x1b0;
LAB_100a98478:
        _swift_taskGroup_wait_next_throwing(lVar19,TVar15.unknown,pcVar7,lVar26);
        return;
      }
      goto LAB_100a9865c;
    }
    *(long *)(unaff_x22 + 0x358) = lVar32;
  }
  *(long *)(unaff_x22 + 0x368) = lVar26;
  uVar28 = *(undefined8 *)(*(long *)(unaff_x22 + 0x350) + 0x10);
  pcVar7 = thunk_FUN_100aa233c;
  _swift_task_addCancellationHandler(thunk_FUN_100aa233c,uVar28);
  *(code **)(unaff_x22 + 0x370) = pcVar7;
  plVar14 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x378) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_100a97ebc;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
    FUN_100a697f8(uVar28);
    return;
  }
LAB_100a9865c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98660 | FUN_100a98660 */

/* WARNING: Removing unreachable block (ram,0x000100a986a4) */

void FUN_100a98660(void)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  ThrowingTaskGroup TVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x370));
  (extension_Swift)::Swift::Task::_checkCancellation();
  puVar2 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  *(undefined **)(unaff_x22 + 0x388) = puVar2;
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty((undefined *)(unaff_x22 + 0x10));
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
    plVar3 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3a0) = plVar3;
    TVar4.unknown = &DAT_100ff7f10;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a98c10;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
      Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar4);
      return;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
      _swift_taskGroup_wait_next_throwing
                (unaff_x22 + 0x411,unaff_x22 + 0x10,FUN_100a98814,unaff_x22 + 0x200);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98814 | FUN_100a98814 */

void FUN_100a98814(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(long *)(unaff_x22 + 0x398) = unaff_x20;
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x413) = *(undefined1 *)(unaff_x22 + 0x411);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a988ac;
    pcVar1 = FUN_100a988b0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a988ac:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a98a5c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a988b0 | FUN_100a988b0 */

void FUN_100a988b0(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x22 + 0x413) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x390);
    bVar1 = Swift::ThrowingTaskGroup::get_isEmpty((undefined *)(unaff_x22 + 0x10));
    if (bVar1) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x350);
      if (lVar7 == 0) {
        _swift_release(uVar6);
        plVar2 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3a0) = plVar2;
        TVar3.unknown = &DAT_100ff7f10;
        FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
        pcVar5 = FUN_100a98c10;
      }
      else {
        _swift_willThrow();
        _swift_release(uVar6);
        *(long *)(unaff_x22 + 0x3a8) = lVar7;
        FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
        Swift::ThrowingTaskGroup::cancelAll((undefined *)(unaff_x22 + 0x10));
        plVar2 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x3b0) = plVar2;
        TVar3.unknown = &DAT_100ff7f10;
        FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
        pcVar5 = FUN_100a98cfc;
      }
      *plVar2 = unaff_x22;
      plVar2[1] = (long)pcVar5;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
        Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar3);
        return;
      }
      goto LAB_100a98a58;
    }
    *(long *)(unaff_x22 + 0x390) = lVar7;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
    _swift_taskGroup_wait_next_throwing
              (unaff_x22 + 0x411,unaff_x22 + 0x10,FUN_100a98814,unaff_x22 + 0x200);
    return;
  }
LAB_100a98a58:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98a5c | FUN_100a98a5c */

void FUN_100a98a5c(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar7 = *(long *)(unaff_x22 + 0x398);
  if (*(long *)(unaff_x22 + 0x390) != 0) {
    _swift_errorRelease(lVar7);
    lVar7 = *(long *)(unaff_x22 + 0x390);
  }
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty((undefined *)(unaff_x22 + 0x10));
  if (bVar1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x350);
    if (lVar7 == 0) {
      _swift_release(uVar6);
      plVar2 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3a0) = plVar2;
      TVar3.unknown = &DAT_100ff7f10;
      FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
      pcVar5 = FUN_100a98c10;
    }
    else {
      _swift_willThrow();
      _swift_release(uVar6);
      *(long *)(unaff_x22 + 0x3a8) = lVar7;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      Swift::ThrowingTaskGroup::cancelAll((undefined *)(unaff_x22 + 0x10));
      plVar2 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3b0) = plVar2;
      TVar3.unknown = &DAT_100ff7f10;
      FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
      pcVar5 = FUN_100a98cfc;
    }
    *plVar2 = unaff_x22;
    plVar2[1] = (long)pcVar5;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar3);
      return;
    }
  }
  else {
    *(long *)(unaff_x22 + 0x390) = lVar7;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      _swift_taskGroup_wait_next_throwing
                (unaff_x22 + 0x411,unaff_x22 + 0x10,FUN_100a98814,unaff_x22 + 0x200);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98c10 | FUN_100a98c10 */

void FUN_100a98c10(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x3a0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a98c8c,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98c8c | FUN_100a98c8c */

void FUN_100a98c8c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a9a600,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98cfc | FUN_100a98cfc */

void FUN_100a98cfc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x3b0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a98d78,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98d78 | FUN_100a98d78 */

void FUN_100a98d78(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
  *(undefined8 *)(unaff_x22 + 0x408) = *(undefined8 *)(unaff_x22 + 0x3a8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100a9a688,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98e00 | FUN_100a98e00 */

void FUN_100a98e00(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x3b8);
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  Swift::ThrowingTaskGroup::cancelAll((undefined *)(unaff_x22 + 0x10));
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3b0) = plVar1;
  TVar2.unknown = &DAT_100ff7f10;
  FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a98cfc;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
    Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a98ee4 | FUN_100a98ee4 */

void FUN_100a98ee4(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined7 uVar4;
  code *pcVar5;
  bool bVar6;
  __uint8 _Var7;
  int iVar8;
  long *plVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined *puVar10;
  ulong uVar11;
  TaskPriority TVar12;
  TaskPriority TVar13;
  CancellationError CVar14;
  CancellationError CVar15;
  ThrowingTaskGroup TVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined *puVar30;
  long lVar31;
  long unaff_x22;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  pthread_mutex_t *ppVar35;
  long lVar36;
  undefined8 uVar37;
  byte bVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  String SVar42;
  
  lVar20 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x22 + 0x414) == '\x01') {
    _swift_release();
    plVar9 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3a0) = plVar9;
    TVar16.unknown = &DAT_100ff7f10;
    FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
    pcVar5 = FUN_100a98c10;
LAB_100a997f4:
    *plVar9 = unaff_x22;
    plVar9[1] = (long)pcVar5;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar20) {
      Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar16);
      return;
    }
LAB_100a99934:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  lVar36 = *(long *)(*(long *)(unaff_x22 + 0x350) + 0x10);
  pcVar5 = FUN_100aa233c;
  _swift_task_addCancellationHandler(FUN_100aa233c,lVar36);
  ppVar35 = (pthread_mutex_t *)(lVar36 + 0x38);
  iVar8 = _pthread_mutex_lock(ppVar35);
  puVar21 = (undefined8 *)CONCAT44(extraout_var,iVar8);
  if (iVar8 == 0) {
    TVar16.unknown = (undefined *)(unaff_x22 + 0x10);
    lVar32 = *(long *)(unaff_x22 + 0x3c8);
    do {
      *(long *)(unaff_x22 + 0x3d8) = lVar32;
      *(code **)(unaff_x22 + 0x3d0) = pcVar5;
      pbVar22 = (byte *)(lVar36 + 0x10);
      bVar38 = *pbVar22;
      bVar1 = *(byte *)(lVar36 + 0x22);
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          FUN_1006883ac();
          uVar18 = 0x100;
          if ((bVar38 & 1) == 0) {
            uVar18 = 0;
          }
          *(undefined8 *)(lVar36 + 0x10) = *puVar21;
          *(undefined8 *)(lVar36 + 0x18) = 0;
          *(undefined2 *)(lVar36 + 0x20) = uVar18;
          *(undefined1 *)(lVar36 + 0x22) = 1;
          _swift_retain();
          uVar27 = 0;
          puVar30 = (undefined *)0x0;
          bVar38 = 3;
          uVar34 = 2;
        }
        else {
          bVar2 = *(byte *)(lVar36 + 0x18);
          bVar3 = *(byte *)(lVar36 + 0x19);
          uVar34 = (ulong)bVar3;
          if (bVar1 == 1) {
            if (*(int6 *)(lVar36 + 0x1a) != 0 || (bVar3 != 0 || bVar2 != 0)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99934);
              (*pcVar5)();
            }
            bVar1 = *(byte *)(lVar36 + 0x20);
            bVar2 = *(byte *)(lVar36 + 0x21);
            uVar29 = CONCAT71(*(undefined7 *)(lVar36 + 0x11),bVar38);
            *(ulong *)(unaff_x22 + 0x2e8) = uVar29;
            pbVar22[0] = 0;
            pbVar22[1] = 0;
            pbVar22[2] = 0;
            pbVar22[3] = 0;
            pbVar22[4] = 0;
            pbVar22[5] = 0;
            pbVar22[6] = 0;
            pbVar22[7] = 0;
            *(undefined8 *)(lVar36 + 0x18) = 0;
            *(undefined2 *)(lVar36 + 0x20) = 0;
            *(undefined1 *)(lVar36 + 0x22) = 5;
            if (*(long *)(uVar29 + 0x18) < 1) {
              uVar27 = 0;
              puVar30 = (undefined *)0x0;
              *(ulong *)(lVar36 + 0x10) = uVar29;
              *(undefined8 *)(lVar36 + 0x18) = 0;
              *(byte *)(lVar36 + 0x20) = bVar1 & 1;
              *(byte *)(lVar36 + 0x21) = bVar2 & 1;
              bVar38 = 3;
              uVar34 = 2;
              uVar17 = 1;
LAB_100a99294:
              *(undefined1 *)(lVar36 + 0x22) = uVar17;
            }
            else {
              uVar34 = uVar29;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar34 & 1) == 0) {
                FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
                uVar29 = *(ulong *)(unaff_x22 + 0x2e8);
              }
              lVar26 = *(long *)(uVar29 + 0x20);
              lVar32 = lVar26 + 1;
              if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9991c);
                (*pcVar5)();
              }
              lVar26 = uVar29 + lVar26 * 0x18;
              uVar34 = *(ulong *)(lVar26 + 0x28);
              uVar27 = *(ulong *)(lVar26 + 0x30);
              puVar30 = *(undefined **)(lVar26 + 0x38);
              if (*(long *)(uVar29 + 0x10) <= lVar32) {
                lVar32 = 0;
              }
              *(long *)(uVar29 + 0x20) = lVar32;
              if (SBORROW8(*(long *)(uVar29 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99924);
                (*pcVar5)();
              }
              *(long *)(uVar29 + 0x18) = *(long *)(uVar29 + 0x18) + -1;
              *(ulong *)(lVar36 + 0x10) = uVar29;
              *(undefined8 *)(lVar36 + 0x18) = 0;
              *(undefined1 *)(lVar36 + 0x20) = 1;
              *(byte *)(lVar36 + 0x21) = bVar2 & 1;
              bVar38 = (bVar1 ^ 0xff) & 1;
              *(undefined1 *)(lVar36 + 0x22) = 1;
            }
          }
          else {
            uVar29 = CONCAT71(*(undefined7 *)(lVar36 + 0x11),bVar38);
            *(ulong *)(unaff_x22 + 0x2e0) = uVar29;
            pbVar22[0] = 0;
            pbVar22[1] = 0;
            pbVar22[2] = 0;
            pbVar22[3] = 0;
            pbVar22[4] = 0;
            pbVar22[5] = 0;
            pbVar22[6] = 0;
            pbVar22[7] = 0;
            *(undefined8 *)(lVar36 + 0x18) = 0;
            *(undefined2 *)(lVar36 + 0x20) = 0;
            *(undefined1 *)(lVar36 + 0x22) = 5;
            if (0 < *(long *)(uVar29 + 0x18)) {
              uVar34 = uVar29;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar34 & 1) == 0) {
                FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
                uVar29 = *(ulong *)(unaff_x22 + 0x2e0);
              }
              lVar26 = *(long *)(uVar29 + 0x20);
              lVar32 = lVar26 + 1;
              if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99918);
                (*pcVar5)();
              }
              lVar26 = uVar29 + lVar26 * 0x18;
              uVar34 = *(ulong *)(lVar26 + 0x28);
              uVar27 = *(ulong *)(lVar26 + 0x30);
              puVar30 = *(undefined **)(lVar26 + 0x38);
              if (*(long *)(uVar29 + 0x10) <= lVar32) {
                lVar32 = 0;
              }
              *(long *)(uVar29 + 0x20) = lVar32;
              if (SBORROW8(*(long *)(uVar29 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99920);
                (*pcVar5)();
              }
              bVar38 = 0;
              *(long *)(uVar29 + 0x18) = *(long *)(uVar29 + 0x18) + -1;
              *(ulong *)(lVar36 + 0x10) = uVar29;
              *(byte *)(lVar36 + 0x18) = bVar2 & 1;
              *(byte *)(lVar36 + 0x19) = bVar3;
              uVar17 = 2;
              goto LAB_100a99294;
            }
            _swift_release(uVar29);
            uVar27 = 0;
            puVar30 = (undefined *)0x0;
            *(ulong *)(lVar36 + 0x10) = (ulong)bVar2 & 1;
            *(undefined8 *)(lVar36 + 0x18) = 0;
            *(undefined4 *)(lVar36 + 0x20) = 0x1040000;
            bVar38 = 2;
          }
        }
      }
      else if (bVar1 == 3) {
        uVar34 = 0;
        uVar27 = 0;
        puVar30 = (undefined *)0x0;
        *(ulong *)(lVar36 + 0x10) = (ulong)bVar38 & 1;
        *(undefined8 *)(lVar36 + 0x18) = 0;
        *(undefined2 *)(lVar36 + 0x20) = 0;
        *(undefined1 *)(lVar36 + 0x22) = 4;
        bVar38 = 3;
      }
      else {
        if (bVar1 != 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99930);
          (*pcVar5)();
        }
        uVar27 = 0;
        puVar30 = (undefined *)0x0;
        bVar38 = 3;
        uVar34 = 1;
      }
      iVar8 = _pthread_mutex_unlock(ppVar35);
      if (iVar8 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99908);
        (*pcVar5)();
      }
      if (1 < bVar38) {
        if (bVar38 != 2) {
          if ((puVar30 == (undefined *)0x0 && uVar27 == 0) && uVar34 == 0) {
            CVar14 = Swift::CancellationError::typeMetadataAccessor();
            uVar34 = *(long *)(*(long *)(CVar14.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc(uVar34);
            CVar15 = Swift::CancellationError::init();
            _swift_dynamicCast(CVar15.unknown,uVar34,CVar14.unknown,
                               PTR___type_metadata_for_Swift_Never_100eadc38,6);
            _swift_task_dealloc(uVar34);
          }
          else if ((uVar34 != 1) || (puVar30 != (undefined *)0x0 || uVar27 != 0)) {
            if ((uVar34 == 2) && (puVar30 == (undefined *)0x0 && uVar27 == 0)) {
              *(long *)(unaff_x22 + 0x198) = unaff_x22 + 0x280;
              *(long *)(unaff_x22 + 0x170) = unaff_x22;
              *(code **)(unaff_x22 + 0x178) = FUN_100a9993c;
              _swift_continuation_init(unaff_x22 + 0x170,1);
              FUN_100a9dfe0();
              if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar20) {
                _swift_continuation_await(unaff_x22 + 0x170);
                return;
              }
            }
            else {
              SVar42.bridgeObject = (void *)0x2;
              SVar42.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar42,(StaticString)0x0,0xe000000000000000,
                         0xdaeab0);
              if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar20) {
                return;
              }
            }
            goto LAB_100a99934;
          }
        }
        lVar36 = *(long *)(unaff_x22 + 0x3c0);
        _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x3d0));
        (extension_Swift)::Swift::Task::_checkCancellation();
        if (lVar36 != 0) {
          _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
          *(long *)(unaff_x22 + 0x3a8) = lVar36;
          FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
          Swift::ThrowingTaskGroup::cancelAll(TVar16);
          plVar9 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x3b0) = plVar9;
          TVar16.unknown = &DAT_100ff7f10;
          FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
          pcVar5 = FUN_100a98cfc;
          goto LAB_100a997f4;
        }
        lVar36 = *(long *)(unaff_x22 + 0x3d8);
LAB_100a99840:
        *(long *)(unaff_x22 + 0x400) = lVar36;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar20) {
          _swift_taskGroup_wait_next_throwing
                    (unaff_x22 + 0x410,TVar16.unknown,FUN_100a9a558,unaff_x22 + 0x1b0);
          return;
        }
        goto LAB_100a99934;
      }
      _swift_task_removeCancellationHandler(pcVar5);
      if (uVar34 != 0) {
        lVar36 = *(long *)(unaff_x22 + 0x3d8);
        if ((uVar27 & 0xff) == 4) {
          bVar6 = SCARRY8(lVar36,1);
          lVar36 = lVar36 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9992c);
            (*pcVar5)();
          }
          *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar36;
        }
        uVar37 = *(undefined8 *)(unaff_x22 + 0x338);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x330);
        uVar17 = *(undefined1 *)(unaff_x22 + 0x412);
        uVar39 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar24 = *(undefined8 *)(unaff_x22 + 800);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x308);
        puVar10 = &DAT_100ff7e38;
        FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
        uVar29 = *(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xf;
        uVar11 = uVar29 & 0xfffffffffffffff0;
        _swift_task_alloc();
        TVar12 = Swift::TaskPriority::typeMetadataAccessor();
        uVar41 = *(undefined8 *)(unaff_x22 + 0x318);
        uVar40 = *(undefined8 *)(unaff_x22 + 0x310);
        lVar32 = *(long *)(TVar12.unknown + -8);
        (**(code **)(lVar32 + 0x38))(uVar11,1,1,TVar12.unknown);
        puVar10 = &DAT_100f2f230;
        _swift_allocObject(&DAT_100f2f230,0x78,7);
        *(undefined8 *)(puVar10 + 0x10) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        *(undefined8 *)(puVar10 + 0x20) = uVar39;
        puVar10[0x28] = uVar17;
        *(ulong *)(puVar10 + 0x30) = uVar34;
        puVar10[0x38] = (char)uVar27;
        *(undefined **)(puVar10 + 0x40) = puVar30;
        *(undefined8 *)(puVar10 + 0x48) = uVar37;
        *(undefined8 *)(puVar10 + 0x50) = uVar23;
        *(undefined8 *)(puVar10 + 0x58) = uVar25;
        *(undefined8 *)(puVar10 + 0x68) = uVar41;
        *(undefined8 *)(puVar10 + 0x60) = uVar40;
        *(undefined8 *)(puVar10 + 0x70) = uVar24;
        uVar29 = uVar29 & 0xfffffffffffffff0;
        _swift_task_alloc();
        FUN_100a93ce0(uVar11,uVar29);
        uVar33 = uVar29;
        (**(code **)(lVar32 + 0x30))(uVar29,1,TVar12.unknown);
        _swift_retain(uVar39);
        _swift_retain(uVar37);
        _swift_retain(uVar23);
        _swift_retain(uVar40);
        _swift_retain(uVar24);
        _swift_bridgeObjectRetain(uVar34);
        TVar13.unknown = puVar30;
        _swift_bridgeObjectRetain();
        if ((int)uVar33 == 1) {
          FUN_100a93d30(uVar29);
          uVar33 = 0x3100;
        }
        else {
          _Var7 = Swift::TaskPriority::get_rawValue(TVar13);
          (**(code **)(lVar32 + 8))(uVar29,TVar12.unknown);
          uVar33 = (ulong)_Var7 | 0x3100;
        }
        _swift_task_dealloc(uVar29);
        *(undefined8 *)(unaff_x22 + 0x298) = 1;
        *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
        *(undefined **)(unaff_x22 + 0x2a8) = TVar16.unknown;
        _swift_retain(puVar10);
        _swift_task_create(uVar33,unaff_x22 + 0x298,PTR___type_metadata_for____100eae0c8 + 8,
                           &DAT_100c93300,puVar10);
        _swift_release();
        FUN_100aa2418(uVar34,uVar27,puVar30);
        _swift_release(puVar10);
        FUN_100a93d30(uVar11);
        _swift_task_dealloc(uVar11);
        goto LAB_100a99840;
      }
      lVar32 = *(long *)(unaff_x22 + 0x3d8) + -1;
      if (SBORROW8(*(long *)(unaff_x22 + 0x3d8),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9990c);
        (*pcVar5)();
      }
      *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar32;
      if (lVar32 == 0) {
        lVar36 = *(long *)(*(long *)(unaff_x22 + 0x338) + 0x10);
        iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar36 + 0x38));
        puVar21 = (undefined8 *)CONCAT44(extraout_var_01,iVar8);
        if (iVar8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99910);
          (*pcVar5)();
        }
        uVar19 = (uint)*(byte *)(lVar36 + 0x22);
        if (*(byte *)(lVar36 + 0x22) < 3) {
          bVar38 = *(byte *)(lVar36 + 0x10);
          if (uVar19 == 0) {
            FUN_1006883ac();
            uVar23 = *(undefined8 *)(lVar36 + 0x10);
            uVar24 = *(undefined8 *)(lVar36 + 0x18);
            *(undefined8 *)(lVar36 + 0x10) = *puVar21;
            *(ulong *)(lVar36 + 0x18) = (ulong)bVar38 & 1 | 0x100;
            uVar18 = *(undefined2 *)(lVar36 + 0x20);
            *(undefined2 *)(lVar36 + 0x20) = 0;
            uVar17 = *(undefined1 *)(lVar36 + 0x22);
            *(undefined1 *)(lVar36 + 0x22) = 2;
            _swift_retain();
            FUN_100aa2428(uVar23,uVar24,uVar18,uVar17);
            goto LAB_100a993cc;
          }
          uVar4 = *(undefined7 *)(lVar36 + 0x11);
          if (uVar19 != 1) {
            _swift_retain(*(undefined8 *)(lVar36 + 0x10));
            _swift_release(CONCAT71(uVar4,bVar38));
            goto LAB_100a993cc;
          }
          lVar26 = *(long *)(lVar36 + 0x18);
          bVar1 = *(byte *)(lVar36 + 0x21);
          lVar28 = CONCAT71(uVar4,bVar38);
          if (lVar26 == 0) {
            bVar6 = false;
            *(long *)(lVar36 + 0x10) = lVar28;
            *(byte *)(lVar36 + 0x18) = bVar1 & 1;
            *(undefined1 *)(lVar36 + 0x19) = 1;
            *(undefined1 *)(lVar36 + 0x22) = 2;
          }
          else {
            lVar31 = *(long *)(lVar28 + 0x18);
            _swift_retain(*(undefined8 *)(lVar36 + 0x10));
            _swift_release(lVar28);
            if (lVar31 != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99928);
              (*pcVar5)();
            }
            FUN_100aa2428(*(undefined8 *)(lVar36 + 0x10),*(undefined8 *)(lVar36 + 0x18),
                          *(undefined2 *)(lVar36 + 0x20),*(undefined1 *)(lVar36 + 0x22));
            *(ulong *)(lVar36 + 0x10) = (ulong)bVar1 & 1;
            *(undefined8 *)(lVar36 + 0x18) = 0;
            *(undefined4 *)(lVar36 + 0x20) = 0x1040000;
            bVar6 = true;
          }
        }
        else {
          if (1 < uVar19 - 3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a9993c);
            (*pcVar5)();
          }
LAB_100a993cc:
          lVar26 = 0;
          bVar6 = false;
        }
        iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar36 + 0x38));
        if (iVar8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99914);
          (*pcVar5)();
        }
        if (lVar26 != 0) {
          if (bVar6) {
            puVar21 = *(undefined8 **)(*(long *)(lVar26 + 0x40) + 0x28);
            puVar21[1] = 0;
            puVar21[2] = 0;
            *puVar21 = 1;
            _swift_continuation_throwingResume(lVar26);
          }
          else {
            puVar10 = PTR___type_metadata_for_Swift_Never_100eadc38;
            _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                              PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                              ,0,0);
            puVar30 = &DAT_100ff69f8;
            FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
            puVar21 = (undefined8 *)
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
            _swift_allocError();
            *puVar21 = puVar10;
            _swift_continuation_throwingResumeWithError(lVar26,puVar30);
          }
        }
      }
      lVar36 = *(long *)(*(long *)(unaff_x22 + 0x350) + 0x10);
      pcVar5 = FUN_100aa233c;
      _swift_task_addCancellationHandler(FUN_100aa233c,lVar36);
      ppVar35 = (pthread_mutex_t *)(lVar36 + 0x38);
      iVar8 = _pthread_mutex_lock(ppVar35);
      puVar21 = (undefined8 *)CONCAT44(extraout_var_00,iVar8);
    } while (iVar8 == 0);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a99904);
  (*pcVar5)();
}



/* Address: 0x100a9993c | FUN_100a9993c */

void FUN_100a9993c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x3e0) = *(long *)(lVar3 + 400);
  if (*(long *)(lVar3 + 400) == 0) {
    *(undefined8 *)(lVar3 + 0x3f0) = *(undefined8 *)(lVar3 + 0x288);
    *(undefined8 *)(lVar3 + 1000) = *(undefined8 *)(lVar3 + 0x280);
    *(undefined8 *)(lVar3 + 0x3f8) = *(undefined8 *)(lVar3 + 0x290);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a999fc;
    pcVar1 = FUN_100a99a00;
  }
  else {
    _swift_willThrow();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a999fc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a9a414;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a99a00 | FUN_100a99a00 */

void FUN_100a99a00(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined7 uVar5;
  code *pcVar6;
  bool bVar7;
  __uint8 _Var8;
  int iVar9;
  long *plVar10;
  ThrowingTaskGroup TVar11;
  ulong uVar12;
  TaskPriority TVar13;
  ulong uVar14;
  TaskPriority TVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined *puVar16;
  CancellationError CVar17;
  CancellationError CVar18;
  undefined2 uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x22;
  byte bVar33;
  ulong uVar34;
  long lVar35;
  undefined *puVar36;
  undefined8 uVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  String SVar41;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100ea82f0;
  TVar11.unknown = (undefined *)(unaff_x22 + 0x10);
  lVar31 = *(long *)(unaff_x22 + 1000);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x3d0));
  if (lVar31 == 1) {
    lVar31 = *(long *)(unaff_x22 + 0x3c0);
    (extension_Swift)::Swift::Task::_checkCancellation();
joined_r0x000100a9a310:
    if (lVar31 != 0) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
      *(long *)(unaff_x22 + 0x3a8) = lVar31;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      Swift::ThrowingTaskGroup::cancelAll(TVar11);
      plVar10 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3b0) = plVar10;
      TVar11.unknown = &DAT_100ff7f10;
      FUN_1000f7830(&DAT_100ff7f10,&DAT_100c932e8);
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a98cfc;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
        Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar11);
        return;
      }
      goto LAB_100a9a404;
    }
    lVar31 = *(long *)(unaff_x22 + 0x3d8);
  }
  else {
    uVar38 = *(ulong *)(unaff_x22 + 1000);
    if (uVar38 == 0) {
      do {
        lVar31 = *(long *)(unaff_x22 + 0x3d8) + -1;
        if (SBORROW8(*(long *)(unaff_x22 + 0x3d8),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3dc);
          (*pcVar6)();
        }
        *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar31;
        if (lVar31 == 0) {
          lVar35 = *(long *)(*(long *)(unaff_x22 + 0x338) + 0x10);
          iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar35 + 0x38));
          puVar25 = (undefined8 *)CONCAT44(extraout_var_00,iVar9);
          if (iVar9 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3e8);
            (*pcVar6)();
          }
          uVar20 = (uint)*(byte *)(lVar35 + 0x22);
          if (*(byte *)(lVar35 + 0x22) < 3) {
            bVar33 = *(byte *)(lVar35 + 0x10);
            if (uVar20 == 0) {
              FUN_1006883ac();
              uVar22 = *(undefined8 *)(lVar35 + 0x10);
              uVar23 = *(undefined8 *)(lVar35 + 0x18);
              *(undefined8 *)(lVar35 + 0x10) = *puVar25;
              *(ulong *)(lVar35 + 0x18) = (ulong)bVar33 & 1 | 0x100;
              uVar19 = *(undefined2 *)(lVar35 + 0x20);
              *(undefined2 *)(lVar35 + 0x20) = 0;
              uVar1 = *(undefined1 *)(lVar35 + 0x22);
              *(undefined1 *)(lVar35 + 0x22) = 2;
              _swift_retain();
              FUN_100aa2428(uVar22,uVar23,uVar19,uVar1);
              goto LAB_100a9a0f8;
            }
            uVar5 = *(undefined7 *)(lVar35 + 0x11);
            if (uVar20 != 1) {
              _swift_retain(*(undefined8 *)(lVar35 + 0x10));
              _swift_release(CONCAT71(uVar5,bVar33));
              goto LAB_100a9a0f8;
            }
            lVar26 = *(long *)(lVar35 + 0x18);
            bVar2 = *(byte *)(lVar35 + 0x21);
            lVar30 = CONCAT71(uVar5,bVar33);
            if (lVar26 == 0) {
              bVar7 = false;
              *(long *)(lVar35 + 0x10) = lVar30;
              *(byte *)(lVar35 + 0x18) = bVar2 & 1;
              *(undefined1 *)(lVar35 + 0x19) = 1;
              *(undefined1 *)(lVar35 + 0x22) = 2;
            }
            else {
              lVar32 = *(long *)(lVar30 + 0x18);
              _swift_retain(*(undefined8 *)(lVar35 + 0x10));
              _swift_release(lVar30);
              if (lVar32 != 0) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a404);
                (*pcVar6)();
              }
              FUN_100aa2428(*(undefined8 *)(lVar35 + 0x10),*(undefined8 *)(lVar35 + 0x18),
                            *(undefined2 *)(lVar35 + 0x20),*(undefined1 *)(lVar35 + 0x22));
              *(ulong *)(lVar35 + 0x10) = (ulong)bVar2 & 1;
              *(undefined8 *)(lVar35 + 0x18) = 0;
              *(undefined4 *)(lVar35 + 0x20) = 0x1040000;
              bVar7 = true;
            }
          }
          else {
            if (1 < uVar20 - 3) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a414);
              (*pcVar6)();
            }
LAB_100a9a0f8:
            lVar26 = 0;
            bVar7 = false;
          }
          iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar35 + 0x38));
          if (iVar9 != 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3ec);
            (*pcVar6)();
          }
          if (lVar26 != 0) {
            if (bVar7) {
              puVar25 = *(undefined8 **)(*(long *)(lVar26 + 0x40) + 0x28);
              puVar25[1] = 0;
              puVar25[2] = 0;
              *puVar25 = 1;
              _swift_continuation_throwingResume(lVar26);
            }
            else {
              puVar16 = PTR___type_metadata_for_Swift_Never_100eadc38;
              _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                                ,0,0);
              puVar36 = &DAT_100ff69f8;
              FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
              puVar25 = (undefined8 *)
                        PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
              _swift_allocError();
              *puVar25 = puVar16;
              _swift_continuation_throwingResumeWithError(lVar26,puVar36);
            }
          }
        }
        lVar35 = *(long *)(*(long *)(unaff_x22 + 0x350) + 0x10);
        pcVar6 = FUN_100aa233c;
        _swift_task_addCancellationHandler(FUN_100aa233c,lVar35);
        iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar35 + 0x38));
        puVar25 = (undefined8 *)CONCAT44(extraout_var,iVar9);
        if (iVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3e4);
          (*pcVar6)();
        }
        *(long *)(unaff_x22 + 0x3d8) = lVar31;
        *(code **)(unaff_x22 + 0x3d0) = pcVar6;
        pbVar24 = (byte *)(lVar35 + 0x10);
        bVar33 = *pbVar24;
        bVar2 = *(byte *)(lVar35 + 0x22);
        if (bVar2 < 3) {
          if (bVar2 == 0) {
            FUN_1006883ac();
            uVar19 = 0x100;
            if ((bVar33 & 1) == 0) {
              uVar19 = 0;
            }
            *(undefined8 *)(lVar35 + 0x10) = *puVar25;
            *(undefined8 *)(lVar35 + 0x18) = 0;
            *(undefined2 *)(lVar35 + 0x20) = uVar19;
            *(undefined1 *)(lVar35 + 0x22) = 1;
            _swift_retain();
            uVar34 = 0;
            puVar36 = (undefined *)0x0;
            bVar33 = 3;
            uVar38 = 2;
          }
          else {
            bVar3 = *(byte *)(lVar35 + 0x18);
            bVar4 = *(byte *)(lVar35 + 0x19);
            uVar38 = (ulong)bVar4;
            if (bVar2 == 1) {
              if (*(int6 *)(lVar35 + 0x1a) != 0 || (bVar4 != 0 || bVar3 != 0)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a410);
                (*pcVar6)();
              }
              bVar2 = *(byte *)(lVar35 + 0x20);
              bVar3 = *(byte *)(lVar35 + 0x21);
              uVar14 = CONCAT71(*(undefined7 *)(lVar35 + 0x11),bVar33);
              *(ulong *)(unaff_x22 + 0x2e8) = uVar14;
              pbVar24[0] = 0;
              pbVar24[1] = 0;
              pbVar24[2] = 0;
              pbVar24[3] = 0;
              pbVar24[4] = 0;
              pbVar24[5] = 0;
              pbVar24[6] = 0;
              pbVar24[7] = 0;
              *(undefined8 *)(lVar35 + 0x18) = 0;
              *(undefined2 *)(lVar35 + 0x20) = 0;
              *(undefined1 *)(lVar35 + 0x22) = 5;
              if (*(long *)(uVar14 + 0x18) < 1) {
                uVar34 = 0;
                puVar36 = (undefined *)0x0;
                *(ulong *)(lVar35 + 0x10) = uVar14;
                *(undefined8 *)(lVar35 + 0x18) = 0;
                *(byte *)(lVar35 + 0x20) = bVar2 & 1;
                *(byte *)(lVar35 + 0x21) = bVar3 & 1;
                bVar33 = 3;
                uVar38 = 2;
                *(undefined1 *)(lVar35 + 0x22) = 1;
              }
              else {
                uVar38 = uVar14;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar38 & 1) == 0) {
                  FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
                  uVar14 = *(ulong *)(unaff_x22 + 0x2e8);
                }
                lVar26 = *(long *)(uVar14 + 0x20);
                lVar31 = lVar26 + 1;
                if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3f4);
                  (*pcVar6)();
                }
                lVar26 = uVar14 + lVar26 * 0x18;
                uVar38 = *(ulong *)(lVar26 + 0x28);
                uVar34 = *(ulong *)(lVar26 + 0x30);
                puVar36 = *(undefined **)(lVar26 + 0x38);
                if (*(long *)(uVar14 + 0x10) <= lVar31) {
                  lVar31 = 0;
                }
                *(long *)(uVar14 + 0x20) = lVar31;
                if (SBORROW8(*(long *)(uVar14 + 0x18),1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3fc);
                  (*pcVar6)();
                }
                *(long *)(uVar14 + 0x18) = *(long *)(uVar14 + 0x18) + -1;
                *(ulong *)(lVar35 + 0x10) = uVar14;
                *(undefined8 *)(lVar35 + 0x18) = 0;
                *(undefined1 *)(lVar35 + 0x20) = 1;
                *(byte *)(lVar35 + 0x21) = bVar3 & 1;
                bVar33 = (bVar2 ^ 0xff) & 1;
                *(undefined1 *)(lVar35 + 0x22) = 1;
              }
            }
            else {
              uVar14 = CONCAT71(*(undefined7 *)(lVar35 + 0x11),bVar33);
              *(ulong *)(unaff_x22 + 0x2e0) = uVar14;
              pbVar24[0] = 0;
              pbVar24[1] = 0;
              pbVar24[2] = 0;
              pbVar24[3] = 0;
              pbVar24[4] = 0;
              pbVar24[5] = 0;
              pbVar24[6] = 0;
              pbVar24[7] = 0;
              *(undefined8 *)(lVar35 + 0x18) = 0;
              *(undefined2 *)(lVar35 + 0x20) = 0;
              *(undefined1 *)(lVar35 + 0x22) = 5;
              if (*(long *)(uVar14 + 0x18) < 1) {
                _swift_release(uVar14);
                uVar34 = 0;
                puVar36 = (undefined *)0x0;
                *(ulong *)(lVar35 + 0x10) = (ulong)bVar3 & 1;
                *(undefined8 *)(lVar35 + 0x18) = 0;
                *(undefined4 *)(lVar35 + 0x20) = 0x1040000;
                bVar33 = 2;
              }
              else {
                uVar38 = uVar14;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar38 & 1) == 0) {
                  FUN_100a9f2a8(&DAT_100ff7f28,&DAT_100c93380,FUN_100a9f510);
                  uVar14 = *(ulong *)(unaff_x22 + 0x2e0);
                }
                lVar26 = *(long *)(uVar14 + 0x20);
                lVar31 = lVar26 + 1;
                if (SCARRY8(lVar26,1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3f0);
                  (*pcVar6)();
                }
                lVar26 = uVar14 + lVar26 * 0x18;
                uVar38 = *(ulong *)(lVar26 + 0x28);
                uVar34 = *(ulong *)(lVar26 + 0x30);
                puVar36 = *(undefined **)(lVar26 + 0x38);
                if (*(long *)(uVar14 + 0x10) <= lVar31) {
                  lVar31 = 0;
                }
                *(long *)(uVar14 + 0x20) = lVar31;
                if (SBORROW8(*(long *)(uVar14 + 0x18),1)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3f8);
                  (*pcVar6)();
                }
                bVar33 = 0;
                *(long *)(uVar14 + 0x18) = *(long *)(uVar14 + 0x18) + -1;
                *(ulong *)(lVar35 + 0x10) = uVar14;
                *(byte *)(lVar35 + 0x18) = bVar3 & 1;
                *(byte *)(lVar35 + 0x19) = bVar4;
                *(undefined1 *)(lVar35 + 0x22) = 2;
              }
            }
          }
        }
        else if (bVar2 == 3) {
          uVar38 = 0;
          uVar34 = 0;
          puVar36 = (undefined *)0x0;
          *(ulong *)(lVar35 + 0x10) = (ulong)bVar33 & 1;
          *(undefined8 *)(lVar35 + 0x18) = 0;
          *(undefined2 *)(lVar35 + 0x20) = 0;
          *(undefined1 *)(lVar35 + 0x22) = 4;
          bVar33 = 3;
        }
        else {
          if (bVar2 != 4) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a40c);
            (*pcVar6)();
          }
          uVar34 = 0;
          puVar36 = (undefined *)0x0;
          bVar33 = 3;
          uVar38 = 1;
        }
        iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar35 + 0x38));
        if (iVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a3e0);
          (*pcVar6)();
        }
        if (1 < bVar33) {
          if (bVar33 != 2) {
            if ((puVar36 == (undefined *)0x0 && uVar34 == 0) && uVar38 == 0) {
              CVar17 = Swift::CancellationError::typeMetadataAccessor();
              uVar38 = *(long *)(*(long *)(CVar17.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              _swift_task_alloc(uVar38);
              CVar18 = Swift::CancellationError::init();
              _swift_dynamicCast(CVar18.unknown,uVar38,CVar17.unknown,
                                 PTR___type_metadata_for_Swift_Never_100eadc38,6);
              _swift_task_dealloc(uVar38);
            }
            else if ((uVar38 != 1) || (puVar36 != (undefined *)0x0 || uVar34 != 0)) {
              if ((uVar38 == 2) && (puVar36 == (undefined *)0x0 && uVar34 == 0)) {
                *(long *)(unaff_x22 + 0x198) = unaff_x22 + 0x280;
                *(long *)(unaff_x22 + 0x170) = unaff_x22;
                *(code **)(unaff_x22 + 0x178) = FUN_100a9993c;
                _swift_continuation_init(unaff_x22 + 0x170,1);
                FUN_100a9dfe0();
                if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
                  _swift_continuation_await(unaff_x22 + 0x170);
                  return;
                }
              }
              else {
                SVar41.bridgeObject = (void *)0x2;
                SVar41.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar41,(StaticString)0x0,0xe000000000000000,
                           0xdaeab0);
                if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
                  return;
                }
              }
              goto LAB_100a9a404;
            }
          }
          lVar31 = *(long *)(unaff_x22 + 0x3c0);
          _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x3d0));
          (extension_Swift)::Swift::Task::_checkCancellation();
          goto joined_r0x000100a9a310;
        }
        _swift_task_removeCancellationHandler(pcVar6);
      } while (uVar38 == 0);
    }
    else {
      puVar36 = *(undefined **)(unaff_x22 + 0x3f8);
      uVar34 = *(ulong *)(unaff_x22 + 0x3f0);
    }
    lVar31 = *(long *)(unaff_x22 + 0x3d8);
    if ((uVar34 & 0xff) == 4) {
      bVar7 = SCARRY8(lVar31,1);
      lVar31 = lVar31 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a9a400);
        (*pcVar6)();
      }
      *(long *)(*(long *)(unaff_x22 + 0x340) + 0x10) = lVar31;
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x412);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar22 = *(undefined8 *)(unaff_x22 + 800);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x308);
    puVar16 = &DAT_100ff7e38;
    FUN_1000f7830(&DAT_100ff7e38,&DAT_100c932f0);
    uVar14 = *(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xf;
    uVar12 = uVar14 & 0xfffffffffffffff0;
    _swift_task_alloc();
    TVar13 = Swift::TaskPriority::typeMetadataAccessor();
    uVar40 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x310);
    lVar35 = *(long *)(TVar13.unknown + -8);
    (**(code **)(lVar35 + 0x38))(uVar12,1,1,TVar13.unknown);
    puVar16 = &DAT_100f2f230;
    _swift_allocObject(&DAT_100f2f230,0x78,7);
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x20) = uVar37;
    puVar16[0x28] = uVar1;
    *(ulong *)(puVar16 + 0x30) = uVar38;
    puVar16[0x38] = (char)uVar34;
    *(undefined **)(puVar16 + 0x40) = puVar36;
    *(undefined8 *)(puVar16 + 0x48) = uVar28;
    *(undefined8 *)(puVar16 + 0x50) = uVar27;
    *(undefined8 *)(puVar16 + 0x58) = uVar23;
    *(undefined8 *)(puVar16 + 0x68) = uVar40;
    *(undefined8 *)(puVar16 + 0x60) = uVar39;
    *(undefined8 *)(puVar16 + 0x70) = uVar22;
    uVar14 = uVar14 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100a93ce0(uVar12,uVar14);
    uVar29 = uVar14;
    (**(code **)(lVar35 + 0x30))(uVar14,1,TVar13.unknown);
    _swift_retain(uVar37);
    _swift_retain(uVar28);
    _swift_retain(uVar27);
    _swift_retain(uVar39);
    _swift_retain(uVar22);
    _swift_bridgeObjectRetain(uVar38);
    TVar15.unknown = puVar36;
    _swift_bridgeObjectRetain();
    if ((int)uVar29 == 1) {
      FUN_100a93d30(uVar14);
      uVar29 = 0x3100;
    }
    else {
      _Var8 = Swift::TaskPriority::get_rawValue(TVar15);
      (**(code **)(lVar35 + 8))(uVar14,TVar13.unknown);
      uVar29 = (ulong)_Var8 | 0x3100;
    }
    _swift_task_dealloc(uVar14);
    *(undefined8 *)(unaff_x22 + 0x298) = 1;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
    *(undefined **)(unaff_x22 + 0x2a8) = TVar11.unknown;
    _swift_retain(puVar16);
    _swift_task_create(uVar29,unaff_x22 + 0x298,PTR___type_metadata_for____100eae0c8 + 8,
                       &DAT_100c93300,puVar16);
    _swift_release();
    FUN_100aa2418(uVar38,uVar34,puVar36);
    _swift_release(puVar16);
    FUN_100a93d30(uVar12);
    _swift_task_dealloc(uVar12);
  }
  *(long *)(unaff_x22 + 0x400) = lVar31;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
    _swift_taskGroup_wait_next_throwing
              (unaff_x22 + 0x410,TVar11.unknown,FUN_100a9a558,unaff_x22 + 0x1b0);
    return;
  }
LAB_100a9a404:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a9a414 | FUN_100a9a414 */

/* WARNING: Removing unreachable block (ram,0x000100a9a460) */
/* WARNING: Removing unreachable block (ram,0x000100a9a4f0) */

void FUN_100a9a414(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3e0));
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x3d0));
  (extension_Swift)::Swift::Task::_checkCancellation();
  *(undefined8 *)(unaff_x22 + 0x400) = *(undefined8 *)(unaff_x22 + 0x3d8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x410,unaff_x22 + 0x10,FUN_100a9a558,unaff_x22 + 0x1b0);
  return;
}



/* Address: 0x100a9a558 | FUN_100a9a558 */

void FUN_100a9a558(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x400);
    *(undefined8 *)(unaff_x22 + 0x3c0) = 0;
    *(undefined1 *)(unaff_x22 + 0x414) = *(undefined1 *)(unaff_x22 + 0x410);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100a9a5fc;
    pcVar1 = FUN_100a98ee4;
  }
  else {
    *(long *)(unaff_x22 + 0x3b8) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100a9a5fc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100a98e00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a9a600 | FUN_100a9a600 */

void FUN_100a9a600(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x330);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x338));
  _swift_release(uVar2);
  _swift_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a9a680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a9a688 | FUN_100a9a688 */

void FUN_100a9a688(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x330);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x338));
  _swift_release(uVar2);
  _swift_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a9a708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


