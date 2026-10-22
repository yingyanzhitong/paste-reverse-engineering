/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a441e4 | thunk_FUN_100a43bbc */

void thunk_FUN_100a43bbc(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a43bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a441e8 | thunk_FUN_1001aeadc */

void thunk_FUN_1001aeadc(void)

{
  FUN_1001aeadc();
  return;
}



/* Address: 0x100a441ec | thunk_FUN_100a42e94 */

void thunk_FUN_100a42e94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Address: 0x100a441f0 | thunk_FUN_100a43318 */

void thunk_FUN_100a43318(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a43350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a441f4 | thunk_FUN_100a435f8 */

void thunk_FUN_100a435f8(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000100a43630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a441f8 | FUN_100a441f8 */

void FUN_100a441f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  local_40 = param_3;
  uStack_38 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  (**(code **)(param_15 + 0x10))
            (param_1,param_2,thunk_FUN_1000386a0,auStack_30,param_7,FUN_1001aeafc,auStack_70,param_8
             ,param_9,param_10,param_11,param_12,param_14,param_16,param_13,param_15);
  return;
}



/* Address: 0x100a44268 | FUN_100a44268 */

void FUN_100a44268(TaskLocal *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x21;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  local_f0 = param_16;
  uStack_e8 = param_17;
  local_e0 = param_18;
  lStack_d8 = param_19;
  local_d0 = param_20;
  uStack_c8 = param_4;
  local_c0 = param_5;
  local_a0 = param_6;
  uStack_98 = param_7;
  (**(code **)(param_19 + 0x10))
            (auStack_90,param_2,param_3,FUN_1000386a0,local_b0,param_8,FUN_100a44918,auStack_100,
             param_9,param_10,param_11,param_12,param_13,param_18,param_20,param_16,param_19);
  FUN_100a48dac();
  lVar1 = lStack_70;
  uVar2 = local_78;
  uVar5 = *param_2;
  FUN_100004640(auStack_90,local_78);
  pcVar4 = *(code **)(lVar1 + 8);
  _swift_retain(uVar5);
  (*pcVar4)(uVar2,lVar1);
  local_f0 = param_16;
  uStack_e8 = param_17;
  local_e0 = param_18;
  lStack_d8 = param_19;
  local_d0 = param_20;
  uStack_c8 = param_14;
  puStack_b8 = auStack_90;
  local_c0 = param_15;
  Swift::TaskLocal::_withValue
            (param_1,uVar5,local_b0,FUN_100a44938,auStack_100,0xd000000000000023,0x8000000100db84a0,
             0xe3,param_17);
  if (unaff_x21 == 0) {
    _swift_release(uVar5);
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    _swift_release(uVar5);
    _swift_bridgeObjectRelease(uVar2);
    lVar1 = lStack_70;
    uVar2 = local_78;
    puVar3 = auStack_90;
    FUN_100004640(puVar3,local_78);
    FUN_100a3e9f8(unaff_x21,uVar2,lVar1,puVar3);
    lVar1 = lStack_70;
    uVar2 = local_78;
    FUN_100004640(auStack_90,local_78);
    (**(code **)(lVar1 + 0x28))(1,0,0,uVar2,lVar1);
    _swift_willThrow();
  }
  puVar3 = auStack_90;
  FUN_100004640(puVar3,local_78);
  FUN_100a3e888(local_78,lStack_70,puVar3);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x100a44470 | FUN_100a44470 */

void FUN_100a44470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_22;
  *(undefined8 *)(unaff_x22 + 0x200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_21;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_18;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_17;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_20;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_19;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_14;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_13;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_16;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_15;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_11;
  *(long *)(unaff_x22 + 400) = param_9;
  *(undefined8 *)(unaff_x22 + 0x198) = param_10;
  *(undefined1 *)(unaff_x22 + 0x238) = param_8;
  *(undefined8 *)(unaff_x22 + 0x180) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_7;
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = param_2;
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  if (param_9 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_10 = 0;
  }
  else {
    _swift_getObjectType(param_9);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined8 *)(unaff_x22 + 0x210) = param_10;
  *(undefined **)(unaff_x22 + 0x208) = UVar1.unknown;
  _swift_task_switch(FUN_100a44524,UVar1.unknown);
  return;
}



/* Address: 0x100a44524 | FUN_100a44524 */

void FUN_100a44524(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = unaff_x22 + 0xa8;
  puVar3 = *(undefined8 **)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x180);
  *(code **)(unaff_x22 + 0x120) = thunk_FUN_1000386a0;
  *(long *)(unaff_x22 + 0x128) = unaff_x22 + 0x130;
  *(code **)(unaff_x22 + 0x100) = thunk_FUN_100a44918;
  *(long *)(unaff_x22 + 0x108) = unaff_x22 + 0x60;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar10 = *(long *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar13;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(long *)(unaff_x22 + 0x88) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(long *)(unaff_x22 + 0xf0) = lVar10;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  (**(code **)(lVar10 + 0x10))
            (lVar1,puVar3,*(undefined8 *)(unaff_x22 + 0x168),thunk_FUN_1000386a0,unaff_x22 + 0x110,
             *(undefined1 *)(unaff_x22 + 0x238),FUN_1001aeafc,unaff_x22 + 0xd0,
             *(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x1a8),
             *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
             *(undefined8 *)(unaff_x22 + 0x1c0),uVar7,uVar4,uVar13,lVar10);
  FUN_100a48dac();
  uVar6 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar6;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar2 = *(long *)(unaff_x22 + 200);
  FUN_100004640(lVar1,uVar4);
  pcVar8 = *(code **)(lVar2 + 8);
  _swift_retain(uVar6);
  (*pcVar8)(uVar4,lVar2);
  *(undefined8 *)(unaff_x22 + 0x220) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(long *)(unaff_x22 + 0x38) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(long *)(unaff_x22 + 0x58) = lVar1;
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x228) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a44700;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x158),unaff_x22 + 0x150,&DAT_100c90328,unaff_x22 + 0x10
                ,*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x198),
                0xd000000000000023,0x8000000100db84a0,0x14c,*(undefined8 *)(unaff_x22 + 0x1e0));
  return;
}



