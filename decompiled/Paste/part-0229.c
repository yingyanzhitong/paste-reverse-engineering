/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002c03d4 | FUN_1002c03d4 */

void FUN_1002c03d4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf40));
  _swift_asyncLet_finish
            (unaff_x22 + 0x290,*(undefined8 *)(unaff_x22 + 0xef8),FUN_1002c0414,unaff_x22 + 0xe40);
  return;
}



/* Address: 0x1002c0414 | FUN_1002c0414 */

void FUN_1002c0414(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002c0428,*(undefined8 *)(unaff_x22 + 0xf70),
                     *(undefined8 *)(unaff_x22 + 0xf78));
  return;
}



/* Address: 0x1002c0428 | FUN_1002c0428 */

void FUN_1002c0428(void)

{
  long unaff_x22;
  
  _swift_asyncLet_finish
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xf08),FUN_1002c0440,unaff_x22 + 0xe70);
  return;
}



/* Address: 0x1002c0440 | FUN_1002c0440 */

void FUN_1002c0440(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002c0454,*(undefined8 *)(unaff_x22 + 0xf70),
                     *(undefined8 *)(unaff_x22 + 0xf78));
  return;
}



/* Address: 0x1002c0454 | FUN_1002c0454 */

void FUN_1002c0454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf28);
  lVar11 = *(long *)(unaff_x22 + 0xf20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf08);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf00);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xef8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xef0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xee8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xee0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe98);
  FUN_10005241c(uVar5,FUN_1002bdad0);
  (**(code **)(lVar11 + 8))(uVar4,uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002c0530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002c0534 | FUN_1002c0534 */

void FUN_1002c0534(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_10024ca94;
                    /* WARNING: Could not recover jumptable at 0x0001002c05cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x1002c05d0 | FUN_1002c05d0 */

void FUN_1002c05d0(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1002c05fc | FUN_1002c05fc */

void FUN_1002c05fc(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002c0630 | FUN_1002c0630 */

void FUN_1002c0630(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1002bf3fc(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002c0698 | FUN_1002c0698 */

void FUN_1002c0698(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10024ca94;
                    /* WARNING: Could not recover jumptable at 0x0001002c0730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x1002c0734 | FUN_1002c0734 */

void FUN_1002c0734(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  long extraout_x8;
  long lVar5;
  bool bVar6;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_df;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  puVar2 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    bVar6 = false;
    param_1 = param_1 + 0x20;
    do {
      FUN_1002c4bd0(param_1,&local_d0);
      lVar1 = lStack_98;
      uVar3 = uStack_a0;
      uStack_f8 = uStack_88;
      local_100 = local_90;
      uStack_f0 = uStack_80;
      uStack_df = uStack_6f;
      uStack_138 = uStack_c8;
      local_140 = local_d0;
      uStack_128 = uStack_b8;
      local_130 = uStack_c0;
      lStack_108 = lStack_98;
      local_110 = uStack_a0;
      uStack_118 = uStack_a8;
      local_120 = local_b0;
      FUN_100004640(&uStack_128,uStack_a0);
      (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
      if ((uVar3 | 2) == 3) {
        if (uStack_df._7_1_ == '\x01') {
          FUN_10042d0f8(0);
          FUN_10042a180(&uStack_128);
        }
        bVar6 = true;
      }
      FUN_1002c4c0c(&local_140);
      param_1 = param_1 + 0x70;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (bVar6) {
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
                ((long)&local_140 - extraout_x8,1,1,TVar4.unknown);
      puVar2 = &DAT_100ec6c50;
      _swift_allocObject(&DAT_100ec6c50,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      _swift_retain(param_2);
      FUN_10024cc3c(0,0,(long)&local_140 - extraout_x8,&DAT_100c3cc28,puVar2);
      _swift_release();
    }
  }
  return;
}



/* Address: 0x1002c08ec | FUN_1002c08ec */

void FUN_1002c08ec(void)

{
  FUN_1002c0734();
  return;
}



/* Address: 0x1002c08f4 | FUN_1002c08f4 */

void FUN_1002c08f4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  lVar1 = 0;
  FUN_1001a5804();
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  puVar4 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  _swift_task_switch(FUN_1002c0984,0,0);
  return;
}



/* Address: 0x1002c0984 | FUN_1002c0984 */

void FUN_1002c0984(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002c09dc;
  FUN_1002bf3fc(plVar1,*(undefined8 *)(unaff_x22 + 0x38),0,0);
  return;
}



/* Address: 0x1002c09dc | FUN_1002c09dc */

void FUN_1002c09dc(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar9 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar9 + 0x30);
  uVar5 = *(undefined8 *)(lVar9 + 0x38);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x48));
  FUN_1000523d8(uVar5,uVar4,FUN_1001a5804);
  lVar2 = 0;
  FUN_10019fee0();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x30))(uVar4,2,lVar2);
  bVar1 = (int)uVar4 == 0;
  if (bVar1) {
    FUN_1000523d8(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x40),FUN_10019fee0);
  }
  lVar3 = *(long *)(lVar9 + 0x28);
  (**(code **)(lVar6 + 0x38))(*(undefined8 *)(lVar9 + 0x40),!bVar1,1,lVar2);
  _swift_beginAccess(lVar3 + 0x10,lVar9 + 0x10,0x20,0);
  pcVar7 = *(code **)(lVar3 + 0x10);
  uVar4 = *(undefined8 *)(lVar9 + 0x40);
  if (pcVar7 == (code *)0x0) {
    FUN_100005808(uVar4,&DAT_100fb81c0,&DAT_100c37cc0);
    _swift_endAccess(lVar9 + 0x10);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x18);
    _swift_endAccess(lVar9 + 0x10);
    _swift_retain(uVar5);
    (*pcVar7)(uVar4);
    FUN_100004550(pcVar7,uVar5);
    FUN_100005808(uVar4,&DAT_100fb81c0,&DAT_100c37cc0);
  }
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  uVar5 = *(undefined8 *)(lVar9 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x40));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002c0b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}



/* Address: 0x1002c0b3c | FUN_1002c0b3c */

void FUN_1002c0b3c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1002c0b54,0,0);
  return;
}



/* Address: 0x1002c0b54 | FUN_1002c0b54 */

void FUN_1002c0b54(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002c0ba8;
  FUN_100244a4c(plVar1,*(undefined8 *)(unaff_x22 + 0x10),0,0);
  return;
}



/* Address: 0x1002c0ba8 | FUN_1002c0ba8 */

void FUN_1002c0ba8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001002c0be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1002c0be8 | FUN_1002c0be8 */

void FUN_1002c0be8(undefined8 param_1,undefined8 param_2)

{
  Transactions TVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  TVar1 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x20) = TVar1.unknown;
  lVar3 = *(long *)(TVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  _swift_task_switch(FUN_1002c0c48,0,0);
  return;
}



/* Address: 0x1002c0c48 | FUN_1002c0c48 */

void FUN_1002c0c48(Transaction param_1)

{
  long *plVar1;
  long unaff_x22;
  
  StoreKit::Transaction::get_all(param_1);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002c0cb8;
  FUN_10024599c(0,0,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x10),
                *(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1002c0cb8 | FUN_1002c0cb8 */

void FUN_1002c0cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 0x20);
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x38));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002c0d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1,param_2,param_3);
  return;
}



/* Address: 0x1002c0d38 | FUN_1002c0d38 */

void FUN_1002c0d38(undefined8 param_1,int *param_2)

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
  plVar2[1] = (long)FUN_1002c0d90;
                    /* WARNING: Could not recover jumptable at 0x0001002c0d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Address: 0x1002c0d90 | FUN_1002c0d90 */

void FUN_1002c0d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001002c0de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1002c0dec | FUN_1002c0dec */

void FUN_1002c0dec(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncIterator AVar3;
  Transactions TVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x10) = uVar2;
  AVar3 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = AVar3.unknown;
  lVar5 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  TVar4 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = TVar4.unknown;
  lVar5 = *(long *)(TVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_1002c0e9c,0,0);
  return;
}



/* Address: 0x1002c0e9c | FUN_1002c0e9c */

void FUN_1002c0e9c(Transaction param_1)

{
  Transactions TVar1;
  long *plVar2;
  long unaff_x22;
  
  TVar1 = StoreKit::Transaction::get_unfinished(param_1);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002c0f0c;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1002c0f0c | FUN_1002c0f0c */

void FUN_1002c0f0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1002c0f68,uVar1,uVar2);
  return;
}



/* Address: 0x1002c0f68 | FUN_1002c0f68 */

