/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aa8878 | FUN_100aa8878 */

undefined1  [16] FUN_100aa8878(void)

{
  return ZEXT816(0x100f2f898);
}



/* Address: 0x100aa8888 | FUN_100aa8888 */

undefined1  [16] FUN_100aa8888(void)

{
  return ZEXT816(0x100f2f8c0);
}



/* Address: 0x100aa8898 | FUN_100aa8898 */

void FUN_100aa8898(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa77c0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100aa88b0 | FUN_100aa88b0 */

void FUN_100aa88b0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _renamex_np(uVar1,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  *param_1 = (int)uVar1;
  return;
}



/* Address: 0x100aa88e8 | FUN_100aa88e8 */

void FUN_100aa88e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa8920,auStack_30,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa8920 | FUN_100aa8920 */

void FUN_100aa8920(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _link(uVar1,param_2);
  *param_1 = (int)uVar1;
  return;
}



/* Address: 0x100aa8954 | FUN_100aa8954 */

void FUN_100aa8954(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(unaff_x20 + 0x18);
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa88b0,auStack_30,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa8994 | FUN_100aa8994 */

void FUN_100aa8994(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100aa7504(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100aa89ac | FUN_100aa89ac */

void FUN_100aa89ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa89e4,auStack_30,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa89e4 | FUN_100aa89e4 */

void FUN_100aa89e4(int *param_1,char *param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = _symlink(param_2,*(char **)(unaff_x20 + 0x10));
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa8a14 | FUN_100aa8a14 */

void FUN_100aa8a14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  local_20 = param_1;
  FUN_1005b32d0(FUN_100aa8a4c,auStack_30,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa8a4c | FUN_100aa8a4c */

void FUN_100aa8a4c(int *param_1,char *param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = _rename(*(char **)(unaff_x20 + 0x10),param_2);
  *param_1 = iVar1;
  return;
}



/* Address: 0x100aa8a80 | FUN_100aa8a80 */

void FUN_100aa8a80(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  _unlinkat(uVar1,param_2,*(undefined4 *)(unaff_x20 + 0x14));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100aa8ab4 | FUN_100aa8ab4 */

void FUN_100aa8ab4(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  _renameatx_np(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined4 *)(unaff_x20 + 0x20),param_2,
                *(undefined4 *)(unaff_x20 + 0x24));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100aa8af0 | FUN_100aa8af0 */

void FUN_100aa8af0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined8 local_18;
  
  local_20 = *(undefined4 *)(unaff_x20 + 0x18);
  local_18 = param_1;
  FUN_1005b32d0(FUN_100aa8b30,auStack_30,*(undefined8 *)(unaff_x20 + 0x10),
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  return;
}



/* Address: 0x100aa8b30 | FUN_100aa8b30 */

void FUN_100aa8b30(undefined4 *param_1,undefined4 param_2)

{
  long unaff_x20;
  
  _symlinkat(param_2,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = param_2;
  return;
}



/* Address: 0x100aa8b64 | FUN_100aa8b64 */

void FUN_100aa8b64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7718(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100aa8b80 | FUN_100aa8b80 */

void FUN_100aa8b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined7 extraout_var;
  undefined *puVar8;
  undefined1 uVar9;
  long *unaff_x20;
  undefined4 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 auStack_f8 [18];
  undefined4 local_b0 [18];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puVar7;
  
  lVar12 = *unaff_x20;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa8d3c);
    (*pcVar3)();
  }
  uVar10 = *(undefined4 *)(lVar12 + 0x10);
  cVar2 = *(char *)(lVar12 + 0x14);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aa8d40);
    (*pcVar3)();
  }
  if (cVar2 == '\x01') {
    puVar1 = local_b0;
    puVar11 = local_b0;
    FUN_100aaee28(local_b0);
  }
  else {
    uVar6 = 0x100000000;
    FUN_1005ac4c0(0x100000000,1,uVar10);
    uVar10 = (undefined4)uVar6;
    if ((uVar6 & 0xff00000000) != 0x100000000) {
      uVar9 = 0;
      goto LAB_100aa8cf8;
    }
    puVar1 = auStack_f8;
    local_68 = CONCAT44(local_68._4_4_,uVar10);
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar7 = (undefined8 *)CONCAT71(extraout_var,bVar4);
    puVar13 = puVar7;
    if ((bVar4 & 1) != 0) {
      FUN_100a54208();
      puVar13 = &local_68;
      _swift_willThrowTypedImpl(puVar13,&DAT_100ee42f8,puVar7);
    }
    FUN_100a54208();
    puVar8 = &DAT_100ee42f8;
    _swift_allocError(&DAT_100ee42f8,puVar13,0,0);
    *(undefined4 *)puVar13 = uVar10;
    local_68 = 0x6163696c7075645f;
    uStack_60 = 0xec00000029286574;
    local_58 = 0xd000000000000025;
    uStack_50 = 0x8000000100db85f0;
    local_48 = 0x28f;
    puVar11 = auStack_f8;
    FUN_100a7e0f0(auStack_f8);
    _swift_errorRelease(puVar8);
  }
  puVar13 = (undefined8 *)((ulong)puVar1 | 4);
  uVar10 = *puVar11;
  uStack_118 = puVar13[5];
  local_120 = puVar13[4];
  uStack_108 = puVar13[7];
  uStack_110 = puVar13[6];
  local_100 = *(undefined4 *)(puVar13 + 8);
  uStack_138 = puVar13[1];
  local_140 = *puVar13;
  uStack_128 = puVar13[3];
  uStack_130 = puVar13[2];
  uVar9 = 1;
LAB_100aa8cf8:
  *param_1 = uVar10;
  *(undefined8 *)(param_1 + 7) = uStack_128;
  *(undefined8 *)(param_1 + 5) = uStack_130;
  *(undefined8 *)(param_1 + 0xb) = uStack_118;
  *(undefined8 *)(param_1 + 9) = local_120;
  *(undefined8 *)(param_1 + 0xf) = uStack_108;
  *(undefined8 *)(param_1 + 0xd) = uStack_110;
  param_1[0x11] = local_100;
  *(undefined8 *)(param_1 + 3) = uStack_138;
  *(undefined8 *)(param_1 + 1) = local_140;
  *(undefined1 *)(param_1 + 0x12) = uVar9;
  return;
}



/* Address: 0x100aa8d40 | FUN_100aa8d40 */

void FUN_100aa8d40(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = unaff_x20;
  _swift_task_switch(FUN_100aa8d58,0,0);
  return;
}



/* Address: 0x100aa8d58 | FUN_100aa8d58 */

void FUN_100aa8d58(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x109) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x101) = uVar4;
  puVar1 = &DAT_100f2f9f8;
  _swift_allocObject(&DAT_100f2f9f8,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
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
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5ba98;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a63e40,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100aa8e24 | FUN_100aa8e24 */

void FUN_100aa8e24(undefined2 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  _swift_task_switch(FUN_100aa8e40,0,0);
  return;
}



/* Address: 0x100aa8e40 | FUN_100aa8e40 */

void FUN_100aa8e40(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2fa20;
  _swift_allocObject(&DAT_100f2fa20,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa8f08 | FUN_100aa8f08 */

void FUN_100aa8f08(undefined2 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100aa8f24,0,0);
  return;
}



/* Address: 0x100aa8f24 | FUN_100aa8f24 */

void FUN_100aa8f24(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2fa48;
  _swift_allocObject(&DAT_100f2fa48,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5ca18;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100aab8cc,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100aa8ff0 | FUN_100aa8ff0 */

void FUN_100aa8ff0(undefined2 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  _swift_task_switch(FUN_100aa900c,0,0);
  return;
}



/* Address: 0x100aa900c | FUN_100aa900c */

void FUN_100aa900c(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2fa70;
  _swift_allocObject(&DAT_100f2fa70,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5d0a8;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100aabb0c,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100aa90d8 | FUN_100aa90d8 */

void FUN_100aa90d8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  _swift_task_switch(FUN_100aa90f0,0,0);
  return;
}



/* Address: 0x100aa90f0 | FUN_100aa90f0 */

void FUN_100aa90f0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar1 = &DAT_100f2fa98;
  _swift_allocObject(&DAT_100f2fa98,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100aa91c4;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100aabd40,puVar1,puVar3);
  return;
}



/* Address: 0x100aa91c4 | FUN_100aa91c4 */

void FUN_100aa91c4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a53494;
  }
  else {
    pcVar2 = FUN_1006c140c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aa9230 | FUN_100aa9230 */

void FUN_100aa9230(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100aa924c,0,0);
  return;
}



/* Address: 0x100aa924c | FUN_100aa924c */

void FUN_100aa924c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(lVar2 + 0x31);
  uVar7 = *(undefined8 *)(lVar2 + 0x29);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar7;
  puVar3 = &DAT_100f2fac0;
  _swift_allocObject(&DAT_100f2fac0,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a606a8;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100aac054,puVar3,puVar4);
  return;
}



/* Address: 0x100aa933c | FUN_100aa933c */

void FUN_100aa933c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(long *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  lVar2 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  _swift_task_switch(FUN_100aa93a4,0,0);
  return;
}



/* Address: 0x100aa93a4 | FUN_100aa93a4 */

void FUN_100aa93a4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x22;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar13 = *(undefined8 *)(lVar2 + 0x31);
  uVar12 = *(undefined8 *)(lVar2 + 0x29);
  uVar16 = *(undefined8 *)(lVar2 + 0x10);
  uVar15 = *(undefined8 *)(lVar2 + 0x28);
  uVar14 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar12;
  (**(code **)(lVar5 + 0x10))(uVar4,*(undefined8 *)(unaff_x22 + 0x70),uVar17);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar10 = uVar8 + 0x49 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = lVar1 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar7 = &DAT_100f2fae8;
  _swift_allocObject(&DAT_100f2fae8,uVar11 + 0x10,uVar8 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar7;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar7 + 0x18) = uVar18;
  *(undefined8 *)(puVar7 + 0x10) = uVar17;
  *(undefined8 *)(puVar7 + 0x28) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x38) = uVar15;
  *(undefined8 *)(puVar7 + 0x30) = uVar14;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x29);
  *(undefined8 *)(puVar7 + 0x41) = *(undefined8 *)(unaff_x22 + 0x31);
  *(undefined8 *)(puVar7 + 0x39) = uVar12;
  (**(code **)(lVar5 + 0x20))(puVar7 + uVar10,uVar4,uVar17);
  *(undefined8 *)(puVar7 + uVar11) = uVar3;
  *(undefined8 *)((long)(puVar7 + uVar11) + 8) = uVar6;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar9 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100aa94ec;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa94ec | FUN_100aa94ec */

void FUN_100aa94ec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100aa9558;
  }
  else {
    pcVar2 = FUN_100aa9594;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aa9558 | FUN_100aa9558 */

void FUN_100aa9558(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100aa9590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa9594 | FUN_100aa9594 */

void FUN_100aa9594(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100aa95cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aa95d0 | FUN_100aa95d0 */

void FUN_100aa95d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100aa95ec,0,0);
  return;
}



/* Address: 0x100aa95ec | FUN_100aa95ec */

void FUN_100aa95ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2fb10;
  _swift_allocObject(&DAT_100f2fb10,0x50,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a5eaf4;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa96c8 | FUN_100aa96c8 */

void FUN_100aa96c8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  _swift_task_switch(FUN_100aa96e0,0,0);
  return;
}



/* Address: 0x100aa96e0 | FUN_100aa96e0 */

void FUN_100aa96e0(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
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
  puVar1 = &DAT_100f2fb38;
  _swift_allocObject(&DAT_100f2fb38,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a4bc1c;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa97a0 | FUN_100aa97a0 */

void FUN_100aa97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100aa97c0,0,0);
  return;
}



/* Address: 0x100aa97c0 | FUN_100aa97c0 */

void FUN_100aa97c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar9 = *(undefined8 *)(lVar1 + 0x31);
  uVar6 = *(undefined8 *)(lVar1 + 0x29);
  uVar12 = *(undefined8 *)(lVar1 + 0x10);
  uVar11 = *(undefined8 *)(lVar1 + 0x28);
  uVar10 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar2 = &DAT_100f2fb60;
  _swift_allocObject(&DAT_100f2fb60,0x58,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  uVar10 = *(undefined8 *)(lVar1 + 0x18);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  uVar11 = *(undefined8 *)(lVar1 + 0x29);
  *(undefined8 *)(puVar2 + 0x39) = *(undefined8 *)(lVar1 + 0x31);
  *(undefined8 *)(puVar2 + 0x31) = uVar11;
  *(undefined8 *)(puVar2 + 0x20) = uVar10;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x50) = uVar8;
  *(undefined8 *)(puVar2 + 0x48) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100aa98b0;
  FUN_100912dec(plVar4,*(undefined8 *)(unaff_x22 + 0x70),FUN_100aacb14,puVar2,
                *(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x100aa98b0 | FUN_100aa98b0 */

void FUN_100aa98b0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x98);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa0));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100aa98f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100aa98fc | FUN_100aa98fc */

undefined4 FUN_100aa98fc(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined4 local_24;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa9970);
    (*pcVar1)();
  }
  FUN_100aacc54(&local_24,lVar3 + 0x10);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa9978);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100aa9974);
      (*pcVar1)();
    }
    local_24 = 0;
  }
  return local_24;
}



