/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10052c3a0 | FUN_10052c3a0 */

void FUN_10052c3a0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x6b0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x768));
  _swift_task_switch(FUN_10052c3ec,uVar1,0);
  return;
}



/* Address: 0x10052c3ec | FUN_10052c3ec */

void FUN_10052c3ec(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750));
  FUN_1000fb4c4(unaff_x22 + 0x410,&DAT_100fcb3e0,&DAT_100c50230);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x7b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052c858;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}



/* Address: 0x10052c468 | FUN_10052c468 */

void FUN_10052c468(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x6b0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x770));
  _swift_task_switch(FUN_10052c4b4,uVar1,0);
  return;
}



/* Address: 0x10052c4b4 | FUN_10052c4b4 */

void FUN_10052c4b4(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750));
  FUN_1000fb4c4(unaff_x22 + 0x370,&DAT_100fcb418,&DAT_100c50268);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x7b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052c858;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}



/* Address: 0x10052c530 | FUN_10052c530 */

void FUN_10052c530(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x6b0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x778));
  _swift_task_switch(FUN_10052c57c,uVar1,0);
  return;
}



/* Address: 0x10052c57c | FUN_10052c57c */

void FUN_10052c57c(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750));
  FUN_1000fb4c4(unaff_x22 + 0x490,&DAT_100fcd010,&DAT_100c534d0);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x7b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052c858;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}



/* Address: 0x10052c5f8 | FUN_10052c5f8 */

void FUN_10052c5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x798);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x6b0);
  (**(code **)(unaff_x22 + 0x7a0))(uVar1,*(undefined8 *)(unaff_x22 + 0x790));
  *(undefined8 *)(unaff_x22 + 0x7a8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052c650,uVar2,0);
  return;
}



/* Address: 0x10052c650 | FUN_10052c650 */

void FUN_10052c650(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x7a8);
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x668,0,0);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x5d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x5e8);
  lVar4 = *(long *)(unaff_x22 + 0x5f0);
  FUN_100004640(unaff_x22 + 0x5d0,uVar2);
  (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
  FUN_100004594(unaff_x22 + 0x5d0);
  if (((uint)uVar2 & 0xff) < 5) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x780);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x750);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x748);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x5f8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x610);
    lVar4 = *(long *)(unaff_x22 + 0x618);
    FUN_100004640(unaff_x22 + 0x5f8,uVar9);
    puVar8 = (undefined1 *)(unaff_x22 + 0x70);
    *puVar8 = 4;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000051;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad800;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 200) = 0xf1;
    *(undefined1 *)(unaff_x22 + 400) = 4;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000051;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dad800;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0xf1;
    _swift_bridgeObjectRetain(uVar2);
    FUN_1004eaa00(puVar8,unaff_x22 + 0x130);
    FUN_1004eaa3c(unaff_x22 + 400);
    (**(code **)(lVar4 + 0x28))(puVar8,uVar9,lVar4);
    FUN_10003bf18(uVar6,uVar5);
    _swift_release(uVar3);
    FUN_1004eaa3c(puVar8);
    FUN_100004594(unaff_x22 + 0x5f8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x780);
    FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750));
    _swift_release(uVar3);
  }
  _swift_bridgeObjectRelease(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x7b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052c858;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}



/* Address: 0x10052c858 | FUN_10052c858 */

void FUN_10052c858(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x7b0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x740) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x6b0);
    pcVar1 = FUN_10052bc20;
  }
  else {
    *(long *)(lVar3 + 0x810) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x6b0);
    pcVar1 = FUN_10052d170;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10052c8bc | FUN_10052c8bc */

void FUN_10052c8bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x7c8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x7b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x6b0);
  (**(code **)(unaff_x22 + 2000))(uVar1,*(undefined8 *)(unaff_x22 + 0x7c0));
  *(undefined8 *)(unaff_x22 + 0x7d8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052c914,uVar2,0);
  return;
}



/* Address: 0x10052c914 | FUN_10052c914 */

void FUN_10052c914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x22 + 0x7d8);
  _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0x620,0,0);
  FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x530);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x548);
  lVar3 = *(long *)(unaff_x22 + 0x550);
  FUN_100004640(unaff_x22 + 0x530,uVar1);
  (**(code **)(lVar3 + 0x70))(uVar1,lVar3);
  FUN_100004594(unaff_x22 + 0x530);
  if (((uint)uVar1 & 0xff) < 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x7d8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x708);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x558);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x570);
    lVar3 = *(long *)(unaff_x22 + 0x578);
    FUN_100004640(unaff_x22 + 0x558,uVar4);
    *(undefined1 *)(unaff_x22 + 0xd0) = 1;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad7c0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x100;
    *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dad7c0;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x100;
    FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x2b0);
    (**(code **)(lVar3 + 0x28))(unaff_x22 + 0xd0,uVar4,lVar3);
    _swift_release(uVar2);
    _swift_unknownObjectRelease(uVar1);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    FUN_100004594(unaff_x22 + 0x558);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x708);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x7d8));
    _swift_unknownObjectRelease(uVar1);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x6e8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x6d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x6c8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010052cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052cb00 | FUN_10052cb00 */

void FUN_10052cb00(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x7e0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x6b0);
    (**(code **)(*(long *)(lVar2 + 0x6c0) + 8))
              (*(undefined8 *)(lVar2 + 0x6c8),*(undefined8 *)(lVar2 + 0x6b8));
    pcVar1 = FUN_10052cb80;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x6b0);
    _swift_errorRelease();
    pcVar1 = FUN_10052cc8c;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10052cb80 | FUN_10052cb80 */

void FUN_10052cb80(void)

{
  bool bVar1;
  Task TVar2;
  long lVar3;
  UnownedSerialExecutor UVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x810);
  _swift_errorRelease();
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (bVar1) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
    *(long *)(unaff_x22 + 0x7b8) = lVar6;
    if (lVar6 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x6e8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x6d0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x6c8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010052cc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar8;
    lVar3 = lVar6;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar3;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar8 + 0x10);
    uVar9 = *(undefined8 *)(lVar8 + 8);
    _swift_unknownObjectRetain(lVar6);
    UVar4 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_10052c8bc;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x730);
    UVar4 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_10052bb04;
  }
  _swift_task_switch(pcVar5,UVar4.unknown,uVar9);
  return;
}



/* Address: 0x10052cc8c | FUN_10052cc8c */

void FUN_10052cc8c(void)

{
  bool bVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  code *pcVar4;
  undefined8 uVar5;
  Task TVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  TVar6.unknown = *(undefined **)(unaff_x22 + 0x6c8);
  lVar8 = *(long *)(unaff_x22 + 0x6c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x6b8);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x810));
  (**(code **)(lVar8 + 8))(TVar6.unknown,uVar5);
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
  if (bVar1) {
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
    *(long *)(unaff_x22 + 0x7b8) = lVar8;
    if (lVar8 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x6e8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x6d0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x6c8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010052cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar9;
    lVar2 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar2;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar9 + 0x10);
    uVar5 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10052c8bc;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x730);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10052bb04;
  }
  _swift_task_switch(pcVar4,UVar3.unknown,uVar5);
  return;
}



/* Address: 0x10052cdb4 | FUN_10052cdb4 */

void FUN_10052cdb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x7f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x7e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x6b0);
  (**(code **)(unaff_x22 + 0x800))(uVar1,*(undefined8 *)(unaff_x22 + 0x7f0));
  *(undefined8 *)(unaff_x22 + 0x808) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052ce0c,uVar2,0);
  return;
}



/* Address: 0x10052ce0c | FUN_10052ce0c */

