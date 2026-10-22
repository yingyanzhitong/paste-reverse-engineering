/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10053c484 | FUN_10053c484 */

void FUN_10053c484(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  uVar3 = param_2[8];
  *(undefined8 *)(unaff_x22 + 0x58) = param_2[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10053c4fc;
                    /* WARNING: Could not recover jumptable at 0x00010053c4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10053c4fc | FUN_10053c4fc */

void FUN_10053c4fc(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x68));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined1 **)(lVar3 + 0x60);
    *puVar1 = param_1;
    *(undefined8 *)(puVar1 + 8) = param_2;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010053c560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10053c564 | FUN_10053c564 */

void FUN_10053c564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100edd3f8;
  _swift_allocObject(&DAT_100edd3f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100edd420;
  _swift_allocObject(&DAT_100edd420,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &DAT_100c559c0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar3 = &DAT_100fce900;
  FUN_1000f7830(&DAT_100fce900,&DAT_100c559d8);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = &DAT_100c559d0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_beginAccess(unaff_x20 + 0x118,auStack_58,0x21,0);
  _swift_retain(param_2);
  _swift_retain(puVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,0x696c2f73746f6f72,0xea00000000007473,uVar4);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar5;
  _swift_endAccess(auStack_58);
  _swift_retain();
  _swift_release(puVar1);
  return;
}



/* Address: 0x10053c698 | FUN_10053c698 */

void FUN_10053c698(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10053c6f0;
                    /* WARNING: Could not recover jumptable at 0x00010053c6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))();
  return;
}



/* Address: 0x10053c6f0 | FUN_10053c6f0 */

void FUN_10053c6f0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010053c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  _swift_task_switch(FUN_10053c764,0,0);
  return;
}



/* Address: 0x10053c764 | FUN_10053c764 */

void FUN_10053c764(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010053c778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053c77c | FUN_10053c77c */

void FUN_10053c77c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10053042c(0xd000000000000020,0x8000000100dad470);
  return;
}



/* Address: 0x10053c7f0 | FUN_10053c7f0 */

void FUN_10053c7f0(undefined1 param_1)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  _swift_task_switch(FUN_10053c854);
  return;
}



/* Address: 0x10053c854 | FUN_10053c854 */

/* WARNING: Removing unreachable block (ram,0x00010053c92c) */
/* WARNING: Removing unreachable block (ram,0x00010053c934) */

void FUN_10053c854(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  UUID UVar4;
  long lVar5;
  long *plVar6;
  Task TVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar3 = &DAT_100c559f8;
  _swift_getKeyPath(&DAT_100c559f8);
  uVar9 = 0;
  FUN_1005408c0();
  _swift_release(puVar3);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x39);
  UVar4 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar4);
  *(void **)(unaff_x22 + 0x60) = SVar10.bridgeObject;
  (**(code **)(lVar5 + 8))(uVar1);
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000010;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad4a0;
  *(undefined1 *)(unaff_x22 + 0x38) = uVar2;
  lVar5 = unaff_x22 + 0x10;
  FUN_10053256c();
  *(long *)(unaff_x22 + 0x68) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x3a) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x3;
  plVar6 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  TVar7.unknown = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10053c9dc;
  Swift::Task::get_value(TVar7);
  return;
}



/* Address: 0x10053c9dc | FUN_10053c9dc */

void FUN_10053c9dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053ca38;
  }
  else {
    pcVar1 = FUN_10053caac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053ca38 | FUN_10053ca38 */

void FUN_10053ca38(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053ca4c,*(undefined8 *)(unaff_x22 + 0x40),0);
  return;
}



/* Address: 0x10053ca4c | FUN_10053ca4c */

void FUN_10053ca4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined1 *)(unaff_x22 + 0x3a));
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010053caa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053caac | FUN_10053caac */

void FUN_10053caac(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053cac0,*(undefined8 *)(unaff_x22 + 0x40),0);
  return;
}



/* Address: 0x10053cac0 | FUN_10053cac0 */

void FUN_10053cac0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined1 *)(unaff_x22 + 0x3a));
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010053cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053cb14 | FUN_10053cb14 */

void FUN_10053cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe8) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  _swift_task_switch(FUN_10053cb80);
  return;
}



/* Address: 0x10053cb80 | FUN_10053cb80 */

/* WARNING: Removing unreachable block (ram,0x00010053ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010053cbe0) */
/* WARNING: Removing unreachable block (ram,0x00010053ccd0) */

void FUN_10053cb80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  UUID UVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined8 in_x3;
  undefined8 uVar14;
  long unaff_x22;
  String SVar15;
  
  puVar8 = &DAT_100c55a20;
  _swift_getKeyPath(&DAT_100c55a20);
  uVar13 = 0x6f;
  FUN_1005408c0();
  lVar10 = *(long *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(puVar8);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  UVar9 = Foundation::UUID::init();
  SVar15 = Foundation::UUID::get_uuidString(UVar9);
  (**(code **)(lVar10 + 8))(uVar4);
  *(String *)(unaff_x22 + 0x10) = SVar15;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000013;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad4c0;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined1 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  lVar10 = unaff_x22 + 0x10;
  FUN_1005327e4();
  *(long *)(unaff_x22 + 0x100) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
  *(undefined1 *)(unaff_x22 + 0x140) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x110) = in_x3;
  plVar11 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar11;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10053cd7c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x10053cd7c | FUN_10053cd7c */

void FUN_10053cd7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053cdd8;
  }
  else {
    pcVar1 = FUN_10053ce94;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053cdd8 | FUN_10053cdd8 */

void FUN_10053cdd8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined2 *)(unaff_x22 + 0x141) = *(undefined2 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_task_switch(FUN_10053ce0c,*(undefined8 *)(unaff_x22 + 0xe0),0);
  return;
}



/* Address: 0x10053ce0c | FUN_10053ce0c */

void FUN_10053ce0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined2 *)(unaff_x22 + 0x141);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined1 *)(unaff_x22 + 0x140));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce908,&DAT_100c55a40);
  _swift_bridgeObjectRelease(uVar4);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130),uVar3);
  return;
}



/* Address: 0x10053ce94 | FUN_10053ce94 */

void FUN_10053ce94(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053cea8,*(undefined8 *)(unaff_x22 + 0xe0),0);
  return;
}



/* Address: 0x10053cea8 | FUN_10053cea8 */

void FUN_10053cea8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined1 *)(unaff_x22 + 0x140));
  _swift_release(uVar1);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce908,&DAT_100c55a40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010053cf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053cf0c | FUN_10053cf0c */

void FUN_10053cf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe8) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  _swift_task_switch(FUN_10053cf78);
  return;
}



/* Address: 0x10053cf78 | FUN_10053cf78 */

/* WARNING: Removing unreachable block (ram,0x00010053d0b8) */
/* WARNING: Removing unreachable block (ram,0x00010053cfd8) */
/* WARNING: Removing unreachable block (ram,0x00010053d0d0) */

void FUN_10053cf78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  UUID UVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined8 in_x3;
  undefined8 uVar14;
  long unaff_x22;
  String SVar15;
  
  puVar8 = &DAT_100c55a20;
  _swift_getKeyPath(&DAT_100c55a20);
  uVar13 = 0x6f;
  FUN_1005408c0();
  lVar10 = *(long *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(puVar8);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  UVar9 = Foundation::UUID::init();
  SVar15 = Foundation::UUID::get_uuidString(UVar9);
  (**(code **)(lVar10 + 8))(uVar4);
  *(String *)(unaff_x22 + 0x10) = SVar15;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000013;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad4c0;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined1 *)(unaff_x22 + 0x58) = 1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  lVar10 = unaff_x22 + 0x10;
  FUN_1005327e4();
  *(long *)(unaff_x22 + 0x100) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
  *(undefined1 *)(unaff_x22 + 0x140) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x110) = in_x3;
  plVar11 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar11;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10053d17c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x10053d17c | FUN_10053d17c */

void FUN_10053d17c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053d1d8;
  }
  else {
    pcVar1 = FUN_10053d20c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053d1d8 | FUN_10053d1d8 */

void FUN_10053d1d8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined2 *)(unaff_x22 + 0x141) = *(undefined2 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_task_switch(thunk_FUN_10053ce0c,*(undefined8 *)(unaff_x22 + 0xe0),0);
  return;
}



