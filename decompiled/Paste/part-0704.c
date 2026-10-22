/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007a8fac | FUN_1007a8fac */

void FUN_1007a8fac(void)

{
  FUN_1007a8f10();
  return;
}



/* Address: 0x1007a8fc4 | FUN_1007a8fc4 */

void FUN_1007a8fc4(void)

{
  FUN_1007a8b30();
  return;
}



/* Address: 0x1007a8fdc | FUN_1007a8fdc */

void FUN_1007a8fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  _swift_task_switch(FUN_1007a8ffc,0,0);
  return;
}



/* Address: 0x1007a8ffc | FUN_1007a8ffc */

void FUN_1007a8ffc(void)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x160);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10077087c;
    Swift::_withThrowingTaskGroup();
    return;
  }
  _swift_taskGroup_initialize(unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x178) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007708d8;
  FUN_1007a92f8();
  return;
}



/* Address: 0x1007a9100 | FUN_1007a9100 */

void FUN_1007a9100(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar10 = *(long *)(lVar2 + -8);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50) + 0x58 &
          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = uVar7 + *(long *)(lVar10 + 0x40) + (ulong)*(byte *)(lVar5 + 0x50) &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar9 = *(long *)(lVar5 + 0x40);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar8 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x50);
  uVar8 = uVar6 + lVar9 + uVar8 & (uVar8 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  (**(code **)(lVar10 + 8))(unaff_x20 + uVar7,lVar2);
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar4);
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = unaff_x20 + uVar8;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 8))(unaff_x20 + uVar8,lVar3);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1007a9218 | FUN_1007a9218 */

void FUN_1007a9218(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar9 = uVar7 + 0x58 & (uVar7 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar10 = uVar9 + *(long *)(lVar5 + 0x40) + uVar7 & (uVar7 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar6 + 0x40);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  plVar4 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
  FUN_1007a8fdc(plVar4,param_1,uVar1,uVar2,uVar8,unaff_x20 + uVar9,unaff_x20 + uVar10,
                unaff_x20 + (uVar10 + lVar5 + uVar7 & (uVar7 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1007a92f8 | FUN_1007a92f8 */

void FUN_1007a92f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 **)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = *param_3;
  _swift_task_switch(FUN_1007a9320,0,0);
  return;
}



/* Address: 0x1007a9320 | FUN_1007a9320 */

void FUN_1007a9320(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  undefined7 extraout_var;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ThrowingTaskGroup TVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  
  lVar11 = *(long *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(lVar11 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(lVar11 + 0x68);
  FUN_1007a9b9c(*(undefined8 *)(unaff_x22 + 0xc0),uVar1);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar11 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar11 + 0x70);
  FUN_1007a9b9c(uVar2,uVar1);
  lVar14 = *(long *)(lVar11 + 0x60);
  *(long *)(unaff_x22 + 0x100) = lVar14;
  lVar15 = *(long *)(lVar14 + -8);
  uVar6 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar11 = *(long *)(CONCAT71(extraout_var,OVar3.value) + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar11 + 0x10))();
  uVar8 = uVar7;
  (**(code **)(lVar15 + 0x30))(uVar7,1,lVar14);
  if ((int)uVar8 == 1) {
    (**(code **)(lVar11 + 8))(uVar7,CONCAT71(extraout_var,OVar3.value));
    _swift_task_dealloc(uVar7);
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    (**(code **)(lVar15 + 0x20))(uVar6,uVar7,lVar14);
    _swift_task_dealloc(uVar7);
    FUN_1007a9b9c(uVar6,uVar1,lVar14,*(undefined8 *)(lVar11 + 0x78));
    (**(code **)(lVar15 + 8))(uVar6,lVar14);
  }
  puVar12 = *(undefined8 **)(unaff_x22 + 0xb0);
  _swift_task_dealloc(uVar6);
  TVar13.unknown = (undefined *)*puVar12;
  puVar9 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  *(undefined **)(unaff_x22 + 0x108) = puVar9;
  bVar4 = Swift::ThrowingTaskGroup::get_isEmpty(TVar13);
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001007a94cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x122) = bVar5 & 1;
  if ((bVar5 & 1) != 0) {
    plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar10;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1007a9594;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x120));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x121,TVar13.unknown,FUN_1007a95f8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007a9594 | FUN_1007a9594 */

void FUN_1007a9594(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007a9620;
  }
  else {
    *(long *)(lVar2 + 0x118) = unaff_x20;
    pcVar1 = FUN_1007a9710;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007a95f8 | FUN_1007a95f8 */

void FUN_1007a95f8(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007a9620;
  }
  else {
    *(long *)(unaff_x22 + 0x118) = unaff_x20;
    pcVar1 = FUN_1007a9710;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007a9620 | FUN_1007a9620 */

void FUN_1007a9620(void)

{
  bool bVar1;
  long *plVar2;
  ThrowingTaskGroup TVar3;
  long unaff_x22;
  
  TVar3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xb0);
  bVar1 = Swift::ThrowingTaskGroup::get_isEmpty(TVar3);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001007a967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x122) == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar2;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1007a9594;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x120));
    return;
  }
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x121,TVar3.unknown,FUN_1007a95f8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007a9710 | FUN_1007a9710 */

void FUN_1007a9710(void)

{
  Task TVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  Optional OVar6;
  bool bVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ThrowingTaskGroup TVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 *puVar19;
  
  uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xa0) = *(long *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x118);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd8) + 0x78);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  uVar14 = 0;
  FUN_1007a56d8(0,(undefined8 *)(unaff_x22 + 0x38));
  FUN_10079f5b0(unaff_x22 + 0x68,FUN_1007a9db8,unaff_x22 + 0x90,uVar15,uVar14);
  TVar1.unknown = *(undefined **)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar2 = *(ulong *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x80);
  uVar13 = (uint)(uVar2 >> 0x3e);
  if (uVar13 == 0) {
    lVar16 = *(long *)(lVar3 + 0x10);
    if (lVar16 == 0) {
      _swift_retain(TVar1.unknown);
    }
    else {
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_10076915c();
      _swift_retain(TVar1.unknown);
      puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar19 = (undefined8 *)(lVar3 + 0x20);
      do {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar15 = *puVar19;
        CVar10 = CVar8;
        _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
        Swift::CancellationError::init();
        puVar12 = (undefined8 *)puVar5;
        _swift_allocError(uVar14,puVar5,0,0);
        *puVar12 = CVar10.unknown;
        _swift_continuation_throwingResumeWithError(uVar15,uVar14);
        lVar16 = lVar16 + -1;
        puVar19 = puVar19 + 1;
      } while (lVar16 != 0);
    }
    Swift::Task::cancel(TVar1);
    _swift_release(TVar1.unknown);
  }
  else if (uVar13 == 1) {
    lVar16 = *(long *)(lVar4 + 0x10);
    if (lVar16 == 0) {
      _swift_errorRetain(lVar3);
      _swift_retain(uVar2 & 0x3fffffffffffffff);
    }
    else {
      _swift_errorRetain(lVar3);
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_10076915c();
      _swift_retain(uVar2 & 0x3fffffffffffffff);
      puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar19 = (undefined8 *)(lVar4 + 0x20);
      do {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar15 = *puVar19;
        CVar10 = CVar8;
        _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
        Swift::CancellationError::init();
        puVar12 = (undefined8 *)puVar5;
        _swift_allocError(uVar14,puVar5,0,0);
        *puVar12 = CVar10.unknown;
        _swift_continuation_throwingResumeWithError(uVar15,uVar14);
        lVar16 = lVar16 + -1;
        puVar19 = puVar19 + 1;
      } while (lVar16 != 0);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    Swift::Task::cancel((undefined *)(uVar2 & 0x3fffffffffffffff));
    *(long *)(unaff_x22 + 0x88) = lVar3;
    _swift_getAssociatedTypeWitness
              (0xff,uVar15,uVar14,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    OVar6 = Swift::Optional::typeMetadataAccessor();
    FUN_1005ec180(unaff_x22 + 0x88,TVar1.unknown,OVar6.value,uVar18,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    _swift_release(uVar2 & 0x3fffffffffffffff);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
  Swift::ThrowingTaskGroup::cancelAll((undefined *)**(undefined8 **)(unaff_x22 + 0xb0));
  FUN_1007a541c(TVar1.unknown,lVar3,uVar2,lVar4);
  _swift_errorRelease(uVar14);
  TVar17.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0xb0);
  bVar7 = Swift::ThrowingTaskGroup::get_isEmpty(TVar17);
  if (!bVar7) {
    if (*(char *)(unaff_x22 + 0x122) != '\x01') {
      _swift_taskGroup_wait_next_throwing
                (unaff_x22 + 0x121,TVar17.unknown,FUN_1007a95f8,unaff_x22 + 0x10);
      return;
    }
    plVar11 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar11;
    FUN_1000f7830(&DAT_100fe3110,&DAT_100c76c88);
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_1007a9594;
    Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x120));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007a9a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007a9b14 | FUN_1007a9b14 */

void FUN_1007a9b14(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1007a92f8(plVar5,param_1,param_2,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1007a9b9c | FUN_1007a9b9c */

void FUN_1007a9b9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  TaskPriority TVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar8 = *unaff_x20;
  lVar7 = *(long *)(param_3 + -8);
  lVar9 = *(long *)(lVar7 + 0x40);
  puVar6 = auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fe0dc8;
  local_68 = param_2;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  lVar5 = (long)puVar6 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(lVar5,1,1,TVar2.unknown);
  (**(code **)(lVar7 + 0x10))(puVar6,param_1,param_3);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar4 = uVar3 + 0x60 & (uVar3 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100f011b0;
  _swift_allocObject(&DAT_100f011b0,uVar10 + 8,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  uVar11 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(lVar8 + 0x60);
  *(long *)(puVar1 + 0x38) = param_3;
  uVar11 = *(undefined8 *)(lVar8 + 0x68);
  *(undefined8 *)(puVar1 + 0x48) = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(puVar1 + 0x40) = uVar11;
  *(undefined8 *)(puVar1 + 0x50) = *(undefined8 *)(lVar8 + 0x78);
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  (**(code **)(lVar7 + 0x20))(puVar1 + uVar4,puVar6,param_3);
  *(long **)(puVar1 + uVar10) = unaff_x20;
  _swift_retain();
  FUN_1007d299c(lVar5,&DAT_100c78160,puVar1);
  FUN_100733b9c(lVar5);
  return;
}



/* Address: 0x1007a9d0c | FUN_1007a9d0c */

void FUN_1007a9d0c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  uVar2 = 0x21;
  uVar3 = 0;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  local_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  local_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_1007a1350(0,&local_90);
  FUN_1007a37d0();
  _swift_endAccess(auStack_58);
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}



/* Address: 0x1007a9db8 | FUN_1007a9db8 */

void FUN_1007a9db8(void)

{
  long unaff_x20;
  
  FUN_1007a9d0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007a9dd0 | FUN_1007a9dd0 */

void FUN_1007a9dd0(void)

{
  undefined *puVar1;
  Optional OVar2;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 in_x3;
  long *in_x4;
  long in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(long *)(unaff_x22 + 0x130) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x138) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x120) = in_x3;
  *(long **)(unaff_x22 + 0x128) = in_x4;
  lVar5 = *in_x4;
  uVar11 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar11;
  uVar8 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar8;
  uVar9 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  uVar12 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
  uVar10 = *(undefined8 *)(lVar5 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar10;
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar12;
  *(undefined8 *)(unaff_x22 + 200) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
  lVar5 = 0;
  FUN_1007a53a8();
  *(long *)(unaff_x22 + 0x170) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 400) = lVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x198) = CONCAT71(extraout_var,OVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar4;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar4;
  lVar5 = *(long *)(in_x5 + -8);
  *(long *)(unaff_x22 + 0x1d0) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar4;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,in_x6,in_x5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x1e0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar4;
  _swift_task_switch(FUN_1007a9f8c,0,0);
  return;
}



/* Address: 0x1007a9f8c | FUN_1007a9f8c */

void FUN_1007a9f8c(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x1d0) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0x130));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1007aa028;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1007aa978();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007aa028 | FUN_1007aa028 */

void FUN_1007aa028(void)

{
  long *plVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar3 + 0x30) != 0) {
    *(long *)(lVar3 + 0x208) = *(long *)(lVar3 + 0x30);
    _swift_willThrow();
    _swift_task_switch(FUN_1007aa164,0,0);
    return;
  }
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(lVar3 + 0x138),*(undefined8 *)(lVar3 + 0x130),
             *(undefined8 *)(lVar3 + 0x1e0),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x1f8) = plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_1007aa100;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007aa100 | FUN_1007aa100 */

