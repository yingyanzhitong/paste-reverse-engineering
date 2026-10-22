/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008144dc | FUN_1008144dc */

void FUN_1008144dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100814590;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,0,uVar2);
  return;
}



/* Address: 0x100814590 | FUN_100814590 */

void FUN_100814590(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  uint local_94;
  undefined8 local_68;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar12 = param_1;
  uVar14 = param_2;
  uVar24 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar24;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar6 = puVar12;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    local_68 = 0;
    local_94 = 0;
    puVar22 = (undefined8 *)0x0;
    bVar4 = true;
    uVar20 = 1;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    uVar26 = *(undefined8 *)(lVar25 + 0x88);
    uVar21 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar6 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar26;
    param_1[1] = uVar21;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar26);
    _swift_bridgeObjectRetain(uVar21);
    FUN_1007fb2c4(puVar12,uVar14,uVar24,uVar15 >> 0x10);
    puVar22 = (undefined8 *)0x0;
    bVar4 = true;
    uVar20 = 1;
  }
  else if ((uVar24 & 0xff) == 0) {
    local_94 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar12,uVar14,uVar24);
    bVar4 = false;
    uVar20 = 0;
    puVar22 = (undefined8 *)0x0;
    local_68 = uVar14;
  }
  else {
    FUN_1000f4a4c(puVar12,uVar14,uVar24);
    puVar7 = puVar6;
    FUN_10080b43c();
    puVar22 = (undefined8 *)&DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar7,0,0);
    *(char *)puVar7 = (char)puVar6;
    *(undefined1 *)((long)puVar7 + 1) = 0;
    _swift_willThrow();
    _swift_errorRetain(puVar22);
    local_68 = 0;
    local_94 = 0;
    bVar4 = true;
    uVar20 = 1;
    puVar6 = puVar22;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar21 = *(undefined8 *)(lVar25 + 0x90);
  uVar26 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar21 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar13 = *(undefined8 *)(lVar25 + 0x28);
    lVar23 = *(long *)(lVar25 + 0x30);
    FUN_100004640();
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar21;
    *(undefined8 *)(puVar9 + 8) = uVar26;
    puVar9[0x18] = 0;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar17;
    uVar1 = 0;
    if (!bVar4) {
      uVar1 = (short)((local_94 & 1) << 8);
    }
    uVar26 = 0;
    if (!bVar4) {
      uVar26 = local_68;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined8 **)(puVar9 + iVar3) = puVar22;
    puVar7 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar7 = puVar6;
    puVar7[1] = uVar26;
    *(undefined2 *)(puVar7 + 2) = uVar1;
    *(bool *)((long)puVar7 + 0x12) = bVar4;
    pcVar19 = *(code **)(lVar23 + 8);
    _swift_errorRetain(puVar22);
    FUN_100813fa8(puVar6,local_68,local_94,uVar20);
    uVar24 = uVar24 & 0xffffffff;
    (*pcVar19)(puVar9,uVar13,lVar23);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar4 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar6;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) == 0) {
      FUN_1007fb2c4(puVar12,uVar14,uVar24,uVar24 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar6);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar12,uVar14,uVar24,uVar24 >> 0x10 & 0xffff);
      FUN_100813f90(puVar6,local_68,local_94,1);
    }
    _swift_errorRelease(puVar22);
                    /* WARNING: Could not recover jumptable at 0x000100814a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar12,uVar14,uVar24,uVar24 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar22);
                    /* WARNING: Could not recover jumptable at 0x0001008149d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))(puVar6,local_68);
  return;
}



/* Address: 0x100814a20 | FUN_100814a20 */

void FUN_100814a20(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100814ad4;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,1,uVar2);
  return;
}



/* Address: 0x100814ad4 | FUN_100814ad4 */

void FUN_100814ad4(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  code *pcVar22;
  long lVar23;
  undefined *puVar24;
  uint uVar25;
  undefined8 uVar26;
  
  lVar23 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar23 + 0xa0);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x98));
  puVar12 = param_1;
  uVar13 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar14 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar12;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    uVar25 = 0;
    bVar6 = true;
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 1) {
        bVar6 = false;
        puVar19 = (undefined *)0x0;
        uVar25 = uVar14 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar12,uVar13);
        puVar11 = puVar24;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar24;
        bVar6 = true;
        puVar11[1] = 1;
        _swift_willThrow();
        _swift_errorRetain(puVar19);
        uVar25 = 0;
        puVar24 = puVar19;
      }
      goto LAB_100814bc8;
    }
    puVar24 = (undefined *)0x0;
    bVar6 = false;
    uVar25 = 2;
  }
  puVar19 = (undefined *)0x0;
LAB_100814bc8:
  FUN_10080b3ec(*(long *)(lVar23 + 0x80) + 0x18,lVar23 + 0x38);
  uVar20 = *(undefined8 *)(lVar23 + 0x90);
  uVar26 = *(undefined8 *)(lVar23 + 0x88);
  if (*(long *)(lVar23 + 0x50) == 0) {
    uVar20 = *(undefined8 *)(lVar23 + 0x90);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar20);
    FUN_10080a674(lVar23 + 0x38);
  }
  else {
    puVar11 = *(undefined **)(lVar23 + 0x70);
    uVar3 = *(undefined8 *)(lVar23 + 0x78);
    uVar21 = *(undefined8 *)(lVar23 + 0x68);
    FUN_100076508(lVar23 + 0x38,lVar23 + 0x10);
    uVar2 = *(undefined8 *)(lVar23 + 0x28);
    lVar4 = *(long *)(lVar23 + 0x30);
    FUN_100004640();
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar20;
    *(undefined8 *)(puVar9 + 8) = uVar26;
    puVar9[0x18] = 1;
    *(undefined8 *)(puVar9 + 0x20) = uVar21;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    puVar11 = puVar24;
    if (bVar6) {
      _swift_errorRetain(puVar24);
      uVar17 = 0;
      uVar15 = 1;
    }
    else {
      if (uVar25 == 2) {
        uVar17 = 0x200;
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar17 = (ushort)(uVar25 << 8) | 1;
      }
      uVar15 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined **)(puVar9 + iVar5) = puVar19;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar11;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar17;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar15;
    pcVar22 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar19);
    (*pcVar22)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar23 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar23 + 0x60) = puVar24;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar23 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
      FUN_10080d5a4(puVar24,uVar25,1);
    }
    _swift_errorRelease(puVar19);
                    /* WARNING: Could not recover jumptable at 0x000100814eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
  _swift_errorRelease(puVar19);
  puVar12 = (undefined *)0x0;
  if (uVar25 != 2) {
    puVar12 = puVar24;
  }
                    /* WARNING: Could not recover jumptable at 0x000100814d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))(puVar12,uVar25 == 2);
  return;
}



/* Address: 0x100814f14 | FUN_100814f14 */

