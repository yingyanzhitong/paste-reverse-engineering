/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100709f74 | FUN_100709f74 */

void FUN_100709f74(undefined8 param_1)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  if (unaff_x20 != 0) {
    if (*(long *)(lVar3 + 0x18) == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar3 + 0x20);
      _swift_getObjectType(*(long *)(lVar3 + 0x18));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    _swift_task_switch(FUN_10070a020,UVar1.unknown,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100709ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1);
  return;
}



/* Address: 0x10070a020 | FUN_10070a020 */

void FUN_10070a020(void)

{
  byte bVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    _swift_willThrowTypedImpl
              ((undefined8 *)(unaff_x22 + 0x10),puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010070a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070a0a8 | FUN_10070a0a8 */

void FUN_10070a0a8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = unaff_x20[4];
  uVar1 = *(undefined1 *)(unaff_x20 + 5);
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar1;
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10070a0e4 | FUN_10070a0e4 */

void FUN_10070a0e4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[4];
  bVar1 = *(byte *)(param_1 + 5);
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[4]);
  uVar3 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar3;
  unaff_x20[3] = uVar5;
  unaff_x20[2] = uVar4;
  unaff_x20[4] = uVar2;
  *(byte *)(unaff_x20 + 5) = bVar1 & 1;
  return;
}



/* Address: 0x10070a134 | FUN_10070a134 */

void FUN_10070a134(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  FUN_10070a1b0();
  _swift_allocObject();
  if (0 < param_2) {
    lVar3 = param_2;
    _swift_slowAlloc(param_2,0xffffffffffffffff);
    *(long *)(lVar2 + 0x10) = lVar3;
    *(long *)(lVar2 + 0x18) = lVar3 + param_2;
    *param_1 = lVar2;
    param_1[1] = lVar3;
    param_1[2] = lVar3;
    param_1[3] = param_3;
    param_1[4] = param_4;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10070a1b0);
  (*pcVar1)();
}



/* Address: 0x10070a1b0 | FUN_10070a1b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10070a1b0(void)

{
  return ZEXT816(0x100fdfae0);
}



/* Address: 0x10070a1d0 | FUN_10070a1d0 */

void FUN_10070a1d0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_10070a1e8,0,0);
  return;
}



/* Address: 0x10070a1e8 | FUN_10070a1e8 */

void FUN_10070a1e8(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010070a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_10070a300;
  FUN_10070a594();
  return;
}



/* Address: 0x10070a268 | FUN_10070a268 */

void FUN_10070a268(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_10070a280,0,0);
  return;
}



/* Address: 0x10070a280 | FUN_10070a280 */

void FUN_10070a280(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  puVar1 = *(undefined1 **)(lVar4 + 8);
  if (puVar1 != *(undefined1 **)(lVar4 + 0x10)) {
    uVar2 = *puVar1;
    *(undefined1 **)(lVar4 + 8) = puVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010070a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar2);
    return;
  }
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10070a300;
  FUN_10070a594();
  return;
}



/* Address: 0x10070a300 | FUN_10070a300 */

void FUN_10070a300(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010070a34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10070a350 | FUN_10070a350 */

void FUN_10070a350(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10070a368,0,0);
  return;
}



/* Address: 0x10070a368 | FUN_10070a368 */