void FUN_1002c0f68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar4 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  uVar5 = uVar8;
  (**(code **)(*(long *)(puVar4 + -8) + 0x30))(uVar8,1,puVar4);
  if ((int)uVar5 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x18));
    (**(code **)(lVar7 + 8))(uVar1,uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002c1018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x48);
  if (!SCARRY8(lVar7,1)) {
    FUN_100005808(uVar8,&DAT_100fb83a0,&DAT_100c37ad0);
    *(long *)(unaff_x22 + 0x48) = lVar7 + 1;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1002c0f0c;
    StoreKit::Transaction::Transactions::AsyncIterator::_next
              ((AsyncIterator)*(undefined **)(unaff_x22 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002c1090);
  (*pcVar3)();
}



/* Address: 0x1002c1090 | FUN_1002c1090 */

void FUN_1002c1090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1002c10ac,0,0);
  return;
}



/* Address: 0x1002c10ac | FUN_1002c10ac */

void FUN_1002c10ac(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002c1104;
  FUN_1002450bc(plVar1,*(undefined8 *)(unaff_x22 + 0x10),0,0,*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Address: 0x1002c1104 | FUN_1002c1104 */

void FUN_1002c1104(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001002c113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1002c1140 | FUN_1002c1140 */

undefined1  [16]
FUN_1002c1140(undefined8 param_1,_StringGuts param_2,undefined8 param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  String SVar4;
  String SVar5;
  char local_50 [24];
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar2 = local_50;
  uVar3 = *unaff_x20;
  local_30 = 0;
  local_28 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x25,param_2);
  _swift_bridgeObjectRelease(local_28);
  local_30 = 0xd000000000000023;
  local_28 = 0x8000000100da0280;
  _swift_getErrorValue(uVar3,auStack_38);
  SVar4 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar2;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  auVar1._8_8_ = local_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x1002c11d0 | FUN_1002c11d0 */

void FUN_1002c11d0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10025e6bc();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1000d9d9c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x1002c12a0 | FUN_1002c12a0 */

void FUN_1002c12a0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_3;
  uVar5 = param_4;
  FUN_100071370();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c137c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10025e9d4(lVar6,param_5 & 1);
    uVar8 = param_4;
    FUN_100071370();
    lVar3 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c1344);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_10025e544();
    lVar6 = *unaff_x20;
    goto joined_r0x0001002c1390;
  }
  lVar6 = *unaff_x20;
joined_r0x0001002c1390:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar4);
    return;
  }
  FUN_1002b0fc0();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x1002c13c4 | FUN_1002c13c4 */

void FUN_1002c13c4(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c14a4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_10025ec88(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c1464);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10025e6bc();
    lVar4 = *unaff_x20;
    goto joined_r0x0001002c14b8;
  }
  lVar4 = *unaff_x20;
joined_r0x0001002c14b8:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1002c14e8 | FUN_1002c14e8 */

/* WARNING: Removing unreachable block (ram,0x0001002c15b4) */
/* WARNING: Removing unreachable block (ram,0x0001002c1524) */

void FUN_1002c14e8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_100438d28();
  FUN_10043f154();
  lVar2 = 0;
  FUN_1002bcde4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  _swift_retain();
  FUN_100441b34();
  _swift_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002c1624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Address: 0x1002c1628 | FUN_1002c1628 */

/* WARNING: Removing unreachable block (ram,0x0001002c1680) */

void FUN_1002c1628(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  plVar1 = *(long **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc();
  if (unaff_x20 != 0) {
    FUN_1002c1850();
    _swift_allocError(&DAT_100ec6be0,plVar1,0,0);
    *plVar1 = unaff_x20;
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001002c16cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_retain(param_1);
  FUN_100441b34();
  _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002c16e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x1002c16ec | FUN_1002c16ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002c16ec(void)

{
  return ZEXT816(0x100fbc208);
}



/* Address: 0x1002c170c | FUN_1002c170c */

undefined8 * FUN_1002c170c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _swift_errorRetain(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1002c173c | FUN_1002c173c */

void FUN_1002c173c(undefined8 *param_1)

{
  _swift_errorRelease(*param_1);
  return;
}



/* Address: 0x1002c1744 | FUN_1002c1744 */

undefined8 * FUN_1002c1744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Address: 0x1002c177c | FUN_1002c177c */

void FUN_1002c177c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1002c1788 | FUN_1002c1788 */

undefined8 * FUN_1002c1788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Address: 0x1002c17b8 | FUN_1002c17b8 */

int FUN_1002c17b8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1002c1800 | FUN_1002c1800 */

void FUN_1002c1800(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1002c183c | FUN_1002c183c */

undefined1  [16] FUN_1002c183c(void)

{
  return ZEXT816(0x100ec6be0);
}



/* Address: 0x1002c184c | thunk_FUN_1002c1850 */

void thunk_FUN_1002c1850(void)

{
  FUN_1002c1850();
  return;
}



/* Address: 0x1002c1850 | FUN_1002c1850 */

void FUN_1002c1850(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbc280 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3cb00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3cb00,&DAT_100ec6be0);
  DAT_100fbc280 = pTVar1;
  return;
}



/* Address: 0x1002c1890 | FUN_1002c1890 */

void FUN_1002c1890(undefined8 param_1)

{
  if (DAT_100fbc2e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caadec);
  return;
}



/* Address: 0x1002c18c8 | FUN_1002c18c8 */

void FUN_1002c18c8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002c18ec | FUN_1002c18ec */

void FUN_1002c18ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1002c193c;
  FUN_1002c0be8(uVar1,uVar2);
  return;
}



/* Address: 0x1002c193c | FUN_1002c193c */

void FUN_1002c193c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001002c1994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Address: 0x1002c1998 | FUN_1002c1998 */

void FUN_1002c1998(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002c0d38(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002c1a08 | FUN_1002c1a08 */

void FUN_1002c1a08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002c1090(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002c1a6c | FUN_1002c1a6c */

void FUN_1002c1a6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002c1adc | FUN_1002c1adc */

undefined * FUN_1002c1adc(byte *param_1)

{
  byte bVar1;
  Date from;
  Component CVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  Date DVar9;
  __int64 _Var10;
  Calendar CVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  String SVar18;
  undefined1 auStack_130 [8];
  char *local_128;
  long local_120;
  Date local_118;
  long local_110;
  undefined *puStack_108;
  long local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  puStack_f8 = (undefined *)CONCAT71(extraout_var,CVar2.value);
  local_100 = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  puVar16 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_108 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_110 = *(long *)(puStack_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  lVar15 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_01;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  local_118.unknown = (undefined *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100fbbaa0;
  FUN_1000037f0(&DAT_100fbbaa0,&DAT_100c3c5d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x20) = 0x765f78745f707061;
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined8 *)(puVar3 + 0x28) = 0xef64656966697265;
  bVar1 = *param_1;
  uVar14 = 0x65757274;
  if (bVar1 != 0) {
    uVar14 = 0x65736c6166;
  }
  puVar13 = &DAT_e400000000000000;
  if (bVar1 != 0) {
    puVar13 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar3 + 0x30) = uVar14;
  *(undefined1 **)(puVar3 + 0x38) = puVar13;
  *(undefined8 *)(puVar3 + 0x40) = 0x735f78745f707061;
  *(undefined8 *)(puVar3 + 0x48) = 0xed00007375746174;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      puVar13 = &DAT_e800000000000000;
      uVar14 = 0x6465696669726576;
    }
    else {
      puVar13 = (undefined1 *)0xea00000000006465;
      uVar14 = 0x6966697265766e75;
    }
  }
  else if (bVar1 == 2) {
    puVar13 = &DAT_e700000000000000;
    uVar14 = 0x676e697373696d;
  }
  else {
    puVar13 = &DAT_e500000000000000;
    uVar14 = 0x726f727265;
  }
  *(undefined8 *)(puVar3 + 0x50) = uVar14;
  *(undefined1 **)(puVar3 + 0x58) = puVar13;
  *(undefined8 *)(puVar3 + 0x60) = 0xd000000000000012;
  *(undefined8 *)(puVar3 + 0x68) = 0x8000000100da08a0;
  lVar5 = 0;
  FUN_100245f3c();
  lVar6 = *(long *)(param_1 + *(int *)(lVar5 + 0x18) + 8);
  if (lVar6 == 0) {
    lVar6 = -0x1d00000000000000;
    uVar14 = 0x6c696e;
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  }
  *(undefined8 *)(puVar3 + 0x70) = uVar14;
  *(long *)(puVar3 + 0x78) = lVar6;
  _swift_bridgeObjectRetain();
  puVar7 = puVar3;
  FUN_1002b34b8();
  _swift_setDeallocating(puVar3);
  puVar8 = &DAT_100fbbaa8;
  FUN_1000037f0(&DAT_100fbbaa8,&DAT_100c3c5e0);
  _swift_arrayDestroy(puVar3 + 0x20,3,puVar8);
  FUN_100011090(param_1 + *(int *)(lVar5 + 0x14),lVar17,&DAT_100fb7f78,&DAT_100c37ab0);
  lVar6 = lVar17;
  (**(code **)(lVar12 + 0x30))(lVar17,1,DVar4.unknown);
  from.unknown = local_118.unknown;
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar17,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    DVar9.unknown = local_118.unknown;
    (**(code **)(lVar12 + 0x20))(local_118.unknown,lVar17,DVar4.unknown);
    local_128 = "app_tx_verification_error";
    Foundation::Calendar::get_current((Calendar)DVar9.unknown);
    puVar3 = puStack_f8;
    lVar17 = local_100;
    CVar11.unknown = puStack_f8;
    local_120 = lVar12;
    (**(code **)(local_100 + 0x68))
              (puVar16,*(undefined4 *)
                        PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7638
              );
    _Var10 = Foundation::Calendar::component((Component)(__int8)puVar16,from,CVar11);
    (**(code **)(lVar17 + 8))(puVar16,puVar3);
    (**(code **)(local_110 + 8))(lVar15,puStack_108);
    local_f0 = (undefined *)_Var10;
    SVar18 = Swift::CustomStringConvertible::get_description();
    puVar3 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_f0 = puVar7;
    FUN_1002c12a0(SVar18.str,SVar18.bridgeObject,0xd000000000000016,
                  (ulong)local_128 | 0x8000000000000000,puVar3);
    (**(code **)(local_120 + 8))(from.unknown,DVar4.unknown);
    puVar7 = local_f0;
  }
  lVar12 = *(long *)(param_1 + *(int *)(lVar5 + 0x1c) + 8);
  if (lVar12 != 0) {
    uVar14 = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
    _swift_bridgeObjectRetain(lVar12);
    puVar3 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_f0 = puVar7;
    FUN_1002c12a0(uVar14,lVar12,0xd000000000000019,0x8000000100da08e0,puVar3);
    puVar7 = local_f0;
  }
  lVar12 = *(long *)(param_1 + *(int *)(lVar5 + 0x20) + 8);
  if (lVar12 != 0) {
    uVar14 = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x20));
    _swift_bridgeObjectRetain(lVar12);
    puVar3 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_f0 = puVar7;
    FUN_1002c12a0(uVar14,lVar12,0xd000000000000011,0x8000000100da08c0,puVar3);
    puVar7 = local_f0;
  }
  return puVar7;
}



/* Address: 0x1002c1fe0 | FUN_1002c1fe0 */

undefined * FUN_1002c1fe0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_f0 [160];
  
  puVar2 = &DAT_100fbc110;
  FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_f0 + -extraout_x8;
  puVar2 = &DAT_100fbbaa0;
  FUN_1000037f0(&DAT_100fbbaa0,&DAT_100c3c5d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000028;
  *(undefined8 *)(puVar2 + 0x18) = 8;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  *(undefined8 *)(puVar2 + 0x28) = 0x8000000100da07e0;
  uVar8 = 0x65757274;
  uVar9 = 0x65736c6166;
  uVar1 = uVar8;
  if (*(long *)(param_1 + 8) < 1) {
    uVar1 = uVar9;
  }
  puVar4 = &DAT_e400000000000000;
  if (*(long *)(param_1 + 8) < 1) {
    puVar4 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar2 + 0x30) = uVar1;
  *(undefined1 **)(puVar2 + 0x38) = puVar4;
  *(undefined8 *)(puVar2 + 0x40) = 0xd000000000000029;
  *(undefined8 *)(puVar2 + 0x48) = 0x8000000100da0810;
  uVar1 = uVar8;
  if (*(long *)(param_1 + 0x10) < 1) {
    uVar1 = uVar9;
  }
  puVar4 = &DAT_e400000000000000;
  if (*(long *)(param_1 + 0x10) < 1) {
    puVar4 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar2 + 0x50) = uVar1;
  *(undefined1 **)(puVar2 + 0x58) = puVar4;
  *(undefined8 *)(puVar2 + 0x60) = 0xd00000000000002a;
  *(undefined8 *)(puVar2 + 0x68) = 0x8000000100da0840;
  if (*(long *)(param_1 + 0x18) < 1) {
    uVar8 = uVar9;
  }
  puVar4 = &DAT_e400000000000000;
  if (*(long *)(param_1 + 0x18) < 1) {
    puVar4 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar2 + 0x70) = uVar8;
  *(undefined1 **)(puVar2 + 0x78) = puVar4;
  *(undefined8 *)(puVar2 + 0x80) = 0xd000000000000022;
  *(undefined8 *)(puVar2 + 0x88) = 0x8000000100da0870;
  lVar3 = 0;
  FUN_1002bdad0();
  FUN_100011090(param_1 + *(int *)(lVar3 + 0x20),puVar10,&DAT_100fbc110,&DAT_100c3c9d8);
  lVar3 = 0;
  FUN_1002bd9c0();
  puVar7 = (undefined1 *)0x1;
  puVar4 = puVar10;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar10,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar10,&DAT_100fbc110,&DAT_100c3c9d8);
    puVar7 = &DAT_e700000000000000;
    param_2 = 0x676e697373696d;
  }
  else {
    FUN_1002bb8b8();
    FUN_10005241c(puVar10,FUN_1002bd9c0);
  }
  *(undefined8 *)(puVar2 + 0x90) = param_2;
  *(undefined1 **)(puVar2 + 0x98) = puVar7;
  puVar5 = puVar2;
  FUN_1002b34b8(puVar2);
  _swift_setDeallocating(puVar2);
  puVar6 = &DAT_100fbbaa8;
  FUN_1000037f0(&DAT_100fbbaa8,&DAT_100c3c5e0);
  _swift_arrayDestroy(puVar2 + 0x20,4,puVar6);
  return puVar5;
}



