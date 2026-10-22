/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a4c2fc | FUN_100a4c2fc */

void FUN_100a4c2fc(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar1 = DAT_100ff6da0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x38) = DAT_100ff6da0;
  uVar2 = DAT_100ff6da8;
  _swift_retain_n(uVar1,2);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a4c3d4;
  FUN_100a4b3bc(*(undefined8 *)(unaff_x22 + 0x28),1,&UNK_100c90900,unaff_x22 + 0x10,uVar1,uVar2);
  return;
}



/* Address: 0x100a4c3d4 | FUN_100a4c3d4 */

void FUN_100a4c3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x48) = param_1;
  *(long *)(lVar3 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x58) = param_3;
    *(undefined8 *)(lVar3 + 0x60) = param_2;
    pcVar1 = FUN_100a4c464;
  }
  else {
    pcVar1 = FUN_100a4c4fc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4c464 | FUN_100a4c464 */

void FUN_100a4c464(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  uVar3 = uVar1 & 0xffffffff;
  FUN_10060a944(uVar3,(int)(uVar1 >> 0x20) - (int)uVar1,*(undefined8 *)(unaff_x22 + 0x48),uVar1,
                *(ulong *)(unaff_x22 + 0x58) & 0xffffffffffffff);
  if (uVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x48));
    _swift_release(uVar4);
    lVar5 = *(long *)(uVar3 + 0x10);
    _swift_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100a4c4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar3,uVar3 + 0x20,0,lVar5 << 1 | 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4c4fc);
  (*pcVar2)();
}



/* Address: 0x100a4c4fc | FUN_100a4c4fc */

void FUN_100a4c4fc(void)

{
  long unaff_x22;
  
  _swift_release_n(*(undefined8 *)(unaff_x22 + 0x38),2);
                    /* WARNING: Could not recover jumptable at 0x000100a4c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4c53c | FUN_100a4c53c */

void FUN_100a4c53c(undefined8 param_1,undefined8 param_2)

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
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a4b8e0(plVar1,param_1,param_2,uVar2);
  return;
}



/* Address: 0x100a4c5b8 | FUN_100a4c5b8 */

undefined8 FUN_100a4c5b8(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x30));
}



/* Address: 0x100a4c5c4 | FUN_100a4c5c4 */

int FUN_100a4c5c4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + *(int *)(param_1 + 0x2c);
  return *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8);
}



/* Address: 0x100a4c5d8 | FUN_100a4c5d8 */

void FUN_100a4c5d8(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  lVar4 = 0;
  FUN_100a4e430(0,param_5,param_6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28)) = 0;
  if ((-1 < param_3) && (0 < param_4)) {
    lVar7 = *(long *)(param_5 + -8);
    puVar5 = param_1;
    (**(code **)(lVar7 + 0x10))(param_1,param_2,param_5);
    *(long *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) = param_3;
    *(long *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) = param_4;
    FUN_1006116e8();
    uVar6 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 2);
    uVar3 = *(undefined2 *)((long)puVar5 + 0x14);
    uVar2 = *(undefined1 *)((long)puVar5 + 0x16);
    pcVar8 = *(code **)(lVar7 + 8);
    _swift_retain(uVar6);
    uVar9 = puVar5[1];
    (*pcVar8)(param_2,param_5);
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
    *param_1 = uVar6;
    param_1[1] = uVar9;
    *(undefined4 *)(param_1 + 2) = uVar1;
    *(undefined2 *)((long)param_1 + 0x14) = uVar3;
    *(undefined1 *)((long)param_1 + 0x16) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100a4c6d0);
  (*pcVar8)();
}



/* Address: 0x100a4c6d0 | FUN_100a4c6d0 */

void FUN_100a4c6d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  _swift_task_switch(FUN_100a4c6ec,0,0);
  return;
}



/* Address: 0x100a4c6ec | FUN_100a4c6ec */

void FUN_100a4c6ec(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0x40);
  iVar3 = *(int *)(lVar1 + 0x24);
  *(int *)(unaff_x22 + 0x68) = iVar3;
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + (long)iVar3);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  lVar1 = *(long *)(lVar1 + 0x18);
  piVar5 = *(int **)(lVar1 + 0x10);
  iVar3 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a4c780;
                    /* WARNING: Could not recover jumptable at 0x000100a4c77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar5))(uVar6,*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar1);
  return;
}



/* Address: 0x100a4c780 | FUN_100a4c780 */

void FUN_100a4c780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(long *)(lVar1 + 0x30) = unaff_x20;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a4c7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a4c7f8,0,0);
  return;
}



/* Address: 0x100a4c7f8 | FUN_100a4c7f8 */

void FUN_100a4c7f8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar4 = (ulong)(uint)(*(int *)(unaff_x22 + 100) - *(int *)(unaff_x22 + 0x60));
  *(bool *)(*(long *)(unaff_x22 + 0x48) + (long)*(int *)(*(long *)(unaff_x22 + 0x40) + 0x28)) =
       (long)uVar4 < *(long *)(unaff_x22 + 0x38);
  if (!SCARRY8(lVar1,uVar4)) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(ulong *)(unaff_x22 + 0x28);
    *(ulong *)(*(long *)(unaff_x22 + 0x48) + (long)*(int *)(unaff_x22 + 0x68)) = lVar1 + uVar4;
                    /* WARNING: Could not recover jumptable at 0x000100a4c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x60),uVar5 & 0xffffffffffffff);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4c84c);
  (*pcVar2)();
}



/* Address: 0x100a4c84c | FUN_100a4c84c */

void FUN_100a4c84c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  _swift_task_switch(FUN_100a4c868,0,0);
  return;
}



/* Address: 0x100a4c868 | FUN_100a4c868 */

void FUN_100a4c868(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x28);
  if ((long)puVar8 < 1) {
    FUN_1006116e8();
    _swift_retain(*puVar8);
  }
  else {
    iVar6 = *(int *)(*(long *)(unaff_x22 + 0x30) + 0x2c);
    *(int *)(unaff_x22 + 0x70) = iVar6;
    plVar10 = (long *)(*(long *)(unaff_x22 + 0x38) + (long)iVar6);
    FUN_10060c6b4();
    if (puVar8 == (undefined8 *)0x0) {
      lVar12 = *(long *)(unaff_x22 + 0x30);
      lVar1 = *(long *)(unaff_x22 + 0x38);
      lVar11 = *(long *)(unaff_x22 + 0x28);
      lVar13 = *plVar10;
      *(long *)(unaff_x22 + 0x40) = lVar13;
      iVar6 = (int)plVar10[1];
      *(int *)(unaff_x22 + 0x74) = iVar6;
      iVar2 = *(int *)((long)plVar10 + 0xc);
      *(int *)(unaff_x22 + 0x78) = iVar2;
      lVar14 = plVar10[2];
      uVar5 = *(undefined2 *)((long)plVar10 + 0x14);
      uVar4 = *(undefined1 *)((long)plVar10 + 0x16);
      *(long *)(unaff_x22 + 0x10) = lVar13;
      *(int *)(unaff_x22 + 0x18) = iVar6;
      *(int *)(unaff_x22 + 0x1c) = iVar2;
      *(int *)(unaff_x22 + 0x20) = (int)lVar14;
      *(undefined2 *)(unaff_x22 + 0x24) = uVar5;
      *(undefined1 *)(unaff_x22 + 0x26) = uVar4;
      plVar9 = (long *)lVar13;
      _swift_retain_n(lVar13,2);
      FUN_1006116e8();
      lVar14 = *plVar9;
      uVar3 = *(undefined4 *)(plVar9 + 2);
      uVar5 = *(undefined2 *)((long)plVar9 + 0x14);
      uVar4 = *(undefined1 *)((long)plVar9 + 0x16);
      _swift_retain(lVar14);
      lVar15 = plVar9[1];
      _swift_release_n(lVar13,2);
      *plVar10 = lVar14;
      plVar10[1] = lVar15;
      *(undefined4 *)(plVar10 + 2) = uVar3;
      *(undefined2 *)((long)plVar10 + 0x14) = uVar5;
      *(undefined1 *)((long)plVar10 + 0x16) = uVar4;
      lVar11 = lVar11 - (ulong)(uint)(iVar2 - iVar6);
      lVar12 = *(long *)(lVar1 + *(int *)(lVar12 + 0x30));
      if (SCARRY8(lVar11,lVar12)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4ca44);
        (*pcVar7)();
      }
      plVar10 = (long *)0x70;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x48) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_100a4ca44;
      FUN_100a4c6d0(lVar11 + lVar12,*(undefined8 *)(unaff_x22 + 0x30));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100a4c938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4ca44 | FUN_100a4ca44 */

