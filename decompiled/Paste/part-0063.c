/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000c6564 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6568 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c656c | thunk_FUN_100082388 */

void thunk_FUN_100082388(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100062074(param_1,*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c6570 | FUN_1000c6570 */

undefined1 FUN_1000c6570(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x1000c664c | FUN_1000c664c */

void FUN_1000c664c(void)

{
  FUN_1000abcec(&DAT_100c2a6c8,&DAT_100c2a6f0);
  return;
}



/* Address: 0x1000c6660 | FUN_1000c6660 */

void FUN_1000c6660(void)

{
  FUN_1000c6944(&DAT_100c2a5e8,&DAT_100c2a610);
  return;
}



/* Address: 0x1000c6674 | FUN_1000c6674 */

void FUN_1000c6674(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000c6688 | FUN_1000c6688 */

void FUN_1000c6688(Published *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fabcd0;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_100c2a5e8;
  _swift_getKeyPath(&DAT_100c2a5e8);
  puVar2 = &DAT_100c2a610;
  _swift_getKeyPath(&DAT_100c2a610);
  FUN_100011090(param_1,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100fabcd0,&DAT_100c29f10);
  _swift_retain(uVar3);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffb0 + -extraout_x8,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x1000c675c | FUN_1000c675c */

void FUN_1000c675c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  MainActor *local_68;
  
  lVar1 = 0;
  FUN_10045ba0c();
  lVar9 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = auStack_70 + -(lVar1 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_68);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))((long)puVar7 - extraout_x8,1,1,TVar3.unknown);
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::logger);
  FUN_1000c495c(param_1,puVar7,FUN_10045ba0c);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  _swift_retain(uVar8);
  pMVar4 = local_68;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  uVar11 = lVar1 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_100eb4a90;
  _swift_allocObject(&DAT_100eb4a90,uVar11 + 8,uVar6 | 7);
  *(MainActor **)(puVar2 + 0x10) = pMVar4;
  *(undefined8 **)(puVar2 + 0x18) = puVar5;
  *(MainActor **)(puVar2 + 0x20) = local_68;
  FUN_1000523d8(puVar7,puVar2 + uVar10,FUN_10045ba0c);
  *(undefined8 *)(puVar2 + uVar11) = uVar8;
  FUN_1000645b0(0,0,(long)puVar7 - extraout_x8,&DAT_100c2a638,puVar2);
  _swift_release();
  _swift_release(local_68);
  return;
}



/* Address: 0x1000c6930 | FUN_1000c6930 */

void FUN_1000c6930(void)

{
  FUN_1000c6944(&DAT_100c2a680,&DAT_100c2a6a8);
  return;
}



/* Address: 0x1000c6944 | FUN_1000c6944 */

void FUN_1000c6944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getKeyPath();
  _swift_getKeyPath(param_3);
  Combine::Published::_get_subscript(param_1);
  _swift_release(param_2);
  _swift_release(param_3);
  return;
}



/* Address: 0x1000c69a0 | FUN_1000c69a0 */

undefined * FUN_1000c69a0(void)

{
  URL UVar1;
  undefined *puVar2;
  URL UVar3;
  uint uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100c2a680;
  _swift_getKeyPath();
  UVar3.unknown = &DAT_100c2a6a8;
  _swift_getKeyPath();
  puVar5 = puVar2;
  Combine::Published::_get_subscript(lVar6);
  uVar4 = (uint)puVar5;
  _swift_release(puVar2);
  _swift_release();
  Foundation::URL::_get_port(UVar3);
  (**(code **)(lVar7 + 8))(lVar6,UVar1.unknown);
  if ((uVar4 & 0xff) == 1) {
    _swift_getKeyPath(&DAT_100c2a648);
    FUN_1002cb7e0(&local_78);
    FUN_1000037f0(&DAT_100fac320,&DAT_100c2a678);
    FUN_1002ca7e0(&local_80);
    _swift_release(local_78);
    _swift_release(local_70);
    _swift_release(local_68);
    _swift_release(local_58);
    _swift_release(local_48);
    UVar3.unknown = local_80;
  }
  return UVar3.unknown;
}



/* Address: 0x1000c6ae0 | FUN_1000c6ae0 */

void FUN_1000c6ae0(undefined8 param_1)

{
  undefined *puVar1;
  URL UVar2;
  ulong uVar3;
  ulong uVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = UVar2.unknown;
  lVar8 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x128) = pMVar5;
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x130) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0x138) = puVar6;
  _swift_task_switch(FUN_1000c6ba4,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1000c6ba4 | FUN_1000c6ba4 */

void FUN_1000c6ba4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  FUN_1000da768(unaff_x22 + 0xc0);
  plVar5 = *(long **)(unaff_x22 + 0xc0);
  *(long **)(unaff_x22 + 0x140) = plVar5;
  FUN_1000da768(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar6;
  _swift_getKeyPath(&DAT_100c2a648);
  FUN_1002cb7e0(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
  puVar4 = &DAT_100fac320;
  FUN_1000037f0(&DAT_100fac320,&DAT_100c2a678);
  *(undefined **)(unaff_x22 + 0x178) = puVar4;
  FUN_1002ca7e0(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x180) = *(long *)(unaff_x22 + 0xd0);
  if (lVar1 == *(long *)(unaff_x22 + 0xd0)) {
    _swift_release(uVar3);
    _swift_release(uVar8);
    _swift_release(uVar7);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    _swift_release(uVar6);
    _swift_release(plVar5);
    _swift_release(uVar7);
    _swift_release(uVar9);
    _swift_release(uVar2);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001000c6d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(*plVar5 + 0x100);
  _swift_task_switch(FUN_1000c6d4c,plVar5,0);
  return;
}



/* Address: 0x1000c6d4c | FUN_1000c6d4c */

/* WARNING: Removing unreachable block (ram,0x0001000c6d80) */

void FUN_1000c6d4c(void)

{
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x188))();
  *(undefined8 *)(unaff_x22 + 400) = 0;
  _swift_task_switch(FUN_1000c6da8,*(undefined8 *)(unaff_x22 + 0x130),
                     *(undefined8 *)(unaff_x22 + 0x138));
  return;
}



/* Address: 0x1000c6da8 | FUN_1000c6da8 */

void FUN_1000c6da8(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = *(long **)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_1002cac1c((undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0x178));
  piVar2 = *(int **)(*plVar3 + 0x1c8);
  *(int **)(unaff_x22 + 0x198) = piVar2;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000c6e28;
                    /* WARNING: Could not recover jumptable at 0x0001000c6e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Address: 0x1000c6e28 | FUN_1000c6e28 */

void FUN_1000c6e28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000c6e80;
  }
  else {
    pcVar1 = FUN_1000c7054;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x138));
  return;
}



