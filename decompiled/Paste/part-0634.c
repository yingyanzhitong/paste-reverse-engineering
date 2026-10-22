/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006c0554 | thunk_FUN_1005d79a8 */

void thunk_FUN_1005d79a8(void)

{
  FUN_1005d79a8();
  return;
}



/* Address: 0x1006c0558 | thunk_FUN_1005d79d0 */

void thunk_FUN_1005d79d0(void)

{
  thunk_FUN_1005d79d0();
  return;
}



/* Address: 0x1006c055c | thunk_FUN_1005d7a18 */

void thunk_FUN_1005d7a18(void)

{
  thunk_FUN_1005d7a18();
  return;
}



/* Address: 0x1006c0560 | thunk_FUN_1005d7a80 */

void thunk_FUN_1005d7a80(void)

{
  thunk_FUN_1005d7a80();
  return;
}



/* Address: 0x1006c0564 | thunk_FUN_100342dc0 */

void thunk_FUN_100342dc0(void)

{
  thunk_FUN_100342dc0();
  return;
}



/* Address: 0x1006c0568 | FUN_1006c0568 */

void FUN_1006c0568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_9;
  *(undefined1 *)(unaff_x22 + 0x218) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  _swift_task_switch(FUN_1006c0598,0,0);
  return;
}



/* Address: 0x1006c0598 | FUN_1006c0598 */

void FUN_1006c0598(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_bridgeObjectRetain(uVar1);
  thunk_FUN_1005b3cd0(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar2;
  plVar3 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006c0620;
  FUN_100a6d674(plVar3,unaff_x22 + 0xe8,uVar2,0,*(undefined8 *)(unaff_x22 + 0x1e8),
                *(undefined1 *)(unaff_x22 + 0x218));
  return;
}



/* Address: 0x1006c0620 | FUN_1006c0620 */

void FUN_1006c0620(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x200);
  *(long *)(lVar2 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x208));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006c0690;
  }
  else {
    pcVar1 = FUN_1006c08bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c0690 | FUN_1006c0690 */

void FUN_1006c0690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  long unaff_x22;
  long lVar12;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x138);
  lVar12 = unaff_x22 + 0x10;
  FUN_1006c09cc();
  if ((int)lVar12 == 1) {
    FUN_1006c09e0();
    puVar11 = &DAT_100ef8180;
    uVar6 = 0;
    uVar7 = 0;
    _swift_allocError(&DAT_100ef8180,lVar12,0,0);
    _swift_willThrow();
    lVar12 = *(long *)(unaff_x22 + 0x1f8);
    (**(code **)(lVar12 + 0x40))(*(undefined8 *)(unaff_x22 + 0x1f0));
    _swift_release();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar7);
    iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x20));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c08b8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 0x18));
    *(undefined1 **)(lVar12 + 0x18) = &DAT_e800000000000000;
    builtin_strncpy((char *)(lVar12 + 0x10),"NotFound",8);
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x20));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c08bc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    _swift_release(lVar12);
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar5 = puVar4;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
    puVar5[1] = 0x6e756f4620746f4e;
    *puVar5 = 0x194;
    puVar5[2] = 0xe900000000000064;
    puVar5[3] = puVar4;
    puVar5[4] = 0;
    puVar5[5] = 0;
    _swift_willThrow();
    _swift_errorRelease(puVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0xa8);
    if (lVar12 < 1) {
      lVar12 = 0;
      puVar9 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      uVar8 = 2;
    }
    else {
      uVar8 = *(undefined1 *)(unaff_x22 + 0x218);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
      puVar11 = &DAT_100ef80b0;
      _swift_allocObject(&DAT_100ef80b0,0x48,7);
      *(undefined8 *)(puVar11 + 0x10) = uVar1;
      puVar11[0x18] = uVar8;
      *(undefined8 *)(puVar11 + 0x20) = uVar7;
      *(undefined8 *)(puVar11 + 0x28) = uVar2;
      *(undefined8 *)(puVar11 + 0x30) = 0;
      *(long *)(puVar11 + 0x38) = lVar12 + -1;
      *(undefined8 *)(puVar11 + 0x40) = uVar6;
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(uVar1);
      uVar8 = 1;
      puVar9 = &DAT_100c70c88;
    }
    plVar10 = *(long **)(unaff_x22 + 0x1c0);
    *plVar10 = lVar12;
    plVar10[1] = 0;
    plVar10[2] = (long)puVar9;
    plVar10[3] = (long)puVar11;
    *(undefined1 *)(plVar10 + 4) = uVar8;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006c08b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006c08bc | FUN_1006c08bc */

