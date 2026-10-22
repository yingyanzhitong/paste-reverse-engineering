/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a03080 | FUN_100a03080 */

void FUN_100a03080(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  _swift_task_switch(FUN_100a030e8,0,0);
  return;
}



/* Address: 0x100a030e8 | FUN_100a030e8 */

void FUN_100a030e8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x38),uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar2,lVar5);
  lVar5 = *(long *)(lVar5 + 0x18);
  piVar4 = *(int **)(lVar5 + 0x18);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a0318c;
                    /* WARNING: Could not recover jumptable at 0x000100a03188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x28),lVar5);
  return;
}



/* Address: 0x100a0318c | FUN_100a0318c */

void FUN_100a0318c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a03200,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a031fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a03200 | FUN_100a03200 */

void FUN_100a03200(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a03238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a0323c | FUN_100a0323c */

undefined ** FUN_100a0323c(void)

{
  return &PTR_PTR_100f27a10;
}



/* Address: 0x100a03248 | FUN_100a03248 */

void FUN_100a03248(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a03254 | FUN_100a03254 */

void FUN_100a03254(void)

{
  FUN_100a0325c(0);
  return;
}



/* Address: 0x100a0325c | FUN_100a0325c */

void FUN_100a0325c(void)

{
  undefined8 uVar1;
  
  if (DAT_100ff4560 != 0) {
    return;
  }
  uVar1 = 0x65000001;
  _swift_getFunctionTypeMetadata1(0x65000001,&DAT_100eeaaa8,&DAT_100eeaaa8);
  DAT_100ff4560 = uVar1;
  return;
}



/* Address: 0x100a032a8 | FUN_100a032a8 */

void FUN_100a032a8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a02888(param_1,param_2,param_3 & 0xffffffffffffff,param_4);
  return;
}



/* Address: 0x100a03324 | FUN_100a03324 */

void FUN_100a03324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a02ab0(param_1,param_4,param_2,param_3);
  return;
}



/* Address: 0x100a033a0 | FUN_100a033a0 */

void FUN_100a033a0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a03080(param_1,param_2);
  return;
}



/* Address: 0x100a03404 | FUN_100a03404 */

void FUN_100a03404(void)

{
  FUN_1000f8cac();
  return;
}



/* Address: 0x100a03430 | FUN_100a03430 */

void FUN_100a03430(undefined8 param_1,undefined8 param_2)

{
  FUN_100a03438(param_2,param_1);
  return;
}



/* Address: 0x100a03438 | FUN_100a03438 */

undefined8 FUN_100a03438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff4568;
  FUN_1000f7830(&DAT_100ff4568,&DAT_100c8dc00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a03488 | FUN_100a03488 */

void FUN_100a03488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  FUN_100a03644();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  FUN_1006a4c18();
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a03540;
  FUN_100a03658(param_2,param_3,0);
  return;
}



/* Address: 0x100a03540 | FUN_100a03540 */

void FUN_100a03540(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a035a4;
  }
  else {
    pcVar1 = FUN_100a035ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a035a4 | FUN_100a035a4 */

void FUN_100a035a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100a03438(uVar1,*(undefined8 *)(unaff_x22 + 0x10));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a035e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a035ec | FUN_100a035ec */

void FUN_100a035ec(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1000fb4c4(uVar1,&DAT_100ff4568,&DAT_100c8dc00);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a03640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03644 | FUN_100a03644 */

void FUN_100a03644(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff45e0,&TargetStructDescriptor_100cc91b0);
  return;
}



/* Address: 0x100a03658 | FUN_100a03658 */

void FUN_100a03658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  puVar1 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_100a036cc,0,0);
  return;
}



/* Address: 0x100a036cc | FUN_100a036cc */