void FUN_100a4ca44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x60) = param_3;
    *(undefined8 *)(lVar2 + 0x68) = param_2;
    pcVar1 = FUN_100a4cac0;
  }
  else {
    pcVar1 = FUN_100a4cbd0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4cac0 | FUN_100a4cac0 */

void FUN_100a4cac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x22;
  ulong uVar6;
  ulong local_58;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  iVar1 = *(int *)(unaff_x22 + 0x68);
  iVar2 = *(int *)(unaff_x22 + 0x6c);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  local_58 = *(ulong *)(unaff_x22 + 0x50);
  uVar6 = *(long *)(unaff_x22 + 0x28) -
          (ulong)(uint)(*(int *)(unaff_x22 + 0x78) - *(int *)(unaff_x22 + 0x74));
  local_48 = (undefined4)uVar4;
  local_44 = (undefined2)((ulong)uVar4 >> 0x20);
  local_42 = (undefined1)((ulong)uVar4 >> 0x30);
  local_50 = iVar1;
  iStack_4c = iVar2;
  FUN_10060c3b0(&local_58);
  uVar5 = (ulong)(uint)(iVar2 - iVar1);
  if ((long)uVar6 <= (long)uVar5) {
    uVar5 = uVar6;
  }
  FUN_10060c6b4();
  if (uVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    local_50 = (int)param_2;
    iStack_4c = (int)((ulong)param_2 >> 0x20);
    local_48 = (undefined4)param_3;
    local_44 = (undefined2)((ulong)param_3 >> 0x20);
    local_42 = (undefined1)((ulong)param_3 >> 0x30);
    local_58 = uVar5;
    FUN_10060c3b0(&local_58);
    _swift_release(uVar4);
    _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a4cbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
               (ulong)*(uint7 *)(unaff_x22 + 0x20));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a4cbd0);
  (*pcVar3)();
}



/* Address: 0x100a4cbd0 | FUN_100a4cbd0 */

void FUN_100a4cbd0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a4cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4cc0c | FUN_100a4cc0c */

void FUN_100a4cc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_3;
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
  *(undefined8 *)(unaff_x22 + 0x178) = param_2;
  _swift_task_switch(FUN_100a4cc28,0,0);
  return;
}



/* Address: 0x100a4cc28 | FUN_100a4cc28 */

void FUN_100a4cc28(void)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  
  iVar7 = *(int *)(*(long *)(unaff_x22 + 0x180) + 0x2c);
  *(int *)(unaff_x22 + 0x1b8) = iVar7;
  puVar1 = (ulong *)(*(long *)(unaff_x22 + 0x188) + (long)iVar7);
  uVar16 = (uint)puVar1[1];
  uVar15 = *(uint *)((long)puVar1 + 0xc);
  uVar21 = puVar1[1];
  if (uVar15 < uVar16) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf18);
    (*pcVar10)();
  }
  iVar7 = (int)puVar1[2];
  uVar5 = *(undefined2 *)((long)puVar1 + 0x14);
  uVar3 = *(undefined1 *)((long)puVar1 + 0x16);
  uVar14 = puVar1[2];
  uVar8 = iVar7 - (uint)CONCAT21(uVar5,uVar3);
  if (uVar8 < uVar15) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf1c);
    (*pcVar10)();
  }
  uVar17 = *puVar1;
  *(ulong *)(unaff_x22 + 0x38) = uVar17;
  *(uint *)(unaff_x22 + 0x40) = uVar16;
  *(uint *)(unaff_x22 + 0x44) = uVar15;
  *(int *)(unaff_x22 + 0x48) = iVar7;
  *(undefined2 *)(unaff_x22 + 0x4c) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x4e) = uVar3;
  *(ulong *)(unaff_x22 + 0x50) = (ulong)uVar16;
  *(ulong *)(unaff_x22 + 0x58) = (ulong)uVar15;
  _swift_beginAccess(uVar17 + 0x18,unaff_x22 + 0x128,0,0);
  lVar19 = *(long *)(unaff_x22 + 0x50);
  lVar20 = *(long *)(unaff_x22 + 0x58);
  if (SBORROW8(lVar20,lVar19)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf20);
    (*pcVar10)();
  }
  lVar23 = *(long *)(uVar17 + 0x18);
  _swift_retain(uVar17);
  if (lVar20 != lVar19) {
    lVar22 = 0;
    do {
      uVar11 = (ulong)*(byte *)(lVar23 + (ulong)CONCAT21(uVar5,uVar3) + lVar19 + lVar22);
      (**(code **)(unaff_x22 + 0x170))();
      if ((uVar11 & 1) == 0) {
        lVar20 = lVar22 + lVar19;
        if (SCARRY8(lVar22,lVar19)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf24);
          (*pcVar10)();
        }
        uVar11 = lVar20 - lVar19;
        if (lVar20 < lVar19) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf28);
          (*pcVar10)();
        }
        if (lVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf2c);
          (*pcVar10)();
        }
        if ((long)(ulong)uVar8 < lVar20) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf30);
          (*pcVar10)();
        }
        *(ulong *)(unaff_x22 + 0x60) = uVar17;
        *(uint *)(unaff_x22 + 0x68) = uVar16;
        *(uint *)(unaff_x22 + 0x6c) = uVar15;
        *(int *)(unaff_x22 + 0x70) = iVar7;
        *(undefined2 *)(unaff_x22 + 0x74) = uVar5;
        *(undefined1 *)(unaff_x22 + 0x76) = uVar3;
        *(long *)(unaff_x22 + 0x78) = lVar19;
        *(long *)(unaff_x22 + 0x80) = lVar20;
        FUN_1006100e8(unaff_x22 + 0x38,unaff_x22 + 0x88);
        FUN_1006100e8(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        thunk_FUN_10061160c(lVar19,uVar11,uVar17,uVar21,(ulong)(uint7)uVar14);
        FUN_10096e070(unaff_x22 + 0x60);
        if (lVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf3c);
          (*pcVar10)();
        }
        uVar21 = uVar11 >> 0x20;
        FUN_10096e070(unaff_x22 + 0x38);
        FUN_10096e070(unaff_x22 + 0x60);
        uVar9 = (int)(uVar11 >> 0x20) - (int)uVar11;
        uVar8 = uVar16 + uVar9;
        if (CARRY4(uVar16,uVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf34);
          (*pcVar10)();
        }
        if (uVar15 < uVar8) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a4cf38);
          (*pcVar10)();
        }
        uVar14 = 0;
        uVar15 = (uint)(uVar17 >> 0x20);
        uVar16 = (uint)(ushort)(uVar17 >> 0x30);
        *(uint *)(puVar1 + 1) = uVar8;
        goto LAB_100a4cec0;
      }
      lVar22 = lVar22 + 1;
    } while (lVar20 - lVar19 != lVar22);
  }
  lVar19 = *(long *)(unaff_x22 + 0x188);
  iVar7 = *(int *)(*(long *)(unaff_x22 + 0x180) + 0x28);
  *(int *)(unaff_x22 + 0x1bc) = iVar7;
  if ((*(byte *)(lVar19 + iVar7) & 1) == 0) {
    uVar18 = *(undefined8 *)(lVar19 + *(int *)(*(long *)(unaff_x22 + 0x180) + 0x30));
    plVar13 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_100a4cf3c;
    FUN_100a4c6d0(uVar18,*(undefined8 *)(unaff_x22 + 0x180));
    return;
  }
  plVar13 = (long *)(lVar19 + *(int *)(unaff_x22 + 0x1b8));
  lVar19 = *plVar13;
  uVar11 = (ulong)*(uint *)(plVar13 + 1);
  uVar21 = (ulong)*(uint *)((long)plVar13 + 0xc);
  uVar17 = (ulong)*(uint *)(plVar13 + 2);
  uVar6 = *(ushort *)((long)plVar13 + 0x14);
  bVar4 = *(byte *)((long)plVar13 + 0x16);
  plVar12 = (long *)lVar19;
  _swift_retain();
  FUN_1006116e8();
  lVar20 = *plVar12;
  uVar2 = *(undefined4 *)(plVar12 + 2);
  uVar5 = *(undefined2 *)((long)plVar12 + 0x14);
  uVar3 = *(undefined1 *)((long)plVar12 + 0x16);
  _swift_retain(lVar20);
  lVar23 = plVar12[1];
  FUN_10096e070(unaff_x22 + 0x38);
  _swift_release(lVar19);
  uVar16 = (uint)bVar4;
  uVar15 = (uint)uVar6;
  *plVar13 = lVar20;
  plVar13[1] = lVar23;
  *(undefined4 *)(plVar13 + 2) = uVar2;
  *(undefined2 *)((long)plVar13 + 0x14) = uVar5;
  uVar14 = 0x100000000000000;
  *(undefined1 *)((long)plVar13 + 0x16) = uVar3;