/* Address: 0x100a44700 | FUN_100a44700 */

void FUN_100a44700(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x218);
  *(long *)(lVar4 + 0x230) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x228));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x220));
    uVar2 = *(undefined8 *)(lVar4 + 0x210);
    uVar3 = *(undefined8 *)(lVar4 + 0x208);
    pcVar1 = thunk_FUN_100a44f60;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x210);
    uVar3 = *(undefined8 *)(lVar4 + 0x208);
    pcVar1 = FUN_100a44788;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a44788 | FUN_100a44788 */

void FUN_100a44788(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x220));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e9f8(uVar4,uVar1,uVar2,lVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar3 = *(long *)(unaff_x22 + 200);
  FUN_100004640(unaff_x22 + 0xa8,uVar1);
  (**(code **)(lVar3 + 0x28))(1,0,0,uVar1,lVar3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000100a4485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a44860 | FUN_100a44860 */

void FUN_100a44860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  pcVar2 = *(code **)(param_13 + 0x10);
  uVar1 = param_2;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_100a40794();
  (*pcVar2)(param_1,param_2,param_3,thunk_FUN_1000386a0,auStack_80,param_6,FUN_100a42a80,0,param_7,
            param_8,param_9,param_10,param_11,&DAT_100f2ab30,uVar1,param_12,param_13);
  return;
}



/* Address: 0x100a44918 | FUN_100a44918 */

void FUN_100a44918(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x38))();
  return;
}



/* Address: 0x100a44938 | FUN_100a44938 */

void FUN_100a44938(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x38))(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100a44960 | FUN_100a44960 */

void FUN_100a44960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar1 = param_2;
  local_80 = param_4;
  uStack_78 = param_5;
  FUN_100a40794();
  FUN_100a44268(param_1,param_2,param_3,FUN_100a42a80,0,thunk_FUN_1000386a0,auStack_90,param_6,
                param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,
                &DAT_100f2ab30,param_16,uVar1);
  return;
}



/* Address: 0x100a44a34 | FUN_100a44a34 */

