/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003a5cf4 | FUN_1003a5cf4 */

void FUN_1003a5cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  MainActor *pMVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  lVar10 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            ((long)puVar8 - extraout_x8_00,1,1,TVar3.unknown);
  pMVar4 = (MainActor *)&DAT_100ece298;
  _swift_allocObject(&DAT_100ece298,0x18,7);
  _swift_weakInit(pMVar4 + 0x10,param_1);
  (**(code **)(lVar10 + 0x10))(puVar8,param_2,puVar1);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = pMVar4;
  _swift_retain();
  pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
  puVar6 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ece3d8;
  _swift_allocObject(&DAT_100ece3d8,uVar11 + lVar9,uVar7 | 7);
  *(MainActor **)(puVar2 + 0x10) = pMVar5;
  *(undefined8 **)(puVar2 + 0x18) = puVar6;
  *(MainActor **)(puVar2 + 0x20) = pMVar4;
  (**(code **)(lVar10 + 0x20))(puVar2 + uVar11,puVar8,puVar1);
  _swift_release(pMVar4);
  FUN_100364f4c(0,0,(long)puVar8 - extraout_x8_00,&DAT_100c44418,puVar2);
  _swift_release();
  return;
}



/* Address: 0x1003a5ebc | FUN_1003a5ebc */

void FUN_1003a5ebc(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x30) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x38) = puVar3;
  _swift_task_switch(FUN_1003a5f4c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a5f4c | FUN_1003a5f4c */

void FUN_1003a5f4c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0xf0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1003a5fc4;
    FUN_1003a6154();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001003a5fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a5fc4 | FUN_1003a5fc4 */

void FUN_1003a5fc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1003a601c;
  }
  else {
    pcVar1 = FUN_1003a60d4;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
  return;
}



/* Address: 0x1003a601c | FUN_1003a601c */

void FUN_1003a601c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  puVar1 = &DAT_100c44390;
  _swift_getKeyPath(&DAT_100c44390);
  puVar2 = &DAT_100c443b8;
  _swift_getKeyPath(&DAT_100c443b8);
  *(undefined1 *)(unaff_x22 + 0x58) = 0;
  _swift_retain(uVar3);
  FUN_1002cb5a0((undefined1 *)(unaff_x22 + 0x58),uVar3,puVar1,puVar2);
  FUN_1003b1940();
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  Swift::CheckedContinuation::resume();
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001003a60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a60d4 | FUN_1003a60d4 */

void FUN_1003a60d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  _swift_errorRetain(uVar2);
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x10),puVar1);
  _swift_release(uVar3);
  _swift_errorRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003a6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a6154 | FUN_1003a6154 */

void FUN_1003a6154(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  lVar2 = 0;
  FUN_1003b2fc0();
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar5;
  puVar6 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x98) = puVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xa0) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar6;
  _swift_task_switch(FUN_1003a6218,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1003a6218 | FUN_1003a6218 */

void FUN_1003a6218(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  Published *pPVar8;
  Task TVar9;
  code *pcVar10;
  long *plVar11;
  undefined *puVar12;
  CKSyncEngine *this;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_1000d468c(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar7 = unaff_x22 + 0x40;
  FUN_100004640(lVar7,uVar3);
  FUN_1000d4db8(0xd00000000000001b,0x8000000100da4b60,uVar3,uVar6,lVar7);
  FUN_100004594(unaff_x22 + 0x40);
  _swift_storeEnumTagMultiPayload(uVar4,uVar5,4);
  pPVar8 = (Published *)&DAT_100c44300;
  _swift_getKeyPath(&DAT_100c44300);
  puVar12 = &DAT_100c44328;
  _swift_getKeyPath(&DAT_100c44328);
  FUN_10006313c(uVar4,uVar1);
  _swift_retain(lVar2);
  Combine::Published::_set_subscript(pPVar8,uVar1,lVar2,pPVar8,puVar12);
  FUN_1003b2054();
  FUN_1000629fc(uVar4);
  puVar12 = *(undefined **)(lVar2 + _TtC9PasteCore10SyncEngine::contextChangesTask);
  if (puVar12 != (undefined *)0x0) {
    TVar9.unknown = puVar12;
    _swift_retain();
    Swift::Task::cancel(TVar9);
    _swift_release(puVar12);
  }
  lVar7 = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  *(long *)(unaff_x22 + 0xb0) = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  this = *(CKSyncEngine **)(*(long *)(unaff_x22 + 0x70) + lVar7);
  *(CKSyncEngine **)(unaff_x22 + 0xb8) = this;
  lVar7 = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  if (this == (CKSyncEngine *)0x0) {
    *(long *)(unaff_x22 + 200) = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
    this = *(CKSyncEngine **)(*(long *)(unaff_x22 + 0x70) + lVar7);
    *(CKSyncEngine **)(unaff_x22 + 0xd0) = this;
    if (this == (CKSyncEngine *)0x0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      plVar11 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xe0) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_1003a65f0;
      FUN_1003ad19c(uVar1,uVar3);
      return;
    }
    plVar11 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar11;
    pcVar10 = FUN_1003a6548;
  }
  else {
    plVar11 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar11;
    pcVar10 = FUN_1003a643c;
  }
  *plVar11 = unaff_x22;
  plVar11[1] = (long)pcVar10;
  CloudKit::CKSyncEngine::_cancelOperations(this);
  return;
}



/* Address: 0x1003a643c | FUN_1003a643c */

void FUN_1003a643c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1003a6488,*(undefined8 *)(lVar2 + 0xa0),*(undefined8 *)(lVar2 + 0xa8));
  return;
}



/* Address: 0x1003a6488 | FUN_1003a6488 */

void FUN_1003a6488(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  CKSyncEngine *this;
  long unaff_x22;
  
  lVar3 = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  *(long *)(unaff_x22 + 200) = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  this = *(CKSyncEngine **)(*(long *)(unaff_x22 + 0x70) + lVar3);
  *(CKSyncEngine **)(unaff_x22 + 0xd0) = this;
  if (this != (CKSyncEngine *)0x0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1003a6548;
    CloudKit::CKSyncEngine::_cancelOperations(this);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1003a65f0;
  FUN_1003ad19c(uVar1,uVar2);
  return;
}



/* Address: 0x1003a6548 | FUN_1003a6548 */

void FUN_1003a6548(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1003a6594,*(undefined8 *)(lVar2 + 0xa0),*(undefined8 *)(lVar2 + 0xa8));
  return;
}



/* Address: 0x1003a6594 | FUN_1003a6594 */

void FUN_1003a6594(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1003a65f0;
  FUN_1003ad19c(uVar1,uVar2);
  return;
}



/* Address: 0x1003a65f0 | FUN_1003a65f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003a6774) */