void FUN_10070a368(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  puVar4 = *(undefined1 **)(lVar3 + 8);
  if (puVar4 != *(undefined1 **)(lVar3 + 0x10)) {
    uVar1 = *puVar4;
    *(undefined1 **)(lVar3 + 8) = puVar4 + 1;
    puVar4 = *(undefined1 **)(unaff_x22 + 0x10);
    *puVar4 = uVar1;
    puVar4[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010070a3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10070a3f4;
  FUN_10070a594();
  return;
}



/* Address: 0x10070a3f4 | FUN_10070a3f4 */

void FUN_10070a3f4(undefined2 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    **(undefined2 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10070a450 | FUN_10070a450 */

void FUN_10070a450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10070a4cc;
  FUN_100709ed8(param_2,param_3);
  return;
}



/* Address: 0x10070a4cc | FUN_10070a4cc */

void FUN_10070a4cc(undefined2 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 == 0) {
    **(undefined2 **)(lVar1 + 0x10) = param_1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(long **)(lVar1 + 0x18) = unaff_x20;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010070a538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10070a53c | FUN_10070a53c */

void FUN_10070a53c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_slowDealloc(*(long *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  }
  return;
}



/* Address: 0x10070a564 | FUN_10070a564 */

void FUN_10070a564(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_slowDealloc(*(long *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
  }
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10070a594 | FUN_10070a594 */

void FUN_10070a594(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_10070a5ac,0,0);
  return;
}



/* Address: 0x10070a5ac | FUN_10070a5ac */

/* WARNING: Removing unreachable block (ram,0x00010070a604) */

void FUN_10070a5ac(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x10) + 0x28) & 1) == 0) {
    (extension_Swift)::Swift::Task::_checkCancellation();
    piVar2 = (int *)(*(long **)(unaff_x22 + 0x10))[3];
    lVar6 = **(long **)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x18) = lVar6;
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    iVar1 = *piVar2;
    plVar5 = (long *)(ulong)(uint)piVar2[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x20) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10070a67c;
                    /* WARNING: Could not recover jumptable at 0x00010070a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010070a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0x100);
  return;
}



/* Address: 0x10070a67c | FUN_10070a67c */

void FUN_10070a67c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10070a6e4;
  }
  else {
    pcVar1 = FUN_10070a73c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10070a6e4 | FUN_10070a6e4 */

void FUN_10070a6e4(void)

{
  code *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    iVar4 = 1;
    *(undefined1 *)(lVar8 + 0x28) = 1;
    pbVar3 = *(byte **)(lVar8 + 0x10);
    puVar6 = (undefined8 *)(lVar8 + 8);
    uVar7 = 0;
  }
  else {
    pbVar2 = *(byte **)(*(long *)(unaff_x22 + 0x18) + 0x10);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10070a73c);
      (*pcVar1)();
    }
    iVar4 = 0;
    lVar5 = *(long *)(unaff_x22 + 0x10);
    puVar6 = (undefined8 *)(lVar5 + 8);
    *puVar6 = pbVar2;
    *(byte **)(lVar5 + 0x10) = pbVar2 + lVar8;
    pbVar3 = pbVar2 + 1;
    uVar7 = (uint)*pbVar2;
  }
  *puVar6 = pbVar3;
                    /* WARNING: Could not recover jumptable at 0x00010070a734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7 | iVar4 << 8);
  return;
}



/* Address: 0x10070a73c | FUN_10070a73c */

void FUN_10070a73c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  *(undefined1 *)(lVar1 + 0x28) = 1;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010070a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070a794 | FUN_10070a794 */

void FUN_10070a794(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10070a7a8 | FUN_10070a7a8 */

undefined1  [16] FUN_10070a7a8(void)

{
  return ZEXT816(0x100efbbb0);
}



/* Address: 0x10070a7b8 | FUN_10070a7b8 */

void FUN_10070a7b8(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[4]);
  return;
}



/* Address: 0x10070a7e0 | thunk_FUN_10070a7e4 */

undefined8 * thunk_FUN_10070a7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10070a7e4 | FUN_10070a7e4 */

undefined8 * FUN_10070a7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10070a834 | thunk_FUN_10070a838 */

undefined8 * thunk_FUN_10070a838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_1[4];
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x10070a838 | FUN_10070a838 */

undefined8 * FUN_10070a838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_1[4];
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x10070a8b0 | thunk_FUN_10070a8b4 */

undefined8 * thunk_FUN_10070a8b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*param_1);
  uVar2 = param_2[4];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar1 = param_1[4];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x10070a8b4 | FUN_10070a8b4 */

undefined8 * FUN_10070a8b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*param_1);
  uVar2 = param_2[4];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar1 = param_1[4];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x10070a900 | thunk_FUN_1006632f8 */

void thunk_FUN_1006632f8(void)

{
  FUN_1006632f8();
  return;
}



/* Address: 0x10070a904 | thunk_FUN_100663340 */

void thunk_FUN_100663340(void)

{
  FUN_100663340();
  return;
}



/* Address: 0x10070a908 | FUN_10070a908 */

undefined1  [16] FUN_10070a908(void)

{
  return ZEXT816(0x100efbc30);
}



/* Address: 0x10070a918 | FUN_10070a918 */

void FUN_10070a918(void)

{
  FUN_10070a920(0);
  return;
}



/* Address: 0x10070a920 | FUN_10070a920 */

void FUN_10070a920(void)

