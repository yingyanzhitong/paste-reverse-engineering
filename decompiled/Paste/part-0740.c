/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008201dc | FUN_1008201dc */

void FUN_1008201dc(void)

{
  FUN_100820418();
  return;
}



/* Address: 0x1008201f0 | FUN_1008201f0 */

void FUN_1008201f0(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x100820210 | FUN_100820210 */

void FUN_100820210(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_1008246e4,0,thunk_FUN_1008201f0,0,param_8,
                param_9);
  return;
}



/* Address: 0x100820320 | FUN_100820320 */

void FUN_100820320(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_6,FUN_1008246e4
                ,0,thunk_FUN_1008201f0,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820418 | FUN_100820418 */

void FUN_100820418(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x05') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 5;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100820488 | FUN_100820488 */

void FUN_100820488(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7250,&DAT_100c7bea0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_6,FUN_1008246f8
                ,0,thunk_FUN_100820594,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820580 | FUN_100820580 */

void FUN_100820580(void)

{
  FUN_1008207bc();
  return;
}



/* Address: 0x100820594 | FUN_100820594 */

void FUN_100820594(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x1008205b4 | FUN_1008205b4 */

void FUN_1008205b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe7250,&DAT_100c7bea0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_1008246f8,0,thunk_FUN_100820594,0,param_8,
                param_9);
  return;
}



/* Address: 0x1008206c4 | FUN_1008206c4 */

void FUN_1008206c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7250,&DAT_100c7bea0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_6,FUN_1008246f8
                ,0,thunk_FUN_100820594,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x1008207bc | FUN_1008207bc */

void FUN_1008207bc(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x06') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 6;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10082082c | FUN_10082082c */

void FUN_10082082c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7258,&DAT_100c7bec0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,7,param_6,FUN_10082470c
                ,0,thunk_FUN_100820938,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820924 | FUN_100820924 */

void FUN_100820924(void)

{
  FUN_100820b60();
  return;
}



/* Address: 0x100820938 | FUN_100820938 */

void FUN_100820938(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x100820958 | FUN_100820958 */

void FUN_100820958(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe7258,&DAT_100c7bec0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,7,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_10082470c,0,thunk_FUN_100820938,0,param_8,
                param_9);
  return;
}



/* Address: 0x100820a68 | FUN_100820a68 */

void FUN_100820a68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7258,&DAT_100c7bec0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,7,param_6,FUN_10082470c
                ,0,thunk_FUN_100820938,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820b60 | FUN_100820b60 */

void FUN_100820b60(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\a') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 7;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100820bd0 | FUN_100820bd0 */

void FUN_100820bd0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7260,&DAT_100c7bee0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,8,param_6,FUN_100824720
                ,0,thunk_FUN_100820cdc,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820cc8 | FUN_100820cc8 */

void FUN_100820cc8(void)

{
  FUN_100820f04();
  return;
}



/* Address: 0x100820cdc | FUN_100820cdc */

void FUN_100820cdc(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x100820cfc | FUN_100820cfc */

void FUN_100820cfc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe7260,&DAT_100c7bee0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,8,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100824720,0,thunk_FUN_100820cdc,0,param_8,
                param_9);
  return;
}



/* Address: 0x100820e0c | FUN_100820e0c */

void FUN_100820e0c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7260,&DAT_100c7bee0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,8,param_6,FUN_100824720
                ,0,thunk_FUN_100820cdc,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820f04 | FUN_100820f04 */

void FUN_100820f04(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\b') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 8;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100820f74 | FUN_100820f74 */

void FUN_100820f74(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7268,&DAT_100c7bf00);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,9,param_6,FUN_100824734
                ,0,thunk_FUN_100821080,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10082106c | FUN_10082106c */

void FUN_10082106c(void)

{
  FUN_1008212a8();
  return;
}



/* Address: 0x100821080 | FUN_100821080 */

void FUN_100821080(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x1008210a0 | FUN_1008210a0 */

void FUN_1008210a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe7268,&DAT_100c7bf00);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,9,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100824734,0,thunk_FUN_100821080,0,param_8,
                param_9);
  return;
}



/* Address: 0x1008211b0 | FUN_1008211b0 */

void FUN_1008211b0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe7268,&DAT_100c7bf00);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,9,param_6,FUN_100824734
                ,0,thunk_FUN_100821080,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x1008212a8 | FUN_1008212a8 */

void FUN_1008212a8(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\t') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 9;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100821318 | FUN_100821318 */

void FUN_100821318(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04af8;
  _swift_allocObject(&DAT_100f04af8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04b20;
  _swift_allocObject(&DAT_100f04b20,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008214bc;
  FUN_100807ab8(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_100821520,puVar1,FUN_100821548,puVar2,param_8);
  return;
}



/* Address: 0x1008214bc | FUN_1008214bc */

void FUN_1008214bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100821518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x10082151c | thunk_FUN_100824350 */

void thunk_FUN_100824350(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100821520 | FUN_100821520 */

void FUN_100821520(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100821544 | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100821548 | FUN_100821548 */

void FUN_100821548(undefined8 param_1)

{
  FUN_100823dac(param_1,FUN_10080a0f8);
  return;
}



/* Address: 0x100821554 | FUN_100821554 */

void FUN_100821554(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = &DAT_100f04b48;
  _swift_allocObject(&DAT_100f04b48,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04b70;
  _swift_allocObject(&DAT_100f04b70,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000038;
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  _swift_retain(in_stack_00000038);
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000038);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100808514(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                param_8,FUN_100824748,puVar1);
  return;
}



/* Address: 0x100821710 | FUN_100821710 */

void FUN_100821710(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Address: 0x10082174c | FUN_10082174c */

void FUN_10082174c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04b98;
  _swift_allocObject(&DAT_100f04b98,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04bc0;
  _swift_allocObject(&DAT_100f04bc0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100809130(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_100824748,puVar1,thunk_FUN_100821548,puVar2,param_8);
  return;
}



/* Address: 0x1008218f0 | FUN_1008218f0 */

void FUN_1008218f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04be8;
  _swift_allocObject(&DAT_100f04be8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04c10;
  _swift_allocObject(&DAT_100f04c10,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,FUN_100821aa0
                ,puVar1,FUN_100821ac4,puVar2,param_8);
  return;
}



/* Address: 0x100821aa0 | FUN_100821aa0 */

void FUN_100821aa0(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100821ac4 | FUN_100821ac4 */

void FUN_100821ac4(undefined8 param_1)

{
  FUN_1008243d0(param_1,FUN_10080a128);
  return;
}



/* Address: 0x100821ad0 | FUN_100821ad0 */

void FUN_100821ad0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_8;
  puVar1 = &DAT_100f04c38;
  _swift_allocObject(&DAT_100f04c38,0x50,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04c60;
  _swift_allocObject(&DAT_100f04c60,0x40,7);
  *(undefined **)(unaff_x22 + 0x20) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000038;
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  _swift_retain(in_stack_00000038);
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000038);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100823440;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100821e18,puVar1);
  return;
}



/* Address: 0x100821cb0 | FUN_100821cb0 */

void FUN_100821cb0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x21;
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_4 == '\x05') {
    local_a0 = param_10;
    uStack_98 = param_11;
    local_90 = param_12;
    uStack_88 = param_5;
    local_80 = param_6;
    uStack_78 = param_7;
    local_70 = param_8;
    uStack_68 = param_9;
    _swift_bridgeObjectRetain();
    puVar1 = &DAT_100fe6f38;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    puVar2 = &DAT_100fe7218;
    FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
    puVar3 = &DAT_100fe7278;
    FUN_100583fb4(&DAT_100fe7278,&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1005f45bc(param_13,auStack_b0,puVar1,param_10,puVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_b8);
    FUN_1007fb2ec(param_2,param_3,5);
    if (unaff_x21 == 0) {
      *param_1 = param_13;
    }
  }
  else {
    FUN_1000f4a4c();
    puVar4 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar4,0,0);
    *puVar4 = (char)param_2;
    puVar4[1] = 5;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100821e18 | FUN_100821e18 */

void FUN_100821e18(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100821e3c | FUN_100821e3c */

void FUN_100821e3c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04c88;
  _swift_allocObject(&DAT_100f04c88,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04cb0;
  _swift_allocObject(&DAT_100f04cb0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,FUN_100821e18
                ,puVar1,thunk_FUN_100821ac4,puVar2,param_8);
  return;
}



/* Address: 0x100821fec | FUN_100821fec */

void FUN_100821fec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04cd8;
  _swift_allocObject(&DAT_100f04cd8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04d00;
  _swift_allocObject(&DAT_100f04d00,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100807ab8(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_100822190,puVar1,FUN_1008221b4,puVar2,param_8);
  return;
}



/* Address: 0x100822190 | FUN_100822190 */

void FUN_100822190(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x1008221b4 | FUN_1008221b4 */

void FUN_1008221b4(undefined8 param_1)

{
  FUN_100823dac(param_1,FUN_10080a13c);
  return;
}



/* Address: 0x1008221c0 | FUN_1008221c0 */

void FUN_1008221c0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = &DAT_100f04d28;
  _swift_allocObject(&DAT_100f04d28,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04d50;
  _swift_allocObject(&DAT_100f04d50,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000038;
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  _swift_retain(in_stack_00000038);
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000038);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100808514(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                param_8,FUN_10082475c,puVar1);
  return;
}



/* Address: 0x10082237c | FUN_10082237c */

void FUN_10082237c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04d78;
  _swift_allocObject(&DAT_100f04d78,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04da0;
  _swift_allocObject(&DAT_100f04da0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100809130(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_10082475c,puVar1,thunk_FUN_1008221b4,puVar2,param_8);
  return;
}



/* Address: 0x100822520 | FUN_100822520 */

void FUN_100822520(undefined1 *param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  code *in_stack_00000018;
  
  if (param_3 == '\0') {
    (*in_stack_00000018)();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_1;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_1;
    puVar1[1] = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1008225b8 | FUN_1008225b8 */

void FUN_1008225b8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04dc8;
  _swift_allocObject(&DAT_100f04dc8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04df0;
  _swift_allocObject(&DAT_100f04df0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,FUN_100822768
                ,puVar1,FUN_10082278c,puVar2,param_8);
  return;
}



/* Address: 0x100822768 | FUN_100822768 */

void FUN_100822768(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x10082278c | FUN_10082278c */

void FUN_10082278c(undefined8 param_1)

{
  FUN_1008243d0(param_1,FUN_10080a178);
  return;
}



/* Address: 0x100822798 | FUN_100822798 */

void FUN_100822798(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_8;
  puVar1 = &DAT_100f04e18;
  _swift_allocObject(&DAT_100f04e18,0x50,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04e40;
  _swift_allocObject(&DAT_100f04e40,0x40,7);
  *(undefined **)(unaff_x22 + 0x20) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000038;
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  _swift_retain(in_stack_00000038);
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000038);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100823440;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100822978,puVar1);
  return;
}



/* Address: 0x100822978 | FUN_100822978 */

void FUN_100822978(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x10082299c | FUN_10082299c */

void FUN_10082299c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04e68;
  _swift_allocObject(&DAT_100f04e68,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04e90;
  _swift_allocObject(&DAT_100f04e90,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_7,FUN_100822978
                ,puVar1,thunk_FUN_10082278c,puVar2,param_8);
  return;
}



/* Address: 0x100822b4c | FUN_100822b4c */

void FUN_100822b4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04eb8;
  _swift_allocObject(&DAT_100f04eb8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04ee0;
  _swift_allocObject(&DAT_100f04ee0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100807ab8(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_100824770,puVar1,thunk_FUN_100823074,puVar2,param_8);
  return;
}



/* Address: 0x100822cf0 | FUN_100822cf0 */

void FUN_100822cf0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  puVar1 = &DAT_100f04f08;
  _swift_allocObject(&DAT_100f04f08,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04f30;
  _swift_allocObject(&DAT_100f04f30,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000038;
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  _swift_retain(in_stack_00000038);
  FUN_10036c934(in_stack_00000028,in_stack_00000030);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000038);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100808514(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                param_8,FUN_100824770,puVar1);
  return;
}



/* Address: 0x100822eac | FUN_100822eac */

void FUN_100822eac(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04f58;
  _swift_allocObject(&DAT_100f04f58,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04f80;
  _swift_allocObject(&DAT_100f04f80,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100809130(plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_100823050,puVar1,FUN_100823074,puVar2,param_8);
  return;
}



/* Address: 0x100823050 | FUN_100823050 */

void FUN_100823050(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100823074 | FUN_100823074 */

void FUN_100823074(undefined8 param_1)

{
  FUN_100823dac(param_1,FUN_10080a248);
  return;
}



/* Address: 0x100823080 | FUN_100823080 */

void FUN_100823080(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x22;
  long *plVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = &DAT_100f04fa8;
  _swift_allocObject(&DAT_100f04fa8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f04fd0;
  _swift_allocObject(&DAT_100f04fd0,0x40,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar2 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar2 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar2 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar2 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar2 + 0x38) = in_stack_00000030;
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  _swift_retain(in_stack_00000030);
  FUN_10036c934(in_stack_00000020,in_stack_00000028);
  plVar3 = (long *)0xd0;
  _swift_retain(in_stack_00000030);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1008214bc;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,FUN_100823230
                ,puVar1,FUN_100823254,puVar2,param_8);
  return;
}



/* Address: 0x100823230 | FUN_100823230 */

void FUN_100823230(void)

{
  FUN_100821710();
  return;
}


