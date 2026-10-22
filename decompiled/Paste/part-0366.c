/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10047f080 | FUN_10047f080 */

void FUN_10047f080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10047d5e0(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x10047f108 | FUN_10047f108 */

void FUN_10047f108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10047d67c(plVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x10047f188 | FUN_10047f188 */

void FUN_10047f188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047d754(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x10047f210 | FUN_10047f210 */

void FUN_10047f210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10047d830(plVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x10047f290 | FUN_10047f290 */

void FUN_10047f290(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10047f2c4 | FUN_10047f2c4 */

void FUN_10047f2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar3 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047d8a4(plVar3,param_1,param_2,param_3,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10047f35c | FUN_10047f35c */

void FUN_10047f35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10047d984(plVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x10047f3dc | FUN_10047f3dc */

undefined * FUN_10047f3dc(void)

{
  char *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  _DictionaryStorage *this;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong local_180;
  ulong uStack_178;
  undefined1 auStack_170 [64];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined *local_c0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined *local_78;
  undefined *local_70;
  
  if (DAT_100fc9540 != -1) {
    _swift_once(&DAT_100fc9540,FUN_10048fbd8);
  }
  lVar17 = DAT_101057ad8;
  uVar4 = DAT_101057ad0;
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (DAT_101057ad8 == 0) {
    uVar19 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar9 = &DAT_100fc8ae8;
    FUN_1000037f0(&DAT_100fc8ae8,&DAT_100c4d648);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 4;
    *(undefined8 *)(puVar9 + 0x10) = 2;
    puVar10 = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
    puVar20 = puVar10;
    _swift_initStaticObject();
    *(undefined8 *)(puVar9 + 0x20) = uVar4;
    *(long *)(puVar9 + 0x28) = lVar17;
    pcVar1 = puVar9 + 0x30;
    *(undefined8 *)(puVar9 + 0x38) = 0xe900000000000067;
    pcVar1[0] = 'i';
    pcVar1[1] = 'm';
    pcVar1[2] = 'a';
    pcVar1[3] = 'g';
    pcVar1[4] = 'e';
    pcVar1[5] = '/';
    pcVar1[6] = 'p';
    pcVar1[7] = 'n';
    *(undefined **)(puVar9 + 0x40) = puVar20;
    puVar9[0x48] = 0;
    _swift_initStaticObject(puVar10,&DAT_100fc8b30);
    *(undefined8 *)(puVar9 + 0x50) = uVar4;
    *(long *)(puVar9 + 0x58) = lVar17;
    pcVar1 = puVar9 + 0x60;
    *(undefined8 *)(puVar9 + 0x68) = 0xe900000000000067;
    pcVar1[0] = 'i';
    pcVar1[1] = 'm';
    pcVar1[2] = 'a';
    pcVar1[3] = 'g';
    pcVar1[4] = 'e';
    pcVar1[5] = '/';
    pcVar1[6] = 'p';
    pcVar1[7] = 'n';
    *(undefined **)(puVar9 + 0x70) = puVar10;
    puVar9[0x78] = 1;
    uVar19 = *(ulong *)(puVar9 + 0x10);
  }
  if (uVar19 == 0) {
    _swift_bridgeObjectRetain_n(lVar17,2);
    _swift_bridgeObjectRelease(puVar9);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_70 = puVar18;
    _swift_bridgeObjectRetain_n(lVar17,2);
    FUN_10046adb0(0,uVar19,0);
    puVar18 = local_70;
    this = (_DictionaryStorage *)&DAT_100fc7d70;
    FUN_1000037f0(&DAT_100fc7d70,&DAT_100c4c738);
    lVar17 = 0;
    uVar16 = 0;
    do {
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      if (*(ulong *)(puVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10047f978);
        (*pcVar8)();
      }
      uStack_120 = *(undefined8 *)(puVar9 + lVar17 + 0x20);
      uVar4 = *(undefined8 *)(puVar9 + lVar17 + 0x28);
      lVar5 = *(long *)(puVar9 + lVar17 + 0x38);
      puVar20 = *(undefined **)(puVar9 + lVar17 + 0x40);
      cVar6 = puVar9[lVar17 + 0x48];
      local_130 = 0x637273;
      local_128 = 0xe300000000000000;
      local_108 = PTR___type_metadata_for_Swift_String_100eac208;
      uStack_100 = 0x65707954656d696d;
      uStack_f0 = 0x6e702f6567616d69;
      if (lVar5 != 0) {
        uStack_f0 = *(undefined8 *)(puVar9 + lVar17 + 0x30);
      }
      local_e8 = -0x16ffffffffffff99;
      if (lVar5 != 0) {
        local_e8 = lVar5;
      }
      local_f8 = &DAT_e800000000000000;
      local_d8 = PTR___type_metadata_for_Swift_String_100eac208;
      uStack_d0 = 0x73657a6973;
      local_c8 = &DAT_e500000000000000;
      puVar11 = &DAT_100fc7eb8;
      local_118 = uVar4;
      FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
      puVar12 = puVar20;
      local_a8 = puVar11;
      if (puVar20 == (undefined *)0x0) {
        puVar12 = &DAT_100fc8330;
        FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
        _swift_initStaticObject();
      }
      local_a0 = 0x656d656874;
      puStack_88 = &DAT_e500000000000000;
      local_98 = &DAT_e500000000000000;
      if (cVar6 == '\x01') {
        puStack_88 = &DAT_e400000000000000;
        local_90 = 0x6b726164;
      }
      else if (cVar6 == '\x02') {
        local_90 = 0x746867696c;
      }
      else {
        local_90 = 0x746867696c;
      }
      local_78 = puVar10;
      lVar13 = 4;
      local_c0 = puVar12;
      Swift::_DictionaryStorage::_allocate(this,4);
      _swift_bridgeObjectRetain(lVar5);
      _swift_retain(lVar13);
      _swift_bridgeObjectRetain(puVar20);
      _swift_bridgeObjectRetain(uVar4);
      FUN_100011090(&local_130,&local_180,&DAT_100fc7d78,&DAT_100c4c740);
      uVar7 = uStack_178;
      uVar3 = local_180;
      uVar14 = local_180;
      uVar15 = uStack_178;
      FUN_10046483c();
      if ((uVar15 & 1) != 0) {
LAB_10047f96c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10047f970);
        (*pcVar8)();
      }
      lVar5 = lVar13 + 0x40;
      uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar5 + uVar15) = *(ulong *)(lVar5 + uVar15) | 1L << (uVar14 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar14 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar7;
      FUN_100011080(auStack_170,*(long *)(lVar13 + 0x38) + uVar14 * 0x20);
      if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_10047f970:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10047f974);
        (*pcVar8)();
      }
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      FUN_100011090(&uStack_100,&local_180,&DAT_100fc7d78,&DAT_100c4c740);
      uVar7 = uStack_178;
      uVar3 = local_180;
      uVar14 = local_180;
      uVar15 = uStack_178;
      FUN_10046483c();
      if ((uVar15 & 1) != 0) goto LAB_10047f96c;
      uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar5 + uVar15) = *(ulong *)(lVar5 + uVar15) | 1L << (uVar14 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar14 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar7;
      FUN_100011080(auStack_170,*(long *)(lVar13 + 0x38) + uVar14 * 0x20);
      if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_10047f970;
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      FUN_100011090(&uStack_d0,&local_180,&DAT_100fc7d78,&DAT_100c4c740);
      uVar7 = uStack_178;
      uVar3 = local_180;
      uVar14 = local_180;
      uVar15 = uStack_178;
      FUN_10046483c();
      if ((uVar15 & 1) != 0) goto LAB_10047f96c;
      uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar5 + uVar15) = *(ulong *)(lVar5 + uVar15) | 1L << (uVar14 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar14 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar7;
      FUN_100011080(auStack_170,*(long *)(lVar13 + 0x38) + uVar14 * 0x20);
      if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_10047f970;
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      FUN_100011090(&local_a0,&local_180,&DAT_100fc7d78,&DAT_100c4c740);
      uVar7 = uStack_178;
      uVar3 = local_180;
      uVar14 = local_180;
      uVar15 = uStack_178;
      FUN_10046483c();
      if ((uVar15 & 1) != 0) goto LAB_10047f96c;
      uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar5 + uVar15) = *(ulong *)(lVar5 + uVar15) | 1L << (uVar14 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar14 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar7;
      FUN_100011080(auStack_170,*(long *)(lVar13 + 0x38) + uVar14 * 0x20);
      if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_10047f970;
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      _swift_release(lVar13);
      puVar10 = &DAT_100fc7d78;
      FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
      _swift_arrayDestroy(&local_130,4,puVar10);
      uVar3 = *(ulong *)(puVar18 + 0x10);
      local_70 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar3) {
        FUN_10046adb0(1 < *(ulong *)(puVar18 + 0x18),uVar3 + 1,1);
      }
      puVar18 = local_70;
      uVar16 = uVar16 + 1;
      *(ulong *)(local_70 + 0x10) = uVar3 + 1;
      *(long *)(local_70 + uVar3 * 8 + 0x20) = lVar13;
      lVar17 = lVar17 + 0x30;
    } while (uVar19 != uVar16);
    _swift_bridgeObjectRelease(puVar9);
  }
  return puVar18;
}



/* Address: 0x10047f990 | FUN_10047f990 */

undefined * FUN_10047f990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 0xc;
  *(undefined8 *)(puVar1 + 0x10) = 6;
  *(undefined8 *)(puVar1 + 0x20) = 0x656d616e;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(puVar1 + 0x30) = 0x6574736170;
  *(undefined1 **)(puVar1 + 0x38) = &DAT_e500000000000000;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined8 *)(puVar1 + 0x50) = 0x656c746974;
  *(undefined1 **)(puVar1 + 0x58) = &DAT_e500000000000000;
  *(undefined8 *)(puVar1 + 0x60) = 0x6574736150;
  *(undefined1 **)(puVar1 + 0x68) = &DAT_e500000000000000;
  *(undefined **)(puVar1 + 0x78) = puVar3;
  *(undefined8 *)(puVar1 + 0x80) = 0x6e6f6973726576;
  *(undefined1 **)(puVar1 + 0x88) = &DAT_e700000000000000;
  *(undefined8 *)(puVar1 + 0x90) = 0x302e302e31;
  *(undefined1 **)(puVar1 + 0x98) = &DAT_e500000000000000;
  *(undefined **)(puVar1 + 0xa8) = puVar3;
  *(undefined8 *)(puVar1 + 0xb0) = 0x7470697263736564;
  *(undefined1 **)(puVar1 + 0xb8) = &DAT_eb000000006e6f69;
  *(undefined8 *)(puVar1 + 0xc0) = 0xd000000000000050;
  *(undefined8 *)(puVar1 + 200) = 0x8000000100da6f10;
  *(undefined **)(puVar1 + 0xd8) = puVar3;
  *(undefined8 *)(puVar1 + 0xe0) = 0x5565746973626577;
  *(undefined8 *)(puVar1 + 0xe8) = 0xea00000000006c72;
  *(undefined8 *)(puVar1 + 0xf0) = 0xd000000000000013;
  *(undefined8 *)(puVar1 + 0xf8) = 0x8000000100d97f30;
  *(undefined **)(puVar1 + 0x108) = puVar3;
  *(undefined8 *)(puVar1 + 0x110) = 0x736e6f6369;
  *(undefined1 **)(puVar1 + 0x118) = &DAT_e500000000000000;
  puVar2 = puVar1;
  FUN_10047f3dc();
  puVar3 = &DAT_100fc8aa8;
  FUN_1000037f0(&DAT_100fc8aa8,&DAT_100c4d640);
  *(undefined **)(puVar1 + 0x138) = puVar3;
  *(undefined **)(puVar1 + 0x120) = puVar2;
  puVar2 = puVar1;
  FUN_10045a404(puVar1);
  _swift_setDeallocating(puVar1);
  puVar3 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar1 + 0x20,6,puVar3);
  return puVar2;
}



