/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a0177c | FUN_100a0177c */

void FUN_100a0177c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a015cc(param_1,unaff_x20 + 0x10,uVar1,uVar2);
  return;
}



/* Address: 0x100a017e8 | FUN_100a017e8 */

void FUN_100a017e8(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = (ulong)(byte)unaff_x20[1];
  if ((char)unaff_x20[4] == '\0') {
    uVar3 = (ulong)(*(int *)((long)unaff_x20 + 0xc) -
                   ((uint)*(ushort *)((long)unaff_x20 + 9) << 8 |
                    (uint)*(byte *)((long)unaff_x20 + 0xb) << 0x18 | (uint)(byte)unaff_x20[1]));
  }
  else {
    if ((char)unaff_x20[4] == '\x01') {
      uVar3 = *unaff_x20;
      goto LAB_100a01858;
    }
    uVar3 = 0;
  }
  uVar2 = 0;
LAB_100a01858:
  puVar1 = &DAT_100f27890;
  _swift_allocObject(&DAT_100f27890,0x48,7);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  *(ulong *)(puVar1 + 0x18) = unaff_x20[1];
  *(ulong *)(puVar1 + 0x10) = uVar4;
  *(ulong *)(puVar1 + 0x28) = uVar6;
  *(ulong *)(puVar1 + 0x20) = uVar5;
  puVar1[0x30] = (char)unaff_x20[4];
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  FUN_100a01bec();
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = (ulong)&DAT_100c8db20;
  param_1[3] = (ulong)puVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100a018cc | FUN_100a018cc */

void FUN_100a018cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  _swift_task_switch(FUN_100a018e8,0,0);
  return;
}



/* Address: 0x100a018e8 | FUN_100a018e8 */

void FUN_100a018e8(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x90);
  FUN_100076688(*(undefined8 *)(unaff_x22 + 0x88),unaff_x22 + 0x10);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  uVar6 = *puVar1;
  uVar5 = puVar1[3];
  uVar4 = puVar1[2];
  *(undefined8 *)(unaff_x22 + 0x40) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x58) = uVar2;
  FUN_100a01bec(unaff_x22 + 0x38,unaff_x22 + 0x60);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a0196c;
  FUN_100a00f34(plVar3,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a0196c | FUN_100a0196c */

void FUN_100a0196c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xa8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a01a58,0,0);
    return;
  }
  piVar3 = *(int **)(lVar4 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar4 + 0xb8) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_100a01a10;
                    /* WARNING: Could not recover jumptable at 0x000100a01a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Address: 0x100a01a10 | FUN_100a01a10 */

void FUN_100a01a10(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000100a01a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a01a58 | FUN_100a01a58 */

void FUN_100a01a58(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x98);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a01ab8;
                    /* WARNING: Could not recover jumptable at 0x000100a01ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Address: 0x100a01ab8 | FUN_100a01ab8 */

void FUN_100a01ab8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xc0));
  _swift_task_switch(FUN_100a01b08,0,0);
  return;
}



/* Address: 0x100a01b08 | FUN_100a01b08 */

void FUN_100a01b08(void)

{
  long unaff_x22;
  
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a01b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01b4c | FUN_100a01b4c */

void FUN_100a01b4c(void)

{
  long unaff_x20;
  
  FUN_1009ffc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a01b80 | FUN_100a01b80 */

void FUN_100a01b80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a018cc(param_1,unaff_x20 + 0x10,uVar1,uVar2);
  return;
}



/* Address: 0x100a01bec | FUN_100a01bec */

undefined8 * FUN_100a01bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *(undefined1 *)(param_1 + 4);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 4) = uVar5;
  return param_2;
}



/* Address: 0x100a01c4c | FUN_100a01c4c */

void FUN_100a01c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100a01c60 | FUN_100a01c60 */

undefined1  [16] FUN_100a01c60(void)

{
  return ZEXT816(0x100f27910);
}



/* Address: 0x100a01c70 | thunk_FUN_100a01c74 */

void thunk_FUN_100a01c74(undefined8 *param_1)