void FUN_1006c08bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar5 = *(long *)(unaff_x22 + 0x1f8);
  (**(code **)(lVar5 + 0x40))(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_release();
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c09c8);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
  *(undefined1 **)(lVar5 + 0x18) = &DAT_e800000000000000;
  builtin_strncpy((char *)(lVar5 + 0x10),"NotFound",8);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar5);
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar4 = puVar3;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar4,0,0);
    puVar4[1] = 0x6e756f4620746f4e;
    *puVar4 = 0x194;
    puVar4[2] = 0xe900000000000064;
    puVar4[3] = puVar3;
    puVar4[4] = 0;
    puVar4[5] = 0;
    _swift_willThrow();
    _swift_errorRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006c09c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c09cc);
  (*pcVar1)();
}



/* Address: 0x1006c09cc | FUN_1006c09cc */

int FUN_1006c09cc(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (8 < *(byte *)(param_1 + 0x91)) {
    iVar1 = *(byte *)(param_1 + 0x91) - 8;
  }
  return iVar1;
}



/* Address: 0x1006c09e0 | FUN_1006c09e0 */

void FUN_1006c09e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc580 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70cf0,&DAT_100ef8180);
  DAT_100fdc580 = pTVar1;
  return;
}



/* Address: 0x1006c0a20 | FUN_1006c0a20 */

void FUN_1006c0a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x208) = param_12;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x200) = param_11;
  *(undefined1 *)(unaff_x22 + 0x228) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  _swift_task_switch(FUN_1006c0a5c,0,0);
  return;
}



/* Address: 0x1006c0a5c | FUN_1006c0a5c */

void FUN_1006c0a5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_bridgeObjectRetain(uVar1);
  thunk_FUN_1005b3cd0(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x210) = uVar2;
  plVar3 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x218) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006c0ae4;
  FUN_100a6d674(plVar3,unaff_x22 + 0xe8,uVar2,0,*(undefined8 *)(unaff_x22 + 0x1f8),
                *(undefined1 *)(unaff_x22 + 0x228));
  return;
}



/* Address: 0x1006c0ae4 | FUN_1006c0ae4 */

