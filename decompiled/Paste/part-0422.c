/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10053a0bc | FUN_10053a0bc */

void FUN_10053a0bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053a118;
  }
  else {
    pcVar1 = FUN_10053a18c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053a118 | FUN_10053a118 */

void FUN_10053a118(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053a12c,*(undefined8 *)(unaff_x22 + 0x38),0);
  return;
}



/* Address: 0x10053a12c | FUN_10053a12c */

void FUN_10053a12c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined1 *)(unaff_x22 + 0x88));
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010053a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053a18c | FUN_10053a18c */

void FUN_10053a18c(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053a1a0,*(undefined8 *)(unaff_x22 + 0x38),0);
  return;
}



/* Address: 0x10053a1a0 | FUN_10053a1a0 */

void FUN_10053a1a0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined1 *)(unaff_x22 + 0x88));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053a1f4 | FUN_10053a1f4 */

void FUN_10053a1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x90) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  _swift_task_switch(FUN_10053a258);
  return;
}



/* Address: 0x10053a258 | FUN_10053a258 */

/* WARNING: Removing unreachable block (ram,0x00010053a358) */
/* WARNING: Removing unreachable block (ram,0x00010053a2b0) */
/* WARNING: Removing unreachable block (ram,0x00010053a370) */

void FUN_10053a258(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  undefined8 uVar10;
  String SVar11;
  
  puVar4 = &DAT_100c55890;
  _swift_getKeyPath(&DAT_100c55890);
  uVar9 = 0;
  FUN_100540760();
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(puVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  UVar5 = Foundation::UUID::init();
  SVar11 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar6 + 8))(uVar2);
  *(String *)(unaff_x22 + 0x10) = SVar11;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x2f7374706d6f7270;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xeb00000000746567;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  lVar6 = unaff_x22 + 0x10;
  FUN_100531098();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined1 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053a41c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x10053a41c | FUN_10053a41c */

void FUN_10053a41c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053a478;
  }
  else {
    pcVar1 = FUN_10053a51c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053a478 | FUN_10053a478 */

void FUN_10053a478(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_switch(FUN_10053a49c,*(undefined8 *)(unaff_x22 + 0x88),0);
  return;
}



/* Address: 0x10053a49c | FUN_10053a49c */

void FUN_10053a49c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce8e0,&DAT_100c558b0);
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x10053a51c | FUN_10053a51c */

void FUN_10053a51c(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053a530,*(undefined8 *)(unaff_x22 + 0x88),0);
  return;
}



/* Address: 0x10053a530 | FUN_10053a530 */

void FUN_10053a530(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar1);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce8e0,&DAT_100c558b0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010053a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053a594 | FUN_10053a594 */

void FUN_10053a594(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  _swift_task_switch(FUN_10053a5f8);
  return;
}



/* Address: 0x10053a5f8 | FUN_10053a5f8 */

/* WARNING: Removing unreachable block (ram,0x00010053a6e8) */
/* WARNING: Removing unreachable block (ram,0x00010053a650) */
/* WARNING: Removing unreachable block (ram,0x00010053a708) */

void FUN_10053a5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar4 = &DAT_100c55890;
  _swift_getKeyPath(&DAT_100c55890);
  uVar9 = 0;
  FUN_100540760();
  lVar6 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(puVar4);
  UVar5 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar6 + 8))(uVar2);
  *(void **)(unaff_x22 + 0x98) = SVar10.bridgeObject;
  *(char **)(unaff_x22 + 0xa0) = SVar10.str;
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x2f7374706d6f7270;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xec0000007473696c;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_100531320();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined1 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053a7b4;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10053a7b4 | FUN_10053a7b4 */

