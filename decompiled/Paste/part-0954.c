/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a4690c | FUN_100a4690c */

void FUN_100a4690c(TaskLocal *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x21;
  undefined8 uVar8;
  long lVar9;
  long alStack_1a0 [8];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  TaskLocal *local_108;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long alStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_130 = param_17;
  local_110 = param_15;
  local_118 = param_14;
  uStack_138 = param_11;
  local_140 = param_10;
  local_148 = param_12;
  local_150 = param_13;
  lVar2 = 0;
  local_160 = param_7;
  local_158 = param_8;
  local_128 = param_2;
  local_120 = param_3;
  local_108 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_19,param_16,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  lVar6 = *(long *)(lVar2 + -8);
  lVar4 = -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_160 + lVar4;
  local_d0 = param_16;
  uStack_c8 = param_17;
  local_c0 = param_18;
  lStack_b8 = param_19;
  local_b0 = param_20;
  uStack_a8 = local_160;
  local_a0 = local_158;
  pcVar7 = *(code **)(param_19 + 0x20);
  local_80 = param_4;
  uStack_78 = param_5;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 0x30) = param_16;
  *(long *)((long)alStack_1a0 + lVar4 + 0x38) = param_19;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 0x20) = param_18;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 0x28) = param_20;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 0x18) = local_150;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 0x10) = local_148;
  uVar1 = local_140;
  *(undefined8 *)((long)alStack_1a0 + lVar4 + 8) = uStack_138;
  *(undefined8 *)((long)alStack_1a0 + lVar4) = uVar1;
  puVar3 = local_128;
  (*pcVar7)(lVar9,local_128,local_120,FUN_1000386a0,alStack_90,param_6,FUN_100a44918,auStack_e0,
            param_9);
  FUN_100a48dac();
  uVar8 = *puVar3;
  lVar4 = param_19;
  _swift_getAssociatedConformanceWitness
            (param_19,param_16,lVar2,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  pcVar7 = *(code **)(lVar4 + 8);
  _swift_retain(uVar8);
  lVar5 = lVar2;
  (*pcVar7)(lVar2,lVar4);
  uVar1 = local_130;
  local_d0 = param_16;
  uStack_c8 = local_130;
  local_c0 = param_18;
  lStack_b8 = param_19;
  local_b0 = param_20;
  uStack_a8 = local_118;
  local_a0 = local_110;
  local_98 = lVar9;
  alStack_90[0] = lVar5;
  Swift::TaskLocal::_withValue
            (local_108,uVar8,alStack_90,FUN_100a44938,auStack_e0,0xd00000000000001c,
             0x8000000100db84d0,0xb2,local_130);
  if (unaff_x21 == 0) {
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(lVar5);
    FUN_100a48314(lVar9,param_16,uVar1,param_18,param_19,param_20);
    pcVar7 = *(code **)(lVar6 + 8);
  }
  else {
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(lVar5);
    FUN_100a3e9f8(unaff_x21,lVar2,lVar4);
    (**(code **)(lVar4 + 0x28))(1,0,0,lVar2,lVar4);
    _swift_willThrow();
    FUN_100a48314(lVar9,param_16,uVar1,param_18,param_19,param_20);
    pcVar7 = *(code **)(lVar6 + 8);
  }
  (*pcVar7)(lVar9,lVar2);
  return;
}



/* Address: 0x100a46c24 | FUN_100a46c24 */

