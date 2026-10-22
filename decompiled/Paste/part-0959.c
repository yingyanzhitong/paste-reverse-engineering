/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a5106c | FUN_100a5106c */

void FUN_100a5106c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = param_1;
    pcVar1 = FUN_100a510e0;
  }
  else {
    pcVar1 = FUN_100a51120;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a510e0 | FUN_100a510e0 */

void FUN_100a510e0(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000100a5111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Address: 0x100a51120 | FUN_100a51120 */

void FUN_100a51120(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000100a51158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5115c | FUN_100a5115c */

void FUN_100a5115c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_100a51180,0,0);
  return;
}



/* Address: 0x100a51180 | FUN_100a51180 */

void FUN_100a51180(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar4 = &DAT_100f2b4c0;
  _swift_allocObject(&DAT_100f2b4c0,0x30,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  puVar4[0x28] = (char)uVar2;
  *(int *)(puVar4 + 0x2a) = (int)((ulong)uVar2 >> 0x10);
  puVar4[0x2e] = (byte)((ulong)uVar2 >> 0x30) & 1;
  puVar4[0x2f] = (byte)((ulong)uVar2 >> 0x38) & 1;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  puVar5 = &DAT_100ff6ab0;
  FUN_1000f7830(&DAT_100ff6ab0,&DAT_100c90ab8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a51274;
  FUN_100912dec(unaff_x22 + 0x40,FUN_100a5197c,puVar4,puVar5);
  return;
}



/* Address: 0x100a51274 | FUN_100a51274 */

void FUN_100a51274(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x78));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a512e0;
  }
  else {
    pcVar2 = FUN_100a51400;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a512e0 | FUN_100a512e0 */

void FUN_100a512e0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  _swift_retain(uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 **)(unaff_x22 + 0x30) = (undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a51384;
  FUN_100a950ac(&DAT_100c90ac8,unaff_x22 + 0x10,&DAT_100c90ad8,uVar2);
  return;
}



/* Address: 0x100a51384 | FUN_100a51384 */

void FUN_100a51384(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xa0) = param_1;
    pcVar2 = FUN_100a5140c;
  }
  else {
    pcVar2 = FUN_100a5144c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a51400 | FUN_100a51400 */

void FUN_100a51400(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a51408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5140c | FUN_100a5140c */

void FUN_100a5140c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100a51448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Address: 0x100a5144c | FUN_100a5144c */

void FUN_100a5144c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100a51484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a51488 | FUN_100a51488 */

void FUN_100a51488(undefined8 param_1,char param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  if (param_2 == '\x01') {
    pcVar1 = FUN_100a515f0;
  }
  else {
    pcVar1 = FUN_100a514b8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a514b8 | FUN_100a514b8 */

void FUN_100a514b8(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x61) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x59) = uVar4;
  puVar1 = &DAT_100f2b510;
  _swift_allocObject(&DAT_100f2b510,0x39,7);
  *(undefined **)(unaff_x22 + 0xd8) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x40,unaff_x22 + 0xa0);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a51578;
  FUN_100912dec();
  return;
}



/* Address: 0x100a51578 | FUN_100a51578 */

void FUN_100a51578(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xd8);
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xe0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100a515e4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a515e4 | FUN_100a515e4 */

void FUN_100a515e4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a515ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a515f0 | FUN_100a515f0 */

void FUN_100a515f0(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar4;
  puVar1 = &DAT_100f2b4e8;
  _swift_allocObject(&DAT_100f2b4e8,0x3a,7);
  *(undefined **)(unaff_x22 + 0xf0) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  puVar1[0x39] = 0;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x70);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a516b4;
  FUN_100912dec();
  return;
}



/* Address: 0x100a516b4 | FUN_100a516b4 */

void FUN_100a516b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf0);
  *(long *)(lVar3 + 0x100) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xf8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100a51720;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a51720 | FUN_100a51720 */