void FUN_1006c0ae4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x210);
  *(long *)(lVar2 + 0x220) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x218));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006c0b54;
  }
  else {
    pcVar1 = FUN_1006c0dbc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c0b54 | FUN_1006c0b54 */

void FUN_1006c0b54(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined *puVar15;
  long *plVar16;
  undefined *puVar17;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x138);
  lVar11 = unaff_x22 + 0x10;
  FUN_1006c09cc();
  if ((int)lVar11 == 1) {
    FUN_1006c09e0();
    puVar17 = &DAT_100ef8180;
    uVar12 = 0;
    uVar13 = 0;
    _swift_allocError(&DAT_100ef8180,lVar11,0,0);
    _swift_willThrow();
    lVar11 = *(long *)(unaff_x22 + 0x208);
    (**(code **)(lVar11 + 0x40))(*(undefined8 *)(unaff_x22 + 0x200));
    _swift_release();
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar13);
    iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x20));
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c0db0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x18));
    *(undefined1 **)(lVar11 + 0x18) = &DAT_e800000000000000;
    builtin_strncpy((char *)(lVar11 + 0x10),"NotFound",8);
    iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x20));
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c0db4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    _swift_release(lVar11);
    puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar10 = puVar9;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar10,0,0);
    puVar10[1] = 0x6e756f4620746f4e;
    *puVar10 = 0x194;
    puVar10[2] = 0xe900000000000064;
    puVar10[3] = puVar9;
    puVar10[4] = 0;
    puVar10[5] = 0;
    _swift_willThrow();
    _swift_errorRelease(puVar17);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0xa8);
    uVar7 = lVar11 - 1;
    if (lVar11 < 1) {
      lVar11 = 0;
      puVar15 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      uVar14 = 2;
    }
    else {
      uVar3 = *(ulong *)(unaff_x22 + 0x1d8);
      uVar4 = *(ulong *)(unaff_x22 + 0x1e0);
      uVar2 = uVar7;
      if ((long)uVar3 <= (long)uVar7) {
        uVar2 = uVar3;
      }
      uVar1 = 0;
      if (-1 < (long)uVar3) {
        uVar1 = uVar2;
      }
      uVar2 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
      if (lVar11 <= (long)uVar4) {
        uVar2 = uVar7;
      }
      if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c0db8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar11 = (uVar2 - uVar1) + 1;
      if (SCARRY8(uVar2 - uVar1,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006c0dbc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar14 = *(undefined1 *)(unaff_x22 + 0x228);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
      puVar17 = &DAT_100ef80d8;
      _swift_allocObject(&DAT_100ef80d8,0x48,7);
      *(undefined8 *)(puVar17 + 0x10) = uVar5;
      puVar17[0x18] = uVar14;
      *(undefined8 *)(puVar17 + 0x20) = uVar13;
      *(undefined8 *)(puVar17 + 0x28) = uVar6;
      *(ulong *)(puVar17 + 0x30) = uVar1;
      *(ulong *)(puVar17 + 0x38) = uVar2;
      *(undefined8 *)(puVar17 + 0x40) = uVar12;
      _swift_bridgeObjectRetain(uVar6);
      _swift_retain(uVar5);
      uVar14 = 1;
      puVar15 = &DAT_100c70c98;
    }
    plVar16 = *(long **)(unaff_x22 + 0x1c0);
    *plVar16 = lVar11;
    plVar16[1] = 0;
    plVar16[2] = (long)puVar15;
    plVar16[3] = (long)puVar17;
    *(undefined1 *)(plVar16 + 4) = uVar14;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006c0da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006c0dbc | FUN_1006c0dbc */

void FUN_1006c0dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar5 = *(long *)(unaff_x22 + 0x208);
  (**(code **)(lVar5 + 0x40))(*(undefined8 *)(unaff_x22 + 0x200));
  _swift_release();
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c0ecc);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
  *(undefined1 **)(lVar5 + 0x18) = &DAT_e800000000000000;
  builtin_strncpy((char *)(lVar5 + 0x10),"NotFound",8);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar2 == 0) {
    _swift_release(lVar5);
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar4 = puVar3;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar4,0,0);
    puVar4[1] = 0x6e756f4620746f4e;
    *puVar4 = 0x194;
    puVar4[2] = 0xe900000000000064;
    puVar4[3] = puVar3;
    puVar4[4] = 0;
    puVar4[5] = 0;
    _swift_willThrow();
    _swift_errorRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006c0ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c0ed0);
  (*pcVar1)();
}



/* Address: 0x1006c0ed0 | FUN_1006c0ed0 */