/* Address: 0x1000c6e80 | FUN_1000c6e80 */

void FUN_1000c6e80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  Published *pPVar10;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  pPVar10 = *(Published **)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  (**(code **)(pPVar10->unknown + 0xf0))(uVar2);
  puVar8 = &DAT_100c2a680;
  _swift_getKeyPath(&DAT_100c2a680);
  puVar9 = &DAT_100c2a6a8;
  _swift_getKeyPath(&DAT_100c2a6a8);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar2,uVar6);
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar10,uVar5,uVar4,puVar8,puVar9);
  _swift_release(pPVar10);
  _swift_release(uVar1);
  (**(code **)(lVar3 + 8))(uVar2,uVar6);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_release(uVar2);
  _swift_release(uVar6);
  _swift_release(uVar1);
  _swift_release(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000c6fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000c6fa4 | FUN_1000c6fa4 */

void FUN_1000c6fa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_release(uVar3);
  _swift_release(uVar6);
  _swift_release(uVar1);
  _swift_release(uVar7);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001000c7050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000c7054 | FUN_1000c7054 */

void FUN_1000c7054(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x180);
  FUN_1002cac1c((undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x178));
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000c70c4;
                    /* WARNING: Could not recover jumptable at 0x0001000c70c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Address: 0x1000c70c4 | FUN_1000c70c4 */

void FUN_1000c70c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000c711c;
  }
  else {
    pcVar1 = FUN_1000c71d0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x130),*(undefined8 *)(lVar2 + 0x138));
  return;
}



/* Address: 0x1000c711c | FUN_1000c711c */

void FUN_1000c711c(void)

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
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_release(uVar2);
  _swift_release(uVar6);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_release(uVar1);
  _swift_release(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000c71cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000c71d0 | FUN_1000c71d0 */

void FUN_1000c71d0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _StringGuts _Var8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  FUN_1000d468c(unaff_x22 + 0x80);
  puVar1 = *(undefined **)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  _Var8.unknown = puVar1;
  FUN_100004640(unaff_x22 + 0x80);
  Swift::_StringGuts::grow(0x26,_Var8);
  SVar11.bridgeObject = (void *)0x8000000100d8f770;
  SVar11.str = (char *)0xd000000000000020;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar10;
  SVar11 = Swift::CustomStringConvertible::get_description();
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = &SUB_e200000000000000;
  SVar12.str = (char *)0x203a;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar12,SVar15);
  _swift_getErrorValue(uVar9,unaff_x22 + 0xf0,unaff_x22 + 0xa8);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_1000d4e0c(0,0xe000000000000000,puVar1,uVar3);
  _swift_errorRelease(uVar9);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(unaff_x22 + 0x80);
  _swift_willThrow();
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_release(uVar9);
  _swift_release(uVar5);
  _swift_release(uVar6);
  _swift_release(uVar10);
  _swift_release(uVar3);
  _swift_release(uVar4);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000c737c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000c7380 | FUN_1000c7380 */

/* WARNING: Removing unreachable block (ram,0x0001000c78fc) */