void FUN_10052ce0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  String SVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x808);
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x650,0,0);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x5a8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x5c0);
  lVar8 = *(long *)(unaff_x22 + 0x5c8);
  FUN_100004640(unaff_x22 + 0x5a8,uVar6);
  (**(code **)(lVar8 + 0x70))(uVar6,lVar8);
  FUN_100004594(unaff_x22 + 0x5a8);
  if (((uint)uVar6 & 0xff) < 6) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x810);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x808);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x580);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x598);
    lVar8 = *(long *)(unaff_x22 + 0x5a0);
    FUN_100004640(unaff_x22 + 0x580,uVar10);
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pvVar5 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x726f727265;
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::reserveCapacity(2,SVar12);
    _swift_getErrorValue(uVar7,unaff_x22 + 0x690,unaff_x22 + 0x638);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x638),*(undefined8 *)(unaff_x22 + 0x640));
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    FUN_1000fb4c4(puVar1 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar1,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x10) = 5;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad7a0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xfb;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 5;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad7a0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined **)(unaff_x22 + 0x210) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x248) = 0xfb;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x310);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x10,uVar10,lVar8);
    _swift_errorRelease(uVar7);
    _swift_release(uVar6);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x580);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x808);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x810));
    _swift_release(uVar6);
  }
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
  *(long *)(unaff_x22 + 0x7b8) = lVar8;
  if (lVar8 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar9;
    lVar11 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar11;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10052c8bc,UVar3.unknown,uVar6);
    return;
  }
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x6e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x6d0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x6c8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010052d16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052d170 | FUN_10052d170 */

void FUN_10052d170(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  long *plVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  
  piVar1 = (int *)(unaff_x22 + 0x3bc);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x810);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x700);
  lVar13 = *(long *)(unaff_x22 + 0x6f8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x6f0);
  (**(code **)(*(long *)(unaff_x22 + 0x6e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x6e8),*(undefined8 *)(unaff_x22 + 0x6d8));
  (**(code **)(lVar13 + 8))(uVar10,uVar12);
  *(undefined8 *)(unaff_x22 + 0x6a0) = uVar9;
  _swift_errorRetain(uVar9);
  _swift_errorRetain(uVar9);
  puVar3 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  piVar4 = piVar1;
  _swift_dynamicCast(piVar1,unaff_x22 + 0x6a0,puVar3,PTR___type_metadata_for_System_Errno_100eae9c8,
                     6);
  if (((ulong)piVar4 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x810));
  }
  else {
    iVar2 = *piVar1;
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x810));
    if (iVar2 == 0x23) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      plVar5 = (long *)0x80;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x7e0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10052cb00;
      FUN_10051aec0(10000000000000000,0,0,0,1);
      return;
    }
  }
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
  *(long *)(unaff_x22 + 0x7e8) = lVar13;
  if (lVar13 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x810));
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
    *(long *)(unaff_x22 + 0x7b8) = lVar13;
    if (lVar13 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
      uVar10 = *(undefined8 *)(unaff_x22 + 0x6e8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x6d0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x6c8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010052d3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar11;
    lVar7 = lVar13;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar7;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    pcVar8 = FUN_10052c8bc;
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7f0) = lVar11;
    lVar7 = lVar13;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7f8) = lVar7;
    *(undefined8 *)(unaff_x22 + 0x800) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    pcVar8 = FUN_10052cdb4;
  }
  _swift_task_switch(pcVar8,UVar6.unknown,uVar9);
  return;
}



/* Address: 0x10052d3cc | FUN_10052d3cc */

void FUN_10052d3cc(long param_1,undefined8 param_2)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(unaff_x22 + 0x241) = *(undefined1 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar3;
  _swift_task_switch(FUN_10052d3f8,0,0);
  return;
}



/* Address: 0x10052d3f8 | FUN_10052d3f8 */

void FUN_10052d3f8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x2a8);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x248,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x2d0) = lVar1;
  if (lVar1 != 0) {
    _swift_task_switch(FUN_10052d46c,lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010052d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052d46c | FUN_10052d46c */

void FUN_10052d46c(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x2d0) + 0x70);
  *(long *)(unaff_x22 + 0x2d8) = lVar4;
  if (lVar4 == 0) {
    pcVar3 = FUN_10052d50c;
    UVar2.unknown = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x2d0) + 0x78);
    *(long *)(unaff_x22 + 0x2e0) = lVar5;
    lVar1 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x2e8) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10052d56c;
  }
  _swift_task_switch(pcVar3,UVar2.unknown,uVar6);
  return;
}



/* Address: 0x10052d50c | FUN_10052d50c */

void FUN_10052d50c(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x241) != -1) {
    _swift_task_switch(FUN_10052d954,*(undefined8 *)(unaff_x22 + 0x2d0),0);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2d0));
                    /* WARNING: Could not recover jumptable at 0x00010052d568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052d56c | FUN_10052d56c */

void FUN_10052d56c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d8);
  (**(code **)(unaff_x22 + 0x2f0))(uVar1,*(undefined8 *)(unaff_x22 + 0x2e0));
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  _swift_task_switch(FUN_10052d5c0,0,0);
  return;
}



/* Address: 0x10052d5c0 | FUN_10052d5c0 */

void FUN_10052d5c0(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  
  lVar11 = *(long *)(unaff_x22 + 0x2f8);
  pcVar6 = (char *)0x0;
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x260);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x1d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  lVar10 = *(long *)(unaff_x22 + 0x1f0);
  FUN_100004640(unaff_x22 + 0x1d0,uVar9);
  (**(code **)(lVar10 + 0x70))(uVar9,lVar10);
  FUN_100004594(unaff_x22 + 0x1d0);
  if (((uint)uVar9 & 0xff) < 2) {
    cVar1 = *(char *)(unaff_x22 + 0x241);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x1f8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
    lVar10 = *(long *)(unaff_x22 + 0x218);
    FUN_100004640(unaff_x22 + 0x1f8,uVar9);
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)(unaff_x22 + 0x10);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 4;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined8 *)(puVar2 + 0x20) = 0x4974736575716572;
    *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000064;
    if (cVar1 == -1) {
      *(undefined8 *)(puVar2 + 0x30) = 0x656e6f6e;
      *(undefined1 **)(puVar2 + 0x38) = &DAT_e400000000000000;
    }
    else {
      cVar1 = *(char *)(unaff_x22 + 0x241);
      SVar15.bridgeObject = pcVar6;
      SVar15.str = pcVar5;
      Swift::String::reserveCapacity(2,SVar15);
      if (cVar1 == '\x01') {
        *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x2b0);
        SVar14 = Swift::CustomStringConvertible::get_description();
      }
      else {
        pvVar12 = *(void **)(unaff_x22 + 0x2b8);
        pcVar6 = (char *)(ulong)*(byte *)(unaff_x22 + 0x241);
        FUN_1004a7398(*(undefined8 *)(unaff_x22 + 0x2b0),pvVar12);
        SVar14.bridgeObject = pvVar12;
        SVar14.str = *(char **)(unaff_x22 + 0x2b0);
      }
      SVar17.bridgeObject = pvVar7;
      SVar17.str = pcVar6;
      pcVar5 = SVar14.bridgeObject;
      Swift::String::append(SVar14,SVar17);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
      *(undefined8 *)(puVar2 + 0x48) = 0;
      *(undefined8 *)(puVar2 + 0x50) = 0;
      *(undefined8 *)(puVar2 + 0x40) = 0;
    }
    puVar2[0x58] = 0;
    lVar11 = *(long *)(unaff_x22 + 0x2c8);
    *(undefined8 *)(puVar2 + 0x60) = 0x6e6f73616572;
    *(undefined1 **)(puVar2 + 0x68) = &DAT_e600000000000000;
    if (lVar11 == 0) {
      puVar2[0x98] = 0;
      puVar8 = &DAT_e400000000000000;
      uVar13 = 0x656e6f6e;
    }
    else {
      SVar15 = *(String *)(unaff_x22 + 0x2c0);
      SVar16.bridgeObject = pcVar6;
      SVar16.str = pcVar5;
      Swift::String::reserveCapacity(2,SVar16);
      SVar18.bridgeObject = pvVar7;
      SVar18.str = pcVar6;
      Swift::String::write(SVar15,SVar18);
      uVar13 = 0;
      puVar8 = (undefined1 *)0xe000000000000000;
      *(undefined8 *)(puVar2 + 0x80) = 0;
      *(undefined8 *)(puVar2 + 0x88) = 0;
      puVar2[0x98] = 0;
      *(undefined8 *)(puVar2 + 0x90) = 0;
    }
    *(undefined8 *)(puVar2 + 0x70) = uVar13;
    *(undefined1 **)(puVar2 + 0x78) = puVar8;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2f8);
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    puVar4 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
    *(undefined1 *)(unaff_x22 + 0xb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad770;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined **)(unaff_x22 + 0xd0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0x10a;
    *(undefined1 *)(unaff_x22 + 0x110) = 1;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad770;
    *(undefined8 *)(unaff_x22 + 0x128) = 0;
    *(undefined **)(unaff_x22 + 0x130) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x138) = 0;
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x160) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0x10a;
    FUN_1004eaa00(unaff_x22 + 0xb0,unaff_x22 + 0x170);
    FUN_1004eaa3c(unaff_x22 + 0x110);
    (**(code **)(lVar10 + 0x28))(unaff_x22 + 0xb0,uVar9,lVar10);
    _swift_release(uVar13);
    FUN_1004eaa3c(unaff_x22 + 0xb0);
    FUN_100004594(unaff_x22 + 0x1f8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2f8));
  }
  if (*(char *)(unaff_x22 + 0x241) != -1) {
    _swift_task_switch(FUN_10052d954,*(undefined8 *)(unaff_x22 + 0x2d0),0);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2d0));
                    /* WARNING: Could not recover jumptable at 0x00010052d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052d954 | FUN_10052d954 */