void FUN_1006c0ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x280) = param_10;
  *(undefined8 *)(unaff_x22 + 0x278) = param_9;
  *(undefined8 *)(unaff_x22 + 0x270) = param_8;
  *(undefined8 *)(unaff_x22 + 0x268) = param_7;
  *(undefined1 *)(unaff_x22 + 0x239) = param_6;
  *(undefined8 *)(unaff_x22 + 0x260) = param_5;
  *(undefined8 *)(unaff_x22 + 600) = param_4;
  *(undefined8 *)(unaff_x22 + 0x250) = param_3;
  *(undefined8 *)(unaff_x22 + 0x248) = param_2;
  *(undefined8 *)(unaff_x22 + 0x240) = param_1;
  _swift_task_switch(FUN_1006c0f14,0,0);
  return;
}



/* Address: 0x1006c0f14 | FUN_1006c0f14 */

void FUN_1006c0f14(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = *(long *)(unaff_x22 + 0x270);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x280) + 0x10) + 8))(lVar1);
  _swift_beginAccess(lVar1 + 0x20,unaff_x22 + 0x218,0,0);
  FUN_100076688(lVar1 + 0x20,unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar8 = *(long *)(unaff_x22 + 0x1e8);
  FUN_100004640(unaff_x22 + 0x1c8,uVar7);
  (**(code **)(lVar8 + 0x70))(uVar7,lVar8);
  FUN_100004594(unaff_x22 + 0x1c8);
  if (((uint)uVar7 & 0xff) < 2) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x248);
    FUN_100076688(lVar1 + 0x20,unaff_x22 + 0x1f0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar8 = *(long *)(unaff_x22 + 0x210);
    FUN_100004640(unaff_x22 + 0x1f0,uVar7);
    puVar2 = &DAT_100fdbdd0;
    FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x2e656c69662e6268;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x28) = 0xec00000068746170;
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
    *(undefined8 *)(puVar2 + 0x38) = uVar5;
    puVar2[0x58] = 0;
    _swift_bridgeObjectRetain(uVar5);
    puVar3 = puVar2;
    FUN_1006c2220();
    _swift_setDeallocating(puVar2);
    FUN_1006c2354(puVar2 + 0x20);
    *(undefined1 *)(unaff_x22 + 0xa8) = 1;
    puVar10 = (undefined1 *)(unaff_x22 + 0x48);
    *puVar10 = 1;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x5d4f49656c69465b;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xec00000054555020;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined **)(unaff_x22 + 0x68) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db01f0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0xd000000000000021;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x8000000100db0210;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x61;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x5d4f49656c69465b;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xec00000054555020;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined **)(unaff_x22 + 200) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db01f0;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0xd000000000000021;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x8000000100db0210;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x61;
    FUN_1005bf638(puVar10,unaff_x22 + 0x168);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xa8));
    (**(code **)(lVar8 + 0x28))(puVar10,uVar7,lVar8);
    _swift_release(lVar1);
    FUN_1004eaa3c(puVar10);
    FUN_100004594(unaff_x22 + 0x1f0);
  }
  else {
    _swift_release(lVar1);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x238) = *(undefined1 *)(unaff_x22 + 0x239);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(uVar6);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
  thunk_FUN_1005b3cd0(uVar7,uVar5);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x290) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1006c1218;
  FUN_100a84ca8();
  return;
}



/* Address: 0x1006c1218 | FUN_1006c1218 */

void FUN_1006c1218(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x288);
  *(long *)(lVar3 + 0x298) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x290));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x260));
    pcVar1 = FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_1006c1298;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c1298 | FUN_1006c1298 */

void FUN_1006c1298(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x0001006c12d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c12d4 | FUN_1006c12d4 */

void FUN_1006c12d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = *param_2;
  _swift_task_switch(FUN_1006c12fc,0,0);
  return;
}



/* Address: 0x1006c12fc | FUN_1006c12fc */

void FUN_1006c12fc(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x58);
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006c13a0;
  FUN_100a4fa64(plVar1,*(undefined8 *)(unaff_x22 + 0x50),0,0x80000,&DAT_100c70d60,unaff_x22 + 0x10,
                &DAT_100f2c810,PTR___type_metadata_for____100eae0c8 + 8,&PTR_PTR_100f2c5a8);
  return;
}