void FUN_1007aa100(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007aa218;
  }
  else {
    pcVar1 = FUN_1007aa794;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1007aa164 | FUN_1007aa164 */

void FUN_1007aa164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007aa214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007aa218 | FUN_1007aa218 */

void FUN_1007aa218(void)

{
  Task TVar1;
  Task TVar2;
  undefined8 uVar3;
  CancellationError CVar4;
  undefined *puVar5;
  UnsafeContinuation UVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar17 = *(long *)(unaff_x22 + 0x1b8);
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  uVar14 = uVar3;
  (**(code **)(lVar17 + 0x30))(uVar3,1,uVar13);
  if ((int)uVar14 != 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar12 = *(long *)(unaff_x22 + 0x178);
    lVar16 = *(long *)(unaff_x22 + 0x128);
    pcVar20 = *(code **)(lVar17 + 0x20);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
    (*pcVar20)(uVar18,uVar3,uVar13);
    uVar3 = *(undefined8 *)(lVar16 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar19;
    *(long *)(unaff_x22 + 0x70) = lVar16;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar18;
    FUN_10079f5b0(uVar23,FUN_1007aac3c,unaff_x22 + 0x50,uVar3,uVar21);
    (**(code **)(lVar12 + 0x10))(uVar14,uVar23,uVar21);
    puVar5 = &DAT_100fdfb40;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,UVar6.unknown,uVar13,"downstreamContinuation element ",0);
    (**(code **)(*(long *)(lVar17 + -8) + 0x30))(uVar14,1,lVar17);
    if ((int)uVar14 == 1) {
      lVar17 = *(long *)(unaff_x22 + 0x1b8);
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))
                (*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 0x170));
      pcVar20 = *(code **)(lVar17 + 8);
    }
    else {
      lVar12 = *(long *)(unaff_x22 + 0x1b8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
      uVar3 = *(undefined8 *)(unaff_x22 + 400);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar16 = *(long *)(unaff_x22 + 0x178);
      uVar19 = **(undefined8 **)(unaff_x22 + 0x180);
      (*pcVar20)(uVar13,(long)*(undefined8 **)(unaff_x22 + 0x180) + (long)*(int *)(lVar17 + 0x30),
                 uVar3);
      (**(code **)(lVar12 + 0x10))(uVar18,uVar13,uVar3);
      (**(code **)(lVar12 + 0x38))(uVar18,0,1,uVar3);
      FUN_1005ec10c(uVar18,uVar19,uVar21,puVar5,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      pcVar20 = *(code **)(lVar12 + 8);
      (*pcVar20)(uVar13,uVar3);
      (**(code **)(lVar16 + 8))(uVar23,uVar14);
    }
    (*pcVar20)(*(undefined8 *)(unaff_x22 + 0x1c8),*(undefined8 *)(unaff_x22 + 400));
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1007aa028;
    _swift_continuation_init(unaff_x22 + 0x10,1);
    FUN_1007aa978();
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  lVar17 = *(long *)(unaff_x22 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x198));
  uVar14 = *(undefined8 *)(lVar17 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar22;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar23;
  *(long *)(unaff_x22 + 0xa0) = lVar17;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar25;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar21;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar13;
  uVar3 = 0;
  FUN_1007a4678(0,(undefined8 *)(unaff_x22 + 0xd8));
  FUN_10079f5b0(unaff_x22 + 0x108,FUN_1007aac20,unaff_x22 + 0x80,uVar14,uVar3);
  TVar1.unknown = *(undefined **)(unaff_x22 + 0x108);
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x110);
  lVar17 = *(long *)(unaff_x22 + 0x118);
  uVar11 = (uint)((ulong)TVar1.unknown >> 0x3e);
  if (uVar11 == 0) {
    lVar12 = *(long *)(TVar2.unknown + 0x10);
    if (lVar12 != 0) {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar4;
      FUN_10076915c();
      puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar15 = (undefined8 *)(TVar2.unknown + 0x20);
      do {
        uVar3 = *puVar15;
        CVar8 = CVar4;
        _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
        Swift::CancellationError::init();
        puVar9 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar10 = (undefined8 *)puVar5;
        _swift_allocError();
        *puVar10 = CVar8.unknown;
        _swift_continuation_throwingResumeWithError(uVar3,puVar9);
        lVar12 = lVar12 + -1;
        puVar15 = puVar15 + 1;
      } while (lVar12 != 0);
    }
    Swift::Task::cancel(TVar1);
  }
  else {
    if (uVar11 != 1) goto LAB_1007aa70c;
    lVar12 = *(long *)(lVar17 + 0x10);
    if (lVar12 != 0) {
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      CVar7 = CVar4;
      FUN_10076915c();
      puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar15 = (undefined8 *)(lVar17 + 0x20);
      do {
        uVar3 = *puVar15;
        CVar8 = CVar4;
        _swift_allocError(CVar4.unknown,CVar7.unknown,0,0);
        Swift::CancellationError::init();
        puVar9 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        puVar10 = (undefined8 *)puVar5;
        _swift_allocError();
        *puVar10 = CVar8.unknown;
        _swift_continuation_throwingResumeWithError(uVar3,puVar9);
        lVar12 = lVar12 + -1;
        puVar15 = puVar15 + 1;
      } while (lVar12 != 0);
    }
    lVar12 = *(long *)(unaff_x22 + 0x1b8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 400);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x198);
    Swift::Task::cancel(TVar2);
    (**(code **)(lVar12 + 0x38))(uVar13,1,1,uVar3);
    puVar5 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(uVar13,(ulong)TVar1.unknown & 0x3fffffffffffffff,uVar14,puVar5,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  FUN_1007a460c(TVar1.unknown,TVar2.unknown,lVar17);
LAB_1007aa70c:
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar23,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001007aa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007aa794 | FUN_1007aa794 */

void FUN_1007aa794(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(unaff_x22 + 0x1e8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x1e0));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007aa844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007aa848 | FUN_1007aa848 */

void FUN_1007aa848(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x60 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1007aa8c0 | FUN_1007aa8c0 */

void FUN_1007aa8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar4 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x60 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1007a9dd0(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar8,lVar6,uVar7);
  return;
}



/* Address: 0x1007aa978 | FUN_1007aa978 */

void FUN_1007aa978(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  
  lVar4 = *param_2;
  lVar6 = param_2[2];
  uStack_98 = *(ulong *)(lVar4 + 0x58);
  local_a0 = *(undefined8 *)(lVar4 + 0x50);
  uStack_88 = *(undefined8 *)(lVar4 + 0x68);
  uStack_90 = *(undefined8 *)(lVar4 + 0x60);
  uStack_78 = *(undefined8 *)(lVar4 + 0x78);
  local_80 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  local_50 = param_3;
  uStack_48 = param_4;
  local_40 = param_2;
  uStack_38 = param_1;
  FUN_1007a4598(0,&local_a0);
  FUN_10079f5b0(&local_a0,FUN_1007aac58,auStack_60,lVar6,uVar1);
  uVar1 = local_a0;
  uVar5 = (uint)(uStack_98 >> 0x3e);
  if (uVar5 == 0) {
    _swift_continuation_throwingResume(local_a0);
  }
  else if (uVar5 == 1) {
    uVar7 = uStack_98 & 0x3fffffffffffffff;
    puVar2 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    puVar3 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar3 = uVar7;
    _swift_continuation_throwingResumeWithError(uVar1,puVar2);
  }
  return;
}



/* Address: 0x1007aaa4c | FUN_1007aaa4c */

void FUN_1007aaa4c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  local_70 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_1007a1350(0,&local_90);
  FUN_1007a2fac();
  _swift_endAccess(auStack_58);
  *param_1 = param_3;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x1007aaaec | FUN_1007aaaec */

void FUN_1007aaaec(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess((long)param_2 + *(long *)(lVar2 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar2 + 0x58);
  local_90 = *(undefined8 *)(lVar2 + 0x50);
  uStack_78 = *(undefined8 *)(lVar2 + 0x68);
  uStack_80 = *(undefined8 *)(lVar2 + 0x60);
  uStack_68 = *(undefined8 *)(lVar2 + 0x78);
  local_70 = *(undefined8 *)(lVar2 + 0x70);
  uVar1 = 0;
  FUN_1007a1350(0,&local_90);
  FUN_1007a31b4(param_1,param_3,uVar1);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1007aab84 | FUN_1007aab84 */

void FUN_1007aab84(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar2 = &local_90;
  lVar4 = *param_2;
  uVar3 = 0x21;
  _swift_beginAccess((long)param_2 + *(long *)(lVar4 + 0x88),auStack_58,0x21,0);
  uStack_88 = *(undefined8 *)(lVar4 + 0x58);
  local_90 = *(undefined8 *)(lVar4 + 0x50);
  uStack_78 = *(undefined8 *)(lVar4 + 0x68);
  uStack_80 = *(undefined8 *)(lVar4 + 0x60);
  uStack_68 = *(undefined8 *)(lVar4 + 0x78);
  local_70 = *(undefined8 *)(lVar4 + 0x70);
  uVar1 = 0;
  FUN_1007a1350();
  FUN_1007a3564();
  _swift_endAccess(auStack_58);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1007aac20 | FUN_1007aac20 */

void FUN_1007aac20(void)

{
  long unaff_x20;
  
  FUN_1007aab84(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007aac3c | FUN_1007aac3c */

void FUN_1007aac3c(void)

{
  long unaff_x20;
  
  FUN_1007aaaec(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007aac58 | FUN_1007aac58 */

void FUN_1007aac58(void)

{
  long unaff_x20;
  
  FUN_1007aaa4c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007aac74 | FUN_1007aac74 */

void FUN_1007aac74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar10 = *unaff_x20;
  uVar6 = *(undefined8 *)(lVar10 + 0x60);
  local_c8 = uVar6;
  local_b0 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_a8 = CONCAT71(extraout_var,OVar4.value);
  local_b8 = *(long *)(local_a8 + -8);
  lVar9 = (long)&local_f0 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar10 + 0x50);
  lVar2 = *(long *)(lVar10 + 0x58);
  local_d0 = *(long *)(lVar2 + -8);
  lVar13 = lVar9 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar1 + -8);
  lVar8 = lVar13 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c0 = *(undefined8 *)(lVar10 + 0x70);
  uVar3 = *(undefined8 *)(lVar10 + 0x78);
  uStack_e8 = *(undefined8 *)(lVar10 + 0x70);
  local_f0 = *(undefined8 *)(lVar10 + 0x68);
  lVar10 = 0;
  local_90 = lVar1;
  lStack_88 = lVar2;
  local_80 = uVar6;
  local_78 = local_f0;
  uStack_70 = uStack_e8;
  local_68 = uVar3;
  FUN_1007a1350(0,&local_90);
  lVar12 = *(long *)(lVar10 + -8);
  lVar11 = lVar8 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined4 *)0x4;
  local_d8 = lVar10;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar5 = 0;
  unaff_x20[2] = (long)puVar5;
  (**(code **)(lVar7 + 0x10))(lVar8,local_b0,lVar1);
  (**(code **)(local_d0 + 0x10))(lVar13,local_a0,lVar2);
  (**(code **)(local_b8 + 0x10))(lVar9,local_98,local_a8);
  uVar6 = local_f0;
  *(undefined8 *)(lVar11 + -0x10) = uVar3;
  FUN_1007a2a6c(lVar11,lVar8,lVar13,lVar9,lVar1,lVar2,local_c8,uVar6,local_c0);
  (**(code **)(lVar12 + 0x20))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88),lVar11,local_d8);
  return;
}



/* Address: 0x1007aae2c | FUN_1007aae2c */

void FUN_1007aae2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_1007aac74(param_1,param_2,param_3);
  return;
}



/* Address: 0x1007aae7c | thunk_FUN_1007a8fc4 */

void thunk_FUN_1007a8fc4(void)

{
  FUN_1007a8fc4();
  return;
}



/* Address: 0x1007aae80 | FUN_1007aae80 */

void FUN_1007aae80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::_withTaskCancellationHandler();
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1005f4884(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1007aafc8 | FUN_1007aafc8 */

void FUN_1007aafc8(ulong param_1,_StringGuts param_2,char *param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 uVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  uVar7 = *unaff_x20;
  pvVar4 = (void *)(ulong)(byte)unaff_x20[3];
  if ((byte)unaff_x20[3] == 1) {
    *unaff_x20 = uVar7;
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1007b7a94();
    }
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ab090);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar7 + 0x10) <= param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ab094);
      (*pcVar1)();
    }
    lVar6 = uVar7 + param_4 * 0x18;
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x20) = param_1;
    *(undefined **)(lVar6 + 0x28) = param_2.unknown;
    *(char **)(lVar6 + 0x30) = param_3;
    _swift_release(uVar3);
    *unaff_x20 = uVar7;
    uVar5 = 1;
  }
  else {
    if (param_4 != 0) {
      Swift::_StringGuts::grow(0x16,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar8 = Swift::CustomStringConvertible::get_description();
      SVar10.bridgeObject = pvVar4;
      SVar10.str = param_3;
      Swift::String::append(SVar8,SVar10);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      SVar8.bridgeObject = (void *)0xee0073646e756f62;
      SVar8.str = (char *)0x20666f2074756f20;
      SVar11.bridgeObject = pvVar4;
      SVar11.str = param_3;
      Swift::String::append(SVar8,SVar11);
      SVar9.bridgeObject = (void *)0x2;
      SVar9.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar9,(StaticString)0x207865646e69,0xe600000000000000,
                 0xdb16d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ab154);
      (*pcVar1)();
    }
    FUN_1007b8ba0(uVar7,unaff_x20[1],unaff_x20[2]);
    uVar5 = 0;
    *unaff_x20 = param_1;
    unaff_x20[1] = (ulong)param_2.unknown;
    unaff_x20[2] = (ulong)param_3;
  }
  *(undefined1 *)(unaff_x20 + 3) = uVar5;
  return;
}