/* Address: 0x1002c2230 | FUN_1002c2230 */

undefined1  [16] FUN_1002c2230(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 extraout_x13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  long local_70;
  byte *local_68;
  
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar6 = &DAT_100fb8398;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_00;
  puVar7 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar19 - extraout_x12_01;
  bVar1 = *param_1;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      puVar12 = &DAT_e700000000000000;
      uVar11 = 0x676e697373696d;
    }
    else {
      puVar12 = &DAT_e500000000000000;
      uVar11 = 0x726f727265;
    }
    goto LAB_1002c26e0;
  }
  if (bVar1 != 0) {
    puVar12 = (undefined1 *)0xea00000000006465;
    uVar11 = 0x6966697265766e75;
    goto LAB_1002c26e0;
  }
  lVar8 = 0;
  local_88 = param_2;
  local_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = extraout_x13;
  local_68 = param_1;
  FUN_100245ed8();
  iVar2 = *(int *)(lVar8 + 0x2c);
  (**(code **)(lVar17 + 0x38))(lVar20,1,1,DVar5.unknown);
  lVar13 = (long)*(int *)(puVar6 + 0x30);
  FUN_100011090(local_68 + iVar2,lVar15,&DAT_100fb7f78,&DAT_100c37ab0);
  FUN_100011090(lVar20,lVar15 + lVar13,&DAT_100fb7f78,&DAT_100c37ab0);
  pcVar18 = *(code **)(lVar17 + 0x30);
  lVar9 = lVar15;
  local_70 = lVar17;
  (*pcVar18)(lVar15,1,DVar5.unknown);
  if ((int)lVar9 == 1) {
    FUN_100005808(lVar20,&DAT_100fb7f78,&DAT_100c37ab0);
    lVar13 = lVar15 + lVar13;
    (*pcVar18)(lVar13,1,DVar5.unknown);
    if ((int)lVar13 == 1) {
      FUN_100005808(lVar15,&DAT_100fb7f78,&DAT_100c37ab0);
LAB_1002c25d8:
      FUN_100011090(local_68 + *(int *)(lVar8 + 0x28),local_78,&DAT_100fb7f78,&DAT_100c37ab0);
      uVar11 = local_78;
      (*pcVar18)(local_78,1,DVar5.unknown);
      lVar15 = local_70;
      puVar3 = local_80;
      if ((int)uVar11 == 1) {
        FUN_100005808(local_78,&DAT_100fb7f78,&DAT_100c37ab0);
        puVar12 = (undefined1 *)0xed00006e6f697461;
        uVar11 = 0x72697078655f6f6e;
      }
      else {
        (**(code **)(local_70 + 0x20))(local_80,local_78,DVar5.unknown);
        puVar6 = &DAT_100fb8390;
        FUN_1000e8c70(&DAT_100fb8390,PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
        bVar4 = Swift::Comparable::<__infix(puVar3,local_88,DVar5.unknown,puVar6);
        uVar11 = 0x64657269707865;
        if (!bVar4) {
          uVar11 = 0x657669746361;
        }
        puVar12 = &DAT_e700000000000000;
        if (!bVar4) {
          puVar12 = &DAT_e600000000000000;
        }
        (**(code **)(lVar15 + 8))(puVar3,DVar5.unknown);
      }
      goto LAB_1002c26e0;
    }
LAB_1002c250c:
    FUN_100005808(lVar15,&DAT_100fb8398,&DAT_100c3c780);
  }
  else {
    FUN_100011090(lVar15,lVar19,&DAT_100fb7f78,&DAT_100c37ab0);
    lVar17 = lVar15 + lVar13;
    (*pcVar18)(lVar17,1,DVar5.unknown);
    lVar9 = local_70;
    if ((int)lVar17 == 1) {
      FUN_100005808(lVar20,&DAT_100fb7f78,&DAT_100c37ab0);
      (**(code **)(local_70 + 8))(lVar19,DVar5.unknown);
      goto LAB_1002c250c;
    }
    (**(code **)(local_70 + 0x20))(lVar16,lVar15 + lVar13,DVar5.unknown);
    puVar10 = &DAT_100fb83b0;
    FUN_1000e8c70(&DAT_100fb83b0,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar4 = Swift::Equatable::___infix(lVar19,lVar16,DVar5.unknown,puVar10);
    pcVar14 = *(code **)(lVar9 + 8);
    (*pcVar14)(lVar16,DVar5.unknown);
    FUN_100005808(lVar20,&DAT_100fb7f78,&DAT_100c37ab0);
    (*pcVar14)(lVar19,DVar5.unknown);
    FUN_100005808(lVar15,&DAT_100fb7f78,&DAT_100c37ab0);
    if (bVar4) goto LAB_1002c25d8;
  }
  uVar11 = 0x64656b6f766572;
  puVar12 = &DAT_e700000000000000;
LAB_1002c26e0:
  auVar21._8_8_ = puVar12;
  auVar21._0_8_ = uVar11;
  return auVar21;
}



/* Address: 0x1002c2714 | FUN_1002c2714 */

undefined * FUN_1002c2714(long param_1,long param_2,long param_3,byte *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  bool bVar7;
  undefined *puVar8;
  Date DVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long extraout_x12;
  long extraout_x12_00;
  byte bVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  code *pcVar26;
  long local_1e0;
  long local_1d8;
  undefined *local_1d0;
  uint local_1c4;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  byte *local_198;
  undefined *local_190;
  
  puVar8 = &DAT_100fb8398;
  local_1c0 = param_1;
  local_1b8 = param_2;
  local_1b0 = param_3;
  local_1a8 = param_5;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  local_1d0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)&local_1e0 - extraout_x8;
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar21 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar16 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1d8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar16 - extraout_x12_00;
  lVar10 = 0;
  FUN_100245ed8();
  local_1a0 = lVar10;
  local_198 = param_4;
  FUN_100011090(param_4 + *(int *)(lVar10 + 0x28),lVar23,&DAT_100fb7f78,&DAT_100c37ab0);
  pcVar26 = *(code **)(lVar19 + 0x30);
  lVar10 = lVar23;
  (*pcVar26)(lVar23,1,DVar9.unknown);
  if ((int)lVar10 == 1) {
    local_1c4 = 2;
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar21,lVar23,DVar9.unknown);
    puVar8 = &DAT_100fb8390;
    FUN_1000e8c70(&DAT_100fb8390,PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar7 = Swift::Comparable::<__infix(lVar21,local_1a8,DVar9.unknown,puVar8);
    (**(code **)(lVar19 + 8))(lVar21,DVar9.unknown);
    local_1c4 = (uint)bVar7;
  }
  pbVar6 = local_198;
  if (*(long *)(local_198 + 0x10) == 0) {
    bVar18 = 2;
  }
  else {
    iVar4 = *(int *)(local_1a0 + 0x2c);
    local_1e0 = lVar21;
    (**(code **)(lVar19 + 0x38))(lVar16,1,1,DVar9.unknown);
    lVar10 = (long)*(int *)(local_1d0 + 0x30);
    FUN_100011090(pbVar6 + iVar4,lVar24,&DAT_100fb7f78,&DAT_100c37ab0);
    FUN_100011090(lVar16,lVar24 + lVar10,&DAT_100fb7f78,&DAT_100c37ab0);
    lVar23 = lVar24;
    (*pcVar26)(lVar24,1,DVar9.unknown);
    lVar21 = local_1d8;
    if ((int)lVar23 == 1) {
      FUN_100005808(lVar16,&DAT_100fb7f78,&DAT_100c37ab0);
      lVar10 = lVar24 + lVar10;
      (*pcVar26)(lVar10,1,DVar9.unknown);
      if ((int)lVar10 == 1) {
        FUN_100005808(lVar24,&DAT_100fb7f78,&DAT_100c37ab0);
        bVar18 = 0;
        goto LAB_1002c2ae4;
      }
    }
    else {
      FUN_100011090(lVar24,local_1d8,&DAT_100fb7f78,&DAT_100c37ab0);
      lVar23 = lVar24 + lVar10;
      (*pcVar26)(lVar23,1,DVar9.unknown);
      lVar5 = local_1e0;
      if ((int)lVar23 != 1) {
        (**(code **)(lVar19 + 0x20))(local_1e0,lVar24 + lVar10,DVar9.unknown);
        puVar11 = &DAT_100fb83b0;
        FUN_1000e8c70(&DAT_100fb83b0,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
        bVar7 = Swift::Equatable::___infix(lVar21,lVar5,DVar9.unknown,puVar11);
        pcVar26 = *(code **)(lVar19 + 8);
        (*pcVar26)(lVar5,DVar9.unknown);
        FUN_100005808(lVar16,&DAT_100fb7f78,&DAT_100c37ab0);
        (*pcVar26)(lVar21,DVar9.unknown);
        FUN_100005808(lVar24,&DAT_100fb7f78,&DAT_100c37ab0);
        bVar18 = !bVar7;
        goto LAB_1002c2ae4;
      }
      FUN_100005808(lVar16,&DAT_100fb7f78,&DAT_100c37ab0);
      (**(code **)(lVar19 + 8))(lVar21,DVar9.unknown);
    }
    FUN_100005808(lVar24,&DAT_100fb8398,&DAT_100c3c780);
    bVar18 = 1;
  }
LAB_1002c2ae4:
  pbVar6 = local_198;
  uVar20 = 0x65736c6166;
  uVar22 = 0x65757274;
  puVar8 = &DAT_100fbbaa0;
  FUN_1000037f0(&DAT_100fbbaa0,&DAT_100c3c5d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 0x10;
  *(undefined8 *)(puVar8 + 0x10) = 8;
  *(undefined8 *)(puVar8 + 0x20) = 0x5f326b735f736168;
  uVar17 = uVar22;
  if (local_1c0 < 1) {
    uVar17 = uVar20;
  }
  puVar15 = &DAT_e400000000000000;
  if (local_1c0 < 1) {
    puVar15 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar8 + 0x28) = 0xef79726f74736968;
  *(undefined8 *)(puVar8 + 0x30) = uVar17;
  *(undefined1 **)(puVar8 + 0x38) = puVar15;
  *(undefined8 *)(puVar8 + 0x40) = 0xd00000000000001c;
  uVar17 = uVar22;
  if (local_1b8 < 1) {
    uVar17 = uVar20;
  }
  puVar15 = &DAT_e400000000000000;
  if (local_1b8 < 1) {
    puVar15 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar8 + 0x48) = 0x8000000100da06d0;
  *(undefined8 *)(puVar8 + 0x50) = uVar17;
  *(undefined1 **)(puVar8 + 0x58) = puVar15;
  *(undefined8 *)(puVar8 + 0x60) = 0xd000000000000025;
  uVar17 = uVar22;
  if (local_1b0 < 1) {
    uVar17 = uVar20;
  }
  puVar15 = &DAT_e400000000000000;
  if (local_1b0 < 1) {
    puVar15 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar8 + 0x68) = 0x8000000100da06f0;
  *(undefined8 *)(puVar8 + 0x70) = uVar17;
  *(undefined1 **)(puVar8 + 0x78) = puVar15;
  *(undefined8 *)(puVar8 + 0x80) = 0xd000000000000011;
  *(undefined8 *)(puVar8 + 0x88) = 0x8000000100da0720;
  bVar3 = *pbVar6;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      puVar15 = &DAT_e800000000000000;
      uVar17 = 0x6465696669726576;
    }
    else {
      puVar15 = (undefined1 *)0xea00000000006465;
      uVar17 = 0x6966697265766e75;
    }
  }
  else if (bVar3 == 2) {
    puVar15 = &DAT_e700000000000000;
    uVar17 = 0x676e697373696d;
  }
  else {
    puVar15 = &DAT_e500000000000000;
    uVar17 = 0x726f727265;
  }
  uVar25 = 0x6c696e;
  *(undefined8 *)(puVar8 + 0x90) = uVar17;
  *(undefined1 **)(puVar8 + 0x98) = puVar15;
  *(undefined8 *)(puVar8 + 0xa0) = 0xd00000000000001c;
  *(undefined8 *)(puVar8 + 0xa8) = 0x8000000100da0740;
  pbVar12 = pbVar6;
  uVar17 = local_1a8;
  FUN_1002c2230();
  lVar10 = local_1a0;
  *(byte **)(puVar8 + 0xb0) = pbVar12;
  *(undefined8 *)(puVar8 + 0xb8) = uVar17;
  *(undefined8 *)(puVar8 + 0xc0) = 0xd000000000000015;
  *(undefined8 *)(puVar8 + 200) = 0x8000000100da0760;
  bVar7 = (local_1c4 & 1) == 0;
  uVar17 = uVar22;
  if (bVar7) {
    uVar17 = uVar20;
  }
  puVar15 = &DAT_e400000000000000;
  if (bVar7) {
    puVar15 = &DAT_e500000000000000;
  }
  uVar1 = uVar25;
  if (local_1c4 != 2) {
    uVar1 = uVar17;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (local_1c4 != 2) {
    puVar2 = puVar15;
  }
  *(undefined8 *)(puVar8 + 0xd0) = uVar1;
  *(undefined1 **)(puVar8 + 0xd8) = puVar2;
  *(undefined8 *)(puVar8 + 0xe0) = 0xd000000000000015;
  *(undefined8 *)(puVar8 + 0xe8) = 0x8000000100da0780;
  bVar7 = (bVar18 & 1) == 0;
  if (bVar7) {
    uVar22 = uVar20;
  }
  puVar15 = &DAT_e400000000000000;
  if (bVar7) {
    puVar15 = &DAT_e500000000000000;
  }
  uVar17 = uVar25;
  if (bVar18 != 2) {
    uVar17 = uVar22;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (bVar18 != 2) {
    puVar2 = puVar15;
  }
  *(undefined8 *)(puVar8 + 0xf0) = uVar17;
  *(undefined1 **)(puVar8 + 0xf8) = puVar2;
  *(undefined8 *)(puVar8 + 0x100) = 0xd000000000000019;
  *(undefined8 *)(puVar8 + 0x108) = 0x8000000100da07a0;
  lVar19 = *(long *)(pbVar6 + *(int *)(local_1a0 + 0x34) + 8);
  lVar16 = -0x1d00000000000000;
  if (lVar19 != 0) {
    uVar25 = *(undefined8 *)(pbVar6 + *(int *)(local_1a0 + 0x34));
    lVar16 = lVar19;
  }
  *(undefined8 *)(puVar8 + 0x110) = uVar25;
  *(long *)(puVar8 + 0x118) = lVar16;
  _swift_bridgeObjectRetain();
  puVar13 = puVar8;
  FUN_1002b34b8();
  _swift_setDeallocating(puVar8);
  puVar14 = &DAT_100fbbaa8;
  FUN_1000037f0(&DAT_100fbbaa8,&DAT_100c3c5e0);
  _swift_arrayDestroy(puVar8 + 0x20,8,puVar14);
  lVar16 = *(long *)(pbVar6 + *(int *)(lVar10 + 0x38) + 8);
  local_190 = puVar13;
  if (lVar16 != 0) {
    uVar17 = *(undefined8 *)(pbVar6 + *(int *)(lVar10 + 0x38));
    _swift_bridgeObjectRetain(lVar16);
    _swift_isUniquelyReferenced_nonNull_native(puVar13);
    FUN_1002c12a0(uVar17,lVar16,0xd00000000000001d,0x8000000100da07c0,puVar13);
  }
  return local_190;
}



/* Address: 0x1002c2dec | FUN_1002c2dec */

void FUN_1002c2dec(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      local_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      local_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      (*param_2)(&local_a0,&local_80);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = uStack_88;
      uVar3 = local_90;
      uVar5 = uStack_98;
      uVar11 = local_a0;
      lVar15 = *param_5;
      uVar9 = local_a0;
      uVar10 = uStack_98;
      FUN_100071370();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002c304c);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        FUN_10025e9d4(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        FUN_100071370();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002c3060);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_10025e544();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002c3050);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1002c3048);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x1002c3060 | FUN_1002c3060 */