/* Address: 0x10047fb4c | FUN_10047fb4c */

undefined * FUN_10047fb4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 8;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  *(undefined8 *)(puVar2 + 0x20) = 0x6c6f636f746f7270;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar2 + 0x28) = 0xef6e6f6973726556;
  *(undefined8 *)(puVar2 + 0x30) = 0x2d31312d35323032;
  *(undefined8 *)(puVar2 + 0x38) = 0xea00000000003532;
  *(undefined **)(puVar2 + 0x48) = puVar1;
  *(undefined8 *)(puVar2 + 0x50) = 0x696c696261706163;
  *(undefined8 *)(puVar2 + 0x58) = 0xec00000073656974;
  puVar3 = &DAT_100fc8b60;
  FUN_1000037f0(&DAT_100fc8b60,&DAT_100c4d650);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x736c6f6f74;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e500000000000000;
  puVar4 = &DAT_100fc8ba8;
  FUN_1000037f0(&DAT_100fc8ba8,&DAT_100c4d658);
  _swift_initStaticObject();
  puVar5 = puVar4;
  FUN_10045ade8();
  FUN_100005808(puVar4 + 0x20,&DAT_100fc8bb0,&DAT_100c4d660);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  puVar4 = puVar3;
  FUN_10045aedc();
  _swift_setDeallocating(puVar3);
  FUN_100005808(puVar3 + 0x20,&DAT_100fc8bb8,&DAT_100c4d668);
  puVar3 = &DAT_100fc8bc0;
  FUN_1000037f0(&DAT_100fc8bc0,&DAT_100c4d670);
  *(undefined **)(puVar2 + 0x60) = puVar4;
  *(undefined **)(puVar2 + 0x78) = puVar3;
  *(undefined8 *)(puVar2 + 0x80) = 0x6e49726576726573;
  *(undefined8 *)(puVar2 + 0x88) = 0xea00000000006f66;
  FUN_10047f990();
  puVar4 = &DAT_100fc8340;
  FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
  *(undefined **)(puVar2 + 0x90) = puVar3;
  *(undefined **)(puVar2 + 0xa8) = puVar4;
  *(undefined8 *)(puVar2 + 0xb0) = 0x7463757274736e69;
  *(undefined **)(puVar2 + 0xd8) = puVar1;
  *(undefined8 *)(puVar2 + 0xb8) = 0xec000000736e6f69;
  *(undefined8 *)(puVar2 + 0xc0) = 0xd000000000000098;
  *(undefined8 *)(puVar2 + 200) = 0x8000000100da6e00;
  puVar4 = puVar2;
  FUN_10045a404(puVar2);
  _swift_setDeallocating(puVar2);
  puVar3 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar2 + 0x20,4,puVar3);
  return puVar4;
}