/* Address: 0x1007ab154 | FUN_1007ab154 */

undefined * FUN_1007ab154(ulong param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  ulong local_78;
  long local_70;
  long local_68;
  
  local_70 = *(long *)(param_1 + 0x20);
  lVar17 = *(long *)(param_1 + 0x18) + local_70;
  local_68 = *(long *)(param_1 + 0x10);
  if (lVar17 <= *(long *)(param_1 + 0x10)) {
    local_68 = lVar17;
  }
  local_78 = param_1;
  if ((local_70 == local_68) &&
     (uVar10 = param_1, FUN_1007b8868(), uVar11 = local_78, (uVar10 & 1) == 0)) {
    _swift_release(param_3);
    _swift_release(uVar11);
    puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar1 = local_68;
    uVar10 = local_78;
    lVar17 = local_70 + 1;
    lVar15 = local_78 + local_70 * 0x20;
    uVar6 = *(undefined1 *)(lVar15 + 0x40);
    uVar11 = *(ulong *)(lVar15 + 0x30);
    uVar3 = *(undefined8 *)(lVar15 + 0x38);
    uStack_98 = *(undefined8 *)(lVar15 + 0x30);
    local_a0 = *(undefined8 *)(lVar15 + 0x28);
    local_90 = uVar3;
    local_88 = uVar6;
    local_70 = lVar17;
    _swift_retain();
    _swift_retain(param_3);
    FUN_1007b8e0c(uVar11,uVar3,uVar6);
    (*param_2)(&local_b8,&local_a0);
    FUN_1007b8df8(uVar11,uVar3,uVar6);
    uVar6 = local_a8;
    uVar3 = uStack_b0;
    puVar16 = local_b8;
    if ((lVar17 == lVar1) &&
       (FUN_1007b8868(), uVar10 = local_78, lVar17 = local_70, (uVar11 & 1) == 0)) {
      _swift_release(param_3);
      _swift_release(param_1);
      uVar11 = local_78;
      _swift_release(param_3);
      _swift_release(uVar11);
    }
    else {
      lVar15 = lVar17 + 1;
      lVar17 = uVar10 + lVar17 * 0x20;
      uVar2 = *(undefined8 *)(lVar17 + 0x30);
      uVar4 = *(undefined8 *)(lVar17 + 0x38);
      uStack_98 = *(undefined8 *)(lVar17 + 0x30);
      local_a0 = *(undefined8 *)(lVar17 + 0x28);
      uVar7 = *(undefined1 *)(lVar17 + 0x40);
      local_90 = uVar4;
      local_88 = uVar7;
      local_70 = lVar15;
      FUN_1007b8e0c(uVar2,uVar4,uVar7);
      (*param_2)(&local_b8,&local_a0);
      FUN_1007b8df8(uVar2,uVar4,uVar7);
      uVar7 = local_a8;
      uVar2 = uStack_b0;
      puVar9 = local_b8;
      puVar12 = (undefined *)0x0;
      FUN_1007b7734(0,0,0,PTR___swiftEmptyArrayStorage_100eae0d8);
      FUN_1007b8e0c(puVar16,uVar3,uVar6);
      uVar11 = *(ulong *)(puVar12 + 0x10);
      lVar17 = uVar11 + 1;
      puVar14 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar11) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_1007b7734(puVar14,lVar17,1,puVar12);
      }
      *(long *)(puVar14 + 0x10) = lVar17;
      *(undefined **)(puVar14 + uVar11 * 0x18 + 0x20) = puVar16;
      *(undefined8 *)(puVar14 + uVar11 * 0x18 + 0x28) = uVar3;
      puVar14[uVar11 * 0x18 + 0x30] = uVar6;
      puVar12 = puVar9;
      FUN_1007b8e0c(puVar9,uVar2,uVar7);
      lVar1 = uVar11 + 2;
      if ((long)(*(ulong *)(puVar14 + 0x18) >> 1) < lVar1) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_1007b7734(puVar12,lVar1,1,puVar14);
        puVar14 = puVar12;
      }
      *(long *)(puVar14 + 0x10) = lVar1;
      *(undefined **)(puVar14 + lVar17 * 0x18 + 0x20) = puVar9;
      *(undefined8 *)(puVar14 + lVar17 * 0x18 + 0x28) = uVar2;
      puVar14[lVar17 * 0x18 + 0x30] = uVar7;
      while ((lVar15 != local_68 || (FUN_1007b8868(), ((ulong)puVar12 & 1) != 0))) {
        lVar15 = local_70 + 1;
        lVar17 = local_78 + local_70 * 0x20;
        uVar8 = *(undefined1 *)(lVar17 + 0x40);
        uVar4 = *(undefined8 *)(lVar17 + 0x30);
        uVar5 = *(undefined8 *)(lVar17 + 0x38);
        uStack_98 = *(undefined8 *)(lVar17 + 0x30);
        local_a0 = *(undefined8 *)(lVar17 + 0x28);
        local_90 = uVar5;
        local_88 = uVar8;
        local_70 = lVar15;
        FUN_1007b8e0c(uVar4,uVar5,uVar8);
        (*param_2)(&local_b8,&local_a0);
        FUN_1007b8df8(uVar4,uVar5,uVar8);
        uVar8 = local_a8;
        uVar4 = uStack_b0;
        puVar12 = local_b8;
        FUN_1007b8e0c(local_b8,uStack_b0,local_a8);
        uVar11 = *(ulong *)(puVar14 + 0x10);
        puVar13 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar11) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_1007b7734(puVar13,uVar11 + 1,1,puVar14);
        }
        *(ulong *)(puVar13 + 0x10) = uVar11 + 1;
        *(undefined **)(puVar13 + uVar11 * 0x18 + 0x20) = puVar12;
        *(undefined8 *)(puVar13 + uVar11 * 0x18 + 0x28) = uVar4;
        puVar13[uVar11 * 0x18 + 0x30] = uVar8;
        FUN_1007b8df8(puVar12,uVar4,uVar8);
        puVar14 = puVar13;
      }
      FUN_1007b8df8(puVar16,uVar3,uVar6);
      FUN_1007b8df8(puVar9,uVar2,uVar7);
      _swift_release(param_3);
      _swift_release(param_1);
      uVar11 = local_78;
      _swift_release(param_3);
      _swift_release(uVar11);
      puVar16 = puVar14;
    }
  }
  return puVar16;
}



/* Address: 0x1007ab520 | FUN_1007ab520 */

void FUN_1007ab520(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  if ((char)uVar1 == '\x01') {
    lVar6 = *(long *)(uVar8 + 0x10);
    _swift_retain(param_3);
    if (lVar6 == 0) {
      FUN_1007b8ba0(uVar8,uVar10,uVar9,1);
      *unaff_x20 = param_1;
      unaff_x20[1] = param_2;
      unaff_x20[2] = param_3;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    else {
      FUN_1007ab6e4(param_1,param_2,param_3);
      *unaff_x20 = uVar8;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)(unaff_x20 + 3) = 1;
    }
  }
  else {
    _swift_retain(param_3);
    uVar2 = 0;
    FUN_1007b794c(0,2,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar4 = *(ulong *)(uVar2 + 0x10);
    uVar7 = *(ulong *)(uVar2 + 0x18);
    lVar6 = uVar4 + 1;
    _swift_retain(uVar9);
    uVar3 = uVar2;
    if (uVar7 >> 1 <= uVar4) {
      uVar3 = (ulong)(1 < uVar7);
      FUN_1007b794c(uVar3,lVar6,1,uVar2);
    }
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = uVar3 + uVar4 * 0x18;
    *(ulong *)(lVar5 + 0x20) = uVar8;
    *(ulong *)(lVar5 + 0x28) = uVar10;
    *(ulong *)(lVar5 + 0x30) = uVar9;
    *unaff_x20 = uVar3;
    uVar7 = *(ulong *)(uVar3 + 0x18);
    lVar5 = uVar4 + 2;
    _swift_retain(param_3);
    uVar4 = uVar3;
    if ((long)(uVar7 >> 1) < lVar5) {
      uVar4 = (ulong)(1 < uVar7);
      FUN_1007b794c(uVar4,lVar5,1,uVar3);
      *unaff_x20 = uVar4;
    }
    *(long *)(uVar4 + 0x10) = lVar5;
    lVar6 = uVar4 + lVar6 * 0x18;
    *(ulong *)(lVar6 + 0x20) = param_1;
    *(ulong *)(lVar6 + 0x28) = param_2;
    *(ulong *)(lVar6 + 0x30) = param_3;
    _swift_release(param_3);
    FUN_1007b8ba0(uVar8,uVar10,uVar9,(char)uVar1);
    *unaff_x20 = uVar4;
    *(undefined1 *)(unaff_x20 + 3) = 1;
  }
  return;
}



/* Address: 0x1007ab6e4 | FUN_1007ab6e4 */

void FUN_1007ab6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  
  lVar4 = *unaff_x20;
  uVar5 = *(ulong *)(lVar4 + 0x10);
  lVar3 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar3 == 0) || (uVar2 = *(ulong *)(lVar4 + 0x18) >> 1, uVar2 <= uVar5)) {
    FUN_1007b794c();
    uVar2 = *(ulong *)(lVar3 + 0x18) >> 1;
    lVar4 = lVar3;
  }
  uVar5 = *(ulong *)(lVar4 + 0x10);
  if (uVar2 != uVar5) {
    lVar3 = lVar4 + uVar5 * 0x18;
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    *(undefined8 *)(lVar3 + 0x30) = param_3;
    *(ulong *)(lVar4 + 0x10) = uVar5 + 1;
    if (uVar2 - uVar5 != 1) {
      FUN_10041582c(0,0,0);
    }
    *unaff_x20 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ab79c);
  (*pcVar1)();
}