void FUN_1003a65f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ID self;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined8 uVar7;
  Published *pPVar8;
  long unaff_x20;
  long lVar9;
  long *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *unaff_x22;
  lVar10 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xe0));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
  }
  lVar9 = *(long *)(lVar13 + 0x70);
  _swift_release(*(undefined8 *)(lVar13 + 0x90));
  lVar9 = lVar9 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar9 + 0x18);
  lVar12 = *(long *)(lVar9 + 0x20);
  FUN_100004640(lVar9,self);
  (**(code **)(lVar12 + 0x18))(self,lVar12);
  puVar4 = &DAT_100ece400;
  _swift_allocObject(&DAT_100ece400,0x18,7);
  *(ID *)(puVar4 + 0x10) = self;
  puVar5 = &DAT_100ece428;
  _swift_allocObject(&DAT_100ece428,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003a9fec;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(lVar13 + 0x30) = thunk_FUN_100209b34;
  *(undefined **)(lVar13 + 0x38) = puVar5;
  *(undefined **)(lVar13 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(lVar13 + 0x18) = 0x42000000;
  *(code **)(lVar13 + 0x20) = FUN_1000d5218;
  *(undefined **)(lVar13 + 0x28) = &DAT_100ece440;
  aBlock = __Block_copy((void *)(lVar13 + 0x10));
  uVar11 = *(undefined8 *)(lVar13 + 0x38);
  _swift_retain(puVar5);
  _swift_release(uVar11);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x9a,0xea,0x20,1);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003a68b8);
    (*pcVar3)();
  }
  FUN_100396174(self,1);
  lVar14 = *(long *)(lVar13 + 200);
  lVar12 = *(long *)(lVar13 + 0xb0);
  uVar11 = *(undefined8 *)(lVar13 + 0x80);
  uVar1 = *(undefined8 *)(lVar13 + 0x88);
  lVar9 = *(long *)(lVar13 + 0x70);
  uVar2 = *(undefined8 *)(lVar13 + 0x78);
  FUN_1000da768(lVar13 + 0x68);
  objc_stub::removeAllActions(*(ID *)(lVar13 + 0x68));
  uVar7 = *(undefined8 *)(lVar9 + lVar12);
  *(undefined8 *)(lVar9 + lVar12) = 0;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(lVar9 + lVar14);
  *(undefined8 *)(lVar9 + lVar14) = 0;
  _swift_release(uVar7);
  FUN_1003b2cd4();
  _swift_storeEnumTagMultiPayload(uVar1,uVar2,5);
  pPVar8 = (Published *)&DAT_100c44300;
  _swift_getKeyPath(&DAT_100c44300);
  puVar5 = &DAT_100c44328;
  _swift_getKeyPath(&DAT_100c44328);
  FUN_10006313c(uVar1,uVar11);
  _swift_retain(lVar9);
  Combine::Published::_set_subscript(pPVar8,uVar11,lVar9,pPVar8,puVar5);
  FUN_1003b2054();
  FUN_1000629fc(uVar1);
  _swift_release(puVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001003a68b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))();
  return;
}



/* Address: 0x1003a68b8 | FUN_1003a68b8 */

void FUN_1003a68b8(undefined1 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  if (*(char *)(param_2 + _TtC9PasteCore10SyncEngine::isSyncNudgeInFlight) == '\x01') {
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      puVar3 = &DAT_100ece4a0;
      _swift_allocObject(&DAT_100ece4a0,0x20,7);
      *(long *)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      lVar2 = _TtC9PasteCore10SyncEngine::syncNudgeCompletions;
      _swift_beginAccess(param_2 + _TtC9PasteCore10SyncEngine::syncNudgeCompletions,auStack_68,0x21,
                         0);
      uVar7 = *(ulong *)(param_2 + lVar2);
      _swift_retain(param_4);
      uVar4 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(param_2 + lVar2) = uVar7;
      uVar5 = uVar7;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_1003804d0(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
        *(ulong *)(param_2 + lVar2) = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1003804d0(uVar7,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      lVar1 = uVar7 + uVar4 * 0x10;
      *(code **)(lVar1 + 0x20) = thunk_FUN_100134360;
      *(undefined **)(lVar1 + 0x28) = puVar3;
      *(ulong *)(param_2 + lVar2) = uVar7;
      _swift_endAccess(auStack_68);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
    *(undefined1 *)(param_2 + _TtC9PasteCore10SyncEngine::isSyncNudgeInFlight) = 1;
    if (param_3 != 0) {
      puVar3 = &DAT_100ece478;
      _swift_allocObject(&DAT_100ece478,0x20,7);
      *(long *)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      lVar2 = _TtC9PasteCore10SyncEngine::syncNudgeCompletions;
      _swift_beginAccess(param_2 + _TtC9PasteCore10SyncEngine::syncNudgeCompletions,auStack_68,0x21,
                         0);
      uVar7 = *(ulong *)(param_2 + lVar2);
      _swift_retain(param_4);
      uVar4 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(param_2 + lVar2) = uVar7;
      uVar5 = uVar7;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_1003804d0(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
        *(ulong *)(param_2 + lVar2) = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar7 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1003804d0(uVar7,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
      lVar1 = uVar7 + uVar4 * 0x10;
      *(code **)(lVar1 + 0x20) = FUN_100134360;
      *(undefined **)(lVar1 + 0x28) = puVar3;
      *(ulong *)(param_2 + lVar2) = uVar7;
      _swift_endAccess(auStack_68);
      uVar6 = 1;
    }
  }
  *param_1 = uVar6;
  return;
}



/* Address: 0x1003a6ae4 | FUN_1003a6ae4 */

void FUN_1003a6ae4(void)

{
  Scope SVar1;
  Scope SVar2;
  undefined7 extraout_var;
  ulong uVar3;
  SendChangesOptions SVar4;
  ulong uVar5;
  undefined7 extraout_var_00;
  FetchChangesOptions FVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x4;
  SVar1 = CloudKit::CKSyncEngine::SendChangesOptions::Scope::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,SVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,SVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  SVar4 = CloudKit::CKSyncEngine::SendChangesOptions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = SVar4.unknown;
  lVar7 = *(long *)(SVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  SVar2 = CloudKit::CKSyncEngine::FetchChangesOptions::Scope::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var_00,SVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var_00,SVar2.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  FVar6 = CloudKit::CKSyncEngine::FetchChangesOptions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x90) = FVar6.unknown;
  lVar7 = *(long *)(FVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x98) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  _swift_task_switch(FUN_1003a6bd4,0,0);
  return;
}



/* Address: 0x1003a6bd4 | FUN_1003a6bd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a6bd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  ID IVar8;
  long *plVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  FetchChangesOptions FVar13;
  SendChangesOptions SVar14;
  CKSyncEngine *this;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  lVar7 = *(long *)(unaff_x22 + 0x30) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0xb0) = lVar7;
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001003a6df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined **)(unaff_x22 + 0xb8) = &_OBJC_CLASS___NSBundle;
  IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  NSBundle::bundlePath(IVar8);
  SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar18.bridgeObject = &DAT_e600000000000000;
  SVar18.str = (char *)0x78657070612e;
  bVar6 = Swift::String::hasSuffix(SVar18,SVar17);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  lVar5 = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  if (!bVar6) {
    this = *(CKSyncEngine **)(lVar7 + _TtC9PasteCore10SyncEngine::privateSyncEngine);
    *(CKSyncEngine **)(unaff_x22 + 0xc0) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x68))
                (uVar2,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_all_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_100ea9270
                 ,*(undefined8 *)(unaff_x22 + 0x78));
      _swift_retain(this);
      CloudKit::CKSyncEngine::FetchChangesOptions::_init((Scope)(__int8)uVar2);
      plVar9 = (long *)(ulong)*(uint *)(PTR__fetchChanges_100ea9200 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 200) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1003a6ff0;
      FVar13.unknown = *(undefined **)(unaff_x22 + 0xa8);
      goto LAB_1003a6f58;
    }
  }
  this = *(CKSyncEngine **)(*(long *)(unaff_x22 + 0xb0) + lVar5);
  *(CKSyncEngine **)(unaff_x22 + 0xd8) = this;
  if (this != (CKSyncEngine *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
              (uVar2,*(undefined4 *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
               ,*(undefined8 *)(unaff_x22 + 0x40));
    _swift_retain(this);
    CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar2);
    plVar9 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1003a7328;
    SVar14.unknown = *(undefined **)(unaff_x22 + 0x70);
LAB_1003a6d8c:
    CloudKit::CKSyncEngine::_sendChanges(this,SVar14);
    return;
  }
  IVar8 = objc_stub::mainBundle(*(ID *)(unaff_x22 + 0xb8));
  objc_stub::bundlePath(IVar8);
  SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar19.bridgeObject = &DAT_e600000000000000;
  SVar19.str = (char *)0x78657070612e;
  bVar6 = Swift::String::hasSuffix(SVar19,SVar17);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0xb0) + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
  if (bVar6) {
    *(CKSyncEngine **)(unaff_x22 + 0x108) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
                (uVar2,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
                 ,*(undefined8 *)(unaff_x22 + 0x40));
      _swift_retain(this);
      CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar2);
      plVar9 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x110) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1003a7794;
      SVar14.unknown = *(undefined **)(unaff_x22 + 0x68);
      goto LAB_1003a6d8c;
    }
  }
  else {
    *(CKSyncEngine **)(unaff_x22 + 0xf0) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x68))
                (uVar2,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_all_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_100ea9270
                 ,*(undefined8 *)(unaff_x22 + 0x78));
      _swift_retain(this);
      CloudKit::CKSyncEngine::FetchChangesOptions::_init((Scope)(__int8)uVar2);
      plVar9 = (long *)(ulong)*(uint *)(PTR__fetchChanges_100ea9200 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1003a75e0;
      FVar13.unknown = *(undefined **)(unaff_x22 + 0xa0);
LAB_1003a6f58:
      CloudKit::CKSyncEngine::_fetchChanges(this,FVar13);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x108) = 0;
  }
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar10;
  puVar11 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar12 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar12.unknown,puVar11);
  return;
}



/* Address: 0x1003a6ff0 | FUN_1003a6ff0 */

void FUN_1003a6ff0(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 200));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0xa8);
    uVar1 = *(undefined8 *)(lVar4 + 0x90);
    lVar2 = *(long *)(lVar4 + 0x98);
    _swift_release(*(undefined8 *)(lVar4 + 0xc0));
    (**(code **)(lVar2 + 8))(uVar5,uVar1);
    pcVar3 = FUN_1003a7078;
  }
  else {
    _swift_release(*(undefined8 *)(lVar4 + 0xc0));
    pcVar3 = FUN_1003a7a60;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1003a7078 | FUN_1003a7078 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a7078(void)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  ID self;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  SendChangesOptions SVar7;
  CKSyncEngine *this;
  long unaff_x22;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0xb0) + _TtC9PasteCore10SyncEngine::privateSyncEngine);
  *(CKSyncEngine **)(unaff_x22 + 0xd8) = this;
  if (this != (CKSyncEngine *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
              (uVar8,*(undefined4 *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
               ,*(undefined8 *)(unaff_x22 + 0x40));
    _swift_retain(this);
    CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar8);
    plVar3 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1003a7328;
    SVar7.unknown = *(undefined **)(unaff_x22 + 0x70);
LAB_1003a7114:
    CloudKit::CKSyncEngine::_sendChanges(this,SVar7);
    return;
  }
  self = objc_stub::mainBundle(*(ID *)(unaff_x22 + 0xb8));
  objc_stub::bundlePath(self);
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar10.bridgeObject = &DAT_e600000000000000;
  SVar10.str = (char *)0x78657070612e;
  bVar2 = Swift::String::hasSuffix(SVar10,SVar9);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0xb0) + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
  if (bVar2) {
    *(CKSyncEngine **)(unaff_x22 + 0x108) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
                (uVar8,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
                 ,*(undefined8 *)(unaff_x22 + 0x40));
      _swift_retain(this);
      CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar8);
      plVar3 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x110) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1003a7794;
      SVar7.unknown = *(undefined **)(unaff_x22 + 0x68);
      goto LAB_1003a7114;
    }
  }
  else {
    *(CKSyncEngine **)(unaff_x22 + 0xf0) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x68))
                (uVar8,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_all_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_100ea9270
                 ,*(undefined8 *)(unaff_x22 + 0x78));
      _swift_retain(this);
      CloudKit::CKSyncEngine::FetchChangesOptions::_init((Scope)(__int8)uVar8);
      plVar3 = (long *)(ulong)*(uint *)(PTR__fetchChanges_100ea9200 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1003a75e0;
      CloudKit::CKSyncEngine::_fetchChanges
                (this,(FetchChangesOptions)*(undefined **)(unaff_x22 + 0xa0));
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x108) = 0;
  }
  *(undefined8 *)(unaff_x22 + 0x120) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar4;
  puVar5 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1003a7328 | FUN_1003a7328 */