/* Address: 0x10053d20c | FUN_10053d20c */

void FUN_10053d20c(void)

{
  long unaff_x22;
  
  _swift_task_switch(thunk_FUN_10053cea8,*(undefined8 *)(unaff_x22 + 0xe0),0);
  return;
}



/* Address: 0x10053d220 | FUN_10053d220 */

void FUN_10053d220(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x420) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x418) = param_1;
  _swift_task_switch(FUN_10053d23c);
  return;
}



/* Address: 0x10053d23c | FUN_10053d23c */

void FUN_10053d23c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  
  lVar13 = *(long *)(unaff_x22 + 0x420);
  lVar10 = *(long *)(lVar13 + 0x70);
  *(long *)(unaff_x22 + 0x428) = lVar10;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar13 + 0x78);
    *(long *)(unaff_x22 + 0x430) = lVar11;
    lVar13 = lVar10;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x438) = lVar13;
    *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(lVar11 + 0x10);
    uVar12 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar10);
    UVar6 = Swift::Actor::get_unownedExecutor();
    pcVar9 = FUN_10053d55c;
LAB_10053d2b8:
    _swift_task_switch(pcVar9,UVar6.unknown,uVar12);
    return;
  }
  puVar8 = *(undefined8 **)(unaff_x22 + 0x418);
  pcVar9 = (code *)*puVar8;
  *(code **)(unaff_x22 + 0x450) = pcVar9;
  uVar12 = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x458) = uVar12;
  uVar5 = *(undefined1 *)(puVar8 + 2);
  *(undefined1 *)(unaff_x22 + 0x371) = uVar5;
  _swift_beginAccess(lVar13 + 0x128,unaff_x22 + 0x3d8,0x21,0);
  FUN_1005064d4(pcVar9,uVar12,uVar5);
  puVar8 = (undefined8 *)(unaff_x22 + 0x3d8);
  _swift_endAccess();
  if (pcVar9 == (code *)0x0) {
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x70);
    *(long *)(unaff_x22 + 0x460) = lVar10;
    if (lVar10 != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x78);
      *(long *)(unaff_x22 + 0x468) = lVar11;
      lVar13 = lVar10;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0x470) = lVar13;
      *(undefined8 *)(unaff_x22 + 0x478) = *(undefined8 *)(lVar11 + 0x10);
      uVar12 = *(undefined8 *)(lVar11 + 8);
      _swift_unknownObjectRetain(lVar10);
      UVar6 = Swift::Actor::get_unownedExecutor();
      pcVar9 = FUN_10053dac0;
      goto LAB_10053d2b8;
    }
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x418);
    uVar1 = *(undefined8 *)(lVar10 + 0x18);
    uVar3 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar4 = *(undefined8 *)(lVar10 + 0x30);
    uVar5 = *(undefined1 *)(lVar10 + 0x38);
    if (*(char *)(lVar10 + 0x39) == '\x01') {
      FUN_1004db3ac();
      puVar7 = &DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar8,0,0);
      *puVar8 = uVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar2;
      *(char *)(puVar8 + 3) = (char)uVar4;
      *(undefined **)(unaff_x22 + 0x350) = puVar7;
      *(undefined1 *)(unaff_x22 + 0x370) = 1;
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_10045b2bc,FUN_1004d9ee8);
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_10045b2bc,FUN_1004d9ee8);
      _swift_errorRetain(puVar7);
      (*pcVar9)(unaff_x22 + 0x350);
      FUN_100004550(pcVar9,uVar12);
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_1004dbde0,FUN_1004d9f84);
      FUN_1000fb4c4(unaff_x22 + 0x350,&DAT_100fcd0b8,&DAT_100c53690);
      _swift_errorRelease(puVar7);
    }
    else {
      *(undefined **)(unaff_x22 + 0x3b8) = &DAT_100edd000;
      puVar7 = &DAT_100eddbc0;
      _swift_allocObject(&DAT_100eddbc0,0x31,7);
      *(undefined **)(unaff_x22 + 0x3a0) = puVar7;
      *(undefined8 *)(puVar7 + 0x10) = uVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar3;
      *(undefined8 *)(puVar7 + 0x20) = uVar2;
      *(undefined8 *)(puVar7 + 0x28) = uVar4;
      puVar7[0x30] = uVar5;
      FUN_10000cbfc(unaff_x22 + 0x3a0,unaff_x22 + 0x378);
      *(undefined1 *)(unaff_x22 + 0x398) = 0;
      FUN_10045b2bc(uVar1,uVar3,uVar2,uVar4,uVar5);
      (*pcVar9)(unaff_x22 + 0x378);
      FUN_100004550(pcVar9,uVar12);
      FUN_1000fb4c4(unaff_x22 + 0x378,&DAT_100fcd0b8,&DAT_100c53690);
      FUN_100004594(unaff_x22 + 0x3a0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010053d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053d55c | FUN_10053d55c */

void FUN_10053d55c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x420);
  (**(code **)(unaff_x22 + 0x440))(uVar1,*(undefined8 *)(unaff_x22 + 0x430));
  *(undefined8 *)(unaff_x22 + 0x448) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053d5b4,uVar2,0);
  return;
}



/* Address: 0x10053d5b4 | FUN_10053d5b4 */

