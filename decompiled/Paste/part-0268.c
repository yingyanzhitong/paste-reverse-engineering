/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10033f2c8 | FUN_10033f2c8 */

void FUN_10033f2c8(void)

{
  _swift_task_switch(FUN_10033f2dc,0,0);
  return;
}



/* Address: 0x10033f2dc | FUN_10033f2dc */

void FUN_10033f2dc(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x2b0) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x2b8) = pMVar1;
  FUN_10033d98c();
  *(MainActor **)(unaff_x22 + 0x2c0) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10033f34c,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x10033f34c | FUN_10033f34c */

void FUN_10033f34c(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  MainActor *this;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c0);
  pMVar2 = *(MainActor **)(unaff_x22 + 0x2b8);
  this = *(MainActor **)(unaff_x22 + 0x2b0);
  _swift_release();
  pMVar2 = Swift::MainActor::get_shared(this,pMVar2);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/V5MigrationManager+Applications.swift",0x2f,1,0x31,UVar3.unknown,uVar6);
  }
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x298) + 0x10);
  IVar5 = objc_stub::completedUnitCount(*(ID *)(unaff_x22 + 0x1c0));
  if (!SCARRY8(IVar5,lVar7)) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
    objc_stub::setCompletedUnitCount_(*(ID *)(unaff_x22 + 0x1c0),IVar5 + lVar7);
    _swift_release(pMVar2);
    _swift_bridgeObjectRelease(uVar6);
    _swift_task_switch(FUN_10033f418,*(undefined8 *)(unaff_x22 + 0x288),
                       *(undefined8 *)(unaff_x22 + 0x290));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10033f418);
  (*pcVar1)();
}



/* Address: 0x10033f418 | FUN_10033f418 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033f418(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  
  pcVar7 = *(code **)(unaff_x22 + 0x268);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  puVar2 = &DAT_100ecbd38;
  _swift_allocObject(&DAT_100ecbd38,0x18,7);
  *(undefined **)(unaff_x22 + 0x2c8) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  (*pcVar7)(uVar5,uVar1,uVar6);
  plVar4 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2d0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10033f4e0;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar4);
  return;
}



/* Address: 0x10033f4e0 | FUN_10033f4e0 */

void FUN_10033f4e0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x2d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2d0));
  uVar3 = *(undefined8 *)(lVar4 + 0x2c8);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x280))(*(undefined8 *)(lVar4 + 0x208),*(undefined8 *)(lVar4 + 0x1d0));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_10033f570;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_10033fd04;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x10033f570 | FUN_10033f570 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033f570(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar5 = *(code **)(unaff_x22 + 0x268);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x378);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  FUN_1000da768(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  FUN_100004640(unaff_x22 + 0x88,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd000000000000021,0x8000000100da2700,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x88);
  FUN_1000da768(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xd0);
  FUN_100004640(unaff_x22 + 0xb0,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001a,0x8000000100da2730,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0xb0);
  puVar4 = &DAT_100ecbd60;
  _swift_allocObject(&DAT_100ecbd60,0x18,7);
  *(undefined **)(unaff_x22 + 0x2e0) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  (*pcVar5)(uVar9,uVar3,uVar8);
  plVar7 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e8) = plVar7;
  FUN_1000037f0(&DAT_100fc0398,&DAT_100c42200);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10033f734;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + -0x58));
  return;
}



/* Address: 0x10033f734 | FUN_10033f734 */

void FUN_10033f734(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x2f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2e8));
  uVar3 = *(undefined8 *)(lVar4 + 0x2e0);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x280))(*(undefined8 *)(lVar4 + 0x200),*(undefined8 *)(lVar4 + 0x1d0));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_10033f7c4;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_10033f940;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x10033f7c4 | FUN_10033f7c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033f7c4(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  pcVar8 = *(code **)(unaff_x22 + 0x268);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar7;
  puVar2 = &DAT_100ecbd88;
  _swift_allocObject(&DAT_100ecbd88,0x20,7);
  *(undefined **)(unaff_x22 + 0x300) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  (*pcVar8)(uVar5,uVar1,uVar6);
  plVar4 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_bridgeObjectRetain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x308) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10033f8a4;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar4);
  return;
}



/* Address: 0x10033f8a4 | FUN_10033f8a4 */

void FUN_10033f8a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  undefined8 uVar3;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x308));
  uVar1 = *(undefined8 *)(lVar2 + 0x300);
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
    _swift_errorRelease();
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  (**(code **)(lVar2 + 0x280))(*(undefined8 *)(lVar2 + 0x1f8),*(undefined8 *)(lVar2 + 0x1d0));
  _swift_release(uVar1);
  _swift_task_switch(FUN_10033fa64,*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
  return;
}



/* Address: 0x10033f940 | FUN_10033f940 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033f940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(unaff_x22 + 0x280))
            (*(undefined8 *)(unaff_x22 + 0x200),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010033fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}



/* Address: 0x10033fa64 | FUN_10033fa64 */

void FUN_10033fa64(void)

{
  _swift_task_switch(FUN_10033fa78,0,0);
  return;
}



/* Address: 0x10033fa78 | FUN_10033fa78 */

void FUN_10033fa78(MainActor *param_1)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2c0);
  pMVar1 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x2b0),param_1);
  *(MainActor **)(unaff_x22 + 0x310) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10033fae0,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x10033fae0 | FUN_10033fae0 */

void FUN_10033fae0(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  MainActor *this;
  long unaff_x22;
  
  pMVar2 = *(MainActor **)(unaff_x22 + 0x310);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c0);
  this = *(MainActor **)(unaff_x22 + 0x2b0);
  _swift_release();
  pMVar2 = Swift::MainActor::get_shared(this,pMVar2);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/V5MigrationManager+Devices.swift",0x2a,1,0x2c,UVar3.unknown,uVar6);
  }
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x2f8) + 0x10);
  IVar5 = objc_stub::completedUnitCount(*(ID *)(unaff_x22 + 0x1c0));
  if (!SCARRY8(IVar5,lVar7)) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2f8);
    objc_stub::setCompletedUnitCount_(*(ID *)(unaff_x22 + 0x1c0),IVar5 + lVar7);
    _swift_release(pMVar2);
    _swift_bridgeObjectRelease(uVar6);
    _swift_task_switch(FUN_10033fbac,*(undefined8 *)(unaff_x22 + 0x288),
                       *(undefined8 *)(unaff_x22 + 0x290));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10033fbac);
  (*pcVar1)();
}