void FUN_100a46c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  long lVar1;
  ulong uVar2;
  UnownedSerialExecutor UVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_22;
  *(undefined8 *)(unaff_x22 + 0x178) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x160) = param_20;
  *(undefined8 *)(unaff_x22 + 0x168) = param_21;
  *(undefined8 *)(unaff_x22 + 0x150) = param_18;
  *(undefined8 *)(unaff_x22 + 0x158) = param_19;
  *(undefined8 *)(unaff_x22 + 0x148) = param_17;
  *(undefined8 *)(unaff_x22 + 0x140) = param_16;
  *(undefined8 *)(unaff_x22 + 0x138) = param_15;
  *(undefined8 *)(unaff_x22 + 0x130) = param_14;
  *(undefined8 *)(unaff_x22 + 0x128) = param_13;
  *(undefined8 *)(unaff_x22 + 0x120) = param_12;
  *(undefined8 *)(unaff_x22 + 0x118) = param_11;
  *(long *)(unaff_x22 + 0x108) = param_9;
  *(undefined8 *)(unaff_x22 + 0x110) = param_10;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x100) = param_8;
  *(undefined1 *)(unaff_x22 + 0x1d0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_21,param_18,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0x180) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x188) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar2;
  if (param_9 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_10 = 0;
  }
  else {
    _swift_getObjectType(param_9);
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x198) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_10;
  _swift_task_switch(FUN_100a46d28,UVar3.unknown);
  return;
}



/* Address: 0x100a46d28 | FUN_100a46d28 */

void FUN_100a46d28(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x158);
  lVar3 = *(long *)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  *(long *)(unaff_x22 + 0x88) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  (**(code **)(lVar3 + 0x20))
            (uVar6,puVar2,*(undefined8 *)(unaff_x22 + 0xe0),thunk_FUN_1000386a0,unaff_x22 + 0xb0,
             *(undefined1 *)(unaff_x22 + 0x1d0),thunk_FUN_100a44918,unaff_x22 + 0x60,
             *(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x130),
             *(undefined8 *)(unaff_x22 + 0x138),uVar12,uVar1,uVar9,lVar3);
  FUN_100a48dac();
  uVar7 = *puVar2;
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar7;
  _swift_getAssociatedConformanceWitness
            (lVar3,uVar9,uVar4,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(long *)(unaff_x22 + 0x1b0) = lVar3;
  pcVar8 = *(code **)(lVar3 + 8);
  _swift_retain(uVar7);
  (*pcVar8)(uVar4,lVar3);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a46ee8;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0xd0),(undefined8 *)(unaff_x22 + 0xa8),&UNK_100c903f0,
                unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x108),
                *(undefined8 *)(unaff_x22 + 0x110),0xd00000000000001c,0x8000000100db84d0,0x179,
                *(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x100a46ee8 | FUN_100a46ee8 */

void FUN_100a46ee8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
  *(long *)(lVar4 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1c0));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1b8));
    uVar3 = *(undefined8 *)(lVar4 + 0x198);
    uVar2 = *(undefined8 *)(lVar4 + 0x1a0);
    pcVar1 = FUN_100a46f68;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x198);
    uVar2 = *(undefined8 *)(lVar4 + 0x1a0);
    pcVar1 = FUN_100a46fd8;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a46f68 | FUN_100a46f68 */

void FUN_100a46f68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  FUN_100a48314(uVar2,*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158),
                *(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168),
                *(undefined8 *)(unaff_x22 + 0x170));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a46fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a46fd8 | FUN_100a46fd8 */

void FUN_100a46fd8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  lVar2 = *(long *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1b8));
  FUN_100a3e9f8(uVar8,uVar9,lVar1);
  (**(code **)(lVar1 + 0x28))(1,0,0,uVar9,lVar1);
  _swift_willThrow();
  FUN_100a48314(uVar5,uVar10,uVar4,uVar7,uVar3,uVar6);
  (**(code **)(lVar2 + 8))(uVar5,uVar9);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a470b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a470b8 | FUN_100a470b8 */

void FUN_100a470b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16)

{
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_60 = param_13;
  uStack_58 = param_14;
  local_50 = param_15;
  uStack_48 = param_16;
  local_40 = param_6;
  uStack_38 = param_7;
  local_20 = param_3;
  uStack_18 = param_4;
  (**(code **)(param_15 + 0x20))
            (param_1,param_2,thunk_FUN_1000386a0,auStack_30,param_5,FUN_1001aeafc,auStack_70,param_8
             ,param_9,param_10,param_11,param_12,param_14,param_16,param_13,param_15);
  return;
}



/* Address: 0x100a47120 | FUN_100a47120 */