undefined * FUN_1000c7380(void)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x12;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  undefined *local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  ulong uStack_90;
  MainActor *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_68;
  
  local_80 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_a0 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = &DAT_100fa6658;
  local_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fa6658,&DAT_100c22e10);
  local_b8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar7 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  lVar8 = 0;
  FUN_10045ba0c();
  local_d0 = *(long *)(lVar8 + -8);
  local_c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  local_78 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar9 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar7);
  _swift_release(puVar9);
  local_d8 = *(ulong *)(local_68 + 0x10);
  if (local_d8 == 0) {
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar16 = 0;
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_e0 = local_68;
    local_b0 = lVar17;
    do {
      if (*(ulong *)(local_e0 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1000c78fc);
        (*pcVar18)();
      }
      uStack_90 = (ulong)*(byte *)(local_d0 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_d0 + 0x50) ^ 0xffffffffffffffff);
      local_98 = *(long *)(local_d0 + 0x48);
      FUN_1000c495c(local_e0 + local_98 * uVar16 + uStack_90,local_78,FUN_10045ba0c);
      pMVar10 = Swift::MainActor::typeMetadataAccessor();
      pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
      puVar11 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      local_88 = pMVar10;
      UVar12 = Swift::Actor::get_unownedExecutor();
      UVar13 = UVar12;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar13.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/MCPSettingsViewModel.swift",0x20,1,0x3e,UVar12.unknown,puVar11);
      }
      puVar7 = local_80;
      lVar14 = local_a0;
      iVar2 = *(int *)(local_c8 + 0x20);
      (**(code **)(local_a0 + 0x38))(lVar15,1,1,local_80);
      lVar17 = local_b0;
      lVar8 = (long)*(int *)(local_b8 + 0x30);
      FUN_100011090(local_78 + iVar2,local_b0,&DAT_100fa6660,&DAT_100c22e18);
      FUN_100011090(lVar15,lVar17 + lVar8,&DAT_100fa6660,&DAT_100c22e18);
      pcVar18 = *(code **)(lVar14 + 0x30);
      lVar14 = lVar17;
      (*pcVar18)(lVar17,1,puVar7);
      if ((int)lVar14 == 1) {
        FUN_100005808(lVar15,&DAT_100fa6660,&DAT_100c22e18);
        lVar8 = lVar17 + lVar8;
        (*pcVar18)(lVar8,1,local_80);
        if ((int)lVar8 != 1) {
LAB_1000c7738:
          FUN_100005808(lVar17,&DAT_100fa6658,&DAT_100c22e10);
          _swift_release(local_88);
          goto LAB_1000c7758;
        }
        FUN_100005808(lVar17,&DAT_100fa6660,&DAT_100c22e18);
        _swift_release(local_88);
LAB_1000c7550:
        FUN_10005241c(local_78,FUN_10045ba0c);
      }
      else {
        FUN_100011090(lVar17,local_c0,&DAT_100fa6660,&DAT_100c22e18);
        lVar14 = lVar17 + lVar8;
        (*pcVar18)(lVar14,1,local_80);
        puVar7 = local_80;
        lVar5 = local_a0;
        lVar4 = local_c0;
        puVar3 = local_e8;
        if ((int)lVar14 == 1) {
          FUN_100005808(lVar15,&DAT_100fa6660,&DAT_100c22e18);
          (**(code **)(local_a0 + 8))(local_c0,local_80);
          goto LAB_1000c7738;
        }
        (**(code **)(local_a0 + 0x20))(local_e8,lVar17 + lVar8,local_80);
        puVar9 = &DAT_100fa6668;
        FUN_100003a00(&DAT_100fa6668,PTR_typeMetadataAccessor_100ea7480,
                      PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
        bVar6 = Swift::Equatable::___infix(lVar4,puVar3,puVar7,puVar9);
        pcVar18 = *(code **)(lVar5 + 8);
        (*pcVar18)(puVar3,puVar7);
        FUN_100005808(lVar15,&DAT_100fa6660,&DAT_100c22e18);
        lVar8 = local_b0;
        (*pcVar18)(lVar4,puVar7);
        FUN_100005808(lVar8,&DAT_100fa6660,&DAT_100c22e18);
        _swift_release(local_88);
        if (bVar6) goto LAB_1000c7550;
LAB_1000c7758:
        puVar7 = local_a8;
        puVar9 = local_a8;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar7;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_1000718ac(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
          FUN_1000718ac(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        local_a8 = local_68;
        FUN_1000523d8(local_78,local_68 + uVar1 * local_98 + uStack_90,FUN_10045ba0c);
      }
      uVar16 = uVar16 + 1;
    } while (local_d8 != uVar16);
  }
  _swift_bridgeObjectRelease();
  puVar7 = local_a8;
  local_68 = local_a8;
  _swift_retain(local_a8);
  FUN_1000cbc1c(&local_68);
  _swift_release(puVar7);
  return local_68;
}



/* Address: 0x1000c7908 | FUN_1000c7908 */

void FUN_1000c7908(void)

{
  FUN_1000abcec(&DAT_100c2a738,&DAT_100c2a760);
  return;
}



/* Address: 0x1000c791c | FUN_1000c791c */

void FUN_1000c791c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  Published *pPVar4;
  void *pvVar5;
  long extraout_x8;
  CharacterSet in;
  long lVar6;
  String SVar7;
  ulong local_50;
  undefined8 uStack_48;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar6 = *(long *)(CVar2.unknown + -8);
  CVar3 = CVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  in.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_50 = param_1;
  uStack_48 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100008378();
  SVar7 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar5 = SVar7.bridgeObject;
  pPVar4 = (Published *)SVar7.str;
  (**(code **)(lVar6 + 8))(in.unknown,CVar2.unknown);
  uVar1 = (ulong)pPVar4 & 0xffffffffffff;
  if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_getKeyPath(&DAT_100c2a6c8);
    _swift_getKeyPath(&DAT_100c2a6f0);
    local_50 = local_50 & 0xffffffffffffff00;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar4,&local_50);
    FUN_1000c7a40(6,pPVar4,pvVar5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  return;
}



/* Address: 0x1000c7a40 | FUN_1000c7a40 */