void FUN_10052d954(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x241);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x2d0) + 0x128,unaff_x22 + 0x278,0x21,0);
  FUN_1005064d4(uVar3,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x290) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x298) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x300) = uVar3;
  _swift_endAccess(unaff_x22 + 0x278);
  _swift_task_switch(FUN_10052d9dc,0,0);
  return;
}



/* Address: 0x10052d9dc | FUN_10052d9dc */

void FUN_10052d9dc(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  pcVar3 = *(code **)(unaff_x22 + 0x300);
  if (pcVar3 == (code *)0x0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2d0));
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2d0);
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    puVar2 = &DAT_100fce8c0;
    FUN_1003b6598(&DAT_100fce8c0,0xff,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(CVar1.unknown,puVar2,0,0);
    Swift::CancellationError::init();
    *(undefined **)(unaff_x22 + 0x220) = CVar1.unknown;
    *(undefined1 *)(unaff_x22 + 0x240) = 1;
    _swift_errorRetain(CVar1.unknown);
    (*pcVar3)(unaff_x22 + 0x220);
    FUN_100004550(pcVar3,uVar4);
    _swift_release(uVar5);
    FUN_1000fb4c4(unaff_x22 + 0x220,&DAT_100fcd0b8,&DAT_100c53690);
    _swift_errorRelease(CVar1.unknown);
  }
                    /* WARNING: Could not recover jumptable at 0x00010052dac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052dac8 | FUN_10052dac8 */

void FUN_10052dac8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb08) = unaff_x20;
  _swift_task_switch(FUN_10052dae0);
  return;
}



/* Address: 0x10052dae0 | FUN_10052dae0 */

void FUN_10052dae0(void)

{
  int iVar1;
  bool bVar2;
  UnownedSerialExecutor UVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  Task TVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  
  lVar13 = *(long *)(unaff_x22 + 0xb08);
  lVar11 = *(long *)(lVar13 + 0x70);
  *(long *)(unaff_x22 + 0xb10) = lVar11;
  if (lVar11 == 0) {
    *(undefined8 *)(unaff_x22 + 0xb38) = 0;
    *(undefined8 *)(unaff_x22 + 0xb40) = *(undefined8 *)(lVar13 + 0x120);
    *(undefined8 *)(unaff_x22 + 0xb48) = *(undefined8 *)(lVar13 + 0x78);
    _swift_beginAccess(lVar13 + 0x128,unaff_x22 + 0xa60,1,0);
    lVar14 = *(long *)(lVar13 + 0x128);
    *(undefined8 *)(lVar13 + 0x120) = 0;
    *(long *)(lVar13 + 0x70) = 0;
    *(undefined8 *)(lVar13 + 0x78) = 0;
    _swift_bridgeObjectRetain(lVar14);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a7104();
    puVar7 = *(undefined8 **)(lVar13 + 0x128);
    *(undefined **)(lVar13 + 0x128) = puVar12;
    _swift_bridgeObjectRelease();
    lVar11 = 0;
    lVar13 = -1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar9 = -lVar13;
    uVar16 = 0xffffffffffffffff;
    if (uVar9 < 0x40) {
      uVar16 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar16 = uVar16 & *(ulong *)(lVar14 + 0x40);
    while( true ) {
      for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
        uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        puVar4 = (undefined8 *)
                 (*(long *)(lVar14 + 0x38) + LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) * 0x10 +
                 lVar11 * 0x400);
        pcVar5 = (code *)*puVar4;
        uVar15 = puVar4[1];
        FUN_1004db3ac();
        puVar4 = (undefined8 *)&DAT_100eda9c8;
        _swift_allocError(&DAT_100eda9c8,puVar7,0,0);
        *puVar7 = 0xd000000000000013;
        puVar7[1] = 0x8000000100dad310;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 4;
        *(undefined8 **)(unaff_x22 + 0xa20) = puVar4;
        *(undefined1 *)(unaff_x22 + 0xa40) = 1;
        _swift_retain(uVar15);
        _swift_errorRetain(puVar4);
        (*pcVar5)(unaff_x22 + 0xa20);
        _swift_release(uVar15);
        FUN_1000fb4c4(unaff_x22 + 0xa20,&DAT_100fcd0b8,&DAT_100c53690);
        _swift_errorRelease();
        puVar7 = puVar4;
      }
      bVar2 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10052df40);
        (*pcVar5)();
      }
      if ((long)(0x3fU - lVar13 >> 6) <= lVar11) break;
      uVar16 = ((ulong *)(lVar14 + 0x40))[lVar11];
    }
    lVar11 = *(long *)(unaff_x22 + 0xb08);
    _swift_release(lVar14);
    lVar11 = *(long *)(lVar11 + 0x70);
    *(long *)(unaff_x22 + 0xb50) = lVar11;
    if (lVar11 == 0) {
      puVar12 = *(undefined **)(unaff_x22 + 0xb40);
      if (puVar12 != (undefined *)0x0) {
        TVar10.unknown = puVar12;
        _swift_retain();
        Swift::Task::cancel(TVar10);
        _swift_release(puVar12);
      }
      lVar11 = *(long *)(unaff_x22 + 0xb08);
      lVar13 = *(long *)(lVar11 + 0x70);
      *(long *)(unaff_x22 + 0xb78) = lVar13;
      if (lVar13 == 0) {
        lVar13 = *(long *)(unaff_x22 + 0xb38);
        if (lVar13 != 0) {
          lVar14 = *(long *)(unaff_x22 + 0xb48);
          lVar11 = lVar13;
          _swift_getObjectType(lVar13);
          piVar8 = *(int **)(lVar14 + 0x20);
          iVar1 = *piVar8;
          plVar6 = (long *)(ulong)(uint)piVar8[1];
          _swift_unknownObjectRetain(lVar13);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xba0) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_10052ec90;
                    /* WARNING: Could not recover jumptable at 0x00010052de74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar8))(lVar11,lVar14);
          return;
        }
        *(undefined8 *)(unaff_x22 + 0xbd0) = 0;
        if (*(long *)(unaff_x22 + 0xb40) != 0) {
          TVar10.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
          _swift_retain(*(long *)(unaff_x22 + 0xb40));
          _swift_task_alloc();
          *(undefined **)(unaff_x22 + 0xbf8) = TVar10.unknown;
          *(long *)TVar10.unknown = unaff_x22;
          *(code **)(TVar10.unknown + 8) = FUN_10052f420;
          (extension_Swift)::Swift::Task::_get_value(TVar10);
          return;
        }
        lVar13 = *(long *)(lVar11 + 0x70);
        *(long *)(unaff_x22 + 0xc00) = lVar13;
        if (lVar13 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010052df60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        lVar14 = *(long *)(lVar11 + 0x78);
        *(long *)(unaff_x22 + 0xc08) = lVar14;
        lVar11 = lVar13;
        _swift_getObjectType();
        *(long *)(unaff_x22 + 0xc10) = lVar11;
        *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar14 + 0x10);
        uVar15 = *(undefined8 *)(lVar14 + 8);
        _swift_unknownObjectRetain(lVar13);
        UVar3 = Swift::Actor::get_unownedExecutor();
        pcVar5 = FUN_10052f530;
      }
      else {
        lVar14 = *(long *)(lVar11 + 0x78);
        *(long *)(unaff_x22 + 0xb80) = lVar14;
        lVar11 = lVar13;
        _swift_getObjectType();
        *(long *)(unaff_x22 + 0xb88) = lVar11;
        *(undefined8 *)(unaff_x22 + 0xb90) = *(undefined8 *)(lVar14 + 0x10);
        uVar15 = *(undefined8 *)(lVar14 + 8);
        _swift_unknownObjectRetain(lVar13);
        UVar3 = Swift::Actor::get_unownedExecutor();
        pcVar5 = FUN_10052e940;
      }
    }
    else {
      lVar14 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
      *(long *)(unaff_x22 + 0xb58) = lVar14;
      lVar13 = lVar11;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0xb60) = lVar13;
      *(undefined8 *)(unaff_x22 + 0xb68) = *(undefined8 *)(lVar14 + 0x10);
      uVar15 = *(undefined8 *)(lVar14 + 8);
      _swift_unknownObjectRetain(lVar11);
      UVar3 = Swift::Actor::get_unownedExecutor();
      pcVar5 = FUN_10052e558;
    }
  }
  else {
    lVar14 = *(long *)(lVar13 + 0x78);
    *(long *)(unaff_x22 + 0xb18) = lVar14;
    lVar13 = lVar11;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xb20) = lVar13;
    *(undefined8 *)(unaff_x22 + 0xb28) = *(undefined8 *)(lVar14 + 0x10);
    uVar15 = *(undefined8 *)(lVar14 + 8);
    _swift_unknownObjectRetain(lVar11);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_10052df64;
  }
  _swift_task_switch(pcVar5,UVar3.unknown,uVar15);
  return;
}



/* Address: 0x10052df64 | FUN_10052df64 */

void FUN_10052df64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xb28))(uVar1,*(undefined8 *)(unaff_x22 + 0xb18));
  *(undefined8 *)(unaff_x22 + 0xb30) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052dfbc,uVar2,0);
  return;
}



