/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007563a0 | FUN_1007563a0 */

undefined8 * FUN_1007563a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_1007562d4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Address: 0x10075640c | thunk_FUN_100756410 */

undefined8 * thunk_FUN_100756410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  FUN_1007562d4(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  FUN_100752c1c(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12);
  return param_1;
}



/* Address: 0x100756410 | FUN_100756410 */

undefined8 * FUN_100756410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  FUN_1007562d4(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  FUN_100752c1c(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12);
  return param_1;
}



/* Address: 0x10075648c | thunk_FUN_100756490 */

undefined8 * thunk_FUN_100756490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_100752c1c(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100756490 | FUN_100756490 */

undefined8 * FUN_100756490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_100752c1c(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1007564d8 | thunk_FUN_1007564dc */

int thunk_FUN_1007564dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 8) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
          (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007564dc | FUN_1007564dc */

int FUN_1007564dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 8) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
          (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100756558 | thunk_FUN_10075655c */

void thunk_FUN_10075655c(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = 0;
      param_1[1] = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      param_1[5] = 0;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x10075655c | FUN_10075655c */

void FUN_10075655c(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = 0;
      param_1[1] = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      param_1[5] = 0;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x1007565e0 | FUN_1007565e0 */

ulong FUN_1007565e0(long param_1)

{
  return *(ulong *)(param_1 + 0x20) >> 0x3f;
}



/* Address: 0x1007565ec | FUN_1007565ec */

void FUN_1007565ec(long param_1)

{
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) & 0x7fffffffffffffff;
  return;
}



/* Address: 0x1007565fc | FUN_1007565fc */

void FUN_1007565fc(long param_1,long param_2)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xffffffffffffff8;
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x10075661c | FUN_10075661c */

void FUN_10075661c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100756628 | FUN_100756628 */

void FUN_100756628(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100756634 | thunk_FUN_1007453f4 */

void thunk_FUN_1007453f4(void)

{
  FUN_1007453f4();
  return;
}



/* Address: 0x100756638 | thunk_FUN_10060938c */

void thunk_FUN_10060938c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10075663c | thunk_FUN_10075655c */

void thunk_FUN_10075655c(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = 0;
      param_1[1] = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      param_1[5] = 0;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x100756640 | thunk_FUN_100745418 */

void thunk_FUN_100745418(void)

{
  FUN_100745418();
  return;
}



/* Address: 0x100756644 | thunk_FUN_100756388 */

void thunk_FUN_100756388(undefined8 *param_1)

{
  FUN_100752c1c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* Address: 0x100756648 | thunk_FUN_100745398 */

uint thunk_FUN_100745398(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x10075664c | thunk_FUN_1007530ec */

void thunk_FUN_1007530ec(void)

{
  FUN_1007530ec();
  return;
}



/* Address: 0x100756650 | thunk_FUN_1007563a0 */

void thunk_FUN_1007563a0(void)

{
  thunk_FUN_1007563a0();
  return;
}



/* Address: 0x100756654 | thunk_FUN_100756410 */

void thunk_FUN_100756410(void)

{
  thunk_FUN_100756410();
  return;
}



/* Address: 0x100756658 | thunk_FUN_100756490 */

void thunk_FUN_100756490(void)

{
  thunk_FUN_100756490();
  return;
}



/* Address: 0x10075665c | thunk_FUN_1007564dc */

int thunk_FUN_1007564dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 8) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
          (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100756660 | FUN_100756660 */

void FUN_100756660(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10075666c | FUN_10075666c */

undefined1  [16] FUN_10075666c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = &local_90;
  puVar1 = &DAT_100fe2878;
  FUN_1000f7830(&DAT_100fe2878,&DAT_100c76748);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  FUN_100752ca4(&local_60,param_1,param_2,param_3);
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  lVar2 = 0;
  FUN_100756358(0,param_1,param_2,param_3);
  FUN_10079f660(&local_90,lVar2);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(&local_60,lVar2);
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Address: 0x100756734 | FUN_100756734 */

void FUN_100756734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  _swift_task_switch(FUN_100756754,0,0);
  return;
}



/* Address: 0x100756754 | FUN_100756754 */

void FUN_100756754(void)

{
  byte bVar1;
  Optional OVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined7 extraout_var;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar13;
  uVar3 = 0;
  FUN_100756358(0,uVar15,uVar9,uVar13);
  uVar4 = 0;
  FUN_10075309c(0,uVar15,uVar9,uVar13);
  FUN_10079f534(unaff_x22 + 0x58,FUN_100757eec,unaff_x22 + 0xa0,uVar10,uVar3,uVar4);
  lVar11 = *(long *)(unaff_x22 + 0x58);
  if (lVar11 != 0) {
    if (lVar11 == 1) {
      uVar9 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar12 = *(long *)(unaff_x22 + 0xd8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      _os_unfair_lock_lock(lVar12 + 0x18);
      lVar11 = *(long *)(lVar12 + 0x10);
      *(long *)(lVar12 + 0x10) = lVar11 + 1;
      _os_unfair_lock_unlock(lVar12 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x28) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
      *(long *)(unaff_x22 + 0x50) = lVar11;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x80) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(long *)(unaff_x22 + 0x90) = lVar12;
      *(long *)(unaff_x22 + 0x98) = lVar11;
      bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar1 & 1) != 0) {
        plVar5 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xf8) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_1007569f4;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar8 = FUN_100757fd4;
      _swift_task_addCancellationHandler(FUN_100757fd4,unaff_x22 + 0x60);
      *(code **)(unaff_x22 + 0x100) = pcVar8;
      plVar5 = (long *)0x90;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_100756a5c;
      FUN_100757300();
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0xe0);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    uVar6 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0;
    _swift_task_alloc(uVar6);
    lVar14 = *(long *)(lVar12 + -8);
    (**(code **)(lVar14 + 0x10))();
    (**(code **)(lVar14 + 0x38))(uVar6,0,1,lVar12);
    puVar7 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(uVar6,lVar11,CONCAT71(extraout_var,OVar2.value),puVar7,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    _swift_task_dealloc(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000100756990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007569f4 | FUN_1007569f4 */

void FUN_1007569f4(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xf8));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x100756a5c | FUN_100756a5c */

void FUN_100756a5c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100756ac4;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_100756b08;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100756ac4 | FUN_100756ac4 */

void FUN_100756ac4(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x100756b08 | FUN_100756b08 */

void FUN_100756b08(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x100));
  return;
}



/* Address: 0x100756b3c | FUN_100756b3c */

void FUN_100756b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long lVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar9 = *(long *)(lVar2 + -8);
  puVar10 = auStack_d0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_5 + -8);
  local_b0 = (long)puVar10 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  local_90 = param_4;
  lStack_88 = param_5;
  local_80 = param_6;
  local_78 = param_1;
  FUN_100756358(0,param_4,param_5,param_6);
  uVar4 = 0;
  FUN_100753284(0,param_4,param_5,param_6);
  FUN_10079f534(&local_70,FUN_100757e60,auStack_a0,param_2,uVar3,uVar4);
  if (local_70 != 0) {
    local_c0 = 0;
    lVar6 = *(long *)(local_70 + 0x10);
    local_b8 = local_70;
    local_c8 = lVar7;
    if (lVar6 == 0) {
      _swift_bridgeObjectRetain();
    }
    else {
      _swift_bridgeObjectRetain();
      plVar8 = (long *)(local_70 + 0x20);
      do {
        if (*plVar8 != 0) {
          _swift_continuation_throwingResume();
        }
        lVar6 = lVar6 + -1;
        plVar8 = plVar8 + 1;
      } while (lVar6 != 0);
    }
    (**(code **)(lVar9 + 0x10))(puVar10,param_1,lVar2);
    lVar7 = local_c8;
    puVar5 = puVar10;
    (**(code **)(local_c8 + 0x30))(puVar10,1,param_5);
    lVar6 = local_b0;
    if ((int)puVar5 == 1) {
      (**(code **)(lVar9 + 8))(puVar10,lVar2);
      local_70 = local_68;
      local_90 = param_4;
      lStack_88 = param_5;
      local_80 = param_6;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      Swift::Optional::typeMetadataAccessor();
      uVar3 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar3);
      (extension_Swift)::Swift::Sequence::_forEach();
      FUN_1001b9e60(local_b8,local_68);
      _swift_bridgeObjectRelease(local_68);
    }
    else {
      (**(code **)(lVar7 + 0x20))(local_b0,puVar10,param_5);
      local_78 = lVar6;
      local_70 = local_68;
      local_90 = param_4;
      lStack_88 = param_5;
      local_80 = param_6;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      Swift::Optional::typeMetadataAccessor();
      uVar3 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar3);
      (extension_Swift)::Swift::Sequence::_forEach();
      FUN_1001b9e60(local_b8,local_68);
      _swift_bridgeObjectRelease(local_68);
      (**(code **)(lVar7 + 8))(lVar6,param_5);
    }
  }
  return;
}



/* Address: 0x100756e48 | FUN_100756e48 */

void FUN_100756e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_6;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0xe8) = CONCAT71(extraout_var,OVar1.value);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xf0) = CONCAT71(extraout_var_00,RVar2.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,RVar2.value) + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  lVar5 = 0;
  FUN_1007562c8(0,param_4,param_5,param_6);
  *(long *)(unaff_x22 + 0x108) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  _swift_task_switch(FUN_100756f44,0,0);
  return;
}