/* Address: 0x10033fbac | FUN_10033fbac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033fbac(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  
  pcVar7 = *(code **)(unaff_x22 + 0x268);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  puVar2 = &DAT_100ecbdb0;
  _swift_allocObject(&DAT_100ecbdb0,0x18,7);
  *(undefined **)(unaff_x22 + 0x318) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  (*pcVar7)(uVar5,uVar1,uVar6);
  plVar4 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 800) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10033fc74;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar4);
  return;
}



/* Address: 0x10033fc74 | FUN_10033fc74 */

void FUN_10033fc74(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x328) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 800));
  uVar3 = *(undefined8 *)(lVar4 + 0x318);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x280))(*(undefined8 *)(lVar4 + 0x1f0),*(undefined8 *)(lVar4 + 0x1d0));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_10033fe28;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_1003401d4;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x10033fd04 | FUN_10033fd04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033fd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(unaff_x22 + 0x280))
            (*(undefined8 *)(unaff_x22 + 0x208),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010033fe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}



/* Address: 0x10033fe28 | FUN_10033fe28 */

void FUN_10033fe28(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x1b8);
  FUN_1000da768(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  FUN_100004640(unaff_x22 + 0xd8,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001c,0x8000000100da2780,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0xd8);
  FUN_1000da768(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar2 = *(long *)(unaff_x22 + 0x120);
  FUN_100004640(unaff_x22 + 0x100,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd000000000000018,0x8000000100da27a0,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x100);
  plVar3 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x330) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10033ff68;
  FUN_10033c7c8(*(undefined8 *)(unaff_x22 + 0x1b0),uVar4 & 0xcfffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x240),
                *(undefined8 *)(unaff_x22 + 0x1c0));
  return;
}



/* Address: 0x10033ff68 | FUN_10033ff68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033ff68(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar7 = *unaff_x22;
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x330));
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(lVar7 + 0x230);
    FUN_1003428f8(*(undefined8 *)(lVar7 + 0x1c8));
    FUN_10001f62c();
    _swift_errorRelease();
    uVar10 = *(undefined8 *)(lVar7 + 0x230);
    uVar12 = *(undefined8 *)(lVar7 + 0x218);
    uVar13 = *(undefined8 *)(lVar7 + 0x210);
    uVar16 = *(undefined8 *)(lVar7 + 0x208);
    uVar5 = *(undefined8 *)(lVar7 + 0x1f8);
    uVar11 = *(undefined8 *)(lVar7 + 0x200);
    uVar9 = *(undefined8 *)(lVar7 + 0x1e8);
    uVar1 = *(undefined8 *)(lVar7 + 0x1f0);
    uVar8 = *(undefined8 *)(lVar7 + 0x1e0);
    (**(code **)(*(long *)(lVar7 + 0x228) + 8))(uVar10,*(undefined8 *)(lVar7 + 0x220));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010034008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(uVar3,unaff_x20,param_3);
    return;
  }
  pcVar14 = *(code **)(lVar7 + 0x268);
  uVar2 = *(undefined4 *)(lVar7 + 0x378);
  uVar5 = *(undefined8 *)(lVar7 + 0x240);
  uVar9 = *(undefined8 *)(lVar7 + 0x1e8);
  uVar11 = *(undefined8 *)(lVar7 + 0x1d0);
  puVar4 = &DAT_100ecbdd8;
  _swift_allocObject(&DAT_100ecbdd8,0x18,7);
  *(undefined **)(lVar7 + 0x338) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  (*pcVar14)(uVar9,uVar2,uVar11);
  plVar6 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(lVar7 + 0x340) = plVar6;
  *plVar6 = lVar15;
  plVar6[1] = (long)FUN_100340144;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar6);
  return;
}



/* Address: 0x100340144 | FUN_100340144 */

void FUN_100340144(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x348) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x340));
  uVar3 = *(undefined8 *)(lVar4 + 0x338);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x280))(*(undefined8 *)(lVar4 + 0x1e8),*(undefined8 *)(lVar4 + 0x1d0));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_1003402f8;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_1003406c0;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1003401d4 | FUN_1003401d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003401d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(unaff_x22 + 0x280))
            (*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001003402f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}



/* Address: 0x1003402f8 | FUN_1003402f8 */

void FUN_1003402f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x1b8);
  FUN_1000da768(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  FUN_100004640(unaff_x22 + 0x128,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001a,0x8000000100da27c0,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x128);
  FUN_1000da768(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x170);
  FUN_100004640(unaff_x22 + 0x150,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd000000000000018,0x8000000100da27e0,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x150);
  plVar3 = (long *)0x3b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x350) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100340454;
  FUN_100337194(*(undefined8 *)(unaff_x22 + 0x1b0),uVar4 & 0xcfffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0x250),*(undefined8 *)(unaff_x22 + 0x240),
                *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x230));
  return;
}



/* Address: 0x100340454 | FUN_100340454 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100340454(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar7 = *unaff_x22;
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x350));
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(lVar7 + 0x230);
    FUN_1003428f8(*(undefined8 *)(lVar7 + 0x1c8));
    FUN_10001f62c();
    _swift_errorRelease();
    uVar10 = *(undefined8 *)(lVar7 + 0x230);
    uVar12 = *(undefined8 *)(lVar7 + 0x218);
    uVar13 = *(undefined8 *)(lVar7 + 0x210);
    uVar16 = *(undefined8 *)(lVar7 + 0x208);
    uVar5 = *(undefined8 *)(lVar7 + 0x1f8);
    uVar11 = *(undefined8 *)(lVar7 + 0x200);
    uVar9 = *(undefined8 *)(lVar7 + 0x1e8);
    uVar1 = *(undefined8 *)(lVar7 + 0x1f0);
    uVar8 = *(undefined8 *)(lVar7 + 0x1e0);
    (**(code **)(*(long *)(lVar7 + 0x228) + 8))(uVar10,*(undefined8 *)(lVar7 + 0x220));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100340578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(uVar3,unaff_x20,param_3);
    return;
  }
  pcVar14 = *(code **)(lVar7 + 0x268);
  uVar2 = *(undefined4 *)(lVar7 + 0x378);
  uVar5 = *(undefined8 *)(lVar7 + 0x240);
  uVar9 = *(undefined8 *)(lVar7 + 0x1e0);
  uVar11 = *(undefined8 *)(lVar7 + 0x1d0);
  puVar4 = &DAT_100ecbe00;
  _swift_allocObject(&DAT_100ecbe00,0x18,7);
  *(undefined **)(lVar7 + 0x358) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  (*pcVar14)(uVar9,uVar2,uVar11);
  plVar6 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(lVar7 + 0x360) = plVar6;
  *plVar6 = lVar15;
  plVar6[1] = (long)FUN_100340630;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar6);
  return;
}



/* Address: 0x100340630 | FUN_100340630 */