/* Address: 0x100aa9978 | FUN_100aa9978 */

void FUN_100aa9978(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  _swift_task_switch(FUN_100aa9990,0,0);
  return;
}



/* Address: 0x100aa9990 | FUN_100aa9990 */

void FUN_100aa9990(void)

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
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
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
  puVar1 = &DAT_100f2fb88;
  _swift_allocObject(&DAT_100f2fb88,0x39,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
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
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa9a50 | FUN_100aa9a50 */

void FUN_100aa9a50(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x3a) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined1 *)(unaff_x22 + 0x39) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_task_switch(FUN_100aa9a78,0,0);
  return;
}



/* Address: 0x100aa9a78 | FUN_100aa9a78 */

void FUN_100aa9a78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(lVar3 + 0x31);
  uVar10 = *(undefined8 *)(lVar3 + 0x29);
  uVar14 = *(undefined8 *)(lVar3 + 0x10);
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar10;
  puVar7 = &DAT_100f2fbb0;
  _swift_allocObject(&DAT_100f2fbb0,0x69,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar7;
  uVar13 = *(undefined8 *)(lVar3 + 0x18);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  uVar14 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar7 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar7 + 0x29) = uVar14;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar11;
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  *(undefined8 *)(puVar7 + 0x40) = uVar9;
  *(undefined8 *)(puVar7 + 0x48) = uVar2;
  puVar7[0x50] = uVar6;
  *(undefined8 *)(puVar7 + 0x58) = uVar4;
  *(undefined8 *)(puVar7 + 0x60) = uVar1;
  puVar7[0x68] = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a5ffbc;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa9b70 | FUN_100aa9b70 */