/* Address: 0x1007ab79c | FUN_1007ab79c */

undefined1  [16] FUN_1007ab79c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Address: 0x1007ab7cc | FUN_1007ab7cc */

undefined1  [16] FUN_1007ab7cc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x29;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0xea0000000000286b;
  auVar1._0_8_ = 0x72616d7265746177;
  return auVar1;
}



/* Address: 0x1007ab850 | FUN_1007ab850 */

void FUN_1007ab850(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (param_2 <= param_3) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 0;
    param_1[3] = param_4;
    param_1[4] = param_5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ab86c);
  (*pcVar1)();
}



/* Address: 0x1007ab86c | FUN_1007ab86c */

bool FUN_1007ab86c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  Slice SVar5;
  long lVar6;
  __int64 _Var7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_4 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lStack_b0 = CONCAT71(extraout_var,OVar2.value);
  local_b8 = *(long *)(lStack_b0 + -8);
  lVar11 = (long)&local_c0 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1007abb04(0,lVar10);
  lVar9 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar11 - uVar8;
  local_78 = param_1;
  uStack_70 = param_2;
  local_68 = param_3;
  if (*(code **)(unaff_x20 + 0x18) == (code *)0x0) {
    uVar4 = 0xff;
    FUN_1006883a0(0xff,lVar3);
    _swift_getWitnessTable(0x100c6d780,uVar4);
    SVar5 = Swift::Slice::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar5.unknown);
    _Var7 = (extension_Swift)::Swift::Collection::get_count();
    lVar3 = *(long *)(unaff_x20 + 0x10) + _Var7;
    if (SCARRY8(*(long *)(unaff_x20 + 0x10),_Var7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007abb00);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  else {
    local_a8 = *(undefined8 *)(unaff_x20 + 0x20);
    pcStack_a0 = *(code **)(unaff_x20 + 0x18);
    local_98 = param_1;
    uStack_90 = param_2;
    local_88 = param_3;
    FUN_100011128();
    uVar4 = 0xff;
    FUN_1006883a0(0xff,lVar3);
    local_c0 = param_3;
    _swift_retain(param_3);
    _swift_getWitnessTable(0x100c6d780,uVar4);
    SVar5 = Swift::Slice::typeMetadataAccessor();
    Swift::Slice::_get_startIndex(SVar5);
    while (Swift::Slice::_get_endIndex(SVar5), local_80 != local_98) {
      Swift::Slice::_get_subscript((Slice)&local_80);
      Swift::Slice::_formIndex((Slice)&local_80);
      (**(code **)(lVar9 + 0x20))(lVar12,lVar12 - uVar8,lVar3);
      (**(code **)(local_b8 + 0x10))(lVar11,lVar12,lStack_b0);
      lVar13 = *(long *)(lVar10 + -8);
      lVar6 = lVar11;
      (**(code **)(lVar13 + 0x30))(lVar11,1,lVar10);
      if ((int)lVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007abb04);
        (*pcVar1)();
      }
      lVar6 = lVar11;
      (*pcStack_a0)();
      (**(code **)(lVar9 + 8))(lVar12,lVar3);
      (**(code **)(lVar13 + 8))(lVar11,lVar10);
      if (SCARRY8(*(long *)(unaff_x20 + 0x10),lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007abafc);
        (*pcVar1)();
      }
      *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + lVar6;
    }
    _swift_release(local_c0);
    FUN_100004550(pcStack_a0,local_a8);
    lVar3 = *(long *)(unaff_x20 + 0x10);
  }
  if (-1 < lVar3) {
    return lVar3 < *(long *)(unaff_x20 + 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007abaf8);
  (*pcVar1)();
}



/* Address: 0x1007abb04 | FUN_1007abb04 */

void FUN_1007abb04(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007abb10 | FUN_1007abb10 */

bool FUN_1007abb10(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar6 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar7 = (code *)unaff_x20[3];
  if (pcVar7 == (code *)0x0) {
    lVar3 = unaff_x20[2] + -1;
    if (SBORROW8(unaff_x20[2],1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007abc20);
      (*pcVar7)();
    }
  }
  else {
    lVar4 = unaff_x20[4];
    (**(code **)(lVar3 + 0x10))(puVar6,param_1,CONCAT71(extraout_var,OVar1.value));
    lVar3 = *(long *)(lVar5 + -8);
    puVar2 = puVar6;
    (**(code **)(lVar3 + 0x30))(puVar6,1,lVar5);
    if ((int)puVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007abc24);
      (*pcVar7)();
    }
    _swift_retain(lVar4);
    puVar2 = puVar6;
    (*pcVar7)();
    FUN_100004550(pcVar7,lVar4);
    (**(code **)(lVar3 + 8))(puVar6,lVar5);
    lVar3 = unaff_x20[2] - (long)puVar2;
    if (SBORROW8(unaff_x20[2],(long)puVar2)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007abbdc);
      (*pcVar7)();
    }
  }
  unaff_x20[2] = lVar3;
  if (-1 < lVar3) {
    return lVar3 < *unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1007abc1c);
  (*pcVar7)();
}



/* Address: 0x1007abc24 | thunk_FUN_1007ab7cc */

void thunk_FUN_1007ab7cc(void)

{
  FUN_1007ab7cc();
  return;
}



/* Address: 0x1007abc28 | FUN_1007abc28 */

void FUN_1007abc28(long param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  (**(code **)(*(long *)(param_1 + -8) + 0x20))(&local_80);
  uStack_48 = uStack_78;
  local_50 = local_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  local_30 = local_60;
  FUN_1007ab7cc();
  return;
}



/* Address: 0x1007abc78 | FUN_1007abc78 */

uint FUN_1007abc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[1];
  uVar3 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar1 = 0;
  FUN_1007b8928(0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  FUN_1007ab86c(param_1,param_2,param_3,uVar1);
  unaff_x20[1] = uVar4;
  *unaff_x20 = uVar3;
  unaff_x20[3] = uVar6;
  unaff_x20[2] = uVar5;
  unaff_x20[4] = uVar2;
  return (uint)param_1 & 1;
}



/* Address: 0x1007abd04 | FUN_1007abd04 */

uint FUN_1007abd04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[1];
  uVar3 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar1 = 0;
  FUN_1007b8928(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  FUN_1007abb10(param_1,uVar1);
  unaff_x20[1] = uVar4;
  *unaff_x20 = uVar3;
  unaff_x20[3] = uVar6;
  unaff_x20[2] = uVar5;
  unaff_x20[4] = uVar2;
  return (uint)param_1 & 1;
}



/* Address: 0x1007abd7c | FUN_1007abd7c */

void FUN_1007abd7c(long param_1)

{
  undefined1 auStack_48 [40];
  
  (**(code **)(*(long *)(param_1 + -8) + 0x20))(auStack_48);
  FUN_1007abc28(param_1);
  return;
}



/* Address: 0x1007abdc4 | FUN_1007abdc4 */

undefined1  [16] FUN_1007abdc4(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x68);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1007abddc | FUN_1007abddc */

undefined8 FUN_1007abddc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = param_1;
  FUN_1007b8a5c();
  lVar2 = 0;
  FUN_1007b8a94(0,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return uVar1;
}



/* Address: 0x1007abe30 | FUN_1007abe30 */

undefined8 FUN_1007abe30(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  uVar1 = param_1;
  FUN_1007b8934();
  lVar2 = 0;
  FUN_1007b8a94(0,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58),
                *(undefined8 *)(lVar3 + 0x60));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return uVar1;
}



/* Address: 0x1007abe88 | FUN_1007abe88 */

void FUN_1007abe88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 uStack_b8;
  uint6 uStack_b6;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = (undefined8 *)0x0;
  FUN_1007abb04();
  thunk_FUN_100683d64();
  puVar3 = puVar2;
  FUN_1006883ac();
  uVar6 = *puVar3;
  lVar4 = 0;
  FUN_1007b8a94(0,param_3,param_4,param_5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(&local_e0,param_2,lVar4);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uStack_b8 = 0;
  local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 1;
  uStack_88 = 0;
  local_70 = 1;
  local_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar6;
  param_1[0xf] = 0;
  param_1[0xe] = CONCAT71(uStack_6f,1);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[5] = (ulong)uStack_b6 << 0x10;
  param_1[4] = local_c0;
  param_1[7] = 0;
  param_1[6] = puVar1;
  param_1[9] = CONCAT71(uStack_97,1);
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = puVar2;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  uVar5 = 0;
  local_90 = puVar2;
  local_80 = uVar6;
  uStack_78 = uVar6;
  FUN_1007b8aa0(0,param_3,param_4,param_5);
  _swift_storeEnumTagMultiPayload(param_1,uVar5,0);
  _swift_retain_n(uVar6,2);
  return;
}



/* Address: 0x1007abfc8 | FUN_1007abfc8 */

void FUN_1007abfc8(code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar5 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FUN_1007b8cc4(0xff,uVar2,uVar3,uVar6);
  Synchronization::Mutex::typeMetadataAccessor();
  uVar4 = 0;
  FUN_1007b8cc4(0,uVar2,uVar3,uVar6);
  FUN_1007ac0dc(param_1,param_2,param_3,uVar4);
  FUN_1007b9b38(0xff,uVar2,uVar3,uVar6);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  if (param_1 != (code *)0x0) {
    _swift_retain(param_2);
    (*param_1)();
    FUN_100004550(param_1,param_2);
    FUN_100004550(param_1,param_2);
    return;
  }
  return;
}



/* Address: 0x1007ac0dc | FUN_1007ac0dc */