undefined * FUN_1002c3060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  Storefront SVar6;
  Storefront SVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x12;
  long lVar11;
  code *pcVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  long local_130;
  long local_128;
  undefined8 *local_120;
  undefined *local_110 [22];
  
  puVar4 = &DAT_100fbbac0;
  FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar8 - extraout_x12;
  puVar4 = &DAT_100fbbaa0;
  FUN_1000037f0(&DAT_100fbbaa0,&DAT_100c3c5d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  local_120 = (undefined8 *)(puVar4 + 0x20);
  *local_120 = 0x7069726373627573;
  *(undefined8 *)(puVar4 + 0x28) = 0xef64695f6e6f6974;
  SVar7.unknown = (undefined *)param_1[1];
  *(undefined8 *)(puVar4 + 0x30) = *param_1;
  *(undefined **)(puVar4 + 0x38) = SVar7.unknown;
  *(undefined8 *)(puVar4 + 0x40) = 0x6f726665726f7473;
  *(undefined8 *)(puVar4 + 0x48) = 0xed000064695f746e;
  lVar5 = 0;
  FUN_1002c1890();
  local_128 = (long)*(int *)(lVar5 + 0x1c);
  FUN_100011090((long)param_1 + local_128,lVar11,&DAT_100fbbac0,&DAT_100c3c5f8);
  SVar6 = StoreKit::Storefront::typeMetadataAccessor();
  lVar13 = *(long *)(SVar6.unknown + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar10 = lVar11;
  (*pcVar12)(lVar11,1,SVar6.unknown);
  _swift_bridgeObjectRetain();
  local_130 = lVar13;
  if ((int)lVar10 == 1) {
    FUN_100005808(lVar11,&DAT_100fbbac0,&DAT_100c3c5f8);
    SVar14.bridgeObject = (void *)0xe300000000000000;
    SVar14.str = (char *)0x6c696e;
  }
  else {
    SVar14 = StoreKit::Storefront::get_id(SVar7);
    (**(code **)(lVar13 + 8))(lVar11,SVar6.unknown);
  }
  *(String *)(puVar4 + 0x50) = SVar14;
  *(undefined8 *)(puVar4 + 0x60) = 0xd000000000000012;
  *(undefined8 *)(puVar4 + 0x68) = 0x8000000100d9ff80;
  FUN_100011090((long)param_1 + local_128,puVar8,&DAT_100fbbac0,&DAT_100c3c5f8);
  SVar7.unknown = puVar8;
  (*pcVar12)(puVar8,1,SVar6.unknown);
  if ((int)SVar7.unknown == 1) {
    FUN_100005808(puVar8,&DAT_100fbbac0,&DAT_100c3c5f8);
    SVar15.bridgeObject = (void *)0xe300000000000000;
    SVar15.str = (char *)0x6c696e;
  }
  else {
    SVar15 = StoreKit::Storefront::get_countryCode(SVar7);
    (**(code **)(local_130 + 8))(puVar8,SVar6.unknown);
  }
  *(String *)(puVar4 + 0x70) = SVar15;
  *(undefined8 *)(puVar4 + 0x80) = 0x69666e755f736168;
  *(undefined8 *)(puVar4 + 0x88) = 0xee0064656873696e;
  lVar10 = *(long *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  uVar9 = 0x65757274;
  if (lVar10 < 1) {
    uVar9 = 0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (lVar10 < 1) {
    puVar2 = &DAT_e500000000000000;
  }
  *(undefined8 *)(puVar4 + 0x90) = uVar9;
  *(undefined1 **)(puVar4 + 0x98) = puVar2;
  puVar8 = puVar4;
  FUN_1002b34b8();
  _swift_setDeallocating(puVar4);
  puVar4 = &DAT_100fbbaa8;
  FUN_1000037f0(&DAT_100fbbaa8,&DAT_100c3c5e0);
  _swift_arrayDestroy(local_120,4,puVar4);
  lVar10 = (long)param_1 + (long)*(int *)(lVar5 + 0x20);
  FUN_1002c1adc(lVar10);
  puVar4 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native(puVar8);
  local_110[0] = puVar8;
  FUN_1002c2dec(lVar10,FUN_100153a88,0,puVar4,local_110);
  _swift_bridgeObjectRelease(lVar10);
  puVar4 = local_110[0];
  iVar3 = *(int *)(lVar5 + 0x14);
  lVar10 = (long)param_1 + (long)*(int *)(lVar5 + 0x34);
  FUN_1002c1fe0(lVar10,(long)param_1 + (long)iVar3);
  puVar8 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_110[0] = puVar4;
  FUN_1002c2dec(lVar10,FUN_100153a88,0,puVar8,local_110);
  _swift_bridgeObjectRelease(lVar10);
  puVar4 = local_110[0];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  uVar9 = *puVar1;
  FUN_1002c2714(uVar9,puVar1[1],puVar1[2],(long)param_1 + (long)*(int *)(lVar5 + 0x2c),
                (long)param_1 + (long)iVar3);
  puVar8 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_110[0] = puVar4;
  FUN_1002c2dec(uVar9,FUN_100153a88,0,puVar8,local_110);
  _swift_bridgeObjectRelease(uVar9);
  return local_110[0];
}



/* Address: 0x1002c3470 | FUN_1002c3470 */

void FUN_1002c3470(undefined8 param_1,undefined *param_2,char *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  Date DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  _StringGuts _Var12;
  long lVar13;
  code *pcVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  long alStack_f0 [2];
  code *local_e0;
  code *local_d8;
  long local_d0;
  long local_c8;
  Date local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  long local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  undefined *local_68;
  
  local_c0.unknown = param_4;
  local_98 = param_5;
  local_88 = (char *)Foundation::Date::typeMetadataAccessor();
  local_90 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar10 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12;
  puVar2 = &DAT_100fb7f78;
  local_d0 = lVar10;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar11 = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_b0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = puVar11 + -extraout_x12_00;
  local_b8 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = puVar11 + -extraout_x12_01;
  puVar2 = &DAT_100fbc110;
  puVar4 = &DAT_100c3c9d8;
  FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var12.unknown = puVar11 + -extraout_x8_01;
  lVar10 = 0;
  FUN_1002bd9c0();
  lVar17 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar15 = _Var12.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,_Var12.unknown,&DAT_100fbc110);
  puVar2 = _Var12.unknown;
  (**(code **)(lVar17 + 0x30))(_Var12.unknown,1,lVar10);
  if ((int)puVar2 == 1) {
    puVar2 = &DAT_100fbc110;
    puVar4 = &DAT_100c3c9d8;
  }
  else {
    pcVar14 = FUN_1002bd9c0;
    _Var5.unknown = puVar15;
    FUN_1000523d8(_Var12.unknown);
    local_80 = (undefined *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x10,_Var5);
    pcVar9 = local_78;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(pcVar9);
    SVar18.bridgeObject = (void *)0xee00657461645f65;
    SVar18.str = (char *)0x736168637275705f;
    SVar25.bridgeObject = puVar4;
    SVar25.str = (char *)pcVar14;
    local_a0 = param_2;
    local_80 = param_2;
    local_78 = param_3;
    Swift::String::append(SVar18,SVar25);
    pcVar7 = local_78;
    _Var12.unknown = local_80;
    pcVar9 = local_88;
    lVar17 = local_90;
    pcVar16 = *(code **)(local_90 + 0x10);
    local_a8 = lVar10;
    (*pcVar16)(puVar11,puVar15 + *(int *)(lVar10 + 0x14),local_88);
    pcVar14 = *(code **)(lVar17 + 0x38);
    lVar10 = 0;
    pcVar8 = pcVar9;
    (*pcVar14)(puVar11,0,1);
    puVar2 = puVar11;
    FUN_100245d48();
    FUN_100005808(puVar11,&DAT_100fb7f78,&DAT_100c37ab0);
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = (undefined *)0x0;
    if (lVar10 != 0) {
      local_80 = puVar2;
    }
    local_78 = (char *)-0x2000000000000000;
    if (lVar10 != 0) {
      local_78 = (char *)lVar10;
    }
    FUN_1002bf0c4(&local_80);
    local_80 = (undefined *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x12,_Var12);
    pcVar1 = local_78;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(pcVar1);
    local_80 = local_a0;
    SVar19.bridgeObject = (void *)0x8000000100da0630;
    SVar19.str = (char *)0xd000000000000010;
    SVar26.bridgeObject = pcVar8;
    SVar26.str = pcVar7;
    local_78 = param_3;
    Swift::String::append(SVar19,SVar26);
    pcVar7 = local_78;
    _Var12.unknown = local_80;
    alStack_f0[1] = (long)*(int *)(local_a8 + 0x1c);
    local_d8 = pcVar16;
    (*pcVar16)(puVar11,puVar15 + alStack_f0[1],pcVar9);
    lVar10 = local_a8;
    lVar17 = 0;
    local_e0 = pcVar14;
    (*pcVar14)(puVar11,0,1);
    puVar2 = puVar11;
    FUN_100245d48();
    FUN_100005808(puVar11,&DAT_100fb7f78,&DAT_100c37ab0);
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = (undefined *)0x0;
    if (lVar17 != 0) {
      local_80 = puVar2;
    }
    local_78 = (char *)-0x2000000000000000;
    if (lVar17 != 0) {
      local_78 = (char *)lVar17;
    }
    FUN_1002bf0c4(&local_80);
    local_80 = (undefined *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1b,_Var12);
    pcVar8 = local_78;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(pcVar8);
    puVar4 = local_a0;
    local_80 = local_a0;
    DVar6.unknown = (undefined *)0x8000000100da0650;
    SVar20.bridgeObject = (void *)0x8000000100da0650;
    SVar20.str = (char *)0xd000000000000019;
    SVar27.bridgeObject = pcVar9;
    SVar27.str = pcVar7;
    local_78 = param_3;
    Swift::String::append(SVar20,SVar27);
    pcVar7 = local_78;
    _Var12.unknown = local_80;
    local_80 = (undefined *)Foundation::Date::timeIntervalSince(local_c0,DVar6);
    local_68 = PTR___type_metadata_for_Swift_Double_100eac5d0;
    FUN_1002bf0c4(&local_80);
    local_80 = (undefined *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x11,_Var12);
    pcVar8 = local_78;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(pcVar8);
    local_80 = puVar4;
    SVar21.bridgeObject = (void *)0xef64695f6e6f6974;
    SVar21.str = (char *)0x6361736e6172745f;
    SVar28.bridgeObject = pcVar9;
    SVar28.str = pcVar7;
    local_78 = param_3;
    Swift::String::append(SVar21,SVar28);
    pcVar7 = local_78;
    _Var12.unknown = local_80;
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = *(undefined **)(puVar15 + *(int *)(lVar10 + 0x24));
    local_78 = *(char **)((long)(puVar15 + *(int *)(lVar10 + 0x24)) + 8);
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_bridgeObjectRetain();
    FUN_1002bf0c4(&local_80);
    local_80 = (undefined *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1a,_Var12);
    pcVar8 = local_78;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(pcVar8);
    local_80 = puVar4;
    SVar22.bridgeObject = (void *)0x8000000100da0670;
    SVar22.str = (char *)0xd000000000000018;
    SVar29.bridgeObject = pcVar9;
    SVar29.str = pcVar7;
    local_78 = param_3;
    Swift::String::append(SVar22,SVar29);
    pcVar9 = local_78;
    puVar3 = local_80;
    local_80 = *(undefined **)(puVar15 + *(int *)(lVar10 + 0x28));
    local_78 = *(char **)((long)(puVar15 + *(int *)(lVar10 + 0x28)) + 8);
    local_68 = puVar2;
    _swift_bridgeObjectRetain();
    FUN_1002bf0c4(&local_80,puVar3,pcVar9);
    _Var12.unknown = local_b8;
    puVar2 = &DAT_100c37ab0;
    FUN_100011090(puVar15 + *(int *)(lVar10 + 0x18),local_b8,&DAT_100fb7f78);
    lVar13 = local_90;
    pcVar14 = *(code **)(local_90 + 0x30);
    puVar3 = _Var12.unknown;
    (*pcVar14)(_Var12.unknown,1,local_88);
    pcVar9 = local_88;
    lVar17 = local_d0;
    if ((int)puVar3 == 1) {
      FUN_100005808(_Var12.unknown,&DAT_100fb7f78,&DAT_100c37ab0);
      pcVar9 = local_88;
    }
    else {
      pcVar8 = local_88;
      (**(code **)(lVar13 + 0x20))();
      local_80 = (undefined *)0x0;
      local_78 = (char *)0xe000000000000000;
      Swift::_StringGuts::grow(0x19,_Var12);
      pcVar7 = local_78;
      _swift_bridgeObjectRetain(param_3);
      _swift_bridgeObjectRelease(pcVar7);
      local_80 = puVar4;
      SVar23.bridgeObject = (void *)0x8000000100da06b0;
      SVar23.str = (char *)0xd000000000000017;
      SVar30.bridgeObject = puVar2;
      SVar30.str = pcVar8;
      local_78 = param_3;
      Swift::String::append(SVar23,SVar30);
      pcVar7 = local_78;
      local_b8 = local_80;
      (*local_d8)(puVar11,lVar17,pcVar9);
      lVar10 = 0;
      (*local_e0)(puVar11,0,1,pcVar9);
      puVar2 = puVar11;
      FUN_100245d48();
      FUN_100005808(puVar11,&DAT_100fb7f78,&DAT_100c37ab0);
      lVar13 = local_90;
      local_68 = PTR___type_metadata_for_Swift_String_100eac208;
      local_80 = (undefined *)0x0;
      if (lVar10 != 0) {
        local_80 = puVar2;
      }
      local_78 = (char *)-0x2000000000000000;
      if (lVar10 != 0) {
        local_78 = (char *)lVar10;
      }
      FUN_1002bf0c4(&local_80,local_b8,pcVar7);
      lVar10 = local_a8;
      (**(code **)(lVar13 + 8))(lVar17,pcVar9);
    }
    _Var12.unknown = local_b0;
    puVar2 = &DAT_100c37ab0;
    FUN_100011090(puVar15 + *(int *)(lVar10 + 0x20),local_b0,&DAT_100fb7f78);
    puVar4 = _Var12.unknown;
    (*pcVar14)(_Var12.unknown,1,pcVar9);
    lVar10 = local_c8;
    if ((int)puVar4 != 1) {
      pcVar8 = pcVar9;
      (**(code **)(lVar13 + 0x20))(local_c8);
      local_80 = (undefined *)0x0;
      local_78 = (char *)0xe000000000000000;
      Swift::_StringGuts::grow(0x14,_Var12);
      pcVar7 = local_78;
      _swift_bridgeObjectRetain(param_3);
      _swift_bridgeObjectRelease(pcVar7);
      local_80 = local_a0;
      SVar24.bridgeObject = (void *)0x8000000100da0690;
      SVar24.str = (char *)0xd000000000000012;
      SVar31.bridgeObject = puVar2;
      SVar31.str = pcVar8;
      local_78 = param_3;
      Swift::String::append(SVar24,SVar31);
      pcVar7 = local_78;
      puVar2 = local_80;
      (*local_d8)(puVar11,lVar10,pcVar9);
      lVar17 = 0;
      (*local_e0)(puVar11,0,1,pcVar9);
      puVar4 = puVar11;
      FUN_100245d48();
      FUN_100005808(puVar11,&DAT_100fb7f78,&DAT_100c37ab0);
      local_68 = PTR___type_metadata_for_Swift_String_100eac208;
      local_80 = (undefined *)0x0;
      if (lVar17 != 0) {
        local_80 = puVar4;
      }
      local_78 = (char *)-0x2000000000000000;
      if (lVar17 != 0) {
        local_78 = (char *)lVar17;
      }
      FUN_1002bf0c4(&local_80,puVar2,pcVar7);
      (**(code **)(lVar13 + 8))(lVar10,pcVar9);
      FUN_10005241c(puVar15,FUN_1002bd9c0);
      return;
    }
    FUN_10005241c(puVar15,FUN_1002bd9c0);
    puVar2 = &DAT_100fb7f78;
    puVar4 = &DAT_100c37ab0;
  }
  FUN_100005808(_Var12.unknown,puVar2,puVar4);
  return;
}



/* Address: 0x1002c3cec | FUN_1002c3cec */

void FUN_1002c3cec(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_80;
  long lStack_78;
  undefined *local_68;
  
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar6 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar6 - extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100245f3c();
  FUN_100011090(param_1 + *(int *)(lVar4 + 0x14),lVar8,&DAT_100fb7f78,&DAT_100c37ab0);
  lVar5 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,DVar3.unknown);
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  if ((int)lVar5 == 1) {
    FUN_100005808(lVar8,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar8,DVar3.unknown);
    (**(code **)(lVar9 + 0x10))(lVar6,lVar7,DVar3.unknown);
    lVar8 = 0;
    (**(code **)(lVar9 + 0x38))(lVar6,0,1,DVar3.unknown);
    lVar5 = lVar6;
    FUN_100245d48();
    FUN_100005808(lVar6,&DAT_100fb7f78,&DAT_100c37ab0);
    local_68 = puVar2;
    local_80 = 0;
    if (lVar8 != 0) {
      local_80 = lVar5;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar8 != 0) {
      lStack_78 = lVar8;
    }
    FUN_1002bf0c4(&local_80,0xd000000000000016,0x8000000100da0610);
    (**(code **)(lVar9 + 8))(lVar7,DVar3.unknown);
  }
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x24));
  lStack_78 = plVar1[1];
  if (lStack_78 != 0) {
    local_80 = *plVar1;
    local_68 = puVar2;
    _swift_bridgeObjectRetain();
    FUN_1002bf0c4(&local_80,0xd000000000000018,0x8000000100da05f0);
  }
  return;
}