void FUN_100814f14(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100814fcc;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,1,uVar2);
  return;
}



/* Address: 0x100814fcc | FUN_100814fcc */

void FUN_100814fcc(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x22;
  code *pcVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  uint local_94;
  
  lVar22 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar22 + 0xa8);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar22 + 0xa0));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar24 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar24;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar23 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    local_94 = 0;
    bVar6 = true;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 1) {
        bVar6 = false;
        local_94 = uVar15 >> 8 & 1;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar13;
        FUN_1000f4a4c(puVar13,uVar14);
        puVar12 = puVar11;
        FUN_10080b43c();
        puVar23 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar12,0,0);
        *puVar12 = (char)puVar11;
        bVar6 = true;
        puVar12[1] = 1;
        _swift_willThrow();
        _swift_errorRetain(puVar23);
        local_94 = 0;
        puVar11 = puVar23;
      }
      goto LAB_1008150bc;
    }
    bVar6 = false;
    local_94 = (uint)*(byte *)(lVar22 + 0xa8);
    puVar23 = *(undefined **)(lVar22 + 0x68);
  }
  puVar11 = (undefined *)0x0;
LAB_1008150bc:
  FUN_10080b3ec(*(long *)(lVar22 + 0x88) + 0x18,lVar22 + 0x38);
  uVar20 = *(undefined8 *)(lVar22 + 0x98);
  uVar24 = *(undefined8 *)(lVar22 + 0x90);
  if (*(long *)(lVar22 + 0x50) == 0) {
    uVar20 = *(undefined8 *)(lVar22 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(uVar20);
    FUN_10080a674(lVar22 + 0x38);
  }
  else {
    puVar12 = *(undefined **)(lVar22 + 0x78);
    uVar3 = *(undefined8 *)(lVar22 + 0x80);
    uVar19 = *(undefined8 *)(lVar22 + 0x70);
    FUN_100076508(lVar22 + 0x38,lVar22 + 0x10);
    uVar2 = *(undefined8 *)(lVar22 + 0x28);
    lVar4 = *(long *)(lVar22 + 0x30);
    FUN_100004640(lVar22 + 0x10,uVar2);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar20;
    *(undefined8 *)(puVar9 + 8) = uVar24;
    puVar9[0x18] = 1;
    *(undefined8 *)(puVar9 + 0x20) = uVar19;
    *(undefined **)(puVar9 + 0x28) = puVar12;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    if (!bVar6) {
      uVar17 = (ushort)(local_94 << 8) | 1;
    }
    else {
      _swift_errorRetain(puVar23);
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined **)(puVar9 + iVar5) = puVar11;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar23;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar17;
    *(bool *)((long)puVar1 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar11);
    (*pcVar21)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar22 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar22 + 0x60) = puVar23;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar23);
      puVar12 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar22 + 0x60,puVar12,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
      FUN_10080d5a4(puVar23,local_94,1);
    }
    _swift_errorRelease(puVar11);
                    /* WARNING: Could not recover jumptable at 0x000100815380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar11);
                    /* WARNING: Could not recover jumptable at 0x000100815208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))(puVar23);
  return;
}



/* Address: 0x1008153dc | FUN_1008153dc */

void FUN_1008153dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100815490;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,1,uVar2);
  return;
}



/* Address: 0x100815490 | FUN_100815490 */

void FUN_100815490(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined1 *puVar8;
  Date DVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ushort uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  code *pcVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  uint local_94;
  
  lVar23 = *unaff_x22;
  uVar19 = (ulong)*(byte *)(lVar23 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x98));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar24 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar24;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar13 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    local_94 = 0;
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      if ((uVar16 & 0xff) == 1) {
        bVar5 = false;
        local_94 = uVar16 >> 8 & 1;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = puVar14;
        FUN_1000f4a4c(puVar14,uVar15,uVar24);
        puVar12 = puVar11;
        FUN_10080b43c();
        puVar13 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar12,0,0);
        *(char *)puVar12 = (char)puVar11;
        bVar5 = true;
        *(undefined1 *)((long)puVar12 + 1) = 1;
        _swift_willThrow();
        _swift_errorRetain(puVar13);
        local_94 = 0;
        puVar11 = puVar13;
      }
      goto LAB_1008155c0;
    }
    uVar25 = *(undefined8 *)(lVar23 + 0x88);
    uVar21 = *(undefined8 *)(lVar23 + 0x90);
    FUN_10080a3bc();
    puVar13 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar25;
    param_1[1] = uVar21;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar21);
  }
  bVar5 = true;
  puVar11 = (undefined8 *)0x0;
LAB_1008155c0:
  FUN_10080b3ec(*(long *)(lVar23 + 0x80) + 0x18,lVar23 + 0x38);
  uVar21 = *(undefined8 *)(lVar23 + 0x90);
  uVar25 = *(undefined8 *)(lVar23 + 0x88);
  if (*(long *)(lVar23 + 0x50) == 0) {
    uVar21 = *(undefined8 *)(lVar23 + 0x90);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10080a674(lVar23 + 0x38);
  }
  else {
    puVar10 = *(undefined **)(lVar23 + 0x70);
    uVar2 = *(undefined8 *)(lVar23 + 0x78);
    uVar20 = *(undefined8 *)(lVar23 + 0x68);
    FUN_100076508(lVar23 + 0x38,lVar23 + 0x10);
    uVar1 = *(undefined8 *)(lVar23 + 0x28);
    lVar3 = *(long *)(lVar23 + 0x30);
    FUN_100004640(lVar23 + 0x10,uVar1);
    lVar7 = 0;
    FUN_1007fb264();
    puVar8 = (undefined1 *)(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar9.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar8 = 1;
    *(undefined8 *)(puVar8 + 0x10) = uVar21;
    *(undefined8 *)(puVar8 + 8) = uVar25;
    puVar8[0x18] = 1;
    *(undefined8 *)(puVar8 + 0x20) = uVar20;
    *(undefined **)(puVar8 + 0x28) = puVar10;
    *(undefined8 *)(puVar8 + 0x30) = uVar2;
    if (!bVar5) {
      uVar17 = (ushort)((local_94 & 1) << 8) | 1;
    }
    else {
      _swift_errorRetain(puVar13);
      uVar17 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x18);
    *(ulong *)(puVar8 + *(int *)(lVar7 + 0x14)) = uVar19;
    *(undefined8 **)(puVar8 + iVar4) = puVar11;
    puVar12 = (undefined8 *)(puVar8 + *(int *)(lVar7 + 0x1c));
    *puVar12 = puVar13;
    puVar12[1] = 0;
    *(ushort *)(puVar12 + 2) = uVar17;
    *(bool *)((long)puVar12 + 0x12) = bVar5;
    pcVar22 = *(code **)(lVar3 + 8);
    _swift_errorRetain(puVar11);
    (*pcVar22)(puVar8,uVar1,lVar3);
    FUN_10080a754(puVar8);
    _swift_task_dealloc(puVar8);
    FUN_100004594(lVar23 + 0x10);
    uVar24 = uVar24 & 0xffffffff;
  }
  if (bVar5) {
    *(undefined8 **)(lVar23 + 0x60) = puVar13;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar24,uVar24 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar13);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar23 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar24,uVar24 >> 0x10 & 0xffff);
      FUN_10080d5a4(puVar13,local_94,1);
    }
    _swift_errorRelease(puVar11);
                    /* WARNING: Could not recover jumptable at 0x000100815884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar24,uVar24 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010081570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar13);
  return;
}



/* Address: 0x1008158f0 | FUN_1008158f0 */