{
  undefined8 uVar1;
  
  if (DAT_100fdfa98 != 0) {
    return;
  }
  uVar1 = 0x65000001;
  _swift_getFunctionTypeMetadata1
            (0x65000001,PTR___type_metadata_for_Swift_UnsafeMutableRawBufferPointer_100eacb40,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fdfa98 = uVar1;
  return;
}



/* Address: 0x10070a970 | thunk_FUN_10070a300 */

void thunk_FUN_10070a300(void)

{
  FUN_10070a300();
  return;
}



/* Address: 0x10070a974 | thunk_FUN_10070a7b8 */

void thunk_FUN_10070a7b8(void)

{
  FUN_10070a7b8();
  return;
}



/* Address: 0x10070a978 | thunk_FUN_100663340 */

void thunk_FUN_100663340(void)

{
  FUN_100663340();
  return;
}



/* Address: 0x10070a97c | thunk_FUN_10070a7e4 */

void thunk_FUN_10070a7e4(void)

{
  thunk_FUN_10070a7e4();
  return;
}



/* Address: 0x10070a980 | thunk_FUN_10070a838 */

void thunk_FUN_10070a838(void)

{
  thunk_FUN_10070a838();
  return;
}



/* Address: 0x10070a984 | thunk_FUN_10070a8b4 */

void thunk_FUN_10070a8b4(void)

{
  thunk_FUN_10070a8b4();
  return;
}



/* Address: 0x10070a988 | thunk_FUN_1006632f8 */

void thunk_FUN_1006632f8(void)

{
  FUN_1006632f8();
  return;
}



/* Address: 0x10070a98c | FUN_10070a98c */

void FUN_10070a98c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar1 = (long)&local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_4 + -8);
  lVar2 = lVar1 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar2,param_2);
  (**(code **)(lVar3 + 0x10))(lVar1,param_3,param_5);
  (**(code **)(lVar4 + 0x20))(param_1,lVar2,param_4);
  lVar2 = 0;
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_10070ab0c(0,&local_80);
  (**(code **)(lVar3 + 0x20))(param_1 + *(int *)(lVar2 + 0x34),lVar1,param_5);
  return;
}



/* Address: 0x10070aa80 | FUN_10070aa80 */

void FUN_10070aa80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  lVar1 = 0;
  local_60 = param_4;
  lStack_58 = param_5;
  local_50 = param_6;
  uStack_48 = param_7;
  FUN_10070ab0c(0,&local_60);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x34),param_3,param_5);
  return;
}



/* Address: 0x10070ab0c | FUN_10070ab0c */

void FUN_10070ab0c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd0c0);
  return;
}



/* Address: 0x10070ab18 | FUN_10070ab18 */

void FUN_10070ab18(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10070ab74 | FUN_10070ab74 */

void FUN_10070ab74(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))();
  return;
}



/* Address: 0x10070abd4 | FUN_10070abd4 */

void FUN_10070abd4(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x34);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070ac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070ac3c | FUN_10070ac3c */

void FUN_10070ac3c(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x34);
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070aca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x10070aca8 | FUN_10070aca8 */

void FUN_10070aca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  Optional OVar3;
  long lVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar7 + 0x38);
  (*pcVar6)(param_1,1,1,lVar4);
  lVar5 = 0;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_10070ae24(0,&local_80);
  lVar8 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,param_7,param_5,puVar2,puVar1);
  lVar10 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar10 + 0x38);
  (*pcVar9)(param_1 + lVar8,1,1,lVar5);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar3.value));
  (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar4);
  (*pcVar6)(param_1,0,1,lVar4);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 8))
            (param_1 + lVar8,CONCAT71(extraout_var_00,OVar3.value));
  (**(code **)(lVar10 + 0x20))(param_1 + lVar8,param_3,lVar5);
  (*pcVar9)(param_1 + lVar8,0,1,lVar5);
  return;
}



/* Address: 0x10070ae24 | FUN_10070ae24 */

void FUN_10070ae24(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd114);
  return;
}



/* Address: 0x10070ae30 | FUN_10070ae30 */

void FUN_10070ae30(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  _swift_task_switch(FUN_10070aef0,0,0);
  return;
}



/* Address: 0x10070aef0 | FUN_10070aef0 */

void FUN_10070aef0(void)