/* Address: 0x100756f44 | FUN_100756f44 */

/* WARNING: Removing unreachable block (ram,0x0001007571a8) */

void FUN_100756f44(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar3 = *(long *)(unaff_x22 + 0x110);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_10079f534(uVar7,FUN_100757790,unaff_x22 + 0x90,uVar9,uVar1,uVar8);
  (**(code **)(lVar3 + 0x10))(uVar6,uVar7,uVar8);
  puVar2 = &DAT_100fe0dd8;
  FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,puVar2,uVar11,"continuation result ",0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar6,1,lVar3);
  if ((int)uVar6 != 1) {
    lVar10 = **(long **)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0xf8) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x100),
               (long)*(long **)(unaff_x22 + 0x118) + (long)*(int *)(lVar3 + 0x30),
               *(undefined8 *)(unaff_x22 + 0xf0));
    if (lVar10 != 0) {
      _swift_continuation_throwingResume(lVar10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar10 = *(long *)(unaff_x22 + 0x110);
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c78b28;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78b28,uVar1);
    FUN_1007c346c(uVar9,uVar1,pTVar5);
    (**(code **)(lVar3 + 8))(uVar8,uVar1);
    (**(code **)(lVar10 + 8))(uVar7,uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001007571d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar3 = *(long *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  _os_unfair_lock_lock(lVar3 + 0x18);
  lVar10 = *(long *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x10) = lVar10 + 1;
  _os_unfair_lock_unlock(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
  *(long *)(unaff_x22 + 0x48) = lVar10;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar8;
  *(long *)(unaff_x22 + 0x80) = lVar3;
  *(long *)(unaff_x22 + 0x88) = lVar10;
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x128) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1007571d4;
  FUN_1007aae80(*(undefined8 *)(unaff_x22 + 0xb8),&DAT_100c76728,unaff_x22 + 0x10,FUN_100757dc4,
                unaff_x22 + 0x50,0,0,*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Address: 0x1007571d4 | FUN_1007571d4 */

void FUN_1007571d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100757238;
  }
  else {
    pcVar1 = FUN_100757298;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100757238 | FUN_100757238 */

void FUN_100757238(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x108));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100757294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100757298 | FUN_100757298 */

void FUN_100757298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x108));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007572fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100757300 | FUN_100757300 */

void FUN_100757300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_8;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_100757324,0,0);
  return;
}