/* Address: 0x10052dfbc | FUN_10052dfbc */

void FUN_10052dfbc(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  Task TVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  ulong uVar17;
  
  lVar16 = *(long *)(unaff_x22 + 0xb30);
  _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0xa48,0,0);
  FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x9f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa10);
  lVar14 = *(long *)(unaff_x22 + 0xa18);
  FUN_100004640(unaff_x22 + 0x9f8,uVar10);
  (**(code **)(lVar14 + 0x70))(uVar10,lVar14);
  FUN_100004594(unaff_x22 + 0x9f8);
  if (((uint)uVar10 & 0xff) < 2) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb30);
    FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x9a8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x9c0);
    lVar14 = *(long *)(unaff_x22 + 0x9c8);
    FUN_100004640(unaff_x22 + 0x9a8,uVar15);
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad200;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x120;
    *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dad200;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x300) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x120;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x310);
    FUN_1004eaa3c(unaff_x22 + 0x2b0);
    (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x10,uVar15,lVar14);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x9a8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb30));
  }
  lVar14 = *(long *)(unaff_x22 + 0xb08);
  *(undefined8 *)(unaff_x22 + 0xb38) = *(undefined8 *)(lVar14 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb40) = *(undefined8 *)(lVar14 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xb48) = *(undefined8 *)(lVar14 + 0x78);
  _swift_beginAccess(lVar14 + 0x128,unaff_x22 + 0xa60,1,0);
  lVar11 = *(long *)(lVar14 + 0x128);
  *(undefined8 *)(lVar14 + 0x120) = 0;
  *(undefined8 *)(lVar14 + 0x70) = 0;
  *(undefined8 *)(lVar14 + 0x78) = 0;
  _swift_bridgeObjectRetain(lVar11);
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a7104();
  puVar7 = *(undefined8 **)(lVar14 + 0x128);
  *(undefined **)(lVar14 + 0x128) = puVar13;
  _swift_bridgeObjectRelease();
  lVar14 = 0;
  lVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar9 = -lVar16;
  uVar17 = 0xffffffffffffffff;
  if (uVar9 < 0x40) {
    uVar17 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(lVar11 + 0x40);
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      puVar4 = (undefined8 *)
               (*(long *)(lVar11 + 0x38) + LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) * 0x10 +
               lVar14 * 0x400);
      pcVar2 = (code *)*puVar4;
      uVar10 = puVar4[1];
      FUN_1004db3ac();
      puVar4 = (undefined8 *)&DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar7,0,0);
      *puVar7 = 0xd000000000000013;
      puVar7[1] = 0x8000000100dad310;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 4;
      *(undefined8 **)(unaff_x22 + 0xa20) = puVar4;
      *(undefined1 *)(unaff_x22 + 0xa40) = 1;
      _swift_retain(uVar10);
      _swift_errorRetain(puVar4);
      (*pcVar2)(unaff_x22 + 0xa20);
      _swift_release(uVar10);
      FUN_1000fb4c4(unaff_x22 + 0xa20,&DAT_100fcd0b8,&DAT_100c53690);
      _swift_errorRelease();
      puVar7 = puVar4;
    }
    bVar3 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10052e534);
      (*pcVar2)();
    }
    if ((long)(0x3fU - lVar16 >> 6) <= lVar14) break;
    uVar17 = ((ulong *)(lVar11 + 0x40))[lVar14];
  }
  lVar14 = *(long *)(unaff_x22 + 0xb08);
  _swift_release(lVar11);
  lVar14 = *(long *)(lVar14 + 0x70);
  *(long *)(unaff_x22 + 0xb50) = lVar14;
  if (lVar14 == 0) {
    puVar13 = *(undefined **)(unaff_x22 + 0xb40);
    if (puVar13 != (undefined *)0x0) {
      TVar12.unknown = puVar13;
      _swift_retain();
      Swift::Task::cancel(TVar12);
      _swift_release(puVar13);
    }
    lVar14 = *(long *)(unaff_x22 + 0xb08);
    lVar16 = *(long *)(lVar14 + 0x70);
    *(long *)(unaff_x22 + 0xb78) = lVar16;
    if (lVar16 == 0) {
      lVar16 = *(long *)(unaff_x22 + 0xb38);
      if (lVar16 != 0) {
        lVar11 = *(long *)(unaff_x22 + 0xb48);
        lVar14 = lVar16;
        _swift_getObjectType(lVar16);
        piVar8 = *(int **)(lVar11 + 0x20);
        iVar1 = *piVar8;
        plVar6 = (long *)(ulong)(uint)piVar8[1];
        _swift_unknownObjectRetain(lVar16);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xba0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10052ec90;
                    /* WARNING: Could not recover jumptable at 0x00010052e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar8))(lVar14,lVar11);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0xbd0) = 0;
      if (*(long *)(unaff_x22 + 0xb40) != 0) {
        TVar12.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
        _swift_retain(*(long *)(unaff_x22 + 0xb40));
        _swift_task_alloc();
        *(undefined **)(unaff_x22 + 0xbf8) = TVar12.unknown;
        *(long *)TVar12.unknown = unaff_x22;
        *(code **)(TVar12.unknown + 8) = FUN_10052f420;
        (extension_Swift)::Swift::Task::_get_value(TVar12);
        return;
      }
      lVar16 = *(long *)(lVar14 + 0x70);
      *(long *)(unaff_x22 + 0xc00) = lVar16;
      if (lVar16 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010052e554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      lVar11 = *(long *)(lVar14 + 0x78);
      *(long *)(unaff_x22 + 0xc08) = lVar11;
      lVar14 = lVar16;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0xc10) = lVar14;
      *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar11 + 0x10);
      uVar10 = *(undefined8 *)(lVar11 + 8);
      _swift_unknownObjectRetain(lVar16);
      UVar5 = Swift::Actor::get_unownedExecutor();
      pcVar2 = FUN_10052f530;
    }
    else {
      lVar11 = *(long *)(lVar14 + 0x78);
      *(long *)(unaff_x22 + 0xb80) = lVar11;
      lVar14 = lVar16;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0xb88) = lVar14;
      *(undefined8 *)(unaff_x22 + 0xb90) = *(undefined8 *)(lVar11 + 0x10);
      uVar10 = *(undefined8 *)(lVar11 + 8);
      _swift_unknownObjectRetain(lVar16);
      UVar5 = Swift::Actor::get_unownedExecutor();
      pcVar2 = FUN_10052e940;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xb58) = lVar11;
    lVar16 = lVar14;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xb60) = lVar16;
    *(undefined8 *)(unaff_x22 + 0xb68) = *(undefined8 *)(lVar11 + 0x10);
    uVar10 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar14);
    UVar5 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_10052e558;
  }
  _swift_task_switch(pcVar2,UVar5.unknown,uVar10);
  return;
}



/* Address: 0x10052e558 | FUN_10052e558 */

void FUN_10052e558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xb68))(uVar1,*(undefined8 *)(unaff_x22 + 0xb58));
  *(undefined8 *)(unaff_x22 + 0xb70) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052e5b0,uVar2,0);
  return;
}