void FUN_100a47120(TaskLocal *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long alStack_160 [8];
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  long local_58;
  
  lVar1 = 0;
  local_118 = param_9;
  local_110 = param_8;
  local_108 = param_2;
  local_100 = param_3;
  local_f4 = param_6;
  local_f0 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_16,param_14,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_120 + lVar4;
  pcVar6 = *(code **)(param_16 + 0x20);
  lVar2 = lVar1;
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_100a40794();
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x30) = param_14;
  *(long *)((long)alStack_160 + lVar4 + 0x38) = param_16;
  *(undefined **)((long)alStack_160 + lVar4 + 0x20) = &DAT_100f2ab30;
  *(long *)((long)alStack_160 + lVar4 + 0x28) = lVar2;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x10) = param_10;
  *(undefined8 *)((long)alStack_160 + lVar4 + 0x18) = param_11;
  *(undefined8 *)((long)alStack_160 + lVar4 + 8) = local_118;
  *(undefined8 *)((long)alStack_160 + lVar4) = local_110;
  puVar3 = local_108;
  (*pcVar6)(puVar7,local_108,local_100,thunk_FUN_1000386a0,auStack_b0,local_f4,FUN_100a42a80,0,
            local_f0);
  FUN_100a48dac();
  uVar8 = *puVar3;
  lVar4 = param_16;
  _swift_getAssociatedConformanceWitness
            (param_16,param_14,lVar1,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  pcVar6 = *(code **)(lVar4 + 8);
  _swift_retain(uVar8);
  lVar2 = lVar1;
  (*pcVar6)(lVar1,lVar4);
  local_a0 = param_14;
  uStack_98 = param_15;
  local_90 = param_16;
  uStack_88 = param_12;
  local_80 = param_13;
  puStack_78 = puVar7;
  local_58 = lVar2;
  Swift::TaskLocal::_withValue
            (param_1,uVar8,&local_58,FUN_100a47d68,auStack_b0,0xd00000000000001c,0x8000000100db84d0,
             0xe6);
  if (unaff_x21 == 0) {
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(lVar2);
  }
  else {
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(lVar2);
    FUN_100a3e9f8(unaff_x21,lVar1,lVar4);
    (**(code **)(lVar4 + 0x28))(1,0,0,lVar1,lVar4);
    _swift_willThrow();
  }
  FUN_100a47c38(puVar7,param_14,param_15,param_16);
  (**(code **)(lVar5 + 8))(puVar7,lVar1);
  return;
}



/* Address: 0x100a47370 | FUN_100a47370 */

void FUN_100a47370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long lVar1;
  ulong uVar2;
  UnownedSerialExecutor UVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_18;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_16;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_17;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_15;
  *(undefined8 *)(unaff_x22 + 200) = param_12;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_14;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_13;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_10;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_9;
  *(long *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x158) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_18,param_16,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0x108) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  if (param_7 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_8 = 0;
  }
  else {
    _swift_getObjectType(param_7);
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x120) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x128) = param_8;
  _swift_task_switch(FUN_100a4745c,UVar3.unknown);
  return;
}



/* Address: 0x100a4745c | FUN_100a4745c */

void FUN_100a4745c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar10 = *(long *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar11 = *(code **)(lVar10 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x158);
  FUN_100a40794();
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  (*pcVar11)(uVar8,puVar4,uVar2,thunk_FUN_1000386a0,unaff_x22 + 0x50,uVar3,FUN_100a42a80,0,uVar9,
             uVar13,uVar15,uVar12,uVar1,&DAT_100f2ab30,param_1,uVar14,lVar10);
  FUN_100a48dac();
  uVar12 = *puVar4;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar12;
  lVar5 = lVar10;
  _swift_getAssociatedConformanceWitness
            (lVar10,uVar14,uVar6,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(long *)(unaff_x22 + 0x138) = lVar5;
  pcVar11 = *(code **)(lVar5 + 8);
  _swift_retain(uVar12);
  (*pcVar11)(uVar6,lVar5);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(long *)(unaff_x22 + 0x30) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a4763c;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x78),(undefined8 *)(unaff_x22 + 0x70),&DAT_100c90408,
                unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8)
                ,0xd00000000000001c,0x8000000100db84d0,0x11c,*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Address: 0x100a4763c | FUN_100a4763c */