void FUN_10053d5b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  void *pvVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  lVar17 = *(long *)(unaff_x22 + 0x448);
  pcVar8 = (char *)0x0;
  pvVar9 = (void *)0x0;
  _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x3c0);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x2b0);
  uVar12 = *(ulong *)(unaff_x22 + 0x2c8);
  lVar14 = *(long *)(unaff_x22 + 0x2d0);
  FUN_100004640(unaff_x22 + 0x2b0,uVar12);
  (**(code **)(lVar14 + 0x70))(uVar12,lVar14);
  FUN_100004594(unaff_x22 + 0x2b0);
  if ((uVar12 & 0xff) == 0) {
    puVar11 = *(undefined8 **)(unaff_x22 + 0x418);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x2d8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
    lVar14 = *(long *)(unaff_x22 + 0x2f8);
    FUN_100004640();
    puVar5 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar10 = (char *)(unaff_x22 + 0xd0);
    _swift_initStackObject();
    *(undefined1 **)(puVar5 + 0x20) = &SUB_00006469;
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined1 **)(puVar5 + 0x28) = &SUB_e200000000000000;
    SVar21.bridgeObject = pcVar8;
    SVar21.str = pcVar10;
    Swift::String::reserveCapacity(2,SVar21);
    pcVar10 = (char *)*puVar11;
    if (*(char *)(puVar11 + 2) == '\x01') {
      *(char **)(unaff_x22 + 0x408) = pcVar10;
      SVar20 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar19 = *(void **)(*(long *)(unaff_x22 + 0x418) + 8);
      SVar20.bridgeObject = pvVar19;
      SVar20.str = pcVar10;
      _swift_bridgeObjectRetain(pvVar19);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x448);
    SVar22.bridgeObject = pvVar9;
    SVar22.str = pcVar8;
    Swift::String::append(SVar20,SVar22);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0xe000000000000000;
    puVar5[0x58] = 0;
    puVar6 = puVar5;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar5);
    FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad6c0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x3c3;
    *(undefined1 *)(unaff_x22 + 0x130) = 0;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad6c0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined **)(unaff_x22 + 0x150) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x3c3;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 400);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x10,uVar15,lVar14);
    _swift_release(uVar18);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x2d8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x448));
  }
  puVar11 = *(undefined8 **)(unaff_x22 + 0x418);
  pcVar13 = (code *)*puVar11;
  *(code **)(unaff_x22 + 0x450) = pcVar13;
  uVar15 = puVar11[1];
  *(undefined8 *)(unaff_x22 + 0x458) = uVar15;
  uVar4 = *(undefined1 *)(puVar11 + 2);
  *(undefined1 *)(unaff_x22 + 0x371) = uVar4;
  _swift_beginAccess(*(long *)(unaff_x22 + 0x420) + 0x128,unaff_x22 + 0x3d8,0x21,0);
  FUN_1005064d4(pcVar13,uVar15,uVar4);
  puVar11 = (undefined8 *)(unaff_x22 + 0x3d8);
  _swift_endAccess();
  if (pcVar13 == (code *)0x0) {
    lVar14 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x70);
    *(long *)(unaff_x22 + 0x460) = lVar14;
    if (lVar14 != 0) {
      lVar16 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x78);
      *(long *)(unaff_x22 + 0x468) = lVar16;
      lVar17 = lVar14;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0x470) = lVar17;
      *(undefined8 *)(unaff_x22 + 0x478) = *(undefined8 *)(lVar16 + 0x10);
      uVar15 = *(undefined8 *)(lVar16 + 8);
      _swift_unknownObjectRetain(lVar14);
      UVar7 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_10053dac0,UVar7.unknown,uVar15);
      return;
    }
  }
  else {
    lVar14 = *(long *)(unaff_x22 + 0x418);
    uVar18 = *(undefined8 *)(lVar14 + 0x18);
    uVar2 = *(undefined8 *)(lVar14 + 0x20);
    uVar1 = *(undefined8 *)(lVar14 + 0x28);
    uVar3 = *(undefined8 *)(lVar14 + 0x30);
    uVar4 = *(undefined1 *)(lVar14 + 0x38);
    if (*(char *)(lVar14 + 0x39) == '\x01') {
      FUN_1004db3ac();
      puVar5 = &DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar11,0,0);
      *puVar11 = uVar18;
      puVar11[1] = uVar2;
      puVar11[2] = uVar1;
      *(char *)(puVar11 + 3) = (char)uVar3;
      *(undefined **)(unaff_x22 + 0x350) = puVar5;
      *(undefined1 *)(unaff_x22 + 0x370) = 1;
      FUN_10054a850(uVar18,uVar2,uVar1,uVar3,uVar4,1,FUN_10045b2bc,FUN_1004d9ee8);
      FUN_10054a850(uVar18,uVar2,uVar1,uVar3,uVar4,1,FUN_10045b2bc,FUN_1004d9ee8);
      _swift_errorRetain(puVar5);
      (*pcVar13)(unaff_x22 + 0x350);
      FUN_100004550(pcVar13,uVar15);
      FUN_10054a850(uVar18,uVar2,uVar1,uVar3,uVar4,1,FUN_1004dbde0,FUN_1004d9f84);
      FUN_1000fb4c4(unaff_x22 + 0x350,&DAT_100fcd0b8,&DAT_100c53690);
      _swift_errorRelease(puVar5);
    }
    else {
      *(undefined **)(unaff_x22 + 0x3b8) = &DAT_100edd000;
      puVar5 = &DAT_100eddbc0;
      _swift_allocObject(&DAT_100eddbc0,0x31,7);
      *(undefined **)(unaff_x22 + 0x3a0) = puVar5;
      *(undefined8 *)(puVar5 + 0x10) = uVar18;
      *(undefined8 *)(puVar5 + 0x18) = uVar2;
      *(undefined8 *)(puVar5 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar3;
      puVar5[0x30] = uVar4;
      FUN_10000cbfc(unaff_x22 + 0x3a0,unaff_x22 + 0x378);
      *(undefined1 *)(unaff_x22 + 0x398) = 0;
      FUN_10045b2bc(uVar18,uVar2,uVar1,uVar3,uVar4);
      (*pcVar13)(unaff_x22 + 0x378);
      FUN_100004550(pcVar13,uVar15);
      FUN_1000fb4c4(unaff_x22 + 0x378,&DAT_100fcd0b8,&DAT_100c53690);
      FUN_100004594(unaff_x22 + 0x3a0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010053dabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053dac0 | FUN_10053dac0 */

void FUN_10053dac0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x420);
  (**(code **)(unaff_x22 + 0x478))(uVar1,*(undefined8 *)(unaff_x22 + 0x468));
  *(undefined8 *)(unaff_x22 + 0x480) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053db18,uVar2,0);
  return;
}



/* Address: 0x10053db18 | FUN_10053db18 */

void FUN_10053db18(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  lVar9 = *(long *)(unaff_x22 + 0x480);
  pvVar6 = (void *)0x0;
  _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x3f0,0);
  FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x300);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x318);
  lVar8 = *(long *)(unaff_x22 + 800);
  FUN_100004640(unaff_x22 + 0x300,uVar7);
  (**(code **)(lVar8 + 0x70))(uVar7,lVar8);
  FUN_100004594(unaff_x22 + 0x300);
  if (((uint)uVar7 & 0xff) < 5) {
    cVar1 = *(char *)(unaff_x22 + 0x371);
    FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x328);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
    lVar8 = *(long *)(unaff_x22 + 0x348);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pcVar5 = (char *)0x7;
    _swift_allocObject();
    *(undefined1 **)(puVar2 + 0x20) = &SUB_00006469;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined1 **)(puVar2 + 0x28) = &SUB_e200000000000000;
    SVar13.bridgeObject = pcVar5;
    SVar13.str = pcVar4;
    Swift::String::reserveCapacity(2,SVar13);
    if (cVar1 == '\x01') {
      *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x450);
      SVar12 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar11 = *(void **)(unaff_x22 + 0x458);
      _swift_bridgeObjectRetain(pvVar11);
      SVar12.bridgeObject = pvVar11;
      SVar12.str = *(char **)(unaff_x22 + 0x450);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x480);
    SVar14.bridgeObject = pvVar6;
    SVar14.str = pcVar5;
    Swift::String::append(SVar12,SVar14);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x70) = 4;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000038;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad6e0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 200) = 0x3d4;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 4;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd000000000000038;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad6e0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined **)(unaff_x22 + 0x210) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x3d4;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x70,uVar7,lVar8);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x328);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x480));
  }
                    /* WARNING: Could not recover jumptable at 0x00010053ddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053ddcc | FUN_10053ddcc */

void FUN_10053ddcc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x420) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x418) = param_1;
  _swift_task_switch(FUN_10053dde8);
  return;
}



/* Address: 0x10053dde8 | FUN_10053dde8 */

void FUN_10053dde8(void)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  code *pcVar3;
  UnownedSerialExecutor UVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x420);
  lVar9 = *(long *)(lVar7 + 0x70);
  *(long *)(unaff_x22 + 0x428) = lVar9;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar7 + 0x78);
    *(long *)(unaff_x22 + 0x430) = lVar11;
    lVar7 = lVar9;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x438) = lVar7;
    *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(lVar11 + 0x10);
    uVar12 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar9);
    UVar4 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10053dfbc,UVar4.unknown,uVar12);
    return;
  }
  _swift_beginAccess(lVar7 + 0x110,unaff_x22 + 0x398,0,0);
  puVar10 = *(undefined **)(lVar7 + 0x110);
  if (*(long *)(puVar10 + 0x10) != 0) {
    lVar7 = **(long **)(unaff_x22 + 0x418);
    *(long *)(unaff_x22 + 0x450) = lVar7;
    uVar13 = (*(long **)(unaff_x22 + 0x418))[1];
    *(ulong *)(unaff_x22 + 0x458) = uVar13;
    _swift_bridgeObjectRetain(puVar10);
    FUN_100071370();
    puVar8 = puVar10;
    if ((uVar13 & 1) != 0) {
      puVar8 = *(undefined **)(*(long *)(puVar10 + 0x38) + lVar7 * 8);
      *(undefined **)(unaff_x22 + 0x460) = puVar8;
      _swift_bridgeObjectRetain(puVar8);
      _swift_bridgeObjectRelease(puVar10);
      if ((ulong)puVar8 >> 0x3e == 0) {
        lVar7 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x468) = lVar7;
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          _Var1.unknown = puVar8;
        }
        lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        *(long *)(unaff_x22 + 0x468) = lVar7;
      }
      if (lVar7 != 0) {
        if (0 < lVar7) {
          *(undefined8 *)(unaff_x22 + 0x470) = 0;
          if ((*(ulong *)(unaff_x22 + 0x460) & 0xc000000000000001) == 0) {
            plVar5 = *(long **)(*(ulong *)(unaff_x22 + 0x460) + 0x20);
            _swift_retain(plVar5);
          }
          else {
            plVar5 = (long *)0x0;
            FUN_10059b2c8();
          }
          *(long **)(unaff_x22 + 0x478) = plVar5;
          piVar6 = *(int **)(*plVar5 + 0x50);
          iVar2 = *piVar6;
          plVar5 = (long *)(ulong)(uint)piVar6[1];
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x480) = plVar5;
          *plVar5 = unaff_x22;
          plVar5[1] = (long)FUN_10053e39c;
                    /* WARNING: Could not recover jumptable at 0x00010053df78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x418));
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10053dfbc);
        (*pcVar3)();
      }
    }
    _swift_bridgeObjectRelease(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010053dfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053dfbc | FUN_10053dfbc */

void FUN_10053dfbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x420);
  (**(code **)(unaff_x22 + 0x440))(uVar1,*(undefined8 *)(unaff_x22 + 0x430));
  *(undefined8 *)(unaff_x22 + 0x448) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053e014,uVar2,0);
  return;
}