/* Address: 0x1006c13a0 | FUN_1006c13a0 */

void FUN_1006c13a0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006c140c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006c1408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1006c140c | FUN_1006c140c */

void FUN_1006c140c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006c1414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c1418 | FUN_1006c1418 */

void FUN_1006c1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  puVar2 = &DAT_100fdc5b0;
  FUN_1000f7830(&DAT_100fdc5b0,&DAT_100c70d68);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a4f3fc(param_3,puVar2,param_4,param_6);
  return;
}



/* Address: 0x1006c14b4 | FUN_1006c14b4 */

void FUN_1006c14b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x270) = param_10;
  *(undefined8 *)(unaff_x22 + 0x268) = param_9;
  *(undefined1 *)(unaff_x22 + 0x37) = param_8;
  *(undefined8 *)(unaff_x22 + 0x260) = param_7;
  *(undefined8 *)(unaff_x22 + 600) = param_6;
  *(undefined8 *)(unaff_x22 + 0x250) = param_5;
  *(undefined8 *)(unaff_x22 + 0x248) = param_4;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_2;
  *(undefined8 *)(unaff_x22 + 0x230) = param_1;
  _swift_task_switch(FUN_1006c14f8,0,0);
  return;
}



/* Address: 0x1006c14f8 | FUN_1006c14f8 */

void FUN_1006c14f8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = *(long *)(unaff_x22 + 0x268);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x270) + 0x10) + 8))(lVar2);
  _swift_beginAccess(lVar2 + 0x20,unaff_x22 + 0x208,0,0);
  FUN_100076688(lVar2 + 0x20,unaff_x22 + 0x1b8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  lVar1 = *(long *)(unaff_x22 + 0x1d8);
  FUN_100004640(unaff_x22 + 0x1b8,uVar8);
  (**(code **)(lVar1 + 0x70))(uVar8,lVar1);
  FUN_100004594(unaff_x22 + 0x1b8);
  if (((uint)uVar8 & 0xff) < 2) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
    FUN_100076688(lVar2 + 0x20,unaff_x22 + 0x1e0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar1 = *(long *)(unaff_x22 + 0x200);
    FUN_100004640(unaff_x22 + 0x1e0,uVar8);
    puVar3 = &DAT_100fdbdd0;
    FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x20) = 0x2e656c69662e6268;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x28) = 0xec00000068746170;
    *(undefined8 *)(puVar3 + 0x30) = uVar7;
    *(undefined8 *)(puVar3 + 0x38) = uVar6;
    puVar3[0x58] = 0;
    _swift_bridgeObjectRetain(uVar6);
    puVar4 = puVar3;
    FUN_1006c2220();
    _swift_setDeallocating(puVar3);
    FUN_1006c2354(puVar3 + 0x20);
    *(undefined1 *)(unaff_x22 + 0x98) = 1;
    puVar10 = (undefined1 *)(unaff_x22 + 0x38);
    *puVar10 = 1;
    *(undefined8 *)(unaff_x22 + 0x40) = 0x5d4f49656c69465b;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xec00000054555020;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined **)(unaff_x22 + 0x58) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x8000000100db01f0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db0240;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x77;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x5d4f49656c69465b;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xec00000054555020;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined **)(unaff_x22 + 0xb8) = puVar4;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db01f0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db0240;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x77;
    FUN_1005bf638(puVar10,unaff_x22 + 0x158);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x98));
    (**(code **)(lVar1 + 0x28))(puVar10,uVar8,lVar1);
    _swift_release(lVar2);
    FUN_1004eaa3c(puVar10);
    FUN_100004594(unaff_x22 + 0x1e0);
  }
  else {
    _swift_release(lVar2);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x220) = uVar7;
  *(undefined1 *)(unaff_x22 + 0x228) = *(undefined1 *)(unaff_x22 + 0x37);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar7);
  thunk_FUN_1005b3cd0(uVar8,uVar6);
  *(undefined8 *)(unaff_x22 + 0x278) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(int *)(unaff_x22 + 0x28) = (int)uVar11;
  *(int *)(unaff_x22 + 0x2c) = (int)((ulong)uVar11 >> 0x20);
  *(int *)(unaff_x22 + 0x30) = (int)uVar9;
  *(short *)(unaff_x22 + 0x34) = (short)((ulong)uVar9 >> 0x20);
  *(char *)(unaff_x22 + 0x36) = (char)((ulong)uVar9 >> 0x30);
  plVar5 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x280) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1006c1804;
  FUN_100a84ca8();
  return;
}