void FUN_100a44a34(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a44aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,param_4);
  return;
}



/* Address: 0x100a44ab0 | FUN_100a44ab0 */

void FUN_100a44ab0(undefined8 param_1)

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



/* Address: 0x100a44b58 | FUN_100a44b58 */

void FUN_100a44b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_100a465ec(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a44cb0 | FUN_100a44cb0 */

void FUN_100a44cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_20;
  *(undefined8 *)(unaff_x22 + 0x1f0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_19;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_16;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_15;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_18;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_17;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_11;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_14;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_13;
  *(undefined8 *)(unaff_x22 + 0x198) = param_10;
  *(undefined8 *)(unaff_x22 + 400) = param_9;
  *(undefined1 *)(unaff_x22 + 0x218) = param_8;
  *(undefined8 *)(unaff_x22 + 0x180) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_7;
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = param_2;
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  _swift_task_switch(FUN_100a44d00,0,0);
  return;
}



/* Address: 0x100a44d00 | FUN_100a44d00 */

void FUN_100a44d00(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = unaff_x22 + 0xa8;
  puVar3 = *(undefined8 **)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x180);
  *(code **)(unaff_x22 + 0x120) = thunk_FUN_1000386a0;
  *(long *)(unaff_x22 + 0x128) = unaff_x22 + 0x130;
  *(code **)(unaff_x22 + 0x100) = thunk_FUN_100a44918;
  *(long *)(unaff_x22 + 0x108) = unaff_x22 + 0x60;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1e8);
  lVar10 = *(long *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar13;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(long *)(unaff_x22 + 0x88) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  *(long *)(unaff_x22 + 0xf0) = lVar10;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  (**(code **)(lVar10 + 0x10))
            (lVar1,puVar3,*(undefined8 *)(unaff_x22 + 0x168),thunk_FUN_1000386a0,unaff_x22 + 0x110,
             *(undefined1 *)(unaff_x22 + 0x218),FUN_1001aeafc,unaff_x22 + 0xd0,
             *(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x198),
             *(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x1a8),
             *(undefined8 *)(unaff_x22 + 0x1b0),uVar7,uVar4,uVar13,lVar10);
  FUN_100a48dac();
  uVar6 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar6;
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar2 = *(long *)(unaff_x22 + 200);
  FUN_100004640(lVar1,uVar4);
  pcVar8 = *(code **)(lVar2 + 8);
  _swift_retain(uVar6);
  (*pcVar8)(uVar4,lVar2);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
  *(long *)(unaff_x22 + 0x38) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
  *(long *)(unaff_x22 + 0x58) = lVar1;
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a44ee0;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x158),unaff_x22 + 0x150,&DAT_100c90348,unaff_x22 + 0x10
                ,0,0,0xd000000000000023,0x8000000100db84a0,0x17f,*(undefined8 *)(unaff_x22 + 0x1d0))
  ;
  return;
}



/* Address: 0x100a44ee0 | FUN_100a44ee0 */

void FUN_100a44ee0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x1f8);
  *(long *)(lVar3 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x208));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x200));
    pcVar1 = FUN_100a44f60;
  }
  else {
    pcVar1 = FUN_100a44fc0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a44f60 | FUN_100a44f60 */

void FUN_100a44f60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000100a44fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a44fc0 | FUN_100a44fc0 */

void FUN_100a44fc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x210);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x200));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e9f8(uVar4,uVar1,uVar2,lVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar3 = *(long *)(unaff_x22 + 200);
  FUN_100004640(unaff_x22 + 0xa8,uVar1);
  (**(code **)(lVar3 + 0x28))(1,0,0,uVar1,lVar3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000100a45094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a45098 | FUN_100a45098 */

void FUN_100a45098(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a45110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,param_4);
  return;
}



/* Address: 0x100a45114 | FUN_100a45114 */

void FUN_100a45114(undefined8 param_1)

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



/* Address: 0x100a451bc | FUN_100a451bc */

void FUN_100a451bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_18;
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x178) = param_17;
  *(undefined8 *)(unaff_x22 + 0x170) = param_16;
  *(undefined8 *)(unaff_x22 + 0x168) = param_15;
  *(undefined8 *)(unaff_x22 + 0x160) = param_14;
  *(undefined8 *)(unaff_x22 + 0x158) = param_13;
  *(undefined8 *)(unaff_x22 + 0x150) = param_12;
  *(undefined8 *)(unaff_x22 + 0x148) = param_11;
  *(undefined8 *)(unaff_x22 + 0x140) = param_10;
  *(undefined8 *)(unaff_x22 + 0x138) = param_9;
  *(long *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined1 *)(unaff_x22 + 0x1c0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_4;
  *(undefined8 *)(unaff_x22 + 0x120) = param_5;
  *(undefined8 *)(unaff_x22 + 0x108) = param_2;
  *(undefined8 *)(unaff_x22 + 0x110) = param_3;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  if (param_7 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_8 = 0;
  }
  else {
    _swift_getObjectType(param_7);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 400) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x198) = param_8;
  _swift_task_switch(FUN_100a45274,UVar1.unknown);
  return;
}