void FUN_100340630(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x368) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x360));
  uVar3 = *(undefined8 *)(lVar4 + 0x358);
  if (unaff_x20 == 0) {
    (**(code **)(lVar4 + 0x280))(*(undefined8 *)(lVar4 + 0x1e0),*(undefined8 *)(lVar4 + 0x1d0));
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_1003407e4;
  }
  else {
    _swift_release(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0x290);
    uVar3 = *(undefined8 *)(lVar4 + 0x288);
    pcVar1 = FUN_1003409b0;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1003406c0 | FUN_1003406c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003406c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(unaff_x22 + 0x280))
            (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001003407e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}



/* Address: 0x1003407e4 | FUN_1003407e4 */

void FUN_1003407e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x1b8);
  FUN_1000da768(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x198);
  FUN_100004640(unaff_x22 + 0x178,uVar1);
  (**(code **)(lVar2 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001a,0x8000000100da2800,uVar1,lVar2
            );
  FUN_100004594(unaff_x22 + 0x178);
  plVar3 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x370) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1003408b0;
  FUN_1003415e0(*(undefined8 *)(unaff_x22 + 0x1b0),uVar4 & 0xcfffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0x230));
  return;
}



/* Address: 0x1003408b0 | FUN_1003408b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003408b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *unaff_x22;
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x370));
  uVar8 = *(undefined8 *)(lVar5 + 0x230);
  uVar9 = *(undefined8 *)(lVar5 + 0x218);
  uVar10 = *(undefined8 *)(lVar5 + 0x210);
  uVar11 = *(undefined8 *)(lVar5 + 0x208);
  uVar1 = *(undefined8 *)(lVar5 + 0x1f8);
  uVar3 = *(undefined8 *)(lVar5 + 0x200);
  uVar2 = *(undefined8 *)(lVar5 + 0x1e8);
  uVar4 = *(undefined8 *)(lVar5 + 0x1f0);
  uVar6 = *(undefined8 *)(lVar5 + 0x1e0);
  (**(code **)(*(long *)(lVar5 + 0x228) + 8))(uVar8,*(undefined8 *)(lVar5 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001003409ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(param_1,param_2,param_3);
  return;
}



/* Address: 0x1003409b0 | FUN_1003409b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003409b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(unaff_x22 + 0x280))
            (*(undefined8 *)(unaff_x22 + 0x1e0),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100340ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}



/* Address: 0x100340ad4 | FUN_100340ad4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100340ad4(undefined8 param_1,undefined8 param_2)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = CVar1.unknown;
  lVar5 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  puVar3 = &DAT_100ecbf08;
  _swift_allocObject(&DAT_100ecbf08,0x18,7);
  *(undefined **)(unaff_x22 + 0x120) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  plVar4 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100340bbc;
  FUN_1003300a4(0x404e000000000000,param_1,param_2,&DAT_100c42300,puVar3);
  return;
}



/* Address: 0x100340bbc | FUN_100340bbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100340bbc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSString *pNVar6;
  NSDictionary *pNVar7;
  _StringGuts _Var8;
  char *pcVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *unaff_x22;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  
  lVar14 = *unaff_x22;
  uVar10 = *(undefined8 *)(lVar14 + 0x120);
  lVar11 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x128));
  _swift_release(uVar10);
  if (unaff_x20 != 0) {
    uVar10 = *(undefined8 *)(lVar14 + 0x118);
    pvVar12 = *(void **)(lVar14 + 0x108);
    *(long *)(lVar14 + 0xf0) = unaff_x20;
    _swift_errorRetain();
    puVar5 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    _swift_dynamicCast(uVar10,lVar14 + 0xf0,puVar5,pvVar12,0);
    if ((int)uVar10 == 0) {
      _swift_errorRelease(*(undefined8 *)(lVar14 + 0xf0));
      FUN_1000da768(lVar14 + 0x60);
      puVar5 = *(undefined **)(lVar14 + 0x78);
      lVar1 = *(long *)(lVar14 + 0x80);
      _Var8.unknown = puVar5;
      FUN_100004640(lVar14 + 0x60);
      Swift::_StringGuts::grow(0x1d,_Var8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar9 = (char *)(lVar14 + 0xd8);
      _swift_getErrorValue();
      SVar15 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar16.bridgeObject = pvVar12;
      SVar16.str = pcVar9;
      Swift::String::append(SVar15,SVar16);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      (**(code **)(lVar1 + 0x30))
                (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001b,0x8000000100da2990,puVar5,
                 lVar1);
      _swift_bridgeObjectRelease(0x8000000100da2990);
      FUN_100004594(lVar14 + 0x60);
      _swift_willThrow();
    }
    else {
      lVar1 = *(long *)(lVar14 + 0x110);
      uVar13 = *(undefined8 *)(lVar14 + 0x118);
      uVar2 = *(undefined8 *)(lVar14 + 0x108);
      _swift_errorRelease();
      FUN_1000da768(lVar14 + 0x88);
      uVar10 = *(undefined8 *)(lVar14 + 0xa0);
      lVar3 = *(long *)(lVar14 + 0xa8);
      FUN_100004640(lVar14 + 0x88,uVar10);
      (**(code **)(lVar3 + 0x30))
                (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001c,0x8000000100da29b0,uVar10,
                 lVar3);
      FUN_100004594(lVar14 + 0x88);
      puVar5 = &DAT_100fbf9d8;
      FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(char **)(puVar5 + 0x20) = SVar15.str;
      *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(void **)(puVar5 + 0x28) = SVar15.bridgeObject;
      *(undefined8 *)(puVar5 + 0x30) = 0xd00000000000001c;
      *(undefined8 *)(puVar5 + 0x38) = 0x8000000100da29b0;
      puVar4 = puVar5;
      FUN_1003c8f44(puVar5);
      _swift_setDeallocating(puVar5);
      FUN_10031bc4c(puVar5 + 0x20);
      puVar5 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar4);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar5,pNVar6,0xffffffffffffffff,pNVar7);
      _swift_willThrow(0);
      (**(code **)(lVar1 + 8))(uVar13,uVar2);
      _swift_errorRelease(*(undefined8 *)(lVar14 + 0xf0));
    }
    _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x000100340f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 8))();
    return;
  }
  uVar13 = *(undefined8 *)(lVar14 + 0x118);
  FUN_1000da768(lVar14 + 0xb0);
  uVar10 = *(undefined8 *)(lVar14 + 200);
  lVar1 = *(long *)(lVar14 + 0xd0);
  FUN_100004640(lVar14 + 0xb0,uVar10);
  (**(code **)(lVar1 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001e,0x8000000100da29d0,uVar10,
             lVar1);
  FUN_100004594(lVar14 + 0xb0);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100340e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))(param_1);
  return;
}



/* Address: 0x100340f9c | FUN_100340f9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100340f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf8) = CVar1.unknown;
  lVar5 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x100) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  puVar3 = &DAT_100ecbeb8;
  _swift_allocObject(&DAT_100ecbeb8,0x20,7);
  *(undefined **)(unaff_x22 + 0x110) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  plVar4 = (long *)0x1a0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100341098;
  FUN_100330414(0x405e000000000000,param_1,param_2,&UNK_100c422d8,puVar3);
  return;
}



/* Address: 0x100341098 | FUN_100341098 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100341098(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSString *pNVar5;
  NSDictionary *pNVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  lVar14 = *unaff_x22;
  uVar10 = *(undefined8 *)(lVar14 + 0x110);
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x118));
  _swift_release(uVar10);
  lVar1 = _TtC9PasteCore18V5MigrationManager::totalItems;
  if (unaff_x20 != 0) {
    uVar10 = *(undefined8 *)(lVar14 + 0x108);
    uVar11 = *(undefined8 *)(lVar14 + 0xf8);
    *(long *)(lVar14 + 200) = unaff_x20;
    _swift_errorRetain();
    puVar4 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    _swift_dynamicCast(uVar10,lVar14 + 200,puVar4,uVar11,0);
    if ((int)uVar10 != 0) {
      lVar1 = *(long *)(lVar14 + 0x100);
      uVar11 = *(undefined8 *)(lVar14 + 0x108);
      uVar2 = *(undefined8 *)(lVar14 + 0xf8);
      _swift_errorRelease();
      FUN_1000da768(lVar14 + 0x60);
      uVar10 = *(undefined8 *)(lVar14 + 0x78);
      lVar13 = *(long *)(lVar14 + 0x80);
      FUN_100004640(lVar14 + 0x60,uVar10);
      (**(code **)(lVar13 + 0x30))
                (0x6f6974617267696d,0xe90000000000006e,0xd000000000000019,0x8000000100da28e0,uVar10,
                 lVar13);
      FUN_100004594(lVar14 + 0x60);
      puVar4 = &DAT_100fbf9d8;
      FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(char **)(puVar4 + 0x20) = SVar15.str;
      *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(void **)(puVar4 + 0x28) = SVar15.bridgeObject;
      *(undefined8 *)(puVar4 + 0x30) = 0xd000000000000019;
      *(undefined8 *)(puVar4 + 0x38) = 0x8000000100da28e0;
      puVar3 = puVar4;
      FUN_1003c8f44(puVar4);
      _swift_setDeallocating(puVar4);
      FUN_10031bc4c(puVar4 + 0x20);
      puVar4 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar4,pNVar5,0xfffffffffffffffe,pNVar6);
      _swift_willThrow(0);
      (**(code **)(lVar1 + 8))(uVar11,uVar2);
    }
    uVar10 = *(undefined8 *)(lVar14 + 0x108);
    _swift_errorRelease(*(undefined8 *)(lVar14 + 200));
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001003412f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 8))();
    return;
  }
  lVar13 = *(long *)(lVar14 + 0xf0);
  *(long *)(lVar14 + 0x120) = _TtC9PasteCore18V5MigrationManager::totalItems;
  pcVar8 = &DAT_00000001;
  pvVar9 = (void *)0x0;
  _swift_beginAccess(lVar13 + lVar1,lVar14 + 0xb0);
  *(undefined8 *)(lVar13 + lVar1) = param_1;
  FUN_1000da768(lVar14 + 0x88);
  puVar4 = *(undefined **)(lVar14 + 0xa0);
  lVar12 = *(long *)(lVar14 + 0xa8);
  _Var7.unknown = puVar4;
  FUN_100004640(lVar14 + 0x88);
  Swift::_StringGuts::grow(0x1d,_Var7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(lVar14 + 0xd0) = *(undefined8 *)(lVar13 + lVar1);
  SVar15 = Swift::CustomStringConvertible::get_description();
  SVar16.bridgeObject = pvVar9;
  SVar16.str = pcVar8;
  Swift::String::append(SVar15,SVar16);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar15.bridgeObject = &DAT_e800000000000000;
  SVar15.str = (char *)0x7364726f63657220;
  SVar17.bridgeObject = pvVar9;
  SVar17.str = pcVar8;
  Swift::String::append(SVar15,SVar17);
  (**(code **)(lVar12 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd000000000000013,0x8000000100da2900,puVar4,
             lVar12);
  _swift_bridgeObjectRelease(0x8000000100da2900);
  FUN_100004594(lVar14 + 0x88);
  _swift_task_switch(FUN_10034144c,0,0);
  return;
}



/* Address: 0x10034144c | FUN_10034144c */

