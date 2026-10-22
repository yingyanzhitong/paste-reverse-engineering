/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004784e0 | FUN_1004784e0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004785c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004784e0(undefined8 param_1,undefined8 param_2)

{
  DirectoryHint DVar1;
  URL UVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  long lVar2;
  
  DVar1 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  lVar2 = CONCAT71((int7)((ulong)param_2 >> 8),DVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100478338(lVar6);
  local_60 = 0x70636d;
  uStack_58 = 0xe300000000000000;
  lVar4 = lVar5;
  (**(code **)(lVar7 + 0x68))
            (lVar5,*(undefined4 *)
                    PTR___enum_case_for_Foundation_URL_DirectoryHint_inferFromPath_Foundation_URL_DirectoryHint_Type___>_Foundation_URL_DirectoryHint_100ea7080
             ,lVar2);
  FUN_10045b990();
  Foundation::URL::_appending
            (param_1,lVar4,lVar5,PTR___type_metadata_for_Swift_String_100eac208,lVar4);
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  (**(code **)(lVar8 + 8))(lVar6,UVar3.unknown);
  return;
}



/* Address: 0x100478604 | FUN_100478604 */

undefined8 FUN_100478604(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::_storedMcpPort);
  _swift_beginAccess(puVar1,auStack_a0,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_68 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_58 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar6;
  local_60 = uVar4;
  local_50 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return local_88;
}



/* Address: 0x1004786ec | FUN_1004786ec */

void FUN_1004786ec(void)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100478734;
  FUN_10047b81c();
  return;
}



/* Address: 0x100478734 | FUN_100478734 */

void FUN_100478734(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  plVar1 = (long *)0x390;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x20) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1000d8d44;
  FUN_10047900c();
  return;
}



/* Address: 0x100478790 | FUN_100478790 */

void FUN_100478790(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC8PasteMCP9MCPServer::currentState;
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::currentState,auStack_48,0,0);
  FUN_1000c495c(unaff_x20 + lVar1,param_1,FUN_10047e424);
  return;
}



/* Address: 0x1004787ec | FUN_1004787ec */

void FUN_1004787ec(void)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  
  puVar2 = &DAT_100fc86b0;
  FUN_1000037f0(&DAT_100fc86b0,&DAT_100c4d318);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  BVar1.value = 0;
  FUN_10047e424();
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffc0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  Swift::AsyncStream::_init(BVar1);
  return;
}



/* Address: 0x1004788a4 | FUN_1004788a4 */

void FUN_1004788a4(Continuation *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  UUID UVar4;
  TaskPriority TVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  code *local_80;
  long local_78;
  Continuation *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc7d28;
  local_70 = param_1;
  local_68 = param_2;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  local_78 = *(long *)(puVar2 + -8);
  lVar16 = *(long *)(local_78 + 0x40);
  local_b0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_b0 - extraout_x8;
  puVar3 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar10 - extraout_x8_00;
  local_90 = lVar15;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  lVar13 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar12 - extraout_x12;
  Foundation::UUID::init();
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(lVar15,1,1,TVar5.unknown);
  local_80 = *(code **)(lVar7 + 0x10);
  (*local_80)(lVar12,lVar12 - extraout_x12,UVar4.unknown);
  lVar15 = local_78;
  (**(code **)(local_78 + 0x10))(lVar10,param_1,puVar2);
  uVar14 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar14 + 0x28 & (uVar14 ^ 0xffffffffffffffff);
  local_a0 = uVar14 | 7;
  uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar9 = lVar13 + uVar6 + uVar8 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed7200;
  local_98 = lVar7;
  _swift_allocObject(&DAT_100ed7200,uVar9 + lVar16,local_a0 | uVar6);
  uVar1 = local_68;
  lVar12 = local_a8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = local_68;
  pcVar11 = *(code **)(lVar7 + 0x20);
  (*pcVar11)(puVar2 + uVar8,local_a8,UVar4.unknown);
  (**(code **)(lVar15 + 0x20))(puVar2 + uVar9,lVar10,local_b0);
  _swift_retain(uVar1);
  FUN_100477f48(0,0,local_90,&DAT_100c4d6a8,puVar2);
  _swift_release();
  lVar15 = local_88;
  (*local_80)(lVar12,local_88,UVar4.unknown);
  uVar6 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed7228;
  _swift_allocObject(&DAT_100ed7228,uVar6 + lVar13,local_a0);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  (*pcVar11)(puVar2 + uVar6,lVar12,UVar4.unknown);
  _swift_retain(uVar1);
  Swift::AsyncStream::Continuation::_set_onTermination(local_70);
  (**(code **)(local_98 + 8))(lVar15,UVar4.unknown);
  return;
}



/* Address: 0x100478b64 | FUN_100478b64 */

void FUN_100478b64(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_100478b80,in_x3,0);
  return;
}



/* Address: 0x100478b80 | FUN_100478b80 */

void FUN_100478b80(void)

{
  long unaff_x22;
  
  FUN_100478bb4(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100478bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100478bb4 | FUN_100478bb4 */

void FUN_100478bb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  UUID UVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_10047e424();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc89e8;
  FUN_1000037f0(&DAT_100fc89e8,&DAT_100c4d590);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  puVar3 = &DAT_100fc8350;
  FUN_1000037f0(&DAT_100fc8350,&DAT_100c4cec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_01;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar9,param_1);
  puVar3 = &DAT_100fc7d28;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  lVar1 = *(long *)(puVar3 + -8);
  (**(code **)(lVar1 + 0x10))(lVar8,param_2,puVar3);
  (**(code **)(lVar1 + 0x38))(lVar8,0,1,puVar3);
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::stateObservers,auStack_78,0x21,0);
  FUN_1004607e0(lVar8,lVar9);
  _swift_endAccess(auStack_78);
  lVar1 = _TtC8PasteMCP9MCPServer::currentState;
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::currentState,auStack_78,0,0);
  FUN_1000c495c(unaff_x20 + lVar1,puVar6,FUN_10047e424);
  Swift::AsyncStream::Continuation::_yield(lVar7,puVar6,puVar3);
  (**(code **)(lVar5 + 8))(lVar7,puVar2);
  return;
}



/* Address: 0x100478dc8 | FUN_100478dc8 */

void FUN_100478dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  UUID UVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = &stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))((long)puVar5 - extraout_x8,1,1,TVar3.unknown);
  (**(code **)(lVar7 + 0x10))(puVar5,param_3,UVar1.unknown);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed7250;
  _swift_allocObject(&DAT_100ed7250,uVar8 + lVar6,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  (**(code **)(lVar7 + 0x20))(puVar2 + uVar8,puVar5,UVar1.unknown);
  _swift_retain(param_2);
  FUN_100477f48(0,0,(long)puVar5 - extraout_x8,&DAT_100c4d6b8,puVar2);
  _swift_release();
  return;
}



/* Address: 0x100478f18 | FUN_100478f18 */

void FUN_100478f18(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  puVar1 = &DAT_100fc8350;
  FUN_1000037f0(&DAT_100fc8350,&DAT_100c4cec0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_100478f80,in_x3,0);
  return;
}