void FUN_1000c7a40(ulong param_1,char *param_2,void *param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  LocalizedStringResource LVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  ulong uVar10;
  ulong *puVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  ulong uStack_90;
  char *local_88;
  void *local_80;
  ulong local_78;
  long *local_68;
  
  puVar3 = &DAT_100fa6f98;
  local_88 = param_2;
  local_80 = param_3;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&uStack_90 - extraout_x8;
  lVar4 = 0;
  FUN_1000c932c();
  local_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (ulong *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar10 = lVar13 - extraout_x12;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = (undefined *)(uVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_1000da768(&local_68);
  pvVar2 = local_80;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 3) {
    if ((param_1 & 0xff) != 0) {
      (**(code **)(*local_68 + 0xf0))(uVar10);
      uVar9 = param_1;
      uVar8 = uVar10;
      FUN_100477cc8();
      (**(code **)(lVar4 + 8))(uVar10,UVar5.unknown);
      if (uVar8 != 0) {
        *puVar11 = uVar9;
        puVar11[1] = uVar8;
        *(bool *)(puVar11 + 2) = uVar1 == 1;
        _swift_storeEnumTagMultiPayload(puVar11,local_78,2);
        goto LAB_1000c7d5c;
      }
      goto LAB_1000c7e78;
    }
    puVar3 = &DAT_100eb4ae0;
    _swift_allocObject(&DAT_100eb4ae0,0x19,7);
    *(long **)(puVar3 + 0x10) = local_68;
    puVar3[0x18] = 0;
    _swift_retain(local_68);
    FUN_1000ca288(0,0x4420656475616c43,0xee00706f746b7365,&DAT_100c2a730,puVar3);
  }
  else {
    if (uVar1 - 3 < 2) {
      (**(code **)(*local_68 + 0xf0))(uVar10);
      FUN_1004779d4(lVar14,param_1,uVar10);
      pcVar12 = *(code **)(lVar4 + 8);
      (*pcVar12)(uVar10,UVar5.unknown);
      lVar7 = lVar14;
      (**(code **)(lVar4 + 0x30))(lVar14,1,UVar5.unknown);
      if ((int)lVar7 == 1) {
        _swift_release(local_68);
        FUN_100005808(lVar14,&DAT_100fa6f98,&DAT_100c23be0);
        return;
      }
      (**(code **)(lVar4 + 0x20))(lVar13,lVar14,UVar5.unknown);
      (**(code **)(lVar4 + 0x10))(puVar11,lVar13,UVar5.unknown);
      _swift_storeEnumTagMultiPayload(puVar11,local_78,1);
      FUN_1000ca578(param_1,puVar11);
      _swift_release(local_68);
      FUN_10005241c(puVar11,FUN_1000c932c);
      (*pcVar12)(lVar13,UVar5.unknown);
      return;
    }
    if (uVar1 == 5) {
      (**(code **)(*local_68 + 0xf0))(uVar10);
      uVar8 = 0;
      uVar9 = uVar10;
      FUN_100477dc4();
      (**(code **)(lVar4 + 8))(uVar10,UVar5.unknown);
      *puVar11 = 0xd000000000000023;
      puVar11[1] = 0x8000000100d8f7a0;
      puVar11[2] = uVar8;
      puVar11[3] = uVar9;
      _swift_storeEnumTagMultiPayload(puVar11,local_78,3);
      param_1 = 5;
LAB_1000c7d5c:
      FUN_1000ca578(param_1,puVar11);
      _swift_release(local_68);
      FUN_10005241c(puVar11,FUN_1000c932c);
      return;
    }
    if (local_80 == (void *)0x0) {
      FUN_1001defd4(LVar6.unknown);
      SVar15 = (extension_Foundation)::Swift::String::init(LVar6);
    }
    else {
      SVar15.bridgeObject = local_80;
      SVar15.str = local_88;
    }
    puVar3 = &DAT_100eb4ab8;
    _swift_allocObject(&DAT_100eb4ab8,0x11,7);
    puVar3[0x10] = 6;
    _swift_bridgeObjectRetain(pvVar2);
    FUN_1000ca288(6,SVar15.str,SVar15.bridgeObject,&DAT_100c2a720,puVar3);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
  }
  _swift_release(puVar3);
LAB_1000c7e78:
  _swift_release(local_68);
  return;
}



/* Address: 0x1000c7ea0 | FUN_1000c7ea0 */

void FUN_1000c7ea0(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000c7eb4 | FUN_1000c7eb4 */

void FUN_1000c7eb4(Published *param_1,undefined8 *param_2)

{
  URL UVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  uVar4 = *param_2;
  puVar2 = &DAT_100c2a680;
  _swift_getKeyPath(&DAT_100c2a680);
  puVar3 = &DAT_100c2a6a8;
  _swift_getKeyPath(&DAT_100c2a6a8);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,
             UVar1.unknown);
  _swift_retain(uVar4);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4,
             puVar2,puVar3);
  return;
}



/* Address: 0x1000c7f7c | FUN_1000c7f7c */

undefined8 FUN_1000c7f7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c2a5a0;
  _swift_getKeyPath(&DAT_100c2a5a0);
  puVar2 = &DAT_100c2a5c8;
  _swift_getKeyPath(&DAT_100c2a5c8);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1000c7fec | FUN_1000c7fec */

void FUN_1000c7fec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2a738;
  _swift_getKeyPath(&DAT_100c2a738);
  puVar2 = &DAT_100c2a760;
  _swift_getKeyPath(&DAT_100c2a760);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000c8054 | FUN_1000c8054 */