/* Address: 0x10047fdb8 | FUN_10047fdb8 */

undefined8 FUN_10047fdb8(undefined8 param_1)

{
  FUN_10048677c();
  return param_1;
}



/* Address: 0x10047fdec | FUN_10047fdec */

void FUN_10047fdec(void)

{
  undefined *puVar1;
  
  if (DAT_100fc8a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4dcb4;
  _swift_getWitnessTable(&DAT_100c4dcb4,&DAT_100ed75a0);
  DAT_100fc8a98 = puVar1;
  return;
}



/* Address: 0x10047fe2c | FUN_10047fe2c */

void FUN_10047fe2c(void)

{
  undefined *puVar1;
  
  if (DAT_100fc8aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4dc8c;
  _swift_getWitnessTable(&DAT_100c4dc8c,&DAT_100ed7520);
  DAT_100fc8aa0 = puVar1;
  return;
}



/* Address: 0x10047fe6c | FUN_10047fe6c */

void FUN_10047fe6c(void)

{
  FUN_10047ff24(PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x10047fe78 | FUN_10047fe78 */

void FUN_10047fe78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047becc(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x10047fee4 | FUN_10047fee4 */

void FUN_10047fee4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60738;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60738,&DAT_100ee3b40);
  DAT_100fc8bc8 = pTVar1;
  return;
}



/* Address: 0x10047ff24 | FUN_10047ff24 */

void FUN_10047ff24(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10047ff54 | FUN_10047ff54 */

void FUN_10047ff54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047c034(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x10047ffc0 | FUN_10047ffc0 */

void FUN_10047ffc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8bd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c608c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c608c4,&DAT_100ee3c68);
  DAT_100fc8bd0 = pTVar1;
  return;
}



/* Address: 0x100480000 | FUN_100480000 */

void FUN_100480000(void)

{
  UUID UVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar5 + 0x40);
  puVar2 = &DAT_100fc7d28;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  lVar7 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,UVar1.unknown);
  (**(code **)(lVar7 + 8))
            (unaff_x20 + (uVar6 + lVar3 + uVar4 & (uVar4 ^ 0xffffffffffffffff)),puVar2);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004800c8 | FUN_1004800c8 */

void FUN_1004800c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UUID UVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  uVar8 = (ulong)*(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  uVar8 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(UVar4.unknown + -8) + 0x40);
  puVar5 = &DAT_100fc7d28;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  bVar3 = *(byte *)(*(long *)(puVar5 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_100008284;
  FUN_100478b64(plVar6,param_1,uVar1,uVar2,uVar9,unaff_x20 + uVar8,
                unaff_x20 + (uVar8 + lVar7 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100480190 | FUN_100480190 */

void FUN_100480190(void)

{
  UUID UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004801fc | FUN_1004801fc */

void FUN_1004801fc(undefined8 param_1)

{
  UUID UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  FUN_100478dc8(param_1,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10048023c | FUN_10048023c */

void FUN_10048023c(void)

{
  UUID UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004802b0 | FUN_1004802b0 */

void FUN_1004802b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UUID UVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  bVar3 = *(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_100478f18(plVar5,param_1,uVar1,uVar2,uVar6,
                unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100480340 | FUN_100480340 */

void FUN_100480340(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100480364 | FUN_100480364 */

void FUN_100480364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1004803d4 | thunk_FUN_1004598b4 */

void thunk_FUN_1004598b4(void)

{
  FUN_1004598b4();
  return;
}



/* Address: 0x1004803d8 | thunk_FUN_100459924 */

void thunk_FUN_100459924(void)

{
  FUN_100459924();
  return;
}



/* Address: 0x1004803dc | thunk_FUN_100459994 */

void thunk_FUN_100459994(void)

{
  FUN_100459994();
  return;
}



/* Address: 0x1004803e0 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1004803e4 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x1004803e8 | FUN_1004803e8 */

void FUN_1004803e8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002d5f54();
  *param_1 = param_2;
  return;
}



/* Address: 0x10048040c | FUN_10048040c */

void FUN_10048040c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fa10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fa10,&DAT_100ed9238);
  DAT_100fc8c00 = pTVar1;
  return;
}



/* Address: 0x10048044c | FUN_10048044c */

void FUN_10048044c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f370,&DAT_100ed8b60);
  DAT_100fc8c08 = pTVar1;
  return;
}



/* Address: 0x10048048c | FUN_10048048c */

void FUN_10048048c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e2e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e2e8,&DAT_100ed7ab8);
  DAT_100fc8c10 = pTVar1;
  return;
}



/* Address: 0x1004804cc | FUN_1004804cc */

void FUN_1004804cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fdf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fdf0,&DAT_100ed95e0);
  DAT_100fc8c18 = pTVar1;
  return;
}



/* Address: 0x10048050c | FUN_10048050c */

void FUN_10048050c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e630,&DAT_100ed7e68);
  DAT_100fc8c20 = pTVar1;
  return;
}



/* Address: 0x10048054c | FUN_10048054c */

void FUN_10048054c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ec30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ec30,&DAT_100ed8468);
  DAT_100fc8c28 = pTVar1;
  return;
}