void FUN_100a4763c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x130);
  *(long *)(lVar4 + 0x150) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x148));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x140));
    uVar3 = *(undefined8 *)(lVar4 + 0x120);
    uVar2 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = FUN_100a476bc;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x120);
    uVar2 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = FUN_100a47728;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a476bc | FUN_100a476bc */

void FUN_100a476bc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  FUN_100a47c38(uVar2,*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xf0),
                *(undefined8 *)(unaff_x22 + 0xf8));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a47724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a47728 | FUN_100a47728 */

void FUN_100a47728(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x138);
  lVar2 = *(long *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x140));
  FUN_100a3e9f8(uVar6,uVar7,lVar1);
  (**(code **)(lVar1 + 0x28))(1,0,0,uVar7,lVar1);
  _swift_willThrow();
  FUN_100a47c38(uVar4,uVar8,uVar3,uVar5);
  (**(code **)(lVar2 + 8))(uVar4,uVar7);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a477f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a477f4 | FUN_100a477f4 */

void FUN_100a477f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_16;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_14;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_15;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_13;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_10;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_9;
  *(undefined8 *)(unaff_x22 + 200) = param_12;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x138) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_16,param_14,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  _swift_task_switch(FUN_100a4789c,0,0);
  return;
}



/* Address: 0x100a4789c | FUN_100a4789c */

void FUN_100a4789c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar10 = *(long *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar11 = *(code **)(lVar10 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x138);
  FUN_100a40794();
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 200);
  (*pcVar11)(uVar8,puVar4,uVar2,thunk_FUN_1000386a0,unaff_x22 + 0x50,uVar3,FUN_100a42a80,0,uVar9,
             uVar13,uVar15,uVar12,uVar1,&DAT_100f2ab30,param_1,uVar14,lVar10);
  FUN_100a48dac();
  uVar12 = *puVar4;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar12;
  lVar5 = lVar10;
  _swift_getAssociatedConformanceWitness
            (lVar10,uVar14,uVar6,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(long *)(unaff_x22 + 0x118) = lVar5;
  pcVar11 = *(code **)(lVar5 + 8);
  _swift_retain(uVar12);
  (*pcVar11)(uVar6,lVar5);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(long *)(unaff_x22 + 0x30) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a47a80;
                    /* WARNING: Could not recover jumptable at 0x000100a47a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x78),(undefined8 *)(unaff_x22 + 0x70),&UNK_100c90420,
                unaff_x22 + 0x10,0,0,0xd00000000000001c,0x8000000100db84d0,0x142,
                *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x100a47a80 | FUN_100a47a80 */

void FUN_100a47a80(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x110);
  *(long *)(lVar3 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x128));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x120));
    pcVar1 = FUN_100a47b00;
  }
  else {
    pcVar1 = FUN_100a47b6c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a47b00 | FUN_100a47b00 */

void FUN_100a47b00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_100a47c38(uVar2,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0),
                *(undefined8 *)(unaff_x22 + 0xe8));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a47b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a47b6c | FUN_100a47b6c */

void FUN_100a47b6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar1 = *(long *)(unaff_x22 + 0x118);
  lVar2 = *(long *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
  FUN_100a3e9f8(uVar6,uVar7,lVar1);
  (**(code **)(lVar1 + 0x28))(1,0,0,uVar7,lVar1);
  _swift_willThrow();
  FUN_100a47c38(uVar4,uVar8,uVar3,uVar5);
  (**(code **)(lVar2 + 8))(uVar4,uVar7);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a47c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a47c38 | FUN_100a47c38 */

void FUN_100a47c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_2,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  _swift_getAssociatedConformanceWitness
            (param_4,param_2,uVar1,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  FUN_100a3e888(uVar1,param_4);
  return;
}



/* Address: 0x100a47cc0 | FUN_100a47cc0 */

void FUN_100a47cc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_1005c804c;
  FUN_100a44a34(plVar9,param_1,uVar7,uVar4,uVar8,uVar1,uVar5,uVar2,uVar6,uVar3);
  return;
}



/* Address: 0x100a47d68 | FUN_100a47d68 */