/* Address: 0x1006c1804 | FUN_1006c1804 */

void FUN_1006c1804(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x278);
  *(long *)(lVar3 + 0x288) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x280));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x260));
    pcVar1 = FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_1006c1884;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c1884 | FUN_1006c1884 */

void FUN_1006c1884(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x0001006c18bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c18c0 | FUN_1006c18c0 */

void FUN_1006c18c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *param_2;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006c1950;
  FUN_100a66e84(param_3,param_4,param_5 & 0xffffffffffffff,0,&DAT_100f2c810,&PTR_PTR_100f2c5a8);
  return;
}



/* Address: 0x1006c1950 | FUN_1006c1950 */

void FUN_1006c1950(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006c19bc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006c19b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1006c19bc | FUN_1006c19bc */

void FUN_1006c19bc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006c19c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c19c8 | FUN_1006c19c8 */

void FUN_1006c19c8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x80) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined1 *)(unaff_x22 + 0x49) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1006c19f0,0,0);
  return;
}



/* Address: 0x1006c19f0 | FUN_1006c19f0 */

void FUN_1006c19f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined1 *)(unaff_x22 + 0x48) = *(undefined1 *)(unaff_x22 + 0x49);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar2);
  thunk_FUN_1005b3cd0(uVar3,uVar2);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar4 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1006c1ad0;
  FUN_100a84a40();
  return;
}



/* Address: 0x1006c1ad0 | FUN_1006c1ad0 */

void FUN_1006c1ad0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x58));
    pcVar2 = FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_1006c1b4c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1006c1b4c | FUN_1006c1b4c */

void FUN_1006c1b4c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0001006c1b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c1b88 | thunk_FUN_1006c1c28 */

void thunk_FUN_1006c1c28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006c1b8c | FUN_1006c1b8c */

void FUN_1006c1b8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar6 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_1006c19c8(param_1,uVar8,uVar5,uVar1,uVar3,uVar2,uVar4,uVar7);
  return;
}



/* Address: 0x1006c1c28 | FUN_1006c1c28 */

void FUN_1006c1c28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006c1c54 | FUN_1006c1c54 */

void FUN_1006c1c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar6 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005c804c;
  FUN_1006c19c8(param_1,uVar8,uVar5,uVar1,uVar3,uVar2,uVar4,uVar7);
  return;
}



/* Address: 0x1006c1cf0 | FUN_1006c1cf0 */

void FUN_1006c1cf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = *param_2;
  _swift_task_switch(FUN_1006c1d14,0,0);
  return;
}



/* Address: 0x1006c1d14 | FUN_1006c1d14 */

void FUN_1006c1d14(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  if (lVar1 < lVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c1db8);
    (*pcVar2)();
  }
  lVar5 = lVar1 + 1;
  if (!SCARRY8(lVar1,1)) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    thunk_FUN_100a62630(lVar3,lVar5,uVar6,*(undefined8 *)(unaff_x22 + 0x88));
    FUN_100a586f8(unaff_x22 + 0x10);
    FUN_10026569c(lVar3,lVar5,uVar6);
    plVar4 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1006c1dbc;
    FUN_100a587a4();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c1dbc);
  (*pcVar2)();
}