void FUN_1000c8054(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c2a738;
  _swift_getKeyPath(&DAT_100c2a738);
  puVar3 = &DAT_100c2a760;
  _swift_getKeyPath(&DAT_100c2a760);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x1000c80c4 | FUN_1000c80c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000c8310 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000c80c4(void)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  TaskPriority TVar8;
  MainActor *pMVar9;
  MainActor *this;
  MainActor *pMVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar4 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = auStack_f0 + -extraout_x8;
  local_b0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_b8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  lVar12 = (long)(auStack_f0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  puVar4 = &DAT_100fa6680;
  local_c8 = lVar12;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  local_d8 = *(long *)(puVar4 + -8);
  puStack_d0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_01;
  puVar4 = &DAT_100fac2f8;
  FUN_1000037f0(&DAT_100fac2f8,&DAT_100c2a4c0);
  local_e8 = *(long *)(puVar4 + -8);
  puStack_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar12 - extraout_x8_02;
  puVar4 = &DAT_100fabcd0;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = lVar18 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar15 - extraout_x12_00;
  puVar5 = &DAT_100fac2f0;
  FUN_1000037f0(&DAT_100fac2f0,&DAT_100c2a4b8);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getKeyPath(&DAT_100c2a4e0);
  FUN_1002cb7e0(&local_98);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x10) = local_98;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x20) = local_88;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x30) = local_78;
  *(undefined8 *)(unaff_x20 + 0x40) = local_68;
  lVar1 = _TtC5Paste20MCPSettingsViewModel::_clients;
  local_a0 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = &DAT_100fabf28;
  FUN_1000037f0(&DAT_100fabf28,&DAT_100c2a390);
  Combine::Published::init(lVar17 - extraout_x8_04,puVar6,puVar6);
  (**(code **)(lVar13 + 0x20))(unaff_x20 + lVar1,lVar17 - extraout_x8_04,puVar5);
  lVar1 = _TtC5Paste20MCPSettingsViewModel::_activeConnection;
  lVar13 = 0;
  FUN_1000c99d0();
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar17,1,1,lVar13);
  FUN_100011090(lVar17,lVar15,&DAT_100fabcd0,&DAT_100c29f10);
  Combine::Published::init(lVar18,lVar13,puVar4);
  FUN_100005808(lVar17,&DAT_100fabcd0,&DAT_100c29f10);
  (**(code **)(local_e8 + 0x20))(unaff_x20 + lVar1,lVar18,puStack_e0);
  lVar1 = _TtC5Paste20MCPSettingsViewModel::_isEnteringCustomName;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_a0 = (long *)((ulong)local_a0 & 0xffffffffffffff00);
  Combine::Published::init(lVar12,lVar13,PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar5 = puStack_d0;
  pcVar16 = *(code **)(local_d8 + 0x20);
  (*pcVar16)(unaff_x20 + lVar1,lVar12,puStack_d0);
  lVar1 = _TtC5Paste20MCPSettingsViewModel::_isActivating;
  local_a0 = (long *)((ulong)local_a0 & 0xffffffffffffff00);
  Combine::Published::init(lVar12,lVar13,puVar4);
  (*pcVar16)(unaff_x20 + lVar1,lVar12,puVar5);
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientsTask) = 0;
  lVar1 = _TtC5Paste20MCPSettingsViewModel::pendingWatch;
  lVar13 = 0;
  FUN_10046de5c();
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar13);
  lVar1 = _TtC5Paste20MCPSettingsViewModel::mcpServer;
  puVar4 = &DAT_100c2a510;
  _swift_getKeyPath();
  puVar5 = &DAT_100faa878;
  FUN_1000037f0(&DAT_100faa878,&DAT_100c2a540);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _TtC5Paste20MCPSettingsViewModel::clientStore;
  puVar4 = &DAT_100c2a548;
  _swift_getKeyPath();
  puVar5 = &DAT_100fac300;
  FUN_1000037f0(&DAT_100fac300,&DAT_100c2a578);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _TtC5Paste20MCPSettingsViewModel::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar7 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100c2a340);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar7;
  uVar14 = *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::mcpServer);
  _swift_retain(uVar14);
  FUN_1000da768(&local_a0);
  _swift_release(uVar14);
  plVar3 = local_a0;
  lVar13 = local_c8;
  (**(code **)(*local_a0 + 0xf0))(local_c8);
  _swift_release(plVar3);
  puVar4 = local_b0;
  lVar12 = local_b8;
  lVar1 = _TtC5Paste20MCPSettingsViewModel::_serverURL;
  (**(code **)(local_b8 + 0x10))(local_c0,lVar13,local_b0);
  Combine::Published::init(unaff_x20 + lVar1,uVar7,puVar4);
  (**(code **)(lVar12 + 8))(lVar13,puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientStore);
  _swift_retain(uVar7);
  FUN_1000da768(&local_a0);
  _swift_release(uVar7);
  plVar3 = local_a0;
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  puVar2 = local_a8;
  (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(local_a8,1,1,TVar8.unknown);
  pMVar9 = (MainActor *)&DAT_100eb4a40;
  _swift_allocObject(&DAT_100eb4a40,0x18,7);
  _swift_weakInit(pMVar9 + 0x10);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  _swift_retain(plVar3);
  pMVar10 = pMVar9;
  _swift_retain();
  pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
  puVar11 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar4 = &DAT_100eb4a68;
  _swift_allocObject(&DAT_100eb4a68,0x30,7);
  *(MainActor **)(puVar4 + 0x10) = pMVar10;
  *(undefined8 **)(puVar4 + 0x18) = puVar11;
  *(long **)(puVar4 + 0x20) = plVar3;
  *(MainActor **)(puVar4 + 0x28) = pMVar9;
  _swift_release(pMVar9);
  uVar7 = 0;
  FUN_1000645b0(0,0,puVar2,&DAT_100c2a588,puVar4);
  _swift_release(plVar3);
  uVar14 = *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientsTask);
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientsTask) = uVar7;
  _swift_release(uVar14);
  return;
}



/* Address: 0x1000c86e4 | FUN_1000c86e4 */

void FUN_1000c86e4(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x4;
  puVar1 = &DAT_100fabcc8;
  FUN_1000037f0(&DAT_100fabcc8,&DAT_100c2a4d0);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar4 = 0;
  FUN_10046de5c();
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  puVar1 = &DAT_100fabcd0;
  FUN_1000037f0(&DAT_100fabcd0,&DAT_100c29f10);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  puVar1 = &DAT_100fac308;
  FUN_1000037f0(&DAT_100fac308,&DAT_100c2a590);
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  puVar1 = &DAT_100fac310;
  FUN_1000037f0(&DAT_100fac310,&DAT_100c2a598);
  *(undefined **)(unaff_x22 + 0xb8) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0xd0) = pMVar5;
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xd8) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0xe0) = puVar6;
  _swift_task_switch(FUN_1000c8880,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1000c8880 | FUN_1000c8880 */

void FUN_1000c8880(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  AsyncStream AVar4;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  AVar4.unknown = *(undefined **)(unaff_x22 + 0xa0);
  (**(code **)(**(long **)(unaff_x22 + 0x50) + 0x110))(uVar2);
  Swift::AsyncStream::_makeAsyncIterator(AVar4);
  (**(code **)(lVar1 + 8))(uVar2,AVar4.unknown);
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000c8928;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1000c8928 | FUN_1000c8928 */

void FUN_1000c8928(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xe8));
  _swift_task_switch(FUN_1000c896c,*(undefined8 *)(lVar1 + 0xd8),*(undefined8 *)(lVar1 + 0xe0));
  return;
}



/* Address: 0x1000c896c | FUN_1000c896c */