void FUN_100a036cc(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x40),uVar1,&DAT_100ff4578,&DAT_100c8e0b0);
  _swift_getEnumCaseMultiPayload(uVar1,uVar8);
  if ((int)uVar1 == 1) {
    lVar7 = **(long **)(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0x58) = lVar7;
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    plVar2 = (long *)0x160;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a038c8;
    FUN_100a06a14(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                  *(undefined8 *)(unaff_x22 + 0x38),uVar8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = &DAT_100ff4580;
  FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
  lVar7 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar7 + 0x20))();
  puVar5 = &DAT_100ff46b0;
  FUN_1000f7830(&DAT_100ff46b0,&DAT_100c8dcd8);
  lVar10 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x20) = (int)uVar1;
  *(char *)(unaff_x22 + 0x27) = (char)((ulong)uVar1 >> 0x38);
  FUN_1008758fc(uVar9,uVar8,uVar1);
  Swift::AsyncStream::Continuation::_yield(uVar6,(undefined8 *)(unaff_x22 + 0x10),puVar3);
  (**(code **)(lVar10 + 8))(uVar6,puVar5);
  (**(code **)(lVar7 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100a038c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a038c8 | FUN_100a038c8 */

void FUN_100a038c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a03c00;
  }
  else {
    pcVar1 = thunk_FUN_100a03c44;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0392c | FUN_100a0392c */

void FUN_100a0392c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  puVar1 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_100a039a0,0,0);
  return;
}



/* Address: 0x100a039a0 | FUN_100a039a0 */

void FUN_100a039a0(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x40),uVar1,&DAT_100ff4578,&DAT_100c8e0b0);
  _swift_getEnumCaseMultiPayload(uVar1,uVar8);
  if ((int)uVar1 == 1) {
    lVar7 = **(long **)(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0x58) = lVar7;
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    plVar2 = (long *)0x160;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a03b9c;
    FUN_100a07354(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                  *(undefined8 *)(unaff_x22 + 0x38),uVar8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = &DAT_100ff4580;
  FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
  lVar7 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar7 + 0x20))();
  puVar5 = &DAT_100ff46b0;
  FUN_1000f7830(&DAT_100ff46b0,&DAT_100c8dcd8);
  lVar10 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x20) = (int)uVar1;
  *(char *)(unaff_x22 + 0x27) = (char)((ulong)uVar1 >> 0x38);
  FUN_1008758fc(uVar9,uVar8,uVar1);
  Swift::AsyncStream::Continuation::_yield(uVar6,(undefined8 *)(unaff_x22 + 0x10),puVar3);
  (**(code **)(lVar10 + 8))(uVar6,puVar5);
  (**(code **)(lVar7 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100a03b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03b9c | FUN_100a03b9c */

void FUN_100a03b9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a03c00;
  }
  else {
    pcVar1 = FUN_100a03c44;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a03c00 | FUN_100a03c00 */

void FUN_100a03c00(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100a03c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03c44 | FUN_100a03c44 */

void FUN_100a03c44(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a03c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03c88 | FUN_100a03c88 */

void FUN_100a03c88(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a03ca4,0,0);
  return;
}



/* Address: 0x100a03ca4 | FUN_100a03ca4 */

void FUN_100a03ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  FUN_10086e7c4(lVar4,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_bridgeObjectRelease(param_3);
  if (0xffffffffffffff9b < lVar4 - 200U) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    plVar5 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x28) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1005fc418;
    FUN_100a03658(uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a03d44);
  (*pcVar3)();
}



/* Address: 0x100a03d44 | FUN_100a03d44 */

void FUN_100a03d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  _swift_task_switch(FUN_100a03d60,0,0);
  return;
}



/* Address: 0x100a03d60 | FUN_100a03d60 */

void FUN_100a03d60(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &DAT_100ff4570;
  FUN_1000f7830(&DAT_100ff4570,&DAT_100c8dc28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_initStackObject();
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x47) = 0;
  puVar1[0x4f] = 2;
  plVar2 = (long *)0x60;
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a03e38;
  FUN_100a03f74(puVar1);
  return;
}



/* Address: 0x100a03e38 | FUN_100a03e38 */

void FUN_100a03e38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    lVar2 = *(long *)(lVar2 + 0x78);
    _swift_setDeallocating(lVar2);
    _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
    pcVar1 = FUN_100a03ebc;
  }
  else {
    pcVar1 = FUN_100a03f08;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a03ebc | FUN_100a03ebc */

void FUN_100a03ebc(void)

{
  long unaff_x22;
  
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x70),&DAT_100ff4568,&DAT_100c8dc00);
                    /* WARNING: Could not recover jumptable at 0x000100a03f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03f08 | FUN_100a03f08 */