void FUN_1008158f0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008159a4;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,2,uVar2);
  return;
}



/* Address: 0x1008159a4 | FUN_1008159a4 */

void FUN_1008159a4(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  code *pcVar22;
  long lVar23;
  undefined *puVar24;
  uint uVar25;
  undefined8 uVar26;
  
  lVar23 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar23 + 0xa0);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x98));
  puVar12 = param_1;
  uVar13 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar14 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar12;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    uVar25 = 0;
    bVar6 = true;
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 2) {
        bVar6 = false;
        puVar19 = (undefined *)0x0;
        uVar25 = uVar14 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar12,uVar13);
        puVar11 = puVar24;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar24;
        puVar11[1] = 2;
        _swift_willThrow();
        _swift_errorRetain(puVar19);
        uVar25 = 0;
        bVar6 = true;
        puVar24 = puVar19;
      }
      goto LAB_100815a98;
    }
    puVar24 = (undefined *)0x0;
    bVar6 = false;
    uVar25 = 2;
  }
  puVar19 = (undefined *)0x0;
LAB_100815a98:
  FUN_10080b3ec(*(long *)(lVar23 + 0x80) + 0x18,lVar23 + 0x38);
  uVar20 = *(undefined8 *)(lVar23 + 0x90);
  uVar26 = *(undefined8 *)(lVar23 + 0x88);
  if (*(long *)(lVar23 + 0x50) == 0) {
    uVar20 = *(undefined8 *)(lVar23 + 0x90);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar20);
    FUN_10080a674(lVar23 + 0x38);
  }
  else {
    puVar11 = *(undefined **)(lVar23 + 0x70);
    uVar3 = *(undefined8 *)(lVar23 + 0x78);
    uVar21 = *(undefined8 *)(lVar23 + 0x68);
    FUN_100076508(lVar23 + 0x38,lVar23 + 0x10);
    uVar2 = *(undefined8 *)(lVar23 + 0x28);
    lVar4 = *(long *)(lVar23 + 0x30);
    FUN_100004640();
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar20;
    *(undefined8 *)(puVar9 + 8) = uVar26;
    puVar9[0x18] = 2;
    *(undefined8 *)(puVar9 + 0x20) = uVar21;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    puVar11 = puVar24;
    if (bVar6) {
      _swift_errorRetain(puVar24);
      uVar17 = 0;
      uVar15 = 1;
    }
    else {
      if (uVar25 == 2) {
        uVar17 = 0x200;
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar17 = (ushort)(uVar25 << 8) | 2;
      }
      uVar15 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined **)(puVar9 + iVar5) = puVar19;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar11;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar17;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar15;
    pcVar22 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar19);
    (*pcVar22)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar23 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar23 + 0x60) = puVar24;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar23 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
      FUN_10080d5a4(puVar24,uVar25,1);
    }
    _swift_errorRelease(puVar19);
                    /* WARNING: Could not recover jumptable at 0x000100815d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar12,uVar13,uVar14,uVar14 >> 0x10);
  _swift_errorRelease(puVar19);
  puVar12 = (undefined *)0x0;
  if (uVar25 != 2) {
    puVar12 = puVar24;
  }
                    /* WARNING: Could not recover jumptable at 0x000100815bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))(puVar12,uVar25 == 2);
  return;
}



/* Address: 0x100815dec | FUN_100815dec */

void FUN_100815dec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_6;
  FUN_1007ffcdc(param_4,param_5,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100815ea4;
  FUN_10082ee24(param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,2,uVar2);
  return;
}



/* Address: 0x100815ea4 | FUN_100815ea4 */

void FUN_100815ea4(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ushort uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  uint local_94;
  
  lVar21 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar21 + 0xa8);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar21 + 0xa0));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar23 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar23;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar22 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    local_94 = 0;
    bVar6 = true;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 2) {
        bVar6 = false;
        local_94 = uVar15 >> 8 & 1;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar13;
        FUN_1000f4a4c(puVar13,uVar14);
        puVar12 = puVar11;
        FUN_10080b43c();
        puVar22 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar12,0,0);
        *puVar12 = (char)puVar11;
        puVar12[1] = 2;
        _swift_willThrow();
        _swift_errorRetain(puVar22);
        local_94 = 0;
        bVar6 = true;
        puVar11 = puVar22;
      }
      goto LAB_100815f94;
    }
    bVar6 = false;
    puVar22 = *(undefined **)(lVar21 + 0x68);
    local_94 = (uint)*(byte *)(lVar21 + 0xa8);
  }
  puVar11 = (undefined *)0x0;
