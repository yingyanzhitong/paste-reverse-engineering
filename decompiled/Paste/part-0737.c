/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10080f54c | FUN_10080f54c */

undefined8 *
FUN_10080f54c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 5;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 5;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 5;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_10080f770;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_10080f770:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 5;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 5;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x10080fa48 | FUN_10080fa48 */

undefined1 ***
FUN_10080fa48(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 6;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 6) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x106;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 6;
        *(undefined1 *)((long)pppuVar10 + 1) = 6;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_10080fb98;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 6;
  pppuVar19 = (undefined1 ***)0x0;
LAB_10080fb98:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 6;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x10080fddc | FUN_10080fddc */

undefined1 *
FUN_10080fddc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 6;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 6) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 6;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10080ff3c;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_10080ff3c:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 6;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x106;
    if ((local_ec & 1) == 0) {
      uVar15 = 6;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}



/* Address: 0x10081018c | FUN_10081018c */

undefined8 *
FUN_10081018c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 6;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 6;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 6;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_1008103b0;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_1008103b0:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 6;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 6;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x100810688 | FUN_100810688 */

undefined1 ***
FUN_100810688(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 7;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 7) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x107;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 7;
        *(undefined1 *)((long)pppuVar10 + 1) = 7;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_1008107d8;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 7;
  pppuVar19 = (undefined1 ***)0x0;
LAB_1008107d8:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 7;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x100810a1c | FUN_100810a1c */

undefined1 *
FUN_100810a1c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 7;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 7) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 7;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_100810b7c;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_100810b7c:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 7;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x107;
    if ((local_ec & 1) == 0) {
      uVar15 = 7;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}



/* Address: 0x100810dcc | FUN_100810dcc */

undefined8 *
FUN_100810dcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 7;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 7;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 7;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_100810ff0;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_100810ff0:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 7;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 7;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x1008112c8 | FUN_1008112c8 */

undefined1 ***
FUN_1008112c8(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 8;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 8) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x108;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 8;
        *(undefined1 *)((long)pppuVar10 + 1) = 8;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_100811418;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 8;
  pppuVar19 = (undefined1 ***)0x0;
LAB_100811418:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 8;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x10081165c | FUN_10081165c */

undefined1 *
FUN_10081165c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 8;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 8) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 8;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_1008117bc;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_1008117bc:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 8;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x108;
    if ((local_ec & 1) == 0) {
      uVar15 = 8;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}



/* Address: 0x100811a0c | FUN_100811a0c */

undefined8 *
FUN_100811a0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 8;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 8;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 8;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_100811c30;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_100811c30:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 8;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 8;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x100811f08 | FUN_100811f08 */

undefined1 ***
FUN_100811f08(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 9;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 9) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x109;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 9;
        *(undefined1 *)((long)pppuVar10 + 1) = 9;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_100812058;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 9;
  pppuVar19 = (undefined1 ***)0x0;
LAB_100812058:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 9;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x10081229c | FUN_10081229c */

undefined1 *
FUN_10081229c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 9;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 9) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 9;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_1008123fc;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_1008123fc:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 9;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x109;
    if ((local_ec & 1) == 0) {
      uVar15 = 9;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}



/* Address: 0x10081264c | FUN_10081264c */

undefined8 *
FUN_10081264c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 9;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 9;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 9;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_100812870;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_100812870:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 9;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 9;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x100812b48 | FUN_100812b48 */

void FUN_100812b48(void)

{
  FUN_100813714();
  return;
}



/* Address: 0x100812b8c | FUN_100812b8c */

void FUN_100812b8c(void)

{
  FUN_1008137d4();
  return;
}



/* Address: 0x100812bd0 | FUN_100812bd0 */