void FUN_100a51720(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a51728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5172c | FUN_100a5172c */

void FUN_100a5172c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a4b8e0(plVar1,param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a517a8 | FUN_100a517a8 */

void FUN_100a517a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(unaff_x22 + 0x30) = param_3[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0xd0;
  uVar2 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a51834;
  FUN_100a53198(plVar1,unaff_x22 + 0x10,param_4,uVar2);
  return;
}



/* Address: 0x100a51834 | FUN_100a51834 */

void FUN_100a51834(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a51884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  _swift_task_switch(FUN_100a518b0,0,0);
  return;
}



/* Address: 0x100a518b0 | FUN_100a518b0 */

void FUN_100a518b0(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a518c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a518c8 | FUN_100a518c8 */

void FUN_100a518c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a517a8(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100a51950 | FUN_100a51950 */

void FUN_100a51950(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a5197c | FUN_100a5197c */

void FUN_100a5197c(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)(unaff_x20 + 0x2f) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (*(char *)(unaff_x20 + 0x2e) == '\0') {
    uVar2 = 0;
  }
  FUN_100a6caf4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),
                uVar2 | uVar1 | (ulong)*(uint *)(unaff_x20 + 0x2a) << 0x10 |
                (ulong)*(byte *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a519d0 | FUN_100a519d0 */

void FUN_100a519d0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = *param_4;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a51a4c;
                    /* WARNING: Could not recover jumptable at 0x000100a51a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x18))
  ;
  return;
}



/* Address: 0x100a51a4c | FUN_100a51a4c */

void FUN_100a51a4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a51ab0;
  }
  else {
    pcVar1 = FUN_1002f312c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a51ab0 | FUN_100a51ab0 */

void FUN_100a51ab0(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a51ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a51ac8 | FUN_100a51ac8 */

void FUN_100a51ac8(undefined8 param_1)

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
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a519d0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a51b50 | FUN_100a51b50 */

void FUN_100a51b50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *param_3;
  plVar1 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a51488(param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a51bbc | FUN_100a51bbc */

void FUN_100a51bbc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd444;
  FUN_100a51b50(param_1,param_2,(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a51c38 | FUN_100a51c38 */

void FUN_100a51c38(void)

{
  FUN_100a51c64(0x3a);
  return;
}



/* Address: 0x100a51c40 | FUN_100a51c40 */

void FUN_100a51c40(void)

{
  long unaff_x20;
  
  FUN_100aad16c(unaff_x20 + 0x10,*(undefined1 *)(unaff_x20 + 0x39));
  return;
}



/* Address: 0x100a51c5c | FUN_100a51c5c */

void FUN_100a51c5c(void)

{
  FUN_100a51c64(0x39);
  return;
}



/* Address: 0x100a51c64 | FUN_100a51c64 */

void FUN_100a51c64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100a51cb8 | FUN_100a51cb8 */

long FUN_100a51cb8(long param_1)

{
  code *pcVar1;
  
  if (0x3fe < param_1 + 0xffe0000000000000U >> 0x36) {
    return param_1 << 10;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51cd8);
  (*pcVar1)();
}



/* Address: 0x100a51cd8 | FUN_100a51cd8 */

void FUN_100a51cd8(long param_1)

{
  code *pcVar1;
  
  if (SUB168(SEXT816(param_1) * SEXT816(1000),8) == param_1 * 1000 >> 0x3f) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51cf8);
  (*pcVar1)();
}



/* Address: 0x100a51cf8 | FUN_100a51cf8 */

void FUN_100a51cf8(long param_1)

{
  code *pcVar1;
  
  if (SUB168(SEXT816(param_1) * SEXT816(1000000),8) == param_1 * 1000000 >> 0x3f) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51d1c);
  (*pcVar1)();
}



/* Address: 0x100a51d1c | FUN_100a51d1c */

void FUN_100a51d1c(long param_1)

{
  code *pcVar1;
  
  if (SUB168(SEXT816(param_1) * SEXT816(1000000000),8) == param_1 * 1000000000 >> 0x3f) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51d40);
  (*pcVar1)();
}



/* Address: 0x100a51d40 | FUN_100a51d40 */

long FUN_100a51d40(long param_1)

{
  code *pcVar1;
  
  if (0xffffefffffffffff < param_1 - 0x80000000000U) {
    return param_1 << 0x14;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51d60);
  (*pcVar1)();
}



/* Address: 0x100a51d60 | FUN_100a51d60 */

long FUN_100a51d60(long param_1)

{
  code *pcVar1;
  
  if (0xfffffffbffffffff < param_1 - 0x200000000U) {
    return param_1 << 0x1e;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a51d80);
  (*pcVar1)();
}



/* Address: 0x100a51d80 | thunk_FUN_100a51d84 */

void thunk_FUN_100a51d84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90b28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90b28,&DAT_100f2b538);
  DAT_100ff6ab8 = pTVar1;
  return;
}



/* Address: 0x100a51d84 | FUN_100a51d84 */

void FUN_100a51d84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90b28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90b28,&DAT_100f2b538);
  DAT_100ff6ab8 = pTVar1;
  return;
}



/* Address: 0x100a51dc4 | FUN_100a51dc4 */

undefined1  [16] FUN_100a51dc4(void)

{
  return ZEXT816(0x100f2b538);
}



/* Address: 0x100a51dd4 | thunk_FUN_100a51d84 */

void thunk_FUN_100a51d84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90b28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90b28,&DAT_100f2b538);
  DAT_100ff6ab8 = pTVar1;
  return;
}