LAB_100a4cec0:
                    /* WARNING: Could not recover jumptable at 0x000100a4cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (lVar19,uVar11 & 0xffffffff | uVar21 << 0x20,
             uVar17 & 0xffffffff | (ulong)(uVar15 & 0xffff) << 0x20 | (ulong)(uVar16 & 0xff) << 0x30
             | uVar14);
  return;
}



/* Address: 0x100a4cf3c | FUN_100a4cf3c */

void FUN_100a4cf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x198) = param_1;
  *(undefined8 *)(lVar2 + 0x1a0) = param_2;
  *(undefined8 *)(lVar2 + 0x1a8) = param_3;
  *(long *)(lVar2 + 0x1b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a4cfa8;
  }
  else {
    pcVar1 = FUN_100a4d334;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4cfa8 | FUN_100a4cfa8 */

void FUN_100a4cfa8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long unaff_x22;
  long lVar21;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x1a0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar16 = *(long *)(unaff_x22 + 0x198);
  uVar13 = uVar9 >> 0x20;
  *(long *)(unaff_x22 + 0x158) = lVar16;
  *(int *)(unaff_x22 + 0x160) = (int)uVar9;
  uVar12 = (undefined4)(uVar9 >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x164) = uVar12;
  iVar14 = (int)uVar17;
  *(int *)(unaff_x22 + 0x168) = iVar14;
  uVar19 = (uint)((ulong)uVar17 >> 0x20);
  uVar5 = (undefined2)((ulong)uVar17 >> 0x20);
  *(undefined2 *)(unaff_x22 + 0x16c) = uVar5;
  uVar3 = (undefined1)((ulong)uVar17 >> 0x30);
  *(undefined1 *)(unaff_x22 + 0x16e) = uVar3;
  if (uVar13 < (uVar9 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d30c);
    (*pcVar7)();
  }
  uVar15 = (ushort)((ulong)uVar17 >> 0x30) & 0xff;
  if (iVar14 - (uVar15 | (uVar19 & 0xffff) << 8) < uVar13) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d310);
    (*pcVar7)();
  }
  *(long *)(unaff_x22 + 0xd8) = lVar16;
  *(int *)(unaff_x22 + 0xe0) = (int)uVar9;
  *(undefined4 *)(unaff_x22 + 0xe4) = uVar12;
  *(int *)(unaff_x22 + 0xe8) = iVar14;
  *(undefined2 *)(unaff_x22 + 0xec) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xee) = uVar3;
  *(ulong *)(unaff_x22 + 0xf0) = uVar9 & 0xffffffff;
  *(ulong *)(unaff_x22 + 0xf8) = uVar13;
  _swift_beginAccess(lVar16 + 0x18,unaff_x22 + 0x140,0,0);
  lVar20 = *(long *)(unaff_x22 + 0xf0);
  lVar21 = *(long *)(unaff_x22 + 0xf8);
  if (SBORROW8(lVar21,lVar20)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d314);
    (*pcVar7)();
  }
  lVar16 = *(long *)(lVar16 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_retain(uVar17);
  if (lVar21 != lVar20) {
    lVar18 = 0;
    do {
      uVar9 = (ulong)*(byte *)(lVar16 + lVar20 + (ulong)((uVar19 & 0xffff) * 0x100 + uVar15) +
                              lVar18);
      (**(code **)(unaff_x22 + 0x170))();
      if ((uVar9 & 1) == 0) {
        lVar16 = lVar18 + lVar20;
        if (SCARRY8(lVar18,lVar20)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d318);
          (*pcVar7)();
        }
        if (lVar16 < lVar20) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d31c);
          (*pcVar7)();
        }
        if (lVar20 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d320);
          (*pcVar7)();
        }
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1a8);
        if ((long)(ulong)((int)uVar17 - (uVar15 | (uVar19 & 0xffff) << 8)) < lVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d324);
          (*pcVar7)();
        }
        *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x198);
        *(int *)(unaff_x22 + 0x18) = (int)*(undefined8 *)(unaff_x22 + 0x1a0);
        *(int *)(unaff_x22 + 0x1c) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x1a0) >> 0x20);
        *(int *)(unaff_x22 + 0x20) = (int)uVar17;
        *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar17 >> 0x20);
        *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar17 >> 0x30);
        *(long *)(unaff_x22 + 0x28) = lVar20;
        *(long *)(unaff_x22 + 0x30) = lVar16;
        FUN_1006100e8(unaff_x22 + 0xd8,unaff_x22 + 0x100);
        FUN_100a4d370(unaff_x22 + 0x10);
        FUN_10096e070(unaff_x22 + 0x38);
        FUN_10096e070(unaff_x22 + 0xd8);
        FUN_10096e070(unaff_x22 + 0x10);
        uVar9 = *(long *)(unaff_x22 + 0x30) - *(long *)(unaff_x22 + 0x28);
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d328);
          (*pcVar7)();
        }
        if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d32c);
          (*pcVar7)();
        }
        uVar13 = *(ulong *)(unaff_x22 + 0x1a0);
        uVar19 = (uint)uVar13 + (uint)uVar9;
        if (CARRY4((uint)uVar13,(uint)uVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d330);
          (*pcVar7)();
        }
        if (uVar13 >> 0x20 < (ulong)uVar19) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d334);
          (*pcVar7)();
        }
        uVar9 = 0;
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1a8);
        plVar11 = (long *)(*(long *)(unaff_x22 + 0x188) + (long)*(int *)(unaff_x22 + 0x1b8));
        lVar16 = *plVar11;
        uVar12 = (undefined4)plVar11[1];
        uVar1 = *(undefined4 *)((long)plVar11 + 0xc);
        uVar8 = (undefined4)plVar11[2];
        uVar5 = *(undefined2 *)((long)plVar11 + 0x14);
        *plVar11 = *(long *)(unaff_x22 + 0x198);
        uVar3 = *(undefined1 *)((long)plVar11 + 0x16);
        *(uint *)(plVar11 + 1) = uVar19;
        *(int *)((long)plVar11 + 0xc) = (int)(uVar13 >> 0x20);
        *(int *)(plVar11 + 2) = (int)uVar17;
        *(short *)((long)plVar11 + 0x14) = (short)((ulong)uVar17 >> 0x20);
        *(char *)((long)plVar11 + 0x16) = (char)((ulong)uVar17 >> 0x30);
        goto LAB_100a4d2c0;
      }
      lVar18 = lVar18 + 1;
    } while (lVar21 - lVar20 != lVar18);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x198);
  }
  iVar14 = *(int *)(unaff_x22 + 0x1bc);
  lVar16 = *(long *)(unaff_x22 + 0x188);
  FUN_10060c3b0((long)*(int *)(unaff_x22 + 0x1b8),unaff_x22 + 0x158);
  FUN_10096e070(unaff_x22 + 0xd8);
  _swift_release(uVar17);
  if (*(char *)(lVar16 + iVar14) != '\x01') {
    uVar17 = *(undefined8 *)
              (*(long *)(unaff_x22 + 0x188) + (long)*(int *)(*(long *)(unaff_x22 + 0x180) + 0x30));
    plVar11 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a4cf3c;
    FUN_100a4c6d0(uVar17,*(undefined8 *)(unaff_x22 + 0x180));
    return;
  }
  plVar11 = (long *)(*(long *)(unaff_x22 + 0x188) + (long)*(int *)(unaff_x22 + 0x1b8));
  lVar16 = *plVar11;
  uVar12 = (undefined4)plVar11[1];
  uVar1 = *(undefined4 *)((long)plVar11 + 0xc);
  uVar8 = (undefined4)plVar11[2];
  uVar5 = *(undefined2 *)((long)plVar11 + 0x14);
  uVar3 = *(undefined1 *)((long)plVar11 + 0x16);
  plVar10 = (long *)lVar16;
  _swift_retain();
  FUN_1006116e8();
  lVar20 = *plVar10;
  uVar2 = *(undefined4 *)(plVar10 + 2);
  uVar6 = *(undefined2 *)((long)plVar10 + 0x14);
  uVar4 = *(undefined1 *)((long)plVar10 + 0x16);
  _swift_retain(lVar20);
  lVar21 = plVar10[1];
  FUN_10096e070(unaff_x22 + 0x38);
  _swift_release(lVar16);
  *plVar11 = lVar20;
  plVar11[1] = lVar21;
  *(undefined4 *)(plVar11 + 2) = uVar2;
  *(undefined2 *)((long)plVar11 + 0x14) = uVar6;
  uVar9 = 0x100000000000000;
  *(undefined1 *)((long)plVar11 + 0x16) = uVar4;