void FUN_100a03f08(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  _swift_setDeallocating(lVar2);
  _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
  FUN_1000fb4c4(uVar1,&DAT_100ff4568,&DAT_100c8dc00);
                    /* WARNING: Could not recover jumptable at 0x000100a03f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03f74 | FUN_100a03f74 */

void FUN_100a03f74(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  puVar1 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_100a03fe4,0,0);
  return;
}



/* Address: 0x100a03fe4 | FUN_100a03fe4 */

void FUN_100a03fe4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  uint7 uVar4;
  uint7 uVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x30),uVar16,&DAT_100ff4578,&DAT_100c8e0b0);
  _swift_getEnumCaseMultiPayload(uVar16,uVar14);
  if ((int)uVar16 == 1) {
    lVar11 = **(long **)(unaff_x22 + 0x40);
    *(long *)(unaff_x22 + 0x48) = lVar11;
    uVar14 = *(undefined8 *)(lVar11 + 0x10);
    plVar6 = (long *)0x120;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a04228;
    FUN_100a0b0cc(*(undefined8 *)(unaff_x22 + 0x28),uVar14);
    return;
  }
  lVar11 = *(long *)(unaff_x22 + 0x28);
  puVar7 = &DAT_100ff4580;
  FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
  lVar15 = *(long *)(puVar7 + -8);
  uVar8 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar15 + 0x20))();
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 != 0) {
    puVar13 = (undefined1 *)(*(long *)(unaff_x22 + 0x28) + 0x37);
    do {
      uVar5 = *(uint7 *)(puVar13 + -7);
      uVar2 = puVar13[-1];
      uVar3 = *(undefined3 *)(puVar13 + -3);
      uVar4 = *(uint7 *)(puVar13 + -7);
      uVar14 = *(undefined8 *)(puVar13 + -0xf);
      uVar16 = *(undefined8 *)(puVar13 + -0x17);
      uVar1 = *puVar13;
      puVar9 = &DAT_100ff46b0;
      FUN_1000f7830(&DAT_100ff46b0,&DAT_100c8dcd8);
      lVar12 = *(long *)(puVar9 + -8);
      uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar10);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
      *(undefined1 *)(unaff_x22 + 0x26) = uVar2;
      *(short *)(unaff_x22 + 0x24) = (short)uVar3;
      *(int *)(unaff_x22 + 0x20) = (int)uVar5;
      *(undefined1 *)(unaff_x22 + 0x27) = uVar1;
      FUN_1008758fc(uVar16,uVar14,(ulong)uVar4,uVar1);
      Swift::AsyncStream::Continuation::_yield(uVar10,unaff_x22 + 0x10,puVar7);
      (**(code **)(lVar12 + 8))(uVar10,puVar9);
      _swift_task_dealloc(uVar10);
      lVar11 = lVar11 + -1;
      puVar13 = puVar13 + 0x18;
    } while (lVar11 != 0);
  }
  (**(code **)(lVar15 + 8))(uVar8,puVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a04224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04228 | FUN_100a04228 */

void FUN_100a04228(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a0428c;
  }
  else {
    pcVar1 = FUN_100a042d0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0428c | FUN_100a0428c */

void FUN_100a0428c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a042cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a042d0 | FUN_100a042d0 */

void FUN_100a042d0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a04310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04314 | FUN_100a04314 */

void FUN_100a04314(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_2;
  *(undefined8 **)(unaff_x22 + 0x128) = param_3;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  lVar2 = 0;
  FUN_100a04bdc();
  *(long *)(unaff_x22 + 0x130) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  lVar2 = 0;
  FUN_100a03644();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  uVar5 = *param_3;
  uVar1 = param_3[1];
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x158) = uVar1;
  uVar5 = param_3[2];
  *(undefined8 *)(unaff_x22 + 0x168) = param_3[3];
  *(undefined8 *)(unaff_x22 + 0x160) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x111) = *(undefined1 *)(param_3 + 4);
  FUN_1006a4c18();
  _swift_task_switch(FUN_100a043d8,0,0);
  return;
}