/* Address: 0x100478f80 | FUN_100478f80 */

void FUN_100478f80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x28) + _TtC8PasteMCP9MCPServer::stateObservers,
                     unaff_x22 + 0x10,0x21,0);
  FUN_100465724(uVar2,uVar1);
  _swift_endAccess(unaff_x22 + 0x10);
  FUN_100005808(uVar2,&DAT_100fc8350,&DAT_100c4cec0);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100479008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047900c | FUN_10047900c */

void FUN_10047900c(void)

{
  DirectoryHint DVar1;
  undefined7 extraout_var;
  ulong uVar2;
  URL UVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2e0) = unaff_x20;
  DVar1 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x2e8) = CONCAT71(extraout_var,DVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  *(long *)(unaff_x22 + 0x2f0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2f8) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x300) = UVar3.unknown;
  lVar6 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x308) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x310) = uVar2;
  lVar6 = 0;
  FUN_10047e424();
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x318) = uVar2;
  puVar4 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  uVar2 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 800) = uVar2;
  puVar4 = &DAT_100fc86b8;
  FUN_1000037f0(&DAT_100fc86b8,&DAT_100c4d320);
  lVar6 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x328) = lVar6;
  lVar6 = *(long *)(lVar6 + 0x40);
  *(long *)(unaff_x22 + 0x330) = lVar6;
  uVar2 = lVar6 + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x338) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x340) = uVar2;
  _swift_task_switch(FUN_100479120);
  return;
}



/* Address: 0x100479120 | FUN_100479120 */

void FUN_100479120(void)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_60 [24];
  undefined *local_48;
  undefined **ppuStack_40;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x2e0) + 0xa0) != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x338);
    uVar4 = *(undefined8 *)(unaff_x22 + 800);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2f8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001004791a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined **)(unaff_x22 + 0x1c0) = &DAT_100ee6990;
  *(undefined ***)(unaff_x22 + 0x1c8) = &PTR_PTR_100ee68f0;
  lVar1 = 0;
  FUN_1005ce220();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x348) = lVar1;
  *(undefined8 *)(lVar1 + 0x10) = 0x50434d6574736150;
  *(undefined8 *)(lVar1 + 0x18) = 0xed0000707474682e;
  FUN_100076508(unaff_x22 + 0x1a8,lVar1 + 0x20);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_48 = &DAT_100edc070;
  ppuStack_40 = &PTR_PTR_100edc050;
  FUN_10050816c();
  _swift_allocObject();
  _swift_retain(lVar1);
  puVar2 = auStack_60;
  FUN_100500cc8(puVar2,&local_90,0,1,lVar1);
  *(undefined1 **)(unaff_x22 + 0x350) = puVar2;
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x358) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1004792b0;
  FUN_100479f2c(puVar2);
  return;
}



/* Address: 0x1004792b0 | FUN_1004792b0 */

void FUN_1004792b0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x360) = param_1;
  *(long *)(lVar2 + 0x368) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x358));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100479314;
  }
  else {
    pcVar1 = FUN_100479a6c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x2e0),0);
  return;
}



/* Address: 0x100479314 | FUN_100479314 */

void FUN_100479314(void)

{
  TaskPriority TVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x338);
  lVar15 = *(long *)(unaff_x22 + 0x330);
  lVar16 = *(long *)(unaff_x22 + 0x328);
  uVar6 = *(undefined8 *)(unaff_x22 + 800);
  lVar7 = *(long *)(unaff_x22 + 0x2e0);
  FUN_10047a28c(uVar9,lVar7,*(undefined8 *)(unaff_x22 + 0x348));
  uVar13 = *(undefined8 *)(lVar7 + 0xa8);
  *(undefined8 *)(lVar7 + 0xa8) = uVar11;
  _swift_retain(uVar11);
  _swift_release(uVar13);
  uVar11 = *(undefined8 *)(lVar7 + 0xb0);
  *(undefined8 *)(lVar7 + 0xb0) = uVar10;
  _swift_retain(uVar10);
  _swift_release(uVar11);
  uVar10 = *(undefined8 *)(lVar7 + 0xb8);
  *(undefined8 *)(lVar7 + 0xb8) = 0;
  _swift_errorRelease(uVar10);
  TVar1 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar1.unknown + -8) + 0x38))(uVar6,1,1,TVar1.unknown);
  puVar2 = &DAT_100ed6fe8;
  _swift_allocObject(&DAT_100ed6fe8,0x18,7);
  _swift_weakInit(puVar2 + 0x10,lVar7);
  FUN_100011090(uVar9,uVar8,&DAT_100fc86b8,&DAT_100c4d320);
  uVar5 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar12 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar14 = lVar15 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100ed7010;
  _swift_allocObject(&DAT_100ed7010,uVar14 + 8,uVar5 | 7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  FUN_10047e5a8(uVar8,puVar3 + uVar12);
  *(undefined **)(puVar3 + uVar14) = puVar2;
  uVar10 = 0;
  FUN_10047ca10(0,0,uVar6,&DAT_100c4d338,puVar3);
  *(undefined8 *)(unaff_x22 + 0x370) = uVar10;
  uVar6 = *(undefined8 *)(lVar7 + 0xa0);
  *(undefined8 *)(lVar7 + 0xa0) = uVar10;
  _swift_retain();
  _swift_release(uVar6);
  plVar4 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x378) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1004794d8;
  FUN_10047aa34(2000000000000000000,0);
  return;
}



/* Address: 0x1004794d8 | FUN_1004794d8 */

void FUN_1004794d8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x380) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x378));
  if (unaff_x20 != 0) {
    plVar1 = (long *)&DAT_00000030;
    _swift_task_alloc();
    *(long **)(lVar2 + 0x388) = plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)FUN_100479b00;
    FUN_10047b42c(*(undefined8 *)(lVar2 + 0x370));
    return;
  }
  _swift_task_switch(FUN_100479564,*(undefined8 *)(lVar2 + 0x2e0),0);
  return;
}