undefined1  [16] FUN_1007ac0dc(undefined *param_1,long param_2,_StringGuts param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  undefined1 auVar7 [8];
  StaticString file;
  undefined1 *line;
  code *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [8];
  undefined *puVar21;
  undefined8 unaff_x20;
  undefined8 *puVar22;
  undefined8 uVar23;
  void *pvVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 auStack_190 [2];
  undefined8 local_180;
  long *local_178;
  long local_170;
  long alStack_168 [6];
  undefined1 local_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *apuStack_f8 [4];
  undefined8 local_d8;
  char *local_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong local_80;
  StaticString local_78;
  undefined1 *local_70;
  
  uVar11 = *(undefined8 *)(param_4 + 0x10);
  uVar23 = *(undefined8 *)(param_4 + 0x18);
  pvVar24 = *(void **)(param_4 + 0x20);
  pcVar9 = (char *)0x0;
  FUN_1007b8aac(0,uVar11,uVar23,pvVar24);
  lVar19 = *(long *)(pcVar9 + -8);
  lVar26 = (long)&local_180 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  FUN_1007b8aa0(0,uVar11,uVar23);
  uVar17 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar25 = (undefined8 *)(lVar26 - uVar17);
  puVar22 = (undefined8 *)((long)puVar25 - uVar17);
  local_118 = *(undefined1 (*) [8])(*(long *)(lVar10 + -8) + 0x20);
  (*(code *)local_118)(puVar22);
  puVar16 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar10);
  auVar20 = local_118;
  if ((int)puVar16 == 0) {
    auStack_108 = (undefined1  [8])puVar22[1];
    local_110 = (undefined1  [8])*puVar22;
    apuStack_f8[0] = (undefined *)puVar22[3];
    auStack_100 = (undefined1  [8])puVar22[2];
    apuStack_f8[2] = (undefined *)puVar22[5];
    apuStack_f8[1] = (undefined *)puVar22[4];
    puVar14 = (undefined *)puVar22[6];
    pcVar13 = (char *)puVar22[8];
    bStack_c8 = *(byte *)(puVar22 + 9);
    pvVar24 = (void *)(ulong)bStack_c8;
    apuStack_f8[3] = puVar14;
    local_d8 = puVar22[7];
    local_d0 = pcVar13;
    uStack_bf = (undefined7)*(undefined8 *)((long)puVar22 + 0x51);
    uStack_b8 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x51) >> 0x38);
    uStack_c7 = (undefined7)*(undefined8 *)((long)puVar22 + 0x49);
    uStack_c0 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x49) >> 0x38);
    uStack_87 = (undefined7)((ulong)puVar22[0x11] >> 8);
    uStack_8f = (undefined7)*(undefined8 *)((long)puVar22 + 0x81);
    uStack_88 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x81) >> 0x38);
    local_97 = (undefined7)*(undefined8 *)((long)puVar22 + 0x79);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x79) >> 0x38);
    uStack_9f = (undefined7)*(undefined8 *)((long)puVar22 + 0x71);
    uStack_98 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x71) >> 0x38);
    local_a7 = (undefined7)*(undefined8 *)((long)puVar22 + 0x69);
    uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x69) >> 0x38);
    uStack_af = (undefined7)*(undefined8 *)((long)puVar22 + 0x61);
    uStack_a8 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x61) >> 0x38);
    local_b7 = (undefined7)*(undefined8 *)((long)puVar22 + 0x59);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar22 + 0x59) >> 0x38);
    if (param_2 == 0) {
      if (bStack_c8 == 1) {
        uVar17 = *(ulong *)(puVar14 + 0x10);
        local_78.unknown = puVar14;
        if (uVar17 != 0) {
          lVar19 = 0x20;
          uVar18 = 0;
LAB_1007ac3f0:
          uVar28 = uVar18 + 1;
          uVar27 = uVar17;
          if (*(undefined **)(puVar14 + lVar19) != param_1) goto code_r0x0001007ac400;
          if (uVar17 - 1 != uVar18) {
            lVar19 = lVar19 + -0x20;
            do {
              if (uVar17 <= uVar28) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9d4);
                (*pcVar8)();
              }
              puVar21 = *(undefined **)(puVar14 + lVar19 + 0x38);
              if (puVar21 != param_1) {
                if (uVar28 != uVar18) {
                  if (uVar17 <= uVar18) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9dc);
                    (*pcVar8)();
                  }
                  puVar16 = (undefined8 *)(puVar14 + uVar18 * 0x18 + 0x20);
                  uVar11 = *puVar16;
                  alStack_168[4] = puVar16[2];
                  alStack_168[3] = puVar16[1];
                  uVar23 = *(undefined8 *)(puVar14 + lVar19 + 0x48);
                  auStack_128 = *(undefined1 (*) [8])(puVar14 + lVar19 + 0x48);
                  local_130 = *(undefined1 (*) [8])(puVar14 + lVar19 + 0x40);
                  _swift_retain(puVar16[2]);
                  _swift_retain(uVar23);
                  puVar12 = puVar14;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar12 & 1) == 0) {
                    FUN_1007b7a94();
                  }
                  uVar23 = *(undefined8 *)(puVar14 + uVar18 * 0x18 + 0x30);
                  *(undefined **)(puVar14 + uVar18 * 0x18 + 0x20) = puVar21;
                  *(undefined1 (*) [8])(puVar14 + uVar18 * 0x18 + 0x30) = auStack_128;
                  *(undefined1 (*) [8])(puVar14 + uVar18 * 0x18 + 0x28) = local_130;
                  _swift_release(uVar23);
                  if (*(ulong *)(puVar14 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9e4);
                    (*pcVar8)();
                  }
                  uVar23 = *(undefined8 *)(puVar14 + lVar19 + 0x48);
                  *(undefined8 *)(puVar14 + lVar19 + 0x38) = uVar11;
                  *(long *)(puVar14 + lVar19 + 0x48) = alStack_168[4];
                  *(long *)(puVar14 + lVar19 + 0x40) = alStack_168[3];
                  _swift_release(uVar23);
                }
                uVar18 = uVar18 + 1;
              }
              uVar28 = uVar28 + 1;
              uVar17 = *(ulong *)(puVar14 + 0x10);
              lVar19 = lVar19 + 0x18;
              uVar27 = uVar28;
            } while (uVar28 != uVar17);
          }
          if ((long)uVar27 < (long)uVar18) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9ec);
            (*pcVar8)();
          }
          uVar17 = uVar18;
          if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9f4);
            (*pcVar8)();
          }
          goto LAB_1007ac6d4;
        }
        uVar17 = 0;
        uVar27 = 0;
LAB_1007ac6d4:
        if (SCARRY8(uVar27,uVar17 - uVar27)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9fc);
          (*pcVar8)();
        }
        puVar21 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar21 == 0) ||
           ((long)(*(ulong *)(puVar14 + 0x18) >> 1) < (long)(uVar27 + (uVar17 - uVar27)))) {
          local_78.unknown = puVar14;
          FUN_1007b794c();
          puVar14 = puVar21;
        }
        local_78.unknown = puVar14;
        FUN_1007b8ab8(uVar17,uVar27,0);
        local_d8 = 0;
        local_d0 = (char *)0x0;
        bStack_c8 = 1;
        auVar20 = local_118;
        apuStack_f8[3] = puVar14;
      }
      else if (puVar14 == param_1) {
        FUN_1007b8ba0(param_1);
        apuStack_f8[3] = PTR___swiftEmptyArrayStorage_100eae0d8;
        bStack_c8 = 1;
      }
    }
    else {
      uVar17 = 0;
      puVar16 = (undefined8 *)(puVar14 + 0x20);
      if (bStack_c8 == 1) goto LAB_1007ac2cc;
      while (uVar17 == 0) {
        if (puVar14 == param_1) {
          uVar17 = 0;
LAB_1007ac570:
          puVar14 = &DAT_100f01230;
          _swift_allocObject(&DAT_100f01230,0x20,7);
          *(long *)(puVar14 + 0x10) = param_2;
          *(undefined **)(puVar14 + 0x18) = param_3.unknown;
          FUN_100011128(param_2,param_3.unknown);
          FUN_1007aafc8(param_1,thunk_FUN_1000386a0,puVar14,uVar17);
          auVar20 = local_118;
          goto LAB_1007ac748;
        }
        uVar18 = 1;
        uVar17 = 0;
        while( true ) {
          if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9c4);
            (*pcVar8)();
          }
          uVar17 = uVar17 + 1;
          puVar16 = puVar16 + 3;
          if (bStack_c8 != 1) break;
LAB_1007ac2cc:
          uVar18 = *(ulong *)(puVar14 + 0x10);
          if (uVar17 == uVar18) goto LAB_1007ac4d8;
          if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9cc);
            (*pcVar8)();
          }
          if ((undefined *)*puVar16 == param_1) goto LAB_1007ac570;
        }
      }
      if (uVar17 != 1) {
        local_78.unknown = (undefined *)0x0;
        local_70 = (undefined1 *)0xe000000000000000;
        FUN_100011128(param_2);
        Swift::_StringGuts::grow(0x16,param_3);
        _swift_bridgeObjectRelease(local_70);
        local_80 = uVar17;
LAB_1007aca80:
        local_70 = &DAT_e600000000000000;
        local_78.unknown = (undefined *)0x207865646e69;
        SVar30 = Swift::CustomStringConvertible::get_description();
        SVar32.bridgeObject = pvVar24;
        SVar32.str = pcVar13;
        Swift::String::append(SVar30,SVar32);
        _swift_bridgeObjectRelease(SVar30.bridgeObject);
        SVar30.bridgeObject = (void *)0xee0073646e756f62;
        SVar30.str = (char *)0x20666f2074756f20;
        SVar33.bridgeObject = pvVar24;
        SVar33.str = pcVar13;
        Swift::String::append(SVar30,SVar33);
        line = local_70;
        file.unknown = local_78.unknown;
        *(undefined4 *)(puVar22 + -1) = 0;
        puVar22[-2] = 0x9a;
        SVar31.bridgeObject = (void *)0x2;
        SVar31.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar31,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1007acb10);
        (*pcVar8)();
      }
LAB_1007ac4d8:
      puVar14 = &DAT_100f01258;
      _swift_allocObject(&DAT_100f01258,0x20,7);
      *(long *)(puVar14 + 0x10) = param_2;
      *(undefined **)(puVar14 + 0x18) = param_3.unknown;
      FUN_100011128(param_2,param_3.unknown);
      FUN_1007ab520(param_1,thunk_FUN_1000386a0,puVar14);
      _swift_release(puVar14);
      auVar20 = local_118;
    }
LAB_1007ac748:
    uVar11 = CONCAT71(uStack_af,uStack_b0);
    uVar5 = CONCAT71(local_97,uStack_98);
    uVar23 = CONCAT71(uStack_9f,uStack_a0);
    puVar25[0xd] = CONCAT71(local_a7,uStack_a8);
    puVar25[0xc] = uVar11;
    puVar25[0xf] = uVar5;
    puVar25[0xe] = uVar23;
    uVar11 = CONCAT71(uStack_8f,uStack_90);
    puVar25[0x11] = CONCAT71(uStack_87,uStack_88);
    puVar25[0x10] = uVar11;
    uVar11 = local_d8;
    puVar21 = apuStack_f8[3];
    puVar14 = apuStack_f8[1];
    puVar25[5] = apuStack_f8[2];
    puVar25[4] = puVar14;
    puVar25[7] = uVar11;
    puVar25[6] = puVar21;
    pcVar9 = local_d0;
    uVar23 = CONCAT71(local_b7,uStack_b8);
    uVar11 = CONCAT71(uStack_bf,uStack_c0);
    puVar25[9] = CONCAT71(uStack_c7,bStack_c8);
    puVar25[8] = pcVar9;
    puVar25[0xb] = uVar23;
    puVar25[10] = uVar11;
    puVar14 = apuStack_f8[0];
    auVar7 = auStack_100;
    auVar6 = local_110;
    puVar25[1] = auStack_108;
    *puVar25 = auVar6;
    puVar25[3] = puVar14;
    puVar25[2] = auVar7;
    _swift_storeEnumTagMultiPayload(puVar25,lVar10,0);
    (*(code *)auVar20)(unaff_x20,puVar25,lVar10);