/* Address: 0x100a043d8 | FUN_100a043d8 */

void FUN_100a043d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)(unaff_x22 + 0x111) == '\0') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    puVar5 = &DAT_100ff4570;
    FUN_1000f7830(&DAT_100ff4570,&DAT_100c8dc28);
    _swift_initStackObject();
    *(undefined **)(unaff_x22 + 0x170) = puVar5;
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    *(undefined8 *)(puVar5 + 0x28) = uVar2;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = uVar8;
    *(undefined8 *)(puVar5 + 0x40) = uVar1;
    puVar5[0x4e] = (char)((ulong)uVar3 >> 0x30);
    *(short *)(puVar5 + 0x4c) = (short)((ulong)uVar3 >> 0x20);
    *(int *)(puVar5 + 0x48) = (int)uVar3;
    puVar5[0x4f] = 1;
    *(undefined8 *)(puVar5 + 0x5f) = 0;
    *(undefined8 *)(puVar5 + 0x50) = 0;
    *(undefined8 *)(puVar5 + 0x58) = 0;
    puVar5[0x67] = 2;
    _swift_retain(uVar7);
    _swift_retain(uVar2);
    FUN_1006e1660(uVar4,unaff_x22 + 0xf0);
    plVar6 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x178) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a04604;
  }
  else {
    if (*(char *)(unaff_x22 + 0x111) == '\x01') {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
      FUN_1006a4c18(*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x140));
      plVar6 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1a0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_100a047e8;
      FUN_100a03658(uVar1,uVar2,0);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    puVar5 = &DAT_100ff4570;
    FUN_1000f7830(&DAT_100ff4570,&DAT_100c8dc28);
    _swift_initStackObject();
    *(undefined **)(unaff_x22 + 0x188) = puVar5;
    puVar5[0x4f] = 2;
    plVar6 = (long *)0x60;
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = uVar2;
    *(undefined8 *)(puVar5 + 0x47) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    _swift_retain(uVar1);
    _swift_retain(uVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a046fc;
  }
  FUN_100a03f74(puVar5);
  return;
}



/* Address: 0x100a04604 | FUN_100a04604 */

void FUN_100a04604(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x180) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x178));
  if (unaff_x20 == 0) {
    lVar2 = *(long *)(lVar2 + 0x170);
    _swift_setDeallocating(lVar2);
    _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
    pcVar1 = FUN_100a04688;
  }
  else {
    pcVar1 = FUN_100a04a38;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a04688 | FUN_100a04688 */

void FUN_100a04688(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x128));
  FUN_1000fb4c4(uVar2,&DAT_100ff4568,&DAT_100c8dc00);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a046f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a046fc | FUN_100a046fc */

void FUN_100a046fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 == 0) {
    lVar2 = *(long *)(lVar2 + 0x188);
    _swift_setDeallocating(lVar2);
    _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
    pcVar1 = FUN_100a04780;
  }
  else {
    pcVar1 = FUN_100a04ad4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a04780 | FUN_100a04780 */

void FUN_100a04780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x148),&DAT_100ff4568,&DAT_100c8dc00);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a047e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a047e8 | FUN_100a047e8 */