LAB_100a4d2c0:
                    /* WARNING: Could not recover jumptable at 0x000100a4d304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (lVar16,CONCAT44(uVar1,uVar12),CONCAT16(uVar3,CONCAT24(uVar5,uVar8)) | uVar9);
  return;
}



/* Address: 0x100a4d334 | FUN_100a4d334 */

void FUN_100a4d334(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a4d36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4d370 | FUN_100a4d370 */

ulong FUN_100a4d370(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  uint uVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  uVar3 = *(uint *)((long)unaff_x20 + 0xc);
  lVar11 = *param_1;
  uVar5 = *(ushort *)((long)param_1 + 0x14);
  bVar4 = *(byte *)((long)param_1 + 0x16);
  _swift_beginAccess(lVar11 + 0x18,auStack_68,0,0);
  lVar2 = param_1[3];
  uVar6 = param_1[4] - lVar2;
  if (SBORROW8(param_1[4],lVar2)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d458);
    (*pcVar7)();
  }
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d45c);
    (*pcVar7)();
  }
  uVar10 = (uint)uVar6;
  if (CARRY4(uVar3,uVar10)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d460);
    (*pcVar7)();
  }
  lVar2 = *(long *)(lVar11 + 0x18) + (ulong)uVar5 * 0x100 + (ulong)bVar4 + lVar2;
  uVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = (uint)uVar9;
  if ((uVar9 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar3 + uVar10) {
      iVar1 = (uVar3 + uVar10) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar8 & 1);
  }
  FUN_100612380(uVar6,uVar3);
  FUN_10061258c(lVar2,lVar2 + uVar6,uVar3);
  if (!CARRY4(*(uint *)((long)unaff_x20 + 0xc),uVar10)) {
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + uVar10;
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4d464);
  (*pcVar7)();
}



/* Address: 0x100a4d464 | FUN_100a4d464 */

void FUN_100a4d464(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  _swift_task_switch(FUN_100a4d480,0,0);
  return;
}



/* Address: 0x100a4d480 | FUN_100a4d480 */

void FUN_100a4d480(void)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x40);
  puVar1 = (ulong *)(lVar3 + *(int *)(*(long *)(unaff_x22 + 0x48) + 0x2c));
  uVar2 = (uint)puVar1[1];
  uVar11 = (ulong)(*(uint *)((long)puVar1 + 0xc) - uVar2);
  lVar5 = lVar9 - uVar11;
  if (lVar5 == 0 || lVar9 < (long)uVar11) {
    if (lVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4d57c);
      (*pcVar6)();
    }
    uVar8 = uVar2 + (uint)lVar9;
    if (CARRY4(uVar2,(uint)lVar9)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4d580);
      (*pcVar6)();
    }
    if (*(uint *)((long)puVar1 + 0xc) < uVar8) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4d584);
      (*pcVar6)();
    }
  }
  else {
    lVar9 = (long)*(int *)(*(long *)(unaff_x22 + 0x48) + 0x24);
    lVar10 = *(long *)(lVar3 + lVar9);
    if (SCARRY8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4d578);
      (*pcVar6)();
    }
    *(long *)(lVar3 + lVar9) = lVar10 + lVar5;
    uVar7 = *puVar1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = *puVar1;
    uVar11 = uVar12;
    if ((uVar7 & 1) == 0) {
      _swift_beginAccess(uVar12 + 0x10,unaff_x22 + 0x10,0,0);
      uVar11 = (ulong)*(uint *)(uVar12 + 0x10);
      FUN_10061204c();
      _swift_release(uVar12);
      *puVar1 = uVar11;
    }
    _swift_beginAccess(uVar11 + 0x10,unaff_x22 + 0x28,0,0);
    uVar8 = 0;
    uVar4 = *(undefined4 *)(uVar11 + 0x10);
    *(undefined2 *)((long)puVar1 + 0x14) = 0;
    *(undefined1 *)((long)puVar1 + 0x16) = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = uVar4;
  }
  *(uint *)(puVar1 + 1) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x000100a4d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4d584 | FUN_100a4d584 */

