/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10082c00c | FUN_10082c00c */

undefined1 *
FUN_10082c00c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 9;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 9) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 9;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10082c13c;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_10082c13c:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 9;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x109;
    if ((local_e4 & 1) == 0) {
      uVar18 = 9;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x10082c374 | FUN_10082c374 */

undefined8 *
FUN_10082c374(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
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
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 9;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 9;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 9;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_10082c57c;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_10082c57c:
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
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 9;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 9;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x10082c81c | FUN_10082c81c */

void FUN_10082c81c(void)

{
  FUN_10082cfe0();
  return;
}



/* Address: 0x10082c860 | FUN_10082c860 */

void FUN_10082c860(void)

{
  FUN_10082d0a0();
  return;
}



/* Address: 0x10082c8a4 | FUN_10082c8a4 */

void FUN_10082c8a4(void)

{
  FUN_10082d160();
  return;
}



/* Address: 0x10082c8e8 | FUN_10082c8e8 */

void FUN_10082c8e8(void)

{
  FUN_10082cad4();
  return;
}



/* Address: 0x10082c930 | FUN_10082c930 */

void FUN_10082c930(void)

{
  FUN_10082cbec();
  return;
}



/* Address: 0x10082c978 | FUN_10082c978 */

void FUN_10082c978(void)

{
  FUN_10082cd0c();
  return;
}



/* Address: 0x10082c9c0 | FUN_10082c9c0 */

void FUN_10082c9c0(void)

{
  FUN_10082cfe0();
  return;
}



/* Address: 0x10082ca04 | FUN_10082ca04 */

void FUN_10082ca04(void)

{
  FUN_10082d0a0();
  return;
}



/* Address: 0x10082ca48 | FUN_10082ca48 */

void FUN_10082ca48(void)

{
  FUN_10082d160();
  return;
}



/* Address: 0x10082ca8c | FUN_10082ca8c */

void FUN_10082ca8c(void)

{
  FUN_10082cad4();
  return;
}



/* Address: 0x10082cad4 | FUN_10082cad4 */

undefined8
FUN_10082cad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  FUN_10082d38c(local_70,param_1,param_2,param_13,param_4,param_15,auStack_c0,param_16,auStack_100,
                param_5,param_6,param_7,param_8,param_9,param_10,uVar1);
  return local_70[0];
}



/* Address: 0x10082cba4 | FUN_10082cba4 */

void FUN_10082cba4(void)

{
  FUN_10082cbec();
  return;
}



/* Address: 0x10082cbec | FUN_10082cbec */

undefined8
FUN_10082cbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  FUN_10082d3f4(local_70,param_1,param_2,param_14,param_4,&local_78,param_16,auStack_c0,param_17,
                auStack_100,param_6,param_7,param_8,param_9,param_10,param_11,uVar1);
  return local_70[0];
}



/* Address: 0x10082ccc4 | FUN_10082ccc4 */

void FUN_10082ccc4(void)

{
  FUN_10082cd0c();
  return;
}



/* Address: 0x10082cd0c | FUN_10082cd0c */

undefined8
FUN_10082cd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
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
  FUN_10082d454(&local_58,param_1,param_2,param_13,param_4,param_15,auStack_b0,param_16,auStack_f0,
                param_5,param_6,param_7,param_8,param_9,param_10,uVar1);
  return local_58;
}



/* Address: 0x10082cde8 | FUN_10082cde8 */

void FUN_10082cde8(void)

{
  FUN_10082cfe0();
  return;
}



/* Address: 0x10082ce30 | FUN_10082ce30 */

void FUN_10082ce30(void)

{
  FUN_10082d0a0();
  return;
}



/* Address: 0x10082ce78 | FUN_10082ce78 */

void FUN_10082ce78(void)

{
  FUN_10082d160();
  return;
}



/* Address: 0x10082cec0 | FUN_10082cec0 */

void FUN_10082cec0(void)

{
  FUN_10082cad4();
  return;
}



/* Address: 0x10082cf08 | FUN_10082cf08 */

void FUN_10082cf08(void)

{
  FUN_10082cbec();
  return;
}



/* Address: 0x10082cf50 | FUN_10082cf50 */

void FUN_10082cf50(void)

{
  FUN_10082cd0c();
  return;
}



/* Address: 0x10082cf98 | FUN_10082cf98 */

void FUN_10082cf98(void)