void FUN_1003a7328(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xe0));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x70);
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    lVar2 = *(long *)(lVar4 + 0x60);
    _swift_release(*(undefined8 *)(lVar4 + 0xd8));
    (**(code **)(lVar2 + 8))(uVar5,uVar1);
    pcVar3 = FUN_1003a73b0;
  }
  else {
    _swift_release(*(undefined8 *)(lVar4 + 0xd8));
    pcVar3 = FUN_1003a7b08;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1003a73b0 | FUN_1003a73b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a73b0(void)

{
  undefined *puVar1;
  bool bVar2;
  ID self;
  long *plVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  CKSyncEngine *this;
  long unaff_x22;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  self = objc_stub::mainBundle(*(ID *)(unaff_x22 + 0xb8));
  objc_stub::bundlePath(self);
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar9.bridgeObject = &DAT_e600000000000000;
  SVar9.str = (char *)0x78657070612e;
  bVar2 = Swift::String::hasSuffix(SVar9,SVar8);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0xb0) + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
  if (bVar2) {
    *(CKSyncEngine **)(unaff_x22 + 0x108) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
                (uVar7,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
                 ,*(undefined8 *)(unaff_x22 + 0x40));
      _swift_retain(this);
      CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar7);
      plVar3 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x110) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1003a7794;
      CloudKit::CKSyncEngine::_sendChanges
                (this,(SendChangesOptions)*(undefined **)(unaff_x22 + 0x68));
      return;
    }
  }
  else {
    *(CKSyncEngine **)(unaff_x22 + 0xf0) = this;
    if (this != (CKSyncEngine *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x68))
                (uVar7,*(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_all_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_100ea9270
                 ,*(undefined8 *)(unaff_x22 + 0x78));
      _swift_retain(this);
      CloudKit::CKSyncEngine::FetchChangesOptions::_init((Scope)(__int8)uVar7);
      plVar3 = (long *)(ulong)*(uint *)(PTR__fetchChanges_100ea9200 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xf8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1003a75e0;
      CloudKit::CKSyncEngine::_fetchChanges
                (this,(FetchChangesOptions)*(undefined **)(unaff_x22 + 0xa0));
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x108) = 0;
  }
  *(undefined8 *)(unaff_x22 + 0x120) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar4;
  puVar5 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1003a75e0 | FUN_1003a75e0 */

void FUN_1003a75e0(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xf8));
  if (unaff_x20 == 0) {
    lVar1 = *(long *)(lVar4 + 0x98);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    uVar5 = *(undefined8 *)(lVar4 + 0x90);
    _swift_release(*(undefined8 *)(lVar4 + 0xf0));
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_1003a7668;
  }
  else {
    _swift_release(*(undefined8 *)(lVar4 + 0xf0));
    pcVar3 = FUN_1003a7bb0;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1003a7668 | FUN_1003a7668 */

void FUN_1003a7668(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  CKSyncEngine *this;
  long unaff_x22;
  
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0xb0) + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
  *(CKSyncEngine **)(unaff_x22 + 0x108) = this;
  if (this != (CKSyncEngine *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x68))
              (uVar1,*(undefined4 *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_SendChangesOptions_Scope_all_CloudKit_CKSyncEngine_SendChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_SendChangesOptions_Scope_100ea9240
               ,*(undefined8 *)(unaff_x22 + 0x40));
    _swift_retain(this);
    CloudKit::CKSyncEngine::SendChangesOptions::_init((Scope)(__int8)uVar1);
    plVar3 = (long *)(ulong)*(uint *)(PTR__sendChanges_100ea91f0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1003a7794;
    CloudKit::CKSyncEngine::_sendChanges(this,(SendChangesOptions)*(undefined **)(unaff_x22 + 0x68))
    ;
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar4;
  puVar5 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1003a7794 | FUN_1003a7794 */

void FUN_1003a7794(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x118) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x110));
  if (unaff_x20 == 0) {
    lVar1 = *(long *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    uVar5 = *(undefined8 *)(lVar4 + 0x58);
    _swift_release(*(undefined8 *)(lVar4 + 0x108));
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_1003a781c;
  }
  else {
    _swift_release(*(undefined8 *)(lVar4 + 0x108));
    pcVar3 = FUN_1003a7c58;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1003a781c | FUN_1003a781c */

void FUN_1003a781c(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a78b0 | FUN_1003a78b0 */

void FUN_1003a78b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  FUN_1003a7d00(uVar2,unaff_x22 + 0x28,uVar1);
  if (lVar3 != 0) {
    _swift_errorRelease(lVar3);
    return;
  }
  _swift_task_switch(FUN_1003a792c,0,0);
  return;
}



/* Address: 0x1003a792c | FUN_1003a792c */

void FUN_1003a792c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_40;
  
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  self = *(ID *)(lVar6 + _TtC9PasteCore10SyncEngine::syncLock);
  objc_stub::lock(self);
  lVar7 = _TtC9PasteCore10SyncEngine::syncNudgeCompletions;
  _swift_beginAccess(lVar6 + _TtC9PasteCore10SyncEngine::syncNudgeCompletions,unaff_x22 + 0x10,1,0);
  lVar3 = *(long *)(lVar6 + lVar7);
  *(undefined **)(lVar6 + lVar7) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined1 *)(lVar6 + _TtC9PasteCore10SyncEngine::isSyncNudgeInFlight) = 0;
  objc_stub::unlock(self);
  lVar7 = *(long *)(lVar3 + 0x10);
  if (lVar7 != 0) {
    puVar9 = (undefined8 *)(lVar3 + 0x28);
    do {
      local_40 = *(undefined8 *)(unaff_x22 + 0x128);
      pcVar1 = (code *)puVar9[-1];
      uVar5 = *puVar9;
      _swift_retain(uVar5);
      (*pcVar1)(&local_40);
      _swift_release(uVar5);
      puVar9 = puVar9 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_bridgeObjectRelease(lVar3);
  _swift_release(uVar8);
  _swift_errorRelease(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001003a7a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a7a60 | FUN_1003a7a60 */

void FUN_1003a7a60(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xd0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a7b08 | FUN_1003a7b08 */

void FUN_1003a7b08(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xe8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a7bb0 | FUN_1003a7bb0 */

void FUN_1003a7bb0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x100);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a7c58 | FUN_1003a7c58 */

void FUN_1003a7c58(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x118);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a78b0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a7d00 | FUN_1003a7d00 */

void FUN_1003a7d00(long param_1,undefined8 *param_2)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined *puVar6;
  Date DVar7;
  long lVar8;
  long lVar9;
  Published *pPVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar13;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long local_c0 [3];
  undefined8 *local_a8;
  long local_a0;
  undefined *puStack_98;
  MainActor *local_90;
  undefined1 auStack_78 [24];
  
  local_a8 = param_2;
  puStack_98 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_a0 = *(long *)(puStack_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar9 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100fc2280;
  FUN_1000037f0(&DAT_100fc2280,&DAT_100c440a8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0[2] = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar11 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)puVar18 - extraout_x12_00;
  lVar11 = 0;
  FUN_1003b2fc0();
  lVar16 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0[1] = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_c0[0] = lVar19 - extraout_x12_03;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_90 = pMVar1;
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/SyncEngine+Lifecycle.swift",0x24,1,0xba,UVar3.unknown,puVar2);
  }
  lVar8 = _TtC9PasteCore10SyncEngine::activeSyncScopes;
  _swift_beginAccess(param_1 + _TtC9PasteCore10SyncEngine::activeSyncScopes,auStack_78,1,0);
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = PTR___swiftEmptySetSingleton_100eae0e8;
  _swift_bridgeObjectRelease(uVar5);
  puVar14 = &DAT_100c44300;
  _swift_getKeyPath(&DAT_100c44300);
  puVar6 = &DAT_100c44328;
  _swift_getKeyPath(&DAT_100c44328);
  Combine::Published::_get_subscript(lVar19,param_1,puVar14,puVar6);
  _swift_release(puVar14);
  _swift_release(puVar6);
  puVar14 = (undefined *)*local_a8;
  DVar7.unknown = puVar14;
  _swift_errorRetain();
  Foundation::Date::get_now(DVar7);
  FUN_10006313c(lVar19,lVar12);
  lVar8 = lVar12;
  _swift_getEnumCaseMultiPayload(lVar12,lVar11);
  if ((1 << (ulong)((uint)lVar8 & 0x1f) & 3U) == 0) {
    if ((1 << (ulong)((uint)lVar8 & 0x1f) & 0xcU) == 0) {
      _swift_errorRelease(puVar14);
      (**(code **)(local_a0 + 8))(lVar9,puStack_98);
      FUN_1000629fc(lVar19);
      (**(code **)(lVar16 + 0x38))(lVar17,1,1,lVar11);
      pcVar15 = *(code **)(lVar16 + 0x30);
      goto LAB_1003a8114;
    }
  }
  else {
    FUN_1000629fc(lVar12);
  }
  if (puVar14 != (undefined *)0x0) {
    *puVar18 = puVar14;
    _swift_storeEnumTagMultiPayload(puVar18,lVar11,1);
  }
  FUN_1000629fc(lVar19);
  pcVar13 = *(code **)(lVar16 + 0x38);
  (*pcVar13)(puVar18,puVar14 == (undefined *)0x0,1,lVar11);
  lVar12 = local_c0[2];
  FUN_1003a2654(puVar18,local_c0[2]);
  pcVar15 = *(code **)(lVar16 + 0x30);
  lVar19 = lVar12;
  (*pcVar15)(lVar12,1,lVar11);
  puVar14 = puStack_98;
  lVar16 = local_a0;
  if ((int)lVar19 == 1) {
    (**(code **)(local_a0 + 0x20))(lVar17,lVar9,puStack_98);
    (**(code **)(lVar16 + 0x38))(lVar17,0,1,puVar14);
    _swift_storeEnumTagMultiPayload(lVar17,lVar11,0);
    lVar9 = lVar12;
    (*pcVar15)(lVar12,1,lVar11);
    if ((int)lVar9 != 1) {
      FUN_100005808(lVar12,&DAT_100fc2280,&DAT_100c440a8);
    }
  }
  else {
    (**(code **)(local_a0 + 8))(lVar9,puStack_98);
    FUN_1003a26ec(lVar12,lVar17);
  }
  (*pcVar13)(lVar17,0,1,lVar11);
LAB_1003a8114:
  lVar9 = lVar17;
  (*pcVar15)(lVar17,1,lVar11);
  lVar11 = local_c0[0];
  if ((int)lVar9 == 1) {
    FUN_100005808(lVar17,&DAT_100fc2280,&DAT_100c440a8);
  }
  else {
    FUN_1003a26ec(lVar17,local_c0[0]);
    puVar14 = &DAT_100c44300;
    _swift_getKeyPath(&DAT_100c44300);
    pPVar10 = (Published *)&DAT_100c44328;
    _swift_getKeyPath(&DAT_100c44328);
    lVar9 = local_c0[1];
    FUN_10006313c(lVar11,local_c0[1]);
    _swift_retain(param_1);
    Combine::Published::_set_subscript(pPVar10,lVar9,param_1,puVar14,pPVar10);
    FUN_1003b2054();
    FUN_1000629fc(lVar11);
  }
  _swift_release(local_90);
  return;
}



/* Address: 0x1003a81e4 | FUN_1003a81e4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003a81e4(ID param_1)

{
  long lVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  Set<undefined> SVar7;
  Iterator *_cocoa;
  Iterator IVar8;
  ID IVar9;
  ulong uVar10;
  undefined *self;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined *local_a8 [2];
  undefined *local_98;
  undefined *local_90;
  ulong *puStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10039333c();
  FUN_1003935cc(param_1);
  FUN_1003a2a08(param_1,FUN_100329890,FUN_10032a850);
  objc_stub::updatedObjects(param_1);
  uVar6 = 0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  FUN_1003084a8();
  SVar7 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  IVar8.unknown = (undefined *)0x0;
  if (((ulong)SVar7.unknown & 0xc000000000000001) == 0) {
    lStack_78 = 0;
    uVar14 = -1L << ((ulong)(byte)SVar7.unknown[0x20] & 0x3f);
    puVar13 = (ulong *)(SVar7.unknown + 0x38);
    uVar10 = ~uVar14;
    uVar14 = -uVar14;
    local_70 = 0xffffffffffffffff;
    if (uVar14 < 0x40) {
      local_70 = ~(-1L << (uVar14 & 0x3f));
    }
    local_70 = local_70 & *puVar13;
  }
  else {
    _Var2.unknown = SVar7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar7.unknown) {
      _Var2.unknown = SVar7.unknown;
    }
    _cocoa = Swift::__CocoaSet::makeIterator(_Var2);
    IVar8 = Swift::Set::Iterator::_init(_cocoa);
    uVar10 = local_80;
    SVar7.unknown = local_90;
    puVar13 = puStack_88;
  }
  lVar11 = lStack_78;
  uVar14 = local_70;
  do {
    lVar4 = lVar11;
    uVar12 = uVar14;
    if ((long)SVar7.unknown < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar7.unknown & 0x7fffffffffffffff));
      if (IVar8.unknown == (undefined *)0x0) {
LAB_1003a8430:
        FUN_10000c650(SVar7.unknown,puVar13,uVar10,lVar11,uVar14);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
      local_a8[0] = IVar8.unknown;
      _swift_dynamicCast(&local_98,local_a8,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar6,7);
      self = local_98;
    }
    else {
      while (uVar12 == 0) {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a8484);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x40 >> 6) <= lVar1) {
          uVar14 = 0;
          goto LAB_1003a8430;
        }
        lVar4 = lVar1;
        uVar12 = puVar13[lVar1];
      }
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      self = *(undefined **)
              (*(long *)(SVar7.unknown + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
              lVar4 * 0x200);
    }
    if (self == (undefined *)0x0) goto LAB_1003a8430;
    local_98 = (undefined *)0x0;
    IVar9 = objc_stub::validateForUpdate_((ID)self,&local_98);
    lVar11 = lVar4;
    uVar14 = uVar12;
    if ((IVar9 & 1) == 0) {
      IVar8.unknown = local_98;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      objc_stub::deleteObject_(param_1,self);
      _swift_errorRelease();
    }
    else {
      IVar8.unknown = (undefined *)0x0;
    }
  } while( true );
}



/* Address: 0x1003a8488 | FUN_1003a8488 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a8488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  Task TVar4;
  undefined8 uVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  undefined *puVar9;
  CKSyncEngine *this;
  long lVar10;
  long lVar11;
  long unaff_x22;
  ID IVar12;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(long *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  FUN_1000d468c(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar10 = unaff_x22 + 0x40;
  FUN_100004640(lVar10,uVar5);
  FUN_1000d4dd4(0xd000000000000025,0x8000000100da4ab0,uVar5,uVar1,lVar10);
  FUN_100004594(unaff_x22 + 0x40);
  _swift_getKeyPath(&DAT_100c44390);
  _swift_getKeyPath(&DAT_100c443b8);
  *(undefined1 *)(unaff_x22 + 0xb0) = 0;
  _swift_retain();
  FUN_1002cb5a0((undefined1 *)(unaff_x22 + 0xb0));
  FUN_1003b1940();
  puVar9 = *(undefined **)(unaff_x20 + _TtC9PasteCore10SyncEngine::contextChangesTask);
  if (puVar9 != (undefined *)0x0) {
    TVar4.unknown = puVar9;
    _swift_retain();
    Swift::Task::cancel(TVar4);
    _swift_release(puVar9);
  }
  lVar10 = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  *(long *)(unaff_x22 + 0x80) = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  this = *(CKSyncEngine **)(unaff_x20 + lVar10);
  *(CKSyncEngine **)(unaff_x22 + 0x88) = this;
  lVar2 = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  if (this == (CKSyncEngine *)0x0) {
    lVar11 = *(long *)(unaff_x22 + 0x78);
    *(long *)(unaff_x22 + 0x98) = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
    this = *(CKSyncEngine **)(lVar11 + lVar2);
    *(CKSyncEngine **)(unaff_x22 + 0xa0) = this;
    if (this == (CKSyncEngine *)0x0) {
      uVar5 = *(undefined8 *)(lVar11 + lVar10);
      *(undefined8 *)(lVar11 + lVar10) = 0;
      _swift_release(uVar5);
      uVar5 = *(undefined8 *)(lVar11 + lVar2);
      *(undefined8 *)(lVar11 + lVar2) = 0;
      _swift_release(uVar5);
      lVar10 = lVar11 + _TtC9PasteCore10SyncEngine::persistentStack;
      IVar12 = *(ID *)(lVar10 + 0x18);
      lVar2 = *(long *)(lVar10 + 0x20);
      FUN_100004640(lVar10,IVar12);
      (**(code **)(lVar2 + 0x18))(IVar12,lVar2);
      puVar9 = &DAT_100ece2e8;
      _swift_allocObject(&DAT_100ece2e8,0x20,7);
      *(ID *)(puVar9 + 0x10) = IVar12;
      *(long *)(puVar9 + 0x18) = lVar11;
      puVar6 = &DAT_100ece310;
      _swift_allocObject(&DAT_100ece310,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1003a9cf4;
      *(undefined **)(puVar6 + 0x18) = puVar9;
      *(code **)(unaff_x22 + 0x30) = FUN_100209b34;
      *(undefined **)(unaff_x22 + 0x38) = puVar6;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_1000d5218;
      *(undefined **)(unaff_x22 + 0x28) = &DAT_100ece328;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
      uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
      _swift_retain(lVar11);
      _swift_retain(puVar6);
      _swift_release(uVar5);
      objc_stub::performBlockAndWait_(IVar12,aBlock);
      __Block_release(aBlock);
      puVar7 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0x9a,0x10f,0x20,1);
      _swift_release(puVar6);
      if (((ulong)puVar7 & 1) == 0) {
        lVar10 = *(long *)(unaff_x22 + 0x78);
        FUN_100395ff8(0x6e79537465736572,0xe900000000000063,IVar12,1);
        FUN_1003b2cd4();
        IVar12 = *(ID *)(lVar10 + _TtC9PasteCore10SyncEngine::syncLock);
        objc_stub::lock(IVar12);
        *(undefined1 *)(lVar10 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 0;
        objc_stub::unlock(IVar12);
        _swift_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x0001003a880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003a8814);
      (*pcVar3)();
    }
    plVar8 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar8;
    pcVar3 = FUN_1003a8ad4;
  }
  else {
    plVar8 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar8;
    pcVar3 = FUN_1003a8814;
  }
  *plVar8 = unaff_x22;
  plVar8[1] = (long)pcVar3;
  CloudKit::CKSyncEngine::_cancelOperations(this);
  return;
}



/* Address: 0x1003a8814 | FUN_1003a8814 */

void FUN_1003a8814(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x88);
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x90));
  _swift_release(uVar1);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1003a8884,uVar2,uVar3);
  return;
}



/* Address: 0x1003a8884 | FUN_1003a8884 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a8884(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long *plVar7;
  CKSyncEngine *this;
  long lVar8;
  long lVar9;
  long unaff_x22;
  ID IVar10;
  
  lVar8 = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  lVar9 = *(long *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x98) = _TtC9PasteCore10SyncEngine::sharedSyncEngine;
  this = *(CKSyncEngine **)(lVar9 + lVar8);
  *(CKSyncEngine **)(unaff_x22 + 0xa0) = this;
  if (this != (CKSyncEngine *)0x0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__cancelOperations_100ea9230 + 4);
    _swift_retain(this);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1003a8ad4;
    CloudKit::CKSyncEngine::_cancelOperations(this);
    return;
  }
  uVar3 = *(undefined8 *)(lVar9 + *(long *)(unaff_x22 + 0x80));
  *(undefined8 *)(lVar9 + *(long *)(unaff_x22 + 0x80)) = 0;
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(lVar9 + lVar8);
  *(undefined8 *)(lVar9 + lVar8) = 0;
  _swift_release(uVar3);
  lVar8 = lVar9 + _TtC9PasteCore10SyncEngine::persistentStack;
  IVar10 = *(ID *)(lVar8 + 0x18);
  lVar1 = *(long *)(lVar8 + 0x20);
  FUN_100004640(lVar8,IVar10);
  (**(code **)(lVar1 + 0x18))(IVar10,lVar1);
  puVar4 = &DAT_100ece2e8;
  _swift_allocObject(&DAT_100ece2e8,0x20,7);
  *(ID *)(puVar4 + 0x10) = IVar10;
  *(long *)(puVar4 + 0x18) = lVar9;
  puVar5 = &DAT_100ece310;
  _swift_allocObject(&DAT_100ece310,0x20,7);
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
  *(code **)(puVar5 + 0x10) = FUN_1003a9cf4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(unaff_x22 + 0x30) = FUN_100209b34;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000d5218;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100ece328;
  aBlock = __Block_copy((undefined8 *)(unaff_x22 + 0x10));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_retain(lVar9);
  _swift_retain(puVar5);
  _swift_release(uVar3);
  objc_stub::performBlockAndWait_(IVar10,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x9a,0x10f,0x20,1);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x78);
    FUN_100395ff8(0x6e79537465736572,0xe900000000000063,IVar10,1);
    FUN_1003b2cd4();
    IVar10 = *(ID *)(lVar8 + _TtC9PasteCore10SyncEngine::syncLock);
    objc_stub::lock(IVar10);
    *(undefined1 *)(lVar8 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 0;
    objc_stub::unlock(IVar10);
    _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0001003a8acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003a8ad4);
  (*pcVar2)();
}



/* Address: 0x1003a8ad4 | FUN_1003a8ad4 */

void FUN_1003a8ad4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0xa0);
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xa8));
  _swift_release(uVar1);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1003a8b44,uVar2,uVar3);
  return;
}