LAB_100815f94:
  FUN_10080b3ec(*(long *)(lVar21 + 0x88) + 0x18,lVar21 + 0x38);
  uVar19 = *(undefined8 *)(lVar21 + 0x98);
  uVar23 = *(undefined8 *)(lVar21 + 0x90);
  if (*(long *)(lVar21 + 0x50) == 0) {
    uVar19 = *(undefined8 *)(lVar21 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar23);
    _swift_bridgeObjectRelease(uVar19);
    FUN_10080a674(lVar21 + 0x38);
  }
  else {
    puVar12 = *(undefined **)(lVar21 + 0x78);
    uVar3 = *(undefined8 *)(lVar21 + 0x80);
    uVar20 = *(undefined8 *)(lVar21 + 0x70);
    FUN_100076508(lVar21 + 0x38,lVar21 + 0x10);
    uVar2 = *(undefined8 *)(lVar21 + 0x28);
    lVar4 = *(long *)(lVar21 + 0x30);
    FUN_100004640(lVar21 + 0x10,uVar2);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar19;
    *(undefined8 *)(puVar9 + 8) = uVar23;
    puVar9[0x18] = 2;
    *(undefined8 *)(puVar9 + 0x20) = uVar20;
    *(undefined **)(puVar9 + 0x28) = puVar12;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    if (!bVar6) {
      uVar17 = (ushort)(local_94 << 8) | 2;
    }
    else {
      _swift_errorRetain(puVar22);
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined **)(puVar9 + iVar5) = puVar11;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar22;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar17;
    *(bool *)((long)puVar1 + 0x12) = bVar6;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar11);
    (*UNRECOVERED_JUMPTABLE)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar21 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar21 + 0x60) = puVar22;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar22);
      puVar12 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar21 + 0x60,puVar12,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
      FUN_10080d5a4(puVar22,local_94,1);
    }
    _swift_errorRelease(puVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  }
  else {
    FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
    _swift_errorRelease(puVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100816240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1008162a0 | FUN_1008162a0 */

void FUN_1008162a0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100816354;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,2,uVar2);
  return;
}



/* Address: 0x100816354 | FUN_100816354 */

void FUN_100816354(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined1 *puVar8;
  Date DVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ushort uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint local_84;
  
  lVar22 = *unaff_x22;
  uVar19 = (ulong)*(byte *)(lVar22 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar22 + 0x98));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar23 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar23;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar13 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    local_84 = 0;
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      if ((uVar16 & 0xff) == 2) {
        bVar5 = false;
        local_84 = uVar16 >> 8 & 1;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = puVar14;
        FUN_1000f4a4c(puVar14,uVar15,uVar23);
        puVar12 = puVar11;
        FUN_10080b43c();
        puVar13 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar12,0,0);
        *(char *)puVar12 = (char)puVar11;
        *(undefined1 *)((long)puVar12 + 1) = 2;
        _swift_willThrow();
        _swift_errorRetain(puVar13);
        local_84 = 0;
        bVar5 = true;
        puVar11 = puVar13;
      }
      goto LAB_100816478;
    }
    uVar24 = *(undefined8 *)(lVar22 + 0x88);
    uVar20 = *(undefined8 *)(lVar22 + 0x90);
    FUN_10080a3bc();
    puVar13 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar24;
    param_1[1] = uVar20;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar20);
  }
  bVar5 = true;
  puVar11 = (undefined8 *)0x0;
LAB_100816478:
  FUN_10080b3ec(*(long *)(lVar22 + 0x80) + 0x18,lVar22 + 0x38);
  uVar20 = *(undefined8 *)(lVar22 + 0x90);
  uVar24 = *(undefined8 *)(lVar22 + 0x88);
  if (*(long *)(lVar22 + 0x50) == 0) {
    uVar20 = *(undefined8 *)(lVar22 + 0x90);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar24);
    _swift_bridgeObjectRelease(uVar20);
    FUN_10080a674(lVar22 + 0x38);
  }
  else {
    puVar10 = *(undefined **)(lVar22 + 0x70);
    uVar2 = *(undefined8 *)(lVar22 + 0x78);
    uVar21 = *(undefined8 *)(lVar22 + 0x68);
    FUN_100076508(lVar22 + 0x38,lVar22 + 0x10);
    uVar1 = *(undefined8 *)(lVar22 + 0x28);
    lVar3 = *(long *)(lVar22 + 0x30);
    FUN_100004640(lVar22 + 0x10,uVar1);
    lVar7 = 0;
    FUN_1007fb264();
    puVar8 = (undefined1 *)(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar9.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar8 = 1;
    *(undefined8 *)(puVar8 + 0x10) = uVar20;
    *(undefined8 *)(puVar8 + 8) = uVar24;
    puVar8[0x18] = 2;
    *(undefined8 *)(puVar8 + 0x20) = uVar21;
    *(undefined **)(puVar8 + 0x28) = puVar10;
    *(undefined8 *)(puVar8 + 0x30) = uVar2;
    if (!bVar5) {
      uVar17 = (ushort)((local_84 & 1) << 8) | 2;
    }
    else {
      _swift_errorRetain(puVar13);
      uVar17 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x18);
    *(ulong *)(puVar8 + *(int *)(lVar7 + 0x14)) = uVar19;
    *(undefined8 **)(puVar8 + iVar4) = puVar11;
    puVar12 = (undefined8 *)(puVar8 + *(int *)(lVar7 + 0x1c));
    *puVar12 = puVar13;
    puVar12[1] = 0;
    *(ushort *)(puVar12 + 2) = uVar17;
    *(bool *)((long)puVar12 + 0x12) = bVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
    _swift_errorRetain(puVar11);
    (*UNRECOVERED_JUMPTABLE)(puVar8,uVar1,lVar3);
    FUN_10080a754(puVar8);
    _swift_task_dealloc(puVar8);
    FUN_100004594(lVar22 + 0x10);
    uVar23 = uVar23 & 0xffffffff;
  }
  if (bVar5) {
    *(undefined8 **)(lVar22 + 0x60) = puVar13;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar23,uVar23 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar13);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar22 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar23,uVar23 >> 0x10 & 0xffff);
      FUN_10080d5a4(puVar13,local_84,1);
    }
    _swift_errorRelease(puVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 8);
  }
  else {
    FUN_1007fb2c4(puVar14,uVar15,uVar23,uVar23 >> 0x10 & 0xffff);
    _swift_errorRelease(puVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010081671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100816784 | FUN_100816784 */

void FUN_100816784(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100816838;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,3,uVar2);
  return;
}



/* Address: 0x100816838 | FUN_100816838 */

void FUN_100816838(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 uVar14;
  long lVar15;
  ushort uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long *unaff_x22;
  code *pcVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  
  lVar23 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar23 + 0xa0);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x98));
  puVar11 = param_1;
  uVar12 = param_2;
  uVar25 = param_3;
  FUN_100804a74();
  uVar13 = (uint)uVar25;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar11);
    bVar6 = true;
    puVar24 = puVar11;
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 3) {
        bVar6 = false;
        puVar21 = (undefined *)0x0;
        puVar24 = (undefined *)((ulong)(uVar13 & 0x100) | (ulong)puVar11 & 1);
      }
      else {
        puVar24 = puVar11;
        FUN_1000f4a4c(puVar11,uVar12,uVar25);
        puVar17 = puVar24;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar17,0,0);
        *puVar17 = (char)puVar24;
        puVar17[1] = 3;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        bVar6 = true;
        puVar24 = puVar21;
      }
      goto LAB_100816920;
    }
    bVar6 = false;
    puVar24 = (undefined *)0x2;
  }
  puVar21 = (undefined *)0x0;