/* Address: 0x100a45274 | FUN_100a45274 */

void FUN_100a45274(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar1 = unaff_x22 + 0xd0;
  lVar2 = *(long *)(unaff_x22 + 0x180);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x1c0);
  FUN_100a40794();
  *(code **)(unaff_x22 + 0xa0) = thunk_FUN_1000386a0;
  *(long *)(unaff_x22 + 0xa8) = unaff_x22 + 0xb0;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100f2ab30;
  *(long *)(unaff_x22 + 0x30) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(code **)(unaff_x22 + 0x40) = FUN_100a42a80;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  (**(code **)(lVar2 + 0x10))
            (lVar1,puVar6,uVar3,thunk_FUN_1000386a0,unaff_x22 + 0x90,uVar5,FUN_1001aeafc,
             unaff_x22 + 0x10,uVar9,uVar12,uVar14,uVar7,uVar10,&DAT_100f2ab30,param_1,uVar13,lVar2);
  FUN_100a48dac();
  uVar10 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar10;
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar4 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(lVar1,uVar7);
  pcVar11 = *(code **)(lVar4 + 8);
  _swift_retain(uVar10);
  (*pcVar11)(uVar7,lVar4);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar16;
  *(long *)(unaff_x22 + 0x88) = lVar1;
  plVar8 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a45454;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x100),(undefined8 *)(unaff_x22 + 0xf8),&DAT_100c90360,
                unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x128),
                *(undefined8 *)(unaff_x22 + 0x130),0xd000000000000023,0x8000000100db84a0,0x1b6,
                *(undefined8 *)(unaff_x22 + 0x178));
  return;
}



/* Address: 0x100a45454 | FUN_100a45454 */

void FUN_100a45454(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x1a0);
  *(long *)(lVar4 + 0x1b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1b0));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x1a8));
    uVar3 = *(undefined8 *)(lVar4 + 400);
    uVar2 = *(undefined8 *)(lVar4 + 0x198);
    pcVar1 = thunk_FUN_100a458fc;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 400);
    uVar2 = *(undefined8 *)(lVar4 + 0x198);
    pcVar1 = FUN_100a454d4;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a454d4 | FUN_100a454d4 */

void FUN_100a454d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1a8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e9f8(uVar4,uVar1,uVar2,lVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(unaff_x22 + 0xd0,uVar1);
  (**(code **)(lVar3 + 0x28))(1,0,0,uVar1,lVar3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100a455a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a455ac | FUN_100a455ac */

void FUN_100a455ac(undefined8 param_1)

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



/* Address: 0x100a45640 | FUN_100a45640 */

void FUN_100a45640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_16;
  *(undefined8 *)(unaff_x22 + 0x178) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x168) = param_15;
  *(undefined8 *)(unaff_x22 + 0x160) = param_14;
  *(undefined8 *)(unaff_x22 + 0x158) = param_13;
  *(undefined8 *)(unaff_x22 + 0x150) = param_12;
  *(undefined8 *)(unaff_x22 + 0x148) = param_11;
  *(undefined8 *)(unaff_x22 + 0x140) = param_10;
  *(undefined8 *)(unaff_x22 + 0x138) = param_9;
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined1 *)(unaff_x22 + 0x1a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_4;
  *(undefined8 *)(unaff_x22 + 0x120) = param_5;
  *(undefined8 *)(unaff_x22 + 0x108) = param_2;
  *(undefined8 *)(unaff_x22 + 0x110) = param_3;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  _swift_task_switch(FUN_100a45698,0,0);
  return;
}