/* Address: 0x10048058c | FUN_10048058c */

void FUN_10048058c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e480;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e480,&DAT_100ed7c90);
  DAT_100fc8c30 = pTVar1;
  return;
}



/* Address: 0x1004805cc | FUN_1004805cc */

void FUN_1004805cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f870,&DAT_100ed9060);
  DAT_100fc8c38 = pTVar1;
  return;
}



/* Address: 0x10048060c | FUN_10048060c */

void FUN_10048060c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e130,&DAT_100ed78e0);
  DAT_100fc8c40 = pTVar1;
  return;
}



/* Address: 0x10048064c | FUN_10048064c */

void FUN_10048064c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f6c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f6c8,&DAT_100ed8e88);
  DAT_100fc8c48 = pTVar1;
  return;
}



/* Address: 0x10048068c | FUN_10048068c */

void FUN_10048068c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e930,&DAT_100ed8168);
  DAT_100fc8c50 = pTVar1;
  return;
}



/* Address: 0x1004806cc | thunk_FUN_10047efd4 */

void thunk_FUN_10047efd4(void)

{
  FUN_10047efd4();
  return;
}



/* Address: 0x1004806d0 | thunk_FUN_100480340 */

void thunk_FUN_100480340(void)

{
  FUN_100480340();
  return;
}