/* Address: 0x10052e5b0 | FUN_10052e5b0 */

void FUN_10052e5b0(void)

{
  int iVar1;
  UnownedSerialExecutor UVar2;
  code *pcVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  Task TVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x22 + 0xb70);
  _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0xa78,0,0);
  FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x958);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x970);
  lVar9 = *(long *)(unaff_x22 + 0x978);
  FUN_100004640(unaff_x22 + 0x958,uVar6);
  (**(code **)(lVar9 + 0x70))(uVar6,lVar9);
  FUN_100004594(unaff_x22 + 0x958);
  if (((uint)uVar6 & 0xff) < 2) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb70);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x908);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x920);
    lVar9 = *(long *)(unaff_x22 + 0x928);
    FUN_100004640(unaff_x22 + 0x908,uVar10);
    *(undefined1 *)(unaff_x22 + 0x70) = 1;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad220;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 200) = 0x131;
    *(undefined1 *)(unaff_x22 + 0x370) = 1;
    *(undefined8 *)(unaff_x22 + 0x378) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x380) = 0x8000000100dad220;
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    *(undefined8 *)(unaff_x22 + 0x388) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x3b0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x3b8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x3c0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x3c8) = 0x131;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x3d0);
    FUN_1004eaa3c(unaff_x22 + 0x370);
    (**(code **)(lVar9 + 0x28))(unaff_x22 + 0x70,uVar10,lVar9);
    _swift_release(uVar6);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x908);
    puVar8 = *(undefined **)(unaff_x22 + 0xb40);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb70));
    puVar8 = *(undefined **)(unaff_x22 + 0xb40);
  }
  if (puVar8 != (undefined *)0x0) {
    TVar7.unknown = puVar8;
    _swift_retain();
    Swift::Task::cancel(TVar7);
    _swift_release(puVar8);
  }
  lVar9 = *(long *)(unaff_x22 + 0xb08);
  lVar12 = *(long *)(lVar9 + 0x70);
  *(long *)(unaff_x22 + 0xb78) = lVar12;
  if (lVar12 == 0) {
    lVar12 = *(long *)(unaff_x22 + 0xb38);
    if (lVar12 != 0) {
      lVar11 = *(long *)(unaff_x22 + 0xb48);
      lVar9 = lVar12;
      _swift_getObjectType(lVar12);
      piVar5 = *(int **)(lVar11 + 0x20);
      iVar1 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      _swift_unknownObjectRetain(lVar12);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xba0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10052ec90;
                    /* WARNING: Could not recover jumptable at 0x00010052e864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))(lVar9,lVar11);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0xbd0) = 0;
    if (*(long *)(unaff_x22 + 0xb40) != 0) {
      TVar7.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
      _swift_retain(*(long *)(unaff_x22 + 0xb40));
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0xbf8) = TVar7.unknown;
      *(long *)TVar7.unknown = unaff_x22;
      *(code **)(TVar7.unknown + 8) = FUN_10052f420;
      (extension_Swift)::Swift::Task::_get_value(TVar7);
      return;
    }
    lVar12 = *(long *)(lVar9 + 0x70);
    *(long *)(unaff_x22 + 0xc00) = lVar12;
    if (lVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010052e93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar11 = *(long *)(lVar9 + 0x78);
    *(long *)(unaff_x22 + 0xc08) = lVar11;
    lVar9 = lVar12;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xc10) = lVar9;
    *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar11 + 0x10);
    uVar6 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar12);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10052f530;
  }
  else {
    lVar11 = *(long *)(lVar9 + 0x78);
    *(long *)(unaff_x22 + 0xb80) = lVar11;
    lVar9 = lVar12;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xb88) = lVar9;
    *(undefined8 *)(unaff_x22 + 0xb90) = *(undefined8 *)(lVar11 + 0x10);
    uVar6 = *(undefined8 *)(lVar11 + 8);
    _swift_unknownObjectRetain(lVar12);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10052e940;
  }
  _swift_task_switch(pcVar3,UVar2.unknown,uVar6);
  return;
}



/* Address: 0x10052e940 | FUN_10052e940 */

void FUN_10052e940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xb90))(uVar1,*(undefined8 *)(unaff_x22 + 0xb80));
  *(undefined8 *)(unaff_x22 + 0xb98) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052e998,uVar2,0);
  return;
}



/* Address: 0x10052e998 | FUN_10052e998 */

void FUN_10052e998(void)