/* Address: 0x10053e014 | FUN_10053e014 */

void FUN_10053e014(void)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  String *pSVar16;
  String SVar17;
  String SVar18;
  
  lVar15 = *(long *)(unaff_x22 + 0x448);
  pcVar6 = (char *)0x0;
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar15 + 0x20,unaff_x22 + 0x380);
  FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x2e0);
  uVar9 = *(ulong *)(unaff_x22 + 0x2f8);
  lVar13 = *(long *)(unaff_x22 + 0x300);
  FUN_100004640(unaff_x22 + 0x2e0,uVar9);
  (**(code **)(lVar13 + 0x70))(uVar9,lVar13);
  FUN_100004594(unaff_x22 + 0x2e0);
  if ((uVar9 & 0xff) == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x448);
    pSVar16 = *(String **)(unaff_x22 + 0x418);
    FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x308);
    uVar14 = *(undefined8 *)(unaff_x22 + 800);
    lVar13 = *(long *)(unaff_x22 + 0x328);
    FUN_100004640(unaff_x22 + 0x308,uVar14);
    puVar12 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)(unaff_x22 + 0x130);
    _swift_initStackObject();
    *(undefined8 *)(puVar12 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar12 + 0x18) = 2;
    *(undefined8 *)(puVar12 + 0x10) = 1;
    *(undefined1 **)(puVar12 + 0x28) = &DAT_e600000000000000;
    SVar17.bridgeObject = pcVar6;
    SVar17.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar17);
    SVar18.bridgeObject = pvVar7;
    SVar18.str = pcVar6;
    Swift::String::write(*pSVar16,SVar18);
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined8 *)(puVar12 + 0x38) = 0xe000000000000000;
    puVar12[0x58] = 0;
    puVar11 = puVar12;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar12);
    FUN_1000fb4c4(puVar12 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    *(undefined1 *)(unaff_x22 + 0xd0) = 0;
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad660;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar11;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x3dc;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad660;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar11;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x3dc;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 400);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x10,uVar14,lVar13);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x308);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x448));
  }
  lVar13 = *(long *)(unaff_x22 + 0x420);
  _swift_beginAccess(lVar13 + 0x110,unaff_x22 + 0x398,0,0);
  puVar12 = *(undefined **)(lVar13 + 0x110);
  if (*(long *)(puVar12 + 0x10) != 0) {
    lVar13 = **(long **)(unaff_x22 + 0x418);
    *(long *)(unaff_x22 + 0x450) = lVar13;
    uVar9 = (*(long **)(unaff_x22 + 0x418))[1];
    *(ulong *)(unaff_x22 + 0x458) = uVar9;
    _swift_bridgeObjectRetain(puVar12);
    FUN_100071370();
    puVar11 = puVar12;
    if ((uVar9 & 1) != 0) {
      puVar11 = *(undefined **)(*(long *)(puVar12 + 0x38) + lVar13 * 8);
      *(undefined **)(unaff_x22 + 0x460) = puVar11;
      _swift_bridgeObjectRetain(puVar11);
      _swift_bridgeObjectRelease(puVar12);
      if ((ulong)puVar11 >> 0x3e == 0) {
        lVar13 = *(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x468) = lVar13;
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          _Var1.unknown = puVar11;
        }
        lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        *(long *)(unaff_x22 + 0x468) = lVar13;
      }
      if (lVar13 != 0) {
        if (0 < lVar13) {
          *(undefined8 *)(unaff_x22 + 0x470) = 0;
          if ((*(ulong *)(unaff_x22 + 0x460) & 0xc000000000000001) == 0) {
            plVar4 = *(long **)(*(ulong *)(unaff_x22 + 0x460) + 0x20);
            _swift_retain(plVar4);
          }
          else {
            plVar4 = (long *)0x0;
            FUN_10059b2c8();
          }
          *(long **)(unaff_x22 + 0x478) = plVar4;
          piVar8 = *(int **)(*plVar4 + 0x50);
          iVar2 = *piVar8;
          plVar4 = (long *)(ulong)(uint)piVar8[1];
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x480) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_10053e39c;
                    /* WARNING: Could not recover jumptable at 0x00010053e34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x418));
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10053e39c);
        (*pcVar3)();
      }
    }
    _swift_bridgeObjectRelease(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010053e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053e39c | FUN_10053e39c */

void FUN_10053e39c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x488) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x480));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053e3f8;
  }
  else {
    pcVar1 = FUN_10053e4c0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x420),0);
  return;
}



/* Address: 0x10053e3f8 | FUN_10053e3f8 */

void FUN_10053e3f8(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x478));
  plVar3 = (long *)(*(long *)(unaff_x22 + 0x470) + 1);
  if (plVar3 == *(long **)(unaff_x22 + 0x468)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x460));
                    /* WARNING: Could not recover jumptable at 0x00010053e440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x470) = plVar3;
  if ((*(ulong *)(unaff_x22 + 0x460) & 0xc000000000000001) == 0) {
    plVar3 = *(long **)(*(ulong *)(unaff_x22 + 0x460) + (long)plVar3 * 8 + 0x20);
    _swift_retain(plVar3);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x478) = plVar3;
  piVar2 = *(int **)(*plVar3 + 0x50);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x480) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10053e39c;
                    /* WARNING: Could not recover jumptable at 0x00010053e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x418));
  return;
}



/* Address: 0x10053e4c0 | FUN_10053e4c0 */

void FUN_10053e4c0(void)

{
  int iVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x70);
  *(long *)(unaff_x22 + 0x490) = lVar5;
  if (lVar5 != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x420) + 0x78);
    *(long *)(unaff_x22 + 0x498) = lVar7;
    lVar2 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x4a0) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x4a8) = *(undefined8 *)(lVar7 + 0x10);
    uVar8 = *(undefined8 *)(lVar7 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10053e614,UVar3.unknown,uVar8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x488);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x478));
  _swift_errorRelease(uVar8);
  plVar6 = (long *)(*(long *)(unaff_x22 + 0x470) + 1);
  if (plVar6 == *(long **)(unaff_x22 + 0x468)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x460));
                    /* WARNING: Could not recover jumptable at 0x00010053e590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x470) = plVar6;
  if ((*(ulong *)(unaff_x22 + 0x460) & 0xc000000000000001) == 0) {
    plVar6 = *(long **)(*(ulong *)(unaff_x22 + 0x460) + (long)plVar6 * 8 + 0x20);
    _swift_retain(plVar6);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x478) = plVar6;
  piVar4 = *(int **)(*plVar6 + 0x50);
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x480) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10053e39c;
                    /* WARNING: Could not recover jumptable at 0x00010053e610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0x418));
  return;
}



/* Address: 0x10053e614 | FUN_10053e614 */

void FUN_10053e614(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x420);
  (**(code **)(unaff_x22 + 0x4a8))(uVar1,*(undefined8 *)(unaff_x22 + 0x498));
  *(undefined8 *)(unaff_x22 + 0x4b0) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053e66c,uVar2,0);
  return;
}



/* Address: 0x10053e66c | FUN_10053e66c */