void FUN_100a47d68(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100a47d90 | FUN_100a47d90 */

void FUN_100a47d90(undefined8 param_1)

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
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a47e24 | FUN_100a47e24 */

void FUN_100a47e24(undefined8 param_1)

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
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100a47eb8 | FUN_100a47eb8 */

void FUN_100a47eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_20;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_18;
  *(undefined8 *)(unaff_x22 + 0x158) = param_19;
  *(undefined8 *)(unaff_x22 + 0x140) = param_16;
  *(undefined8 *)(unaff_x22 + 0x148) = param_17;
  *(undefined8 *)(unaff_x22 + 0x138) = param_15;
  *(undefined8 *)(unaff_x22 + 0x130) = param_14;
  *(undefined8 *)(unaff_x22 + 0x128) = param_13;
  *(undefined8 *)(unaff_x22 + 0x120) = param_12;
  *(undefined8 *)(unaff_x22 + 0x118) = param_11;
  *(undefined8 *)(unaff_x22 + 0x110) = param_10;
  *(undefined8 *)(unaff_x22 + 0x108) = param_9;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x100) = param_8;
  *(undefined1 *)(unaff_x22 + 0x1b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_19,param_16,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0x170) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  _swift_task_switch(FUN_100a47f80,0,0);
  return;
}



/* Address: 0x100a47f80 | FUN_100a47f80 */

void FUN_100a47f80(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x148);
  lVar3 = *(long *)(unaff_x22 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar12;
  *(long *)(unaff_x22 + 0x88) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  (**(code **)(lVar3 + 0x20))
            (uVar6,puVar2,*(undefined8 *)(unaff_x22 + 0xe0),thunk_FUN_1000386a0,unaff_x22 + 0xb0,
             *(undefined1 *)(unaff_x22 + 0x1b0),thunk_FUN_100a44918,unaff_x22 + 0x60,
             *(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
             *(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0x128),uVar12,uVar1,uVar9,lVar3);
  FUN_100a48dac();
  uVar7 = *puVar2;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar7;
  _swift_getAssociatedConformanceWitness
            (lVar3,uVar9,uVar4,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(long *)(unaff_x22 + 400) = lVar3;
  pcVar8 = *(code **)(lVar3 + 8);
  _swift_retain(uVar7);
  (*pcVar8)(uVar4,lVar3);
  *(undefined8 *)(unaff_x22 + 0x198) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a48144;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0xd0),(undefined8 *)(unaff_x22 + 0xa8),&DAT_100c90438,
                unaff_x22 + 0x10,0,0,0xd00000000000001c,0x8000000100db84d0,0x1ac,
                *(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Address: 0x100a48144 | FUN_100a48144 */

void FUN_100a48144(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x188);
  *(long *)(lVar3 + 0x1a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a0));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x198));
    pcVar1 = FUN_100a481c4;
  }
  else {
    pcVar1 = FUN_100a48234;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a481c4 | FUN_100a481c4 */

void FUN_100a481c4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  FUN_100a48314(uVar2,*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148),
                *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158),
                *(undefined8 *)(unaff_x22 + 0x160));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a48230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a48234 | FUN_100a48234 */

void FUN_100a48234(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar1 = *(long *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x198));
  FUN_100a3e9f8(uVar8,uVar9,lVar1);
  (**(code **)(lVar1 + 0x28))(1,0,0,uVar9,lVar1);
  _swift_willThrow();
  FUN_100a48314(uVar5,uVar10,uVar4,uVar7,uVar3,uVar6);
  (**(code **)(lVar2 + 8))(uVar5,uVar9);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a48310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a48314 | FUN_100a48314 */

void FUN_100a48314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_2,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  _swift_getAssociatedConformanceWitness
            (param_5,param_2,uVar1,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  FUN_100a3e888(uVar1,param_5);
  return;
}



/* Address: 0x100a4839c | FUN_100a4839c */

void FUN_100a4839c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1005c804c;
  FUN_100a45098(plVar9,param_1,uVar7,uVar4,uVar8,uVar1,uVar5,uVar2,uVar6,uVar3);
  return;
}