/* Address: 0x1003a8b44 | FUN_1003a8b44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a8b44(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  ID IVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x98);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(lVar1 + *(long *)(unaff_x22 + 0x80));
  *(undefined8 *)(lVar1 + *(long *)(unaff_x22 + 0x80)) = 0;
  _swift_release(uVar4);
  uVar4 = *(undefined8 *)(lVar1 + lVar8);
  *(undefined8 *)(lVar1 + lVar8) = 0;
  _swift_release(uVar4);
  lVar8 = lVar1 + _TtC9PasteCore10SyncEngine::persistentStack;
  IVar9 = *(ID *)(lVar8 + 0x18);
  lVar2 = *(long *)(lVar8 + 0x20);
  FUN_100004640(lVar8,IVar9);
  (**(code **)(lVar2 + 0x18))(IVar9,lVar2);
  puVar5 = &DAT_100ece2e8;
  _swift_allocObject(&DAT_100ece2e8,0x20,7);
  *(ID *)(puVar5 + 0x10) = IVar9;
  *(long *)(puVar5 + 0x18) = lVar1;
  puVar6 = &DAT_100ece310;
  _swift_allocObject(&DAT_100ece310,0x20,7);
  *(undefined8 *)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
  *(code **)(puVar6 + 0x10) = FUN_1003a9cf4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(code **)(unaff_x22 + 0x30) = FUN_100209b34;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000d5218;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100ece328;
  aBlock = __Block_copy((undefined8 *)(unaff_x22 + 0x10));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_retain(lVar1);
  _swift_retain(puVar6);
  _swift_release(uVar4);
  objc_stub::performBlockAndWait_(IVar9,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x9a,0x10f,0x20,1);
  _swift_release(puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x78);
    FUN_100395ff8(0x6e79537465736572,0xe900000000000063,IVar9,1);
    FUN_1003b2cd4();
    IVar9 = *(ID *)(lVar8 + _TtC9PasteCore10SyncEngine::syncLock);
    objc_stub::lock(IVar9);
    *(undefined1 *)(lVar8 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 0;
    objc_stub::unlock(IVar9);
    _swift_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0001003a8d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003a8d30);
  (*pcVar3)();
}



/* Address: 0x1003a8d30 | FUN_1003a8d30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003a8e34) */