LAB_1007ac790:
    param_2 = 0;
  }
  else {
    if ((int)puVar16 == 1) {
      local_130 = *(undefined1 (*) [8])(lVar19 + 0x20);
      pcVar13 = pcVar9;
      (*(code *)local_130)(lVar26,puVar22);
      auVar20 = local_130;
      if (param_2 == 0) {
        plVar1 = (long *)(lVar26 + *(int *)(pcVar9 + 0x38));
        puVar14 = (undefined *)*plVar1;
        plVar15 = plVar1 + 1;
        if ((char)plVar1[3] == '\x01') {
          uVar17 = *(ulong *)(puVar14 + 0x10);
          local_180 = plVar15;
          local_178 = plVar1;
          local_78.unknown = puVar14;
          if (uVar17 != 0) {
            lVar19 = 0x20;
            uVar18 = 0;
LAB_1007ac3a4:
            uVar28 = uVar18 + 1;
            uVar27 = uVar17;
            if (*(undefined **)(puVar14 + lVar19) != param_1) goto code_r0x0001007ac3b4;
            if (uVar17 - 1 != uVar18) {
              lVar19 = lVar19 + -0x20;
              do {
                if (uVar17 <= uVar28) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9d0);
                  (*pcVar8)();
                }
                puVar21 = *(undefined **)(puVar14 + lVar19 + 0x38);
                if (puVar21 != param_1) {
                  if (uVar28 != uVar18) {
                    if (uVar17 <= uVar18) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9d8);
                      (*pcVar8)();
                    }
                    puVar16 = (undefined8 *)(puVar14 + uVar18 * 0x18 + 0x20);
                    alStack_168[1] = *puVar16;
                    alStack_168[0] = puVar16[2];
                    local_170 = puVar16[1];
                    alStack_168[2] = *(long *)(puVar14 + lVar19 + 0x48);
                    alStack_168[4] = *(long *)(puVar14 + lVar19 + 0x48);
                    alStack_168[3] = *(long *)(puVar14 + lVar19 + 0x40);
                    _swift_retain(puVar16[2]);
                    _swift_retain(alStack_168[2]);
                    puVar12 = puVar14;
                    _swift_isUniquelyReferenced_nonNull_native();
                    if (((ulong)puVar12 & 1) == 0) {
                      FUN_1007b7a94();
                    }
                    uVar11 = *(undefined8 *)(puVar14 + uVar18 * 0x18 + 0x30);
                    *(undefined **)(puVar14 + uVar18 * 0x18 + 0x20) = puVar21;
                    *(long *)(puVar14 + uVar18 * 0x18 + 0x30) = alStack_168[4];
                    *(long *)(puVar14 + uVar18 * 0x18 + 0x28) = alStack_168[3];
                    _swift_release(uVar11);
                    if (*(ulong *)(puVar14 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9e0);
                      (*pcVar8)();
                    }
                    uVar11 = *(undefined8 *)(puVar14 + lVar19 + 0x48);
                    *(long *)(puVar14 + lVar19 + 0x38) = alStack_168[1];
                    *(long *)(puVar14 + lVar19 + 0x48) = alStack_168[0];
                    *(long *)(puVar14 + lVar19 + 0x40) = local_170;
                    _swift_release(uVar11);
                  }
                  uVar18 = uVar18 + 1;
                }
                uVar28 = uVar28 + 1;
                uVar17 = *(ulong *)(puVar14 + 0x10);
                lVar19 = lVar19 + 0x18;
                uVar27 = uVar28;
              } while (uVar28 != uVar17);
            }
            if ((long)uVar27 < (long)uVar18) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9e8);
              (*pcVar8)();
            }
            uVar17 = uVar18;
            if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9f0);
              (*pcVar8)();
            }
            goto LAB_1007ac5e8;
          }
          uVar17 = 0;
          uVar27 = 0;
LAB_1007ac5e8:
          if (SCARRY8(uVar27,uVar17 - uVar27)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9f8);
            (*pcVar8)();
          }
          puVar21 = puVar14;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((int)puVar21 == 0) ||
             ((long)(*(ulong *)(puVar14 + 0x18) >> 1) < (long)(uVar27 + (uVar17 - uVar27)))) {
            local_78.unknown = puVar14;
            FUN_1007b794c();
            puVar14 = puVar21;
          }
          local_78.unknown = puVar14;
          FUN_1007b8ab8(uVar17,uVar27,0);
          plVar1 = local_178;
          *local_178 = (long)puVar14;
          *local_180 = 0;
          local_180[1] = 0;
          *(undefined1 *)(plVar1 + 3) = 1;
          auVar20 = local_130;
        }
        else if (puVar14 == param_1) {
          FUN_1007b8ba0(param_1,*plVar15,plVar1[2]);
          *plVar1 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
          *(undefined1 *)(plVar1 + 3) = 1;
        }
      }
      else {
        uVar17 = 0;
        puVar14 = *(undefined **)(lVar26 + *(int *)(pcVar9 + 0x38));
        cVar2 = *(char *)((undefined8 *)(lVar26 + *(int *)(pcVar9 + 0x38)) + 3);
        puVar16 = (undefined8 *)(puVar14 + 0x20);
        if (cVar2 == '\x01') goto LAB_1007ac218;
        while (uVar17 == 0) {
          if (puVar14 == param_1) {
            uVar17 = 0;
LAB_1007ac528:
            puVar14 = &DAT_100f011e0;
            _swift_allocObject(&DAT_100f011e0,0x20,7);
            *(long *)(puVar14 + 0x10) = param_2;
            *(undefined **)(puVar14 + 0x18) = param_3.unknown;
            FUN_100011128(param_2,param_3.unknown);
            FUN_1007aafc8(param_1,FUN_1000386a0,puVar14,uVar17);
            auVar20 = local_130;
            goto LAB_1007ac670;
          }
          uVar18 = 1;
          uVar17 = 0;
          while( true ) {
            if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9c0);
              (*pcVar8)();
            }
            uVar17 = uVar17 + 1;
            puVar16 = puVar16 + 3;
            if (cVar2 != '\x01') break;
LAB_1007ac218:
            uVar18 = *(ulong *)(puVar14 + 0x10);
            if (uVar17 == uVar18) goto LAB_1007ac488;
            if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007ac9c8);
              (*pcVar8)();
            }
            if ((undefined *)*puVar16 == param_1) goto LAB_1007ac528;
          }
        }
        if (uVar17 != 1) {
          local_78.unknown = (undefined *)0x0;
          local_70 = (undefined1 *)0xe000000000000000;
          FUN_100011128(param_2);
          Swift::_StringGuts::grow(0x16,param_3);
          _swift_bridgeObjectRelease(local_70);
          local_80 = uVar17;
          goto LAB_1007aca80;
        }
LAB_1007ac488:
        puVar14 = &DAT_100f01208;
        _swift_allocObject(&DAT_100f01208,0x20,7);
        *(long *)(puVar14 + 0x10) = param_2;
        *(undefined **)(puVar14 + 0x18) = param_3.unknown;
        FUN_100011128(param_2,param_3.unknown);
        FUN_1007ab520(param_1,thunk_FUN_1000386a0,puVar14);
        _swift_release(puVar14);
        auVar20 = local_130;
      }
LAB_1007ac670:
      (*(code *)auVar20)(puVar25,lVar26,pcVar9);
      _swift_storeEnumTagMultiPayload(puVar25,lVar10,1);
      (*(code *)local_118)(unaff_x20,puVar25,lVar10);
      goto LAB_1007ac790;
    }
    uVar3 = *(undefined1 *)((long)puVar22 + 1);
    uVar4 = *(undefined1 *)((long)puVar22 + 2);
    *(undefined1 *)puVar25 = *(undefined1 *)puVar22;
    *(undefined1 *)((long)puVar25 + 1) = uVar3;
    *(undefined1 *)((long)puVar25 + 2) = uVar4;
    _swift_storeEnumTagMultiPayload(puVar25,lVar10,2);
    (*(code *)local_118)();
    if (param_2 != 0) {
      _swift_retain(param_3.unknown);
      goto LAB_1007ac798;
    }
  }
  param_3.unknown = (undefined *)0x0;
LAB_1007ac798:
  auVar29._8_8_ = param_3.unknown;
  auVar29._0_8_ = param_2;
  return auVar29;
code_r0x0001007ac400:
  lVar19 = lVar19 + 0x18;
  uVar18 = uVar28;
  if (uVar17 == uVar28) goto LAB_1007ac6d4;
  goto LAB_1007ac3f0;
code_r0x0001007ac3b4:
  lVar19 = lVar19 + 0x18;
  uVar18 = uVar28;
  if (uVar17 == uVar28) goto LAB_1007ac5e8;
  goto LAB_1007ac3a4;
}



/* Address: 0x1007acb10 | FUN_1007acb10 */

void FUN_1007acb10(void)

{
  FUN_1007ad074(FUN_1007acb34,FUN_1007ba0a8,FUN_1007c0708,thunk_FUN_1007c0590);
  return;
}



/* Address: 0x1007acb34 | FUN_1007acb34 */

void FUN_1007acb34(ulong *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  Optional OVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x20;
  code *pcVar12;
  byte bVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uStack_120;
  ulong *local_118 [2];
  ulong local_100 [5];
  undefined8 uStack_d8;
  ulong local_d0 [3];
  ulong auStack_b8 [8];
  ulong uStack_78;
  
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  puVar7 = *(ulong **)(param_2 + 0x18);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = 0;
  local_118[1] = param_1;
  FUN_1007b8aac(0,uVar9,puVar7,uVar17);
  lVar11 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined1 *)((long)&uStack_120 + lVar8);
  lVar6 = 0;
  local_118[0] = puVar7;
  FUN_1007b8aa0(0,uVar9,puVar7,uVar17);
  uVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (ulong *)(puVar20 + -uVar10);
  puVar18 = (ulong *)((long)puVar15 - uVar10);
  pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x20);
  (*pcVar14)(puVar18);
  puVar7 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar6);
  if ((int)puVar7 == 0) {
    auStack_b8[4] = puVar18[0xd];
    auStack_b8[3] = puVar18[0xc];
    auStack_b8[6] = puVar18[0xf];
    auStack_b8[5] = puVar18[0xe];
    uStack_78 = puVar18[0x11];
    auStack_b8[7] = puVar18[0x10];
    uVar10 = puVar18[5];
    uStack_d8 = uVar10;
    uVar10 = uStack_d8;
    local_100[4] = puVar18[4];
    local_d0[1] = puVar18[7];
    local_d0[0] = puVar18[6];
    auStack_b8[0] = puVar18[9];
    local_d0[2] = puVar18[8];
    auStack_b8[2] = puVar18[0xb];
    auStack_b8[1] = puVar18[10];
    local_100[1] = puVar18[1];
    local_100[0] = *puVar18;
    local_100[3] = puVar18[3];
    local_100[2] = puVar18[2];
    uStack_d8._1_1_ = (char)(uVar10 >> 8);
    if (uStack_d8._1_1_ != '\x01') {
      uStack_d8._0_1_ = (undefined1)uVar10;
      *(undefined1 *)puVar15 = (undefined1)uStack_d8;
      uStack_d8 = uVar10;
      *(undefined2 *)((long)puVar15 + 1) = 0x100;
      _swift_storeEnumTagMultiPayload(puVar15,lVar6,2);
      (*pcVar14)(unaff_x20,puVar15,lVar6);
      uVar10 = auStack_b8[3];
      _swift_retain();
      pcVar14 = thunk_FUN_1007b5f00;
      uVar19 = 0;
      FUN_1007ab154();
      uVar22 = local_d0[2];
      uVar21 = local_d0[1];
      uVar16 = local_d0[0];
      uVar19 = uVar19 & 0xffff;
      bVar13 = (byte)auStack_b8[0] & 1 | 0x80;
      FUN_1007b8bdc(local_d0[0],local_d0[1],local_d0[2]);
      lVar8 = 0;
      FUN_1007b8bf4(0,uVar9,local_118[0],uVar17);
      (**(code **)(*(long *)(lVar8 + -8) + 8))(local_100,lVar8);
      goto LAB_1007acd0c;
    }
    uVar16 = puVar18[0xc];
    uVar22 = puVar18[0xf];
    uVar21 = puVar18[0xe];
    puVar15[0xd] = puVar18[0xd];
    puVar15[0xc] = uVar16;
    puVar15[0xf] = uVar22;
    puVar15[0xe] = uVar21;
    uVar16 = puVar18[0x10];
    puVar15[0x11] = puVar18[0x11];
    puVar15[0x10] = uVar16;
    uVar16 = puVar18[4];
    uVar22 = puVar18[7];
    uVar21 = puVar18[6];
    uStack_d8 = uVar10;
    puVar15[5] = puVar18[5];
    puVar15[4] = uVar16;
    puVar15[7] = uVar22;
    puVar15[6] = uVar21;
    uVar21 = puVar18[8];
    uVar16 = puVar18[0xb];
    uVar10 = puVar18[10];
    puVar15[9] = puVar18[9];
    puVar15[8] = uVar21;
    puVar15[0xb] = uVar16;
    puVar15[10] = uVar10;
    uVar21 = *puVar18;
    uVar16 = puVar18[3];
    uVar10 = puVar18[2];
    puVar15[1] = puVar18[1];
    *puVar15 = uVar21;
    puVar15[3] = uVar16;
    puVar15[2] = uVar10;
    uVar9 = 0;
  }
  else if ((int)puVar7 == 1) {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(puVar20,puVar18,lVar5);
    if (*(char *)((long)&uStack_120 + lVar8 + 1) != '\x01') {
      *(undefined1 *)puVar15 = *puVar20;
      *(undefined2 *)((long)puVar15 + 1) = 0x100;
      _swift_storeEnumTagMultiPayload(puVar15,lVar6,2);
      (*pcVar14)(unaff_x20,puVar15,lVar6);
      puVar7 = (ulong *)(puVar20 + *(int *)(lVar5 + 0x38));
      uVar10 = *puVar7;
      pcVar14 = (code *)puVar7[1];
      uVar19 = puVar7[2];
      uVar16 = (ulong)(byte)puVar7[3];
      uVar9 = *(undefined8 *)((long)local_118 + lVar8);
      FUN_1007b8bdc(uVar10,pcVar14,uVar19,uVar16);
      _swift_release(uVar9);
      iVar3 = *(int *)(lVar5 + 0x34);
      OVar4 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 8))
                (puVar20 + iVar3,CONCAT71(extraout_var,OVar4.value));
      FUN_1007b8ba0(uVar10,pcVar14,uVar19,uVar16);
      uVar21 = 0;
      uVar22 = 0;
      bVar13 = 0;
      goto LAB_1007acd0c;
    }
    (*pcVar12)(puVar15,puVar20,lVar5);
    uVar9 = 1;
  }
  else {
    uVar1 = *(undefined1 *)((long)puVar18 + 1);
    uVar2 = *(undefined1 *)((long)puVar18 + 2);
    *(char *)puVar15 = (char)*puVar18;
    *(undefined1 *)((long)puVar15 + 1) = uVar1;
    *(undefined1 *)((long)puVar15 + 2) = uVar2;
    uVar9 = 2;
  }
  _swift_storeEnumTagMultiPayload(puVar15,lVar6,uVar9);
  (*pcVar14)(unaff_x20,puVar15,lVar6);
  uVar10 = 0;
  pcVar14 = (code *)0x0;
  uVar19 = 0;
  uVar16 = 0;
  uVar21 = 0;
  uVar22 = 0;
  bVar13 = 0xfe;