void FUN_10053e66c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  lVar17 = *(long *)(unaff_x22 + 0x4b0);
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x3b0,0);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x330);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
  lVar16 = *(long *)(unaff_x22 + 0x350);
  FUN_100004640(unaff_x22 + 0x330,uVar12);
  (**(code **)(lVar16 + 0x70))(uVar12,lVar16);
  FUN_100004594(unaff_x22 + 0x330);
  if (((uint)uVar12 & 0xff) < 6) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x488);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x478);
    pcVar13 = *(char **)(unaff_x22 + 0x458);
    SVar19 = *(String *)(unaff_x22 + 0x450);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x358);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
    lVar16 = *(long *)(unaff_x22 + 0x378);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0xa0;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar2 + 0x18) = 4;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x3f8) = 0xe000000000000000;
    SVar18.bridgeObject = pcVar6;
    SVar18.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar18);
    *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x3f0);
    *(undefined8 *)(unaff_x22 + 1000) = *(undefined8 *)(unaff_x22 + 0x3f8);
    SVar20.bridgeObject = pvVar7;
    SVar20.str = pcVar6;
    Swift::String::write(SVar19,SVar20);
    uVar10 = *(undefined8 *)(unaff_x22 + 1000);
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x22 + 0x3e0);
    *(undefined8 *)(puVar2 + 0x38) = uVar10;
    puVar2[0x58] = 0;
    *(undefined8 *)(puVar2 + 0x60) = 0x726f727265;
    *(undefined1 **)(puVar2 + 0x68) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x400) = 0;
    *(undefined8 *)(unaff_x22 + 0x408) = 0xe000000000000000;
    SVar19.bridgeObject = pcVar6;
    SVar19.str = pcVar13;
    Swift::String::reserveCapacity(2,SVar19);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x400);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined1 *)(unaff_x22 + 0x2d8) = 0;
    _swift_getErrorValue(uVar11,unaff_x22 + 0x410,unaff_x22 + 0x3c8);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x3c8),*(undefined8 *)(unaff_x22 + 0x3d0));
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
    *(undefined8 *)(puVar2 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(puVar2 + 0x78) = uVar10;
    puVar2[0x98] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    puVar4 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x70) = 5;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad680;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 200) = 1000;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 5;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad680;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined **)(unaff_x22 + 0x210) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x248) = 1000;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x70,uVar12);
    _swift_release(uVar14);
    _swift_errorRelease(uVar11);
    _swift_release(uVar9);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x358);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x488);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x478));
    _swift_errorRelease(uVar12);
    _swift_release(uVar14);
  }
  plVar15 = (long *)(*(long *)(unaff_x22 + 0x470) + 1);
  if (plVar15 == *(long **)(unaff_x22 + 0x468)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x460));
                    /* WARNING: Could not recover jumptable at 0x00010053e9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x470) = plVar15;
  if ((*(ulong *)(unaff_x22 + 0x460) & 0xc000000000000001) == 0) {
    plVar15 = *(long **)(*(ulong *)(unaff_x22 + 0x460) + (long)plVar15 * 8 + 0x20);
    _swift_retain(plVar15);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x478) = plVar15;
  piVar8 = *(int **)(*plVar15 + 0x50);
  iVar1 = *piVar8;
  plVar15 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x480) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_10053e39c;
                    /* WARNING: Could not recover jumptable at 0x00010053ea6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x418));
  return;
}



/* Address: 0x10053ea70 | FUN_10053ea70 */

void FUN_10053ea70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x800) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x7f8) = param_1;
  _swift_task_switch(FUN_10053ea8c);
  return;
}



/* Address: 0x10053ea8c | FUN_10053ea8c */

void FUN_10053ea8c(void)

{
  int iVar1;
  String SVar2;
  UnownedSerialExecutor UVar3;
  code *pcVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x22;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  String SVar17;
  
  lVar14 = *(long *)(unaff_x22 + 0x800);
  lVar10 = *(long *)(lVar14 + 0x70);
  *(long *)(unaff_x22 + 0x808) = lVar10;
  if (lVar10 == 0) {
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x7f8) + 0x18);
    *(long *)(unaff_x22 + 0x830) = lVar10;
    puVar13 = *(undefined **)(*(long *)(unaff_x22 + 0x7f8) + 0x20);
    *(undefined **)(unaff_x22 + 0x838) = puVar13;
    _Var5.unknown = (undefined *)(unaff_x22 + 0x740);
    pcVar6 = (char *)0x0;
    pvVar7 = (void *)0x0;
    _swift_beginAccess(lVar14 + 0x118);
    lVar14 = *(long *)(lVar14 + 0x118);
    if (*(long *)(lVar14 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar14);
      FUN_100071370();
      if (((ulong)puVar13 & 1) != 0) {
        plVar9 = *(long **)(*(long *)(lVar14 + 0x38) + lVar10 * 8);
        *(long **)(unaff_x22 + 0x840) = plVar9;
        _swift_retain(plVar9);
        _swift_bridgeObjectRelease(lVar14);
        piVar8 = *(int **)(*plVar9 + 0x50);
        iVar1 = *piVar8;
        plVar9 = (long *)(ulong)(uint)piVar8[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x848) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_10053f2a8;
                    /* WARNING: Could not recover jumptable at 0x00010053ebc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar8))
                  (plVar9,unaff_x22 + 0x510,*(undefined8 *)(unaff_x22 + 0x7f8));
        return;
      }
      _swift_bridgeObjectRelease(lVar14);
      _Var5.unknown = puVar13;
    }
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x70);
    *(long *)(unaff_x22 + 0x868) = lVar10;
    if (lVar10 == 0) {
      SVar2 = *(String *)(unaff_x22 + 0x830);
      puVar15 = *(undefined8 **)(unaff_x22 + 0x7f8);
      Swift::_StringGuts::grow(0x12,_Var5);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar17.bridgeObject = pvVar7;
      SVar17.str = pcVar6;
      Swift::String::append(SVar2,SVar17);
      *(undefined8 *)(unaff_x22 + 0x890) = 0x8000000100dad600;
      uVar16 = puVar15[1];
      uVar12 = *puVar15;
      *(undefined1 *)(unaff_x22 + 0x7b0) = *(undefined1 *)(puVar15 + 2);
      *(undefined8 *)(unaff_x22 + 0x7a8) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x7a0) = uVar12;
      uVar16 = puVar15[1];
      uVar12 = *puVar15;
      *(undefined1 *)(unaff_x22 + 0x4e0) = *(undefined1 *)(puVar15 + 2);
      *(undefined8 *)(unaff_x22 + 0x4d8) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x4d0) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0xd000000000000010;
      *(undefined8 *)(unaff_x22 + 0x4f0) = 0x8000000100dad600;
      *(undefined8 *)(unaff_x22 + 0x4f8) = 0;
      *(undefined8 *)(unaff_x22 + 0x500) = 2;
      *(undefined2 *)(unaff_x22 + 0x508) = 0x100;
      _swift_bridgeObjectRetain();
      FUN_10054a890(unaff_x22 + 0x7a0,unaff_x22 + 0x7b8);
      plVar9 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x898) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10053f794;
      FUN_100530890(plVar9,unaff_x22 + 0x4d0);
      return;
    }
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x78);
    *(long *)(unaff_x22 + 0x870) = lVar11;
    lVar14 = lVar10;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x878) = lVar14;
    *(undefined8 *)(unaff_x22 + 0x880) = *(undefined8 *)(lVar11 + 0x10);
    uVar12 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar10);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10053f3d8;
  }
  else {
    lVar11 = *(long *)(lVar14 + 0x78);
    *(long *)(unaff_x22 + 0x810) = lVar11;
    lVar14 = lVar10;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x818) = lVar14;
    *(undefined8 *)(unaff_x22 + 0x820) = *(undefined8 *)(lVar11 + 0x10);
    uVar12 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar10);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10053ed34;
  }
  _swift_task_switch(pcVar4,UVar3.unknown,uVar12);
  return;
}



/* Address: 0x10053ed34 | FUN_10053ed34 */

void FUN_10053ed34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x818);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x800);
  (**(code **)(unaff_x22 + 0x820))(uVar1,*(undefined8 *)(unaff_x22 + 0x810));
  *(undefined8 *)(unaff_x22 + 0x828) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053ed8c,uVar2,0);
  return;
}



/* Address: 0x10053ed8c | FUN_10053ed8c */