void FUN_100a4d584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  _swift_task_switch(FUN_100a4d5a0,0,0);
  return;
}



/* Address: 0x100a4d5a0 | FUN_100a4d5a0 */

void FUN_100a4d5a0(void)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  
  iVar10 = *(int *)(*(long *)(unaff_x22 + 0x160) + 0x2c);
  *(int *)(unaff_x22 + 0x198) = iVar10;
  puVar1 = (ulong *)(*(long *)(unaff_x22 + 0x168) + (long)iVar10);
  uVar2 = (uint)puVar1[1];
  uVar3 = *(uint *)((long)puVar1 + 0xc);
  if (uVar3 < uVar2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d838);
    (*pcVar9)();
  }
  iVar10 = (int)puVar1[2];
  uVar7 = *(undefined2 *)((long)puVar1 + 0x14);
  uVar6 = *(undefined1 *)((long)puVar1 + 0x16);
  uVar8 = iVar10 - (uint)CONCAT21(uVar7,uVar6);
  uVar13 = (ulong)uVar8;
  if (uVar8 < uVar3) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d83c);
    (*pcVar9)();
  }
  uVar14 = *puVar1;
  *(ulong *)(unaff_x22 + 0x10) = uVar14;
  *(uint *)(unaff_x22 + 0x18) = uVar2;
  *(uint *)(unaff_x22 + 0x1c) = uVar3;
  *(int *)(unaff_x22 + 0x20) = iVar10;
  *(undefined2 *)(unaff_x22 + 0x24) = uVar7;
  *(undefined1 *)(unaff_x22 + 0x26) = uVar6;
  *(ulong *)(unaff_x22 + 0x28) = (ulong)uVar2;
  *(ulong *)(unaff_x22 + 0x30) = (ulong)uVar3;
  _swift_beginAccess(uVar14 + 0x18,unaff_x22 + 0xd8,0,0);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  if (SBORROW8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d840);
    (*pcVar9)();
  }
  lVar17 = *(long *)(uVar14 + 0x18);
  _swift_retain(uVar14);
  if (lVar5 != lVar4) {
    lVar16 = 0;
    do {
      uVar11 = (ulong)*(byte *)(lVar17 + (ulong)CONCAT21(uVar7,uVar6) + lVar4 + lVar16);
      (**(code **)(unaff_x22 + 0x150))();
      if ((uVar11 & 1) == 0) {
        lVar5 = lVar16 + lVar4;
        if (SCARRY8(lVar16,lVar4)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d848);
          (*pcVar9)();
        }
        if (lVar5 < lVar4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d84c);
          (*pcVar9)();
        }
        if (lVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d850);
          (*pcVar9)();
        }
        if ((long)uVar13 < lVar5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d854);
          (*pcVar9)();
        }
        *(ulong *)(unaff_x22 + 0x38) = uVar14;
        *(uint *)(unaff_x22 + 0x40) = uVar2;
        *(uint *)(unaff_x22 + 0x44) = uVar3;
        *(int *)(unaff_x22 + 0x48) = iVar10;
        *(undefined2 *)(unaff_x22 + 0x4c) = uVar7;
        *(undefined1 *)(unaff_x22 + 0x4e) = uVar6;
        *(long *)(unaff_x22 + 0x50) = lVar4;
        *(long *)(unaff_x22 + 0x58) = lVar5;
        FUN_10096e070(unaff_x22 + 0x38);
        uVar13 = *(long *)(unaff_x22 + 0x58) - *(long *)(unaff_x22 + 0x50);
        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d858);
          (*pcVar9)();
        }
        if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d85c);
          (*pcVar9)();
        }
        uVar8 = uVar2 + (uint)uVar13;
        if (CARRY4(uVar2,(uint)uVar13)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d860);
          (*pcVar9)();
        }
        if (uVar3 < uVar8) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d864);
          (*pcVar9)();
        }
        *(uint *)(puVar1 + 1) = uVar8;
        goto LAB_100a4d80c;
      }
      lVar16 = lVar16 + 1;
    } while (lVar5 - lVar4 != lVar16);
  }
  iVar10 = *(int *)(*(long *)(unaff_x22 + 0x160) + 0x30);
  *(int *)(unaff_x22 + 0x19c) = iVar10;
  uVar14 = *(ulong *)(*(long *)(unaff_x22 + 0x168) + (long)iVar10);
  if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100a4d844);
    (*pcVar9)();
  }
  if ((long)uVar13 <= (long)uVar14) {
    uVar14 = uVar13;
  }
  iVar10 = (int)*puVar1;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar13 = *puVar1;
  if (iVar10 == 0) {
    FUN_10061204c();
    _swift_release(uVar13);
    *puVar1 = uVar14;
    uVar13 = uVar14;
  }
  else {
    _swift_beginAccess(uVar13 + 0x10,unaff_x22 + 0x120,0,0);
    if (*(uint *)(uVar13 + 0x10) < (uint)uVar14) {
      FUN_10061217c(uVar14);
    }
  }
  lVar4 = *(long *)(unaff_x22 + 0x160);
  lVar5 = *(long *)(unaff_x22 + 0x168);
  _swift_beginAccess(uVar13 + 0x10,unaff_x22 + 0xf0,0,0);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(uVar13 + 0x10);
  *(undefined2 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)((long)puVar1 + 0x16) = 0;
  puVar1[1] = 0;
  iVar10 = *(int *)(lVar4 + 0x28);
  *(int *)(unaff_x22 + 0x1a0) = iVar10;
  if ((*(byte *)(lVar5 + iVar10) & 1) == 0) {
    uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0x168) + (long)*(int *)(unaff_x22 + 0x19c));
    plVar12 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_100a4d864;
    FUN_100a4c6d0(uVar15,*(undefined8 *)(unaff_x22 + 0x160));
    return;
  }
  FUN_10096e070(unaff_x22 + 0x10);
LAB_100a4d80c:
                    /* WARNING: Could not recover jumptable at 0x000100a4d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4d864 | FUN_100a4d864 */