LAB_100816920:
  FUN_10080b3ec(*(long *)(lVar23 + 0x80) + 0x18,lVar23 + 0x38);
  uVar20 = *(undefined8 *)(lVar23 + 0x90);
  uVar25 = *(undefined8 *)(lVar23 + 0x88);
  if (*(long *)(lVar23 + 0x50) == 0) {
    uVar20 = *(undefined8 *)(lVar23 + 0x90);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar20);
    FUN_10080a674(lVar23 + 0x38);
  }
  else {
    puVar17 = *(undefined **)(lVar23 + 0x70);
    uVar3 = *(undefined8 *)(lVar23 + 0x78);
    uVar19 = *(undefined8 *)(lVar23 + 0x68);
    FUN_100076508(lVar23 + 0x38,lVar23 + 0x10);
    uVar2 = *(undefined8 *)(lVar23 + 0x28);
    lVar4 = *(long *)(lVar23 + 0x30);
    FUN_100004640();
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar17;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar20;
    *(undefined8 *)(puVar9 + 8) = uVar25;
    puVar9[0x18] = 3;
    *(undefined8 *)(puVar9 + 0x20) = uVar19;
    *(undefined **)(puVar9 + 0x28) = puVar17;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    if (bVar6) {
      _swift_errorRetain(puVar24);
      uVar16 = 0;
      uVar14 = 1;
      puVar17 = puVar24;
    }
    else {
      if (((uint)puVar24 & 0xff) == 2) {
        puVar17 = (undefined *)0x0;
        uVar16 = 0x200;
      }
      else {
        puVar17 = (undefined *)((ulong)puVar24 & 1);
        uVar16 = (ushort)puVar24 & 0x100 | 3;
      }
      uVar14 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar18;
    *(undefined **)(puVar9 + iVar5) = puVar21;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar17;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar16;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar14;
    pcVar22 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar21);
    (*pcVar22)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar23 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar23 + 0x60) = puVar24;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar11,uVar12,uVar13,uVar13 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar23 + 0x60,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar11,uVar12,uVar13,uVar13 >> 0x10);
      FUN_1002ec258(puVar24,1);
    }
    _swift_errorRelease(puVar21);
                    /* WARNING: Could not recover jumptable at 0x000100816bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar11,uVar12,uVar13,uVar13 >> 0x10);
  _swift_errorRelease(puVar21);
  uVar13 = 2;
  if (((ulong)puVar24 & 0xff) != 2) {
    uVar13 = (uint)puVar24 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100816a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))(uVar13);
  return;
}



/* Address: 0x100816c5c | FUN_100816c5c */

void FUN_100816c5c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(long *)(unaff_x22 + 0x80) = param_12;
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined1 *)(unaff_x22 + 0xa1) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100816d14;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,3,uVar2);
  return;
}



/* Address: 0x100816d14 | FUN_100816d14 */

void FUN_100816d14(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  undefined1 *puVar10;
  Date DVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ushort uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long *unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  
  lVar22 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar22 + 0xa0);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar22 + 0x98));
  puVar12 = param_1;
  uVar13 = param_2;
  uVar24 = param_3;
  FUN_100804a74();
  uVar14 = (uint)uVar24;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    bVar7 = true;
    puVar23 = puVar12;
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 3) {
        bVar7 = false;
        puVar21 = (undefined *)0x0;
        puVar23 = (undefined *)((ulong)(uVar14 & 0x100) | (ulong)puVar12 & 1);
      }
      else {
        puVar23 = puVar12;
        FUN_1000f4a4c(puVar12,uVar13,uVar24);
        puVar17 = puVar23;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar17,0,0);
        *puVar17 = (char)puVar23;
        puVar17[1] = 3;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        bVar7 = true;
        puVar23 = puVar21;
      }
      goto LAB_100816e08;
    }
    bVar7 = false;
    uVar2 = 0x100;
    if (*(char *)(lVar22 + 0xa0) == '\0') {
      uVar2 = 0;
    }
    puVar23 = (undefined *)(uVar2 | *(byte *)(lVar22 + 0xa1));
  }
  puVar21 = (undefined *)0x0;
LAB_100816e08:
  FUN_10080b3ec(*(long *)(lVar22 + 0x80) + 0x18,lVar22 + 0x38);
  uVar19 = *(undefined8 *)(lVar22 + 0x90);
  uVar25 = *(undefined8 *)(lVar22 + 0x88);
  if (*(long *)(lVar22 + 0x50) == 0) {
    uVar19 = *(undefined8 *)(lVar22 + 0x90);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar19);
    FUN_10080a674(lVar22 + 0x38);
  }
  else {
    puVar17 = *(undefined **)(lVar22 + 0x70);
    uVar4 = *(undefined8 *)(lVar22 + 0x78);
    uVar20 = *(undefined8 *)(lVar22 + 0x68);
    FUN_100076508(lVar22 + 0x38,lVar22 + 0x10);
    uVar3 = *(undefined8 *)(lVar22 + 0x28);
    lVar5 = *(long *)(lVar22 + 0x30);
    FUN_100004640();
    lVar9 = 0;
    FUN_1007fb264();
    puVar10 = (undefined1 *)(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar11.unknown = puVar17;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 0x10) = uVar19;
    *(undefined8 *)(puVar10 + 8) = uVar25;
    puVar10[0x18] = 3;
    *(undefined8 *)(puVar10 + 0x20) = uVar20;
    *(undefined **)(puVar10 + 0x28) = puVar17;
    *(undefined8 *)(puVar10 + 0x30) = uVar4;
    if (!bVar7) {
      puVar17 = (undefined *)((ulong)puVar23 & 1);
      uVar16 = (ushort)puVar23 & 0x100 | 3;
    }
    else {
      _swift_errorRetain(puVar23);
      uVar16 = 0;
      puVar17 = puVar23;
    }
    iVar6 = *(int *)(lVar9 + 0x18);
    *(ulong *)(puVar10 + *(int *)(lVar9 + 0x14)) = uVar18;
    *(undefined **)(puVar10 + iVar6) = puVar21;
    puVar1 = (undefined8 *)(puVar10 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar17;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar16;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar21);
    (*UNRECOVERED_JUMPTABLE)(puVar10,uVar3,lVar5);
    FUN_10080a754(puVar10);
    _swift_task_dealloc(puVar10);
    FUN_100004594(lVar22 + 0x10);
    uVar24 = uVar24 & 0xffffffff;
  }
  if (bVar7) {
    *(undefined **)(lVar22 + 0x60) = puVar23;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar12,uVar13,uVar24,uVar24 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar23);
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar22 + 0x60,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar12,uVar13,uVar24,uVar24 >> 0x10 & 0xffff);
      FUN_1002ec258(puVar23,1);
    }
    _swift_errorRelease(puVar21);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    uVar14 = 0;
  }
  else {
    FUN_1007fb2c4(puVar12,uVar13,uVar24,uVar24 >> 0x10 & 0xffff);
    _swift_errorRelease(puVar21);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    uVar14 = (uint)puVar23 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100817094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar14);
  return;
}