void FUN_100812bd0(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Address: 0x100812c0c | FUN_100812c0c */

void FUN_100812c0c(void)

{
  FUN_100813894();
  return;
}



/* Address: 0x100812c50 | FUN_100812c50 */

void FUN_100812c50(void)

{
  FUN_100812ff8();
  return;
}



/* Address: 0x100812c98 | FUN_100812c98 */

void FUN_100812c98(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x100812cbc | FUN_100812cbc */

void FUN_100812cbc(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10080a128);
  return;
}



/* Address: 0x100812cc8 | FUN_100812cc8 */

void FUN_100812cc8(void)

{
  FUN_100813140();
  return;
}



/* Address: 0x100812d10 | FUN_100812d10 */

void FUN_100812d10(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  
  if (param_4 == '\x05') {
    local_a0 = param_10;
    uStack_98 = param_11;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    _swift_bridgeObjectRetain();
    puVar1 = &DAT_100fe6f38;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    puVar2 = &DAT_100fe7218;
    FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
    puVar3 = &DAT_100fe7278;
    FUN_100583fb4(&DAT_100fe7278,&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1005f45bc(param_12,auStack_b0,puVar1,param_10,puVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_b8);
    FUN_1007fb2ec(param_2,param_3,5);
    if (unaff_x21 == 0) {
      *param_1 = param_12;
    }
  }
  else {
    FUN_1000f4a4c();
    puVar4 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar4,0,0);
    *puVar4 = (char)param_2;
    puVar4[1] = 5;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100812e78 | FUN_100812e78 */

void FUN_100812e78(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x100812e9c | FUN_100812e9c */

void FUN_100812e9c(void)

{
  FUN_100813284();
  return;
}



/* Address: 0x100812ee4 | FUN_100812ee4 */

void FUN_100812ee4(void)

{
  FUN_100813714();
  return;
}



/* Address: 0x100812f28 | FUN_100812f28 */

void FUN_100812f28(void)

{
  FUN_1008137d4();
  return;
}



/* Address: 0x100812f6c | FUN_100812f6c */

void FUN_100812f6c(void)

{
  FUN_100813894();
  return;
}



/* Address: 0x100812fb0 | FUN_100812fb0 */

void FUN_100812fb0(void)

{
  FUN_100812ff8();
  return;
}



/* Address: 0x100812ff8 | FUN_100812ff8 */

undefined8
FUN_100812ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70 [2];
  
  local_b0 = param_11;
  uStack_a8 = param_12;
  uStack_98 = param_9;
  local_90 = param_10;
  local_f0 = param_11;
  uStack_e8 = param_12;
  uStack_d8 = param_9;
  local_d0 = param_10;
  uVar1 = 0;
  local_e0 = param_8;
  local_a0 = param_8;
  uStack_88 = param_1;
  local_80 = param_2;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_100806184(local_70,param_1,param_2,param_13,param_4,param_15,auStack_c0,param_16,auStack_100,
                param_5,param_6,param_7,param_8,param_9,param_10,uVar1);
  return local_70[0];
}



/* Address: 0x1008130c8 | FUN_1008130c8 */

void FUN_1008130c8(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x1008130ec | FUN_1008130ec */

void FUN_1008130ec(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10080a178);
  return;
}



/* Address: 0x1008130f8 | FUN_1008130f8 */

void FUN_1008130f8(void)

{
  FUN_100813140();
  return;
}



/* Address: 0x100813140 | FUN_100813140 */

undefined8
FUN_100813140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 uVar1;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  local_b0 = param_12;
  uStack_a8 = param_13;
  local_a0 = param_9;
  uStack_98 = param_10;
  local_90 = param_11;
  local_f0 = param_12;
  uStack_e8 = param_13;
  local_e0 = param_9;
  uStack_d8 = param_10;
  local_d0 = param_11;
  uVar1 = 0;
  uStack_88 = param_1;
  local_80 = param_2;
  local_78 = param_5;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_10080626c(local_70,param_1,param_2,param_14,param_4,&local_78,param_16,auStack_c0,param_17,
                auStack_100,param_6,param_7,param_8,param_9,param_10,param_11,uVar1);
  return local_70[0];
}



/* Address: 0x100813218 | FUN_100813218 */

void FUN_100813218(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081323c | FUN_10081323c */

void FUN_10081323c(void)

{
  FUN_100813284();
  return;
}



/* Address: 0x100813284 | FUN_100813284 */

undefined8
FUN_100813284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  
  local_a0 = param_11;
  uStack_98 = param_12;
  uStack_88 = param_9;
  local_80 = param_10;
  local_e0 = param_11;
  uStack_d8 = param_12;
  uStack_c8 = param_9;
  local_c0 = param_10;
  uVar1 = 0;
  local_d0 = param_8;
  local_90 = param_8;
  uStack_78 = param_1;
  local_70 = param_2;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_100806358(&local_58,param_1,param_2,param_13,param_4,param_15,auStack_b0,param_16,auStack_f0,
                param_5,param_6,param_7,param_8,param_9,param_10,uVar1);
  return local_58;
}



/* Address: 0x100813360 | FUN_100813360 */

void FUN_100813360(void)

{
  FUN_100813714();
  return;
}



/* Address: 0x1008133a8 | FUN_1008133a8 */

void FUN_1008133a8(void)

{
  FUN_1008137d4();
  return;
}



/* Address: 0x1008133f0 | FUN_1008133f0 */

void FUN_1008133f0(void)

{
  FUN_100813894();
  return;
}



/* Address: 0x100813438 | FUN_100813438 */

void FUN_100813438(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081345c | FUN_10081345c */

void FUN_10081345c(undefined8 param_1)

{
  FUN_10081ec30(param_1,FUN_10080a248);
  return;
}



/* Address: 0x100813468 | FUN_100813468 */

void FUN_100813468(void)

{
  FUN_100812ff8();
  return;
}



/* Address: 0x1008134b0 | FUN_1008134b0 */

void FUN_1008134b0(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x1008134d4 | FUN_1008134d4 */

void FUN_1008134d4(void)

{
  FUN_100813140();
  return;
}



/* Address: 0x10081351c | FUN_10081351c */

void FUN_10081351c(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  
  if (param_4 == '\x06') {
    local_a0 = param_10;
    uStack_98 = param_11;
    local_90 = param_5;
    uStack_88 = param_6;
    local_80 = param_7;
    uStack_78 = param_8;
    local_70 = param_9;
    _swift_bridgeObjectRetain();
    puVar1 = &DAT_100fe7250;
    FUN_1000f7830(&DAT_100fe7250,&DAT_100c7bea0);
    puVar2 = &DAT_100fe7218;
    FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
    puVar3 = &DAT_100fe7270;
    FUN_100583fb4(&DAT_100fe7270,&DAT_100fe7250,&DAT_100c7bea0);
    FUN_1005f45bc(param_12,auStack_b0,puVar1,param_10,puVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_b8);
    FUN_1007fb2ec(param_2,param_3,6);
    if (unaff_x21 == 0) {
      *param_1 = param_12;
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



/* Address: 0x100813684 | FUN_100813684 */

void FUN_100813684(void)

{
  FUN_100813284();
  return;
}



/* Address: 0x1008136cc | FUN_1008136cc */

void FUN_1008136cc(void)

{
  FUN_100813714();
  return;
}



/* Address: 0x100813714 | FUN_100813714 */

void FUN_100813714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_60 = param_11;
  uStack_58 = param_12;
  uStack_48 = param_9;
  local_40 = param_10;
  local_a0 = param_11;
  uStack_98 = param_12;
  uStack_88 = param_9;
  local_80 = param_10;
  local_90 = param_8;
  local_50 = param_8;
  uStack_38 = param_1;
  local_30 = param_2;
  FUN_100806184(param_1,param_2,param_13,param_4,param_15,auStack_70,param_16,auStack_b0,param_5,
                param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Address: 0x10081378c | FUN_10081378c */

void FUN_10081378c(void)

{
  FUN_1008137d4();
  return;
}



/* Address: 0x1008137d4 | FUN_1008137d4 */

void FUN_1008137d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_60 = param_12;
  uStack_58 = param_13;
  local_50 = param_9;
  uStack_48 = param_10;
  local_40 = param_11;
  local_a0 = param_12;
  uStack_98 = param_13;
  local_90 = param_9;
  uStack_88 = param_10;
  local_80 = param_11;
  uStack_38 = param_1;
  local_30 = param_2;
  FUN_10080626c(param_1,param_2,param_14,param_4,param_5,param_16,auStack_70,param_17,auStack_b0,
                param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}



/* Address: 0x10081384c | FUN_10081384c */

void FUN_10081384c(void)

{
  FUN_100813894();
  return;
}



/* Address: 0x100813894 | FUN_100813894 */

void FUN_100813894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_60 = param_11;
  uStack_58 = param_12;
  uStack_48 = param_9;
  local_40 = param_10;
  local_a0 = param_11;
  uStack_98 = param_12;
  uStack_88 = param_9;
  local_80 = param_10;
  local_90 = param_8;
  local_50 = param_8;
  uStack_38 = param_1;
  local_30 = param_2;
  FUN_100806358(param_1,param_2,param_13,param_4,param_15,auStack_70,param_16,auStack_b0,param_5,
                param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Address: 0x10081390c | FUN_10081390c */

void FUN_10081390c(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x100813930 | FUN_100813930 */

void FUN_100813930(undefined8 param_1)

{
  FUN_10081ec30(param_1,FUN_10080a290);
  return;
}



/* Address: 0x10081393c | FUN_10081393c */

void FUN_10081393c(void)

{
  FUN_100812ff8();
  return;
}



/* Address: 0x100813984 | FUN_100813984 */

void FUN_100813984(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x1008139a8 | FUN_1008139a8 */

void FUN_1008139a8(void)

{
  FUN_100813140();
  return;
}



/* Address: 0x1008139f0 | FUN_1008139f0 */

void FUN_1008139f0(void)

{
  FUN_100813284();
  return;
}



/* Address: 0x100813a38 | FUN_100813a38 */

void FUN_100813a38(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
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
  plVar1[1] = (long)FUN_100813aec;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,0,uVar2);
  return;
}



/* Address: 0x100813aec | FUN_100813aec */

void FUN_100813aec(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  Date DVar11;
  undefined *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 uVar16;
  long lVar17;
  undefined2 uVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  code *pcVar26;
  long *unaff_x22;
  long lVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  
  lVar28 = *unaff_x22;
  uVar21 = (ulong)*(byte *)(lVar28 + 0xa0);
  lVar17 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar28 + 0x98));
  puVar12 = param_1;
  lVar13 = param_2;
  uVar15 = param_3;
  FUN_100804a74();
  uVar14 = (uint)uVar15;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar8 = puVar12;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    uVar29 = 0;
    puVar22 = (undefined *)0x0;
    bVar6 = true;
    uVar23 = 1;
    lVar27 = 0;
  }
  else if ((uVar14 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar12,lVar13,uVar15,uVar15 >> 0x10 & 0xffff);
    uVar29 = 0;
    bVar6 = false;
    uVar23 = 0;
    puVar22 = (undefined *)0x0;
    lVar27 = 0;
    puVar8 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 0) {
    uVar29 = uVar14 >> 8 & 1;
    FUN_1007fb28c(puVar12,lVar13,uVar15);
    bVar6 = false;
    uVar23 = 0;
    puVar22 = (undefined *)0x0;
    lVar27 = lVar13;
  }
  else {
    FUN_1000f4a4c(puVar12,lVar13,uVar15);
    puVar20 = puVar8;
    FUN_10080b43c();
    puVar22 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar20,0,0);
    *puVar20 = (char)puVar8;
    puVar20[1] = 0;
    _swift_willThrow();
    _swift_errorRetain(puVar22);
    uVar29 = 0;
    bVar6 = true;
    uVar23 = 1;
    lVar27 = 0;
    puVar8 = puVar22;
  }
  FUN_10080b3ec(*(long *)(lVar28 + 0x80) + 0x18,lVar28 + 0x38);
  uVar24 = *(undefined8 *)(lVar28 + 0x90);
  uVar30 = *(undefined8 *)(lVar28 + 0x88);
  if (*(long *)(lVar28 + 0x50) == 0) {
    uVar24 = *(undefined8 *)(lVar28 + 0x90);
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease(uVar30);
    _swift_bridgeObjectRelease(uVar24);
    FUN_10080a674(lVar28 + 0x38);
  }
  else {
    puVar20 = *(undefined **)(lVar28 + 0x70);
    uVar3 = *(undefined8 *)(lVar28 + 0x78);
    uVar25 = *(undefined8 *)(lVar28 + 0x68);
    FUN_100076508(lVar28 + 0x38,lVar28 + 0x10);
    uVar2 = *(undefined8 *)(lVar28 + 0x28);
    lVar4 = *(long *)(lVar28 + 0x30);
    FUN_100004640();
    lVar9 = 0;
    FUN_1007fb264();
    puVar10 = (undefined1 *)(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar11.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    uVar16 = 1;
    *puVar10 = 1;
    *(undefined8 *)(puVar10 + 0x10) = uVar24;
    *(undefined8 *)(puVar10 + 8) = uVar30;
    puVar10[0x18] = 0;
    *(undefined8 *)(puVar10 + 0x20) = uVar25;
    *(undefined **)(puVar10 + 0x28) = puVar20;
    *(undefined8 *)(puVar10 + 0x30) = uVar3;
    puVar20 = puVar8;
    if (bVar6) {
      lVar19 = 0;
      uVar18 = 0;
    }
    else {
      if (lVar27 == 0) {
        puVar20 = (undefined *)0x0;
        lVar19 = 0;
        uVar18 = 0x200;
      }
      else {
        uVar18 = (undefined2)(uVar29 << 8);
        lVar19 = lVar27;
      }
      uVar16 = 0;
    }
    iVar5 = *(int *)(lVar9 + 0x18);
    *(ulong *)(puVar10 + *(int *)(lVar9 + 0x14)) = uVar21;
    *(undefined **)(puVar10 + iVar5) = puVar22;
    puVar1 = (undefined8 *)(puVar10 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar20;
    puVar1[1] = lVar19;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar16;
    pcVar26 = *(code **)(lVar4 + 8);
    _swift_errorRetain(puVar22);
    FUN_100813fa8(puVar8,lVar27,uVar29,uVar23);
    (*pcVar26)(puVar10,uVar2,lVar4);
    FUN_10080a754(puVar10);
    _swift_task_dealloc(puVar10);
    FUN_100004594(lVar28 + 0x10);
  }
  if (bVar6) {
    *(undefined **)(lVar28 + 0x60) = puVar8;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      FUN_1007fb2c4(puVar12,lVar13,uVar15 & 0xffffffff,uVar14 >> 0x10);
    }
    else {
      _swift_errorRetain(puVar8);
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar28 + 0x60,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar12,lVar13,uVar15 & 0xffffffff,uVar14 >> 0x10);
      FUN_100813f90(puVar8,lVar27,uVar29,1);
    }
    _swift_errorRelease(puVar22);
                    /* WARNING: Could not recover jumptable at 0x000100813f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar12,lVar13,uVar14,uVar14 >> 0x10);
  _swift_errorRelease(puVar22);
  puVar12 = (undefined *)0x0;
  if (lVar27 != 0) {
    puVar12 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000100813e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar17 + 8))(puVar12,lVar27);
  return;
}



/* Address: 0x100813f90 | FUN_100813f90 */

void FUN_100813f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100813fa8 | FUN_100813fa8 */

void FUN_100813fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100813fc0 | FUN_100813fc0 */

void FUN_100813fc0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_10;
  *(long *)(unaff_x22 + 0x90) = param_13;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined1 *)(unaff_x22 + 0xb0) = param_5;
  FUN_1007ffcdc(param_3,param_4,param_11,param_12);
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  uVar2 = *(undefined8 *)(param_13 + 0x10);
  plVar1 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081407c;
  FUN_10082ee24(param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,0,uVar2);
  return;
}



/* Address: 0x10081407c | FUN_10081407c */

void FUN_10081407c(undefined *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
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
  undefined8 uVar21;
  undefined8 uVar22;
  long *unaff_x22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  uint local_94;
  undefined *local_68;
  
  lVar24 = *unaff_x22;
  uVar18 = (ulong)*(byte *)(lVar24 + 0xb0);
  lVar25 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar24 + 0xa8));
  puVar14 = param_1;
  uVar15 = param_2;
  uVar20 = param_3;
  FUN_100804a74();
  uVar16 = (uint)uVar20;
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  puVar9 = puVar14;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
    local_94 = 0;
    local_68 = (undefined *)0x0;
    bVar7 = true;
    uVar23 = 1;
    uVar22 = 0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    uVar22 = *(undefined8 *)(lVar24 + 0x70);
    local_94 = (uint)*(byte *)(lVar24 + 0xb0);
    _swift_bridgeObjectRetain(uVar22);
    FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar16 >> 0x10);
    bVar7 = false;
    uVar23 = 0;
    local_68 = (undefined *)0x0;
    puVar9 = *(undefined **)(lVar24 + 0x68);
  }
  else if ((uVar20 & 0xff) == 0) {
    local_94 = uVar16 >> 8 & 1;
    FUN_1007fb28c(puVar14,uVar15,uVar20);
    bVar7 = false;
    uVar23 = 0;
    local_68 = (undefined *)0x0;
    uVar22 = uVar15;
  }
  else {
    FUN_1000f4a4c(puVar14,uVar15,uVar20);
    puVar10 = puVar9;
    FUN_10080b43c();
    local_68 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 0;
    _swift_willThrow();
    _swift_errorRetain(local_68);
    local_94 = 0;
    bVar7 = true;
    uVar23 = 1;
    uVar22 = 0;
    puVar9 = local_68;
  }
  FUN_10080b3ec(*(long *)(lVar24 + 0x90) + 0x18,lVar24 + 0x38);
  uVar21 = *(undefined8 *)(lVar24 + 0xa0);
  uVar26 = *(undefined8 *)(lVar24 + 0x98);
  if (*(long *)(lVar24 + 0x50) == 0) {
    uVar21 = *(undefined8 *)(lVar24 + 0xa0);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar26);
    _swift_bridgeObjectRelease(uVar21);
    FUN_10080a674(lVar24 + 0x38);
  }
  else {
    uVar17 = *(undefined8 *)(lVar24 + 0x88);
    uVar3 = *(undefined8 *)(lVar24 + 0x78);
    puVar10 = *(undefined **)(lVar24 + 0x80);
    FUN_100076508(lVar24 + 0x38,lVar24 + 0x10);
    uVar4 = *(undefined8 *)(lVar24 + 0x28);
    lVar5 = *(long *)(lVar24 + 0x30);
    FUN_100004640(lVar24 + 0x10,uVar4);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar13.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 0x10) = uVar21;
    *(undefined8 *)(puVar12 + 8) = uVar26;
    puVar12[0x18] = 0;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar10;
    *(undefined8 *)(puVar12 + 0x30) = uVar17;
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = (short)(local_94 << 8);
    }
    uVar26 = 0;
    if (!bVar7) {
      uVar26 = uVar22;
    }
    iVar6 = *(int *)(lVar11 + 0x18);
    *(ulong *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar18;
    *(undefined **)(puVar12 + iVar6) = local_68;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar9;
    puVar1[1] = uVar26;
    *(undefined2 *)(puVar1 + 2) = uVar2;
    *(bool *)((long)puVar1 + 0x12) = bVar7;
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_errorRetain();
    FUN_100813fa8(puVar9,uVar22,local_94,uVar23);
    (*pcVar19)(puVar12,uVar4,lVar5);
    uVar20 = uVar20 & 0xffffffff;
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(lVar24 + 0x10);
  }
  if (bVar7 != false) {
    *(undefined **)(lVar24 + 0x60) = puVar9;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(puVar9);
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (lVar24 + 0x60,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
      FUN_100813f90(puVar9,uVar22,local_94,1);
    }
    _swift_errorRelease(local_68);
                    /* WARNING: Could not recover jumptable at 0x0001008144d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar25 + 8))();
    return;
  }
  FUN_1007fb2c4(puVar14,uVar15,uVar20,uVar20 >> 0x10 & 0xffff);
  _swift_errorRelease(local_68);
                    /* WARNING: Could not recover jumptable at 0x000100814490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar25 + 8))(puVar9,uVar22);
  return;
}