/* Address: 0x100757324 | FUN_100757324 */

void FUN_100757324(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1007573b8;
  _swift_continuation_init(unaff_x22 + 0x10,0);
  FUN_1007573f8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007573b8 | FUN_1007573b8 */

void FUN_1007573b8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001007573f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Address: 0x1007573f8 | FUN_1007573f8 */

void FUN_1007573f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  puVar5 = auStack_c0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  uVar3 = 0;
  local_a0 = param_6;
  uStack_98 = param_7;
  local_90 = param_8;
  uStack_88 = param_1;
  local_80 = param_4;
  uStack_78 = param_5;
  FUN_100756358(0,param_6,param_7,param_8);
  FUN_10075307c(0xff,param_6,param_7,param_8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_10079f534(&local_68,FUN_100758070,auStack_b0,param_2,uVar3,OVar2.value);
  if (local_68 != 2) {
    if (local_68 == 1) {
      _swift_continuation_throwingResume(param_1);
    }
    else {
      _swift_continuation_throwingResume(param_1);
      if (local_68 != 0) {
        lVar6 = *(long *)(param_6 + -8);
        (**(code **)(lVar6 + 0x10))(puVar5,param_4,param_6);
        (**(code **)(lVar6 + 0x38))(puVar5,0,1,param_6);
        puVar4 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        FUN_1005ec10c(puVar5,local_68,CONCAT71(extraout_var,OVar1.value),puVar4,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
    }
  }
  return;
}



/* Address: 0x100757570 | FUN_100757570 */

void FUN_100757570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_48;
  
  uVar1 = 0;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_3;
  FUN_100756358(0,param_4,param_5,param_6);
  uVar2 = 0;
  FUN_100753090(0,param_4,param_5,param_6);
  FUN_10079f534(&local_48,FUN_100757ff4,auStack_80,param_1,uVar1,uVar2);
  if (1 < local_48) {
    _swift_continuation_throwingResume();
  }
  return;
}



/* Address: 0x100757618 | FUN_100757618 */

void FUN_100757618(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long local_48;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar2 = param_4;
    _swift_allocError(param_4,param_5,0,0);
    (**(code **)(*(long *)(param_4 + -8) + 0x10))(param_5,param_2,param_4);
    local_48 = lVar2;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    puVar3 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec180(&local_48,lVar4,OVar1.value,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x1007576d8 | FUN_1007576d8 */

void FUN_1007576d8(long *param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(param_2 + -8) + 0x38))
              (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,param_2);
    puVar2 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar4,
                  CONCAT71(extraout_var,OVar1.value),puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x100757790 | FUN_100757790 */

void FUN_100757790(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100752204(param_1);
  return;
}



/* Address: 0x1007577dc | FUN_1007577dc */

void FUN_1007577dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_100757800,0,0);
  return;
}



/* Address: 0x100757800 | FUN_100757800 */

void FUN_100757800(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x68);
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007578b4;
  FUN_100790978(*(undefined8 *)(unaff_x22 + 0x50),0,0,FUN_100757dec,unaff_x22 + 0x10,OVar1.value);
  return;
}