/* Address: 0x1008170f4 | FUN_1008170f4 */

void FUN_1008170f4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008171a8;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,3,uVar2);
  return;
}



/* Address: 0x1008171a8 | FUN_1008171a8 */

void FUN_1008171a8(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ushort uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar23 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar23 + 0xa0);
  lVar17 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    puVar12 = puVar13;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 3) {
        bVar6 = false;
        puVar22 = (undefined8 *)0x0;
        puVar12 = (undefined8 *)((ulong)(uVar15 & 0x100) | (ulong)puVar13 & 1);
      }
      else {
        puVar12 = puVar13;
        FUN_1000f4a4c(puVar13,uVar14,uVar16);
        puVar19 = puVar12;
        FUN_10080b43c();
        puVar22 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar19,0,0);
        *(char *)puVar19 = (char)puVar12;
        *(undefined1 *)((long)puVar19 + 1) = 3;
        _swift_willThrow();
        _swift_errorRetain(puVar22);
        bVar6 = true;
        puVar12 = puVar22;
      }
      goto LAB_1008172c4;
    }
    uVar25 = *(undefined8 *)(lVar23 + 0x88);
    uVar21 = *(undefined8 *)(lVar23 + 0x90);
    FUN_10080a3bc();
    puVar12 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar25;
    param_1[1] = uVar21;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar25);
    _swift_bridgeObjectRetain(uVar21);
  }
  bVar6 = true;
  puVar22 = (undefined8 *)0x0;
LAB_1008172c4:
  FUN_10080b3ec(*(long *)(lVar23 + 0x80) + 0x18,lVar23 + 0x38);
  uVar21 = *(undefined8 *)(lVar23 + 0x90);
  uVar25 = *(undefined8 *)(lVar23 + 0x88);
  if (*(long *)(lVar23 + 0x50) == 0) {
    uVar21 = *(undefined8 *)(lVar23 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10080a674(lVar23 + 0x38);
  }
  else {
    puVar11 = *(undefined **)(lVar23 + 0x70);
    uVar3 = *(undefined8 *)(lVar23 + 0x78);
    uVar24 = *(undefined8 *)(lVar23 + 0x68);
    FUN_100076508(lVar23 + 0x38,lVar23 + 0x10);
    uVar2 = *(undefined8 *)(lVar23 + 0x28);
    lVar4 = *(long *)(lVar23 + 0x30);
    FUN_100004640(lVar23 + 0x10,uVar2);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar21;
    *(undefined8 *)(puVar9 + 8) = uVar25;
    puVar9[0x18] = 3;
    *(undefined8 *)(puVar9 + 0x20) = uVar24;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar3;
    if (!bVar6) {
      puVar19 = (undefined8 *)((ulong)puVar12 & 1);
      uVar18 = (ushort)puVar12 & 0x100 | 3;
    }
    else {
      _swift_errorRetain(puVar12);
      uVar18 = 0;
      puVar19 = puVar12;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar22;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar18;
    *(bool *)((long)puVar1 + 0x12) = bVar6;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar22);
    (*UNRECOVERED_JUMPTABLE)(puVar9,uVar2,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar23 + 0x10);
    uVar16 = uVar16 & 0xffffffff;
  }
  if (bVar6) {
    *(undefined8 **)(lVar23 + 0x60) = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar12);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar23 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
      FUN_1002ec258(puVar12,1);
    }
    _swift_errorRelease(puVar22);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
    uVar15 = 0;
  }
  else {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    _swift_errorRelease(puVar22);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
    uVar15 = (uint)puVar12 & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100817560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar15);
  return;
}



/* Address: 0x1008175c0 | FUN_1008175c0 */

void FUN_1008175c0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100817674;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,4,uVar2);
  return;
}



/* Address: 0x100817674 | FUN_100817674 */

void FUN_100817674(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 4) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 4;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 4;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 4;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x000100817b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x000100817984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x100817b04 | FUN_100817b04 */

void FUN_100817b04(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100817bbc;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,4,uVar2);
  return;
}



/* Address: 0x100817bbc | FUN_100817bbc */

void FUN_100817bbc(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 4) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 4;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 4;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 4;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100818000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100817fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x100818004 | FUN_100818004 */

void FUN_100818004(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008180b8;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,4,uVar2);
  return;
}



/* Address: 0x1008180b8 | FUN_1008180b8 */

void FUN_1008180b8(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 4) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 4;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_1008181fc;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_1008181fc:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 4;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 4;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x0001008184c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x000100818448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x10081852c | FUN_10081852c */

void FUN_10081852c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1008185e0;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,uVar2);
  return;
}



/* Address: 0x1008185e0 | FUN_1008185e0 */

void FUN_1008185e0(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 5) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 5;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 5;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 5;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x000100818a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x0001008188f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x100818a70 | FUN_100818a70 */

void FUN_100818a70(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100818b28;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,uVar2);
  return;
}



/* Address: 0x100818b28 | FUN_100818b28 */

void FUN_100818b28(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 5) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 5;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 5;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 5;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100818f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100818f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x100818f70 | FUN_100818f70 */

void FUN_100818f70(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100819024;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,uVar2);
  return;
}



/* Address: 0x100819024 | FUN_100819024 */

void FUN_100819024(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 5) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 5;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_100819168;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_100819168:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 5;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 5;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x000100819430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x0001008193b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x100819498 | FUN_100819498 */

void FUN_100819498(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081954c;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,uVar2);
  return;
}



/* Address: 0x10081954c | FUN_10081954c */

void FUN_10081954c(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 6) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 6;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 6;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 6;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x0001008199d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x1008199dc | FUN_1008199dc */

void FUN_1008199dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100819a94;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,uVar2);
  return;
}



/* Address: 0x100819a94 | FUN_100819a94 */

void FUN_100819a94(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 6) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 6;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 6;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 6;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100819ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x000100819e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x100819edc | FUN_100819edc */

void FUN_100819edc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100819f90;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,uVar2);
  return;
}