void FUN_1003a8d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  code *pcVar1;
  _ArrayBuffer _Var2;
  ulong uVar3;
  ContiguousArray CVar4;
  undefined *puVar5;
  NSString *pNVar6;
  ID IVar7;
  ID IVar8;
  NSPredicate *pNVar9;
  undefined *puVar10;
  undefined8 uVar11;
  __int64 _Var12;
  _StringGuts _Var13;
  char *pcVar14;
  uint uVar15;
  long lVar16;
  ContiguousArray oldCount;
  _CocoaArrayWrapper _Var17;
  ulong uVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  FUN_10039333c();
  FUN_1003a2a08(param_1,FUN_100329880,FUN_10032a700);
  FUN_1003a2a08(param_1,FUN_100329890,FUN_10032a850);
  FUN_1003a2a08(param_1,FUN_100329870,FUN_10032ad90);
  uStack_88 = 0;
  local_90 = (undefined *)0x0;
  local_78 = (undefined *)0x0;
  uStack_80 = 0;
  _Var2.unknown = (undefined *)&local_90;
  FUN_10035f4a4(_Var2.unknown,param_1);
  pcVar14 = "NF\v";
  FUN_100005808(&local_90,&DAT_100fbe6f0);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var2.unknown >> 0x3e == 0) {
    lVar16 = *(long *)(((ulong)_Var2.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var17.unknown = _Var2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var2.unknown) {
      _Var17.unknown = _Var2.unknown;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
  }
  _Var17.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar16 != 0) {
    uVar18 = 0;
    do {
      if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var2.unknown & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a90d0);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(_Var2.unknown + uVar18 * 8 + 0x20);
      }
      else {
        uVar3 = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,_Var2);
      }
      lVar19 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a90cc);
        (*pcVar1)();
      }
      CVar4.unknown = (undefined *)0x0;
      FUN_1003214a8();
      SVar20 = Swift::__typeName(SUB81(CVar4.unknown,0));
      puVar5 = &_OBJC_CLASS___NSFetchRequest;
      _objc_allocWithZone();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      IVar7 = objc_stub::initWithEntityName_((ID)puVar5,pNVar6);
      puVar5 = CVar4.unknown;
      _swift_getObjCClassFromMetadata();
      IVar8 = objc_stub::FUN_100c00de0((ID)puVar5);
      objc_stub::FUN_100c0dbc0(IVar7,IVar8);
      IVar8 = objc_stub::FUN_100c00d80((ID)puVar5);
      objc_stub::setPredicate_(IVar7,IVar8);
      objc_stub::FUN_100c0bb60(IVar7,0x14);
      pNVar9 = (NSPredicate *)0x0;
      FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
      puVar5 = &DAT_100fbeb40;
      FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 4;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      puVar10 = puVar5;
      FUN_10030d9e0();
      *(undefined **)(puVar5 + 0x40) = puVar10;
      *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000011;
      *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da22a0;
      uVar11 = 0;
      FUN_100311d0c();
      *(undefined8 *)(puVar5 + 0x60) = uVar11;
      puVar10 = &DAT_100fc22b8;
      FUN_100003a00(&DAT_100fc22b8,FUN_100311d0c,
                    PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0);
      *(undefined **)(puVar5 + 0x68) = puVar10;
      *(ulong *)(puVar5 + 0x48) = uVar3;
      pNVar9 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar9);
      objc_stub::setPredicate_(IVar7,pNVar9);
      pcVar14 = &DAT_00000001;
      objc_stub::setFetchLimit_(IVar7);
      _Var12 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
      if (_Var12 == 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
        oldCount.unknown = local_90[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)oldCount.unknown,CVar4);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,uVar3);
        Swift::ContiguousArray::__endMutation(oldCount);
      }
      uVar18 = uVar18 + 1;
      _Var17.unknown = local_90;
    } while (lVar19 != lVar16);
  }
  _swift_bridgeObjectRelease(_Var2.unknown);
  uVar15 = (uint)((ulong)_Var17.unknown >> 0x3e) & 1;
  if ((long)_Var17.unknown < 0) {
    uVar15 = 1;
  }
  if (uVar15 == 1) {
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
  }
  else {
    lVar16 = *(long *)(_Var17.unknown + 0x10);
  }
  if (lVar16 != 0) {
    FUN_1000d468c(&local_90);
    puVar5 = local_78;
    _Var13.unknown = local_78;
    FUN_100004640(&local_90);
    Swift::_StringGuts::grow(0x3b,_Var13);
    SVar20.bridgeObject = (void *)0x8000000100da4ae0;
    SVar20.str = (char *)0xd000000000000016;
    SVar22.bridgeObject = param_4;
    SVar22.str = pcVar14;
    Swift::String::append(SVar20,SVar22);
    if (uVar15 != 0) {
      Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
    }
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar23.bridgeObject = param_4;
    SVar23.str = pcVar14;
    Swift::String::append(SVar20,SVar23);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar21.bridgeObject = (void *)0x8000000100da4b00;
    SVar21.str = (char *)0xd000000000000023;
    SVar24.bridgeObject = param_4;
    SVar24.str = pcVar14;
    Swift::String::append(SVar21,SVar24);
    FUN_1000d4dd4(0,0xe000000000000000,puVar5,uStack_70);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(&local_90);
    uVar18 = 0;
    do {
      if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(_Var17.unknown + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a9298);
          (*pcVar1)();
        }
        IVar7 = *(ID *)(_Var17.unknown + uVar18 * 8 + 0x20);
      }
      else {
        IVar7 = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,(_ArrayBuffer)_Var17.unknown);
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a9294);
        (*pcVar1)();
      }
      lVar19 = uVar18 + 1;
      IVar8 = objc_stub::managedObjectContext(IVar7);
      objc_stub::deleteObject_(IVar8,IVar7);
      uVar18 = uVar18 + 1;
    } while (lVar19 != lVar16);
  }
  _swift_release(_Var17.unknown);
  return;
}