{
  FUN_10082cfe0();
  return;
}



/* Address: 0x10082cfe0 | FUN_10082cfe0 */

void FUN_10082cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10082d38c(param_1,param_2,param_13,param_4,param_15,auStack_70,param_16,auStack_b0,param_5,
                param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Address: 0x10082d058 | FUN_10082d058 */

void FUN_10082d058(void)

{
  FUN_10082d0a0();
  return;
}



/* Address: 0x10082d0a0 | FUN_10082d0a0 */

void FUN_10082d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10082d3f4(param_1,param_2,param_14,param_4,param_5,param_16,auStack_70,param_17,auStack_b0,
                param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}



/* Address: 0x10082d118 | FUN_10082d118 */

void FUN_10082d118(void)

{
  FUN_10082d160();
  return;
}



/* Address: 0x10082d160 | FUN_10082d160 */

void FUN_10082d160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10082d454(param_1,param_2,param_13,param_4,param_15,auStack_70,param_16,auStack_b0,param_5,
                param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Address: 0x10082d1d8 | FUN_10082d1d8 */

void FUN_10082d1d8(void)

{
  FUN_10082cad4();
  return;
}



/* Address: 0x10082d220 | FUN_10082d220 */

void FUN_10082d220(void)

{
  FUN_10082cbec();
  return;
}



/* Address: 0x10082d268 | FUN_10082d268 */

void FUN_10082d268(void)

{
  FUN_10082cd0c();
  return;
}



/* Address: 0x10082d2b0 | FUN_10082d2b0 */

void FUN_10082d2b0(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db3c);
  return;
}



/* Address: 0x10082d2bc | FUN_10082d2bc */

void FUN_10082d2bc(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db50);
  return;
}



/* Address: 0x10082d2c8 | FUN_10082d2c8 */

void FUN_10082d2c8(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db64);
  return;
}



/* Address: 0x10082d2d4 | FUN_10082d2d4 */

void FUN_10082d2d4(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db78);
  return;
}



/* Address: 0x10082d2e0 | thunk_FUN_10082d2b0 */

void thunk_FUN_10082d2b0(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db3c);
  return;
}



/* Address: 0x10082d2e4 | thunk_FUN_10082d2bc */

void thunk_FUN_10082d2bc(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db50);
  return;
}



/* Address: 0x10082d2e8 | thunk_FUN_10082d2c8 */

void thunk_FUN_10082d2c8(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db64);
  return;
}



/* Address: 0x10082d2ec | thunk_FUN_10082d2d4 */

void thunk_FUN_10082d2d4(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10082db78);
  return;
}



/* Address: 0x10082d2f0 | FUN_10082d2f0 */

void FUN_10082d2f0(String *param_1)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  *param_1 = SVar1;
  return;
}



/* Address: 0x10082d328 | FUN_10082d328 */

void FUN_10082d328(void)

{
  Swift::RawRepresentable::_get_rawValue();
  return;
}



/* Address: 0x10082d354 | FUN_10082d354 */

void FUN_10082d354(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + param_4 + -0x10);
  (**(code **)(*(long *)(param_3 + param_4 + -8) + 0x18))();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10082d38c | FUN_10082d38c */

void FUN_10082d38c(void)

{
  FUN_100804cd4();
  return;
}



/* Address: 0x10082d3f4 | FUN_10082d3f4 */

void FUN_10082d3f4(void)

{
  FUN_1008052d4();
  return;
}



/* Address: 0x10082d454 | FUN_10082d454 */

void FUN_10082d454(void)

{
  FUN_100805988();
  return;
}



/* Address: 0x10082d4bc | FUN_10082d4bc */

void FUN_10082d4bc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1000fb4c4(unaff_x20 + 0x18,&DAT_100fe7238,&DAT_100c7c0c0);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10082d4f8 | FUN_10082d4f8 */

undefined8 FUN_10082d4f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_10082f4fc();
  lVar2 = lVar1;
  FUN_10082d900();
  _swift_allocObject();
  *(long *)(lVar2 + 0x10) = lVar1;
  FUN_1000f8cac(param_3 + 0x18,lVar2 + 0x18,&DAT_100fe7238,&DAT_100c7c0c0);
  FUN_10036c934(param_1,param_2);
  return param_1;
}



/* Address: 0x10082d584 | FUN_10082d584 */