{
  int iVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  Task TVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x22 + 0xb98);
  _swift_beginAccess(lVar10 + 0x20,unaff_x22 + 0xa90,0,0);
  FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x8b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x8d0);
  lVar8 = *(long *)(unaff_x22 + 0x8d8);
  FUN_100004640(unaff_x22 + 0x8b8,uVar5);
  (**(code **)(lVar8 + 0x70))(uVar5,lVar8);
  FUN_100004594(unaff_x22 + 0x8b8);
  if (((uint)uVar5 & 0xff) < 2) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb98);
    FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x868);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x880);
    lVar8 = *(long *)(unaff_x22 + 0x888);
    FUN_100004640(unaff_x22 + 0x868,uVar9);
    *(undefined1 *)(unaff_x22 + 0xd0) = 1;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000029;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad240;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x120) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x135;
    *(undefined1 *)(unaff_x22 + 0x430) = 1;
    *(undefined8 *)(unaff_x22 + 0x438) = 0xd000000000000029;
    *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dad240;
    *(undefined8 *)(unaff_x22 + 0x450) = 0;
    *(undefined8 *)(unaff_x22 + 0x448) = 0;
    *(undefined8 *)(unaff_x22 + 0x460) = 0;
    *(undefined8 *)(unaff_x22 + 0x458) = 0;
    *(undefined8 *)(unaff_x22 + 0x468) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x478) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x480) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x488) = 0x135;
    FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x490);
    FUN_1004eaa3c(unaff_x22 + 0x430);
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0xd0,uVar9,lVar8);
    _swift_release(uVar5);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    FUN_100004594(unaff_x22 + 0x868);
    lVar8 = *(long *)(unaff_x22 + 0xb38);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb98));
    lVar8 = *(long *)(unaff_x22 + 0xb38);
  }
  if (lVar8 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0xb48);
    lVar10 = lVar8;
    _swift_getObjectType(lVar8);
    piVar4 = *(int **)(lVar6 + 0x20);
    iVar1 = *piVar4;
    plVar2 = (long *)(ulong)(uint)piVar4[1];
    _swift_unknownObjectRetain(lVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xba0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10052ec90;
                    /* WARNING: Could not recover jumptable at 0x00010052ea8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(lVar10,lVar6);
    return;
  }
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xbd0) = lVar8;
  if (lVar8 != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xbd8) = lVar6;
    lVar10 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xbe0) = lVar10;
    *(undefined8 *)(unaff_x22 + 0xbe8) = *(undefined8 *)(lVar6 + 0x10);
    uVar5 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10052f140,UVar3.unknown,uVar5);
    return;
  }
  if (*(long *)(unaff_x22 + 0xb40) == 0) {
    *(undefined8 *)(unaff_x22 + 0xc00) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010052ec8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  TVar7.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
  _swift_retain(*(long *)(unaff_x22 + 0xb40));
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xbf8) = TVar7.unknown;
  *(long *)TVar7.unknown = unaff_x22;
  *(code **)(TVar7.unknown + 8) = FUN_10052f420;
  (extension_Swift)::Swift::Task::_get_value(TVar7);
  return;
}



/* Address: 0x10052ec90 | FUN_10052ec90 */

void FUN_10052ec90(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xb08);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xba0));
  _swift_task_switch(FUN_10052ecdc,uVar1,0);
  return;
}



/* Address: 0x10052ecdc | FUN_10052ecdc */

void FUN_10052ecdc(void)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  long lVar3;
  Task TVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xba8) = lVar5;
  if (lVar5 == 0) {
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0xb38));
    if (*(long *)(unaff_x22 + 0xb40) != 0) {
      TVar4.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
      _swift_retain(*(long *)(unaff_x22 + 0xb40));
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0xbf8) = TVar4.unknown;
      *(long *)TVar4.unknown = unaff_x22;
      *(code **)(TVar4.unknown + 8) = FUN_10052f420;
      (extension_Swift)::Swift::Task::_get_value(TVar4);
      return;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
    *(long *)(unaff_x22 + 0xc00) = lVar5;
    if (lVar5 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0xb38));
                    /* WARNING: Could not recover jumptable at 0x00010052ee44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xc08) = lVar6;
    lVar3 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xc10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar6 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_10052f530;
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xbb0) = lVar6;
    lVar3 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 3000) = lVar3;
    *(undefined8 *)(unaff_x22 + 0xbc0) = *(undefined8 *)(lVar6 + 0x10);
    uVar7 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_10052ee48;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar7);
  return;
}



/* Address: 0x10052ee48 | FUN_10052ee48 */

void FUN_10052ee48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 3000);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xba8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xbc0))(uVar1,*(undefined8 *)(unaff_x22 + 0xbb0));
  *(undefined8 *)(unaff_x22 + 0xbc8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052eea0,uVar2,0);
  return;
}



/* Address: 0x10052eea0 | FUN_10052eea0 */

void FUN_10052eea0(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  Task TVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0xbc8);
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0xaf0,0,0);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x980);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x998);
  lVar4 = *(long *)(unaff_x22 + 0x9a0);
  FUN_100004640(unaff_x22 + 0x980,uVar2);
  (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
  FUN_100004594(unaff_x22 + 0x980);
  if (((uint)uVar2 & 0xff) < 2) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xbc8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb38);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x9d0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x9e8);
    lVar4 = *(long *)(unaff_x22 + 0x9f0);
    FUN_100004640(unaff_x22 + 0x9d0,uVar8);
    *(undefined1 *)(unaff_x22 + 400) = 1;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dad2f0;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x13b;
    *(undefined1 *)(unaff_x22 + 0x610) = 1;
    *(undefined8 *)(unaff_x22 + 0x618) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x620) = 0x8000000100dad2f0;
    *(undefined8 *)(unaff_x22 + 0x630) = 0;
    *(undefined8 *)(unaff_x22 + 0x628) = 0;
    *(undefined8 *)(unaff_x22 + 0x640) = 0;
    *(undefined8 *)(unaff_x22 + 0x638) = 0;
    *(undefined8 *)(unaff_x22 + 0x648) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x650) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x658) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x660) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x668) = 0x13b;
    FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x5b0);
    FUN_1004eaa3c(unaff_x22 + 0x610);
    (**(code **)(lVar4 + 0x28))(unaff_x22 + 400,uVar8,lVar4);
    _swift_release(uVar5);
    _swift_unknownObjectRelease(uVar2);
    FUN_1004eaa3c(unaff_x22 + 400);
    FUN_100004594(unaff_x22 + 0x9d0);
    lVar4 = *(long *)(unaff_x22 + 0xb40);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb38);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xbc8));
    _swift_unknownObjectRelease(uVar2);
    lVar4 = *(long *)(unaff_x22 + 0xb40);
  }
  if (lVar4 != 0) {
    TVar3.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_retain(lVar4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0xbf8) = TVar3.unknown;
    *(long *)TVar3.unknown = unaff_x22;
    *(code **)(TVar3.unknown + 8) = FUN_10052f420;
    (extension_Swift)::Swift::Task::_get_value(TVar3);
    return;
  }
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xc00) = lVar4;
  if (lVar4 == 0) {
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0xb38));
                    /* WARNING: Could not recover jumptable at 0x00010052f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
  *(long *)(unaff_x22 + 0xc08) = lVar6;
  lVar7 = lVar4;
  _swift_getObjectType();
  *(long *)(unaff_x22 + 0xc10) = lVar7;
  *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 8);
  _swift_unknownObjectRetain(lVar4);
  UVar1 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10052f530,UVar1.unknown,uVar2);
  return;
}



/* Address: 0x10052f140 | FUN_10052f140 */

void FUN_10052f140(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xbe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xbd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xbe8))(uVar1,*(undefined8 *)(unaff_x22 + 0xbd8));
  *(undefined8 *)(unaff_x22 + 0xbf0) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052f198,uVar2,0);
  return;
}



/* Address: 0x10052f198 | FUN_10052f198 */