/* Address: 0x1003a92d0 | FUN_1003a92d0 */

void FUN_1003a92d0(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  MainActor *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)unaff_x20;
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar2.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = unaff_x20;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ece5b8;
  _swift_allocObject(&DAT_100ece5b8,0x30,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  FUN_100364f4c(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c44448,puVar1);
  _swift_release();
  return;
}



/* Address: 0x1003a93e0 | FUN_1003a93e0 */

void FUN_1003a93e0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x68) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x70) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x78) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x80) = puVar3;
  _swift_task_switch(FUN_1003a9474,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a9474 | FUN_1003a9474 */

void FUN_1003a9474(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  plVar3 = (long *)0xd0;
  _swift_retain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1003a94ec;
  FUN_1003b29d4(uVar1,uVar2);
  return;
}



/* Address: 0x1003a94ec | FUN_1003a94ec */

void FUN_1003a94ec(byte param_1)

{
  undefined8 *puVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar12 = *unaff_x22;
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x88));
  pPVar2 = *(Published **)(lVar12 + 0x60);
  _swift_release(*(undefined8 *)(lVar12 + 0x68));
  puVar3 = &DAT_100c44348;
  _swift_getKeyPath(&DAT_100c44348);
  puVar4 = &DAT_100c44370;
  _swift_getKeyPath(&DAT_100c44370);
  if (unaff_x20 == 0) {
    *(byte *)(lVar12 + 0xa4) = param_1 & 1;
    _swift_retain(pPVar2);
    Combine::Published::_set_subscript(pPVar2,(byte *)(lVar12 + 0xa4),pPVar2,puVar3,puVar4);
    FUN_1003b15e8();
  }
  else {
    *(undefined1 *)(lVar12 + 0xa0) = 0;
    _swift_retain(pPVar2);
    Combine::Published::_set_subscript(pPVar2,(undefined1 *)(lVar12 + 0xa0),pPVar2,puVar3,puVar4);
    FUN_1003b15e8();
    _swift_errorRelease();
  }
  uVar6 = *(undefined8 *)(lVar12 + 0x60);
  puVar3 = &DAT_100c44348;
  _swift_getKeyPath(&DAT_100c44348);
  puVar4 = &DAT_100c44370;
  _swift_getKeyPath(&DAT_100c44370);
  Combine::Published::_get_subscript(lVar12 + 0xa1,uVar6,puVar3,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  lVar7 = *(long *)(lVar12 + 0x60);
  if (*(char *)(lVar12 + 0xa1) == '\x01') {
    puVar1 = (undefined8 *)(lVar7 + _TtC9PasteCore10SyncEngine::_isEnabled);
    _swift_beginAccess(puVar1,lVar12 + 0x48,0,0);
    uVar13 = puVar1[1];
    uVar6 = *puVar1;
    uVar10 = puVar1[3];
    uVar9 = puVar1[2];
    uVar14 = puVar1[5];
    uVar11 = puVar1[4];
    *(undefined8 *)(lVar12 + 0x40) = puVar1[6];
    *(undefined8 *)(lVar12 + 0x28) = uVar10;
    *(undefined8 *)(lVar12 + 0x20) = uVar9;
    *(undefined8 *)(lVar12 + 0x38) = uVar14;
    *(undefined8 *)(lVar12 + 0x30) = uVar11;
    *(undefined8 *)(lVar12 + 0x18) = uVar13;
    *(undefined8 *)(lVar12 + 0x10) = uVar6;
    uVar6 = *(undefined8 *)(lVar12 + 0x10);
    uVar13 = *(undefined8 *)(lVar12 + 0x18);
    uVar9 = *(undefined8 *)(lVar12 + 0x20);
    uVar10 = *(undefined8 *)(lVar12 + 0x30);
    uVar11 = *(undefined8 *)(lVar12 + 0x40);
    _swift_retain(uVar6);
    _swift_retain(uVar13);
    _swift_retain(uVar9);
    _swift_retain(uVar10);
    _swift_retain(uVar11);
    FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
    FUN_1002ca7e0(lVar12 + 0xa3);
    _swift_release(uVar6);
    _swift_release(uVar13);
    _swift_release(uVar9);
    _swift_release(uVar10);
    _swift_release(uVar11);
    lVar7 = *(long *)(lVar12 + 0x60);
    if ((*(char *)(lVar12 + 0xa3) == '\x01') &&
       (*(long *)(lVar7 + _TtC9PasteCore10SyncEngine::privateSyncEngine) == 0)) {
      plVar5 = (long *)0xc0;
      _swift_task_alloc();
      *(long **)(lVar12 + 0x90) = plVar5;
      *plVar5 = lVar8;
      plVar5[1] = (long)FUN_1003a97f4;
      FUN_1003a2b14();
      return;
    }
  }
  puVar3 = &DAT_100c44348;
  _swift_getKeyPath(&DAT_100c44348);
  puVar4 = &DAT_100c44370;
  _swift_getKeyPath(&DAT_100c44370);
  Combine::Published::_get_subscript(lVar12 + 0xa2,lVar7,puVar3,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  if (((*(byte *)(lVar12 + 0xa2) & 1) == 0) &&
     (*(long *)(*(long *)(lVar12 + 0x60) + _TtC9PasteCore10SyncEngine::privateSyncEngine) != 0)) {
    plVar5 = (long *)0xf0;
    _swift_task_alloc();
    *(long **)(lVar12 + 0x98) = plVar5;
    *plVar5 = lVar8;
    plVar5[1] = (long)FUN_1003a9884;
    FUN_1003a6154();
    return;
  }
  _swift_release(*(undefined8 *)(lVar12 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001003a97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}



/* Address: 0x1003a97f4 | FUN_1003a97f4 */

void FUN_1003a97f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x90));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1003a9854;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = thunk_FUN_1003a9854;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1003a9854 | FUN_1003a9854 */

void FUN_1003a9854(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001003a9880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a9884 | FUN_1003a9884 */

void FUN_1003a9884(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x98));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x78);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
  }
  else {
    _swift_errorRelease();
    uVar1 = *(undefined8 *)(lVar3 + 0x78);
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
  }
  _swift_task_switch(thunk_FUN_1003a9854,uVar1,uVar2);
  return;
}