/* Address: 0x1004806d4 | thunk_FUN_10047b548 */

void thunk_FUN_10047b548(void)

{
  FUN_10047b548();
  return;
}



/* Address: 0x1004806d8 | thunk_FUN_10047b9ac */

void thunk_FUN_10047b9ac(void)

{
  FUN_10047b9ac();
  return;
}



/* Address: 0x1004806dc | thunk_FUN_10047d6f0 */

void thunk_FUN_10047d6f0(void)

{
  FUN_10047d6f0();
  return;
}



/* Address: 0x1004806e0 | thunk_FUN_10047ef4c */

void thunk_FUN_10047ef4c(void)

{
  FUN_10047ef4c();
  return;
}



/* Address: 0x1004806e4 | thunk_FUN_10047fe6c */

void thunk_FUN_10047fe6c(void)

{
  FUN_10047fe6c();
  return;
}



/* Address: 0x1004806e8 | FUN_1004806e8 */

long FUN_1004806e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045a9a0();
  *(undefined **)(unaff_x20 + 0x70) = puVar1;
  FUN_10045ab2c();
  *(undefined **)(unaff_x20 + 0x78) = puVar2;
  return unaff_x20;
}



/* Address: 0x10048073c | FUN_10048073c */

void FUN_10048073c(void)

