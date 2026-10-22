/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100823254 | FUN_100823254 */

void FUN_100823254(undefined8 param_1)

{
  FUN_1008243d0(param_1,FUN_10080a27c);
  return;
}



/* Address: 0x100823260 | FUN_100823260 */

void FUN_100823260(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  puVar1 = &DAT_100f04ff8;
  _swift_allocObject(&DAT_100f04ff8,0x50,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05020;
  _swift_allocObject(&DAT_100f05020,0x40,7);
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
  plVar3[1] = (long)FUN_100823440;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100823608,puVar1);
  return;
}



/* Address: 0x100823440 | FUN_100823440 */

void FUN_100823440(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010082349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1008234a0 | FUN_1008234a0 */

void FUN_1008234a0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4,
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
  
  if (param_4 == '\x06') {
    local_a0 = param_10;
    uStack_98 = param_11;
    local_90 = param_12;
    uStack_88 = param_5;
    local_80 = param_6;
    uStack_78 = param_7;
    local_70 = param_8;
    uStack_68 = param_9;
    _swift_bridgeObjectRetain();
    puVar1 = &DAT_100fe7250;
    FUN_1000f7830(&DAT_100fe7250,&DAT_100c7bea0);
    puVar2 = &DAT_100fe7218;
    FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
    puVar3 = &DAT_100fe7270;
    FUN_100583fb4(&DAT_100fe7270,&DAT_100fe7250,&DAT_100c7bea0);
    FUN_1005f45bc(param_13,auStack_b0,puVar1,param_10,puVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_b8);
    FUN_1007fb2ec(param_2,param_3,6);
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
    puVar4[1] = 6;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100823608 | FUN_100823608 */

void FUN_100823608(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x10082362c | FUN_10082362c */

void FUN_10082362c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f05048;
  _swift_allocObject(&DAT_100f05048,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05070;
  _swift_allocObject(&DAT_100f05070,0x40,7);
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
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,FUN_100823608
                ,puVar1,thunk_FUN_100823254,puVar2,param_8);
  return;
}



/* Address: 0x1008237dc | FUN_1008237dc */

void FUN_1008237dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f05098;
  _swift_allocObject(&DAT_100f05098,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f050c0;
  _swift_allocObject(&DAT_100f050c0,0x40,7);
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
                FUN_100824784,puVar1,thunk_FUN_100823da0,puVar2,param_8);
  return;
}



/* Address: 0x100823980 | FUN_100823980 */

void FUN_100823980(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f050e8;
  _swift_allocObject(&DAT_100f050e8,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05110;
  _swift_allocObject(&DAT_100f05110,0x40,7);
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
                param_8,FUN_100824784,puVar1);
  return;
}



/* Address: 0x100823b3c | FUN_100823b3c */

void FUN_100823b3c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f05138;
  _swift_allocObject(&DAT_100f05138,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05160;
  _swift_allocObject(&DAT_100f05160,0x40,7);
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
                FUN_100823d7c,puVar1,FUN_100823da0,puVar2,param_8);
  return;
}



/* Address: 0x100823ce0 | FUN_100823ce0 */

void FUN_100823ce0(undefined1 *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  code *param_13)

