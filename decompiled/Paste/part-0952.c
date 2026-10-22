/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a426c8 | FUN_100a426c8 */

void FUN_100a426c8(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100a426dc | FUN_100a426dc */

void FUN_100a426dc(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (0xb < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 0xc;
  }
  if ((int)uVar1 < 8) {
    if ((int)uVar1 < 5) {
      if ((uVar1 != 2) && (uVar1 != 3)) goto LAB_100a42780;
    }
    else if ((uVar1 != 5) && (uVar1 != 7)) goto LAB_100a42780;
LAB_100a4276c:
    uVar2 = *(undefined8 *)param_1;
  }
  else {
    if (9 < (int)uVar1) {
      if (uVar1 == 10) {
        FUN_100004594();
        goto LAB_100a42780;
      }
      if (uVar1 != 0xb) goto LAB_100a42780;
      goto LAB_100a4276c;
    }
    if (uVar1 != 8) {
      if (uVar1 != 9) goto LAB_100a42780;
      goto LAB_100a4276c;
    }
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
  _swift_bridgeObjectRelease(uVar2);
LAB_100a42780:
  uVar1 = (uint)*(byte *)(param_2 + 10);
  if (0xb < *(byte *)(param_2 + 10)) {
    uVar1 = *param_2 + 0xc;
  }
  switch(uVar1) {
  case 0:
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 10) = 0;
    break;
  case 1:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 1;
    break;
  case 2:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 2;
    break;
  case 3:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 3;
    break;
  case 4:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 4;
    break;
  case 5:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 5;
    break;
  case 6:
    *(char *)param_1 = (char)*param_2;
    *(undefined1 *)(param_1 + 10) = 6;
    break;
  case 7:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 7;
    break;
  case 8:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined1 *)(param_1 + 10) = 8;
    break;
  case 9:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 9;
    break;
  case 10:
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = 10;
    break;
  case 0xb:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 0xb;
    break;
  default:
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar3;
    uVar2 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  }
  return;
}



/* Address: 0x100a428dc | FUN_100a428dc */