/* Address: 0x100a51dd8 | FUN_100a51dd8 */

void FUN_100a51dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_100a51e00,0,0);
  return;
}



/* Address: 0x100a51e00 | FUN_100a51e00 */

void FUN_100a51e00(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x60);
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a51ea0;
  FUN_100a84ca8(plVar2,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x58),uVar1 & 0x101ffffffff00ff,
                &DAT_100c90c18,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x80),
                PTR___type_metadata_for_Swift_Int64_100eadc00,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x100a51ea0 | FUN_100a51ea0 */

void FUN_100a51ea0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a51f04;
  }
  else {
    pcVar1 = FUN_1006e19e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a51f04 | FUN_100a51f04 */

void FUN_100a51f04(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a51f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x100a51f14 | FUN_100a51f14 */

void FUN_100a51f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  _swift_task_switch(FUN_100a51f38,0,0);
  return;
}



/* Address: 0x100a51f38 | FUN_100a51f38 */

void FUN_100a51f38(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar2 = (long *)0xb0;
  _swift_bridgeObjectRetain();
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  plVar1 = plVar2;
  FUN_100a52488();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a51fd4;
  FUN_100a51dd8(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                uVar3 & 0x101ffffffff00ff,*(undefined8 *)(unaff_x22 + 0x38),
                PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                *(undefined8 *)(unaff_x22 + 0x50),plVar1,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a51fd4 | FUN_100a51fd4 */

void FUN_100a51fd4(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a5205c,0,0);
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100a52058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x100a5205c | FUN_100a5205c */

void FUN_100a5205c(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100a52094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52098 | FUN_100a52098 */

void FUN_100a52098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  _swift_task_switch(FUN_100a520b8,0,0);
  return;
}



/* Address: 0x100a520b8 | FUN_100a520b8 */

void FUN_100a520b8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar3 = DAT_100ff6da8;
  uVar2 = DAT_100ff6da0;
  uVar1 = *(ulong *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 **)(unaff_x22 + 0x20) = (undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  plVar4 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a52198;
  FUN_100a5115c(*(undefined8 *)(unaff_x22 + 0x40),uVar1 & 0x101ffffffff00ff,&UNK_100c90c38,
                unaff_x22 + 0x10,uVar2,uVar3);
  return;
}



/* Address: 0x100a52198 | FUN_100a52198 */

void FUN_100a52198(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_1002bde74;
  }
  else {
    pcVar1 = FUN_100a5220c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a5220c | FUN_100a5220c */

void FUN_100a5220c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a52214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52218 | FUN_100a52218 */

void FUN_100a52218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  int *piVar5;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  _swift_getAssociatedConformanceWitness
            (param_8,param_6,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,uVar2,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
  _swift_getAssociatedConformanceWitness
            (param_8,uVar2,uVar3,0x100ccad0c,&TargetProtocolRequirement_100ccad34);
  piVar5 = *(int **)(param_8 + 0x10);
  uVar2 = 0;
  _swift_checkMetadataState(0,uVar3);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a52370;
                    /* WARNING: Could not recover jumptable at 0x000100a5236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(param_3,param_4,param_5,param_7,uVar2,param_8);
  return;
}



/* Address: 0x100a52370 | FUN_100a52370 */

void FUN_100a52370(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a523c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  _swift_task_switch(thunk_FUN_100a53f9c,0,0);
  return;
}



/* Address: 0x100a523ec | FUN_100a523ec */

void FUN_100a523ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a52218(plVar7,param_1,param_2,uVar3,uVar6,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x100a52488 | FUN_100a52488 */

void FUN_100a52488(void)

{
  undefined *puVar1;
  
  if (DAT_100ff6ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String__UTF8View_>Swift__Sequence_100eac1a8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String__UTF8View_>Swift__Sequence_100eac1a8,
             PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0);
  DAT_100ff6ac0 = puVar1;
  return;
}



/* Address: 0x100a524c8 | FUN_100a524c8 */

void FUN_100a524c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a524e8,0,0);
  return;
}



/* Address: 0x100a524e8 | FUN_100a524e8 */

void FUN_100a524e8(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar2 = *(ulong *)(unaff_x22 + 0x20);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a52594;
  FUN_100a51dd8(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                uVar2 & 0x101ffffffff00ff,&DAT_100ff6da0,*(undefined8 *)(unaff_x22 + 0x28),
                &DAT_100f2d740,*(undefined8 *)(unaff_x22 + 0x30),&PTR_PTR_100ff6dd8);
  return;
}



/* Address: 0x100a52594 | FUN_100a52594 */

void FUN_100a52594(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a525e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