void FUN_10053ed8c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  _StringGuts _Var5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  void *pvVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  
  lVar16 = *(long *)(unaff_x22 + 0x828);
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0x6b0,0);
  FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x550);
  uVar10 = *(ulong *)(unaff_x22 + 0x568);
  lVar12 = *(long *)(unaff_x22 + 0x570);
  FUN_100004640(unaff_x22 + 0x550,uVar10);
  (**(code **)(lVar12 + 0x70))(uVar10,lVar12);
  FUN_100004594(unaff_x22 + 0x550);
  if ((uVar10 & 0xff) == 0) {
    puVar17 = *(undefined8 **)(unaff_x22 + 0x7f8);
    FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x578);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x590);
    lVar12 = *(long *)(unaff_x22 + 0x598);
    FUN_100004640();
    puVar13 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar7 = (char *)0xa0;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar13 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar13 + 0x18) = 4;
    *(undefined8 *)(puVar13 + 0x10) = 2;
    *(undefined1 **)(puVar13 + 0x28) = &DAT_e600000000000000;
    SVar21.bridgeObject = pcVar6;
    SVar21.str = pcVar7;
    Swift::String::reserveCapacity(2,SVar21);
    pcVar7 = (char *)puVar17[4];
    SVar23.bridgeObject = pvVar8;
    SVar23.str = pcVar6;
    Swift::String::write(*(String *)(puVar17 + 3),SVar23);
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0xe000000000000000;
    puVar13[0x58] = 0;
    *(undefined1 **)(puVar13 + 0x60) = &SUB_00006469;
    *(undefined1 **)(puVar13 + 0x68) = &SUB_e200000000000000;
    SVar22.bridgeObject = pcVar6;
    SVar22.str = pcVar7;
    Swift::String::reserveCapacity(2,SVar22);
    if (*(char *)(puVar17 + 2) == '\x01') {
      *(char **)(unaff_x22 + 0x7e8) = (char *)*puVar17;
      SVar20 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar19 = *(void **)(*(long *)(unaff_x22 + 0x7f8) + 8);
      SVar20.bridgeObject = pvVar19;
      SVar20.str = (char *)*puVar17;
      _swift_bridgeObjectRetain(pvVar19);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x828);
    SVar24.bridgeObject = pvVar8;
    SVar24.str = pcVar6;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    *(undefined8 *)(puVar13 + 0x70) = 0;
    *(undefined8 *)(puVar13 + 0x78) = 0xe000000000000000;
    puVar13[0x98] = 0;
    puVar2 = puVar13;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar13);
    puVar3 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar13 + 0x20,2,puVar3);
    _swift_deallocClassInstance(puVar13,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad5a0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x3f3;
    *(undefined1 *)(unaff_x22 + 400) = 0;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dad5a0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined **)(unaff_x22 + 0x1b0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x3f3;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x1f0);
    FUN_1004eaa3c(unaff_x22 + 400);
    (**(code **)(lVar12 + 0x28))(unaff_x22 + 0x10,uVar15,lVar12);
    _swift_release(uVar18);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x578);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x828));
  }
  lVar16 = *(long *)(unaff_x22 + 0x800);
  lVar12 = *(long *)(*(long *)(unaff_x22 + 0x7f8) + 0x18);
  *(long *)(unaff_x22 + 0x830) = lVar12;
  puVar13 = *(undefined **)(*(long *)(unaff_x22 + 0x7f8) + 0x20);
  *(undefined **)(unaff_x22 + 0x838) = puVar13;
  _Var5.unknown = (undefined *)(unaff_x22 + 0x740);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar16 + 0x118);
  lVar16 = *(long *)(lVar16 + 0x118);
  if (*(long *)(lVar16 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar16);
    FUN_100071370();
    if (((ulong)puVar13 & 1) != 0) {
      plVar11 = *(long **)(*(long *)(lVar16 + 0x38) + lVar12 * 8);
      *(long **)(unaff_x22 + 0x840) = plVar11;
      _swift_retain(plVar11);
      _swift_bridgeObjectRelease(lVar16);
      piVar9 = *(int **)(*plVar11 + 0x50);
      iVar1 = *piVar9;
      plVar11 = (long *)(ulong)(uint)piVar9[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x848) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10053f2a8;
                    /* WARNING: Could not recover jumptable at 0x00010053f128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar9))
                (plVar11,unaff_x22 + 0x510,*(undefined8 *)(unaff_x22 + 0x7f8));
      return;
    }
    _swift_bridgeObjectRelease(lVar16);
    _Var5.unknown = puVar13;
  }
  lVar12 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x70);
  *(long *)(unaff_x22 + 0x868) = lVar12;
  if (lVar12 != 0) {
    lVar14 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x78);
    *(long *)(unaff_x22 + 0x870) = lVar14;
    lVar16 = lVar12;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x878) = lVar16;
    *(undefined8 *)(unaff_x22 + 0x880) = *(undefined8 *)(lVar14 + 0x10);
    uVar15 = *(undefined8 *)(lVar14 + 8);
    _swift_unknownObjectRetain(lVar12);
    UVar4 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10053f3d8,UVar4.unknown,uVar15);
    return;
  }
  SVar21 = *(String *)(unaff_x22 + 0x830);
  puVar17 = *(undefined8 **)(unaff_x22 + 0x7f8);
  Swift::_StringGuts::grow(0x12,_Var5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar25.bridgeObject = pvVar8;
  SVar25.str = pcVar7;
  Swift::String::append(SVar21,SVar25);
  *(undefined8 *)(unaff_x22 + 0x890) = 0x8000000100dad600;
  uVar18 = puVar17[1];
  uVar15 = *puVar17;
  *(undefined1 *)(unaff_x22 + 0x7b0) = *(undefined1 *)(puVar17 + 2);
  *(undefined8 *)(unaff_x22 + 0x7a8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x7a0) = uVar15;
  uVar18 = puVar17[1];
  uVar15 = *puVar17;
  *(undefined1 *)(unaff_x22 + 0x4e0) = *(undefined1 *)(puVar17 + 2);
  *(undefined8 *)(unaff_x22 + 0x4d8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x4e8) = 0xd000000000000010;
  *(undefined8 *)(unaff_x22 + 0x4f0) = 0x8000000100dad600;
  *(undefined8 *)(unaff_x22 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x22 + 0x500) = 2;
  *(undefined2 *)(unaff_x22 + 0x508) = 0x100;
  _swift_bridgeObjectRetain();
  FUN_10054a890(unaff_x22 + 0x7a0,unaff_x22 + 0x7b8);
  plVar11 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x898) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_10053f794;
  FUN_100530890(plVar11,unaff_x22 + 0x4d0);
  return;
}



/* Address: 0x10053f2a8 | FUN_10053f2a8 */

void FUN_10053f2a8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x850) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x848));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10053fd38,*(undefined8 *)(lVar2 + 0x800),0);
    return;
  }
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x858) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_10053f334;
  FUN_100530890(plVar1,lVar2 + 0x510);
  return;
}



/* Address: 0x10053f334 | FUN_10053f334 */

void FUN_10053f334(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x860) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x858));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053f390;
  }
  else {
    pcVar1 = FUN_10053fe6c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x800),0);
  return;
}



/* Address: 0x10053f390 | FUN_10053f390 */

void FUN_10053f390(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x840));
  FUN_1000fb4c4(unaff_x22 + 0x510,&DAT_100fcb3e0,&DAT_100c50230);
                    /* WARNING: Could not recover jumptable at 0x00010053f3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053f3d8 | FUN_10053f3d8 */

void FUN_10053f3d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x878);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x868);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x800);
  (**(code **)(unaff_x22 + 0x880))(uVar1,*(undefined8 *)(unaff_x22 + 0x870));
  *(undefined8 *)(unaff_x22 + 0x888) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053f430,uVar2,0);
  return;
}



/* Address: 0x10053f430 | FUN_10053f430 */

void FUN_10053f430(void)