/* Address: 0x1003a98e4 | FUN_1003a98e4 */

void FUN_1003a98e4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c44348;
  _swift_getKeyPath(&DAT_100c44348);
  puVar2 = &DAT_100c44370;
  _swift_getKeyPath(&DAT_100c44370);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1003a994c | FUN_1003a994c */

void FUN_1003a994c(void)

{
  FUN_1003a9a88();
  return;
}



/* Address: 0x1003a9970 | FUN_1003a9970 */

void FUN_1003a9970(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + _TtC9PasteCore10SyncEngine::_isEnabled);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1003a9a64 | FUN_1003a9a64 */

void FUN_1003a9a64(void)

{
  FUN_1003a9a88();
  return;
}



/* Address: 0x1003a9a88 | FUN_1003a9a88 */

void FUN_1003a9a88(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,code *param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_41;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_41 = uVar1;
  _swift_retain(uVar2);
  (*param_7)(&local_41,uVar2,param_5,param_6);
  (*param_8)();
  return;
}



/* Address: 0x1003a9b0c | thunk_FUN_1003b1f24 */

void thunk_FUN_1003b1f24(void)

{
  FUN_1003b1f24();
  return;
}



/* Address: 0x1003a9b10 | thunk_FUN_1003b1f90 */

void thunk_FUN_1003b1f90(void)