/* Address: 0x100a45698 | FUN_100a45698 */

void FUN_100a45698(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar1 = unaff_x22 + 0xd0;
  lVar2 = *(long *)(unaff_x22 + 0x170);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x1a0);
  FUN_100a40794();
  *(code **)(unaff_x22 + 0xa0) = thunk_FUN_1000386a0;
  *(long *)(unaff_x22 + 0xa8) = unaff_x22 + 0xb0;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100f2ab30;
  *(long *)(unaff_x22 + 0x30) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(code **)(unaff_x22 + 0x40) = FUN_100a42a80;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  (**(code **)(lVar2 + 0x10))
            (lVar1,puVar6,uVar3,thunk_FUN_1000386a0,unaff_x22 + 0x90,uVar5,FUN_1001aeafc,
             unaff_x22 + 0x10,uVar9,uVar12,uVar14,uVar7,uVar10,&DAT_100f2ab30,param_1,uVar13,lVar2);
  FUN_100a48dac();
  uVar10 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x180) = uVar10;
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar4 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(lVar1,uVar7);
  pcVar11 = *(code **)(lVar4 + 8);
  _swift_retain(uVar10);
  (*pcVar11)(uVar7,lVar4);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar13;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar16;
  *(long *)(unaff_x22 + 0x88) = lVar1;
  plVar8 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a4587c;
  FUN_100a44b58(*(undefined8 *)(unaff_x22 + 0x100),(undefined8 *)(unaff_x22 + 0xf8),&DAT_100c90378,
                unaff_x22 + 0x50,0,0,0xd000000000000023,0x8000000100db84a0,0x1e7,
                *(undefined8 *)(unaff_x22 + 0x168));
  return;
}



/* Address: 0x100a4587c | FUN_100a4587c */