void FUN_10034144c(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x128) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x130) = pMVar1;
  FUN_10033d98c();
  *(MainActor **)(unaff_x22 + 0x138) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003414bc,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1003414bc | FUN_1003414bc */

void FUN_1003414bc(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  MainActor *this;
  undefined8 uVar8;
  long unaff_x22;
  
  pMVar2 = *(MainActor **)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  this = *(MainActor **)(unaff_x22 + 0x128);
  _swift_release();
  pMVar2 = Swift::MainActor::get_shared(this,pMVar2);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/V5MigrationManager.swift",0x22,1,0x6a,UVar3.unknown,uVar5);
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xf0) + *(long *)(unaff_x22 + 0x120));
  if (!SCARRY8(lVar6,1)) {
    IVar7 = *(ID *)(unaff_x22 + 0xe8);
    objc_stub::setTotalUnitCount_(IVar7,lVar6 + 1);
    IVar7 = objc_stub::completedUnitCount(IVar7);
    if (!SCARRY8(IVar7,1)) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      objc_stub::setCompletedUnitCount_(*(ID *)(unaff_x22 + 0xe8),IVar7 + 1);
      _swift_release(pMVar2);
      FUN_1000da368(uVar8,uVar5);
      _swift_task_switch(FUN_1003415ac,uVar8,uVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003415ac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003415a8);
  (*pcVar1)();
}