{
  FUN_1003b1f90();
  return;
}



/* Address: 0x1003a9b14 | thunk_FUN_1003a98e4 */

void thunk_FUN_1003a98e4(void)

{
  FUN_1003a98e4();
  return;
}



/* Address: 0x1003a9b18 | FUN_1003a9b18 */

void FUN_1003a9b18(void)

{
  FUN_1003a9a88();
  return;
}



/* Address: 0x1003a9b4c | thunk_FUN_1003a9970 */

void thunk_FUN_1003a9970(void)

{
  FUN_1003a9970();
  return;
}



/* Address: 0x1003a9b50 | FUN_1003a9b50 */

void FUN_1003a9b50(void)

{
  FUN_1003a9a88();
  return;
}



/* Address: 0x1003a9b84 | FUN_1003a9b84 */

undefined8 FUN_1003a9b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc22a0;
  FUN_1000037f0(&DAT_100fc22a0,&DAT_100c442f8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003a9bd4 | FUN_1003a9bd4 */

void FUN_1003a9bd4(void)

{
  FUN_1003aa0a4(0x28);
  return;
}



/* Address: 0x1003a9bdc | FUN_1003a9bdc */

void FUN_1003a9bdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1003a45e4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1003a9c48 | FUN_1003a9c48 */

void FUN_1003a9c48(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9c6c | FUN_1003a9c6c */

void FUN_1003a9c6c(undefined8 param_1)

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
  plVar5 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1003a6ae4(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003a9ce4 | FUN_1003a9ce4 */

void FUN_1003a9ce4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003a5940(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003a9cf0 | thunk_FUN_1003aa068 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1003aa068(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9cf4 | FUN_1003a9cf4 */

void FUN_1003a9cf4(void)

{
  long unaff_x20;
  
  FUN_1003a8d30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