void FUN_100a4587c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x180);
  *(long *)(lVar3 + 0x198) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 400));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x188));
    pcVar1 = FUN_100a458fc;
  }
  else {
    pcVar1 = FUN_100a4595c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a458fc | FUN_100a458fc */

void FUN_100a458fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100a45958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4595c | FUN_100a4595c */

void FUN_100a4595c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x188));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e9f8(uVar4,uVar1,uVar2,lVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(unaff_x22 + 0xd0,uVar1);
  (**(code **)(lVar3 + 0x28))(1,0,0,uVar1,lVar3);
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100a45a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a45a34 | FUN_100a45a34 */

void FUN_100a45a34(undefined8 param_1)

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



/* Address: 0x100a45ac8 | FUN_100a45ac8 */

void FUN_100a45ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_c0 = param_14;
  uStack_b8 = param_15;
  local_b0 = param_16;
  uStack_a8 = param_17;
  pcVar3 = *(code **)(param_16 + 0x20);
  uVar1 = 0;
  local_a0 = param_7;
  uStack_98 = param_8;
  local_80 = param_4;
  uStack_78 = param_5;
  _swift_getAssociatedTypeWitness
            (0,param_16,param_14,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = param_16;
  _swift_getAssociatedConformanceWitness
            (param_16,param_14,uVar1,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(long *)(param_1 + 0x20) = lVar2;
  FUN_10000cbb0(param_1);
  (*pcVar3)(param_1,param_2,param_3,thunk_FUN_1000386a0,auStack_90,param_6,thunk_FUN_1001aeafc,
            auStack_d0,param_9,param_10,param_11,param_12,param_13,param_15,param_17,param_14,
            param_16);
  return;
}



/* Address: 0x100a45bd8 | FUN_100a45bd8 */

void FUN_100a45bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_80 = param_15;
  uStack_78 = param_16;
  local_70 = param_17;
  uStack_68 = param_18;
  local_60 = param_19;
  local_d0 = param_15;
  uStack_c8 = param_16;
  local_c0 = param_17;
  uStack_b8 = param_18;
  local_b0 = param_19;
  uStack_a8 = param_13;
  local_a0 = param_14;
  uStack_58 = param_3;
  local_50 = param_4;
  local_30 = param_5;
  uStack_28 = param_6;
  FUN_100a4690c(param_1,param_2,thunk_FUN_1000386a0,auStack_40,param_7,thunk_FUN_100a44918,
                auStack_90,param_8,param_9,param_10,param_11,param_12,FUN_100a45d64,auStack_e0,
                param_15,param_16,param_17,param_18,param_19);
  return;
}



/* Address: 0x100a45c7c | FUN_100a45c7c */

void FUN_100a45c7c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_5,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  local_70 = lVar1;
  _swift_getAssociatedConformanceWitness
            (param_8,param_5,lVar1,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  local_68 = param_8;
  FUN_10000cbb0(auStack_88);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  (*param_3)(param_1,auStack_88);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x100a45d64 | FUN_100a45d64 */

void FUN_100a45d64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a45c7c(param_1,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100a45d88 | FUN_100a45d88 */

void FUN_100a45d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_22;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x158) = param_21;
  *(undefined8 *)(unaff_x22 + 0x150) = param_20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_19;
  *(undefined8 *)(unaff_x22 + 0x140) = param_18;
  *(undefined8 *)(unaff_x22 + 0x138) = param_17;
  *(undefined8 *)(unaff_x22 + 0x130) = param_16;
  *(undefined8 *)(unaff_x22 + 0x128) = param_15;
  *(undefined8 *)(unaff_x22 + 0x120) = param_14;
  *(undefined8 *)(unaff_x22 + 0x118) = param_13;
  *(undefined8 *)(unaff_x22 + 0x110) = param_12;
  *(undefined8 *)(unaff_x22 + 0x108) = param_11;
  *(long *)(unaff_x22 + 0xf8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x100) = param_10;
  *(undefined1 *)(unaff_x22 + 0x178) = param_8;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  if (param_9 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_10 = 0;
  }
  else {
    _swift_getObjectType(param_9);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100a45e54,UVar1.unknown,param_10);
  return;
}



/* Address: 0x100a45e54 | FUN_100a45e54 */

void FUN_100a45e54(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x130);
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a45f5c;
  FUN_100a46c24(plVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0xa8),
                *(undefined8 *)(unaff_x22 + 0xd0),thunk_FUN_1000386a0,unaff_x22 + 0xb0,
                *(undefined1 *)(unaff_x22 + 0x178),thunk_FUN_100a44918,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100),
                *(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                *(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x120),
                *(undefined8 *)(unaff_x22 + 0x128),&DAT_100c90390,unaff_x22 + 0x60,
                *(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148),
                *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x158),
                *(undefined8 *)(unaff_x22 + 0x160));
  return;
}



/* Address: 0x100a45f5c | FUN_100a45f5c */

void FUN_100a45f5c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x000100a45f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a45fa0 | FUN_100a45fa0 */

void FUN_100a45fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_100a45fc4,0,0);
  return;
}



/* Address: 0x100a45fc4 | FUN_100a45fc4 */

void FUN_100a45fc4(void)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  piVar3 = *(int **)(unaff_x22 + 0x48);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar2,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  _swift_getAssociatedConformanceWitness
            (uVar5,uVar2,lVar4,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  FUN_10000cbb0(unaff_x22 + 0x10);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))();
  iVar1 = *piVar3;
  plVar6 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a460b0;
                    /* WARNING: Could not recover jumptable at 0x000100a460ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar6,*(undefined8 *)(unaff_x22 + 0x38),unaff_x22 + 0x10)
  ;
  return;
}



/* Address: 0x100a460b0 | FUN_100a460b0 */