/* Address: 0x1003415ac | FUN_1003415ac */

void FUN_1003415ac(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x0001003415dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003415e0 | FUN_1003415e0 */

/* WARNING: Removing unreachable block (ram,0x000100341960) */

void FUN_1003415e0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  Date DVar2;
  ulong uVar3;
  URL UVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  long *plVar9;
  _StringGuts _Var10;
  URL UVar11;
  char *pcVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  long unaff_x22;
  long lVar18;
  code *pcVar19;
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
  String separator;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(long *)(unaff_x22 + 0x120) = unaff_x20;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x128) = DVar2.unknown;
  lVar14 = *(long *)(DVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x130) = lVar14;
  uVar3 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  uVar3 = *(long *)(lVar18 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar5;
  uVar6 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar6;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar1 = _TtC9PasteCore18V5MigrationManager::errors;
  *(ulong *)(unaff_x22 + 0x150) = uVar3;
  *(long *)(unaff_x22 + 0x158) = lVar1;
  _swift_beginAccess(unaff_x20 + lVar1,unaff_x22 + 0x88,0,0);
  lVar14 = _TtC9PasteCore18V5MigrationManager::totalItems;
  lVar17 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  *(long *)(unaff_x22 + 0x160) = _TtC9PasteCore18V5MigrationManager::totalItems;
  UVar11.unknown = (undefined *)0x0;
  pvVar13 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + lVar14,unaff_x22 + 0xa0);
  lVar15 = *(long *)(unaff_x20 + lVar14) * 10;
  if (SUB168(SEXT816(*(long *)(unaff_x20 + lVar14)) * SEXT816(10),8) == lVar15 >> 0x3f) {
    if (lVar15 / 100 < lVar17) {
      pcVar7 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _Var10.unknown = (undefined *)0x40;
      pcVar12 = (char *)0x7;
      _swift_allocObject();
      pcVar7[0x18] = '\x02';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      pcVar7[0x1c] = '\0';
      pcVar7[0x1d] = '\0';
      pcVar7[0x1e] = '\0';
      pcVar7[0x1f] = '\0';
      pcVar7[0x10] = '\x01';
      pcVar7[0x11] = '\0';
      pcVar7[0x12] = '\0';
      pcVar7[0x13] = '\0';
      pcVar7[0x14] = '\0';
      pcVar7[0x15] = '\0';
      pcVar7[0x16] = '\0';
      pcVar7[0x17] = '\0';
      Swift::_StringGuts::grow(0x3d,_Var10);
      SVar20.bridgeObject = (void *)0x8000000100da2820;
      SVar20.str = (char *)0xd00000000000001b;
      SVar26.bridgeObject = pvVar13;
      SVar26.str = pcVar12;
      Swift::String::append(SVar20,SVar26);
      *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(*(long *)(unaff_x20 + lVar1) + 0x10);
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar27.bridgeObject = pvVar13;
      SVar27.str = pcVar12;
      Swift::String::append(SVar21,SVar27);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = (char *)0x2f;
      SVar28.bridgeObject = pvVar13;
      SVar28.str = pcVar12;
      Swift::String::append(SVar22,SVar28);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x20 + lVar14);
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar29.bridgeObject = pvVar13;
      SVar29.str = pcVar12;
      Swift::String::append(SVar21,SVar29);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar23.bridgeObject = (void *)0x8000000100da2840;
      SVar23.str = (char *)0xd00000000000001d;
      SVar30.bridgeObject = pvVar13;
      SVar30.str = pcVar12;
      Swift::String::append(SVar23,SVar30);
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar7[0x20] = '\0';
      pcVar7[0x21] = '\0';
      pcVar7[0x22] = '\0';
      pcVar7[0x23] = '\0';
      pcVar7[0x24] = '\0';
      pcVar7[0x25] = '\0';
      pcVar7[0x26] = '\0';
      pcVar7[0x27] = '\0';
      pcVar7[0x28] = '\0';
      pcVar7[0x29] = '\0';
      pcVar7[0x2a] = '\0';
      pcVar7[0x2b] = '\0';
      pcVar7[0x2c] = '\0';
      pcVar7[0x2d] = '\0';
      pcVar7[0x2e] = '\0';
      pcVar7[0x2f] = -0x20;
      SVar24.bridgeObject = (void *)0x20;
      SVar24.str = pcVar7;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar24,separator);
      _swift_release(pcVar7);
    }
    else {
      if (DAT_100fbe470 != -1) {
        _swift_once(&DAT_100fbe470,FUN_1002fd274);
      }
      plVar9 = DAT_101057968;
      puVar8 = &DAT_100c422b0;
      _swift_getKeyPath(&DAT_100c422b0);
      pcVar16 = *(code **)(*plVar9 + 0x98);
      (*pcVar16)(uVar6);
      _swift_release(puVar8);
      SVar21.bridgeObject = &DAT_e800000000000000;
      SVar21.str = (char *)0x62642e6574736150;
      Foundation::URL::appendingPathComponent(SVar21,UVar11);
      pcVar19 = *(code **)(lVar18 + 8);
      (*pcVar19)(uVar6,UVar4.unknown);
      FUN_10033e078(uVar3);
      (*pcVar19)(uVar3,UVar4.unknown);
      puVar8 = &DAT_100c422b0;
      _swift_getKeyPath(&DAT_100c422b0);
      (*pcVar16)(uVar6);
      _swift_release(puVar8);
      SVar25.bridgeObject = &DAT_e800000000000000;
      SVar25.str = (char *)0x62642e6574736150;
      Foundation::URL::appendingPathComponent(SVar25,UVar11);
      (*pcVar19)(uVar6,UVar4.unknown);
      FUN_10033e3ac(uVar5);
      (*pcVar19)(uVar5,UVar4.unknown);
    }
    plVar9 = (long *)0x240;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x168) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100341ad8;
    FUN_10032d850(param_1,param_2 & 0xcfffffffffffffff);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x100341ac0);
  (*pcVar16)();
}