/* Address: 0x100a48444 | FUN_100a48444 */

ulong FUN_100a48444(ulong param_1,long param_2)

{
  (**(code **)(param_2 + 0x18))();
  return param_1 / 1000000;
}



/* Address: 0x100a48474 | FUN_100a48474 */

void FUN_100a48474(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100a484b8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a484b8 | FUN_100a484b8 */

long FUN_100a484b8(void)

{
  code *pcVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_28 = 0;
  local_20 = 0;
  _clock_gettime(0,&local_28);
  if (local_28 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a48528);
    (*pcVar1)();
  }
  if (-1 < local_20) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
      return local_20 + local_28 * 1000000000;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4852c);
  (*pcVar1)();
}



/* Address: 0x100a48530 | FUN_100a48530 */

void FUN_100a48530(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100a4855c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100a4859c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100a4855c | FUN_100a4855c */

void FUN_100a4855c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9047c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9047c,&DAT_100f2ab30);
  DAT_100ff6628 = pTVar1;
  return;
}



/* Address: 0x100a4859c | FUN_100a4859c */

void FUN_100a4859c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6630 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c904c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c904c4,&DAT_100f2ab30);
  DAT_100ff6630 = pTVar1;
  return;
}



/* Address: 0x100a485dc | FUN_100a485dc */

void FUN_100a485dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90504;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90504,&DAT_100f2ab30);
  DAT_100ff6638 = pTVar1;
  return;
}



/* Address: 0x100a4861c | thunk_FUN_100a485dc */

void thunk_FUN_100a485dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90504;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90504,&DAT_100f2ab30);
  DAT_100ff6638 = pTVar1;
  return;
}



/* Address: 0x100a48620 | FUN_100a48620 */

undefined1  [16] FUN_100a48620(void)

{
  return ZEXT816(0x100f2ab10);
}



/* Address: 0x100a48630 | FUN_100a48630 */

undefined1  [16] FUN_100a48630(void)

{
  return ZEXT816(0x100f2ab30);
}



/* Address: 0x100a48640 | FUN_100a48640 */

void FUN_100a48640(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100a48474();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a48684 | thunk_FUN_100a485dc */

void thunk_FUN_100a485dc(void)

{
  thunk_FUN_100a485dc();
  return;
}



/* Address: 0x100a48688 | FUN_100a48688 */

undefined * FUN_100a48688(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined1 auStack_40 [32];
  
  puStack_48 = &DAT_100f2ac50;
  local_60 = in_x5;
  uStack_58 = in_x6;
  local_50 = in_x7;
  FUN_100011080(&local_60,auStack_40);
  _swift_bridgeObjectRetain(in_x6);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_isUniquelyReferenced_nonNull_native(PTR___swiftEmptyDictionarySingleton_100eae0e0);
  local_60 = puVar1;
  FUN_100a49724(auStack_40,&DAT_100f2ac78,0x6f646f74,&DAT_e400000000000000,puVar2);
  return local_60;
}



/* Address: 0x100a4870c | FUN_100a4870c */

void FUN_100a4870c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  FUN_100a49fa8();
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cca50c,&TargetProtocolRequirement_100cca514);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100a48774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x100a48778 | FUN_100a48778 */

undefined1  [16] FUN_100a48778(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x6f646f74;
  return auVar1;
}



/* Address: 0x100a48788 | FUN_100a48788 */

void FUN_100a48788(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [32];
  
  uVar3 = param_4;
  uVar4 = param_5;
  FUN_100a4a128(param_2,param_4,param_5);
  if ((*(long *)(param_3 + 0x10) == 0) || (FUN_100a49f50(), (uVar3 & 1) == 0)) {
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + param_2 * 0x20,&local_80);
    _swift_bridgeObjectRelease(uVar4);
    if (local_68 != 0) {
      FUN_100011080(&local_80,auStack_60);
      FUN_100011080(auStack_60,&local_80);
      puVar1 = &DAT_100ff6648;
      FUN_1000f7830(&DAT_100ff6648,&DAT_100c90578);
      lVar2 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_5,param_4,0x100cca50c,&TargetProtocolRequirement_100cca514);
      _swift_dynamicCast(param_1,&local_80,puVar1,lVar2,7);
      pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
      uVar4 = 0;
      goto LAB_100a488d8;
    }
  }
  FUN_1000fb4c4(&local_80,&DAT_100ff6640,&DAT_100c90570);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,0x100cca50c,&TargetProtocolRequirement_100cca514);
  pcVar5 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  uVar4 = 1;