void FUN_10052f198(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  Task TVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0xbf0);
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0xaa8,0,0);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x840);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x858);
  lVar4 = *(long *)(unaff_x22 + 0x860);
  FUN_100004640(unaff_x22 + 0x840,uVar2);
  (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
  FUN_100004594(unaff_x22 + 0x840);
  if (((uint)uVar2 & 0xff) < 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xbf0);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x818);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x830);
    lVar4 = *(long *)(unaff_x22 + 0x838);
    FUN_100004640(unaff_x22 + 0x818,uVar5);
    *(undefined1 *)(unaff_x22 + 0x130) = 1;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xd00000000000002d;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dad270;
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x178) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x180) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x13d;
    *(undefined1 *)(unaff_x22 + 0x4f0) = 1;
    *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd00000000000002d;
    *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100dad270;
    *(undefined8 *)(unaff_x22 + 0x510) = 0;
    *(undefined8 *)(unaff_x22 + 0x508) = 0;
    *(undefined8 *)(unaff_x22 + 0x520) = 0;
    *(undefined8 *)(unaff_x22 + 0x518) = 0;
    *(undefined8 *)(unaff_x22 + 0x528) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x530) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x538) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x540) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x548) = 0x13d;
    FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x550);
    FUN_1004eaa3c(unaff_x22 + 0x4f0);
    (**(code **)(lVar4 + 0x28))(unaff_x22 + 0x130,uVar5,lVar4);
    _swift_release(uVar2);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    FUN_100004594(unaff_x22 + 0x818);
    lVar4 = *(long *)(unaff_x22 + 0xb40);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xbf0));
    lVar4 = *(long *)(unaff_x22 + 0xb40);
  }
  if (lVar4 != 0) {
    TVar3.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_retain(lVar4);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0xbf8) = TVar3.unknown;
    *(long *)TVar3.unknown = unaff_x22;
    *(code **)(TVar3.unknown + 8) = FUN_10052f420;
    (extension_Swift)::Swift::Task::_get_value(TVar3);
    return;
  }
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xc00) = lVar4;
  if (lVar4 == 0) {
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0xb38));
                    /* WARNING: Could not recover jumptable at 0x00010052f41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
  *(long *)(unaff_x22 + 0xc08) = lVar6;
  lVar7 = lVar4;
  _swift_getObjectType();
  *(long *)(unaff_x22 + 0xc10) = lVar7;
  *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar6 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 8);
  _swift_unknownObjectRetain(lVar4);
  UVar1 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10052f530,UVar1.unknown,uVar2);
  return;
}



/* Address: 0x10052f420 | FUN_10052f420 */

void FUN_10052f420(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0xb40);
  uVar2 = *(undefined8 *)(lVar1 + 0xb08);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xbf8));
  _swift_release(uVar3);
  _swift_task_switch(FUN_10052f478,uVar2,0);
  return;
}



/* Address: 0x10052f478 | FUN_10052f478 */

void FUN_10052f478(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xc00) = lVar3;
  if (lVar3 != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xc08) = lVar4;
    lVar1 = lVar3;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xc10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0xc18) = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    _swift_unknownObjectRetain(lVar3);
    UVar2 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10052f530,UVar2.unknown,uVar5);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb40));
  _swift_unknownObjectRelease(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010052f52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052f530 | FUN_10052f530 */

void FUN_10052f530(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc00);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xc18))(uVar1,*(undefined8 *)(unaff_x22 + 0xc08));
  *(undefined8 *)(unaff_x22 + 0xc20) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052f588,uVar2,0);
  return;
}



/* Address: 0x10052f588 | FUN_10052f588 */

void FUN_10052f588(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x22 + 0xc20);
  _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0xac0,0,0);
  FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x7f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x808);
  lVar3 = *(long *)(unaff_x22 + 0x810);
  FUN_100004640(unaff_x22 + 0x7f0,uVar2);
  (**(code **)(lVar3 + 0x70))(uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0x7f0);
  if (((uint)uVar2 & 0xff) < 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xc20);
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x890);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x8a8);
    lVar3 = *(long *)(unaff_x22 + 0x8b0);
    FUN_100004640(unaff_x22 + 0x890,uVar4);
    *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad2a0;
    *(undefined8 *)(unaff_x22 + 0x210) = 0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x238) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x240) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x142;
    *(undefined1 *)(unaff_x22 + 0x790) = 1;
    *(undefined8 *)(unaff_x22 + 0x798) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0x7a0) = 0x8000000100dad2a0;
    *(undefined8 *)(unaff_x22 + 0x7b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x7a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x7b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 2000) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x7d8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x7e0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x7e8) = 0x142;
    FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 0x730);
    FUN_1004eaa3c(unaff_x22 + 0x790);
    (**(code **)(lVar3 + 0x28))(unaff_x22 + 0x1f0,uVar4,lVar3);
    _swift_release(uVar2);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    FUN_100004594(unaff_x22 + 0x890);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xc20));
  }
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x70);
  *(long *)(unaff_x22 + 0xc28) = lVar3;
  if (lVar3 != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0xb08) + 0x78);
    *(long *)(unaff_x22 + 0xc30) = lVar5;
    lVar6 = lVar3;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xc38) = lVar6;
    *(undefined8 *)(unaff_x22 + 0xc40) = *(undefined8 *)(lVar5 + 0x10);
    uVar2 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar3);
    UVar1 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10052f7c0,UVar1.unknown,uVar2);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb40));
  _swift_unknownObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010052f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052f7c0 | FUN_10052f7c0 */

void FUN_10052f7c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb08);
  (**(code **)(unaff_x22 + 0xc40))(uVar1,*(undefined8 *)(unaff_x22 + 0xc30));
  *(undefined8 *)(unaff_x22 + 0xc48) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052f818,uVar2,0);
  return;
}



/* Address: 0x10052f818 | FUN_10052f818 */

void FUN_10052f818(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0xc48);
  _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0xad8,0,0);
  FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x8e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x8f8);
  lVar3 = *(long *)(unaff_x22 + 0x900);
  FUN_100004640(unaff_x22 + 0x8e0,uVar1);
  (**(code **)(lVar3 + 0x70))(uVar1,lVar3);
  FUN_100004594(unaff_x22 + 0x8e0);
  if (((uint)uVar1 & 0xff) < 2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb38);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x930);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x948);
    lVar3 = *(long *)(unaff_x22 + 0x950);
    FUN_100004640(unaff_x22 + 0x930,uVar6);
    *(undefined1 *)(unaff_x22 + 0x250) = 1;
    *(undefined8 *)(unaff_x22 + 600) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100dad2d0;
    *(undefined8 *)(unaff_x22 + 0x270) = 0;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x298) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x144;
    *(undefined1 *)(unaff_x22 + 0x6d0) = 1;
    *(undefined8 *)(unaff_x22 + 0x6d8) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x6e0) = 0x8000000100dad2d0;
    *(undefined8 *)(unaff_x22 + 0x6f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6e8) = 0;
    *(undefined8 *)(unaff_x22 + 0x700) = 0;
    *(undefined8 *)(unaff_x22 + 0x6f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x708) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x710) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x718) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x720) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x728) = 0x144;
    FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x670);
    FUN_1004eaa3c(unaff_x22 + 0x6d0);
    (**(code **)(lVar3 + 0x28))(unaff_x22 + 0x250,uVar6,lVar3);
    _swift_release(uVar4);
    _swift_unknownObjectRelease(uVar2);
    _swift_release(uVar1);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    FUN_100004594(unaff_x22 + 0x930);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb38);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xc48));
    _swift_unknownObjectRelease(uVar1);
    _swift_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010052fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052fa04 | FUN_10052fa04 */

void FUN_10052fa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  _swift_task_switch(FUN_10052fa24);
  return;
}



/* Address: 0x10052fa24 | FUN_10052fa24 */