void FUN_100aa9b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  _swift_task_switch(FUN_100aa9b8c,0,0);
  return;
}



/* Address: 0x100aa9b8c | FUN_100aa9b8c */

void FUN_100aa9b8c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar6 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar6;
  puVar3 = &DAT_100f2fbd8;
  _swift_allocObject(&DAT_100f2fbd8,0x50,7);
  *(undefined **)(unaff_x22 + 0xa0) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a60e48;
  FUN_100912dec(plVar4,unaff_x22 + 0x70,FUN_100a63f88,puVar3,&DAT_100eeaaa8);
  return;
}



/* Address: 0x100aa9c60 | FUN_100aa9c60 */

void FUN_100aa9c60(void)

{
  _swift_retain();
  FUN_100a5a8dc();
  return;
}



/* Address: 0x100aa9ca0 | FUN_100aa9ca0 */

void FUN_100aa9ca0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(long *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  _swift_task_switch(FUN_100aa9d08,0,0);
  return;
}



/* Address: 0x100aa9d08 | FUN_100aa9d08 */

void FUN_100aa9d08(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x22;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar12 = *(undefined8 *)(lVar2 + 0x31);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  uVar15 = *(undefined8 *)(lVar2 + 0x10);
  uVar14 = *(undefined8 *)(lVar2 + 0x28);
  uVar13 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar11;
  (**(code **)(lVar4 + 0x10))(uVar3,*(undefined8 *)(unaff_x22 + 0x78),uVar16);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar9 = uVar8 + 0x49 & (uVar8 ^ 0xffffffffffffffff);
  uVar10 = lVar1 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100f2fc00;
  _swift_allocObject(&DAT_100f2fc00,uVar10 + 8,uVar8 | 7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar6;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar6 + 0x18) = uVar17;
  *(undefined8 *)(puVar6 + 0x10) = uVar16;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x38) = uVar14;
  *(undefined8 *)(puVar6 + 0x30) = uVar13;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x29);
  *(undefined8 *)(puVar6 + 0x41) = *(undefined8 *)(unaff_x22 + 0x31);
  *(undefined8 *)(puVar6 + 0x39) = uVar11;
  (**(code **)(lVar4 + 0x20))(puVar6 + uVar9,uVar3,uVar16);
  *(undefined8 *)(puVar6 + uVar10) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar7 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100aa9e40;
  FUN_100912dec(plVar7,unaff_x22 + 0x70,FUN_100ab2068,puVar6,
                PTR___type_metadata_for_Swift_Int64_100eadc00);
  return;
}