/* Address: 0x1002c3f28 | FUN_1002c3f28 */

void FUN_1002c3f28(long param_1,undefined *param_2)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined1 *puVar8;
  Date DVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar12;
  double dVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  Date local_a8;
  long local_a0;
  long local_98;
  undefined1 *local_90;
  long local_88;
  double local_80;
  long lStack_78;
  undefined *local_68;
  
  puVar3 = &DAT_100fb7f78;
  local_a8.unknown = param_2;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  local_90 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  dVar13 = (double)(lVar10 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)dVar13 - extraout_x12_02;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_03;
  local_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_04;
  local_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_05;
  if (*(long *)(param_1 + 0x10) != 0) {
    local_80 = *(double *)(param_1 + 8);
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    lStack_78 = *(long *)(param_1 + 0x10);
    _swift_bridgeObjectRetain();
    FUN_1002bf0c4(&local_80,0xd000000000000015,0x8000000100da05d0);
  }
  puVar3 = PTR___type_metadata_for_Swift_UInt64_100eade90;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    local_80 = *(double *)(param_1 + 0x18);
    local_68 = PTR___type_metadata_for_Swift_UInt64_100eade90;
    FUN_1002bf0c4(&local_80,0xd000000000000019,0x8000000100da05b0);
  }
  if (*(char *)(param_1 + 0x30) != '\x01') {
    local_80 = *(double *)(param_1 + 0x28);
    local_68 = puVar3;
    FUN_1002bf0c4(&local_80,0xd000000000000022,0x8000000100da0580);
  }
  lVar5 = 0;
  FUN_100245ed8();
  FUN_100011090(param_1 + *(int *)(lVar5 + 0x20),lVar14,&DAT_100fb7f78,&DAT_100c37ab0);
  pcVar15 = *(code **)(lVar12 + 0x30);
  lVar6 = lVar14;
  (*pcVar15)(lVar14,1,DVar4.unknown);
  local_88 = lVar5;
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar14,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar11,lVar14,DVar4.unknown);
    (**(code **)(lVar12 + 0x10))(dVar13,lVar11,DVar4.unknown);
    lVar14 = 0;
    (**(code **)(lVar12 + 0x38))(dVar13,0,1,DVar4.unknown);
    dVar7 = dVar13;
    FUN_100245d48();
    FUN_100005808(dVar13,&DAT_100fb7f78,&DAT_100c37ab0);
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = 0.0;
    if (lVar14 != 0) {
      local_80 = dVar7;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar14 != 0) {
      lStack_78 = lVar14;
    }
    FUN_1002bf0c4(&local_80,0xd000000000000018,0x8000000100da0560);
    lVar5 = local_88;
    (**(code **)(lVar12 + 8))(lVar11,DVar4.unknown);
  }
  FUN_100011090(param_1 + *(int *)(lVar5 + 0x24),lVar10,&DAT_100fb7f78,&DAT_100c37ab0);
  lVar14 = lVar10;
  (*pcVar15)(lVar10,1,DVar4.unknown);
  lVar11 = local_b8;
  if ((int)lVar14 == 1) {
    FUN_100005808(lVar10,&DAT_100fb7f78,&DAT_100c37ab0);
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_b8,lVar10,DVar4.unknown);
    (**(code **)(lVar12 + 0x10))(dVar13,lVar11,DVar4.unknown);
    lVar10 = 0;
    (**(code **)(lVar12 + 0x38))(dVar13,0,1,DVar4.unknown);
    dVar7 = dVar13;
    FUN_100245d48();
    FUN_100005808(dVar13,&DAT_100fb7f78,&DAT_100c37ab0);
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = 0.0;
    if (lVar10 != 0) {
      local_80 = dVar7;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar10 != 0) {
      lStack_78 = lVar10;
    }
    FUN_1002bf0c4(&local_80,0xd000000000000021,0x8000000100da0530);
    lVar5 = local_88;
    (**(code **)(lVar12 + 8))(lVar11,DVar4.unknown);
  }
  lVar11 = local_98;
  FUN_100011090(param_1 + *(int *)(lVar5 + 0x28),local_98,&DAT_100fb7f78,&DAT_100c37ab0);
  lVar14 = lVar11;
  (*pcVar15)(lVar11,1,DVar4.unknown);
  lVar10 = local_b0;
  if ((int)lVar14 == 1) {
    FUN_100005808(lVar11,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_b0,lVar11,DVar4.unknown);
    (**(code **)(lVar12 + 0x10))(dVar13,lVar10,DVar4.unknown);
    lVar11 = 0;
    (**(code **)(lVar12 + 0x38))(dVar13,0,1,DVar4.unknown);
    dVar7 = dVar13;
    FUN_100245d48();
    FUN_100005808(dVar13,&DAT_100fb7f78,&DAT_100c37ab0);
    local_80 = 0.0;
    if (lVar11 != 0) {
      local_80 = dVar7;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar11 != 0) {
      lStack_78 = lVar11;
    }
    DVar9.unknown = (undefined *)0xd00000000000001a;
    local_68 = puVar3;
    FUN_1002bf0c4(&local_80,0xd00000000000001a,0x8000000100da04e0);
    local_80 = Foundation::Date::timeIntervalSince(local_a8,DVar9);
    local_68 = PTR___type_metadata_for_Swift_Double_100eac5d0;
    FUN_1002bf0c4(&local_80,0xd000000000000023,0x8000000100da0500);
    lVar5 = local_88;
    (**(code **)(lVar12 + 8))(lVar10,DVar4.unknown);
  }
  puVar2 = local_90;
  FUN_100011090(param_1 + *(int *)(lVar5 + 0x2c),local_90,&DAT_100fb7f78,&DAT_100c37ab0);
  puVar8 = puVar2;
  (*pcVar15)(puVar2,1,DVar4.unknown);
  lVar10 = local_a0;
  if ((int)puVar8 == 1) {
    FUN_100005808(puVar2,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_a0,puVar2,DVar4.unknown);
    (**(code **)(lVar12 + 0x10))(dVar13,lVar10,DVar4.unknown);
    lVar11 = 0;
    (**(code **)(lVar12 + 0x38))(dVar13,0,1,DVar4.unknown);
    dVar7 = dVar13;
    FUN_100245d48();
    FUN_100005808(dVar13,&DAT_100fb7f78,&DAT_100c37ab0);
    local_80 = 0.0;
    if (lVar11 != 0) {
      local_80 = dVar7;
    }
    lStack_78 = -0x2000000000000000;
    if (lVar11 != 0) {
      lStack_78 = lVar11;
    }
    local_68 = puVar3;
    FUN_1002bf0c4(&local_80,0xd00000000000001a,0x8000000100da04c0);
    lVar5 = local_88;
    (**(code **)(lVar12 + 8))(lVar10,DVar4.unknown);
  }
  pdVar1 = (double *)(param_1 + *(int *)(lVar5 + 0x30));
  if (*(char *)(pdVar1 + 1) != '\x01') {
    local_80 = *pdVar1;
    local_68 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    FUN_1002bf0c4(&local_80,0xd00000000000001c,0x8000000100da04a0);
  }
  return;
}