/* Address: 0x1007578b4 | FUN_1007578b4 */

void FUN_1007578b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001007578f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1007578f8 | FUN_1007578f8 */

void FUN_1007578f8(undefined8 param_1)

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
  plVar7 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1007577dc(plVar7,param_1,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x10075798c | FUN_10075798c */

void FUN_10075798c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long alStack_e0 [4];
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined7 extraout_var_00;
  
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var,OVar2.value);
  local_c0 = *(long *)(local_b0 + -8);
  uVar9 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_e0[2] = (long)alStack_e0 - uVar9;
  alStack_e0[1] = alStack_e0[2] - uVar9;
  lVar10 = alStack_e0[1] - uVar9;
  lVar3 = 0xff;
  alStack_e0[3] = lVar10;
  FUN_100752c98(0xff,param_5,param_6,param_7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar14 = (long *)(lVar10 - uVar9);
  lVar10 = (long)plVar14 - uVar9;
  uVar5 = 0;
  local_b8 = param_1;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_1;
  local_70 = param_4;
  FUN_100756358(0,param_5,param_6,param_7);
  FUN_10079f534(lVar10,FUN_100757dfc,local_a0,param_2,uVar5,lVar4);
  (**(code **)(lVar12 + 0x10))(plVar14,lVar10,lVar4);
  plVar6 = plVar14;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(plVar14,1,lVar3);
  if ((int)plVar6 != 1) {
    plVar6 = plVar14;
    _swift_getEnumCaseMultiPayload(plVar14,lVar3);
    lVar1 = local_b0;
    lVar8 = local_c0;
    lVar3 = alStack_e0[3];
    if ((int)plVar6 == 0) {
      (**(code **)(local_c0 + 0x20))(alStack_e0[3],plVar14,local_b0);
      lVar13 = alStack_e0[1];
      (**(code **)(lVar8 + 0x10))(alStack_e0[1],lVar3,lVar1);
      puVar7 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec10c(lVar13,local_b8,lVar1,puVar7,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      pcVar11 = *(code **)(lVar8 + 8);
    }
    else {
      if ((int)plVar6 == 1) {
        local_a0[0] = *plVar14;
        puVar7 = &DAT_100fdfb40;
        FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
        FUN_1005ec180(local_a0,local_b8,lVar1,puVar7,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        goto LAB_100757c6c;
      }
      lVar13 = *plVar14;
      puVar7 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,puVar7,lVar1,"continuation element ",0);
      lVar3 = alStack_e0[2];
      (**(code **)(local_c0 + 0x20))
                (alStack_e0[2],(long)plVar14 + (long)*(int *)(lVar8 + 0x30),lVar1);
      if (lVar13 != 0) {
        _swift_continuation_throwingResume(lVar13);
      }
      lVar13 = local_c0;
      lVar8 = alStack_e0[3];
      (**(code **)(local_c0 + 0x10))(alStack_e0[3],lVar3,lVar1);
      puVar7 = &DAT_100fdfb40;
      FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
      FUN_1005ec10c(lVar8,local_b8,lVar1,puVar7,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      pcVar11 = *(code **)(lVar13 + 8);
    }
    (*pcVar11)(lVar3,lVar1);
  }
LAB_100757c6c:
  (**(code **)(lVar12 + 8))(lVar10,lVar4);
  return;
}



/* Address: 0x100757c9c | FUN_100757c9c */

void FUN_100757c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40);
  uVar2 = 0;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_3;
  FUN_100756358(0,param_4,param_5,param_6);
  uVar3 = 0;
  FUN_100754eb4(0,param_4,param_5,param_6);
  FUN_10079f534(&local_58,FUN_100757dd0,auStack_90,param_1,uVar2,uVar3);
  if (1 < local_58) {
    (**(code **)(*(long *)(param_4 + -8) + 0x38))
              (auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,param_4);
    puVar4 = &DAT_100fdfb40;
    FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
    FUN_1005ec10c(auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),local_58,
                  CONCAT71(extraout_var,OVar1.value),puVar4,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x100757dc4 | FUN_100757dc4 */

void FUN_100757dc4(void)

{
  FUN_100757fe0(FUN_100757c9c);
  return;
}



/* Address: 0x100757dd0 | FUN_100757dd0 */

void FUN_100757dd0(undefined8 param_1)

{
  FUN_100758010(param_1,FUN_100752a7c);
  return;
}



/* Address: 0x100757dec | FUN_100757dec */

void FUN_100757dec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10075798c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100757dfc | FUN_100757dfc */

void FUN_100757dfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100752684(param_1,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100757e60 | FUN_100757e60 */

void FUN_100757e60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100751e54();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x100757eb4 | FUN_100757eb4 */

void FUN_100757eb4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007576d8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100757ed0 | FUN_100757ed0 */

void FUN_100757ed0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100757618(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100757eec | FUN_100757eec */

void FUN_100757eec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_100756358(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_1007516b8();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100757f38 | FUN_100757f38 */

void FUN_100757f38(undefined8 param_1)

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
  plVar7 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100757300(plVar7,param_1,uVar5,uVar3,uVar6,uVar8,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100757fd4 | FUN_100757fd4 */

void FUN_100757fd4(void)

{
  FUN_100757fe0(FUN_100757570);
  return;
}



/* Address: 0x100757fe0 | FUN_100757fe0 */

void FUN_100757fe0(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}