{
  FUN_100480774(FUN_10048113c);
  return;
}



/* Address: 0x100480748 | FUN_100480748 */

uint FUN_100480748(undefined8 param_1,undefined8 param_2)

{
  FUN_100481024(param_1,param_2,FUN_10048113c);
  return (uint)param_1 & 1;
}



/* Address: 0x100480768 | FUN_100480768 */

void FUN_100480768(void)

{
  FUN_100480774(FUN_100481150);
  return;
}



/* Address: 0x100480774 | FUN_100480774 */

void FUN_100480774(undefined8 param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  (*param_2)();
  iVar1 = *(int *)(lVar2 + 0x24);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004807c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x1004807c4 | FUN_1004807c4 */

uint FUN_1004807c4(undefined8 param_1,undefined8 param_2)

{
  FUN_100481024(param_1,param_2,FUN_100481150);
  return (uint)param_1 & 1;
}



/* Address: 0x1004807e4 | FUN_1004807e4 */

void FUN_1004807e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045a9a0();
  *(undefined **)(unaff_x20 + 0x70) = puVar1;
  FUN_10045ab2c();
  *(undefined **)(unaff_x20 + 0x78) = puVar2;
  return;
}



/* Address: 0x100480828 | FUN_100480828 */

void FUN_100480828(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  Date DVar3;
  Date DVar4;
  Date DVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fc8328;
  puVar6 = &DAT_100c4d800;
  local_b8 = param_3;
  local_b0 = param_9;
  local_a8 = param_7;
  local_a0 = param_2;
  local_98 = param_4;
  uStack_90 = param_6;
  local_88 = param_8;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_c0 + -extraout_x8;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  DVar4 = DVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  FUN_10045b79c();
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(puVar6);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  uVar1 = local_a8;
  _swift_bridgeObjectRetain(local_a8);
  Foundation::Date::init();
  DVar5.unknown = (undefined *)0x0;
  FUN_100481150();
  Foundation::Date::addingTimeInterval(300.0,DVar5);
  (**(code **)(lVar8 + 8))
            ((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
  *param_1 = DVar4.unknown;
  param_1[1] = puVar6;
  param_1[2] = local_a0;
  param_1[3] = local_b8;
  param_1[4] = local_98;
  param_1[5] = param_5;
  param_1[6] = uStack_90;
  param_1[7] = uVar1;
  param_1[8] = local_88;
  param_1[9] = local_b0;
  FUN_1000c495c(param_1,puVar7,FUN_100481150);
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(puVar7,0,1,DVar5.unknown);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0x21,0);
  FUN_1004609f8(puVar7,DVar4.unknown,puVar6);
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x100480a04 | FUN_100480a04 */

void FUN_100480a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  Date DVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_80 = param_1;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  DVar11.unknown = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fc8328;
  FUN_1000037f0(&DAT_100fc8328,&DAT_100c4d800);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)DVar11.unknown - extraout_x8_00;
  lVar5 = 0;
  FUN_100481150();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0x21,0);
  FUN_1004658ac(lVar13,param_2,param_3);
  _swift_endAccess(auStack_78);
  lVar6 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar5);
  uVar7 = local_80;
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar13,&DAT_100fc8328,&DAT_100c4d800);
    pcVar9 = *(code **)(lVar10 + 0x38);
    uVar7 = local_80;
  }
  else {
    pcVar9 = FUN_100481150;
    FUN_1000523d8(lVar13,lVar12);
    iVar1 = *(int *)(lVar5 + 0x24);
    Foundation::Date::init();
    bVar2 = Foundation::Date::<_infix((undefined *)(lVar12 + iVar1),DVar11,(Date)pcVar9);
    (**(code **)(lVar14 + 8))(DVar11.unknown,DVar3.unknown);
    if (!bVar2) {
      FUN_1000523d8(lVar12,uVar7,FUN_100481150);
      pcVar9 = *(code **)(lVar10 + 0x38);
      uVar8 = 0;
      goto LAB_100480bd4;
    }
    FUN_10005241c(lVar12,FUN_100481150);
    pcVar9 = *(code **)(lVar10 + 0x38);
  }
  uVar8 = 1;