void FUN_100a4d864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x178) = param_1;
  *(undefined8 *)(lVar2 + 0x180) = param_2;
  *(undefined8 *)(lVar2 + 0x188) = param_3;
  *(long *)(lVar2 + 400) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a4d8d0;
  }
  else {
    pcVar1 = FUN_100a4db34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4d8d0 | FUN_100a4d8d0 */

void FUN_100a4d8d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x180);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar15 = *(long *)(unaff_x22 + 0x178);
  uVar10 = uVar7 >> 0x20;
  *(long *)(unaff_x22 + 0x138) = lVar15;
  uVar9 = (undefined4)(uVar7 >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x144) = uVar9;
  iVar11 = (int)uVar14;
  *(int *)(unaff_x22 + 0x148) = iVar11;
  uVar12 = (uint)((ulong)uVar14 >> 0x20);
  uVar5 = (undefined2)((ulong)uVar14 >> 0x20);
  *(undefined2 *)(unaff_x22 + 0x14c) = uVar5;
  uVar4 = (undefined1)((ulong)uVar14 >> 0x30);
  *(undefined1 *)(unaff_x22 + 0x14e) = uVar4;
  if (uVar10 < (uVar7 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db0c);
    (*pcVar6)();
  }
  uVar13 = (ushort)((ulong)uVar14 >> 0x30) & 0xff;
  if (iVar11 - (uVar13 | (uVar12 & 0xffff) << 8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db10);
    (*pcVar6)();
  }
  *(long *)(unaff_x22 + 0x60) = lVar15;
  *(int *)(unaff_x22 + 0x68) = (int)uVar7;
  *(undefined4 *)(unaff_x22 + 0x6c) = uVar9;
  *(int *)(unaff_x22 + 0x70) = iVar11;
  *(undefined2 *)(unaff_x22 + 0x74) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x76) = uVar4;
  *(ulong *)(unaff_x22 + 0x78) = uVar7 & 0xffffffff;
  *(ulong *)(unaff_x22 + 0x80) = uVar10;
  _swift_beginAccess(lVar15 + 0x18,unaff_x22 + 0x108,0,0);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db14);
    (*pcVar6)();
  }
  lVar15 = *(long *)(lVar15 + 0x18);
  _swift_retain(*(undefined8 *)(unaff_x22 + 0x178));
  if (lVar3 != lVar1) {
    lVar16 = 0;
    do {
      uVar7 = (ulong)*(byte *)(lVar15 + lVar1 + (ulong)((uVar12 & 0xffff) * 0x100 + uVar13) + lVar16
                              );
      (**(code **)(unaff_x22 + 0x150))();
      if ((uVar7 & 1) == 0) {
        lVar15 = lVar16 + lVar1;
        if (SCARRY8(lVar16,lVar1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db18);
          (*pcVar6)();
        }
        if (lVar15 < lVar1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db1c);
          (*pcVar6)();
        }
        if (lVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db20);
          (*pcVar6)();
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
        if ((long)(ulong)((int)uVar14 - (uVar13 | (uVar12 & 0xffff) << 8)) < lVar15) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db24);
          (*pcVar6)();
        }
        uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
        uVar7 = *(ulong *)(unaff_x22 + 0x180);
        *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
        uVar12 = (uint)uVar7;
        *(uint *)(unaff_x22 + 0x90) = uVar12;
        *(int *)(unaff_x22 + 0x94) = (int)(uVar7 >> 0x20);
        *(int *)(unaff_x22 + 0x98) = (int)uVar14;
        *(short *)(unaff_x22 + 0x9c) = (short)((ulong)uVar14 >> 0x20);
        *(char *)(unaff_x22 + 0x9e) = (char)((ulong)uVar14 >> 0x30);
        *(long *)(unaff_x22 + 0xa0) = lVar1;
        *(long *)(unaff_x22 + 0xa8) = lVar15;
        uVar10 = lVar15 - lVar1;
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db28);
          (*pcVar6)();
        }
        if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db2c);
          (*pcVar6)();
        }
        uVar13 = uVar12 + (uint)uVar10;
        if (CARRY4(uVar12,(uint)uVar10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db30);
          (*pcVar6)();
        }
        if (uVar7 >> 0x20 < (ulong)uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a4db34);
          (*pcVar6)();
        }
        *(uint *)(unaff_x22 + 0x140) = uVar13;
        FUN_1006100e8(unaff_x22 + 0x60,unaff_x22 + 0xb0);
        FUN_10060c3b0(unaff_x22 + 0x138);
        FUN_10096e070(unaff_x22 + 0x10);
        FUN_10096e070(unaff_x22 + 0x88);
        FUN_10096e070(unaff_x22 + 0x60);
        _swift_release(uVar2);
        goto LAB_100a4dae8;
      }
      lVar16 = lVar16 + 1;
    } while (lVar3 - lVar1 != lVar16);
  }
  iVar11 = *(int *)(unaff_x22 + 0x1a0);
  lVar15 = *(long *)(unaff_x22 + 0x168);
  _swift_release();
  FUN_10096e070(unaff_x22 + 0x60);
  if (*(char *)(lVar15 + iVar11) != '\x01') {
    uVar14 = *(undefined8 *)(*(long *)(unaff_x22 + 0x168) + (long)*(int *)(unaff_x22 + 0x19c));
    plVar8 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_100a4d864;
    FUN_100a4c6d0(uVar14,*(undefined8 *)(unaff_x22 + 0x160));
    return;
  }
  FUN_10096e070(unaff_x22 + 0x10);
LAB_100a4dae8:
                    /* WARNING: Could not recover jumptable at 0x000100a4db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4db34 | FUN_100a4db34 */

void FUN_100a4db34(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4db6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4db70 | FUN_100a4db70 */

void FUN_100a4db70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4dbdc;
  FUN_100a4cc0c(param_1,param_2,param_3);
  return;
}



/* Address: 0x100a4dbdc | FUN_100a4dbdc */

void FUN_100a4dbdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a4dc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a4dc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100a4dc5c | FUN_100a4dc5c */

void FUN_100a4dc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_100a4c5d8(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,
                param_3,param_4,param_5);
  return;
}



/* Address: 0x100a4dcec | FUN_100a4dcec */

void FUN_100a4dcec(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_38 = &DAT_100c90960;
    puStack_30 = &DAT_100c90978;
    local_28 = puStack_40;
    _swift_initStructMetadata(param_1,0,5,&local_48,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100a4dd7c | FUN_100a4dd7c */

long * FUN_100a4dd7c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 &&
      (lVar6 + 0x17U & 0xfffffffffffffff8) + 0x20 < 0x19) {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 0x17 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 0x17 & 0xfffffffffffffff8);
    *puVar4 = *puVar5;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)((long)puVar4 + 0xc) = *(undefined4 *)((long)puVar5 + 0xc);
    uVar2 = *(undefined4 *)(puVar5 + 2);
    *(undefined4 *)((long)puVar4 + 0x13) = *(undefined4 *)((long)puVar5 + 0x13);
    *(undefined4 *)(puVar4 + 2) = uVar2;
    puVar4[3] = puVar5[3];
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100a4de88 | FUN_100a4de88 */

void FUN_100a4de88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_release(*(undefined8 *)(param_1 + *(long *)(lVar1 + 0x40) + 0x17U & 0xfffffffffffffff8));
  return;
}



/* Address: 0x100a4dec8 | FUN_100a4dec8 */

long FUN_100a4dec8(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x10))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar3 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar4 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar2 + 0x17U & 0xfffffffffffffff8);
  *puVar4 = *puVar3;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((long)puVar4 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
  uVar1 = *(undefined4 *)((long)puVar3 + 0x13);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
  *(undefined4 *)((long)puVar4 + 0x13) = uVar1;
  puVar4[3] = puVar3[3];
  _swift_retain();
  return param_1;
}



/* Address: 0x100a4df84 | FUN_100a4df84 */