void FUN_1000c896c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  Published *pPVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  
  uVar18 = *(ulong *)(unaff_x22 + 0x40);
  if (uVar18 == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(uVar16,*(undefined8 *)(unaff_x22 + 0xb8));
    _swift_release(uVar2);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001000c8b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x58) + 0x10;
  _swift_weakLoadStrong();
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(uVar18);
  }
  else {
    pPVar15 = *(Published **)(unaff_x22 + 0x98);
    puVar9 = &DAT_100c2a5a0;
    _swift_getKeyPath(&DAT_100c2a5a0);
    puVar10 = &DAT_100c2a5c8;
    _swift_getKeyPath(&DAT_100c2a5c8);
    *(ulong *)(unaff_x22 + 0x48) = uVar18;
    _swift_retain(lVar8);
    _swift_bridgeObjectRetain(uVar18);
    Combine::Published::_set_subscript(pPVar15,unaff_x22 + 0x48,lVar8,puVar9,puVar10);
    puVar9 = &DAT_100c2a5e8;
    _swift_getKeyPath(&DAT_100c2a5e8);
    puVar10 = &DAT_100c2a610;
    _swift_getKeyPath(&DAT_100c2a610);
    Combine::Published::_get_subscript(pPVar15,lVar8,puVar9,puVar10);
    _swift_release(puVar10);
    _swift_release(puVar9);
    lVar11 = 0;
    FUN_1000c99d0();
    lVar20 = *(long *)(lVar11 + -8);
    (**(code **)(lVar20 + 0x30))(pPVar15,1,lVar11);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
    if ((int)pPVar15 == 1) {
      _swift_release(lVar8);
      _swift_bridgeObjectRelease(uVar18);
      puVar9 = &DAT_100fabcd0;
      puVar10 = &DAT_100c29f10;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar6 = *(long *)(unaff_x22 + 0x78);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x68);
      FUN_100005808(uVar16,&DAT_100fabcd0,&DAT_100c29f10);
      lVar7 = _TtC5Paste20MCPSettingsViewModel::pendingWatch;
      _swift_beginAccess(lVar8 + _TtC5Paste20MCPSettingsViewModel::pendingWatch,unaff_x22 + 0x10,0,0
                        );
      FUN_100011090(lVar8 + lVar7,uVar19,&DAT_100fabcc8,&DAT_100c2a4d0);
      (**(code **)(lVar6 + 0x30))(uVar19,1,uVar1);
      if ((int)uVar19 != 1) {
        FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x80),
                      FUN_10046de5c);
        uVar13 = uVar18;
        FUN_10046c6b4();
        if ((uVar13 & 1) == 0) {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
          _swift_release(lVar8);
          _swift_bridgeObjectRelease(uVar18);
          FUN_10005241c(uVar16,FUN_10046de5c);
        }
        else {
          pPVar15 = *(Published **)(unaff_x22 + 0x88);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
          lVar6 = *(long *)(unaff_x22 + 0x78);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
          (**(code **)(lVar20 + 0x38))(uVar16,1,1,lVar11);
          puVar9 = &DAT_100c2a5e8;
          _swift_getKeyPath(&DAT_100c2a5e8);
          puVar10 = &DAT_100c2a610;
          _swift_getKeyPath(&DAT_100c2a610);
          FUN_100011090(uVar16,pPVar15,&DAT_100fabcd0,&DAT_100c29f10);
          _swift_retain(lVar8);
          Combine::Published::_set_subscript(pPVar15,pPVar15,lVar8,puVar9,puVar10);
          _swift_bridgeObjectRelease(uVar18);
          FUN_100005808(uVar16,&DAT_100fabcd0,&DAT_100c29f10);
          FUN_10005241c(uVar1,FUN_10046de5c);
          (**(code **)(lVar6 + 0x38))(uVar14,1,1,uVar19);
          _swift_beginAccess(lVar8 + lVar7,unaff_x22 + 0x28,0x21,0);
          FUN_1000c4cc4(uVar14,lVar8 + lVar7);
          _swift_endAccess(unaff_x22 + 0x28);
          _swift_release(lVar8);
        }
        goto LAB_1000c8bd8;
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
      _swift_release(lVar8);
      _swift_bridgeObjectRelease(uVar18);
      puVar9 = &DAT_100fabcc8;
      puVar10 = &DAT_100c2a4d0;
    }
    FUN_100005808(uVar16,puVar9,puVar10);
  }
LAB_1000c8bd8:
  plVar12 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1000c8d90;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1000c8d90 | FUN_1000c8d90 */

void FUN_1000c8d90(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xf0));
  _swift_task_switch(FUN_1000c896c,*(undefined8 *)(lVar1 + 0xd8),*(undefined8 *)(lVar1 + 0xe0));
  return;
}



/* Address: 0x1000c8dd4 | FUN_1000c8dd4 */

void FUN_1000c8dd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  Task TVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  lVar4 = _TtC5Paste20MCPSettingsViewModel::clientsTask;
  puVar6 = *(undefined **)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientsTask);
  if (puVar6 != (undefined *)0x0) {
    TVar5.unknown = puVar6;
    _swift_retain();
    Swift::Task::cancel(TVar5);
    _swift_release(puVar6);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar9);
  _swift_release(uVar7);
  _swift_release(uVar2);
  _swift_release(uVar1);
  lVar3 = _TtC5Paste20MCPSettingsViewModel::_serverURL;
  puVar6 = &DAT_100fac2e8;
  FUN_1000037f0(&DAT_100fac2e8,&DAT_100c2a4b0);
  (**(code **)(*(long *)(puVar6 + -8) + 8))(unaff_x20 + lVar3,puVar6);
  lVar3 = _TtC5Paste20MCPSettingsViewModel::_clients;
  puVar6 = &DAT_100fac2f0;
  FUN_1000037f0(&DAT_100fac2f0,&DAT_100c2a4b8);
  (**(code **)(*(long *)(puVar6 + -8) + 8))(unaff_x20 + lVar3,puVar6);
  lVar3 = _TtC5Paste20MCPSettingsViewModel::_activeConnection;
  puVar6 = &DAT_100fac2f8;
  FUN_1000037f0(&DAT_100fac2f8,&DAT_100c2a4c0);
  (**(code **)(*(long *)(puVar6 + -8) + 8))(unaff_x20 + lVar3,puVar6);
  lVar3 = _TtC5Paste20MCPSettingsViewModel::_isEnteringCustomName;
  puVar6 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  pcVar8 = *(code **)(*(long *)(puVar6 + -8) + 8);
  (*pcVar8)(unaff_x20 + lVar3,puVar6);
  (*pcVar8)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::_isActivating,puVar6);
  _swift_release(*(undefined8 *)(unaff_x20 + lVar4));
  FUN_100005808(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::pendingWatch,&DAT_100fabcc8,
                &DAT_100c2a4d0);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::mcpServer));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::clientStore));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste20MCPSettingsViewModel::logger));
  return;
}



/* Address: 0x1000c8fa4 | FUN_1000c8fa4 */