void FUN_10082d584(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar2 = *(undefined8 *)(in_stack_00000010 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000008;
  *(long *)(unaff_x22 + 0x48) = in_stack_00000010;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10082d628;
  FUN_10082f604(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,&DAT_100c7c0d8,unaff_x22 + 0x10,
                uVar2,in_stack_00000018);
  return;
}



/* Address: 0x10082d628 | FUN_10082d628 */

void FUN_10082d628(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010082d668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10082d66c | FUN_10082d66c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010082d770 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10082d66c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  
  puVar5 = &DAT_100fe73e0;
  FUN_1000f8cac(param_4,unaff_x22 + 0x38,&DAT_100fe73e0,&DAT_100c7c110);
  puVar2 = &DAT_100f05450;
  _swift_allocObject(&DAT_100f05450,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  puVar3 = &DAT_100fe73e8;
  FUN_1000f7830(&DAT_100fe73e8,&DAT_100c7c128);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  FUN_10082da9c();
  *(undefined **)(unaff_x22 + 0x30) = puVar3;
  lVar4 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar4);
  FUN_10036c934(param_7,param_8);
  _swift_retain(param_9);
  FUN_1000f7830(&DAT_100fe73e0,&DAT_100c7c110);
  puVar3 = puVar5;
  FUN_10082daec();
  Swift::AsyncMapSequence::_init(lVar4,puVar3,&DAT_100c7c120,puVar2,puVar5,&DAT_100f05428,puVar3);
  iVar1 = *param_5;
  plVar6 = (long *)(ulong)(uint)param_5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10082d7d8;
                    /* WARNING: Could not recover jumptable at 0x00010082d7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_5))
            (plVar6,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10082d7d8 | FUN_10082d7d8 */

void FUN_10082d7d8(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  FUN_1000fb4c4(lVar1 + 0x10,&DAT_100fe7400,&DAT_100c7c130);
                    /* WARNING: Could not recover jumptable at 0x00010082d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10082d834 | FUN_10082d834 */

void FUN_10082d834(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = *param_2;
  _swift_task_switch(FUN_10082d858,0,0);
  return;
}



/* Address: 0x10082d858 | FUN_10082d858 */

void FUN_10082d858(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x10);
  FUN_10082d900();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_1000f8cac(lVar1 + 0x18,param_1 + 0x18,&DAT_100fe7238,&DAT_100c7c0c0);
  *puVar5 = uVar2;
  puVar5[1] = uVar4;
  puVar5[2] = param_1;
  FUN_10036c934(uVar2,uVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  _swift_bridgeObjectRetain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010082d8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10082d900 | FUN_10082d900 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10082d900(void)

{
  return ZEXT816(0x100fe7378);
}



/* Address: 0x10082d920 | FUN_10082d920 */

void FUN_10082d920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_10082d66c(plVar7,param_1,param_2,param_3,param_4,uVar4,uVar2,uVar5,uVar3,uVar6,uVar1);
  return;
}



/* Address: 0x10082d9d0 | FUN_10082d9d0 */

undefined1  [16] FUN_10082d9d0(void)

{
  return ZEXT816(0x100f05428);
}



/* Address: 0x10082d9e0 | FUN_10082d9e0 */

void FUN_10082d9e0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10082da18 | FUN_10082da18 */

void FUN_10082da18(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_10082d834(plVar3,param_1,param_2,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10082da9c | FUN_10082da9c */

void FUN_10082da9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe73f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe73e8;
  FUN_1000f8b08(&DAT_100fe73e8,&DAT_100c7c128);
  puVar2 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,puVar1);
  DAT_100fe73f0 = puVar2;
  return;
}



/* Address: 0x10082daec | FUN_10082daec */

void FUN_10082daec(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe73f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe73e0;
  FUN_1000f8b08(&DAT_100fe73e0,&DAT_100c7c110);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7d4e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d4e0,puVar1);
  DAT_100fe73f8 = pTVar2;
  return;
}



/* Address: 0x10082db3c | FUN_10082db3c */

void FUN_10082db3c(void)

{
  FUN_10080a18c();
  return;
}



/* Address: 0x10082db50 | FUN_10082db50 */

void FUN_10082db50(void)

{
  FUN_10080a18c();
  return;
}



/* Address: 0x10082db64 | FUN_10082db64 */

void FUN_10082db64(void)

{
  FUN_10080a2e4();
  return;
}