/* Address: 0x100341ad8 | FUN_100341ad8 */

void FUN_100341ad8(undefined8 param_1,Date param_2,char *param_3,void *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  _StringGuts _Var9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Date DVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
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
  String SVar32;
  
  lVar16 = *unaff_x22;
  lVar2 = *(long *)(lVar16 + 0x160);
  lVar11 = *(long *)(lVar16 + 0x130);
  uVar12 = *(undefined8 *)(lVar16 + 0x138);
  lVar3 = *(long *)(lVar16 + 0x120);
  uVar13 = *(undefined8 *)(lVar16 + 0x128);
  DVar14.unknown = *(undefined **)(lVar16 + 0x118);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar16 + 0x168));
  Foundation::Date::init();
  dVar18 = Foundation::Date::timeIntervalSince(DVar14,param_2);
  (**(code **)(lVar11 + 8))(uVar12,uVar13);
  lVar11 = *(long *)(lVar3 + lVar2);
  lVar2 = lVar11 * 5;
  if (SUB168(SEXT816(lVar11) * SEXT816(5),8) == lVar2 >> 0x3f) {
    lVar17 = *(long *)(lVar16 + 0x120);
    lVar11 = *(long *)(lVar16 + 0x158);
    lVar3 = *(long *)(lVar16 + 0x160);
    bVar1 = *(long *)(*(long *)(lVar17 + lVar11) + 0x10) <= lVar2 / 100;
    if (bVar1) {
      FUN_1000da768(lVar16 + 0x38);
      puVar4 = *(undefined **)(lVar16 + 0x50);
      lVar2 = *(long *)(lVar16 + 0x58);
      _Var9.unknown = puVar4;
      FUN_100004640(lVar16 + 0x38);
      Swift::_StringGuts::grow(0x35,_Var9);
      *(undefined8 *)(lVar16 + 0xe0) = 0;
      *(undefined8 *)(lVar16 + 0xe8) = 0xe000000000000000;
      SVar20.bridgeObject = (void *)0x8000000100da2880;
      SVar20.str = (char *)0xd000000000000024;
      SVar29.bridgeObject = param_4;
      SVar29.str = param_3;
      Swift::String::append(SVar20,SVar29);
      pcVar10 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      double::_write((undefined *)(lVar16 + 0xe0),dVar18);
      SVar23.bridgeObject = &DAT_e700000000000000;
      SVar23.str = (char *)0x20687469772073;
      SVar30.bridgeObject = param_4;
      SVar30.str = pcVar10;
      Swift::String::append(SVar23,SVar30);
      *(undefined8 *)(lVar16 + 0x108) = *(undefined8 *)(lVar17 + lVar3);
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar31.bridgeObject = param_4;
      SVar31.str = pcVar10;
      Swift::String::append(SVar20,SVar31);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      SVar24.bridgeObject = &DAT_e600000000000000;
      SVar24.str = (char *)0x736d65746920;
      SVar32.bridgeObject = param_4;
      SVar32.str = pcVar10;
      Swift::String::append(SVar24,SVar32);
      uVar12 = *(undefined8 *)(lVar16 + 0xe8);
      (**(code **)(lVar2 + 0x30))
                (0x6f6974617267696d,0xe90000000000006e,*(undefined8 *)(lVar16 + 0xe0),uVar12,puVar4,
                 lVar2);
      _swift_bridgeObjectRelease(uVar12);
      FUN_100004594(lVar16 + 0x38);
      uVar13 = 0;
      uVar12 = *(undefined8 *)(lVar17 + lVar3);
    }
    else {
      FUN_1000da768(lVar16 + 0x10);
      puVar4 = *(undefined **)(lVar16 + 0x28);
      lVar2 = *(long *)(lVar16 + 0x30);
      _Var9.unknown = puVar4;
      FUN_100004640(lVar16 + 0x10);
      Swift::_StringGuts::grow(0x29,_Var9);
      *(undefined8 *)(lVar16 + 0xd0) = 0;
      *(undefined8 *)(lVar16 + 0xd8) = 0xe000000000000000;
      SVar19.bridgeObject = (void *)0x8000000100da2860;
      SVar19.str = (char *)0xd000000000000019;
      SVar25.bridgeObject = param_4;
      SVar25.str = param_3;
      Swift::String::append(SVar19,SVar25);
      *(undefined8 *)(lVar16 + 0x100) = *(undefined8 *)(*(long *)(lVar17 + lVar11) + 0x10);
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar26.bridgeObject = param_4;
      SVar26.str = param_3;
      Swift::String::append(SVar20,SVar26);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      SVar21.bridgeObject = (void *)0xeb00000000206e69;
      SVar21.str = (char *)0x2073726f72726520;
      SVar27.bridgeObject = param_4;
      SVar27.str = param_3;
      Swift::String::append(SVar21,SVar27);
      pcVar10 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      double::_write((undefined *)(lVar16 + 0xd0),dVar18);
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = (char *)0x73;
      SVar28.bridgeObject = param_4;
      SVar28.str = pcVar10;
      Swift::String::append(SVar22,SVar28);
      uVar12 = *(undefined8 *)(lVar16 + 0xd8);
      (**(code **)(lVar2 + 0x30))
                (0x6f6974617267696d,0xe90000000000006e,*(undefined8 *)(lVar16 + 0xd0),uVar12,puVar4,
                 lVar2);
      _swift_bridgeObjectRelease(uVar12);
      FUN_100004594(lVar16 + 0x10);
      uVar12 = *(undefined8 *)(lVar17 + lVar3);
      uVar13 = *(undefined8 *)(lVar17 + lVar11);
      _swift_bridgeObjectRetain(uVar13);
    }
    uVar5 = *(undefined8 *)(lVar16 + 0x148);
    uVar6 = *(undefined8 *)(lVar16 + 0x138);
    uVar7 = *(undefined8 *)(lVar16 + 0x140);
    _swift_task_dealloc(*(undefined8 *)(lVar16 + 0x150));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100341e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(uVar12,uVar13,!bVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100341e74);
  (*pcVar8)();
}