void FUN_10052fa24(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  undefined *local_70;
  
  uVar8 = *(ulong *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  UNRECOVERED_JUMPTABLE = *(code **)(uVar8 + 0x40);
  (*UNRECOVERED_JUMPTABLE)();
  _swift_beginAccess(lVar1 + 0x110,unaff_x22 + 0x38,0,0);
  uVar12 = *(ulong *)(lVar1 + 0x110);
  if (*(long *)(uVar12 + 0x10) == 0) {
    _swift_bridgeObjectRetain(uVar12);
  }
  else {
    _swift_bridgeObjectRetain_n(uVar12,2);
    uVar9 = uVar8;
    FUN_100071370();
    if ((uVar9 & 1) != 0) {
      local_70 = *(undefined **)(*(long *)(uVar12 + 0x38) + lVar4 * 8);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar8);
      uVar8 = uVar12;
      goto LAB_10052fae0;
    }
    _swift_bridgeObjectRelease(uVar12);
  }
  local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10052fae0:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar12);
  uVar5 = uVar3;
  uVar10 = uVar7;
  (*UNRECOVERED_JUMPTABLE)(uVar3,uVar7);
  puVar6 = &DAT_100fcb6d8;
  FUN_1000f7830(&DAT_100fcb6d8,&DAT_100c50488);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 3;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  FUN_1004e8048(0,uVar3,uVar7);
  thunk_FUN_1004e3220(uVar13,uVar11);
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  _swift_retain(uVar11);
  FUN_1005428b0(puVar6);
  _swift_beginAccess(lVar1 + 0x110,unaff_x22 + 0x50,0x21,0);
  uVar7 = *(undefined8 *)(lVar1 + 0x110);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar11 = *(undefined8 *)(lVar1 + 0x110);
  *(undefined8 *)(lVar1 + 0x110) = 0x8000000000000000;
  FUN_1004b578c(local_70,uVar5,uVar10,uVar7);
  _swift_bridgeObjectRelease(uVar10);
  *(undefined8 *)(lVar1 + 0x110) = uVar11;
  _swift_endAccess(unaff_x22 + 0x50);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  _swift_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010052fc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x10052fc1c | FUN_10052fc1c */

void FUN_10052fc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar1 = param_4;
  lVar5 = param_5;
  (**(code **)(param_5 + 0x48))(param_4,param_5);
  FUN_1004e6798(0,param_4,param_5);
  puVar2 = &DAT_100edd2e0;
  _swift_allocObject(&DAT_100edd2e0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(long *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  puVar3 = &DAT_100c55820;
  FUN_1004e3220(&DAT_100c55820,puVar2);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_68,0x21,0);
  _swift_retain(param_3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,uVar1,lVar5,uVar4);
  _swift_bridgeObjectRelease(lVar5);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar6;
  _swift_endAccess(auStack_68);
  _swift_retain();
  return;
}



/* Address: 0x10052fd34 | FUN_10052fd34 */

void FUN_10052fd34(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar4;
  lVar3 = 0;
  FUN_1004e3b34(0,param_5,param_6);
  iVar2 = *(int *)(lVar3 + 0x28);
  iVar1 = *param_3;
  plVar5 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10052fe10;
                    /* WARNING: Could not recover jumptable at 0x00010052fe0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar5,uVar4,param_2 + iVar2);
  return;
}



/* Address: 0x10052fe10 | FUN_10052fe10 */

void FUN_10052fe10(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10052fe6c;
  }
  else {
    pcVar1 = FUN_10052fee0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10052fe6c | FUN_10052fe6c */

void FUN_10052fe6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x18);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = *(undefined1 *)(puVar1 + 2);
  FUN_1004e1b10(*(undefined8 *)(unaff_x22 + 0x10),uVar2,uVar4,uVar5,uVar3,
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  FUN_1004a7398(uVar2,uVar4,uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010052fedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052fee0 | FUN_10052fee0 */

void FUN_10052fee0(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010052ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10052ff14 | FUN_10052ff14 */

void FUN_10052ff14(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10052ff30);
  return;
}



/* Address: 0x10052ff30 | FUN_10052ff30 */

/* WARNING: Removing unreachable block (ram,0x00010052ffc8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010052ffbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10052ff30(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  JSONEncoder *pJVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar8 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar6 + 0x78);
    pJVar9 = *(JSONEncoder **)(lVar6 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar2 = &DAT_100fcf0c0;
    FUN_1000f7830(&DAT_100fcf0c0,&DAT_100c56fd0);
    puVar3 = &DAT_100fcf0c8;
    FUN_100134584(&DAT_100fcf0c8,&DAT_100fcf0c0,&DAT_100c56fd0,
                  &TargetProtocolConformanceDescriptor_100c52d60);
    DVar4 = Foundation::JSONEncoder::_encode(pJVar9,puVar3,puVar2,puVar3);
    *(undefined **)(unaff_x22 + 0x30) = DVar4.unknown;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    _swift_getObjectType(lVar8);
    piVar7 = *(int **)(lVar10 + 0x28);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1005300bc;
                    /* WARNING: Could not recover jumptable at 0x0001005300b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(DVar4.unknown,puVar2,lVar8,lVar10);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100530044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005300bc | FUN_1005300bc */

void FUN_1005300bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100530118;
  }
  else {
    pcVar1 = FUN_100530158;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x20),0);
  return;
}



/* Address: 0x100530118 | FUN_100530118 */

void FUN_100530118(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100530154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530158 | FUN_100530158 */

void FUN_100530158(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100530194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530198 | FUN_100530198 */

void FUN_100530198(undefined8 *param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1[6];
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  _swift_task_switch(FUN_1005301c4);
  return;
}



/* Address: 0x1005301c4 | FUN_1005301c4 */

/* WARNING: Removing unreachable block (ram,0x00010053025c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100530250 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005301c4(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  JSONEncoder *pJVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  lVar8 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar6 + 0x78);
    pJVar9 = *(JSONEncoder **)(lVar6 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar2 = &DAT_100fcf0a8;
    FUN_1000f7830(&DAT_100fcf0a8,&DAT_100c56fa8);
    puVar3 = &DAT_100fcf0b0;
    FUN_100134584(&DAT_100fcf0b0,&DAT_100fcf0a8,&DAT_100c56fa8,
                  &TargetProtocolConformanceDescriptor_100c52d60);
    DVar4 = Foundation::JSONEncoder::_encode(pJVar9,puVar3,puVar2,puVar3);
    *(undefined **)(unaff_x22 + 0x58) = DVar4.unknown;
    *(undefined **)(unaff_x22 + 0x60) = puVar2;
    _swift_getObjectType(lVar8);
    piVar7 = *(int **)(lVar10 + 0x28);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100530350;
                    /* WARNING: Could not recover jumptable at 0x00010053034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(DVar4.unknown,puVar2,lVar8,lVar10);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001005302d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100530350 | FUN_100530350 */

void FUN_100530350(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005303ac;
  }
  else {
    pcVar1 = FUN_1005303ec;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x48),0);
  return;
}



/* Address: 0x1005303ac | FUN_1005303ac */

void FUN_1005303ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005303e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005303ec | FUN_1005303ec */

void FUN_1005303ec(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100530428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053042c | FUN_10053042c */

void FUN_10053042c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100530448);
  return;
}



/* Address: 0x100530448 | FUN_100530448 */

/* WARNING: Removing unreachable block (ram,0x0001005304e0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005304d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100530448(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  JSONEncoder *pJVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar8 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(long *)(lVar6 + 0x78);
    pJVar9 = *(JSONEncoder **)(lVar6 + 0x130);
    _swift_unknownObjectRetain(lVar8);
    puVar2 = &DAT_100fcefa8;
    FUN_1000f7830(&DAT_100fcefa8,&DAT_100c56ce0);
    puVar3 = &DAT_100fcefb0;
    FUN_100134584(&DAT_100fcefb0,&DAT_100fcefa8,&DAT_100c56ce0,
                  &TargetProtocolConformanceDescriptor_100c52d60);
    DVar4 = Foundation::JSONEncoder::_encode(pJVar9,puVar3,puVar2,puVar3);
    *(undefined **)(unaff_x22 + 0x30) = DVar4.unknown;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    _swift_getObjectType(lVar8);
    piVar7 = *(int **)(lVar10 + 0x28);
    iVar1 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1005305d4;
                    /* WARNING: Could not recover jumptable at 0x0001005305d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(DVar4.unknown,puVar2,lVar8,lVar10);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010053055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