/* Address: 0x1006c1dbc | FUN_1006c1dbc */

void FUN_1006c1dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(long **)(lVar2 + 0x40) = unaff_x22;
    *(undefined8 *)(lVar2 + 0x48) = param_1;
    *(undefined8 *)(lVar2 + 0x50) = param_2;
    *(undefined8 *)(lVar2 + 0x58) = param_3;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_1006c1e50;
  }
  else {
    *(long *)(lVar2 + 0xd0) = unaff_x20;
    pcVar1 = FUN_1006c2164;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c1e50 | FUN_1006c1e50 */

void FUN_1006c1e50(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x98);
  if (lVar9 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(ulong *)(unaff_x22 + 0x58);
    lVar5 = *(long *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x20);
    FUN_10007d048(lVar5,uVar3);
    piVar8 = *(int **)(lVar4 + 8);
    iVar1 = *piVar8;
    plVar7 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1006c1f9c;
                    /* WARNING: Could not recover jumptable at 0x0001006c1ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))(lVar9,uVar2,uVar6 & 0xffffffffffffff,uVar3,lVar4);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x80);
  FUN_1006c3150(unaff_x22 + 0x10);
  lVar9 = *(long *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  FUN_100004640(lVar5,lVar9);
  lVar5 = *(long *)(lVar9 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar6;
  (**(code **)(lVar5 + 0x10))();
  piVar8 = *(int **)(lVar4 + 0x18);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1006c2000;
                    /* WARNING: Could not recover jumptable at 0x0001006c1f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(0,lVar9,lVar4);
  return;
}



/* Address: 0x1006c1f9c | FUN_1006c1f9c */

void FUN_1006c1f9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006c2074;
  }
  else {
    pcVar1 = FUN_1006c21a0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c2000 | FUN_1006c2000 */

void FUN_1006c2000(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006c21e4,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001006c2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1006c2074 | FUN_1006c2074 */

void FUN_1006c2074(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006c20d0;
  FUN_100a587a4();
  return;
}



/* Address: 0x1006c20d0 | FUN_1006c20d0 */

void FUN_1006c20d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    *(long **)(lVar2 + 0x40) = unaff_x22;
    *(undefined8 *)(lVar2 + 0x48) = param_1;
    *(undefined8 *)(lVar2 + 0x50) = param_2;
    *(undefined8 *)(lVar2 + 0x58) = param_3;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_1006c1e50;
  }
  else {
    *(long *)(lVar2 + 0xd0) = unaff_x20;
    pcVar1 = FUN_1006c2164;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006c2164 | FUN_1006c2164 */

void FUN_1006c2164(void)

{
  long unaff_x22;
  
  FUN_1006c3150(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006c219c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c21a0 | FUN_1006c21a0 */

void FUN_1006c21a0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  FUN_1006c3150(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006c21e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c21e4 | FUN_1006c21e4 */

void FUN_1006c21e4(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001006c221c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c2220 | FUN_1006c2220 */

undefined * FUN_1006c2220(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc5b8;
    FUN_1000f7830(&DAT_100fdc5b8,&DAT_100c70d70);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_a0,&DAT_100fdbdd8,&DAT_100c6f548);
      uVar3 = uStack_98;
      uVar2 = local_a0;
      uVar6 = local_a0;
      uVar7 = uStack_98;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2350);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x30);
      *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,local_77);
      puVar8[1] = uStack_88;
      *puVar8 = local_90;
      puVar8[3] = CONCAT71(local_77,uStack_78);
      puVar8[2] = uStack_80;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2354);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1006c2354 | FUN_1006c2354 */

undefined8 FUN_1006c2354(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbdd8;
  FUN_1000f7830(&DAT_100fdbdd8,&DAT_100c6f548);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1006c239c | FUN_1006c239c */

void FUN_1006c239c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1006c12d4(plVar5,param_1,param_2,uVar6,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1006c2434 | FUN_1006c2434 */

void FUN_1006c2434(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint7 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(uint7 *)(unaff_x20 + 0x20);
  plVar4 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_1006c18c0(plVar4,param_1,param_2,uVar1,uVar2,(ulong)uVar3);
  return;
}



/* Address: 0x1006c24c8 | FUN_1006c24c8 */

undefined8 * FUN_1006c24c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_retain();
  return param_1;
}



/* Address: 0x1006c24fc | FUN_1006c24fc */

undefined8 * FUN_1006c24fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1006c2548 | FUN_1006c2548 */

undefined8 * FUN_1006c2548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1006c2584 | FUN_1006c2584 */

undefined1  [16] FUN_1006c2584(void)

{
  return ZEXT816(0x100ef8158);
}



/* Address: 0x1006c2594 | FUN_1006c2594 */

undefined1  [16] FUN_1006c2594(void)

{
  return ZEXT816(0x100ef8180);
}



/* Address: 0x1006c25a4 | FUN_1006c25a4 */

undefined * FUN_1006c25a4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *capacity;
  undefined1 *puVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc4b8;
    FUN_1000f7830(&DAT_100fdc4b8,&DAT_100c70738);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar12 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar12 + -0x20);
      uVar4 = *(ulong *)(puVar12 + -0x18);
      uVar3 = *(undefined8 *)(puVar12 + -0x10);
      uVar5 = *(undefined8 *)(puVar12 + -8);
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar4);
      FUN_1006ad53c(uVar3,uVar5,uVar6);
      uVar9 = uVar2;
      uVar10 = uVar4;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006c26bc);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006c26c0);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
      puVar12 = puVar12 + 0x28;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1006c26c0 | FUN_1006c26c0 */