{
  FUN_1009ffc80(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x100a01c74 | FUN_100a01c74 */

void FUN_100a01c74(undefined8 *param_1)

{
  FUN_1009ffc80(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x100a01c88 | thunk_FUN_100a01c8c */

undefined8 * thunk_FUN_100a01c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x100a01c8c | FUN_100a01c8c */

undefined8 * FUN_100a01c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x100a01cec | thunk_FUN_100a01cf0 */

undefined8 * thunk_FUN_100a01cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1006a4e7c(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1009ffc80(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x100a01cf0 | FUN_100a01cf0 */

undefined8 * FUN_100a01cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1006a4e7c(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1009ffc80(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x100a01d60 | thunk_FUN_100a01d64 */

undefined8 * thunk_FUN_100a01d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1009ffc80(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x100a01d64 | FUN_100a01d64 */

undefined8 * FUN_100a01d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1009ffc80(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x100a01dac | thunk_FUN_100500970 */

int thunk_FUN_100500970(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100a01db0 | thunk_FUN_1005009b8 */

void thunk_FUN_1005009b8(void)

{
  FUN_1005009b8();
  return;
}



/* Address: 0x100a01db4 | FUN_100a01db4 */

undefined1  [16] FUN_100a01db4(void)

{
  return ZEXT816(0x100f279a8);
}



/* Address: 0x100a01dc4 | FUN_100a01dc4 */

void FUN_100a01dc4(void)

{
  FUN_100a01dcc(0);
  return;
}



/* Address: 0x100a01dcc | FUN_100a01dcc */

void FUN_100a01dcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff44c0 == 0) {
    puVar1 = &DAT_100ff44c8;
    FUN_1000f8b08(&DAT_100ff44c8,&DAT_100c8db48);
    uVar2 = 0xff;
    FUN_100a01e44(0xff);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100ff44c0 = param_1;
    }
  }
  return;
}



/* Address: 0x100a01e44 | FUN_100a01e44 */

void FUN_100a01e44(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_18;
  
  if (DAT_100ff44d0 != 0) {
    return;
  }
  puVar1 = &DAT_100ff44d8;
  FUN_1000f8b08(&DAT_100ff44d8,&DAT_100c8db50);
  uVar2 = 0x67000001;
  local_18 = puVar1;
  _swift_getFunctionTypeMetadata
            (0x67000001,&local_18,&DAT_100c8db58,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff44d0 = uVar2;
  return;
}



/* Address: 0x100a01ebc | thunk_FUN_1005009b8 */

void thunk_FUN_1005009b8(void)

{
  FUN_1005009b8();
  return;
}



/* Address: 0x100a01ec0 | thunk_FUN_100a01c74 */

void thunk_FUN_100a01c74(void)

{
  thunk_FUN_100a01c74();
  return;
}



/* Address: 0x100a01ec4 | thunk_FUN_100a00adc */

void thunk_FUN_100a00adc(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100a00b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01ec8 | thunk_FUN_100a012b4 */

void thunk_FUN_100a012b4(void)

{
  long unaff_x22;
  
  FUN_100a01520(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a012f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a01ecc | thunk_FUN_100a01c8c */

undefined8 * thunk_FUN_100a01c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006a4e7c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x100a01ed0 | thunk_FUN_100a01cf0 */

void thunk_FUN_100a01cf0(void)

{
  thunk_FUN_100a01cf0();
  return;
}



/* Address: 0x100a01ed4 | thunk_FUN_100a01d64 */

void thunk_FUN_100a01d64(void)

{
  thunk_FUN_100a01d64();
  return;
}



/* Address: 0x100a01ed8 | thunk_FUN_100500970 */

void thunk_FUN_100500970(void)

{
  thunk_FUN_100500970();
  return;
}



/* Address: 0x100a01edc | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  thunk_FUN_1001b8a00();
  return;
}



/* Address: 0x100a01ee0 | thunk_FUN_100a01b4c */

void thunk_FUN_100a01b4c(void)

{
  thunk_FUN_100a01b4c();
  return;
}



/* Address: 0x100a01ee4 | FUN_100a01ee4 */

void FUN_100a01ee4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(long *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100a01f98,0,0);
  return;
}



/* Address: 0x100a01f98 | FUN_100a01f98 */

void FUN_100a01f98(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x38));
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x68),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a02060;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a02060 | FUN_100a02060 */

void FUN_100a02060(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a020c4;
  }
  else {
    pcVar1 = FUN_100a022f0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a020c4 | FUN_100a020c4 */

void FUN_100a020c4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  uVar5 = *(undefined4 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined2 *)(unaff_x22 + 0x24);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar6 = *(undefined1 *)(unaff_x22 + 0x26);
  *(undefined4 *)(unaff_x22 + 0xa0) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xa6) = uVar6;
  *(undefined2 *)(unaff_x22 + 0xa4) = uVar8;
  if (lVar2 != 0) {
    uVar7 = *(undefined1 *)(unaff_x22 + 0x87);
    piVar10 = *(int **)(*(long *)(unaff_x22 + 0x40) + 8);
    iVar1 = *piVar10;
    plVar9 = (long *)(ulong)(uint)piVar10[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100a021c8;
                    /* WARNING: Could not recover jumptable at 0x000100a02180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar10))
              (lVar2,uVar3,CONCAT17(uVar7,CONCAT34(CONCAT12(uVar6,uVar8),uVar5)),
               *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a021c8 | FUN_100a021c8 */

void FUN_100a021c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a0222c;
  }
  else {
    pcVar1 = FUN_100a02348;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0222c | FUN_100a0222c */

void FUN_100a0222c(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  *(ulong *)(unaff_x22 + 0x80) =
       (ulong)*(uint *)(unaff_x22 + 0xa0) | (ulong)*(byte *)(unaff_x22 + 0x87) << 0x38 |
       ((ulong)(uint)*(uint3 *)(unaff_x22 + 0xa4) & 0xffff |
       (ulong)(uint)*(uint3 *)(unaff_x22 + 0xa4) & 0xff0000) << 0x20;
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x68),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a02060;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a022f0 | FUN_100a022f0 */

void FUN_100a022f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a02344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02348 | FUN_100a02348 */

void FUN_100a02348(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  (**(code **)(lVar1 + 8))(uVar3,uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a023b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a023b8 | FUN_100a023b8 */

void FUN_100a023b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1);
  lVar2 = 0;
  FUN_100a03248(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100a02428 | FUN_100a02428 */

void FUN_100a02428(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(long *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  _swift_task_switch(FUN_100a024dc,0,0);
  return;
}



/* Address: 0x100a024dc | FUN_100a024dc */

void FUN_100a024dc(void)

{
  int iVar1;
  uint7 uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x28),uVar8);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar8,uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar6 = *(long *)(unaff_x22 + 0x10);
  if (lVar6 != 0) {
    uVar2 = *(uint7 *)(unaff_x22 + 0x20);
    piVar4 = *(int **)(*(long *)(unaff_x22 + 0x40) + 8);
    *(int **)(unaff_x22 + 0x80) = piVar4;
    *(long *)(unaff_x22 + 0x90) = lVar6;
    *(undefined4 *)(unaff_x22 + 0x88) = *(undefined4 *)(unaff_x22 + 0x20);
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x26);
    *(short *)(unaff_x22 + 0x8c) = (short)*(undefined3 *)(unaff_x22 + 0x24);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a02650;
                    /* WARNING: Could not recover jumptable at 0x000100a02608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))
              (lVar6,uVar5,(ulong)uVar2,*(undefined8 *)(unaff_x22 + 0x30),
               *(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a0264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02650 | FUN_100a02650 */

void FUN_100a02650(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a026b4;
  }
  else {
    pcVar1 = FUN_100a0281c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a026b4 | FUN_100a026b4 */

void FUN_100a026b4(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar8,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar9 = *(long *)(unaff_x22 + 0x10);
  if (lVar9 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = *(undefined7 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x9f);
    *(long *)(unaff_x22 + 0x90) = lVar9;
    *(ulong *)(unaff_x22 + 0x98) = CONCAT17(uVar2,*(undefined7 *)(unaff_x22 + 0x88));
    *(undefined4 *)(unaff_x22 + 0x88) = *(undefined4 *)(unaff_x22 + 0x20);
    *(short *)(unaff_x22 + 0x8c) = (short)*(undefined3 *)(unaff_x22 + 0x24);
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x26);
    piVar5 = *(int **)(unaff_x22 + 0x80);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100a02650;
                    /* WARNING: Could not recover jumptable at 0x000100a027d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (lVar9,uVar6,CONCAT17(uVar2,uVar3),*(undefined8 *)(unaff_x22 + 0x30),
               *(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100a02818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a0281c | FUN_100a0281c */

void FUN_100a0281c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a02884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02888 | FUN_100a02888 */

void FUN_100a02888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a028a8,0,0);
  return;
}



/* Address: 0x100a028a8 | FUN_100a028a8 */

void FUN_100a028a8(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x20);
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x30) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x28) + 0x24));
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a02924;
                    /* WARNING: Could not recover jumptable at 0x000100a02920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
             uVar4 & 0xffffffffffffff);
  return;
}



/* Address: 0x100a02924 | FUN_100a02924 */

void FUN_100a02924(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(undefined8 *)(lVar7 + 0x40) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x38));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a02990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x10);
  lVar3 = *(long *)(*(long *)(lVar7 + 0x28) + 0x18);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(lVar7 + 0x48) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_100a02a00;
                    /* WARNING: Could not recover jumptable at 0x000100a029fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2,param_3 & 0xffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x100a02a00 | FUN_100a02a00 */

void FUN_100a02a00(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a02a74,0,0);
    return;
  }
  _swift_release(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a02a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a02a74 | FUN_100a02a74 */

void FUN_100a02a74(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a02aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02ab0 | FUN_100a02ab0 */

void FUN_100a02ab0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(long *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  _swift_task_switch(FUN_100a02b64,0,0);
  return;
}



/* Address: 0x100a02b64 | FUN_100a02b64 */

void FUN_100a02b64(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint7 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x28),uVar8);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar8,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar7 = *(long *)(unaff_x22 + 0x10);
  if (lVar7 != 0) {
    uVar5 = *(uint7 *)(unaff_x22 + 0x20);
    *(long *)(unaff_x22 + 0x80) = lVar7;
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(unaff_x22 + 0x20);
    *(undefined1 *)(unaff_x22 + 0x7e) = *(undefined1 *)(unaff_x22 + 0x26);
    *(short *)(unaff_x22 + 0x7c) = (short)*(undefined3 *)(unaff_x22 + 0x24);
    piVar2 = *(int **)(*(long *)(unaff_x22 + 0x48) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x30) + 0x24));
    iVar1 = *piVar2;
    plVar6 = (long *)(ulong)(uint)piVar2[1];
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a02cd0;
                    /* WARNING: Could not recover jumptable at 0x000100a02c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(lVar7,uVar8,(ulong)uVar5);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100a02ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02cd0 | FUN_100a02cd0 */

void FUN_100a02cd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(undefined8 *)(lVar7 + 0x98) = param_1;
  *(long *)(lVar7 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x90));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a02f90,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + 0x10);
  lVar3 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(lVar7 + 0xa8) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_100a02db8;
                    /* WARNING: Could not recover jumptable at 0x000100a02db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_1,param_2,param_3 & 0xffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x100a02db8 | FUN_100a02db8 */

void FUN_100a02db8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x98));
    pcVar1 = FUN_100a02e24;
  }
  else {
    pcVar1 = FUN_100a03004;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a02e24 | FUN_100a02e24 */

void FUN_100a02e24(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined7 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar8,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar9 = *(long *)(unaff_x22 + 0x10);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined7 *)(unaff_x22 + 0x20);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x8f);
    *(long *)(unaff_x22 + 0x80) = lVar9;
    *(ulong *)(unaff_x22 + 0x88) = CONCAT17(uVar4,*(undefined7 *)(unaff_x22 + 0x78));
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(unaff_x22 + 0x20);
    *(short *)(unaff_x22 + 0x7c) = (short)*(undefined3 *)(unaff_x22 + 0x24);
    *(undefined1 *)(unaff_x22 + 0x7e) = *(undefined1 *)(unaff_x22 + 0x26);
    piVar2 = *(int **)(*(long *)(unaff_x22 + 0x48) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x30) + 0x24));
    iVar1 = *piVar2;
    plVar6 = (long *)(ulong)(uint)piVar2[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a02cd0;
                    /* WARNING: Could not recover jumptable at 0x000100a02f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(lVar9,uVar8,CONCAT17(uVar4,uVar5));
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100a02f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a02f90 | FUN_100a02f90 */

void FUN_100a02f90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a03000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a03004 | FUN_100a03004 */

void FUN_100a03004(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a0307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