/* Address: 0x1002c46a8 | FUN_1002c46a8 */

undefined * FUN_1002c46a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  Date DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  Date DVar12;
  undefined8 uVar13;
  double dVar14;
  long local_2d0;
  long local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined8 *local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  undefined *local_80 [2];
  
  lVar5 = 0;
  FUN_1002bdad0();
  local_290 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)&local_2d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fbc110;
  local_298 = lVar5;
  FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar5 - extraout_x8_00;
  local_2a0 = lVar5;
  local_2c0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_288 = *(long *)(local_2c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_288 + 0x40));
  DVar12.unknown = (undefined *)(lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)DVar12.unknown - extraout_x8_02;
  lVar7 = 0;
  FUN_1002c1890();
  local_2c8 = (long)*(int *)(lVar7 + 0x14);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  uVar2 = *puVar1;
  local_2b8 = puVar1[1];
  local_2a8 = puVar1[2];
  uVar13 = *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x28));
  local_2d0 = (long)*(int *)(lVar7 + 0x34);
  puVar6 = &DAT_100fbbab0;
  FUN_1000037f0(&DAT_100fbbab0,&DAT_100c3cbf0);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 0x14;
  *(undefined8 *)(puVar6 + 0x10) = 10;
  local_2b0 = (undefined8 *)(puVar6 + 0x20);
  *local_2b0 = 0xd000000000000015;
  puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar6 + 0x28) = 0x8000000100da02d0;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined **)(puVar6 + 0x48) = puVar9;
  *(undefined8 *)(puVar6 + 0x50) = 0xd00000000000001c;
  *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da02f0;
  *(undefined8 *)(puVar6 + 0x60) = uVar13;
  *(undefined **)(puVar6 + 0x78) = puVar9;
  *(undefined8 *)(puVar6 + 0x80) = 0xd000000000000019;
  *(undefined8 *)(puVar6 + 0x88) = 0x8000000100da0310;
  FUN_10043a408(lVar5);
  puVar4 = local_2c0;
  lVar10 = 0;
  (**(code **)(local_288 + 0x38))(lVar5,0,1,local_2c0);
  lVar8 = lVar5;
  FUN_100245d48();
  DVar11.unknown = &DAT_100fb7f78;
  FUN_100005808(lVar5,&DAT_100fb7f78,&DAT_100c37ab0);
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar5 = 0;
  if (lVar10 != 0) {
    lVar5 = lVar8;
  }
  lVar8 = -0x2000000000000000;
  if (lVar10 != 0) {
    lVar8 = lVar10;
  }
  *(long *)(puVar6 + 0x90) = lVar5;
  *(long *)(puVar6 + 0x98) = lVar8;
  puVar1 = (undefined8 *)(param_1 + local_2d0);
  *(undefined **)(puVar6 + 0xa8) = puVar9;
  *(undefined8 *)(puVar6 + 0xb0) = 0xd000000000000017;
  *(undefined8 *)(puVar6 + 0xb8) = 0x8000000100da0330;
  FUN_10043a408(DVar12.unknown);
  lVar5 = local_2c8;
  dVar14 = Foundation::Date::timeIntervalSince(DVar12,DVar11);
  (**(code **)(local_288 + 8))(DVar12.unknown,puVar4);
  puVar9 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  *(double *)(puVar6 + 0xc0) = dVar14;
  *(undefined **)(puVar6 + 0xd8) = puVar9;
  *(undefined8 *)(puVar6 + 0xe0) = 0xd000000000000023;
  *(undefined8 *)(puVar6 + 0xe8) = 0x8000000100da0350;
  *(undefined8 *)(puVar6 + 0xf0) = *puVar1;
  puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar6 + 0x108) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar6 + 0x110) = 0xd00000000000002a;
  *(undefined8 *)(puVar6 + 0x118) = 0x8000000100da0380;
  *(undefined8 *)(puVar6 + 0x120) = puVar1[1];
  *(undefined **)(puVar6 + 0x138) = puVar9;
  *(undefined8 *)(puVar6 + 0x140) = 0xd00000000000002b;
  *(undefined8 *)(puVar6 + 0x148) = 0x8000000100da03b0;
  *(undefined8 *)(puVar6 + 0x150) = puVar1[2];
  *(undefined **)(puVar6 + 0x168) = puVar9;
  *(undefined8 *)(puVar6 + 0x170) = 0xd00000000000002c;
  *(undefined8 *)(puVar6 + 0x178) = 0x8000000100da03e0;
  *(undefined8 *)(puVar6 + 0x180) = puVar1[3];
  *(undefined **)(puVar6 + 0x198) = puVar9;
  *(undefined8 *)(puVar6 + 0x1a0) = 0xd00000000000001e;
  *(undefined8 *)(puVar6 + 0x1a8) = 0x8000000100da0410;
  *(undefined8 *)(puVar6 + 0x1b0) = local_2b8;
  *(undefined **)(puVar6 + 0x1c8) = puVar9;
  *(undefined8 *)(puVar6 + 0x1d0) = 0xd000000000000027;
  *(undefined **)(puVar6 + 0x1f8) = puVar9;
  *(undefined8 *)(puVar6 + 0x1d8) = 0x8000000100da0430;
  *(undefined8 *)(puVar6 + 0x1e0) = local_2a8;
  puVar9 = puVar6;
  FUN_1002b35c8();
  _swift_setDeallocating(puVar6);
  puVar6 = &DAT_100fbb7b0;
  FUN_1000037f0(&DAT_100fbb7b0,&DAT_100c3c090);
  _swift_arrayDestroy(local_2b0,10,puVar6);
  lVar8 = local_2a0;
  local_80[0] = puVar9;
  FUN_1000c495c(param_1 + *(int *)(lVar7 + 0x30),local_2a0,FUN_1002bd9c0);
  lVar10 = 0;
  FUN_1002bd9c0();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar8,0,1,lVar10);
  FUN_1002c3470(lVar8,0xd000000000000014,0x8000000100da0460,param_1 + lVar5,local_80);
  FUN_100005808(lVar8,&DAT_100fbc110,&DAT_100c3c9d8);
  FUN_1002c3cec(param_1 + *(int *)(lVar7 + 0x20),local_80);
  FUN_1002c3f28(param_1 + *(int *)(lVar7 + 0x2c),param_1 + lVar5,local_80);
  lVar8 = local_298;
  FUN_1000c495c(puVar1,local_298,FUN_1002bdad0);
  iVar3 = *(int *)(local_290 + 0x20);
  FUN_1002c3470(lVar8 + iVar3,0xd00000000000001c,0x8000000100da0480,param_1 + lVar5,local_80);
  FUN_100005808(lVar8 + iVar3,&DAT_100fbc110,&DAT_100c3c9d8);
  return local_80[0];
}