{
  undefined1 *puVar1;
  
  if (param_3 == '\x01') {
    (*param_13)(param_1,param_9,param_7,param_8,param_4,param_5,param_6,param_9,param_12);
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_1;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_1;
    puVar1[1] = 1;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100823d7c | FUN_100823d7c */

void FUN_100823d7c(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100823da0 | FUN_100823da0 */

void FUN_100823da0(undefined8 param_1)

{
  FUN_100823dac(param_1,FUN_10080a290);
  return;
}



/* Address: 0x100823dac | FUN_100823dac */

void FUN_100823dac(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100823db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100823dbc | FUN_100823dbc */

void FUN_100823dbc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f05188;
  _swift_allocObject(&DAT_100f05188,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f051b0;
  _swift_allocObject(&DAT_100f051b0,0x40,7);
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
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,FUN_100823f6c
                ,puVar1,FUN_100823f90,puVar2,param_8);
  return;
}



/* Address: 0x100823f6c | FUN_100823f6c */

void FUN_100823f6c(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x100823f90 | FUN_100823f90 */

void FUN_100823f90(undefined8 param_1)

{
  FUN_1008243d0(param_1,FUN_10080a2d0);
  return;
}



/* Address: 0x100823f9c | FUN_100823f9c */

void FUN_100823f9c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  puVar1 = &DAT_100f051d8;
  _swift_allocObject(&DAT_100f051d8,0x50,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000050;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05200;
  _swift_allocObject(&DAT_100f05200,0x40,7);
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
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,
                (undefined8 *)(unaff_x22 + 0x10),FUN_10082417c,puVar1);
  return;
}



/* Address: 0x10082417c | FUN_10082417c */

void FUN_10082417c(void)

{
  FUN_100821710();
  return;
}



/* Address: 0x1008241a0 | FUN_1008241a0 */

void FUN_1008241a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100f05228;
  _swift_allocObject(&DAT_100f05228,0x50,7);
  *(undefined **)(unaff_x22 + 0x10) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000038;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000040;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000048;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000020;
  *(undefined8 *)(puVar1 + 0x30) = in_stack_00000028;
  *(undefined8 *)(puVar1 + 0x38) = in_stack_00000030;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  puVar2 = &DAT_100f05250;
  _swift_allocObject(&DAT_100f05250,0x40,7);
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
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,6,param_7,FUN_10082417c
                ,puVar1,thunk_FUN_100823f90,puVar2,param_8);
  return;
}



/* Address: 0x100824350 | FUN_100824350 */

void FUN_100824350(void)

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



/* Address: 0x100824398 | FUN_100824398 */

void FUN_100824398(void)

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



/* Address: 0x1008243d0 | FUN_1008243d0 */

void FUN_1008243d0(undefined8 *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008243e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008243e4 | FUN_1008243e4 */

void FUN_1008243e4(undefined8 param_1,undefined8 param_2)

{
  FUN_10082441c(param_1,param_2,FUN_100809f84);
  return;
}



/* Address: 0x100824400 | FUN_100824400 */

void FUN_100824400(undefined8 param_1,undefined8 param_2)

{
  FUN_10082441c(param_1,param_2,FUN_100809e10);
  return;
}



/* Address: 0x10082441c | FUN_10082441c */

void FUN_10082441c(undefined8 *param_1,long *param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x40),
             *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 != 0) {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x100824470 | FUN_100824470 */

void FUN_100824470(undefined8 param_1,undefined8 param_2)

{
  FUN_1008244a8(param_1,param_2,FUN_100809c9c);
  return;
}



/* Address: 0x10082448c | FUN_10082448c */

void FUN_10082448c(undefined8 param_1,undefined8 param_2)

{
  FUN_1008244a8(param_1,param_2,FUN_100809b24);
  return;
}



/* Address: 0x1008244a8 | FUN_1008244a8 */

void FUN_1008244a8(undefined8 *param_1,long *param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(*param_1,param_1[1],*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x40)
             ,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 != 0) {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x1008244fc | FUN_1008244fc */

void FUN_1008244fc(undefined8 param_1,undefined8 param_2)

{
  FUN_100824534(param_1,param_2,FUN_100809f84);
  return;
}



/* Address: 0x100824518 | FUN_100824518 */

void FUN_100824518(undefined8 param_1,undefined8 param_2)

{
  FUN_100824534(param_1,param_2,FUN_100809e10);
  return;
}



/* Address: 0x100824534 | FUN_100824534 */

void FUN_100824534(undefined8 *param_1,long *param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 != 0) {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x100824588 | FUN_100824588 */

void FUN_100824588(undefined8 param_1,undefined8 param_2)

{
  FUN_1008245c0(param_1,param_2,FUN_100809c9c);
  return;
}



/* Address: 0x1008245a4 | FUN_1008245a4 */

void FUN_1008245a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1008245c0(param_1,param_2,FUN_100809b24);
  return;
}



/* Address: 0x1008245c0 | FUN_1008245c0 */

void FUN_1008245c0(undefined8 *param_1,long *param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(*param_1,param_1[1],*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x38)
             ,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 != 0) {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x100824614 | thunk_FUN_10081fe4c */

void thunk_FUN_10081fe4c(void)

{
  FUN_10081fe4c();
  return;
}



/* Address: 0x100824618 | thunk_FUN_1008201f0 */

void thunk_FUN_1008201f0(void)

{
  FUN_1008201f0();
  return;
}



/* Address: 0x10082461c | thunk_FUN_100820594 */

void thunk_FUN_100820594(void)

{
  FUN_100820594();
  return;
}



/* Address: 0x100824620 | thunk_FUN_100820938 */

void thunk_FUN_100820938(void)

{
  FUN_100820938();
  return;
}



/* Address: 0x100824624 | thunk_FUN_100820cdc */

void thunk_FUN_100820cdc(void)

{
  FUN_100820cdc();
  return;
}



/* Address: 0x100824628 | thunk_FUN_100821080 */

void thunk_FUN_100821080(void)

{
  FUN_100821080();
  return;
}



/* Address: 0x10082462c | thunk_FUN_10081d37c */

void thunk_FUN_10081d37c(void)

{
  FUN_10081d37c();
  return;
}



/* Address: 0x100824630 | FUN_100824630 */

void FUN_100824630(void)

{
  FUN_10081d3c0();
  return;
}



/* Address: 0x100824644 | FUN_100824644 */

void FUN_100824644(void)

{
  FUN_10081da88();
  return;
}



/* Address: 0x100824658 | FUN_100824658 */

void FUN_100824658(void)

{
  FUN_100813438();
  return;
}



/* Address: 0x10082466c | FUN_10082466c */

void FUN_10082466c(void)

{
  FUN_10081390c();
  return;
}



/* Address: 0x100824680 | FUN_100824680 */

void FUN_100824680(void)

{
  FUN_10081f0c8();
  return;
}



/* Address: 0x100824694 | FUN_100824694 */

void FUN_100824694(void)

{
  FUN_10081f440();
  return;
}



/* Address: 0x1008246a8 | FUN_1008246a8 */

void FUN_1008246a8(void)

{
  FUN_10081f788();
  return;
}



/* Address: 0x1008246bc | FUN_1008246bc */

void FUN_1008246bc(void)

{
  FUN_10081fad8();
  return;
}



/* Address: 0x1008246d0 | FUN_1008246d0 */

void FUN_1008246d0(void)

{
  FUN_10081fe38();
  return;
}



/* Address: 0x1008246e4 | FUN_1008246e4 */

void FUN_1008246e4(void)

{
  FUN_1008201dc();
  return;
}



/* Address: 0x1008246f8 | FUN_1008246f8 */

void FUN_1008246f8(void)

{
  FUN_100820580();
  return;
}



/* Address: 0x10082470c | FUN_10082470c */

void FUN_10082470c(void)

{
  FUN_100820924();
  return;
}



/* Address: 0x100824720 | FUN_100824720 */

void FUN_100824720(void)

{
  FUN_100820cc8();
  return;
}



/* Address: 0x100824734 | FUN_100824734 */

void FUN_100824734(void)

{
  FUN_10082106c();
  return;
}



/* Address: 0x100824748 | FUN_100824748 */

void FUN_100824748(void)

{
  FUN_100821520();
  return;
}



/* Address: 0x10082475c | FUN_10082475c */

void FUN_10082475c(void)

{
  FUN_100822190();
  return;
}



/* Address: 0x100824770 | FUN_100824770 */

void FUN_100824770(void)

{
  FUN_100823050();
  return;
}



/* Address: 0x100824784 | FUN_100824784 */

void FUN_100824784(void)

{
  FUN_100823d7c();
  return;
}



/* Address: 0x100824798 | thunk_FUN_10081faec */

void thunk_FUN_10081faec(void)

{
  FUN_10081faec();
  return;
}



/* Address: 0x10082479c | thunk_FUN_10081e524 */

void thunk_FUN_10081e524(void)

{
  FUN_10081e524();
  return;
}



/* Address: 0x1008247a0 | thunk_FUN_10081f0dc */

void thunk_FUN_10081f0dc(void)

{
  FUN_10081f0dc();
  return;
}



/* Address: 0x1008247a4 | thunk_FUN_10081f454 */

void thunk_FUN_10081f454(void)

{
  FUN_10081f454();
  return;
}



/* Address: 0x1008247a8 | thunk_FUN_10081f79c */

void thunk_FUN_10081f79c(void)

{
  FUN_10081f79c();
  return;
}