LAB_100a488d8:
  (*pcVar5)(param_1,uVar4,1,lVar2);
  return;
}



/* Address: 0x100a488f4 | FUN_100a488f4 */

void FUN_100a488f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [32];
  
  uStack_78 = param_1[1];
  local_80 = *param_1;
  local_68 = param_1[3];
  uStack_70 = param_1[2];
  if (local_68 == 0) {
    FUN_1000fb4c4(&local_80,&DAT_100ff6640,&DAT_100c90570);
    FUN_100a49680(auStack_60,param_2,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    FUN_1000fb4c4(auStack_60,&DAT_100ff6640,&DAT_100c90570);
  }
  else {
    FUN_100011080(&local_80,auStack_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_80 = *unaff_x20;
    FUN_100a49724(auStack_60,param_2,param_3,param_4,uVar1);
    _swift_bridgeObjectRelease(param_4);
    *unaff_x20 = local_80;
  }
  return;
}



/* Address: 0x100a489dc | FUN_100a489dc */

undefined1  [16]
FUN_100a489dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  Optional OVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  void *pvVar4;
  long lVar5;
  undefined8 *unaff_x20;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar3 = (undefined8 *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0xac14);
  }
  *param_1 = puVar3;
  puVar3[2] = param_4;
  puVar3[3] = unaff_x20;
  *puVar3 = param_2;
  puVar3[1] = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cca50c,&TargetProtocolRequirement_100cca514);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar3[4] = CONCAT71(extraout_var,OVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar3[5] = lVar5;
  pvVar6 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar4 = _malloc((size_t)pvVar6);
    puVar3[6] = pvVar4;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar4 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xac14);
    puVar3[6] = pvVar4;
    _swift_coroFrameAlloc(pvVar6,0xac14);
  }
  puVar3[7] = pvVar6;
  FUN_100a48788(pvVar6,param_2,*unaff_x20,param_3,param_4);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_100a48ae8;
  return auVar7;
}



/* Address: 0x100a48ae8 | FUN_100a48ae8 */