void FUN_1000c8fa4(void)

{
  FUN_1000c8dd4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000c8fc8 | FUN_1000c8fc8 */

void FUN_1000c8fc8(void)

{
  FUN_1000c8fd0(0);
  return;
}



/* Address: 0x1000c8fd0 | FUN_1000c8fd0 */

void FUN_1000c8fd0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fac0a8,&TargetClassDescriptor_100ca2328);
  return;
}



/* Address: 0x1000c8fe4 | FUN_1000c8fe4 */

void FUN_1000c8fe4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_78 = &DAT_100c2a378;
  puVar2 = &DAT_100fac0b8;
  lVar1 = 0x13f;
  FUN_1000c9144(0x13f,&DAT_100fac0b8,PTR_typeMetadataAccessor_100ea71a8,
                PTR_typeMetadataAccessor_100ea98d8);
  if (puVar2 < (undefined *)0x40) {
    local_70 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100fac0c0;
    lVar1 = 0x13f;
    FUN_100007750(0x13f,&DAT_100fac0c0,&DAT_100fabf28,&DAT_100c2a390);
    if (puVar2 < (undefined *)0x40) {
      local_68 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_100fac0c8;
      lVar1 = 0x13f;
      FUN_100007750(0x13f,&DAT_100fac0c8,&DAT_100fabcd0,&DAT_100c29f10);
      if (puVar2 < (undefined *)0x40) {
        local_60 = *(long *)(lVar1 + -8) + 0x40;
        lVar1 = 0x13f;
        FUN_1000056c4();
        if (puVar2 < (undefined *)0x40) {
          local_58 = *(long *)(lVar1 + -8) + 0x40;
          local_48 = &DAT_100c2a3a0;
          puVar2 = &DAT_100fac0d0;
          lVar1 = 0x13f;
          lStack_50 = local_58;
          FUN_1000c9144(0x13f,&DAT_100fac0d0,FUN_10046de5c,PTR_typeMetadataAccessor_100eac9c8);
          if (puVar2 < (undefined *)0x40) {
            local_40 = *(long *)(lVar1 + -8) + 0x40;
            puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
            local_30 = puStack_38;
            puStack_28 = puStack_38;
            _swift_updateClassMetadata2(param_1,0x100,0xb,&local_78,param_1 + 0x50);
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1000c9144 | FUN_1000c9144 */

void FUN_1000c9144(long param_1,long *param_2,code *param_3,code *param_4)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    (*param_4)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Address: 0x1000c919c | FUN_1000c919c */

long * FUN_1000c919c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  UUID UVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  URL UVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar6 = 0;
    FUN_1000c932c(0);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar6);
    iVar4 = (int)puVar7;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        UVar9 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar9.unknown + -8) + 0x10))(puVar1,puVar2,UVar9.unknown);
        uVar10 = 0;
      }
      else {
        UVar9 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar9.unknown + -8) + 0x10))(puVar1,puVar2,UVar9.unknown);
        uVar10 = 1;
      }
    }
    else if (iVar4 == 2) {
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
      _swift_bridgeObjectRetain();
      uVar10 = 2;
    }
    else if (iVar4 == 3) {
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      uVar10 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar10;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
      uVar10 = 3;
    }
    else {
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      _swift_bridgeObjectRetain();
      uVar10 = 4;
    }
    _swift_storeEnumTagMultiPayload(puVar1,uVar6,uVar10);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar11 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000c932c | FUN_1000c932c */

void FUN_1000c932c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fac2a8,&TargetEnumDescriptor_100ca2398);
  return;
}



/* Address: 0x1000c9340 | FUN_1000c9340 */

void FUN_1000c9340(long param_1,long param_2)

{
  int iVar1;
  UUID UVar2;
  undefined8 uVar3;
  long lVar4;
  URL UVar5;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1,UVar2.unknown);
  param_1 = param_1 + *(int *)(param_2 + 0x18);
  uVar3 = 0;
  FUN_1000c932c(0);
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar3);
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if ((iVar1 != 0) && (iVar1 != 1)) {
      return;
    }
    UVar5 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000c93e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(param_1,UVar5.unknown);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      goto LAB_1000c93f0;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
LAB_1000c93f0:
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x1000c9408 | FUN_1000c9408 */

long FUN_1000c9408(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  URL UVar7;
  undefined8 uVar8;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar5 = 0;
  FUN_1000c932c(0);
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar5);
  iVar3 = (int)puVar6;
  if (iVar3 < 2) {
    UVar7 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(puVar1,puVar2,UVar7.unknown);
  }
  else {
    if (iVar3 == 2) {
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    }
    else if (iVar3 == 3) {
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      uVar8 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar8;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
    }
    _swift_bridgeObjectRetain(uVar8);
  }
  _swift_storeEnumTagMultiPayload(puVar1,uVar5,puVar6);
  return param_1;
}



/* Address: 0x1000c9518 | FUN_1000c9518 */

long FUN_1000c9518(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  URL UVar7;
  undefined8 uVar8;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x18))(param_1,param_2,UVar4.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
    FUN_10005241c(puVar1,FUN_1000c932c);
    uVar5 = 0;
    FUN_1000c932c(0);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar5);
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      UVar7 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(puVar1,puVar2,UVar7.unknown);
    }
    else {
      if (iVar3 == 2) {
        *puVar1 = *puVar2;
        uVar8 = puVar2[1];
        puVar1[1] = uVar8;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
      }
      else if (iVar3 == 3) {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        uVar8 = puVar2[3];
        puVar1[3] = uVar8;
        _swift_bridgeObjectRetain();
      }
      else {
        *puVar1 = *puVar2;
        uVar8 = puVar2[1];
        puVar1[1] = uVar8;
      }
      _swift_bridgeObjectRetain(uVar8);
    }
    _swift_storeEnumTagMultiPayload(puVar1,uVar5,puVar6);
  }
  return param_1;
}



/* Address: 0x1000c9664 | FUN_1000c9664 */

long FUN_1000c9664(long param_1,long param_2,long param_3)