void FUN_10053a7b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053a810;
  }
  else {
    pcVar1 = FUN_10053a8dc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053a810 | FUN_10053a810 */

void FUN_10053a810(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_switch(FUN_10053a83c,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053a83c | FUN_10053a83c */

void FUN_10053a83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar3);
  FUN_1004dc818(uVar1,uVar4,0);
  _swift_bridgeObjectRelease(0xec0000007473696c);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010053a8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x10053a8dc | FUN_10053a8dc */

void FUN_10053a8dc(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053a8f0,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053a8f0 | FUN_10053a8f0 */

void FUN_10053a8f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x98),0);
  _swift_bridgeObjectRelease(0xec0000007473696c);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010053a960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053a964 | FUN_10053a964 */

void FUN_10053a964(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  _swift_task_switch(FUN_10053a9c8);
  return;
}



/* Address: 0x10053a9c8 | FUN_10053a9c8 */

/* WARNING: Removing unreachable block (ram,0x00010053aabc) */
/* WARNING: Removing unreachable block (ram,0x00010053aa28) */
/* WARNING: Removing unreachable block (ram,0x00010053aad0) */

void FUN_10053a9c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar4 = &DAT_100c558c8;
  _swift_getKeyPath(&DAT_100c558c8);
  uVar9 = 0x73;
  FUN_1005404a0();
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(puVar4);
  UVar5 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar5);
  *(void **)(unaff_x22 + 0x88) = SVar10.bridgeObject;
  (**(code **)(lVar6 + 8))(uVar2);
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x656372756f736572;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xee00646165722f73;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_1005315b8();
  *(long *)(unaff_x22 + 0x90) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar8;
  *(undefined1 *)(unaff_x22 + 200) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053ab7c;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10053ab7c | FUN_10053ab7c */

void FUN_10053ab7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053abd8;
  }
  else {
    pcVar1 = FUN_10053ac78;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053abd8 | FUN_10053abd8 */

void FUN_10053abd8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_switch(FUN_10053abf4,*(undefined8 *)(unaff_x22 + 0x68),0);
  return;
}



/* Address: 0x10053abf4 | FUN_10053abf4 */

void FUN_10053abf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
                *(undefined1 *)(unaff_x22 + 200));
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010053ac74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Address: 0x10053ac78 | FUN_10053ac78 */

void FUN_10053ac78(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053ac8c,*(undefined8 *)(unaff_x22 + 0x68),0);
  return;
}



/* Address: 0x10053ac8c | FUN_10053ac8c */

void FUN_10053ac8c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
                *(undefined1 *)(unaff_x22 + 200));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010053ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053acec | FUN_10053acec */

void FUN_10053acec(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  _swift_task_switch(FUN_10053ad50);
  return;
}



/* Address: 0x10053ad50 | FUN_10053ad50 */

/* WARNING: Removing unreachable block (ram,0x00010053ae44) */
/* WARNING: Removing unreachable block (ram,0x00010053adb0) */
/* WARNING: Removing unreachable block (ram,0x00010053ae64) */

void FUN_10053ad50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar4 = &DAT_100c558c8;
  _swift_getKeyPath(&DAT_100c558c8);
  uVar9 = 0x73;
  FUN_1005404a0();
  lVar6 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(puVar4);
  UVar5 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar6 + 8))(uVar2);
  *(void **)(unaff_x22 + 0x98) = SVar10.bridgeObject;
  *(char **)(unaff_x22 + 0xa0) = SVar10.str;
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x656372756f736572;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xee007473696c2f73;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_100531850();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined1 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053af10;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10053af10 | FUN_10053af10 */

void FUN_10053af10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053af6c;
  }
  else {
    pcVar1 = FUN_10053b03c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053af6c | FUN_10053af6c */

void FUN_10053af6c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_switch(FUN_10053af98,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053af98 | FUN_10053af98 */

void FUN_10053af98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar3);
  FUN_1004dc818(uVar1,uVar4,0);
  _swift_bridgeObjectRelease(0xee007473696c2f73);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010053b038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x10053b03c | FUN_10053b03c */

void FUN_10053b03c(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053b050,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053b050 | FUN_10053b050 */

void FUN_10053b050(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x98),0);
  _swift_bridgeObjectRelease(0xee007473696c2f73);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010053b0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053b0c8 | FUN_10053b0c8 */

void FUN_10053b0c8(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x60) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  _swift_task_switch(FUN_10053b12c);
  return;
}