void FUN_100a48ae8(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[6];
  pvVar5 = (void *)param_1[7];
  uVar2 = param_1[4];
  lVar6 = param_1[5];
  uVar3 = param_1[2];
  uVar4 = *param_1;
  uVar7 = param_1[1];
  if ((param_2 & 1) == 0) {
    FUN_100a49fa8(pvVar5,uVar4,uVar7,uVar3);
    pcVar8 = *(code **)(lVar6 + 8);
  }
  else {
    (**(code **)(lVar6 + 0x10))(pvVar1,pvVar5,uVar2);
    FUN_100a49fa8(pvVar1,uVar4,uVar7,uVar3);
    pcVar8 = *(code **)(lVar6 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar5,uVar2);
  _free(pvVar5);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x100a48bac | FUN_100a48bac */

void FUN_100a48bac(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x21;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  puVar8 = (ulong *)(param_3 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar9 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *puVar8;
  _swift_bridgeObjectRetain(param_3);
  lVar12 = 0;
  lVar13 = lVar12;
  uVar10 = uVar9;
  while( true ) {
    while (uVar9 != 0) {
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar12 << 6;
      puVar6 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar5 * 0x18);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar11 = puVar6[2];
      local_98 = uVar1;
      uStack_90 = uVar2;
      local_88 = uVar11;
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar5 * 0x20,auStack_80);
      _swift_bridgeObjectRetain(uVar11);
      (*param_1)(uVar1,uVar2,uVar11,auStack_80);
      if (unaff_x21 != 0) {
        FUN_10000c650(param_3,puVar8,~uVar7,lVar13,uVar10);
        FUN_1000fb4c4(&local_98,&DAT_100ff6650,&DAT_100c90580);
        return;
      }
      FUN_1000fb4c4(&local_98,&DAT_100ff6650,&DAT_100c90580);
      uVar9 = uVar9 - 1 & uVar9;
      lVar13 = lVar12;
      uVar10 = uVar9;
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar12) {
      FUN_10000c650(param_3,puVar8,~uVar7,lVar13,0);
      return;
    }
    uVar9 = puVar8[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a48d54);
  (*pcVar3)();
}



/* Address: 0x100a48d54 | FUN_100a48d54 */

void FUN_100a48d54(void)

{
  TaskLocal *pTVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  local_28 = 0;
  pTVar1 = (TaskLocal *)&DAT_100ff6678;
  FUN_1000f7830(&DAT_100ff6678,&DAT_100c90618);
  _swift_allocObject();
  puVar2 = &local_28;
  Swift::TaskLocal::_init(pTVar1);
  DAT_1010582d0 = puVar2;
  return;
}



/* Address: 0x100a48dac | FUN_100a48dac */

undefined8 * FUN_100a48dac(void)

{
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  return &DAT_1010582d0;
}



/* Address: 0x100a48dec | FUN_100a48dec */

void FUN_100a48dec(void)

{
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  _swift_retain(DAT_1010582d0);
  return;
}



/* Address: 0x100a48e2c | FUN_100a48e2c */

undefined8 FUN_100a48e2c(void)

{
  undefined8 local_28;
  
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  Swift::TaskLocal::get(DAT_1010582d0);
  return local_28;
}



/* Address: 0x100a48e88 | FUN_100a48e88 */

void FUN_100a48e88(TaskLocal *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_48;
  
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  local_48 = param_2;
  Swift::TaskLocal::_withValue
            (param_1,DAT_1010582d0,&local_48,param_3,param_4,0xd000000000000029,0x8000000100db84f0,
             0x109,param_5);
  return;
}



/* Address: 0x100a48f48 | FUN_100a48f48 */

void FUN_100a48f48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(long *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  if (param_3 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_4 = 0;
  }
  else {
    _swift_getObjectType(param_3);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  _swift_task_switch(FUN_100a48fc0,UVar1.unknown);
  return;
}



/* Address: 0x100a48fc0 | FUN_100a48fc0 */

void FUN_100a48fc0(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4909c;
  FUN_100a49104(*(undefined8 *)(unaff_x22 + 0x18),(undefined8 *)(unaff_x22 + 0x10),
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                0xd000000000000029,0x8000000100db84f0,0x116,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x100a4909c | FUN_100a4909c */

void FUN_100a4909c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006b9848,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a49100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a49104 | FUN_100a49104 */

void FUN_100a49104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = thunk_FUN_1005cd444;
    Swift::TaskLocal::_withValue
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a493c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a4925c | FUN_100a4925c */

void FUN_100a4925c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_100a4927c,0,0);
  return;
}



/* Address: 0x100a4927c | FUN_100a4927c */

void FUN_100a4927c(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (DAT_100ff6658 != -1) {
    _swift_once(&DAT_100ff6658,FUN_100a48d54);
  }
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4935c;
  FUN_100a49104(*(undefined8 *)(unaff_x22 + 0x18),(undefined8 *)(unaff_x22 + 0x10),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),0,0,
                0xd000000000000029,0x8000000100db84f0,0x11d,*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x100a4935c | FUN_100a4935c */

void FUN_100a4935c(void)

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
    _swift_task_switch(FUN_100929054,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a493c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a493c8 | FUN_100a493c8 */

void FUN_100a493c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(long **)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(*unaff_x20 +
                   *(long *)PTR___class_metadata_base_offset_for_Swift_TaskLocal_100eaf050);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  if (param_5 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_6 = 0;
  }
  else {
    _swift_getObjectType(param_5);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x80) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  _swift_task_switch(FUN_100a49490,UVar2.unknown);
  return;
}



/* Address: 0x100a49490 | FUN_100a49490 */

void FUN_100a49490(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x18),
             *(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd240;
  FUN_100a49528(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}