/* Address: 0x100479564 | FUN_100479564 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100479604 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100479564(void)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
  lVar14 = *(long *)(unaff_x22 + 0x308);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2f8);
  lVar15 = *(long *)(unaff_x22 + 0x2f0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e8);
  lVar7 = *(long *)(unaff_x22 + 0x2e0);
  FUN_100478338(uVar10);
  *(undefined8 *)(unaff_x22 + 0x288) = 0x70636d;
  *(undefined8 *)(unaff_x22 + 0x290) = 0xe300000000000000;
  uVar8 = uVar12;
  (**(code **)(lVar15 + 0x68))
            (uVar12,*(undefined4 *)
                     PTR___enum_case_for_Foundation_URL_DirectoryHint_inferFromPath_Foundation_URL_DirectoryHint_Type___>_Foundation_URL_DirectoryHint_100ea7080
             ,uVar13);
  FUN_10045b990();
  Foundation::URL::_appending
            (uVar5,uVar8,uVar12,PTR___type_metadata_for_Swift_String_100eac208,uVar8);
  (**(code **)(lVar15 + 8))(uVar12,uVar13);
  (**(code **)(lVar14 + 8))(uVar10,uVar11);
  puVar2 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(uVar5,0,1,puVar2);
  FUN_10047b598(uVar5);
  FUN_10005241c(uVar5,FUN_10047e424);
  uVar5 = *(undefined8 *)(lVar7 + 0x80);
  cVar1 = *(char *)(lVar7 + 0x88);
  uVar8 = uVar5;
  if (cVar1 == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(unaff_x22 + 0x170);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(unaff_x22 + 0x2b0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x178));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x180));
    _swift_release(*(undefined8 *)(unaff_x22 + 400));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2b0);
  }
  lVar7 = *(long *)(unaff_x22 + 0x2e0);
  pcVar3 = "8\x06C";
  _swift_getKeyPath();
  puVar2 = &DAT_100c4d378;
  _swift_getKeyPath();
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar8;
  _swift_retain(lVar7);
  FUN_1002cb5a0(unaff_x22 + 0x2b8,lVar7);
  FUN_1000d468c(unaff_x22 + 0x220);
  pcVar6 = *(char **)(unaff_x22 + 0x238);
  pvVar9 = *(void **)(unaff_x22 + 0x240);
  _Var4.unknown = pcVar6;
  FUN_100004640(unaff_x22 + 0x220);
  Swift::_StringGuts::grow(0x1b,_Var4);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar18.bridgeObject = puVar2;
  SVar18.str = pcVar3;
  Swift::String::append(*(String *)(lVar7 + 0x70),SVar18);
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = &DAT_0000003a;
  SVar19.bridgeObject = puVar2;
  SVar19.str = pcVar3;
  Swift::String::append(SVar17,SVar19);
  uVar8 = uVar5;
  if (cVar1 == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(unaff_x22 + 0x138);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(unaff_x22 + 0x2c0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x140));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x168));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
  }
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar8;
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar20.bridgeObject = puVar2;
  SVar20.str = pcVar3;
  Swift::String::append(SVar17,SVar20);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  FUN_1000d4dd4(0xd000000000000016,0x8000000100da7150);
  _swift_bridgeObjectRelease(0x8000000100da7150);
  FUN_100004594(unaff_x22 + 0x220);
  FUN_1000da768(unaff_x22 + 0x248);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
  lVar7 = *(long *)(unaff_x22 + 0x268);
  FUN_100004640(unaff_x22 + 0x248,uVar8);
  if (cVar1 == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(unaff_x22 + 0x100);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(unaff_x22 + 0x2d0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x120));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2d0);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar5;
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar21.bridgeObject = pvVar9;
  SVar21.str = pcVar6;
  Swift::String::append(SVar17,SVar21);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  (**(code **)(lVar7 + 0x30))
            (0x767265732e70636d,0xea00000000007265,0x2064657472617473,0xec0000003a206e6f,uVar8,lVar7
            );
  _swift_bridgeObjectRelease(0xec0000003a206e6f);
  _swift_release(uVar11);
  _swift_release(uVar12);
  _swift_release(uVar13);
  _swift_release(uVar16);
  FUN_100005808(uVar10,&DAT_100fc86b8,&DAT_100c4d320);
  FUN_100004594(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 800);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2f8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100479a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100479a6c | FUN_100479a6c */

void FUN_100479a6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x348);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x350));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100479afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100479b00 | FUN_100479b00 */

void FUN_100479b00(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x2e0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x388));
  _swift_task_switch(FUN_100479b4c,uVar1,0);
  return;
}



/* Address: 0x100479b4c | FUN_100479b4c */

void FUN_100479b4c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  
  lVar8 = *(long *)(unaff_x22 + 0x2e0);
  FUN_1000d468c(unaff_x22 + 0x1d0);
  puVar2 = *(undefined **)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _Var5.unknown = puVar2;
  FUN_100004640(unaff_x22 + 0x1d0);
  Swift::_StringGuts::grow(0x29,_Var5);
  SVar14.bridgeObject = (void *)0x8000000100da7120;
  SVar14.str = (char *)0xd000000000000023;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar14,SVar16);
  uVar11 = *(undefined8 *)(lVar8 + 0x80);
  cVar1 = *(char *)(lVar8 + 0x88);
  uVar7 = uVar11;
  if (cVar1 == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(unaff_x22 + 200);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(unaff_x22 + 0x298);
    _swift_release(*(undefined8 *)(unaff_x22 + 200));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    uVar7 = *(undefined8 *)(unaff_x22 + 0x298);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar7;
  puVar4 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  SVar14 = Swift::CustomStringConvertible::get_description();
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar14,SVar17);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x203a;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar15,SVar18);
  _swift_getErrorValue(uVar10,unaff_x22 + 0x2a8,unaff_x22 + 0x270);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0x270),*(undefined8 *)(unaff_x22 + 0x278));
  FUN_1000d4e0c(0,0xe000000000000000,puVar2,uVar6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(unaff_x22 + 0x1d0);
  FUN_1000da768(unaff_x22 + 0x1f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar8 = *(long *)(unaff_x22 + 0x218);
  FUN_100004640(unaff_x22 + 0x1f8);
  puVar2 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x74726f70;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined **)(puVar2 + 0x48) = puVar4;
  if (cVar1 == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(unaff_x22 + 0x90);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(puVar2 + 0x30);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
    _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb0));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xc0));
  }
  else {
    *(undefined8 *)(puVar2 + 0x30) = uVar11;
  }
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(puVar2 + 0x50) = 0x6573616870;
  *(undefined1 **)(puVar2 + 0x58) = &DAT_e500000000000000;
  *(undefined **)(puVar2 + 0x78) = puVar4;
  *(undefined8 *)(puVar2 + 0x60) = 0x646e6962;
  *(undefined1 **)(puVar2 + 0x68) = &DAT_e400000000000000;
  puVar3 = puVar2;
  FUN_10045a404(puVar2);
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  (**(code **)(lVar8 + 0x28))(uVar10,puVar3,uVar6);
  _swift_bridgeObjectRelease(puVar3);
  FUN_100004594(unaff_x22 + 0x1f8);
  _swift_willThrow();
  _swift_release(uVar11);
  _swift_release(uVar9);
  _swift_release(uVar13);
  _swift_release(uVar12);
  FUN_100005808(uVar7,&DAT_100fc86b8,&DAT_100c4d320);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar7 = *(undefined8 *)(unaff_x22 + 800);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x340));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100479f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100479f2c | FUN_100479f2c */

void FUN_100479f2c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_100479f44);
  return;
}



/* Address: 0x100479f44 | FUN_100479f44 */