void FUN_100a047e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a0484c;
  }
  else {
    pcVar1 = FUN_100a04950;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0484c | FUN_100a0484c */

void FUN_100a0484c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  piVar5 = *(int **)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  FUN_100a03438(*(undefined8 *)(unaff_x22 + 0x140),uVar2);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
  *(undefined ***)(unaff_x22 + 0xe8) = &PTR_PTR_100f27a30;
  lVar3 = unaff_x22 + 200;
  FUN_10000cbb0(lVar3);
  FUN_100a04bf0(uVar2,lVar3);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a048ec;
                    /* WARNING: Could not recover jumptable at 0x000100a048e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar4,unaff_x22 + 200);
  return;
}



/* Address: 0x100a048ec | FUN_100a048ec */

void FUN_100a048ec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a049cc;
  }
  else {
    pcVar1 = FUN_100a04b68;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a04950 | FUN_100a04950 */

void FUN_100a04950(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x140),&DAT_100ff4568,&DAT_100c8dc00);
  FUN_100a01520(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a049c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a049cc | FUN_100a049cc */

void FUN_100a049cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x128));
  FUN_100a04c34(uVar2);
  FUN_100004594(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a04a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04a38 | FUN_100a04a38 */

void FUN_100a04a38(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x170);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_setDeallocating(lVar2);
  _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
  FUN_1000fb4c4(uVar1,&DAT_100ff4568,&DAT_100c8dc00);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a04ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04ad4 | FUN_100a04ad4 */

void FUN_100a04ad4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_setDeallocating(lVar2);
  _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),&DAT_100f082a8);
  FUN_1000fb4c4(uVar1,&DAT_100ff4568,&DAT_100c8dc00);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a04b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04b68 | FUN_100a04b68 */

void FUN_100a04b68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x128));
  FUN_100a04c34(uVar1);
  FUN_100004594(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a04bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04bdc | FUN_100a04bdc */

void FUN_100a04bdc(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff4678,&TargetStructDescriptor_100cc91dc);
  return;
}



/* Address: 0x100a04bf0 | FUN_100a04bf0 */

undefined8 FUN_100a04bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a04bdc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100a04c34 | FUN_100a04c34 */

undefined8 FUN_100a04c34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a04bdc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100a04c70 | FUN_100a04c70 */

void FUN_100a04c70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a03658(param_1,param_2,param_3 & 0xffffffffffffff | 0x100000000000000);
  return;
}



/* Address: 0x100a04cf8 | FUN_100a04cf8 */

void FUN_100a04cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a04d14,0,0);
  return;
}



/* Address: 0x100a04d14 | FUN_100a04d14 */

void FUN_100a04d14(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  pcVar1 = FUN_100a04e70;
  FUN_1001f8188(FUN_100a04e70,0,*(undefined8 *)(unaff_x22 + 0x18),&DAT_100f082a8,
                PTR___type_metadata_for_Swift_Never_100eadc38,*(undefined8 *)(unaff_x22 + 0x20),
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  *(code **)(unaff_x22 + 0x30) = pcVar1;
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a04dc0;
  FUN_100a03f74(pcVar1);
  return;
}



/* Address: 0x100a04dc0 | FUN_100a04dc0 */

void FUN_100a04dc0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a04e34,0,0);
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100a04e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a04e34 | FUN_100a04e34 */

void FUN_100a04e34(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100a04e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a04e70 | FUN_100a04e70 */

void FUN_100a04e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined2 *)((long)param_2 + 0x14);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(undefined2 *)((long)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100a04eb0 | FUN_100a04eb0 */

void FUN_100a04eb0(undefined8 param_1)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a04f28;
  FUN_100a03658(param_1,0,0x200000000000000);
  return;
}



/* Address: 0x100a04f28 | FUN_100a04f28 */

void FUN_100a04f28(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  FUN_100a04c34(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a04f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}


