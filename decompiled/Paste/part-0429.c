/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10054ac7c | FUN_10054ac7c */

void FUN_10054ac7c(void)

{
  FUN_10054d160(&DAT_100fcef80,&DAT_100c56c80,&DAT_100fcef78,&DAT_100c56c60);
  return;
}



/* Address: 0x10054aca0 | FUN_10054aca0 */

void FUN_10054aca0(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcef80,&DAT_100c56c80,FUN_100586998);
  return;
}



/* Address: 0x10054acbc | FUN_10054acbc */

void FUN_10054acbc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcef78;
  FUN_1000f7830(&DAT_100fcef78,&DAT_100c56c60);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0xa0 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_10054aa44(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined1 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054ada8 | FUN_10054ada8 */

void FUN_10054ada8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x10054adf8 | FUN_10054adf8 */

void FUN_10054adf8(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100543ee8(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054aea8 | FUN_10054aea8 */

void FUN_10054aea8(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 local_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_30 = puVar1[2];
  uStack_28 = (undefined1)puVar1[3];
  uStack_1f = *(undefined8 *)((long)puVar1 + 0x21);
  local_27 = (undefined7)*(undefined8 *)((long)puVar1 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x19) >> 0x38);
  FUN_100535290(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_40,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054aee4 | thunk_FUN_10054b018 */

void thunk_FUN_10054b018(void)

{
  FUN_10054b018();
  return;
}



/* Address: 0x10054aee8 | FUN_10054aee8 */

void FUN_10054aee8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x51 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_100543fb4(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054afd8 | FUN_10054afd8 */

void FUN_10054afd8(void)

{
  FUN_10054d160(&DAT_100fcefa0,&DAT_100c56cd0,&DAT_100fcef98,&DAT_100c56cb0);
  return;
}



/* Address: 0x10054affc | FUN_10054affc */

void FUN_10054affc(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcefa0,&DAT_100c56cd0,FUN_100585c08);
  return;
}



/* Address: 0x10054b018 | FUN_10054b018 */

void FUN_10054b018(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x51 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054b0dc | FUN_10054b0dc */

void FUN_10054b0dc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocObject();
  return;
}



/* Address: 0x10054b144 | FUN_10054b144 */

void FUN_10054b144(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_1005438f0(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054b1f4 | FUN_10054b1f4 */

void FUN_10054b1f4(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_38 = puVar1[5];
  local_40 = puVar1[4];
  uStack_28 = puVar1[7];
  uStack_30 = puVar1[6];
  local_20 = puVar1[8];
  uStack_58 = puVar1[1];
  local_60 = *puVar1;
  uStack_48 = puVar1[3];
  uStack_50 = puVar1[2];
  FUN_100535048(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_60,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054b238 | thunk_FUN_10054b36c */

void thunk_FUN_10054b36c(void)

{
  FUN_10054b36c();
  return;
}



/* Address: 0x10054b23c | FUN_10054b23c */

void FUN_10054b23c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcefc0;
  FUN_1000f7830(&DAT_100fcefc0,&DAT_100c56d00);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x70 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_1005439e0(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054b32c | FUN_10054b32c */

void FUN_10054b32c(void)

{
  FUN_10054d160(&DAT_100fcefc8,&DAT_100c56d20,&DAT_100fcefc0,&DAT_100c56d00);
  return;
}



/* Address: 0x10054b350 | FUN_10054b350 */

void FUN_10054b350(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcefc8,&DAT_100c56d20,FUN_1005865ec);
  return;
}



/* Address: 0x10054b36c | FUN_10054b36c */

void FUN_10054b36c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcefc0;
  FUN_1000f7830(&DAT_100fcefc0,&DAT_100c56d00);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x70 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054b448 | thunk_FUN_10054bf80 */

void thunk_FUN_10054bf80(void)

{
  FUN_10054bf80();
  return;
}



/* Address: 0x10054b44c | FUN_10054b44c */

void FUN_10054b44c(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_1005437a4(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054b4fc | FUN_10054b4fc */

undefined8 FUN_10054b4fc(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054b538 | FUN_10054b538 */

void FUN_10054b538(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_100534de0);
  return;
}



/* Address: 0x10054b544 | FUN_10054b544 */

void FUN_10054b544(void)

{
  FUN_10054c214(&DAT_100fcefe0,&DAT_100c56d50);
  return;
}



/* Address: 0x10054b558 | FUN_10054b558 */

void FUN_10054b558(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcefe0;
  FUN_1000f7830(&DAT_100fcefe0,&DAT_100c56d50);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_10054383c(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054b648 | FUN_10054b648 */

void FUN_10054b648(void)

{
  FUN_10054d160(&DAT_100fcefe8,&DAT_100c56d70,&DAT_100fcefe0,&DAT_100c56d50);
  return;
}



/* Address: 0x10054b66c | FUN_10054b66c */

void FUN_10054b66c(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcefe8,&DAT_100c56d70,FUN_1005865c8);
  return;
}



/* Address: 0x10054b688 | FUN_10054b688 */

void FUN_10054b688(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100543658(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054b738 | FUN_10054b738 */

undefined8 FUN_10054b738(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054b774 | FUN_10054b774 */

void FUN_10054b774(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_100534b78);
  return;
}



/* Address: 0x10054b780 | FUN_10054b780 */

void FUN_10054b780(void)

{
  FUN_10054c214(&DAT_100fcf000,&DAT_100c56da0);
  return;
}



/* Address: 0x10054b794 | FUN_10054b794 */

void FUN_10054b794(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf000;
  FUN_1000f7830(&DAT_100fcf000,&DAT_100c56da0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_1005436f0(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054b884 | FUN_10054b884 */

void FUN_10054b884(void)

{
  FUN_10054d160(&DAT_100fcf008,&DAT_100c56dc0,&DAT_100fcf000,&DAT_100c56da0);
  return;
}



/* Address: 0x10054b8a8 | FUN_10054b8a8 */

void FUN_10054b8a8(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf008,&DAT_100c56dc0,FUN_1005865a4);
  return;
}



/* Address: 0x10054b8c4 | FUN_10054b8c4 */

void FUN_10054b8c4(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_10054350c(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054b974 | FUN_10054b974 */

undefined8 FUN_10054b974(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054b9b0 | FUN_10054b9b0 */

void FUN_10054b9b0(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_100534910);
  return;
}



/* Address: 0x10054b9bc | FUN_10054b9bc */

void FUN_10054b9bc(void)

{
  FUN_10054c214(&DAT_100fcef98,&DAT_100c56cb0);
  return;
}



/* Address: 0x10054b9d0 | FUN_10054b9d0 */

void FUN_10054b9d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_1005435a4(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054bac0 | FUN_10054bac0 */

void FUN_10054bac0(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_1005433c0(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054bb70 | FUN_10054bb70 */

undefined8 FUN_10054bb70(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054bbac | FUN_10054bbac */

void FUN_10054bbac(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_1005346a8);
  return;
}



/* Address: 0x10054bbb8 | FUN_10054bbb8 */

void FUN_10054bbb8(void)

{
  FUN_10054c214(&DAT_100fcf030,&DAT_100c56e30);
  return;
}



/* Address: 0x10054bbcc | FUN_10054bbcc */

void FUN_10054bbcc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf030;
  FUN_1000f7830(&DAT_100fcf030,&DAT_100c56e30);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_100543458(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054bcbc | FUN_10054bcbc */

void FUN_10054bcbc(void)

{
  FUN_10054d160(&DAT_100fcf038,&DAT_100c56e50,&DAT_100fcf030,&DAT_100c56e30);
  return;
}



/* Address: 0x10054bce0 | FUN_10054bce0 */

void FUN_10054bce0(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf038,&DAT_100c56e50,FUN_100586254);
  return;
}



/* Address: 0x10054bcfc | FUN_10054bcfc */

void FUN_10054bcfc(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_10054321c(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054bdac | FUN_10054bdac */

undefined8 FUN_10054bdac(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054bde8 | FUN_10054bde8 */

void FUN_10054bde8(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_100534440);
  return;
}



/* Address: 0x10054bdf4 | FUN_10054bdf4 */

void FUN_10054bdf4(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  local_30 = puVar1[4];
  local_20 = puVar1[6];
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_50,*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054be3c | FUN_10054be3c */

void FUN_10054be3c(void)

{
  FUN_10054c214(&DAT_100fcf050,&DAT_100c56e80);
  return;
}



/* Address: 0x10054be50 | FUN_10054be50 */

void FUN_10054be50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf050;
  FUN_1000f7830(&DAT_100fcf050,&DAT_100c56e80);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_10054330c(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054bf40 | FUN_10054bf40 */

void FUN_10054bf40(void)

{
  FUN_10054d160(&DAT_100fcf058,&DAT_100c56ea0,&DAT_100fcf050,&DAT_100c56e80);
  return;
}



/* Address: 0x10054bf64 | FUN_10054bf64 */

void FUN_10054bf64(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf058,&DAT_100c56ea0,FUN_100586230);
  return;
}



/* Address: 0x10054bf80 | FUN_10054bf80 */

void FUN_10054bf80(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  _swift_deallocObject();
  return;
}



/* Address: 0x10054bfd8 | FUN_10054bfd8 */

void FUN_10054bfd8(undefined8 param_1)

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
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100543028(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054c088 | FUN_10054c088 */

undefined8 FUN_10054c088(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x10054c0c4 | FUN_10054c0c4 */

void FUN_10054c0c4(undefined8 param_1)

{
  FUN_10054bdf4(param_1,FUN_1005341d8);
  return;
}



/* Address: 0x10054c0d0 | FUN_10054c0d0 */

void FUN_10054c0d0(void)

{
  FUN_10054c214(&DAT_100fcf070,&DAT_100c56ed0);
  return;
}



/* Address: 0x10054c0e4 | FUN_10054c0e4 */

void FUN_10054c0e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf070;
  FUN_1000f7830(&DAT_100fcf070,&DAT_100c56ed0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x60 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_10054312c(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054c1d4 | FUN_10054c1d4 */

void FUN_10054c1d4(void)

{
  FUN_10054d160(&DAT_100fcf078,&DAT_100c56ef0,&DAT_100fcf070,&DAT_100c56ed0);
  return;
}



/* Address: 0x10054c1f8 | FUN_10054c1f8 */

void FUN_10054c1f8(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf078,&DAT_100c56ef0,FUN_10058620c);
  return;
}



/* Address: 0x10054c214 | FUN_10054c214 */

void FUN_10054c214(long param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_1000f7830();
  lVar2 = *(long *)(param_1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x60 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,param_1);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar4));
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054c2d0 | FUN_10054c2d0 */

void FUN_10054c2d0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  _swift_deallocObject();
  return;
}