undefined * FUN_1006c26c0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined *capacity;
  undefined1 *puVar16;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc490;
    FUN_1000f7830(&DAT_100fdc490,&DAT_100c706b8);
    puVar12 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar16 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar16 + -0x10);
      uVar6 = *(ulong *)(puVar16 + -8);
      uVar10 = *puVar16;
      uVar3 = *(undefined8 *)(puVar16 + 8);
      uVar7 = *(undefined8 *)(puVar16 + 0x10);
      uVar4 = *(undefined8 *)(puVar16 + 0x18);
      uVar8 = *(undefined8 *)(puVar16 + 0x20);
      uVar5 = *(undefined8 *)(puVar16 + 0x28);
      uVar9 = *(undefined8 *)(puVar16 + 0x30);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      FUN_1006bcff0(uVar4,uVar8,uVar5,uVar9);
      uVar13 = uVar2;
      uVar14 = uVar6;
      FUN_10046483c();
      if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1006c2818);
        (*pcVar11)();
      }
      uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar14 + 0x40) =
           *(ulong *)(puVar12 + uVar14 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar6;
      puVar15 = (undefined1 *)(*(long *)(puVar12 + 0x38) + uVar13 * 0x38);
      *puVar15 = uVar10;
      *(undefined8 *)(puVar15 + 8) = uVar3;
      *(undefined8 *)(puVar15 + 0x10) = uVar7;
      *(undefined8 *)(puVar15 + 0x18) = uVar4;
      *(undefined8 *)(puVar15 + 0x20) = uVar8;
      *(undefined8 *)(puVar15 + 0x28) = uVar5;
      *(undefined8 *)(puVar15 + 0x30) = uVar9;
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1006c281c);
        (*pcVar11)();
      }
      puVar16 = puVar16 + 0x48;
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar12);
  }
  return puVar12;
}



/* Address: 0x1006c281c | FUN_1006c281c */

undefined * FUN_1006c281c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc4b0;
    FUN_1000f7830(&DAT_100fdc4b0,&DAT_100c70730);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006c2928);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006c292c);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}