{
  String SVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  _StringGuts _Var10;
  long unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0x888);
  pcVar6 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x710);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x5a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x5b8);
  _Var10.unknown = *(undefined **)(unaff_x22 + 0x5c0);
  FUN_100004640(unaff_x22 + 0x5a0,uVar9);
  (**(code **)(_Var10.unknown + 0x70))();
  FUN_100004594(unaff_x22 + 0x5a0);
  if (((uint)uVar9 & 0xff) < 5) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x888);
    SVar1 = *(String *)(unaff_x22 + 0x830);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x5c8);
    _Var10.unknown = *(undefined **)(unaff_x22 + 0x5e0);
    pcVar6 = *(char **)(unaff_x22 + 0x5e8);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0x60;
    pcVar7 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e600000000000000;
    SVar14.bridgeObject = pcVar7;
    SVar14.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar14);
    SVar15.bridgeObject = pvVar8;
    SVar15.str = pcVar7;
    Swift::String::write(SVar1,SVar15);
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x430) = 4;
    *(undefined8 *)(unaff_x22 + 0x438) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dad5d0;
    *(undefined8 *)(unaff_x22 + 0x448) = 0;
    *(undefined **)(unaff_x22 + 0x450) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x460) = 0;
    *(undefined8 *)(unaff_x22 + 0x458) = 0;
    *(undefined8 *)(unaff_x22 + 0x468) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x478) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x480) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x488) = 0x3f8;
    *(undefined1 *)(unaff_x22 + 0x250) = 4;
    *(undefined8 *)(unaff_x22 + 600) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100dad5d0;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined **)(unaff_x22 + 0x270) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x3f8;
    FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x2b0);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    (**(code **)(pcVar6 + 0x28))(unaff_x22 + 0x430);
    _swift_release(uVar9);
    FUN_1004eaa3c(unaff_x22 + 0x430);
    FUN_100004594(unaff_x22 + 0x5c8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x888));
  }
  SVar1 = *(String *)(unaff_x22 + 0x830);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x7f8);
  Swift::_StringGuts::grow(0x12,_Var10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar16.bridgeObject = pvVar8;
  SVar16.str = pcVar6;
  Swift::String::append(SVar1,SVar16);
  *(undefined8 *)(unaff_x22 + 0x890) = 0x8000000100dad600;
  uVar13 = puVar12[1];
  uVar9 = *puVar12;
  *(undefined1 *)(unaff_x22 + 0x7b0) = *(undefined1 *)(puVar12 + 2);
  *(undefined8 *)(unaff_x22 + 0x7a8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x7a0) = uVar9;
  uVar13 = puVar12[1];
  uVar9 = *puVar12;
  *(undefined1 *)(unaff_x22 + 0x4e0) = *(undefined1 *)(puVar12 + 2);
  *(undefined8 *)(unaff_x22 + 0x4d8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x4e8) = 0xd000000000000010;
  *(undefined8 *)(unaff_x22 + 0x4f0) = 0x8000000100dad600;
  *(undefined8 *)(unaff_x22 + 0x4f8) = 0;
  *(undefined8 *)(unaff_x22 + 0x500) = 2;
  *(undefined2 *)(unaff_x22 + 0x508) = 0x100;
  _swift_bridgeObjectRetain();
  FUN_10054a890(unaff_x22 + 0x7a0,unaff_x22 + 0x7b8);
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x898) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10053f794;
  FUN_100530890(plVar4,unaff_x22 + 0x4d0);
  return;
}



/* Address: 0x10053f794 | FUN_10053f794 */

void FUN_10053f794(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x8a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x898));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053f7f0;
  }
  else {
    pcVar1 = FUN_10053f83c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x800),0);
  return;
}



/* Address: 0x10053f7f0 | FUN_10053f7f0 */

void FUN_10053f7f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x890);
  FUN_1000fb4c4(unaff_x22 + 0x4d0,&DAT_100fcb3e0,&DAT_100c50230);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053f838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053f83c | FUN_10053f83c */

void FUN_10053f83c(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x70);
  *(long *)(unaff_x22 + 0x8a8) = lVar3;
  if (lVar3 != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x78);
    *(long *)(unaff_x22 + 0x8b0) = lVar5;
    lVar1 = lVar3;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x8b8) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar3);
    UVar2 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10053f910,UVar2.unknown,uVar6);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x8a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x890);
  FUN_1000fb4c4(unaff_x22 + 0x4d0,&DAT_100fcb3e0,&DAT_100c50230);
  _swift_bridgeObjectRelease(uVar6);
  _swift_errorRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010053f90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053f910 | FUN_10053f910 */

void FUN_10053f910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x8b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x8a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x800);
  (**(code **)(unaff_x22 + 0x8c0))(uVar1,*(undefined8 *)(unaff_x22 + 0x8b0));
  *(undefined8 *)(unaff_x22 + 0x8c8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10053f968,uVar2,0);
  return;
}



/* Address: 0x10053f968 | FUN_10053f968 */

void FUN_10053f968(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  String SVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x8c8);
  _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x6e0,0,0);
  FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x5f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x608);
  lVar7 = *(long *)(unaff_x22 + 0x610);
  FUN_100004640(unaff_x22 + 0x5f0,uVar5);
  (**(code **)(lVar7 + 0x70))(uVar5,lVar7);
  FUN_100004594(unaff_x22 + 0x5f0);
  if (((uint)uVar5 & 0xff) < 6) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x8c8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x8a0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x890);
    FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x640);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x658);
    lVar7 = *(long *)(unaff_x22 + 0x660);
    FUN_100004640(unaff_x22 + 0x640,uVar10);
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar3 = (char *)0x60;
    pvVar4 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x726f727265;
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
    SVar11.bridgeObject = pvVar4;
    SVar11.str = pcVar3;
    Swift::String::reserveCapacity(2,SVar11);
    _swift_getErrorValue(uVar8,unaff_x22 + 0x7e0,unaff_x22 + 0x6f8);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x6f8),*(undefined8 *)(unaff_x22 + 0x700));
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    FUN_1000fb4c4(puVar1 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar1,0x20,7);
    *(undefined1 *)(unaff_x22 + 0xd0) = 5;
    *(undefined1 *)(unaff_x22 + 0x130) = 5;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad620;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined **)(unaff_x22 + 0x150) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x400;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad620;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x400;
    FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x370);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x130,uVar10,lVar7);
    FUN_1000fb4c4(unaff_x22 + 0x4d0,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_errorRelease(uVar8);
    _swift_release(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    FUN_100004594(unaff_x22 + 0x640);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x8c8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x8a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x890);
    FUN_1000fb4c4(unaff_x22 + 0x4d0,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_errorRelease(uVar5);
    _swift_release(uVar6);
    _swift_bridgeObjectRelease(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010053fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053fc54 | FUN_10053fc54 */

void FUN_10053fc54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x8f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x8f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053fcb0;
  }
  else {
    pcVar1 = FUN_10053ffb8;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x800),0);
  return;
}



/* Address: 0x10053fcb0 | FUN_10053fcb0 */

void FUN_10053fcb0(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x8e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x8e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x8d8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x8d0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x4ca);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x840));
  _swift_errorRelease(uVar5);
  FUN_1000fb4c4(unaff_x22 + 0x490,&DAT_100fcb3e0,&DAT_100c50230);
  FUN_1004d9f84(uVar4,uVar2,uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053fd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053fd38 | FUN_10053fd38 */

void FUN_10053fd38(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  String SVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x850);
  *(undefined8 *)(unaff_x22 + 0x8d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x7d8) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  lVar3 = unaff_x22 + 0x690;
  _swift_dynamicCast(lVar3,unaff_x22 + 0x7d8,puVar2,&DAT_100eda9c8,6);
  if ((int)lVar3 == 0) {
    _swift_getErrorValue(uVar7,unaff_x22 + 2000,unaff_x22 + 0x758);
    SVar9 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    uVar7 = 0;
    uVar5 = 4;
  }
  else {
    SVar9 = *(String *)(unaff_x22 + 0x690);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x6a0);
    uVar5 = (ulong)*(byte *)(unaff_x22 + 0x6a8);
  }
  *(char *)(unaff_x22 + 0x4ca) = (char)uVar5;
  *(undefined8 *)(unaff_x22 + 0x8e8) = uVar7;
  *(String *)(unaff_x22 + 0x8d8) = SVar9;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x7f8);
  uVar1 = *(undefined1 *)(puVar6 + 2);
  uVar8 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x778) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x770) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x780) = uVar1;
  uVar1 = *(undefined1 *)(puVar6 + 2);
  uVar8 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x498) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x490) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x4a0) = uVar1;
  *(String *)(unaff_x22 + 0x4a8) = SVar9;
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar7;
  *(ulong *)(unaff_x22 + 0x4c0) = uVar5;
  *(undefined2 *)(unaff_x22 + 0x4c8) = 0x100;
  FUN_1004d9ee8();
  FUN_10054a890(unaff_x22 + 0x770,unaff_x22 + 0x788);
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x8f0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10053fc54;
  FUN_100530890(plVar4,unaff_x22 + 0x490);
  return;
}



/* Address: 0x10053fe6c | FUN_10053fe6c */