void FUN_100a460b0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100a46504,0,0);
    return;
  }
  FUN_100004594(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a46120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a46124 | FUN_100a46124 */

void FUN_100a46124(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a45fa0(plVar7,param_1,param_2,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x100a461d0 | FUN_100a461d0 */

void FUN_100a461d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_20;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_19;
  *(undefined8 *)(unaff_x22 + 0x140) = param_18;
  *(undefined8 *)(unaff_x22 + 0x138) = param_17;
  *(undefined8 *)(unaff_x22 + 0x130) = param_16;
  *(undefined8 *)(unaff_x22 + 0x128) = param_15;
  *(undefined8 *)(unaff_x22 + 0x120) = param_14;
  *(undefined8 *)(unaff_x22 + 0x118) = param_13;
  *(undefined8 *)(unaff_x22 + 0x110) = param_12;
  *(undefined8 *)(unaff_x22 + 0x108) = param_11;
  *(undefined8 *)(unaff_x22 + 0x100) = param_10;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_9;
  *(undefined1 *)(unaff_x22 + 0x168) = param_8;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_100a4623c,0,0);
  return;
}



/* Address: 0x100a4623c | FUN_100a4623c */

void FUN_100a4623c(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x120);
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4633c;
  FUN_100a46c24(plVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0xa8),
                *(undefined8 *)(unaff_x22 + 0xd0),thunk_FUN_1000386a0,unaff_x22 + 0xb0,
                *(undefined1 *)(unaff_x22 + 0x168),thunk_FUN_100a44918,unaff_x22 + 0x10,0,0,
                *(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x100),
                *(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                *(undefined8 *)(unaff_x22 + 0x118),&DAT_100c903a8,unaff_x22 + 0x60,
                *(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x138),
                *(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148),
                *(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Address: 0x100a4633c | FUN_100a4633c */

void FUN_100a4633c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x000100a4637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a46380 | FUN_100a46380 */

void FUN_100a46380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_100a463a4,0,0);
  return;
}



/* Address: 0x100a463a4 | FUN_100a463a4 */

void FUN_100a463a4(void)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  piVar3 = *(int **)(unaff_x22 + 0x48);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,uVar2,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  _swift_getAssociatedConformanceWitness
            (uVar5,uVar2,lVar4,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  FUN_10000cbb0(unaff_x22 + 0x10);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))();
  iVar1 = *piVar3;
  plVar6 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a46490;
                    /* WARNING: Could not recover jumptable at 0x000100a4648c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar6,*(undefined8 *)(unaff_x22 + 0x38),unaff_x22 + 0x10)
  ;
  return;
}



/* Address: 0x100a46490 | FUN_100a46490 */

void FUN_100a46490(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a46504,0,0);
    return;
  }
  FUN_100004594(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a46500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a46504 | FUN_100a46504 */

void FUN_100a46504(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a46540 | FUN_100a46540 */

void FUN_100a46540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a46380(plVar7,param_1,param_2,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x100a465ec | FUN_100a465ec */

void FUN_100a465ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_100a466b4,UVar2.unknown);
  return;
}



/* Address: 0x100a466b4 | FUN_100a466b4 */

void FUN_100a466b4(void)

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
  FUN_100a4674c(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a4674c | FUN_100a4674c */

void FUN_100a4674c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValueImpl_100eaf020 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = FUN_1005cd444;
    Swift::TaskLocal::_withValueImpl
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1005cd488(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a468a4 | thunk_FUN_100a44918 */

void thunk_FUN_100a44918(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x38))();
  return;
}



/* Address: 0x100a468a8 | thunk_FUN_1001aeafc */

void thunk_FUN_1001aeafc(void)

{
  FUN_1001aeafc();
  return;
}



/* Address: 0x100a468ac | thunk_FUN_100a46504 */

void thunk_FUN_100a46504(void)

{
  long unaff_x22;
  
  FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a468b0 | thunk_FUN_100a44f60 */

void thunk_FUN_100a44f60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = unaff_x22 + 0xa8;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000100a44fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a468b4 | thunk_FUN_100a458fc */

void thunk_FUN_100a458fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = unaff_x22 + 0xd0;
  FUN_100004640(lVar3,uVar1);
  FUN_100a3e888(uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x000100a45958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a468b8 | FUN_100a468b8 */

void FUN_100a468b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cca3e4,&TargetProtocolRequirement_100cca3fc);
                    /* WARNING: Could not recover jumptable at 0x000100a46908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}