LAB_100480bd4:
  (*pcVar9)(uVar7,uVar8,1,lVar5);
  return;
}



/* Address: 0x100480c00 | FUN_100480c00 */

void FUN_100480c00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Date DVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined1 auStack_78 [24];
  
  puVar5 = &DAT_100fc8320;
  puVar7 = &DAT_100c4cea8;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_c0 + -extraout_x8;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar6.unknown + -8);
  local_88 = DVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  FUN_10045b79c();
  uStack_90 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  local_98 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uStack_a0 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  local_a8 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  local_b8 = puVar7;
  puStack_b0 = DVar6.unknown;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(puVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  Foundation::Date::init();
  DVar6.unknown = (undefined *)0x0;
  FUN_10048113c();
  Foundation::Date::addingTimeInterval(600.0,DVar6);
  (**(code **)(lVar9 + 8))((long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_88);
  puVar7 = puStack_b0;
  puVar5 = local_b8;
  *param_1 = puStack_b0;
  param_1[1] = local_b8;
  param_1[2] = uStack_90;
  param_1[3] = uVar1;
  param_1[4] = local_98;
  param_1[5] = uVar2;
  param_1[6] = uStack_a0;
  param_1[7] = uVar3;
  param_1[8] = local_a8;
  param_1[9] = uVar4;
  FUN_1000c495c(param_1,puVar8,FUN_10048113c);
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(puVar8,0,1,DVar6.unknown);
  _swift_beginAccess(unaff_x20 + 0x78,auStack_78,0x21,0);
  FUN_100460bdc(puVar8,puVar7,puVar5);
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x100480dd0 | FUN_100480dd0 */

void FUN_100480dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  Date DVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_80 = param_1;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  DVar11.unknown = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fc8320;
  FUN_1000037f0(&DAT_100fc8320,&DAT_100c4cea8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)DVar11.unknown - extraout_x8_00;
  lVar5 = 0;
  FUN_10048113c();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x78,auStack_78,0x21,0);
  FUN_1004658c8(lVar13,param_2,param_3);
  _swift_endAccess(auStack_78);
  lVar6 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar5);
  uVar7 = local_80;
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar13,&DAT_100fc8320,&DAT_100c4cea8);
    pcVar9 = *(code **)(lVar10 + 0x38);
    uVar7 = local_80;
  }
  else {
    pcVar9 = FUN_10048113c;
    FUN_1000523d8(lVar13,lVar12);
    iVar1 = *(int *)(lVar5 + 0x24);
    Foundation::Date::init();
    bVar2 = Foundation::Date::<_infix((undefined *)(lVar12 + iVar1),DVar11,(Date)pcVar9);
    (**(code **)(lVar14 + 8))(DVar11.unknown,DVar3.unknown);
    if (!bVar2) {
      FUN_1000523d8(lVar12,uVar7,FUN_10048113c);
      pcVar9 = *(code **)(lVar10 + 0x38);
      uVar8 = 0;
      goto LAB_100480fa0;
    }
    FUN_10005241c(lVar12,FUN_10048113c);
    pcVar9 = *(code **)(lVar10 + 0x38);
  }
  uVar8 = 1;
LAB_100480fa0:
  (*pcVar9)(uVar7,uVar8,1,lVar5);
  return;
}



/* Address: 0x100480fcc | FUN_100480fcc */

void FUN_100480fcc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100480ff8 | FUN_100480ff8 */

void FUN_100480ff8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}