void FUN_100479f44(void)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  puVar1 = (undefined1 *)0x0;
  FUN_10059cc40();
  FUN_100587e44();
  plVar2 = (long *)0x6574736170;
  FUN_100589a94(0x6574736170,&DAT_e500000000000000,0x302e302e31,&DAT_e500000000000000,0x6574736150,
                &DAT_e500000000000000,0xd000000000000098,0x8000000100da6e00,0x10003030101,*puVar1);
  *(long **)(unaff_x22 + 0x20) = plVar2;
  uVar4 = *(undefined8 *)(lVar5 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uVar6 = *(undefined8 *)(lVar5 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  puVar3 = &DAT_100ed71b0;
  _swift_allocObject(&DAT_100ed71b0,0x20,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(*plVar2 + 0x248);
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar6);
  _swift_task_switch(FUN_10047a040,plVar2,0);
  return;
}



/* Address: 0x10047a040 | FUN_10047a040 */

void FUN_10047a040(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar3 = *(code **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10047fee4();
  (*pcVar3)(&DAT_100ee3b40,&DAT_100c4d680,uVar1,&DAT_100ee3b40,param_1);
  _swift_release();
  _swift_release(uVar1);
  _swift_task_switch(FUN_10047a0b4,uVar2,0);
  return;
}



/* Address: 0x10047a0b4 | FUN_10047a0b4 */

void FUN_10047a0b4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = &DAT_100ed71d8;
  _swift_allocObject(&DAT_100ed71d8,0x20,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar2);
  _swift_task_switch(FUN_10047a120,uVar3,0);
  return;
}



/* Address: 0x10047a120 | FUN_10047a120 */

void FUN_10047a120(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x22;
  
  pcVar2 = *(code **)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  plVar6 = *(long **)(unaff_x22 + 0x20);
  FUN_10047ffc0();
  (*pcVar2)(&DAT_100ee3c68,&DAT_100c4d690,uVar3,&DAT_100ee3c68,param_1);
  _swift_release();
  _swift_release(uVar3);
  puVar4 = &DAT_100fc8bd8;
  FUN_100003a00(&DAT_100fc8bd8,FUN_10050816c,&TargetProtocolConformanceDescriptor_100c53e70);
  piVar5 = *(int **)(*plVar6 + 0x230);
  iVar1 = *piVar5;
  plVar6 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10047a1f0;
                    /* WARNING: Could not recover jumptable at 0x00010047a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x10),puVar4,0,0);
  return;
}



/* Address: 0x10047a1f0 | FUN_10047a1f0 */

void FUN_10047a1f0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10047a258,*(undefined8 *)(lVar1 + 0x18),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010047a254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x20));
  return;
}



/* Address: 0x10047a258 | FUN_10047a258 */

void FUN_10047a258(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010047a288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047a28c | FUN_10047a28c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047a28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  URL UVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  URL UVar16;
  code **ppcVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long extraout_x8;
  long lVar21;
  long lVar22;
  long extraout_x8_00;
  long lVar23;
  long lVar24;
  long extraout_x12;
  long unaff_x20;
  String SVar25;
  undefined8 auStack_1c0 [6];
  undefined *local_190;
  undefined1 auStack_128 [56];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar8 = 0;
  FUN_1006b7d9c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar24 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar24 - extraout_x12;
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar23 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_b0);
  pcVar6 = local_b0;
  FUN_1000da768(&local_b0);
  lVar5 = _TtC8PasteMCP9MCPServer::analytics;
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::analytics,&local_e8,0x21,0);
  FUN_1001a7c4c(&local_b0,unaff_x20 + lVar5,&DAT_100fc85b8,&DAT_100c4d0b8);
  _swift_endAccess(&local_e8);
  puVar10 = &DAT_100fc8a18;
  FUN_1000037f0(&DAT_100fc8a18,&DAT_100c4d5a0);
  uVar20 = 7;
  _swift_allocObject();
  pcVar11 = (code *)&DAT_100efaf80;
  FUN_1006eea14(&DAT_100efaf80,0);
  uVar2 = DAT_100fc8a50;
  uVar1 = DAT_100fc8a48;
  local_b0 = pcVar11;
  _swift_bridgeObjectRetain(DAT_100fc8a50);
  uVar12 = 0x70636d2f;
  puVar18 = &DAT_e400000000000000;
  thunk_FUN_1006f28f4(0x70636d2f,&DAT_e400000000000000);
  puVar13 = &DAT_100ed70e8;
  _swift_allocObject(&DAT_100ed70e8,0x20,7);
  *(code **)(puVar13 + 0x10) = pcVar6;
  *(undefined8 *)(puVar13 + 0x18) = param_2;
  puVar14 = &DAT_100fc8a78;
  FUN_100016eac(&DAT_100fc8a78,&DAT_100fc8a18,&DAT_100c4d5a0,
                &TargetProtocolConformanceDescriptor_100c72a30);
  local_190 = puVar14;
  _swift_retain(pcVar6);
  _swift_retain(param_2);
  *(undefined ***)(lVar23 + -0x10) = &PTR_PTR_100ef9e60;
  *(undefined **)(lVar23 + -0x20) = &DAT_100f277d8;
  *(undefined **)(lVar23 + -0x18) = puVar14;
  uVar15 = uVar20;
  FUN_1006ef690(&local_e8,uVar12,puVar18,uVar20,uVar1,uVar2,&DAT_100c4d5b0,puVar13,puVar10);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar20);
  _swift_bridgeObjectRelease(uVar12);
  _swift_release(puVar13);
  _swift_release(local_e8);
  uVar2 = DAT_100fc8a60;
  uVar1 = DAT_100fc8a58;
  _swift_bridgeObjectRetain(DAT_100fc8a60);
  uVar20 = 0x70636d2f;
  puVar18 = &DAT_e400000000000000;
  thunk_FUN_1006f28f4(0x70636d2f,&DAT_e400000000000000);
  puVar13 = &DAT_100ed70e8;
  _swift_allocObject(&DAT_100ed70e8,0x20,7);
  *(code **)(puVar13 + 0x10) = pcVar6;
  *(undefined8 *)(puVar13 + 0x18) = param_2;
  _swift_retain();
  _swift_retain(param_2);
  *(undefined ***)(lVar23 + -0x10) = &PTR_PTR_100ef9e60;
  puVar14 = local_190;
  *(undefined **)(lVar23 + -0x18) = local_190;
  *(undefined **)(lVar23 + -0x20) = &DAT_100f277d8;
  uVar12 = uVar15;
  FUN_1006ef690(&local_e8,uVar20,puVar18,uVar15,uVar1,uVar2,&DAT_100c4d5b0,puVar13,puVar10);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(uVar20);
  _swift_release(puVar13);
  _swift_release(local_e8);
  uVar2 = DAT_100fc8a70;
  uVar1 = _s_DELETE_100fc8a68;
  _swift_bridgeObjectRetain(DAT_100fc8a70);
  uVar15 = 0x70636d2f;
  puVar18 = &DAT_e400000000000000;
  thunk_FUN_1006f28f4(0x70636d2f,&DAT_e400000000000000);
  puVar13 = &DAT_100ed70e8;
  _swift_allocObject(&DAT_100ed70e8,0x20,7);
  *(code **)(puVar13 + 0x10) = pcVar6;
  *(undefined8 *)(puVar13 + 0x18) = param_2;
  _swift_retain(pcVar6);
  _swift_retain(param_2);
  *(undefined **)(lVar23 + -0x18) = puVar14;
  *(undefined ***)(lVar23 + -0x10) = &PTR_PTR_100ef9e60;
  *(undefined **)(lVar23 + -0x20) = &DAT_100f277d8;
  FUN_1006ef690(&local_e8,uVar15,puVar18,uVar12,uVar1,uVar2,&DAT_100c4d5b0,puVar13,puVar10);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar15);
  _swift_release(puVar13);
  _swift_release(local_e8);
  UVar16.unknown = (undefined *)&DAT_100fc8a48;
  _swift_arrayDestroy(&DAT_100fc8a48,3,&DAT_100f07a38);
  FUN_1000da768(&local_b0);
  pcVar7 = local_b0;
  FUN_1000da768(&local_e8);
  uVar1 = local_e8;
  FUN_100478338(lVar23);
  SVar25 = Foundation::URL::get_absoluteString(UVar16);
  (**(code **)(lVar22 + 8))(lVar23,UVar9.unknown);
  FUN_10047c20c(pcVar11,pcVar7,uVar1,pcVar6,SVar25.str,SVar25.bridgeObject);
  _swift_release(pcVar7);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(&local_e8);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(&local_f0);
    _swift_release(local_e8);
    _swift_release(local_e0);
    _swift_release(local_d8);
    _swift_release(local_c8);
    _swift_release(local_b8);
  }
  else {
    local_f0 = *(undefined8 *)(unaff_x20 + 0x80);
  }
  FUN_100a0dde8(lVar21,uVar1,uVar2,local_f0);
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = (code *)0x0;
  iVar3 = *(int *)(lVar8 + 0x14);
  puVar19 = (undefined8 *)(lVar21 + *(int *)(lVar8 + 0x20));
  puVar19[4] = 0;
  puVar19[1] = 0;
  *puVar19 = 0;
  puVar19[3] = 0;
  puVar19[2] = 0;
  pcVar4 = (char *)(lVar21 + iVar3);
  *(undefined1 **)(pcVar4 + 8) = &DAT_e800000000000000;
  pcVar4[0] = 'P';
  pcVar4[1] = 'a';
  pcVar4[2] = 's';
  pcVar4[3] = 't';
  pcVar4[4] = 'e';
  pcVar4[5] = 'M';
  pcVar4[6] = 'C';
  pcVar4[7] = 'P';
  *(undefined8 *)(lVar21 + *(int *)(lVar8 + 0x18)) = 0x100;
  *(undefined1 *)(lVar21 + *(int *)(lVar8 + 0x1c)) = 1;
  ppcVar17 = &local_b0;
  FUN_1001a7c4c(ppcVar17,puVar19,&DAT_100fc8a80,&DAT_100c4d5b8);
  FUN_100002c1c();
  *(code ***)(lVar21 + *(int *)(lVar8 + 0x24)) = ppcVar17;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = FUN_1000f26f8;
  uStack_98 = CONCAT62(uStack_98._2_6_,1);
  uStack_88 = 0x14000;
  local_90 = 0x14000;
  local_80 = 1000;
  ppcVar17 = &local_b0;
  FUN_100a2363c(ppcVar17);
  _swift_retain(param_3);
  FUN_1006eea80(auStack_128);
  FUN_1000c495c(lVar21,lVar24,FUN_1006b7d9c);
  puVar10 = &DAT_100fc8a88;
  FUN_1000037f0(&DAT_100fc8a88,&DAT_100c4d5c8);
  puVar13 = &DAT_100fc8a90;
  FUN_100016eac(&DAT_100fc8a90,&DAT_100fc8a88,&DAT_100c4d5c8,
                &TargetProtocolConformanceDescriptor_100c730e0);
  *(undefined **)(lVar23 + -0x18) = puVar13;
  *(undefined ***)(lVar23 + -0x10) = &PTR_PTR_100fde8d0;
  *(undefined **)(lVar23 + -0x20) = puVar10;
  *(undefined8 *)(lVar23 + -0x30) = 0;
  *(undefined8 *)(lVar23 + -0x28) = param_3;
  FUN_1006a1584(param_1,auStack_128,ppcVar17,puVar19,lVar24,PTR___swiftEmptyArrayStorage_100eae0d8,
                &DAT_100c4d5c0,0,0);
  _swift_release(pcVar11);
  _swift_release(pcVar6);
  FUN_10005241c(lVar21,FUN_1006b7d9c);
  return;
}