/* Address: 0x100819f90 | FUN_100819f90 */

void FUN_100819f90(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 6) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 6;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_10081a0d4;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_10081a0d4:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 6;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 6;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x10081a404 | FUN_10081a404 */

void FUN_10081a404(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081a4b8;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,7,uVar2);
  return;
}



/* Address: 0x10081a4b8 | FUN_10081a4b8 */

void FUN_10081a4b8(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 7) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 7;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 7;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 7;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081a944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081a7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x10081a948 | FUN_10081a948 */

void FUN_10081a948(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081aa00;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,7,uVar2);
  return;
}



/* Address: 0x10081aa00 | FUN_10081aa00 */

void FUN_10081aa00(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 7) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 7;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 7;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 7;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081adfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x10081ae48 | FUN_10081ae48 */

void FUN_10081ae48(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081aefc;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,7,uVar2);
  return;
}



/* Address: 0x10081aefc | FUN_10081aefc */

void FUN_10081aefc(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 7) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 7;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_10081b040;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_10081b040:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 7;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 7;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081b308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081b28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x10081b370 | FUN_10081b370 */

void FUN_10081b370(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081b424;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,8,uVar2);
  return;
}



/* Address: 0x10081b424 | FUN_10081b424 */

void FUN_10081b424(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 8) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 8;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 8;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 8;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081b8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081b734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x10081b8b4 | FUN_10081b8b4 */

void FUN_10081b8b4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081b96c;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,8,uVar2);
  return;
}



/* Address: 0x10081b96c | FUN_10081b96c */

void FUN_10081b96c(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 8) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 8;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 8;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 8;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x10081bdb4 | FUN_10081bdb4 */

void FUN_10081bdb4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081be68;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,8,uVar2);
  return;
}



/* Address: 0x10081be68 | FUN_10081be68 */

void FUN_10081be68(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 8) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 8;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_10081bfac;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_10081bfac:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 8;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 8;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081c274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081c1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x10081c2dc | FUN_10081c2dc */

void FUN_10081c2dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081c390;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,9,uVar2);
  return;
}



/* Address: 0x10081c390 | FUN_10081c390 */

void FUN_10081c390(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  ushort uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  long *unaff_x22;
  long lVar26;
  uint uVar27;
  undefined8 uVar28;
  
  lVar26 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar26 + 0xa0);
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x98));
  puVar13 = param_1;
  uVar14 = param_2;
  uVar16 = param_3;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar13;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    uVar27 = 0;
    uVar22 = 1;
    bVar6 = true;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar14,uVar16,uVar16 >> 0x10 & 0xffff);
    uVar27 = 0;
    bVar6 = false;
    uVar22 = 0;
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 9) {
    uVar27 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar13,uVar14,uVar16);
    bVar6 = false;
    uVar22 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar14,uVar16);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar9 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 9;
    _swift_willThrow();
    _swift_errorRetain(puVar9);
    uVar27 = 0;
    bVar6 = true;
    uVar22 = 1;
    puVar8 = puVar9;
  }
  FUN_10080b3ec(*(long *)(lVar26 + 0x80) + 0x18,lVar26 + 0x38);
  uVar23 = *(undefined8 *)(lVar26 + 0x90);
  uVar28 = *(undefined8 *)(lVar26 + 0x88);
  if (*(long *)(lVar26 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar26 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar26 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar26 + 0x70);
    uVar3 = *(undefined8 *)(lVar26 + 0x78);
    uVar24 = *(undefined8 *)(lVar26 + 0x68);
    FUN_100076508(lVar26 + 0x38,lVar26 + 0x10);
    uVar2 = *(undefined8 *)(lVar26 + 0x28);
    lVar4 = *(long *)(lVar26 + 0x30);
    FUN_100004640();
    lVar10 = 0;
    FUN_1007fb264();
    puVar11 = (undefined1 *)(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar12.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    uVar17 = 1;
    *puVar11 = 1;
    *(undefined8 *)(puVar11 + 0x10) = uVar23;
    *(undefined8 *)(puVar11 + 8) = uVar28;
    puVar11[0x18] = 9;
    *(undefined8 *)(puVar11 + 0x20) = uVar24;
    *(undefined **)(puVar11 + 0x28) = puVar20;
    *(undefined8 *)(puVar11 + 0x30) = uVar3;
    puVar20 = puVar9;
    if (bVar6) {
      uVar19 = 0;
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        uVar19 = 0x200;
      }
      else {
        uVar19 = (ushort)(uVar27 << 8) | 9;
      }
      uVar17 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    *(ulong *)(puVar11 + *(int *)(lVar10 + 0x14)) = uVar21;
    *(undefined **)(puVar11 + iVar5) = puVar8;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar10 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar17;
    pcVar25 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar8);
    FUN_10081c834(puVar9,uVar27,uVar22);
    (*pcVar25)(puVar11,uVar2,lVar4);
    FUN_10080a754(puVar11);
    _swift_task_dealloc(puVar11);
    FUN_100004594(lVar26 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar26 + 0x60) = puVar9;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar26 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar13,uVar14,uVar16 & 0xffffffff,uVar15 >> 0x10);
      FUN_10081c820(puVar9,uVar27,1);
    }
    _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081c81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar13,uVar14,uVar15,uVar15 >> 0x10);
  _swift_errorRelease(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010081c6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar9);
  return;
}



/* Address: 0x10081c820 | FUN_10081c820 */

void FUN_10081c820(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x10081c834 | FUN_10081c834 */

void FUN_10081c834(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10081c848 | FUN_10081c848 */

void FUN_10081c848(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_10,param_11);
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  uVar2 = *(undefined8 *)(param_12 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081c900;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,9,uVar2);
  return;
}



/* Address: 0x10081c900 | FUN_10081c900 */

void FUN_10081c900(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x22;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar25 + 0xa8);
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0xa0));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar24 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    puVar24 = *(undefined **)(lVar25 + 0x68);
    uVar23 = (uint)*(byte *)(lVar25 + 0xa8);
    _swift_bridgeObjectRetain(puVar24);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff) == 9) {
    uVar23 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar21 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar24 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 9;
    _swift_willThrow();
    _swift_errorRetain(puVar24);
    uVar23 = 0;
    bVar7 = true;
    uVar21 = 1;
    puVar9 = puVar24;
  }
  FUN_10080b3ec(*(long *)(lVar25 + 0x88) + 0x18,lVar25 + 0x38);
  uVar22 = *(undefined8 *)(lVar25 + 0x98);
  uVar27 = *(undefined8 *)(lVar25 + 0x90);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar22 = *(undefined8 *)(lVar25 + 0x98);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar25 + 0x80);
    uVar3 = *(undefined8 *)(lVar25 + 0x70);
    puVar10 = *(undefined **)(lVar25 + 0x78);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar4 = *(undefined8 *)(lVar25 + 0x28);
    lVar5 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar22;
    *(undefined8 *)(puVar12 + 8) = uVar27;
    puVar12[0x18] = 9;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (ushort)(uVar23 << 8) | 9;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = puVar9;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar24;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar9);
    FUN_10081c834(puVar24,uVar23,uVar21);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar25 + 0x60) = puVar24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar24);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_10081c820(puVar24,uVar23,1);
    }
    _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081cd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar26 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010081ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))(puVar24);
  return;
}