/* Address: 0x10053b12c | FUN_10053b12c */

/* WARNING: Removing unreachable block (ram,0x00010053b210) */
/* WARNING: Removing unreachable block (ram,0x00010053b224) */

void FUN_10053b12c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  Task TVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 in_x3;
  long unaff_x22;
  String SVar11;
  
  puVar4 = &DAT_100c558f8;
  _swift_getKeyPath(&DAT_100c558f8);
  uVar10 = 0xd0;
  FUN_100540600();
  _swift_release(puVar4);
  lVar6 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  UVar5 = Foundation::UUID::init();
  SVar11 = Foundation::UUID::get_uuidString(UVar5);
  *(void **)(unaff_x22 + 0x78) = SVar11.bridgeObject;
  (**(code **)(lVar6 + 8))(uVar2);
  *(String *)(unaff_x22 + 0x10) = SVar11;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000013;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad3f0;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_100531ae8();
  *(long *)(unaff_x22 + 0x80) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  *(undefined1 *)(unaff_x22 + 0xa8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  TVar8.unknown = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053b2cc;
  Swift::Task::get_value(TVar8);
  return;
}



/* Address: 0x10053b2cc | FUN_10053b2cc */

void FUN_10053b2cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053b328;
  }
  else {
    pcVar1 = FUN_10053b3a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053b328 | FUN_10053b328 */

void FUN_10053b328(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053b33c,*(undefined8 *)(unaff_x22 + 0x58),0);
  return;
}



/* Address: 0x10053b33c | FUN_10053b33c */

void FUN_10053b33c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined1 *)(unaff_x22 + 0xa8));
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010053b3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053b3a8 | FUN_10053b3a8 */

void FUN_10053b3a8(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053b3bc,*(undefined8 *)(unaff_x22 + 0x58),0);
  return;
}



/* Address: 0x10053b3bc | FUN_10053b3bc */

void FUN_10053b3bc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined1 *)(unaff_x22 + 0xa8));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010053b418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053b41c | FUN_10053b41c */

void FUN_10053b41c(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  _swift_task_switch(FUN_10053b480);
  return;
}



/* Address: 0x10053b480 | FUN_10053b480 */

/* WARNING: Removing unreachable block (ram,0x00010053b574) */
/* WARNING: Removing unreachable block (ram,0x00010053b4dc) */
/* WARNING: Removing unreachable block (ram,0x00010053b594) */

void FUN_10053b480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar4 = &DAT_100c558c8;
  _swift_getKeyPath(&DAT_100c558c8);
  uVar9 = 0x73;
  FUN_1005404a0();
  lVar6 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(puVar4);
  UVar5 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar6 + 8))(uVar2);
  *(void **)(unaff_x22 + 0x98) = SVar10.bridgeObject;
  *(char **)(unaff_x22 + 0xa0) = SVar10.str;
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000018;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad410;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_100531d80();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined1 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053b640;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10053b640 | FUN_10053b640 */