/* Address: 0x10047aa34 | FUN_10047aa34 */

void FUN_10047aa34(undefined8 param_1,undefined8 param_2)

{
  DirectoryHint DVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  Instant IVar4;
  ulong uVar5;
  undefined7 extraout_var;
  URL UVar6;
  URLRequest_conflict UVar7;
  long lVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x60) = CVar2.unknown;
  lVar8 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x68) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  IVar4 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x78) = IVar4.unknown;
  lVar8 = *(long *)(IVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x80) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  DVar1 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xa0) = CONCAT71(extraout_var,DVar1.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb8) = UVar6.unknown;
  lVar8 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  UVar7 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = UVar7.unknown;
  lVar8 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  _swift_task_switch(FUN_10047ab5c);
  return;
}



/* Address: 0x10047ab5c | FUN_10047ab5c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010047ac10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

tuple2_conflict7 FUN_10047ab5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Instant IVar3;
  undefined8 uVar4;
  URL url;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  ContinuousClock CVar11;
  Instant IVar12;
  ID IVar13;
  long *plVar14;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar15;
  Instant IVar16;
  Duration by;
  undefined8 uVar17;
  Instant IVar18;
  code *pcVar19;
  long lVar20;
  long unaff_x22;
  URLRequest *this;
  undefined8 uVar21;
  tuple2_conflict7 tVar22;
  
  this = *(URLRequest **)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  url.unknown = *(undefined **)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  lVar20 = *(long *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  IVar3.unknown = *(undefined **)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  IVar18.unknown = *(undefined **)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar8 = *(long *)(unaff_x22 + 0x80);
  IVar12.unknown = *(undefined **)(unaff_x22 + 0x50);
  by.unknown = *(undefined **)(unaff_x22 + 0x48);
  FUN_100478338(uVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = 0x70636d;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xe300000000000000;
  uVar10 = uVar6;
  (**(code **)(lVar20 + 0x68))
            (uVar6,*(undefined4 *)
                    PTR___enum_case_for_Foundation_URL_DirectoryHint_inferFromPath_Foundation_URL_DirectoryHint_Type___>_Foundation_URL_DirectoryHint_100ea7080
             ,uVar7);
  FUN_10045b990();
  IVar16.unknown = PTR___type_metadata_for_Swift_String_100eac208;
  Foundation::URL::_appending
            (url.unknown,uVar10,uVar6,PTR___type_metadata_for_Swift_String_100eac208,uVar10);
  (**(code **)(lVar20 + 8))(uVar6,uVar7);
  (**(code **)(lVar5 + 8))(uVar1,uVar2);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  CVar11.unknown = (undefined *)0x534e4f4954504f;
  Foundation::URLRequest::_set_httpMethod(this);
  Foundation::URLRequest::set_timeoutInterval(this,1.0);
  Swift::ContinuousClock::get_now(CVar11);
  Swift::ContinuousClock::Instant::advanced(by,IVar12);
  pcVar19 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0xf0) = pcVar19;
  IVar12.unknown = IVar18.unknown;
  (*pcVar19)(IVar18.unknown,uVar4);
  Swift::ContinuousClock::get_now((ContinuousClock)IVar12.unknown);
  bVar9 = Swift::ContinuousClock::Instant::<_infix(IVar18,IVar3,IVar16);
  (*pcVar19)(IVar18.unknown,uVar4);
  lVar20 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0xb8);
  if (bVar9) {
    if (lVar20 == 0) {
      IVar13 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
      *(ID *)(unaff_x22 + 0xf8) = IVar13;
      plVar14 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x100) = plVar14;
      *plVar14 = unaff_x22;
      plVar14[1] = (long)FUN_10047ae24;
      tVar22 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xe8));
      return tVar22;
    }
  }
  else if (lVar20 == 0) {
    FUN_10047ef0c();
    _swift_allocError(&DAT_100ed70c8,IVar18.unknown,0,0);
    _swift_willThrow();
    goto LAB_10047ad88;
  }
  _swift_willThrow();
  _swift_errorRetain(lVar20);
LAB_10047ad88:
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  pNVar15 = *(NSURLResponse **)(unaff_x22 + 0xd8);
  lVar20 = *(long *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0xf0))(uVar10,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar20 + 8))(uVar1,pNVar15);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010047ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar22._ = pNVar15;
  tVar22._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar22;
}



/* Address: 0x10047ae24 | FUN_10047ae24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10047ae24(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x100));
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  if (unaff_x20 == 0) {
    FUN_10003bf2c(param_1,param_2);
    pcVar1 = FUN_10047aec8;
  }
  else {
    pcVar1 = FUN_10047af8c;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10047aec8 | FUN_10047aec8 */