LAB_1007acd0c:
  *local_118[1] = uVar10;
  local_118[1][1] = (ulong)pcVar14;
  local_118[1][2] = uVar19;
  local_118[1][3] = uVar16;
  local_118[1][4] = uVar21;
  local_118[1][5] = uVar22;
  *(byte *)(local_118[1] + 6) = bVar13;
  return;
}



/* Address: 0x1007acea0 | FUN_1007acea0 */

void FUN_1007acea0(void)

{
  FUN_1007ad9c8(FUN_1007aceac);
  return;
}



/* Address: 0x1007aceac | FUN_1007aceac */

void FUN_1007aceac(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 0;
  FUN_1007b8aac(0,uVar14,uVar15,uVar8);
  lVar12 = *(long *)(lVar3 + -8);
  lVar2 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + lVar2;
  lVar4 = 0;
  FUN_1007b8aa0(0,uVar14,uVar15,uVar8);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = (undefined8 *)(puVar9 + -uVar6);
  puVar10 = (undefined8 *)((long)puVar7 - uVar6);
  pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x20);
  (*pcVar11)(puVar10);
  puVar5 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar4);
  if ((int)puVar5 == 0) {
    uVar14 = *puVar10;
    uVar8 = puVar10[3];
    uVar15 = puVar10[2];
    puVar7[1] = puVar10[1];
    *puVar7 = uVar14;
    puVar7[3] = uVar8;
    puVar7[2] = uVar15;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x19);
    *(undefined8 *)((long)puVar7 + 0x21) = *(undefined8 *)((long)puVar10 + 0x21);
    *(undefined8 *)((long)puVar7 + 0x19) = uVar14;
    *(undefined1 *)((long)puVar7 + 0x29) = 1;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x5a);
    *(undefined8 *)((long)puVar7 + 0x62) = *(undefined8 *)((long)puVar10 + 0x62);
    *(undefined8 *)((long)puVar7 + 0x5a) = uVar14;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x6a);
    *(undefined8 *)((long)puVar7 + 0x72) = *(undefined8 *)((long)puVar10 + 0x72);
    *(undefined8 *)((long)puVar7 + 0x6a) = uVar14;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x7a);
    *(undefined8 *)((long)puVar7 + 0x82) = *(undefined8 *)((long)puVar10 + 0x82);
    *(undefined8 *)((long)puVar7 + 0x7a) = uVar14;
    puVar7[0x11] = puVar10[0x11];
    uVar14 = *(undefined8 *)((long)puVar10 + 0x2a);
    *(undefined8 *)((long)puVar7 + 0x32) = *(undefined8 *)((long)puVar10 + 0x32);
    *(undefined8 *)((long)puVar7 + 0x2a) = uVar14;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x3a);
    *(undefined8 *)((long)puVar7 + 0x42) = *(undefined8 *)((long)puVar10 + 0x42);
    *(undefined8 *)((long)puVar7 + 0x3a) = uVar14;
    uVar14 = *(undefined8 *)((long)puVar10 + 0x4a);
    *(undefined8 *)((long)puVar7 + 0x52) = *(undefined8 *)((long)puVar10 + 0x52);
    *(undefined8 *)((long)puVar7 + 0x4a) = uVar14;
  }
  else if ((int)puVar5 == 1) {
    pcVar13 = *(code **)(lVar12 + 0x20);
    (*pcVar13)(puVar9,puVar10,lVar3);
    (&stack0xffffffffffffffa1)[lVar2] = 1;
    (*pcVar13)(puVar7,puVar9,lVar3);
  }
  else {
    uVar1 = *(undefined1 *)((long)puVar10 + 2);
    *(undefined1 *)puVar7 = *(undefined1 *)puVar10;
    *(undefined1 *)((long)puVar7 + 1) = 1;
    *(undefined1 *)((long)puVar7 + 2) = uVar1;
  }
  _swift_storeEnumTagMultiPayload(puVar7,lVar4,puVar5);
  (*pcVar11)();
  return;
}



/* Address: 0x1007ad050 | FUN_1007ad050 */

void FUN_1007ad050(void)

{
  FUN_1007ad074(FUN_1007ad634,FUN_1007ba0a8,FUN_1007c0708,thunk_FUN_1007c0590);
  return;
}



/* Address: 0x1007ad074 | FUN_1007ad074 */

void FUN_1007ad074(code *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  StaticString SVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  long *unaff_x20;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  code *pcVar22;
  StaticString local_98;
  code *local_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code *pcStack_70;
  byte local_68;
  
  lVar14 = *unaff_x20;
  lVar1 = (long)unaff_x20 + *(long *)(lVar14 + 0x68);
  _os_unfair_lock_lock(lVar1);
  uVar3 = *(undefined8 *)(lVar14 + 0x50);
  uVar4 = *(undefined8 *)(lVar14 + 0x58);
  uVar17 = *(undefined8 *)(lVar14 + 0x60);
  FUN_1007b8cc4(0xff,uVar3,uVar4,uVar17);
  Synchronization::Mutex::typeMetadataAccessor();
  FUN_1007b8cc4(0,uVar3,uVar4,uVar17);
  (*param_1)(&local_98);
  (*param_2)(0xff,uVar3,uVar4,uVar17);
  Swift::Optional::typeMetadataAccessor();
  _os_unfair_lock_unlock(lVar1);
  if (0xfd < local_68) {
    return;
  }
  if (-1 < (char)local_68) {
    pcVar22 = FUN_1007b8e4c;
    _Var8.unknown = local_90;
    pcVar11 = local_88;
    pcVar6 = pcStack_80;
    FUN_1007ba1b4(local_98.unknown);
    uVar12 = 0;
    pcVar5 = (code *)(local_98.unknown + 0x30);
    if (((ulong)pcStack_80 & 0xff) != 1) goto LAB_1007ad1dc;
    do {
      uVar15 = *(ulong *)(local_98.unknown + 0x10);
      if (uVar12 == uVar15) {
LAB_1007ad3cc:
        (*param_3)(local_98.unknown,local_90,local_88,pcStack_80,local_78,pcStack_70,local_68,
                   param_3,pcVar22);
        (*param_3)(local_98.unknown,local_90,local_88,pcStack_80,local_78,pcStack_70,local_68);
        return;
      }
      if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad56c);
        (*pcVar5)();
      }
      pcVar16 = *(code **)(pcVar5 + -8);
      pcVar13 = *(code **)pcVar5;
      _swift_retain(pcVar13);
      while( true ) {
        if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad560);
          (*pcVar5)();
        }
        uVar12 = uVar12 + 1;
        (*pcVar16)();
        _swift_release(pcVar13);
        pcVar5 = pcVar5 + 0x18;
        if (((ulong)pcStack_80 & 0xff) == 1) break;