long FUN_100a4df84(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x18))();
  lVar1 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + 0x17U & 0xfffffffffffffff8);
  uVar4 = *puVar2;
  *puVar2 = *puVar3;
  _swift_retain();
  _swift_release(uVar4);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
  *(undefined2 *)((long)puVar2 + 0x14) = *(undefined2 *)((long)puVar3 + 0x14);
  *(undefined1 *)((long)puVar2 + 0x16) = *(undefined1 *)((long)puVar3 + 0x16);
  puVar2[3] = puVar3[3];
  return param_1;
}



/* Address: 0x100a4e054 | FUN_100a4e054 */

long FUN_100a4e054(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar1 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  *puVar2 = *puVar4;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar4 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + 0x17U & 0xfffffffffffffff8);
  uVar3 = *(undefined8 *)((long)puVar2 + 0xf);
  uVar6 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar6;
  *(undefined8 *)((long)puVar4 + 0xf) = uVar3;
  puVar4[3] = puVar2[3];
  return param_1;
}



/* Address: 0x100a4e0f0 | FUN_100a4e0f0 */

long FUN_100a4e0f0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x28))();
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar2 + param_1;
  lVar2 = lVar2 + param_2;
  puVar3 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + 7U & 0xfffffffffffffff8);
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + 0x17U & 0xfffffffffffffff8);
  uVar1 = *puVar3;
  *puVar3 = *puVar4;
  _swift_release(uVar1);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((long)puVar3 + 0xc) = *(undefined4 *)((long)puVar4 + 0xc);
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar4 + 2);
  *(undefined2 *)((long)puVar3 + 0x14) = *(undefined2 *)((long)puVar4 + 0x14);
  *(undefined1 *)((long)puVar3 + 0x16) = *(undefined1 *)((long)puVar4 + 0x16);
  puVar3[3] = puVar4[3];
  return param_1;
}



/* Address: 0x100a4e1b8 | FUN_100a4e1b8 */

uint * FUN_100a4e1b8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 0x17U & 0xfffffffffffffff8) + 0x20;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100a4e250;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100a4e250:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100a4e250;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100a4e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 0x17 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100a4e2b4 | FUN_100a4e2b4 */

void FUN_100a4e2b4(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar8 + 0x17U & 0xfffffffffffffff8) + 0x20;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar10 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_100a4e358;
  }
  else {
    uVar9 = 2;
    uVar3 = uVar9;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar10 = 0;
    if (1 < uVar3) {
      uVar10 = uVar9;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_100a4e358:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar10 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar10 < 2) {
    if (uVar10 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar10 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100a4e3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))();
      return;
    }
    puVar6 = (ulong *)((long)param_1 + lVar8 + 0x17 & 0xfffffffffffffff8);
    if ((int)param_2 < 0) {
      *(undefined1 *)((long)puVar6 + 0x16) = 0;
      *(undefined2 *)((long)puVar6 + 0x14) = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      *puVar6 = (ulong)(param_2 & 0x7fffffff);
      puVar6[1] = 0;
    }
    else {
      *puVar6 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x100a4e430 | FUN_100a4e430 */

void FUN_100a4e430(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a4e43c | FUN_100a4e43c */

undefined8 FUN_100a4e43c(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(*(long *)(unaff_x20 + *(int *)(param_1 + 0x28)) + 0x10);
}



/* Address: 0x100a4e44c | FUN_100a4e44c */

ulong FUN_100a4e44c(long param_1)

{
  long unaff_x20;
  
  return *(ulong *)(*(long *)(unaff_x20 + *(int *)(param_1 + 0x28)) + 0x18) >> 1;
}



/* Address: 0x100a4e460 | FUN_100a4e460 */

void FUN_100a4e460(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_100a50100(0,param_5,param_6);
  *(undefined **)(param_1 + *(int *)(lVar2 + 0x28)) = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((-1 < param_3) && (0 < param_4)) {
    (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
    *(long *)(param_1 + *(int *)(lVar2 + 0x24)) = param_3;
    *(long *)(param_1 + *(int *)(lVar2 + 0x2c)) = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4e4f8);
  (*pcVar1)();
}



/* Address: 0x100a4e4f8 | FUN_100a4e4f8 */

void FUN_100a4e4f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  _swift_task_switch(FUN_100a4e55c,0,0);
  return;
}



/* Address: 0x100a4e55c | FUN_100a4e55c */

void FUN_100a4e55c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x22;
  long lVar8;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar8 = (long)*(int *)(lVar2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(*(long *)(lVar4 + lVar8) + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 0x10))(uVar3,*(undefined8 *)(unaff_x22 + 0x10),uVar5);
  puVar6 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  Swift::Array<undefined>::_append(uVar3,puVar6,uVar5,uVar1);
  lVar8 = *(long *)(*(long *)(lVar4 + lVar8) + 0x10);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  if (lVar8 < *(long *)(lVar4 + *(int *)(lVar2 + 0x2c))) {
    lVar2 = *(long *)(unaff_x22 + 0x48);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a4e62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar8 - lVar2);
    return;
  }
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a4e678;
  FUN_100a4e6f4(*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x100a4e678 | FUN_100a4e678 */

void FUN_100a4e678(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a4e6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  lVar1 = *(long *)(lVar3 + 0x48);
  lVar2 = *(long *)(lVar3 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100a4e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(lVar2 - lVar1);
  return;
}



/* Address: 0x100a4e6f4 | FUN_100a4e6f4 */

void FUN_100a4e6f4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_100a4e70c,0,0);
  return;
}



/* Address: 0x100a4e70c | FUN_100a4e70c */

void FUN_100a4e70c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  iVar4 = *(int *)(lVar1 + 0x28);
  *(int *)(unaff_x22 + 0x38) = iVar4;
  lVar10 = *(long *)(lVar3 + iVar4);
  *(long *)(unaff_x22 + 0x20) = lVar10;
  if (*(long *)(lVar10 + 0x10) != 0) {
    iVar5 = *(int *)(lVar1 + 0x24);
    *(int *)(unaff_x22 + 0x3c) = iVar5;
    uVar11 = *(undefined8 *)(lVar3 + iVar5);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    lVar1 = *(long *)(lVar1 + 0x18);
    piVar9 = *(int **)(lVar1 + 0x10);
    iVar5 = *piVar9;
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar6;
    puVar7 = &DAT_100ff69e0;
    FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
    puVar8 = &DAT_100ff69e8;
    FUN_100134584(&DAT_100ff69e8,&DAT_100ff69e0,&DAT_100c91200,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a4e838;
                    /* WARNING: Could not recover jumptable at 0x000100a4e80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar5 + (long)piVar9))(lVar3 + iVar4,uVar11,puVar7,puVar8,uVar2,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a4e834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4e838 | FUN_100a4e838 */

void FUN_100a4e838(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a4e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a4e8a0,0,0);
  return;
}



/* Address: 0x100a4e8a0 | FUN_100a4e8a0 */

void FUN_100a4e8a0(void)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x10);
  if (SCARRY8(*(long *)(unaff_x22 + 0x28),lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4e9a8);
    (*pcVar2)();
  }
  lVar7 = *(long *)(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  *(long *)(lVar6 + *(int *)(unaff_x22 + 0x3c)) = *(long *)(unaff_x22 + 0x28) + lVar5;
  lVar5 = *(long *)(lVar6 + *(int *)(lVar7 + 0x2c));
  if (-1 < lVar5 + 0x4000000000000000) {
    lVar7 = *(long *)(unaff_x22 + 0x18);
    lVar6 = (long)*(int *)(unaff_x22 + 0x38);
    if (lVar5 * 2 < (long)(*(ulong *)(*(long *)(unaff_x22 + 0x20) + 0x18) >> 1)) {
      _swift_bridgeObjectRelease();
      *(undefined **)(lVar7 + lVar6) = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      uVar3 = *(ulong *)(lVar7 + lVar6);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar5 = *(long *)(lVar7 + lVar6);
      iVar1 = *(int *)(unaff_x22 + 0x38);
      lVar7 = *(long *)(unaff_x22 + 0x18);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        FUN_100a4ff94(0,*(ulong *)(lVar5 + 0x18) >> 1,&DAT_100ff6aa8,&DAT_100c90a58);
        _swift_bridgeObjectRelease(lVar5);
        *(undefined8 *)(lVar7 + iVar1) = uVar4;
      }
      else {
        FUN_10012ae44(0,*(undefined8 *)(lVar5 + 0x10),FUN_100aa7840,FUN_1005afc04);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000100a4e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4e9ac);
  (*pcVar2)();
}



/* Address: 0x100a4e9ac | FUN_100a4e9ac */

void FUN_100a4e9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  _swift_task_switch(FUN_100a4e9cc,0,0);
  return;
}



/* Address: 0x100a4e9cc | FUN_100a4e9cc */

void FUN_100a4e9cc(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x40);
  uVar3 = uVar4 >> 0x20;
  if (uVar3 < (uVar4 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4eaa4);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  if (uVar3 <= (int)uVar5 -
               ((ushort)((ulong)uVar5 >> 0x30) & 0xff | (uint)((ulong)uVar5 >> 0x18) & 0xffff00)) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
    *(int *)(unaff_x22 + 0x18) = (int)uVar4;
    *(int *)(unaff_x22 + 0x1c) = (int)(uVar4 >> 0x20);
    *(int *)(unaff_x22 + 0x20) = (int)uVar5;
    *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar5 >> 0x20);
    *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar5 >> 0x30);
    *(ulong *)(unaff_x22 + 0x28) = uVar4 & 0xffffffff;
    *(ulong *)(unaff_x22 + 0x30) = uVar3;
    plVar6 = (long *)0x60;
    _swift_retain();
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar6;
    plVar2 = plVar6;
    FUN_100a50010();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a4eaa8;
    FUN_100a4e4f8((undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x50),&DAT_100eeb2d0,
                  plVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4eaa8);
  (*pcVar1)();
}