void FUN_10047aec8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0xf0))(uVar8,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar6 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010047af88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047af8c | FUN_10047af8c */

void FUN_10047af8c(void)

{
  long unaff_x22;
  
  (extension_Swift)::Swift::Clock::_get_continuous();
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 50000000000000000;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined1 *)(unaff_x22 + 0x20) = 1;
  _swift_task_switch(FUN_10047afe0,0,0);
  return;
}



/* Address: 0x10047afe0 | FUN_10047afe0 */

void FUN_10047afe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  code *pcVar4;
  
  pcVar4 = *(code **)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_100003a00(&DAT_100fc89f8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fc8a00,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  (*pcVar4)(uVar1,uVar2);
  plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x110) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10047b0d8;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x10047b0d8 | FUN_10047b0d8 */

void FUN_10047b0d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  *(long *)(lVar6 + 0x118) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x110));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar6 + 0x70);
    uVar2 = *(undefined8 *)(lVar6 + 0x60);
    lVar3 = *(long *)(lVar6 + 0x68);
    uVar5 = *(undefined8 *)(lVar6 + 0x58);
    (**(code **)(lVar6 + 0xf0))(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x78));
    (**(code **)(lVar3 + 8))(uVar1,uVar2);
    pcVar4 = FUN_10047b178;
  }
  else {
    (**(code **)(lVar6 + 0xf0))(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x78));
    pcVar4 = FUN_10047b330;
    uVar5 = 0;
  }
  _swift_task_switch(pcVar4,uVar5,0);
  return;
}



/* Address: 0x10047b178 | FUN_10047b178 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict7 FUN_10047b178(undefined8 param_1,undefined8 param_2,Instant param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Instant IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ContinuousClock CVar8;
  Instant IVar9;
  ID IVar10;
  long *plVar11;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  code *pcVar16;
  undefined8 uVar17;
  tuple2_conflict7 tVar18;
  
  CVar8.unknown = *(undefined **)(unaff_x22 + 0x108);
  pcVar16 = *(code **)(unaff_x22 + 0xf0);
  IVar9.unknown = *(undefined **)(unaff_x22 + 0x90);
  IVar4.unknown = *(undefined **)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_errorRelease();
  Swift::ContinuousClock::get_now(CVar8);
  bVar7 = Swift::ContinuousClock::Instant::<_infix(IVar9,IVar4,param_3);
  (*pcVar16)(IVar9.unknown,uVar15);
  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0xb8);
  if (bVar7) {
    if (lVar14 == 0) {
      IVar10 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
      *(ID *)(unaff_x22 + 0xf8) = IVar10;
      plVar11 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x100) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10047ae24;
      tVar18 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xe8));
      return tVar18;
    }
  }
  else if (lVar14 == 0) {
    FUN_10047ef0c();
    _swift_allocError(&DAT_100ed70c8,IVar9.unknown,0,0);
    _swift_willThrow();
    goto LAB_10047b294;
  }
  _swift_willThrow();
  _swift_errorRetain(lVar14);
LAB_10047b294:
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  pNVar12 = *(NSURLResponse **)(unaff_x22 + 0xd8);
  lVar14 = *(long *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0xf0))(uVar6,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar14 + 8))(uVar15,pNVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar3);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010047b32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar18._ = pNVar12;
  tVar18._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar18;
}



/* Address: 0x10047b330 | FUN_10047b330 */

void FUN_10047b330(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10047b344,*(undefined8 *)(unaff_x22 + 0x58),0);
  return;
}



/* Address: 0x10047b344 | FUN_10047b344 */

void FUN_10047b344(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x108));
  (**(code **)(lVar1 + 8))(uVar5,uVar8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  (**(code **)(unaff_x22 + 0xf0))(uVar7,*(undefined8 *)(unaff_x22 + 0x78));
  (**(code **)(lVar1 + 8))(uVar5,uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010047b428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047b42c | FUN_10047b42c */

void FUN_10047b42c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10047b444);
  return;
}



/* Address: 0x10047b444 | FUN_10047b444 */

void FUN_10047b444(void)

{
  Task TVar1;
  long unaff_x22;
  
  TVar1.unknown = *(undefined **)(unaff_x22 + 0x10);
  FUN_1000037f0(&DAT_100fc84b0,&DAT_100c4cfe8);
  Swift::Task::cancel(TVar1);
  TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x20) = TVar1.unknown;
  *(long *)TVar1.unknown = unaff_x22;
  *(code **)(TVar1.unknown + 8) = FUN_10047b4e4;
  Swift::Task::get_value(TVar1);
  return;
}



/* Address: 0x10047b4e4 | FUN_10047b4e4 */

void FUN_10047b4e4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10047b548;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_10047b548;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10047b548 | FUN_10047b548 */

void FUN_10047b548(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + 0xa0);
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010047b594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047b598 | FUN_10047b598 */