/* Address: 0x100aa9e40 | FUN_100aa9e40 */

void FUN_100aa9e40(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100aa9eac;
  }
  else {
    pcVar2 = FUN_100aa9594;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aa9eac | FUN_100aa9eac */

void FUN_100aa9eac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000100aa9eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Address: 0x100aa9ef0 | FUN_100aa9ef0 */

void FUN_100aa9ef0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  _swift_task_switch(FUN_100aa9f08,0,0);
  return;
}



/* Address: 0x100aa9f08 | FUN_100aa9f08 */

void FUN_100aa9f08(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(lVar2 + 0x31);
  uVar5 = *(undefined8 *)(lVar2 + 0x29);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar3 = &DAT_100f2fc28;
  _swift_allocObject(&DAT_100f2fc28,0x48,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar3;
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar9;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x40) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a619c0;
  FUN_100912dec();
  return;
}



/* Address: 0x100aa9fcc | FUN_100aa9fcc */

void FUN_100aa9fcc(undefined1 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x39) = param_1;
  _swift_task_switch(FUN_100aa9fe8,0,0);
  return;
}



/* Address: 0x100aa9fe8 | FUN_100aa9fe8 */

void FUN_100aa9fe8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x39);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f2fc50;
  _swift_allocObject(&DAT_100f2fc50,0x3a,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  puVar2[0x39] = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aaa0b0 | FUN_100aaa0b0 */

void FUN_100aaa0b0(void)

{
  _swift_retain();
  FUN_100a578f0();
  return;
}



/* Address: 0x100aaa0d8 | FUN_100aaa0d8 */

void FUN_100aaa0d8(undefined8 param_1,undefined2 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3a) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  _swift_task_switch(FUN_100aaa0f4,0,0);
  return;
}