void FUN_10053b640(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053b69c;
  }
  else {
    pcVar1 = FUN_10053b774;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053b69c | FUN_10053b69c */

void FUN_10053b69c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_switch(FUN_10053b6c8,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053b6c8 | FUN_10053b6c8 */

void FUN_10053b6c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar3);
  FUN_1004dc818(uVar1,uVar4,0);
  _swift_bridgeObjectRelease(0x8000000100dad410);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010053b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x10053b774 | FUN_10053b774 */

void FUN_10053b774(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053b788,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053b788 | FUN_10053b788 */

void FUN_10053b788(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x98),0);
  _swift_bridgeObjectRelease(0x8000000100dad410);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010053b804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053b808 | FUN_10053b808 */

void FUN_10053b808(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  _swift_task_switch(FUN_10053b86c);
  return;
}



/* Address: 0x10053b86c | FUN_10053b86c */

/* WARNING: Removing unreachable block (ram,0x00010053b958) */
/* WARNING: Removing unreachable block (ram,0x00010053b8c0) */
/* WARNING: Removing unreachable block (ram,0x00010053b97c) */

void FUN_10053b86c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 in_x3;
  long unaff_x22;
  String SVar10;
  
  puVar4 = &DAT_100c55938;
  _swift_getKeyPath(&DAT_100c55938);
  uVar9 = 0;
  FUN_100540760();
  lVar6 = *(long *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_release(puVar4);
  UVar5 = Foundation::UUID::init();
  SVar10 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar6 + 8))(uVar2);
  *(void **)(unaff_x22 + 0x98) = SVar10.bridgeObject;
  *(char **)(unaff_x22 + 0xa0) = SVar10.str;
  *(String *)(unaff_x22 + 0x10) = SVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x696c2f736c6f6f74;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xea00000000007473;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = unaff_x22 + 0x10;
  FUN_100532018();
  *(long *)(unaff_x22 + 0xa8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
  *(undefined1 *)(unaff_x22 + 0xf0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_x3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10053ba28;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x10053ba28 | FUN_10053ba28 */

void FUN_10053ba28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053ba84;
  }
  else {
    pcVar1 = FUN_10053bb4c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10053ba84 | FUN_10053ba84 */

void FUN_10053ba84(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_switch(FUN_10053bab0,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053bab0 | FUN_10053bab0 */

void FUN_10053bab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar3);
  FUN_1004dc818(uVar1,uVar4,0);
  _swift_bridgeObjectRelease(0xea00000000007473);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010053bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8),
             *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x10053bb4c | FUN_10053bb4c */

void FUN_10053bb4c(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10053bb60,*(undefined8 *)(unaff_x22 + 0x78),0);
  return;
}



/* Address: 0x10053bb60 | FUN_10053bb60 */

void FUN_10053bb60(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined1 *)(unaff_x22 + 0xf0));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x98),0);
  _swift_bridgeObjectRelease(0xea00000000007473);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010053bbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053bbd0 | FUN_10053bbd0 */

void FUN_10053bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf0) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  _swift_task_switch(FUN_10053bc38);
  return;
}



/* Address: 0x10053bc38 | FUN_10053bc38 */

/* WARNING: Removing unreachable block (ram,0x00010053bd38) */
/* WARNING: Removing unreachable block (ram,0x00010053bc8c) */
/* WARNING: Removing unreachable block (ram,0x00010053bd50) */

void FUN_10053bc38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  UUID UVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 in_x3;
  long unaff_x22;
  String SVar12;
  
  puVar6 = &DAT_100c55938;
  _swift_getKeyPath(&DAT_100c55938);
  uVar11 = 0;
  FUN_100540760();
  lVar8 = *(long *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(puVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  UVar7 = Foundation::UUID::init();
  SVar12 = Foundation::UUID::get_uuidString(UVar7);
  (**(code **)(lVar8 + 8))(uVar3);
  *(String *)(unaff_x22 + 0x10) = SVar12;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x61632f736c6f6f74;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xea00000000006c6c;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  lVar8 = unaff_x22 + 0x10;
  FUN_1005322b0();
  *(long *)(unaff_x22 + 0x108) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar10;
  *(undefined1 *)(unaff_x22 + 0x130) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x118) = in_x3;
  plVar9 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar9;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_10053bdfc;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10053bdfc | FUN_10053bdfc */

void FUN_10053bdfc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x120));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0xe8);
    pcVar1 = FUN_10053be5c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0xe8);
    pcVar1 = FUN_10053bf00;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10053be5c | FUN_10053be5c */

void FUN_10053be5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                *(undefined1 *)(unaff_x22 + 0x130));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce8e8,&DAT_100c55960);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_bridgeObjectRetain(uVar2);
  FUN_100545970(unaff_x22 + 0x90);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xb9);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010053befc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3);
  return;
}



/* Address: 0x10053bf00 | FUN_10053bf00 */

void FUN_10053bf00(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                *(undefined1 *)(unaff_x22 + 0x130));
  _swift_release(uVar1);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fce8e8,&DAT_100c55960);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010053bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053bf64 | FUN_10053bf64 */

/* WARNING: Removing unreachable block (ram,0x00010053c09c) */