/* Address: 0x100341e74 | FUN_100341e74 */

void FUN_100341e74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = _TtC9PasteCore18V5MigrationManager::persistentStack;
  puVar2 = &DAT_100c42210;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbdba8;
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC9PasteCore18V5MigrationManager::telemetry;
  puVar2 = &DAT_100c42240;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore18V5MigrationManager::totalItems) = 0;
  *(undefined **)(unaff_x20 + _TtC9PasteCore18V5MigrationManager::errors) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100341f78 | _TtC9PasteCore18V5MigrationManager::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore18V5MigrationManager::init(ID param_1,SEL param_2)

{
  long lVar1;
  class_t *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  objc_super local_40;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  lVar1 = persistentStack;
  puVar3 = &DAT_100c42210;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdba8;
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = telemetry;
  puVar3 = &DAT_100c42240;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + totalItems) = 0;
  *(undefined **)(param_1 + errors) = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_40.receiver = param_1;
  local_40.super_class = pcVar2;
  IVar5 = _objc_msgSendSuper2(&local_40,"init");
  return IVar5;
}



/* Address: 0x100342078 | _TtC9PasteCore18V5MigrationManager::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore18V5MigrationManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + persistentStack));
  _swift_release(*(undefined8 *)(param_1 + telemetry));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + errors));
  return;
}



/* Address: 0x1003420c0 | FUN_1003420c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003421dc) */

void FUN_1003420c0(ID *param_1,undefined8 param_2,URL param_3)

{
  long *plVar1;
  URL UVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong self;
  ID IVar6;
  long unaff_x22;
  code *pcVar7;
  long lVar8;
  String SVar9;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000da768(auStack_80);
  FUN_100004640(auStack_80,local_68);
  if (DAT_100fbe470 != -1) {
    _swift_once(&DAT_100fbe470,FUN_1002fd274);
  }
  plVar1 = DAT_101057968;
  puVar5 = &DAT_100c422b0;
  _swift_getKeyPath(&DAT_100c422b0);
  (**(code **)(*plVar1 + 0x98))(uVar3);
  _swift_release(puVar5);
  SVar9.bridgeObject = &DAT_e800000000000000;
  SVar9.str = (char *)0x62642e6574736150;
  Foundation::URL::appendingPathComponent(SVar9,param_3);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(uVar3,UVar2.unknown);
  self = uVar4;
  FUN_10035ed80(uVar4,local_68,uStack_60);
  (*pcVar7)(uVar4,UVar2.unknown);
  IVar6 = objc_stub::newBackgroundContext(self);
  FUN_100004594(auStack_80);
  *param_1 = IVar6;
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100342254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100342270 | FUN_100342270 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100342270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  long lVar2;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar2 = CONCAT71(extraout_var,SVar1.value);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  lVar6 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  puVar4 = &DAT_100ecbee0;
  _swift_allocObject(&DAT_100ecbee0,0x18,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  (**(code **)(lVar6 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,lVar2);
  plVar5 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100342370;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + 0x10));
  return;
}



/* Address: 0x100342370 | FUN_100342370 */

void FUN_100342370(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  uVar3 = *(undefined8 *)(lVar4 + 0x48);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    (**(code **)(*(long *)(lVar4 + 0x38) + 8))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x30));
    _swift_release(uVar3);
    FUN_1000da368(uVar5,uVar2);
    pcVar1 = FUN_100342428;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    _swift_release(uVar3);
    FUN_1000da368(uVar5,uVar2);
    pcVar1 = FUN_100342464;
  }
  _swift_task_switch(pcVar1,uVar5,uVar2);
  return;
}



/* Address: 0x100342428 | FUN_100342428 */

void FUN_100342428(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  **(undefined8 **)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100342460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100342464 | FUN_100342464 */

void FUN_100342464(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003424a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003424ac | FUN_1003424ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003424ac(long *param_1,ID param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  NSString *pNVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  long local_70;
  long local_68;
  
  uVar8 = DAT_100fc03f8;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar8);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::initWithEntityName_((ID)puVar3,pNVar4);
  local_70 = 0;
  IVar5 = objc_stub::countForFetchRequest_error_(param_2,IVar5,&local_70);
  if (local_70 == 0) {
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = ram0x000100fc0408;
    puVar3 = &_OBJC_CLASS___NSFetchRequest;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar8);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar6 = objc_stub::initWithEntityName_((ID)puVar3,pNVar4);
    local_70 = 0;
    IVar6 = objc_stub::countForFetchRequest_error_(param_2,IVar6,&local_70);
    if (local_70 == 0) {
      _swift_bridgeObjectRelease(uVar8);
      uVar8 = ram0x000100fc0418;
      if (SCARRY8(IVar5,IVar6)) {
LAB_100342774:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100342778);
        (*pcVar2)();
      }
      puVar3 = &_OBJC_CLASS___NSFetchRequest;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar8);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::initWithEntityName_((ID)puVar3,pNVar4);
      local_70 = 0;
      IVar7 = objc_stub::countForFetchRequest_error_(param_2,IVar7,&local_70);
      if (local_70 == 0) {
        _swift_bridgeObjectRelease(uVar8);
        uVar8 = DAT_100fc0428;
        lVar1 = IVar5 + IVar6 + IVar7;
        if (SCARRY8(IVar5 + IVar6,IVar7)) goto LAB_100342774;
        puVar3 = &_OBJC_CLASS___NSFetchRequest;
        _objc_allocWithZone();
        _swift_bridgeObjectRetain(uVar8);
        pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar5 = objc_stub::initWithEntityName_((ID)puVar3,pNVar4);
        local_70 = 0;
        IVar5 = objc_stub::countForFetchRequest_error_(param_2,IVar5,&local_70);
        if (local_70 == 0) {
          _swift_bridgeObjectRelease(uVar8);
          if (SCARRY8(lVar1,IVar5)) goto LAB_100342774;
          _swift_arrayDestroy(s_Snippet_100fc03f0,4,PTR___type_metadata_for_Swift_String_100eac208);
          *param_1 = lVar1 + IVar5;
          goto LAB_100342708;
        }
      }
    }
  }
  _swift_willThrow(0);
  _swift_arrayDestroy(s_Snippet_100fc03f0,4,PTR___type_metadata_for_Swift_String_100eac208);
  _swift_bridgeObjectRelease(uVar8);