LAB_1007ad1dc:
        if (uVar12 != 0) {
          if (uVar12 != 1) goto LAB_1007ad574;
          goto LAB_1007ad3cc;
        }
        _Var8.unknown = local_90;
        pcVar11 = local_88;
        pcVar6 = pcStack_80;
        (*param_4)(local_98.unknown);
        uVar15 = 1;
        uVar12 = 0;
        pcVar13 = local_88;
        pcVar16 = local_90;
      }
    } while( true );
  }
  uVar2 = local_68 & 0x7f;
  pcVar22 = (code *)((ulong)local_88 >> 8);
  FUN_1007b8e4c(local_98.unknown,local_90,local_88,pcVar22);
  FUN_1007b8e4c(local_98.unknown,local_90,local_88,pcVar22);
  pcVar6 = pcStack_80;
  _Var8.unknown = local_78;
  pcVar11 = pcStack_70;
  FUN_1007b8bdc(pcStack_80,local_78,pcStack_70,uVar2);
  uVar12 = 0;
  pcVar5 = (code *)(local_98.unknown + 0x30);
  do {
    if (((uint)local_88 >> 8 & 0xff) == 1) {
      uVar15 = *(ulong *)(local_98.unknown + 0x10);
      if (uVar12 == uVar15) {
        pcVar6 = (code *)&DAT_00000001;
LAB_1007ad450:
        _Var8.unknown = local_90;
        pcVar11 = local_88;
        FUN_1007b8e2c(local_98.unknown);
        uVar12 = 0;
        pcVar5 = pcStack_80 + 0x30;
        if (uVar2 != 1) goto LAB_1007ad49c;
        do {
          uVar15 = *(ulong *)(pcStack_80 + 0x10);
          if (uVar12 == uVar15) {
LAB_1007ad4ec:
            (*param_3)(local_98.unknown,local_90,local_88,pcStack_80,local_78,pcStack_70,
                       (uint)local_68);
            FUN_1007b8e2c(local_98.unknown,local_90,local_88,pcVar22);
            FUN_1007b8ba0(pcStack_80,local_78,pcStack_70,(code *)(ulong)uVar2);
            return;
          }
          if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad574);
            (*pcVar5)();
          }
          pcVar16 = *(code **)(pcVar5 + -8);
          pcVar13 = *(code **)pcVar5;
          _swift_retain(pcVar13);
          while( true ) {
            if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad568);
              (*pcVar5)();
            }
            uVar12 = uVar12 + 1;
            (*pcVar16)();
            _swift_release(pcVar13);
            pcVar5 = pcVar5 + 0x18;
            if (uVar2 == 1) break;
LAB_1007ad49c:
            if (uVar12 != 0) {
              if (uVar12 != 1) goto LAB_1007ad574;
              goto LAB_1007ad4ec;
            }
            _Var8.unknown = local_78;
            pcVar11 = pcStack_70;
            pcVar6 = (code *)(ulong)uVar2;
            FUN_1007b8bdc(pcStack_80);
            uVar15 = 1;
            uVar12 = 0;
            pcVar13 = pcStack_70;
            pcVar16 = local_78;
          }
        } while( true );
      }
      if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad570);
        (*pcVar5)();
      }
      _Var8.unknown = *(code **)(pcVar5 + -8);
      SVar9.unknown = *(code **)(pcVar5 + -0x10);
      pcVar11 = (code *)(ulong)(byte)*pcVar5;
    }
    else {
      if (uVar12 != 0) {
        pcVar6 = pcVar22;
        if (uVar12 != 1) {
LAB_1007ad574:
          local_98.unknown = (undefined *)0x0;
          local_90 = (code *)0xe000000000000000;
          Swift::_StringGuts::grow(0x16,_Var8);
          _swift_bridgeObjectRelease(local_90);
          local_98.unknown = (undefined *)0x207865646e69;
          local_90 = (code *)&DAT_e600000000000000;
          SVar18 = Swift::CustomStringConvertible::get_description();
          SVar20.bridgeObject = pcVar6;
          SVar20.str = (char *)pcVar11;
          Swift::String::append(SVar18,SVar20);
          _swift_bridgeObjectRelease(SVar18.bridgeObject);
          SVar18.bridgeObject = (void *)0xee0073646e756f62;
          SVar18.str = (char *)0x20666f2074756f20;
          SVar21.bridgeObject = pcVar6;
          SVar21.str = (char *)pcVar11;
          Swift::String::append(SVar18,SVar21);
          SVar19.bridgeObject = (void *)0x2;
          SVar19.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar19,local_98,(__uint64)local_90,0xdb16d0);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad634);
          (*pcVar5)();
        }
        goto LAB_1007ad450;
      }
      uVar15 = 1;
      _Var8.unknown = local_90;
      SVar9.unknown = local_98.unknown;
      pcVar11 = local_88;
    }
    if (uVar15 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007ad564);
      (*pcVar5)();
    }
    if (((uint)pcVar11 & 0xff) == 1) {
      FUN_1007b8cd0();
      puVar7 = &DAT_100f01e38;
      _swift_allocError(&DAT_100f01e38,pcVar6,0,0);
      _Var8.unknown = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      puVar10 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar10 = puVar7;
      pcVar11 = (code *)_Var8.unknown;
      _swift_continuation_throwingResumeWithError();
    }
    else {
      FUN_1007b8cd0();
      puVar7 = &DAT_100f01e38;
      _swift_allocError(&DAT_100f01e38,pcVar6,0,0);
      _swift_retain(_Var8.unknown);
      (*(code *)SVar9.unknown)(puVar7,1);
      _swift_errorRelease(puVar7);
      FUN_1007b8df8();
    }
    pcVar5 = pcVar5 + 0x18;
    uVar12 = uVar12 + 1;
    pcVar6 = (code *)SVar9.unknown;
  } while( true );
}



/* Address: 0x1007ad634 | FUN_1007ad634 */

void FUN_1007ad634(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  Optional OVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined7 extraout_var;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x20;
  code *pcVar13;
  undefined8 uVar14;
  byte bVar15;
  code *pcVar16;
  char *pcVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulong uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char acStack_120 [8];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = 0;
  local_110 = param_1;
  FUN_1007b8aac(0,uVar10,puVar1,uVar18);
  lVar12 = *(long *)(lVar6 + -8);
  lVar9 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar21 = acStack_120 + lVar9;
  lVar7 = 0;
  local_118 = puVar1;
  FUN_1007b8aa0(0,uVar10,puVar1,uVar18);
  uVar11 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  pcVar17 = pcVar21 + -uVar11;
  pcVar19 = pcVar17 + -uVar11;
  pcVar16 = *(code **)(*(long *)(lVar7 + -8) + 0x20);
  (*pcVar16)(pcVar19);
  pcVar8 = pcVar19;
  _swift_getEnumCaseMultiPayload(pcVar19,lVar7);
  if ((int)pcVar8 == 0) {
    uStack_98 = *(undefined8 *)(pcVar19 + 0x68);
    local_a0 = *(undefined8 *)(pcVar19 + 0x60);
    uStack_88 = *(undefined8 *)(pcVar19 + 0x78);
    uStack_90 = *(undefined8 *)(pcVar19 + 0x70);
    uStack_78 = *(undefined8 *)(pcVar19 + 0x88);
    local_80 = *(undefined8 *)(pcVar19 + 0x80);
    uStack_d8 = *(undefined8 *)(pcVar19 + 0x28);
    uVar14 = uStack_d8;
    local_e0 = *(undefined8 *)(pcVar19 + 0x20);
    uStack_c8 = *(undefined8 *)(pcVar19 + 0x38);
    local_d0 = *(ulong *)(pcVar19 + 0x30);
    uStack_b8 = *(undefined8 *)(pcVar19 + 0x48);
    local_c0 = *(undefined8 *)(pcVar19 + 0x40);
    uStack_a8 = *(undefined8 *)(pcVar19 + 0x58);
    uStack_b0 = *(undefined8 *)(pcVar19 + 0x50);
    uStack_f8 = *(undefined8 *)(pcVar19 + 8);
    local_100 = *(undefined8 *)pcVar19;
    uStack_e8 = *(undefined8 *)(pcVar19 + 0x18);
    uStack_f0 = *(undefined8 *)(pcVar19 + 0x10);
    if ((char)uStack_d8 != '\x01') {
      uStack_d8._1_1_ = (char)((ulong)uStack_d8 >> 8);
      if (uStack_d8._1_1_ != '\x01') {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1007ad9bc);
        uStack_d8 = uVar14;
        (*pcVar16)();
      }
      uStack_d8 = uVar14;
      pcVar17[0] = '\0';
      pcVar17[1] = '\x01';
      pcVar17[2] = '\0';
      _swift_storeEnumTagMultiPayload(pcVar17,lVar7,2);
      (*pcVar16)(unaff_x20,pcVar17,lVar7);
      uVar14 = local_a0;
      _swift_retain();
      pcVar16 = thunk_FUN_1007b5f00;
      uVar20 = 0;
      FUN_1007ab154();
      uVar23 = local_c0;
      uVar22 = uStack_c8;
      uVar11 = local_d0;
      uVar20 = uVar20 & 0xffff;
      bVar15 = (byte)uStack_b8 & 1 | 0x80;
      FUN_1007b8bdc(local_d0,uStack_c8,local_c0);
      lVar9 = 0;
      FUN_1007b8bf4(0,uVar10,local_118,uVar18);
      (**(code **)(*(long *)(lVar9 + -8) + 8))(&local_100,lVar9);
      goto LAB_1007ad80c;
    }
    uVar10 = *(undefined8 *)(pcVar19 + 0x60);
    uVar22 = *(undefined8 *)(pcVar19 + 0x78);
    uVar18 = *(undefined8 *)(pcVar19 + 0x70);
    *(undefined8 *)(pcVar17 + 0x68) = *(undefined8 *)(pcVar19 + 0x68);
    *(undefined8 *)(pcVar17 + 0x60) = uVar10;
    *(undefined8 *)(pcVar17 + 0x78) = uVar22;
    *(undefined8 *)(pcVar17 + 0x70) = uVar18;
    uVar10 = *(undefined8 *)(pcVar19 + 0x80);
    *(undefined8 *)(pcVar17 + 0x88) = *(undefined8 *)(pcVar19 + 0x88);
    *(undefined8 *)(pcVar17 + 0x80) = uVar10;
    uVar10 = *(undefined8 *)(pcVar19 + 0x20);
    uVar22 = *(undefined8 *)(pcVar19 + 0x38);
    uVar18 = *(undefined8 *)(pcVar19 + 0x30);
    uStack_d8 = uVar14;
    *(undefined8 *)(pcVar17 + 0x28) = *(undefined8 *)(pcVar19 + 0x28);
    *(undefined8 *)(pcVar17 + 0x20) = uVar10;
    *(undefined8 *)(pcVar17 + 0x38) = uVar22;
    *(undefined8 *)(pcVar17 + 0x30) = uVar18;
    uVar14 = *(undefined8 *)(pcVar19 + 0x40);
    uVar18 = *(undefined8 *)(pcVar19 + 0x58);
    uVar10 = *(undefined8 *)(pcVar19 + 0x50);
    *(undefined8 *)(pcVar17 + 0x48) = *(undefined8 *)(pcVar19 + 0x48);
    *(undefined8 *)(pcVar17 + 0x40) = uVar14;
    *(undefined8 *)(pcVar17 + 0x58) = uVar18;
    *(undefined8 *)(pcVar17 + 0x50) = uVar10;
    uVar14 = *(undefined8 *)pcVar19;
    uVar18 = *(undefined8 *)(pcVar19 + 0x18);
    uVar10 = *(undefined8 *)(pcVar19 + 0x10);
    *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar19 + 8);
    *(undefined8 *)pcVar17 = uVar14;
    *(undefined8 *)(pcVar17 + 0x18) = uVar18;
    *(undefined8 *)(pcVar17 + 0x10) = uVar10;
    uVar10 = 0;
  }
  else if ((int)pcVar8 == 1) {
    pcVar13 = *(code **)(lVar12 + 0x20);
    (*pcVar13)(pcVar21,pcVar19,lVar6);
    if (*pcVar21 != '\x01') {
      if (acStack_120[lVar9 + 1] != '\x01') {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1007ad9b8);
        (*pcVar16)();
      }
      pcVar17[0] = '\0';
      pcVar17[1] = '\x01';
      pcVar17[2] = '\x01';
      _swift_storeEnumTagMultiPayload(pcVar17,lVar7,2);
      (*pcVar16)(unaff_x20,pcVar17,lVar7);
      pcVar8 = pcVar21 + *(int *)(lVar6 + 0x38);
      uVar14 = *(undefined8 *)pcVar8;
      pcVar16 = *(code **)(pcVar8 + 8);
      uVar20 = *(ulong *)(pcVar8 + 0x10);
      uVar11 = (ulong)(byte)pcVar8[0x18];
      uVar10 = *(undefined8 *)((long)&local_118 + lVar9);
      FUN_1007b8bdc(uVar14,pcVar16,uVar20,uVar11);
      _swift_release(uVar10);
      iVar4 = *(int *)(lVar6 + 0x34);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
                (pcVar21 + iVar4,CONCAT71(extraout_var,OVar5.value));
      FUN_1007b8ba0(uVar14,pcVar16,uVar20,uVar11);
      uVar22 = 0;
      uVar23 = 0;
      bVar15 = 0;
      goto LAB_1007ad80c;
    }
    (*pcVar13)(pcVar17,pcVar21,lVar6);
    uVar10 = 1;
  }
  else {
    cVar2 = pcVar19[1];
    cVar3 = pcVar19[2];
    *pcVar17 = *pcVar19;
    pcVar17[1] = cVar2;
    pcVar17[2] = cVar3;
    uVar10 = 2;
  }
  _swift_storeEnumTagMultiPayload(pcVar17,lVar7,uVar10);
  (*pcVar16)(unaff_x20,pcVar17,lVar7);
  uVar14 = 0;
  pcVar16 = (code *)0x0;
  uVar20 = 0;
  uVar11 = 0;
  uVar22 = 0;
  uVar23 = 0;
  bVar15 = 0xfe;
LAB_1007ad80c:
  *local_110 = uVar14;
  local_110[1] = pcVar16;
  local_110[2] = uVar20;
  local_110[3] = uVar11;
  local_110[4] = uVar22;
  local_110[5] = uVar23;
  *(byte *)(local_110 + 6) = bVar15;
  return;
}