/* Address: 0x10081cd48 | FUN_10081cd48 */

void FUN_10081cd48(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(long *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xa0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_9,param_10);
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  uVar2 = *(undefined8 *)(param_11 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081cdfc;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,9,uVar2);
  return;
}



/* Address: 0x10081cdfc | FUN_10081cdfc */

void FUN_10081cdfc(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 *puVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  
  lVar25 = *unaff_x22;
  uVar20 = (ulong)*(byte *)(lVar25 + 0xa0);
  lVar18 = *unaff_x22;
  uVar24 = param_4 >> 0x10 & 0xffff;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x98));
  puVar15 = param_1;
  uVar16 = param_2;
  uVar26 = param_3;
  FUN_100804a74();
  uVar17 = (uint)uVar26;
  FUN_1007fb2c4(param_2,param_3,param_4,uVar24);
  _swift_bridgeObjectRelease();
  puVar14 = puVar15;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar15);
    uVar24 = 0;
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      if ((uVar17 & 0xff) == 9) {
        uVar24 = (ulong)(uVar17 >> 8 & 1);
        FUN_1007fb28c(puVar15,uVar16,uVar26);
        bVar6 = false;
        uVar22 = 0;
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar12 = puVar15;
        FUN_1000f4a4c(puVar15,uVar16,uVar26);
        puVar13 = puVar12;
        FUN_10080b43c();
        puVar14 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar13,0,0);
        *(char *)puVar13 = (char)puVar12;
        *(undefined1 *)((long)puVar13 + 1) = 9;
        _swift_willThrow();
        _swift_errorRetain(puVar14);
        uVar24 = 0;
        bVar6 = true;
        uVar22 = 1;
        puVar12 = puVar14;
      }
      goto LAB_10081cf40;
    }
    uVar27 = *(undefined8 *)(lVar25 + 0x88);
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    FUN_10080a3bc();
    puVar14 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_1,0,0);
    *param_1 = uVar27;
    param_1[1] = uVar23;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    _swift_bridgeObjectRetain(uVar27);
    _swift_bridgeObjectRetain(uVar23);
    FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar17 >> 0x10);
  }
  bVar6 = true;
  uVar22 = 1;
  puVar12 = (undefined8 *)0x0;
LAB_10081cf40:
  FUN_10080b3ec(*(long *)(lVar25 + 0x80) + 0x18,lVar25 + 0x38);
  uVar23 = *(undefined8 *)(lVar25 + 0x90);
  uVar27 = *(undefined8 *)(lVar25 + 0x88);
  if (*(long *)(lVar25 + 0x50) == 0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x90);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar27);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar25 + 0x38);
  }
  else {
    uVar19 = *(undefined8 *)(lVar25 + 0x78);
    uVar2 = *(undefined8 *)(lVar25 + 0x68);
    puVar11 = *(undefined **)(lVar25 + 0x70);
    FUN_100076508(lVar25 + 0x38,lVar25 + 0x10);
    uVar3 = *(undefined8 *)(lVar25 + 0x28);
    lVar4 = *(long *)(lVar25 + 0x30);
    FUN_100004640(lVar25 + 0x10,uVar3);
    lVar8 = 0;
    FUN_1007fb264();
    puVar9 = (undefined1 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar10.unknown = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar9 = 1;
    *(undefined8 *)(puVar9 + 0x10) = uVar23;
    *(undefined8 *)(puVar9 + 8) = uVar27;
    puVar9[0x18] = 9;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    *(undefined **)(puVar9 + 0x28) = puVar11;
    *(undefined8 *)(puVar9 + 0x30) = uVar19;
    uVar1 = 0;
    if (!bVar6) {
      uVar1 = (ushort)(((uint)uVar24 & 1) << 8) | 9;
    }
    iVar5 = *(int *)(lVar8 + 0x18);
    *(ulong *)(puVar9 + *(int *)(lVar8 + 0x14)) = uVar20;
    *(undefined8 **)(puVar9 + iVar5) = puVar12;
    puVar13 = (undefined8 *)(puVar9 + *(int *)(lVar8 + 0x1c));
    *puVar13 = puVar14;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar1;
    *(bool *)((long)puVar13 + 0x12) = bVar6;
    pcVar21 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar12);
    FUN_10081c834(puVar14,uVar24,uVar22);
    uVar26 = uVar26 & 0xffffffff;
    (*pcVar21)(puVar9,uVar3,lVar4);
    FUN_10080a754(puVar9);
    _swift_task_dealloc(puVar9);
    FUN_100004594(lVar25 + 0x10);
  }
  if (bVar6 != false) {
    *(undefined8 **)(lVar25 + 0x60) = puVar14;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar14);
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar25 + 0x60,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
      FUN_10081c820(puVar14,uVar24,1);
    }
    _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081d208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar15,uVar16,uVar26,uVar26 >> 0x10 & 0xffff);
  _swift_errorRelease(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010081d18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))(puVar14);
  return;
}



/* Address: 0x10081d270 | FUN_10081d270 */

void FUN_10081d270(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081d37c;
  FUN_100806454(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_10081d3c0,unaff_x22 + 0x10,FUN_10081d3e4);
  return;
}



/* Address: 0x10081d37c | FUN_10081d37c */

void FUN_10081d37c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010081d3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10081d3c0 | FUN_10081d3c0 */

void FUN_10081d3c0(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081d3e4 | FUN_10081d3e4 */

void FUN_10081d3e4(undefined8 param_1)

{
  FUN_10081ec30(param_1,FUN_10080a0f8);
  return;
}



/* Address: 0x10081d3f0 | FUN_10081d3f0 */

void FUN_10081d3f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000028;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806c44(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                param_8,FUN_100824630,unaff_x22 + 0x10,thunk_FUN_10081d3e4,unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081d508 | FUN_10081d508 */

void FUN_10081d508(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100807348(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_100824630,unaff_x22 + 0x10,thunk_FUN_10081d3e4);
  return;
}