{
  long lVar1;
  int iVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x68) = lVar4;
  lVar6 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  (**(code **)(lVar6 + 0x30))(uVar8,1,lVar4);
  if ((int)uVar8 == 0) {
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar9,lVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10070b130;
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x50),1,1,*(undefined8 *)(unaff_x22 + 0x38));
    uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar6 = *(long *)(unaff_x22 + 0x18);
    lVar4 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x40));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
              (lVar4,CONCAT71(extraout_var,OVar3.value));
    (**(code **)(lVar1 + 0x38))(lVar4,1,1,uVar7);
    iVar2 = *(int *)(lVar6 + 0x34);
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    uVar9 = *(undefined8 *)(lVar6 + 0x18);
    lVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar7,uVar9,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    lVar4 = lVar4 + iVar2;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar4,1,lVar6);
    if ((int)lVar4 != 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x10),1,1,*(undefined8 *)(unaff_x22 + 0x38));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
      _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010070b064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    _swift_getAssociatedConformanceWitness
              (uVar7,uVar9,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10070b370;
  }
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10070b130 | FUN_10070b130 */

void FUN_10070b130(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10070b194;
  }
  else {
    pcVar1 = FUN_10070b3f4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10070b194 | FUN_10070b194 */

void FUN_10070b194(void)

{
  long lVar1;
  int iVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = uVar8;
  (**(code **)(lVar5 + 0x30))(uVar8,1,uVar7);
  if ((int)uVar9 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    lVar5 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x40));
    OVar3 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
              (lVar5,CONCAT71(extraout_var,OVar3.value));
    uVar8 = 1;
    (**(code **)(lVar1 + 0x38))(lVar5,1,1,uVar9);
    iVar2 = *(int *)(lVar4 + 0x34);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar9,uVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
    lVar5 = lVar5 + iVar2;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar5,1,lVar4);
    if ((int)lVar5 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar9,uVar7,lVar4,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x88) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10070b370;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar11 = *(code **)(lVar5 + 0x20);
    (*pcVar11)(uVar9,uVar8,uVar7);
    (*pcVar11)(uVar10,uVar9,uVar7);
    uVar8 = 0;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar8,1,*(undefined8 *)(unaff_x22 + 0x38));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010070b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070b370 | FUN_10070b370 */

void FUN_10070b370(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10070b504,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010070b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10070b3f4 | FUN_10070b3f4 */

void FUN_10070b3f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
            (lVar3,CONCAT71(extraout_var,OVar5.value));
  (**(code **)(lVar6 + 0x38))(lVar3,1,1,uVar1);
  iVar4 = *(int *)(lVar2 + 0x34);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar5.value) + -8) + 8))
            (lVar3 + iVar4,CONCAT71(extraout_var_00,OVar5.value));
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar3 + iVar4,1,1,lVar6);
  _swift_willThrow();
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010070b500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070b504 | FUN_10070b504 */

void FUN_10070b504(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 8))
            (lVar3,CONCAT71(extraout_var,OVar5.value));
  (**(code **)(lVar6 + 0x38))(lVar3,1,1,uVar1);
  iVar4 = *(int *)(lVar2 + 0x34);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar5.value) + -8) + 8))
            (lVar3 + iVar4,CONCAT71(extraout_var_00,OVar5.value));
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar3 + iVar4,1,1,lVar6);
  _swift_willThrow();
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010070b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10070b614 | FUN_10070b614 */

void FUN_10070b614(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10070ae30(plVar1,param_1,param_2);
  return;
}



/* Address: 0x10070b67c | FUN_10070b67c */

void FUN_10070b67c(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 in_x3;
  long in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(in_x4 + 0x20),*(undefined8 *)(in_x4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100708dfc;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x10070b75c | FUN_10070b75c */

void FUN_10070b75c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  
  puVar1 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  lVar5 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar5 + -8);
  lVar4 = *(long *)(lVar3 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar10 = (long)(auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar11 + -8);
  lVar6 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,lVar11,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,puVar1);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  (**(code **)(lVar9 + 0x10))(lVar6,unaff_x20,lVar11);
  Swift::AsyncSequence::_makeAsyncIterator();
  (**(code **)(lVar3 + 0x10))
            (auStack_80 + -(lVar4 + 0xfU & 0xfffffffffffffff0),unaff_x20 + *(int *)(param_2 + 0x34),
             lVar5);
  Swift::AsyncSequence::_makeAsyncIterator();
  FUN_10070aca8(param_1,lVar6 - (lVar2 + 0xfU & 0xfffffffffffffff0),lVar10,lVar11,lVar5,uVar7,uVar8)
  ;
  return;
}



/* Address: 0x10070b8e0 | FUN_10070b8e0 */

void FUN_10070b8e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar4,uVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  return;
}