LAB_100342708:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10034277c | FUN_10034277c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10034277c(undefined8 param_1,undefined8 param_2,URL param_3)

{
  long *plVar1;
  URL UVar2;
  ID IVar3;
  undefined *puVar4;
  URL UVar5;
  NSString *pNVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  UVar5.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)UVar5.unknown - extraout_x12;
  IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  if (DAT_100fbe470 != -1) {
    _swift_once(&DAT_100fbe470,FUN_1002fd274);
  }
  plVar1 = DAT_101057968;
  puVar4 = &DAT_100c422b0;
  _swift_getKeyPath(&DAT_100c422b0);
  (**(code **)(*plVar1 + 0x98))(UVar5.unknown);
  _swift_release(puVar4);
  SVar10.bridgeObject = &DAT_e800000000000000;
  SVar10.str = (char *)0x62642e6574736150;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(UVar5.unknown,UVar2.unknown);
  SVar10 = Foundation::URL::get_path(UVar5);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  (*pcVar8)(lVar7,UVar2.unknown);
  IVar3 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
  return IVar3;
}



/* Address: 0x1003428f8 | FUN_1003428f8 */

undefined8 FUN_1003428f8(Date param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  Date DVar3;
  char *pcVar4;
  _StringGuts _Var5;
  char *pcVar7;
  long extraout_x8;
  long lVar9;
  double dVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String separator;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_f0 [8];
  char local_e8 [24];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  Date DVar6;
  void *pvVar8;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  pcVar4 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _Var5.unknown = (undefined *)0x40;
  pcVar7 = (char *)0x7;
  _swift_allocObject();
  pcVar4[0x18] = '\x02';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x10] = '\x01';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  local_b8 = 0;
  uStack_b0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x20,_Var5);
  SVar14.bridgeObject = (void *)0x8000000100da2950;
  SVar14.str = (char *)0xd00000000000001e;
  SVar15.bridgeObject = param_4;
  SVar15.str = pcVar7;
  Swift::String::append(SVar14,SVar15);
  _swift_getErrorValue(param_2,auStack_78,&local_90);
  Swift::DefaultStringInterpolation::_appendInterpolation(local_90,uStack_88);
  *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(pcVar4 + 0x20) = local_b8;
  *(undefined8 *)(pcVar4 + 0x28) = uStack_b0;
  SVar11.bridgeObject = (void *)0x20;
  SVar11.str = pcVar4;
  DVar6.unknown = (undefined *)0x20;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  pvVar8 = (void *)0xa;
  pcVar7 = (char *)0xe100000000000000;
  Swift::_print(SVar11,separator);
  _swift_release(pcVar4);
  Foundation::Date::init();
  dVar10 = Foundation::Date::timeIntervalSince(param_1,DVar6);
  (**(code **)(lVar9 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
  FUN_1000da768(&local_b8);
  lVar9 = lStack_98;
  puVar2 = local_a0;
  _Var5.unknown = local_a0;
  FUN_100004640(&local_b8);
  local_c8 = 0;
  uStack_c0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1e,_Var5);
  SVar12.bridgeObject = (void *)0x8000000100da2970;
  SVar12.str = (char *)0xd000000000000017;
  SVar16.bridgeObject = pvVar8;
  SVar16.str = pcVar7;
  Swift::String::append(SVar12,SVar16);
  pcVar4 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  double::_write((undefined *)&local_c8,dVar10);
  SVar13.bridgeObject = (void *)0xe300000000000000;
  SVar13.str = (char *)0x203a73;
  SVar17.bridgeObject = pvVar8;
  SVar17.str = pcVar4;
  Swift::String::append(SVar13,SVar17);
  pcVar4 = local_e8;
  _swift_getErrorValue(param_2,auStack_d0);
  SVar14 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar18.bridgeObject = pvVar8;
  SVar18.str = pcVar4;
  Swift::String::append(SVar14,SVar18);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  uVar1 = uStack_c0;
  (**(code **)(lVar9 + 0x30))(0x6f6974617267696d,0xe90000000000006e,local_c8,uStack_c0,puVar2,lVar9)
  ;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(&local_b8);
  FUN_1000da768(&local_b8);
  FUN_100004640(&local_b8,local_a0);
  (**(code **)(lStack_98 + 0x20))(param_2,local_a0,lStack_98);
  FUN_100004594(&local_b8);
  return param_2;
}



/* Address: 0x100342bac | FUN_100342bac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100342bac(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100342bd0 | FUN_100342bd0 */

void FUN_100342bd0(void)

{
  long unaff_x20;
  
  FUN_10032ccd4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100342be8 | FUN_100342be8 */

void FUN_100342be8(void)

{
  long unaff_x20;
  
  FUN_10032d124(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100342c00 | FUN_100342c00 */

void FUN_100342c00(void)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1002ff9c8(FUN_10030844c,auStack_30);
  return;
}



/* Address: 0x100342c30 | FUN_100342c30 */

void FUN_100342c30(void)

{
  long unaff_x20;
  
  FUN_10033142c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100342c48 | thunk_FUN_100342c4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100342c4c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100342c4c | FUN_100342c4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100342c4c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100342c78 | FUN_100342c78 */

void FUN_100342c78(void)

{
  long unaff_x20;
  
  FUN_100331804(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100342c90 | thunk_FUN_10037631c */

void thunk_FUN_10037631c(void)

{
  FUN_10037631c();
  return;
}



/* Address: 0x100342c94 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x100342c98 | FUN_100342c98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100342c98(void)

{
  return ZEXT816(0x100f98108);
}



/* Address: 0x100342cb8 | thunk_FUN_100342ccc */

undefined8 * thunk_FUN_100342ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100342cbc | FUN_100342cbc */

void FUN_100342cbc(undefined8 *param_1)

{
  FUN_10001f5e8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100342ccc | FUN_100342ccc */

undefined8 * FUN_100342ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100342d14 | FUN_100342d14 */

undefined8 * FUN_100342d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10001f5e8(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100342d68 | FUN_100342d68 */

void FUN_100342d68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100342d7c | FUN_100342d7c */

undefined8 * FUN_100342d7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10001f5e8(uVar3,uVar4,uVar2);
  return param_1;
}