String * FUN_10053bf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  UUID UVar1;
  undefined *puVar2;
  UUID UVar3;
  long extraout_x8;
  String *unaff_x20;
  long unaff_x21;
  long lVar4;
  String SVar5;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_b0 = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &DAT_100c55938;
  _swift_getKeyPath(&DAT_100c55938);
  FUN_100540760();
  _swift_release(puVar2);
  if (unaff_x21 == 0) {
    local_b8 = param_4;
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    UVar3 = Foundation::UUID::init();
    SVar5 = Foundation::UUID::get_uuidString(UVar3);
    (**(code **)(lVar4 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
    local_98 = 0;
    local_90 = 0x61632f736c6f6f74;
    uStack_88 = 0xea00000000006c6c;
    local_80 = local_b8;
    uStack_78 = local_b0;
    unaff_x20 = &local_a8;
    local_a8 = SVar5;
    local_70 = param_2;
    uStack_68 = param_3;
    FUN_1005322b0(unaff_x20);
    FUN_1000fb4c4(&local_a8,&DAT_100fce8e8,&DAT_100c55960);
  }
  return unaff_x20;
}



/* Address: 0x10053c114 | FUN_10053c114 */

void FUN_10053c114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100edd358;
  _swift_allocObject(&DAT_100edd358,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100edd380;
  _swift_allocObject(&DAT_100edd380,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &DAT_100c55970;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar3 = &DAT_100fce8f0;
  FUN_1000f7830(&DAT_100fce8f0,&DAT_100c55988);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = &DAT_100c55980;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_beginAccess(unaff_x20 + 0x118,auStack_58,0x21,0);
  _swift_retain(param_2);
  _swift_retain(puVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,0xd000000000000016,0x8000000100dad430,uVar4);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar5;
  _swift_endAccess(auStack_58);
  _swift_retain();
  _swift_release(puVar1);
  return;
}



/* Address: 0x10053c248 | FUN_10053c248 */

void FUN_10053c248(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_2[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
  uVar3 = param_2[0x10];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2[0x12];
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  uVar3 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_2[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10053c2dc;
                    /* WARNING: Could not recover jumptable at 0x00010053c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,unaff_x22 + 0xa8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10053c2dc | FUN_10053c2dc */

void FUN_10053c2dc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x110);
    uVar5 = *(undefined8 *)(lVar2 + 0xb0);
    uVar4 = *(undefined8 *)(lVar2 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xb8);
    uVar8 = *(undefined8 *)(lVar2 + 0xd0);
    uVar7 = *(undefined8 *)(lVar2 + 200);
    puVar1[3] = *(undefined8 *)(lVar2 + 0xc0);
    puVar1[2] = uVar6;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0xe0);
    uVar4 = *(undefined8 *)(lVar2 + 0xd8);
    uVar7 = *(undefined8 *)(lVar2 + 0xf0);
    uVar6 = *(undefined8 *)(lVar2 + 0xe8);
    uVar9 = *(undefined8 *)(lVar2 + 0x100);
    uVar8 = *(undefined8 *)(lVar2 + 0xf8);
    puVar1[0xc] = *(undefined8 *)(lVar2 + 0x108);
    puVar1[9] = uVar7;
    puVar1[8] = uVar6;
    puVar1[0xb] = uVar9;
    puVar1[10] = uVar8;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010053c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10053c350 | FUN_10053c350 */

void FUN_10053c350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100edd3a8;
  _swift_allocObject(&DAT_100edd3a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100edd3d0;
  _swift_allocObject(&DAT_100edd3d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &DAT_100c55998;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar3 = &DAT_100fce8f8;
  FUN_1000f7830(&DAT_100fce8f8,&DAT_100c559b0);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = &DAT_100c559a8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_beginAccess(unaff_x20 + 0x118,auStack_58,0x21,0);
  _swift_retain(param_2);
  _swift_retain(puVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,0xd000000000000012,0x8000000100dad450,uVar4);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar5;
  _swift_endAccess(auStack_58);
  _swift_retain();
  _swift_release(puVar1);
  return;
}