{
  long lVar1;
  UUID UVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))(param_1,param_2,UVar2.unknown);
  lVar1 = (long)*(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar3 = 0;
  FUN_1000c932c();
  lVar4 = param_2 + lVar1;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))
              (param_1 + lVar1,param_2 + lVar1,UVar5.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar1,lVar3,1);
  }
  else if ((int)lVar4 == 0) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))
              (param_1 + lVar1,param_2 + lVar1,UVar5.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar1,lVar3,0);
  }
  else {
    _memcpy((void *)(param_1 + lVar1),(void *)(param_2 + lVar1),
            *(size_t *)(*(long *)(lVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1000c9760 | FUN_1000c9760 */

long FUN_1000c9760(long param_1,long param_2,long param_3)

{
  UUID UVar1;
  long lVar2;
  long lVar3;
  URL UVar4;
  long lVar5;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x28))(param_1,param_2,UVar1.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  if (param_1 != param_2) {
    lVar5 = (long)*(int *)(param_3 + 0x18);
    FUN_10005241c(param_1 + lVar5,FUN_1000c932c);
    lVar2 = 0;
    FUN_1000c932c();
    lVar3 = param_2 + lVar5;
    _swift_getEnumCaseMultiPayload(lVar3,lVar2);
    if ((int)lVar3 == 1) {
      UVar4 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))
                (param_1 + lVar5,param_2 + lVar5,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar2,1);
    }
    else if ((int)lVar3 == 0) {
      UVar4 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))
                (param_1 + lVar5,param_2 + lVar5,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar2,0);
    }
    else {
      _memcpy((void *)(param_1 + lVar5),(void *)(param_2 + lVar5),
              *(size_t *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Address: 0x1000c9878 | FUN_1000c9878 */

void FUN_1000c9878(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000c9884 | FUN_1000c9884 */

ulong FUN_1000c9884(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  UUID UVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(UVar2.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar2.unknown + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0xf9) {
      uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
      uVar1 = 0;
      if (6 < uVar3) {
        uVar1 = uVar3 - 6;
      }
      return (ulong)uVar1;
    }
    UVar2.unknown = (undefined *)0x0;
    FUN_1000c932c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar2.unknown + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c9920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UVar2.unknown);
  return param_1;
}



/* Address: 0x1000c9924 | FUN_1000c9924 */

void FUN_1000c9924(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000c9930 | FUN_1000c9930 */

void FUN_1000c9930(long param_1,undefined8 param_2,int param_3,long param_4)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x38);
  }
  else {
    if (param_3 == 0xf9) {
      *(char *)(param_1 + *(int *)(param_4 + 0x14)) = (char)param_2 + '\x06';
      return;
    }
    UVar1.unknown = (undefined *)0x0;
    FUN_1000c932c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c99cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,UVar1.unknown);
  return;
}



/* Address: 0x1000c99d0 | FUN_1000c99d0 */

void FUN_1000c99d0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fac1f8,&TargetStructDescriptor_100ca2370);
  return;
}



/* Address: 0x1000c99e4 | FUN_1000c99e4 */

void FUN_1000c99e4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Address: 0x1000c9a14 | FUN_1000c9a14 */

void FUN_1000c9a14(long param_1,ulong param_2)

{
  UUID UVar1;
  long lVar2;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_30 = &DAT_100c2a3d8;
    lVar2 = 0x13f;
    FUN_1000c932c();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar2 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1000c9aa0 | FUN_1000c9aa0 */

long * FUN_1000c9aa0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  URL UVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        UVar5 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
        uVar6 = 0;
      }
      else {
        UVar5 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
        uVar6 = 1;
      }
    }
    else if (iVar2 == 2) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      *(char *)(param_1 + 2) = (char)param_2[2];
      _swift_bridgeObjectRetain();
      uVar6 = 2;
    }
    else if (iVar2 == 3) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      lVar4 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar4);
      uVar6 = 3;
    }
    else {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      _swift_bridgeObjectRetain();
      uVar6 = 4;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar6);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000c9bf0 | FUN_1000c9bf0 */

void FUN_1000c9bf0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  URL UVar4;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar2;
  if (iVar1 < 2) {
    if ((iVar1 != 0) && (iVar1 != 1)) {
      return;
    }
    UVar4 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000c9c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_1,UVar4.unknown);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      goto LAB_1000c9c68;
    }
    if (iVar1 != 4) {
      return;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
LAB_1000c9c68:
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x1000c9c80 | FUN_1000c9c80 */

undefined8 * FUN_1000c9c80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  URL UVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
  }
  else {
    if (iVar1 == 2) {
      uVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar4;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    }
    else if (iVar1 == 3) {
      uVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar4;
      uVar4 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar4;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar4;
    }
    _swift_bridgeObjectRetain(uVar4);
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1000c9d48 | FUN_1000c9d48 */

undefined8 * FUN_1000c9d48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  URL UVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1000c932c);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar1 = (int)puVar2;
    if (iVar1 < 2) {
      UVar3 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
    }
    else {
      if (iVar1 == 2) {
        *param_1 = *param_2;
        uVar4 = param_2[1];
        param_1[1] = uVar4;
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      }
      else if (iVar1 == 3) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        uVar4 = param_2[3];
        param_1[3] = uVar4;
        _swift_bridgeObjectRetain();
      }
      else {
        *param_1 = *param_2;
        uVar4 = param_2[1];
        param_1[1] = uVar4;
      }
      _swift_bridgeObjectRetain(uVar4);
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  }
  return param_1;
}



/* Address: 0x1000c9e48 | FUN_1000c9e48 */

void * FUN_1000c9e48(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 1) {
    UVar1 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
    uVar3 = 1;
  }
  else {
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    UVar1 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x1000c9f10 | FUN_1000c9f10 */

void * FUN_1000c9f10(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1000c932c);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 == 1) {
      UVar1 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
      uVar3 = 1;
    }
    else {
      if ((int)pvVar2 != 0) {
        pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return pvVar2;
      }
      UVar1 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}