/* Address: 0x100aaa0f4 | FUN_100aaa0f4 */

void FUN_100aaa0f4(void)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(ushort *)(unaff_x22 + 0x3a);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar6 = 0;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0x100;
  }
  uVar9 = *(undefined8 *)(lVar2 + 0x31);
  uVar8 = *(undefined8 *)(lVar2 + 0x29);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  uVar11 = *(undefined8 *)(lVar2 + 0x28);
  uVar10 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar8;
  puVar4 = &DAT_100f2fc78;
  _swift_allocObject(&DAT_100f2fc78,0x4c,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  uVar11 = *(undefined8 *)(lVar2 + 0x18);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  uVar12 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar4 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar4 + 0x29) = uVar12;
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + 0x40) = uVar1;
  *(uint *)(puVar4 + 0x48) = uVar6 | ((byte)(uVar3 >> 8) & 1) << 0x18 | 4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar7 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  puVar5 = &DAT_100ff6ce0;
  FUN_1000f7830(&DAT_100ff6ce0,&DAT_100c912e8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100aaa200;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab20b4,puVar4,puVar5);
  return;
}



/* Address: 0x100aaa200 | FUN_100aaa200 */

void FUN_100aaa200(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a53494;
  }
  else {
    pcVar2 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aaa26c | FUN_100aaa26c */

void FUN_100aaa26c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100aaa288,0,0);
  return;
}