/* Address: 0x100a4eaa8 | FUN_100a4eaa8 */

void FUN_100a4eaa8(undefined8 param_1)

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
    _swift_task_switch(FUN_100a4eb30,0,0);
    return;
  }
  FUN_10096e070(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4eb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x100a4eb30 | FUN_100a4eb30 */

void FUN_100a4eb30(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a4eb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a4eb6c | FUN_100a4eb6c */

void FUN_100a4eb6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20;
  *(long *)(unaff_x22 + 0x148) = param_3;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = param_2;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x168) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x170) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x188) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x198) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar4;
  _swift_task_switch(FUN_100a4ec84,0,0);
  return;
}



/* Address: 0x100a4ec84 | FUN_100a4ec84 */

void FUN_100a4ec84(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x188) + 0x10))
            (*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0x148));
  Swift::AsyncSequence::_makeAsyncIterator();
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x148),
             *(undefined8 *)(unaff_x22 + 0x198),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4ed48;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a4ed48 | FUN_100a4ed48 */

void FUN_100a4ed48(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a4edac;
  }
  else {
    pcVar1 = FUN_100a4efc4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4edac | FUN_100a4edac */

void FUN_100a4edac(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x170);
  uVar3 = uVar5;
  (**(code **)(lVar2 + 0x30))(uVar5,1,uVar1);
  if ((int)uVar3 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar1 = *(undefined8 *)(unaff_x22 + 400);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
    (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x198));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100a4ee44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x1b0));
    return;
  }
  (**(code **)(lVar2 + 0x20))(*(undefined8 *)(unaff_x22 + 0x178),uVar5,uVar1);
  plVar4 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a4eea4;
  FUN_100a4e4f8(*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x140),
                *(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Address: 0x100a4eea4 | FUN_100a4eea4 */

void FUN_100a4eea4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1c8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x1d8) = param_1;
    pcVar1 = FUN_100a4ef18;
  }
  else {
    pcVar1 = FUN_100a4f1d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a4ef18 | FUN_100a4ef18 */

void FUN_100a4ef18(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x1d8);
  lVar3 = *(long *)(unaff_x22 + 0x1b0);
  (**(code **)(*(long *)(unaff_x22 + 0x170) + 8))
            (*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x168));
  if (!SCARRY8(lVar3,lVar4)) {
    *(long *)(unaff_x22 + 0x1b0) = lVar3 + lVar4;
    _swift_getAssociatedConformanceWitness
              (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x148),
               *(undefined8 *)(unaff_x22 + 0x198),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b8) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a4ed48;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4efc4);
  (*pcVar1)();
}



/* Address: 0x100a4efc4 | FUN_100a4efc4 */

void FUN_100a4efc4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = *(undefined8 **)(unaff_x22 + 0x1c0);
  (**(code **)(*(long *)(unaff_x22 + 0x1a0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x198));
  *(undefined8 **)(unaff_x22 + 0x130) = puVar5;
  _swift_errorRetain(puVar5);
  puVar1 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  lVar2 = unaff_x22 + 0x10;
  _swift_dynamicCast(lVar2,unaff_x22 + 0x130,puVar1,&DAT_100f2de38,0);
  if ((int)lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x130));
    puVar4 = (undefined8 *)(unaff_x22 + 0xa0);
    *(undefined1 *)puVar4 = 8;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000048;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100db8520;
    *(undefined8 **)(unaff_x22 + 0xb8) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8570;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8590;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x90;
    puVar7 = (undefined8 *)(unaff_x22 + 0x58);
    *(undefined1 *)puVar7 = 8;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xd000000000000048;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x8000000100db8520;
    *(undefined8 **)(unaff_x22 + 0x70) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8570;
    *(undefined8 *)(unaff_x22 + 0x88) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8590;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x90;
    _swift_errorRetain(puVar5);
    FUN_100a50050(puVar4,unaff_x22 + 0xe8);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar7,0,0);
    uVar3 = *puVar4;
    puVar7[1] = *(undefined8 *)(unaff_x22 + 0xa8);
    *puVar7 = uVar3;
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar7[8] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar7[5] = uVar9;
    puVar7[4] = uVar6;
    puVar7[7] = uVar8;
    puVar7[6] = uVar3;
    puVar7[3] = uVar11;
    puVar7[2] = uVar10;
    _swift_willThrow();
  }
  else {
    _swift_errorRelease();
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar5,0,0);
    puVar5[5] = uVar9;
    puVar5[4] = uVar8;
    puVar5[7] = uVar13;
    puVar5[6] = uVar11;
    puVar5[8] = uVar3;
    puVar5[1] = uVar14;
    *puVar5 = uVar12;
    puVar5[3] = uVar10;
    puVar5[2] = uVar6;
    _swift_willThrow();
    puVar5 = *(undefined8 **)(unaff_x22 + 0x130);
  }
  _swift_errorRelease(puVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a4f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