void FUN_10053fe6c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  String SVar9;
  
  FUN_1000fb4c4(unaff_x22 + 0x510,&DAT_100fcb3e0,&DAT_100c50230);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x860);
  *(undefined8 *)(unaff_x22 + 0x8d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x7d8) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  lVar3 = unaff_x22 + 0x690;
  _swift_dynamicCast(lVar3,unaff_x22 + 0x7d8,puVar2,&DAT_100eda9c8,6);
  if ((int)lVar3 == 0) {
    _swift_getErrorValue(uVar7,unaff_x22 + 2000,unaff_x22 + 0x758);
    SVar9 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    uVar7 = 0;
    uVar5 = 4;
  }
  else {
    SVar9 = *(String *)(unaff_x22 + 0x690);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x6a0);
    uVar5 = (ulong)*(byte *)(unaff_x22 + 0x6a8);
  }
  *(char *)(unaff_x22 + 0x4ca) = (char)uVar5;
  *(undefined8 *)(unaff_x22 + 0x8e8) = uVar7;
  *(String *)(unaff_x22 + 0x8d8) = SVar9;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x7f8);
  uVar1 = *(undefined1 *)(puVar6 + 2);
  uVar8 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x778) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x770) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x780) = uVar1;
  uVar1 = *(undefined1 *)(puVar6 + 2);
  uVar8 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x498) = puVar6[1];
  *(undefined8 *)(unaff_x22 + 0x490) = uVar8;
  *(undefined1 *)(unaff_x22 + 0x4a0) = uVar1;
  *(String *)(unaff_x22 + 0x4a8) = SVar9;
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar7;
  *(ulong *)(unaff_x22 + 0x4c0) = uVar5;
  *(undefined2 *)(unaff_x22 + 0x4c8) = 0x100;
  FUN_1004d9ee8();
  FUN_10054a890(unaff_x22 + 0x770,unaff_x22 + 0x788);
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x8f0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10053fc54;
  FUN_100530890(plVar4,unaff_x22 + 0x490);
  return;
}



/* Address: 0x10053ffb8 | FUN_10053ffb8 */

void FUN_10053ffb8(void)

{
  undefined1 uVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x70);
  *(long *)(unaff_x22 + 0x900) = lVar4;
  if (lVar4 != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x800) + 0x78);
    *(long *)(unaff_x22 + 0x908) = lVar6;
    lVar2 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x910) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x918) = *(undefined8 *)(lVar6 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1005400c4,UVar3.unknown,uVar7);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x8f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x8e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x8e0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x8d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x8d0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x4ca);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x840));
  _swift_errorRelease(uVar10);
  FUN_1000fb4c4(unaff_x22 + 0x490,&DAT_100fcb3e0,&DAT_100c50230);
  FUN_1004d9f84(uVar9,uVar8,uVar7,uVar1);
  _swift_errorRelease(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001005400c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005400c4 | FUN_1005400c4 */

void FUN_1005400c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x910);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x900);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x800);
  (**(code **)(unaff_x22 + 0x918))(uVar1,*(undefined8 *)(unaff_x22 + 0x908));
  *(undefined8 *)(unaff_x22 + 0x920) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10054011c,uVar2,0);
  return;
}



/* Address: 0x10054011c | FUN_10054011c */

void FUN_10054011c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0x920);
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x728,0,0);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x618);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x630);
  lVar9 = *(long *)(unaff_x22 + 0x638);
  FUN_100004640(unaff_x22 + 0x618,uVar6);
  (**(code **)(lVar9 + 0x70))(uVar6,lVar9);
  FUN_100004594(unaff_x22 + 0x618);
  if (((uint)uVar6 & 0xff) < 6) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x920);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x8f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x8e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x8d8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x8d0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x840);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x4ca);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x668);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x680);
    lVar9 = *(long *)(unaff_x22 + 0x688);
    FUN_100004640(unaff_x22 + 0x668,uVar7);
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pvVar5 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x726f727265;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e500000000000000;
    SVar16.bridgeObject = pvVar5;
    SVar16.str = pcVar4;
    Swift::String::reserveCapacity(2,SVar16);
    _swift_getErrorValue(uVar15,unaff_x22 + 0x7f0,unaff_x22 + 0x6c8);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x6c8),*(undefined8 *)(unaff_x22 + 0x6d0));
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x310) = 5;
    *(undefined8 *)(unaff_x22 + 0x318) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dad620;
    *(undefined8 *)(unaff_x22 + 0x328) = 0;
    *(undefined **)(unaff_x22 + 0x330) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x340) = 0;
    *(undefined8 *)(unaff_x22 + 0x338) = 0;
    *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x368) = 0x410;
    *(undefined1 *)(unaff_x22 + 0x3d0) = 5;
    *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100dad620;
    *(undefined8 *)(unaff_x22 + 1000) = 0;
    *(undefined **)(unaff_x22 + 0x3f0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x400) = 0;
    *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x408) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x418) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x420) = 0x8000000100dad580;
    *(undefined8 *)(unaff_x22 + 0x428) = 0x410;
    FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0x70);
    FUN_1004eaa3c(unaff_x22 + 0x3d0);
    (**(code **)(lVar9 + 0x28))(unaff_x22 + 0x310,uVar7,lVar9);
    _swift_release(uVar13);
    FUN_1000fb4c4(unaff_x22 + 0x490,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_errorRelease(uVar15);
    _swift_release(uVar12);
    FUN_1004d9f84(uVar8,uVar6,uVar14,uVar1);
    _swift_errorRelease(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x310);
    FUN_100004594(unaff_x22 + 0x668);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x920);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x8f8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x8e0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x8d8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x8d0);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x4ca);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x840));
    FUN_1000fb4c4(unaff_x22 + 0x490,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_errorRelease(uVar6);
    _swift_release(uVar8);
    FUN_1004d9f84(uVar13,uVar12,uVar10,uVar1);
    _swift_errorRelease(uVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010054049c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005404a0 | FUN_1005404a0 */

void FUN_1005404a0(_StringGuts param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  uint6 local_68 [2];
  undefined1 auStack_58 [24];
  char local_32 [2];
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xe9);
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_58);
  if (*(char *)(unaff_x20 + 0xe9) == '\x01') {
    if (((ulong)*(uint6 *)(unaff_x20 + 0xea) & 0xff0000) == 0x40000) {
      uVar4 = 0x8000000100dad720;
      uVar5 = 0xd000000000000023;
    }
    else {
      local_68[0] = *(uint6 *)(unaff_x20 + 0xea);
      _swift_getAtKeyPath(local_32,local_68);
      if (local_32[0] != '\x03') {
        return;
      }
      local_68[0]._0_8_ = 0;
      local_68[1]._0_8_ = 0xe000000000000000;
      Swift::_StringGuts::grow(0x21,param_1);
      _swift_bridgeObjectRelease((undefined8)local_68[1]);
      local_68[0]._0_8_ = param_2;
      local_68[1]._0_8_ = param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar6.bridgeObject = (void *)0x8000000100dad750;
      SVar6.str = (char *)0xd00000000000001f;
      SVar7.bridgeObject = pvVar3;
      SVar7.str = pcVar2;
      Swift::String::append(SVar6,SVar7);
      uVar4 = (undefined8)local_68[1];
      uVar5 = (undefined8)local_68[0];
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100540600 | FUN_100540600 */

void FUN_100540600(_StringGuts param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  uint6 local_68 [2];
  undefined1 auStack_58 [24];
  char local_31;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xe9);
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_58);
  if (*(char *)(unaff_x20 + 0xe9) == '\x01') {
    if (((ulong)*(uint6 *)(unaff_x20 + 0xea) & 0xff0000) == 0x40000) {
      uVar4 = 0x8000000100dad720;
      uVar5 = 0xd000000000000023;
    }
    else {
      local_68[0] = *(uint6 *)(unaff_x20 + 0xea);
      _swift_getAtKeyPath(&local_31,local_68);
      if (local_31 != '\x02') {
        return;
      }
      local_68[0]._0_8_ = 0;
      local_68[1]._0_8_ = 0xe000000000000000;
      Swift::_StringGuts::grow(0x21,param_1);
      _swift_bridgeObjectRelease((undefined8)local_68[1]);
      local_68[0]._0_8_ = param_2;
      local_68[1]._0_8_ = param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar6.bridgeObject = (void *)0x8000000100dad750;
      SVar6.str = (char *)0xd00000000000001f;
      SVar7.bridgeObject = pvVar3;
      SVar7.str = pcVar2;
      Swift::String::append(SVar6,SVar7);
      uVar4 = (undefined8)local_68[1];
      uVar5 = (undefined8)local_68[0];
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}