void FUN_10047b598(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  FUN_10047e424();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar7 = &DAT_100fc89e8;
  local_88 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc89e8,&DAT_100c4d590);
  local_98 = *(long *)(puVar7 + -8);
  puStack_90 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar7 = &DAT_100fc7d28;
  local_a0 = lVar8;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  lVar10 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = _TtC8PasteMCP9MCPServer::currentState;
  local_a8 = lVar8 - extraout_x12;
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::currentState,auStack_78,0x21,0);
  local_80 = param_1;
  FUN_10047eec8(param_1,unaff_x20 + lVar6);
  _swift_endAccess(auStack_78);
  lVar6 = _TtC8PasteMCP9MCPServer::stateObservers;
  _swift_beginAccess(unaff_x20 + _TtC8PasteMCP9MCPServer::stateObservers,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  uVar9 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar6 + 0x40);
  _swift_bridgeObjectRetain(lVar6);
  lVar11 = 0;
  while( true ) {
    for (; lVar2 = local_a8, uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar10 + 0x10))
                (local_a8,*(long *)(lVar6 + 0x38) +
                          *(long *)(lVar10 + 0x48) *
                          (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar11 << 6),puVar7);
      (**(code **)(lVar10 + 0x20))(lVar8,lVar2,puVar7);
      puVar3 = local_88;
      FUN_1000c495c(local_80,local_88,FUN_10047e424);
      lVar2 = local_a0;
      Swift::AsyncStream::Continuation::_yield(local_a0,puVar3,puVar7);
      (**(code **)(local_98 + 8))(lVar2,puStack_90);
      (**(code **)(lVar10 + 8))(lVar8,puVar7);
    }
    bVar5 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar5) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
      _swift_release(lVar6);
      return;
    }
    uVar12 = ((ulong *)(lVar6 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10047b81c);
  (*pcVar4)();
}



/* Address: 0x10047b81c | FUN_10047b81c */

void FUN_10047b81c(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  lVar1 = 0;
  FUN_10047e424();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  _swift_task_switch(FUN_10047b874);
  return;
}



/* Address: 0x10047b874 | FUN_10047b874 */

void FUN_10047b874(void)

{
  Task TVar1;
  long unaff_x22;
  
  TVar1.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x60) + 0xa0);
  *(undefined **)(unaff_x22 + 0x70) = TVar1.unknown;
  if (TVar1.unknown != (undefined *)0x0) {
    _swift_retain(TVar1.unknown);
    FUN_1000037f0(&DAT_100fc84b0,&DAT_100c4cfe8);
    Swift::Task::cancel(TVar1);
    TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x78) = TVar1.unknown;
    *(long *)TVar1.unknown = unaff_x22;
    *(code **)(TVar1.unknown + 8) = FUN_10047b948;
    Swift::Task::get_value(TVar1);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010047b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047b948 | FUN_10047b948 */

void FUN_10047b948(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10047b9ac;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_10047b9ac;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10047b9ac | FUN_10047b9ac */

void FUN_10047b9ac(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x60);
  plVar8 = *(long **)(lVar9 + 0xb0);
  *(long **)(unaff_x22 + 0x80) = plVar8;
  if (plVar8 != (long *)0x0) {
    piVar7 = *(int **)(*plVar8 + 0x238);
    iVar1 = *piVar7;
    plVar4 = (long *)(ulong)(uint)piVar7[1];
    _swift_retain(plVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10047bb90;
                    /* WARNING: Could not recover jumptable at 0x00010047ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(lVar9 + 0xa0);
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  _swift_release(uVar5);
  uVar5 = *(undefined8 *)(lVar9 + 0xa8);
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  _swift_release(uVar5);
  uVar5 = *(undefined8 *)(lVar9 + 0xb0);
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  _swift_release(uVar5);
  puVar6 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  (**(code **)(*(long *)(puVar6 + -8) + 0x38))(uVar2,1,1,puVar6);
  FUN_10047b598(uVar2);
  FUN_10005241c(uVar2,FUN_10047e424);
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar9 = unaff_x22 + 0x10;
  FUN_100004640(lVar9,uVar2);
  FUN_1000d4dd4(0xd000000000000012,0x8000000100da7170,uVar2,uVar5,lVar9);
  FUN_100004594(unaff_x22 + 0x10);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar2);
  (**(code **)(lVar9 + 0x30))
            (0x767265732e70636d,0xea00000000007265,0x646570706f7473,&DAT_e700000000000000,uVar2,
             lVar9);
  _swift_release(uVar3);
  FUN_100004594(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010047bb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047bb90 | FUN_10047bb90 */

void FUN_10047bb90(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
  _swift_task_switch(FUN_10047bbdc,uVar1,0);
  return;
}



/* Address: 0x10047bbdc | FUN_10047bbdc */

void FUN_10047bbdc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(lVar5 + 0xa0);
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + 0xa8);
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(lVar5 + 0xb0);
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  _swift_release(uVar3);
  puVar4 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  (**(code **)(*(long *)(puVar4 + -8) + 0x38))(uVar1,1,1,puVar4);
  FUN_10047b598(uVar1);
  FUN_10005241c(uVar1,FUN_10047e424);
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar5 = unaff_x22 + 0x10;
  FUN_100004640(lVar5,uVar1);
  FUN_1000d4dd4(0xd000000000000012,0x8000000100da7170,uVar1,uVar3,lVar5);
  FUN_100004594(unaff_x22 + 0x10);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar5 + 0x30))
            (0x767265732e70636d,0xea00000000007265,0x646570706f7473,&DAT_e700000000000000,uVar1,
             lVar5);
  _swift_release(uVar2);
  FUN_100004594(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010047bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047bd60 | FUN_10047bd60 */

void FUN_10047bd60(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  FUN_10005241c(unaff_x20 + _TtC8PasteMCP9MCPServer::currentState,FUN_10047e424);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::stateObservers));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::clientStore));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::dcrRegistry));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::authorizationCodeStore));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::logger));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::telemetry));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::analyticsInjected));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::_storedMcpPort);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  FUN_100005808(unaff_x20 + _TtC8PasteMCP9MCPServer::analytics,&DAT_100fc85b8,&DAT_100c4d0b8);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x10047beb4 | FUN_10047beb4 */

void FUN_10047beb4(void)

{
  FUN_10047bd60();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10047becc | FUN_10047becc */

void FUN_10047becc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  _swift_task_switch(FUN_10047bee4,0,0);
  return;
}



/* Address: 0x10047bee4 | FUN_10047bee4 */