int FUN_100a428dc(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf3 < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xf4;
  }
  iVar1 = 0;
  if (0xc < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100a42918 | FUN_100a42918 */

void FUN_100a42918(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf4) {
    if (0xf3 < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 10) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x21) = 0;
    *(undefined8 *)((long)param_1 + 0x19) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xf4;
    if (0xf3 < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x100a42964 | FUN_100a42964 */

uint FUN_100a42964(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (0xb < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 0xc;
  }
  return uVar1;
}



/* Address: 0x100a42980 | FUN_100a42980 */

void FUN_100a42980(int *param_1,uint param_2)

{
  if (0xb < param_2) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xc;
    param_2 = 0xc;
  }
  *(char *)(param_1 + 10) = (char)param_2;
  return;
}



/* Address: 0x100a429a8 | FUN_100a429a8 */

undefined1  [16] FUN_100a429a8(void)

{
  return ZEXT816(0x100f2a720);
}



/* Address: 0x100a429b8 | FUN_100a429b8 */

undefined1  [16] FUN_100a429b8(void)

{
  return ZEXT816(0x100f2a740);
}



/* Address: 0x100a429c8 | FUN_100a429c8 */

void FUN_100a429c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a429dc | FUN_100a429dc */

undefined1  [16] FUN_100a429dc(void)

{
  return ZEXT816(0x100f2a7c0);
}



/* Address: 0x100a429ec | FUN_100a429ec */

void FUN_100a429ec(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a429f8 | FUN_100a429f8 */

void FUN_100a429f8(void)

{
  return;
}



/* Address: 0x100a429fc | FUN_100a429fc */

undefined1  [16] FUN_100a429fc(void)

{
  return ZEXT816(0x100f2a858);
}



/* Address: 0x100a42a0c | FUN_100a42a0c */

undefined1  [16] FUN_100a42a0c(void)

{
  return ZEXT816(0x100f2a8e8);
}



/* Address: 0x100a42a1c | FUN_100a42a1c */

undefined1  [16] FUN_100a42a1c(void)

{
  return ZEXT816(0x100f2a960);
}



/* Address: 0x100a42a2c | FUN_100a42a2c */

undefined8 FUN_100a42a2c(undefined8 param_1,undefined8 param_2)

{
  FUN_100a426dc(param_2,param_1,&DAT_100f2a720);
  return param_2;
}



/* Address: 0x100a42a60 | thunk_FUN_100a3fb9c */

void thunk_FUN_100a3fb9c(void)

{
  FUN_100a3fb9c();
  return;
}



/* Address: 0x100a42a64 | thunk_FUN_100a3ed80 */

void thunk_FUN_100a3ed80(void)

{
  thunk_FUN_100a3ed80();
  return;
}



/* Address: 0x100a42a68 | thunk_FUN_100a3edfc */

void thunk_FUN_100a3edfc(void)

{
  FUN_100a3edfc();
  return;
}



/* Address: 0x100a42a6c | thunk_FUN_100a3fc8c */

void thunk_FUN_100a3fc8c(void)

{
  FUN_100a3fc8c();
  return;
}



/* Address: 0x100a42a70 | thunk_FUN_100a3fbac */

void thunk_FUN_100a3fbac(void)

{
  FUN_100a3fbac();
  return;
}



/* Address: 0x100a42a74 | thunk_FUN_100a3fbe4 */

void thunk_FUN_100a3fbe4(void)

{
  FUN_100a3fbe4();
  return;
}



/* Address: 0x100a42a78 | thunk_FUN_100a3fbc0 */

void thunk_FUN_100a3fbc0(void)

{
  FUN_100a3fbc0();
  return;
}



/* Address: 0x100a42a7c | thunk_FUN_100a3fc54 */

void thunk_FUN_100a3fc54(void)

{
  FUN_100a3fc54();
  return;
}



/* Address: 0x100a42a80 | FUN_100a42a80 */

void FUN_100a42a80(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100a3e844();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a42ac4 | FUN_100a42ac4 */

void FUN_100a42ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100a3de80(auStack_90);
  FUN_100004640(auStack_90,local_78);
  local_b0 = param_14;
  uStack_a8 = param_15;
  local_d0 = param_6;
  uStack_c8 = param_7;
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_100a441f8(param_1,param_2,param_3,FUN_1001aeadc,auStack_c0,thunk_FUN_1000386a0,auStack_e0,
                param_8,param_9,param_10,param_11,param_12,param_13,local_78,param_14,uStack_70,
                param_15);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a42ba8 | FUN_100a42ba8 */

void FUN_100a42ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100a3de80(auStack_90);
  puVar1 = auStack_90;
  FUN_100004640(puVar1,local_78);
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_100a40794();
  FUN_100a441f8(param_1,param_2,param_3,FUN_100a42a80,0,thunk_FUN_1000386a0,auStack_b0,param_6,
                param_7,param_8,param_9,param_10,param_11,local_78,&DAT_100f2ab30,uStack_70,puVar1);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a42c7c | FUN_100a42c7c */

void FUN_100a42c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  FUN_100a3dd50(auStack_90);
  FUN_100004640(auStack_90,local_78);
  local_b0 = param_14;
  uStack_a8 = param_15;
  local_d0 = param_4;
  uStack_c8 = param_5;
  local_a0 = param_7;
  uStack_98 = param_8;
  FUN_100a441f8(param_1,param_2,param_3,thunk_FUN_1001aeadc,auStack_c0,thunk_FUN_1000386a0,
                auStack_e0,param_6,param_9,param_10,param_11,param_12,param_13,local_78,param_14,
                *(undefined8 *)(lStack_70 + 8),param_15);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a42d64 | FUN_100a42d64 */

void FUN_100a42d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100a3de80(auStack_90);
  FUN_100004640(auStack_90,local_78);
  local_c0 = param_16;
  uStack_b8 = param_17;
  local_b0 = param_18;
  local_120 = param_16;
  uStack_118 = param_17;
  local_110 = param_18;
  uStack_108 = param_14;
  local_100 = param_15;
  local_e0 = param_6;
  uStack_d8 = param_7;
  uStack_a8 = param_4;
  local_a0 = param_5;
  FUN_100a44268(param_1,param_2,param_3,FUN_100a42e94,auStack_d0,FUN_1000386a0,auStack_f0,param_8,
                param_9,param_10,param_11,param_12,param_13,FUN_1006423a4,auStack_130,local_78,
                param_16,param_17,uStack_70,param_18);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a42e94 | FUN_100a42e94 */

void FUN_100a42e94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Address: 0x100a42eb4 | FUN_100a42eb4 */

void FUN_100a42eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100a3de80(auStack_90);
  puVar1 = auStack_90;
  FUN_100004640(puVar1,local_78);
  local_d0 = param_14;
  uStack_c8 = param_12;
  local_c0 = param_13;
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_100a40794();
  FUN_100a44268(param_1,param_2,param_3,FUN_100a42a80,0,thunk_FUN_1000386a0,auStack_b0,param_6,
                param_7,param_8,param_9,param_10,param_11,FUN_100668f98,auStack_e0,local_78,param_14
                ,&DAT_100f2ab30,uStack_70,puVar1);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a42fc0 | FUN_100a42fc0 */

void FUN_100a42fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_100a3de80(auStack_90);
  FUN_100004640(auStack_90,local_78);
  local_c0 = param_16;
  uStack_b8 = param_17;
  local_b0 = param_18;
  local_120 = param_16;
  uStack_118 = param_17;
  local_110 = param_18;
  uStack_108 = param_14;
  local_100 = param_15;
  local_e0 = param_4;
  uStack_d8 = param_5;
  uStack_a8 = param_7;
  local_a0 = param_8;
  FUN_100a44268(param_1,param_2,param_3,thunk_FUN_100a42e94,auStack_d0,thunk_FUN_1000386a0,
                auStack_f0,param_6,param_9,param_10,param_11,param_12,param_13,FUN_100642d98,
                auStack_130,local_78,param_16,param_17,uStack_70,param_18);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a430f0 | FUN_100a430f0 */

void FUN_100a430f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_19;
  *(undefined8 *)(unaff_x22 + 0x158) = param_20;
  *(undefined8 *)(unaff_x22 + 0x138) = param_16;
  *(undefined8 *)(unaff_x22 + 0x130) = param_15;
  *(undefined8 *)(unaff_x22 + 0x148) = param_18;
  *(undefined8 *)(unaff_x22 + 0x140) = param_17;
  *(undefined8 *)(unaff_x22 + 0x118) = param_12;
  *(undefined8 *)(unaff_x22 + 0x110) = param_11;
  *(undefined8 *)(unaff_x22 + 0x128) = param_14;
  *(undefined8 *)(unaff_x22 + 0x120) = param_13;
  *(long *)(unaff_x22 + 0x100) = param_9;
  *(undefined8 *)(unaff_x22 + 0x108) = param_10;
  *(undefined1 *)(unaff_x22 + 0x180) = param_8;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  if (param_9 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_10 = 0;
  }
  else {
    _swift_getObjectType(param_9);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x160) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  _swift_task_switch(FUN_100a4318c,UVar1.unknown);
  return;
}



/* Address: 0x100a4318c | FUN_100a4318c */

void FUN_100a4318c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100a3de80(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100004640(unaff_x22 + 0x48,uVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a432b8;
  FUN_100a44470(plVar3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),thunk_FUN_100a42e94,unaff_x22 + 0x10,
                thunk_FUN_1000386a0,unaff_x22 + 0xb0,*(undefined1 *)(unaff_x22 + 0x180),
                *(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118),
                *(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128),
                *(undefined8 *)(unaff_x22 + 0x130),&DAT_100c90298,unaff_x22 + 0x70,uVar1,
                *(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x150),uVar2,
                *(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x100a432b8 | FUN_100a432b8 */

void FUN_100a432b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a435bc;
  }
  else {
    pcVar1 = FUN_100a43318;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
  return;
}



/* Address: 0x100a43318 | FUN_100a43318 */

void FUN_100a43318(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a43350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a43354 | FUN_100a43354 */

void FUN_100a43354(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar5,param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a433ec | FUN_100a433ec */

void FUN_100a433ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_17;
  *(undefined8 *)(unaff_x22 + 0x148) = param_18;
  *(undefined8 *)(unaff_x22 + 0x128) = param_14;
  *(undefined8 *)(unaff_x22 + 0x120) = param_13;
  *(undefined8 *)(unaff_x22 + 0x138) = param_16;
  *(undefined8 *)(unaff_x22 + 0x130) = param_15;
  *(undefined8 *)(unaff_x22 + 0x108) = param_10;
  *(undefined8 *)(unaff_x22 + 0x100) = param_9;
  *(undefined8 *)(unaff_x22 + 0x118) = param_12;
  *(undefined8 *)(unaff_x22 + 0x110) = param_11;
  *(undefined1 *)(unaff_x22 + 0x160) = param_8;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  _swift_task_switch(FUN_100a43430,0,0);
  return;
}



/* Address: 0x100a43430 | FUN_100a43430 */

void FUN_100a43430(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100a3de80(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100004640(unaff_x22 + 0x48,uVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a43558;
  FUN_100a44470(plVar3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),thunk_FUN_100a42e94,unaff_x22 + 0x10,
                thunk_FUN_1000386a0,unaff_x22 + 0xb0,*(undefined1 *)(unaff_x22 + 0x160),0,0,
                *(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118),
                *(undefined8 *)(unaff_x22 + 0x120),&DAT_100c902b0,unaff_x22 + 0x70,uVar1,
                *(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140),uVar2,
                *(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Address: 0x100a43558 | FUN_100a43558 */

void FUN_100a43558(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a435bc;
  }
  else {
    pcVar1 = FUN_100a435f8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a435bc | FUN_100a435bc */

void FUN_100a435bc(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a435f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a435f8 | FUN_100a435f8 */

void FUN_100a435f8(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a43630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a43634 | FUN_100a43634 */

void FUN_100a43634(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a436a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,param_1,param_2);
  return;
}



/* Address: 0x100a436ac | switchD_100a411e8::caseD_18 */

void switchD_100a411e8::caseD_18(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a43634(plVar5,param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a43744 | FUN_100a43744 */

void FUN_100a43744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_15;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_16;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_14;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_13;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_12;
  *(undefined8 *)(unaff_x22 + 200) = param_11;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_9;
  *(long *)(unaff_x22 + 0xa8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_8;
  *(undefined1 *)(unaff_x22 + 0x118) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  if (param_7 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_8 = 0;
  }
  else {
    _swift_getObjectType(param_7);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0xf8) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x100) = param_8;
  _swift_task_switch(FUN_100a437e4,UVar1.unknown);
  return;
}



/* Address: 0x100a437e4 | FUN_100a437e4 */

void FUN_100a437e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_100a3de80(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar1);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar3;
  plVar4 = plVar3;
  FUN_100a40794();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a438f0;
  FUN_100a44470(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined8 *)(unaff_x22 + 0x90),FUN_100a42a80,0,thunk_FUN_1000386a0,
                unaff_x22 + 0x60,*(undefined1 *)(unaff_x22 + 0x118),
                *(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
                *(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),&DAT_100c902c8,unaff_x22 + 0x10,uVar1,
                *(undefined8 *)(unaff_x22 + 0xf0),&DAT_100f2ab30,uVar2,plVar4);
  return;
}



/* Address: 0x100a438f0 | FUN_100a438f0 */

void FUN_100a438f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a43bbc;
  }
  else {
    pcVar1 = FUN_100a43950;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xf8),*(undefined8 *)(lVar2 + 0x100));
  return;
}



/* Address: 0x100a43950 | FUN_100a43950 */

void FUN_100a43950(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a43988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4398c | FUN_100a4398c */

void FUN_100a4398c(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar3,param_1,param_2,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x100a43a10 | FUN_100a43a10 */

void FUN_100a43a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_13;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_14;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_12;
  *(undefined8 *)(unaff_x22 + 200) = param_11;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_8;
  *(undefined1 *)(unaff_x22 + 0xf8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  _swift_task_switch(FUN_100a43a50,0,0);
  return;
}



/* Address: 0x100a43a50 | FUN_100a43a50 */

void FUN_100a43a50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_100a3de80(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar1);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar3;
  plVar4 = plVar3;
  FUN_100a40794();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a43b58;
  FUN_100a44470(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined8 *)(unaff_x22 + 0x90),FUN_100a42a80,0,thunk_FUN_1000386a0,
                unaff_x22 + 0x60,*(undefined1 *)(unaff_x22 + 0xf8),0,0,
                *(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0),
                *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
                *(undefined8 *)(unaff_x22 + 200),&DAT_100c902e0,unaff_x22 + 0x10,uVar1,
                *(undefined8 *)(unaff_x22 + 0xe0),&DAT_100f2ab30,uVar2,plVar4);
  return;
}



/* Address: 0x100a43b58 | FUN_100a43b58 */

void FUN_100a43b58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a43bbc;
  }
  else {
    pcVar1 = FUN_100a43bf8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a43bbc | FUN_100a43bbc */

void FUN_100a43bbc(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a43bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a43bf8 | FUN_100a43bf8 */

void FUN_100a43bf8(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a43c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a43c34 | FUN_100a43c34 */

void FUN_100a43c34(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar3,param_1,param_2,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x100a43cb8 | FUN_100a43cb8 */

void FUN_100a43cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_19;
  *(undefined8 *)(unaff_x22 + 0x158) = param_20;
  *(undefined8 *)(unaff_x22 + 0x138) = param_16;
  *(undefined8 *)(unaff_x22 + 0x130) = param_15;
  *(undefined8 *)(unaff_x22 + 0x148) = param_18;
  *(undefined8 *)(unaff_x22 + 0x140) = param_17;
  *(undefined8 *)(unaff_x22 + 0x118) = param_12;
  *(undefined8 *)(unaff_x22 + 0x110) = param_11;
  *(undefined8 *)(unaff_x22 + 0x128) = param_14;
  *(undefined8 *)(unaff_x22 + 0x120) = param_13;
  *(long *)(unaff_x22 + 0x100) = param_9;
  *(undefined8 *)(unaff_x22 + 0x108) = param_10;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x180) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  if (param_9 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_10 = 0;
  }
  else {
    _swift_getObjectType(param_9);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x160) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  _swift_task_switch(FUN_100a43d54,UVar1.unknown);
  return;
}



/* Address: 0x100a43d54 | FUN_100a43d54 */

void FUN_100a43d54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100a3de80(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100004640(unaff_x22 + 0x48,uVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a43e80;
  FUN_100a44470(plVar3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),thunk_FUN_100a42e94,unaff_x22 + 0x10,
                thunk_FUN_1000386a0,unaff_x22 + 0xb0,*(undefined1 *)(unaff_x22 + 0x180),
                *(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118),
                *(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128),
                *(undefined8 *)(unaff_x22 + 0x130),&DAT_100c902f8,unaff_x22 + 0x70,uVar1,
                *(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x150),uVar2,
                *(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x100a43e80 | FUN_100a43e80 */

void FUN_100a43e80(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a435bc;
  }
  else {
    pcVar1 = thunk_FUN_100a43318;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x160),*(undefined8 *)(lVar2 + 0x168));
  return;
}



/* Address: 0x100a43ee0 | FUN_100a43ee0 */

void FUN_100a43ee0(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar5,param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a43f78 | FUN_100a43f78 */

void FUN_100a43f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_17;
  *(undefined8 *)(unaff_x22 + 0x148) = param_18;
  *(undefined8 *)(unaff_x22 + 0x128) = param_14;
  *(undefined8 *)(unaff_x22 + 0x120) = param_13;
  *(undefined8 *)(unaff_x22 + 0x138) = param_16;
  *(undefined8 *)(unaff_x22 + 0x130) = param_15;
  *(undefined8 *)(unaff_x22 + 0x108) = param_10;
  *(undefined8 *)(unaff_x22 + 0x100) = param_9;
  *(undefined8 *)(unaff_x22 + 0x118) = param_12;
  *(undefined8 *)(unaff_x22 + 0x110) = param_11;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  _swift_task_switch(FUN_100a43fbc,0,0);
  return;
}



/* Address: 0x100a43fbc | FUN_100a43fbc */

void FUN_100a43fbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100a3de80(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100004640(unaff_x22 + 0x48,uVar1);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  plVar3 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a440e4;
  FUN_100a44470(plVar3,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xd8),thunk_FUN_100a42e94,unaff_x22 + 0x10,
                thunk_FUN_1000386a0,unaff_x22 + 0xb0,*(undefined1 *)(unaff_x22 + 0x160),0,0,
                *(undefined8 *)(unaff_x22 + 0x100),*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118),
                *(undefined8 *)(unaff_x22 + 0x120),&DAT_100c90310,unaff_x22 + 0x70,uVar1,
                *(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140),uVar2,
                *(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Address: 0x100a440e4 | FUN_100a440e4 */

void FUN_100a440e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a435bc;
  }
  else {
    pcVar1 = thunk_FUN_100a435f8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a44148 | FUN_100a44148 */

void FUN_100a44148(undefined8 param_1,undefined8 param_2)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar5,param_1,param_2,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a441e0 | thunk_FUN_100a435bc */

void thunk_FUN_100a435bc(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a435f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