void FUN_10047bee4(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  if (DAT_100fc9540 != -1) {
    _swift_once(&DAT_100fc9540,FUN_10048fbd8);
  }
  lVar3 = DAT_101057ad8;
  uVar7 = DAT_101057ad0;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (DAT_101057ad8 != 0) {
    puVar4 = &DAT_100fc8ae8;
    FUN_1000037f0(&DAT_100fc8ae8,&DAT_100c4d648);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    puVar5 = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
    puVar6 = puVar5;
    _swift_initStaticObject();
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    *(long *)(puVar4 + 0x28) = lVar3;
    pcVar1 = puVar4 + 0x30;
    *(undefined8 *)(puVar4 + 0x38) = 0xe900000000000067;
    pcVar1[0] = 'i';
    pcVar1[1] = 'm';
    pcVar1[2] = 'a';
    pcVar1[3] = 'g';
    pcVar1[4] = 'e';
    pcVar1[5] = '/';
    pcVar1[6] = 'p';
    pcVar1[7] = 'n';
    *(undefined **)(puVar4 + 0x40) = puVar6;
    puVar4[0x48] = 0;
    _swift_initStaticObject(puVar5,&DAT_100fc8b30);
    *(undefined8 *)(puVar4 + 0x50) = uVar7;
    *(long *)(puVar4 + 0x58) = lVar3;
    pcVar1 = puVar4 + 0x60;
    *(undefined8 *)(puVar4 + 0x68) = 0xe900000000000067;
    pcVar1[0] = 'i';
    pcVar1[1] = 'm';
    pcVar1[2] = 'a';
    pcVar1[3] = 'g';
    pcVar1[4] = 'e';
    pcVar1[5] = '/';
    pcVar1[6] = 'p';
    pcVar1[7] = 'n';
    *(undefined **)(puVar4 + 0x70) = puVar5;
    puVar4[0x78] = 1;
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  _swift_bridgeObjectRetain_n(lVar3,2);
  FUN_10047dc54(uVar7,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  *puVar2 = uVar7;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010047c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047c034 | FUN_10047c034 */

void FUN_10047c034(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(param_2 + 0x18);
  _swift_task_switch(FUN_10047c060,0,0);
  return;
}



/* Address: 0x10047c060 | FUN_10047c060 */

void FUN_10047c060(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x3a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10047c0c0;
  FUN_1004a1ec4(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10047c0c0 | FUN_10047c0c0 */

void FUN_10047c0c0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010047c118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047c11c | FUN_10047c11c */

void FUN_10047c11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  _swift_task_switch(FUN_10047c138,0,0);
  return;
}



/* Address: 0x10047c138 | FUN_10047c138 */

void FUN_10047c138(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x610;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10047c1a8;
  FUN_100473478(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x10047c1a8 | FUN_10047c1a8 */

void FUN_10047c1a8(void)

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
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010047c208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047c20c | FUN_10047c20c */

void FUN_10047c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 local_68;
  
  uVar6 = 0x8000000100da7190;
  uVar1 = 0xd000000000000025;
  uVar5 = param_3;
  thunk_FUN_1006f28f4(0xd000000000000025,0x8000000100da7190);
  puVar2 = &DAT_100ed7110;
  _swift_allocObject(&DAT_100ed7110,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  _swift_bridgeObjectRetain(param_6);
  puVar3 = &DAT_100fc8a18;
  FUN_1000037f0(&DAT_100fc8a18,&DAT_100c4d5a0);
  puVar4 = &DAT_100fc8a78;
  FUN_100016eac(&DAT_100fc8a78,&DAT_100fc8a18,&DAT_100c4d5a0,
                &TargetProtocolConformanceDescriptor_100c72a30);
  uVar8 = uVar5;
  FUN_1006ef690(&local_68,uVar1,uVar6,uVar5,0x544547,0xe300000000000000,&DAT_100c4d5d8,puVar2,puVar3
                ,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(local_68);
  uVar1 = 0xd000000000000027;
  uVar6 = 0x8000000100da71c0;
  thunk_FUN_1006f28f4(0xd000000000000027,0x8000000100da71c0);
  puVar2 = &DAT_100ed7138;
  _swift_allocObject(&DAT_100ed7138,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  _swift_bridgeObjectRetain(param_6);
  uVar5 = uVar8;
  FUN_1006ef690(&local_68,uVar1,uVar6,uVar8,0x544547,0xe300000000000000,&DAT_100c4d5e8,puVar2,puVar3
                ,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(local_68);
  uVar1 = 0x657473696765722f;
  uVar6 = 0xe900000000000072;
  thunk_FUN_1006f28f4(0x657473696765722f,0xe900000000000072);
  _swift_retain(param_2);
  uVar8 = uVar5;
  FUN_1006ef690(&local_68,uVar1,uVar6,uVar5,0x54534f50,&DAT_e400000000000000,&DAT_100c4d5f8,param_2,
                puVar3,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(param_2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(local_68);
  uVar6 = 0x69726f687475612f;
  uVar7 = 0xea0000000000657a;
  uVar5 = uVar6;
  thunk_FUN_1006f28f4(0x69726f687475612f,0xea0000000000657a);
  puVar2 = &DAT_100ed7160;
  _swift_allocObject(&DAT_100ed7160,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_2);
  _swift_retain(param_3);
  uVar1 = uVar8;
  FUN_1006ef690(&local_68,uVar5,uVar7,uVar8,0x544547,0xe300000000000000,&DAT_100c4d608,puVar2,puVar3
                ,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar5);
  _swift_release(local_68);
  uVar8 = 0xea0000000000657a;
  thunk_FUN_1006f28f4(0x69726f687475612f,0xea0000000000657a);
  _swift_retain(param_3);
  uVar5 = uVar1;
  FUN_1006ef690(&local_68,uVar6,uVar8,uVar1,0x54534f50,&DAT_e400000000000000,&DAT_100c4d618,param_3,
                puVar3,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(local_68);
  uVar1 = 0x6e656b6f742f;
  puVar9 = &DAT_e600000000000000;
  thunk_FUN_1006f28f4(0x6e656b6f742f,&DAT_e600000000000000);
  puVar2 = &DAT_100ed7188;
  _swift_allocObject(&DAT_100ed7188,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _swift_retain();
  _swift_retain(param_3);
  _swift_retain(param_4);
  uVar8 = uVar5;
  FUN_1006ef690(&local_68,uVar1,puVar9,uVar5,0x54534f50,&DAT_e400000000000000,&DAT_100c4d628,puVar2,
                puVar3,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(local_68);
  uVar5 = 0x656b6f7665722f;
  puVar9 = &DAT_e700000000000000;
  thunk_FUN_1006f28f4(0x656b6f7665722f,&DAT_e700000000000000);
  _swift_retain(param_4);
  FUN_1006ef690(&local_68,uVar5,puVar9,uVar8,0x54534f50,&DAT_e400000000000000,&DAT_100c4d638,param_4
                ,puVar3,&DAT_100f277d8,puVar4,&PTR_PTR_100ef9e60);
  _swift_release(param_4);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar5);
  _swift_release(local_68);
  return;
}



/* Address: 0x10047c794 | FUN_10047c794 */

void FUN_10047c794(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  _swift_task_switch(FUN_10047c7ac,0,0);
  return;
}



/* Address: 0x10047c7ac | FUN_10047c7ac */

void FUN_10047c7ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x22;
  
  puVar1 = &DAT_100fc8a08;
  FUN_1000037f0(&DAT_100fc8a08,&DAT_100c4d598);
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x20) = puVar1;
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  puVar2 = puVar1;
  FUN_1009db664();
  puVar1[0x20] = *puVar2;
  FUN_1009db640();
  puVar1[0x21] = *puVar2;
  plVar3 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  puVar2 = &DAT_100fc86b8;
  FUN_1000037f0(&DAT_100fc86b8,&DAT_100c4d320);
  puVar4 = &DAT_100fc8a10;
  FUN_100016eac(&DAT_100fc8a10,&DAT_100fc86b8,&DAT_100c4d320,
                &TargetProtocolConformanceDescriptor_100c6f3a8);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10047c8a0;
  FUN_1006a1278(puVar1,puVar2,puVar4);
  return;
}


