/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008049cc | FUN_1008049cc */

void FUN_1008049cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100804918(param_1,*(undefined8 *)(unaff_x20 + 0x10),&DAT_100fe71d8,&DAT_100c7bad8,
                &DAT_100fe6fb8,&DAT_100c7cc90);
  return;
}



/* Address: 0x100804a04 | FUN_100804a04 */

void FUN_100804a04(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100804918(param_1,*(undefined8 *)(unaff_x20 + 0x10),&DAT_100fe71f0,&DAT_100c7bae8,
                &DAT_100fe7190,&DAT_100c7baa8);
  return;
}



/* Address: 0x100804a3c | FUN_100804a3c */

void FUN_100804a3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100804918(param_1,*(undefined8 *)(unaff_x20 + 0x10),&DAT_100fe71f8,&DAT_100c7baf0,
                &DAT_100fe7158,&DAT_100c7ba80);
  return;
}



/* Address: 0x100804a74 | FUN_100804a74 */

undefined *
FUN_100804a74(ulong param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  ushort uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_178 [56];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  ushort uStack_110;
  undefined1 uStack_10e;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ushort local_d0;
  undefined1 local_ce;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 local_81;
  ushort uStack_80;
  char cStack_7e;
  undefined *local_78;
  
  if ((param_1 & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar8 = param_2;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar9 != 0) {
      local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1008354a0(0,lVar9,0);
      puVar7 = (undefined8 *)(param_2 + 0x20);
      do {
        puVar8 = local_78;
        uStack_80 = (ushort)((uint)*(undefined4 *)((long)puVar7 + 0x2f) >> 8);
        uVar4 = uStack_80;
        cStack_7e = (char)((uint)*(undefined4 *)((long)puVar7 + 0x2f) >> 0x18);
        cVar5 = cStack_7e;
        uVar14 = puVar7[3];
        uVar13 = puVar7[2];
        uVar12 = puVar7[5];
        uVar11 = puVar7[4];
        uStack_b8 = puVar7[1];
        local_c0 = *puVar7;
        uStack_88 = (undefined7)uVar12;
        uVar2 = uStack_88;
        local_81 = (undefined1)((ulong)uVar12 >> 0x38);
        uVar3 = local_81;
        uStack_a8 = puVar7[1];
        uStack_b0 = *puVar7;
        local_a0 = uVar13;
        uStack_98 = uVar14;
        local_90 = uVar11;
        FUN_1007fe2c8(&uStack_b0,&local_100);
        FUN_1007fe2c8(&uStack_b0,&local_100);
        FUN_1007fc148(uVar13,uVar14,uVar11,uVar12,uVar4,cVar5);
        uVar10 = uVar4;
        if (cVar5 == '\x01') {
          _swift_errorRetain(uVar13);
          uVar6 = 1;
        }
        else {
          if ((uVar4 & 0xff00) != 0x200) {
            uVar10 = uVar4 & 0xff | 0x100;
          }
          _swift_bridgeObjectRetain(uVar14);
          FUN_1007fb28c(uVar11,uVar12,uVar4);
          uVar6 = 0;
        }
        FUN_10080aeec(&uStack_b0);
        uStack_138 = uStack_b8;
        local_140 = local_c0;
        uStack_f8 = uStack_b8;
        local_100 = local_c0;
        local_130 = uVar13;
        uStack_128 = uVar14;
        local_120 = uVar11;
        uStack_118 = uVar2;
        uStack_111 = uVar3;
        uStack_110 = uVar10;
        uStack_10e = uVar6;
        local_f0 = uVar13;
        uStack_e8 = uVar14;
        local_e0 = uVar11;
        uStack_d8 = uVar12;
        local_d0 = uVar10;
        local_ce = uVar6;
        FUN_1007fe2c8(&local_140,auStack_178);
        FUN_10080aeec(&local_100);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        local_78 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          FUN_1008354a0(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_78 + 0x10) = uVar1 + 1;
        *(uint *)(local_78 + uVar1 * 0x38 + 0x4f) =
             CONCAT13(uStack_10e,CONCAT21(uStack_110,uStack_111));
        *(undefined8 *)(local_78 + uVar1 * 0x38 + 0x38) = uStack_128;
        *(undefined8 *)(local_78 + uVar1 * 0x38 + 0x30) = local_130;
        *(ulong *)(local_78 + uVar1 * 0x38 + 0x48) = CONCAT17(uStack_111,uStack_118);
        *(undefined8 *)(local_78 + uVar1 * 0x38 + 0x40) = local_120;
        *(undefined8 *)(local_78 + uVar1 * 0x38 + 0x28) = uStack_138;
        *(undefined8 *)(local_78 + uVar1 * 0x38 + 0x20) = local_140;
        puVar7 = puVar7 + 7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      param_5 = param_5 & 0xffffffff;
      puVar8 = local_78;
    }
  }
  FUN_1007fb278(param_3,param_4,param_5,param_5 >> 0x10 & 0xffff);
  return puVar8;
}



/* Address: 0x100804cd4 | FUN_100804cd4 */

/* WARNING: Removing unreachable block (ram,0x000100804f44) */

void FUN_100804cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,code *param_8,
                  undefined8 param_9,ulong param_10,undefined1 *param_11,long param_12,long param_13
                  ,undefined8 param_14,undefined8 param_15,undefined *param_16,undefined8 param_17,
                  long param_18)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  Optional OVar5;
  byte bVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  Date DVar12;
  uint uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined8 auStack_180 [2];
  undefined8 local_170;
  undefined1 auStack_16e [6];
  undefined8 local_168;
  undefined8 *local_160;
  undefined4 local_154;
  undefined1 *local_150;
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  uint local_f4;
  long local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_90 [2];
  long local_80;
  undefined1 *local_78;
  long local_70;
  
  local_f0 = param_12;
  local_150 = param_11;
  local_148 = param_10;
  local_110 = param_1;
  FUN_1007ffcdc(param_2,param_3,param_6,param_7);
  local_154 = (undefined4)param_4;
  local_140 = param_3;
  local_138 = param_2;
  (*param_8)();
  uVar17 = param_2;
  uVar21 = param_3;
  uVar20 = param_4;
  FUN_100804a74();
  uVar13 = (uint)uVar20;
  local_130 = param_5;
  FUN_1007fb2c4(param_3,param_4,param_7,param_7 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_2);
  lVar7 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_18,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_100 = CONCAT71(extraout_var,OVar5.value);
  local_108 = *(long *)(local_100 + -8);
  lVar16 = *(long *)(local_108 + 0x40);
  puVar4 = (undefined1 *)((long)auStack_180 - (lVar16 + 0xfU & 0xfffffffffffffff0));
  local_128 = uVar17;
  local_120 = uVar21;
  local_f4 = uVar13;
  local_e8 = puVar4;
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = uVar17;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar8 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar8,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar17 = 0;
    uVar21 = 0;
    uVar20 = 0x200;
  }
  else {
    FUN_1007fb28c(uVar17,uVar21,uVar20);
  }
  lVar18 = (long)puVar4 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  local_b0 = CONCAT62(local_b0._2_6_,(short)uVar20);
  local_80 = param_18;
  local_78 = local_150;
  local_70 = local_f0;
  puVar8 = &DAT_100fe7180;
  local_118 = lVar16;
  local_c0 = uVar17;
  uStack_b8 = uVar21;
  FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
  puVar9 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  FUN_100617fb8(lVar18,FUN_10080aff0,local_90,puVar8,puVar9,lVar7,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,&local_e0);
  FUN_1007fb2d8(uVar17,uVar21,uVar20);
  (**(code **)(local_108 + 0x20))(local_e8,lVar18,local_100);
  local_f0 = param_18;
  FUN_1000f8cac(local_148,&local_c0,&DAT_100fe7238,&DAT_100c7c0c0);
  uVar13 = local_f4;
  if (local_a8 == 0) {
    uVar2 = local_f4 >> 0x10;
    _swift_errorRelease(0);
    FUN_1007fb2c4(local_128,local_120,uVar13,uVar2);
    _swift_bridgeObjectRelease(local_140);
    _swift_bridgeObjectRelease(local_138);
    _swift_bridgeObjectRelease(local_130);
    FUN_10080a674(&local_c0);
    lVar16 = local_100;
    puVar22 = local_e8;
  }
  else {
    local_168 = param_17;
    local_170 = param_15;
    local_148 = CONCAT44(local_148._4_4_,local_f4 >> 0x10);
    auStack_180[1] = param_14;
    FUN_100076508(&local_c0,local_90);
    lVar18 = local_70;
    puVar3 = local_78;
    puVar10 = local_90;
    FUN_100004640(puVar10,local_78);
    lVar11 = 0;
    local_160 = puVar10;
    FUN_1007fb264();
    puVar19 = puVar4 + -(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_150 = puVar4;
    FUN_1007fb128();
    DVar12.unknown = param_16;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    *puVar19 = 0;
    uVar17 = local_140;
    *(undefined8 *)(puVar19 + 8) = local_138;
    *(undefined8 *)(puVar19 + 0x10) = uVar17;
    puVar19[0x18] = (char)local_154;
    *(undefined8 *)(puVar19 + 0x20) = local_170;
    *(undefined **)(puVar19 + 0x28) = param_16;
    *(undefined8 *)(puVar19 + 0x30) = local_168;
    puVar22 = local_e8;
    lVar16 = local_100;
    local_b0 = local_f0;
    local_a8 = param_13;
    local_a0 = auStack_180[1];
    FUN_1006946ec(&local_e0,FUN_10080b008,&local_c0,local_100,
                  PTR___type_metadata_for_Swift_Never_100eadc38,&DAT_100f047e0,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined8 *)(puVar19 + *(int *)(lVar11 + 0x14)) = local_130;
    *(undefined8 *)(puVar19 + iVar1) = 0;
    puVar10 = (undefined8 *)(puVar19 + *(int *)(lVar11 + 0x1c));
    puVar10[1] = uStack_d8;
    *puVar10 = local_e0;
    *(undefined2 *)(puVar10 + 2) = local_d0;
    *(undefined1 *)((long)puVar10 + 0x12) = 0;
    pcVar14 = *(code **)(lVar18 + 8);
    _swift_errorRetain(0);
    (*pcVar14)(puVar19,puVar3,lVar18);
    FUN_1007fb2c4(local_128,local_120,local_f4,local_148 & 0xffffffff);
    _swift_errorRelease(0);
    FUN_10080a754(puVar19);
    puVar4 = local_150;
    FUN_100004594(local_90);
  }
  lVar18 = local_108;
  lVar15 = (long)puVar4 - (local_118 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(local_108 + 0x20))(lVar15,puVar22,lVar16);
  lVar11 = lVar15;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar15,1,lVar7);
  lVar7 = local_f0;
  uVar17 = local_110;
  if ((int)lVar11 == 1) {
    (**(code **)(lVar18 + 8))(lVar15,lVar16);
    (**(code **)(*(long *)(local_f0 + -8) + 0x38))(local_110,1,1);
  }
  else {
    lVar16 = *(long *)(local_f0 + -8);
    (**(code **)(lVar16 + 0x20))(local_110,lVar15,local_f0);
    (**(code **)(lVar16 + 0x38))(uVar17,0,1,lVar7);
  }
  return;
}



/* Address: 0x1008052d4 | FUN_1008052d4 */

/* WARNING: Removing unreachable block (ram,0x000100805588) */

void FUN_1008052d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  code *param_9,undefined4 param_10,undefined4 param_11,ulong param_12,
                  undefined8 *param_13,code *param_14,code *param_15,undefined4 param_16,
                  undefined4 param_17,undefined8 param_18,undefined *param_19,long param_20,
                  long param_21)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  Optional OVar6;
  long lVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Date DVar12;
  code *pcVar13;
  undefined8 *puVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  long local_160;
  long local_158;
  long local_150;
  undefined4 local_144;
  undefined8 local_140;
  code *local_138;
  long local_130;
  undefined8 *local_128;
  code *local_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint local_e0;
  uint local_dc;
  code *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  long local_b0;
  undefined1 local_98 [8];
  undefined8 local_90 [2];
  long local_80;
  undefined8 *local_78;
  code *local_70;
  
  local_120 = param_14;
  local_128 = param_13;
  local_118 = param_12;
  local_140 = param_6;
  local_e8 = param_1;
  FUN_1007ffcdc(param_2,param_3,param_7,param_8);
  local_144 = (undefined4)param_4;
  local_110 = param_3;
  local_108 = param_2;
  (*param_9)();
  local_e0 = (uint)param_5;
  uVar21 = param_2;
  uVar28 = param_3;
  uVar25 = param_4;
  FUN_100804a74();
  uVar16 = (uint)uVar25;
  local_100 = param_5;
  FUN_1007fb2c4(param_3,param_4,param_8,param_8 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_2);
  lVar7 = 0;
  local_d0 = param_21;
  _swift_getTupleTypeMetadata2(0,param_21,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  local_160 = *(long *)(lVar7 + -8);
  lVar18 = *(long *)(local_160 + 0x40);
  pcVar24 = (code *)((long)&local_160 - (lVar18 + 0xfU & 0xfffffffffffffff0));
  local_f8 = uVar21;
  uStack_f0 = uVar28;
  local_dc = uVar16;
  local_d8 = pcVar24;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    local_90[0] = uVar21;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar8 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar8,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar21 = 0;
    uVar28 = 0;
    uVar25 = 0x200;
  }
  else {
    FUN_1007fb28c(uVar21,uVar28,uVar25);
  }
  lVar19 = (long)pcVar24 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  local_138 = pcVar24;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_150 = CONCAT71(extraout_var,OVar6.value);
  local_158 = *(long *)(local_150 + -8);
  uVar27 = *(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar19 - uVar27;
  local_b8 = (undefined2)uVar25;
  local_80 = local_d0;
  local_78 = local_128;
  local_70 = local_120;
  puVar8 = &DAT_100fe7180;
  local_130 = lVar19;
  local_c8 = uVar21;
  uStack_c0 = uVar28;
  FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
  puVar9 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  FUN_100617fb8(lVar18,FUN_10080aecc,local_90,puVar8,puVar9,lVar7,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_98);
  FUN_1007fb2d8(uVar21,uVar28,uVar25);
  pcVar24 = local_138;
  lVar20 = lVar18 - uVar27;
  (**(code **)(local_158 + 0x20))(lVar20,lVar18,local_150);
  lVar18 = local_160;
  pcVar23 = *(code **)(local_160 + 0x30);
  lVar10 = lVar20;
  (*pcVar23)(lVar20,1,lVar7);
  lVar26 = local_d0;
  pcVar22 = local_d8;
  if ((int)lVar10 == 1) {
    iVar2 = *(int *)(lVar7 + 0x30);
    lVar18 = *(long *)(local_d0 + -8);
    (**(code **)(lVar18 + 0x10))(lVar19,local_140,local_d0);
    *(byte *)(lVar19 + iVar2) = (byte)local_e0 & 1;
    lVar10 = lVar20;
    (*pcVar23)(lVar20,1,lVar7);
    if ((int)lVar10 != 1) {
      (**(code **)(local_158 + 8))(lVar20,local_150);
    }
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar19,lVar20,lVar7);
    lVar18 = *(long *)(local_d0 + -8);
    lVar26 = local_d0;
  }
  local_e0 = (uint)*(byte *)(lVar19 + *(int *)(lVar7 + 0x30));
  (**(code **)(lVar18 + 0x20))(pcVar22,lVar19,lVar26);
  uVar15 = 0x7238;
  FUN_1000f8cac(local_118,&local_c8,&DAT_100fe7238,&DAT_100c7c0c0);
  uVar16 = local_dc;
  if (local_b0 == 0) {
    uVar3 = local_dc >> 0x10;
    _swift_errorRelease(0);
    FUN_1007fb2c4(local_f8,uStack_f0,uVar16,uVar3);
    _swift_bridgeObjectRelease(local_110);
    _swift_bridgeObjectRelease(local_108);
    _swift_bridgeObjectRelease(local_100);
    FUN_10080a674(&local_c8);
  }
  else {
    local_130 = param_20;
    local_118 = CONCAT44(local_118._4_4_,local_dc >> 0x10);
    local_138 = param_15;
    FUN_100076508(&local_c8,local_90);
    pcVar23 = local_70;
    puVar4 = local_78;
    puVar11 = local_90;
    puVar14 = local_78;
    FUN_100004640();
    lVar7 = 0;
    local_128 = puVar11;
    FUN_1007fb264();
    local_120 = pcVar24;
    pcVar24 = pcVar24 + -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    FUN_1007fb128();
    DVar12.unknown = param_19;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    lVar26 = local_d0;
    pcVar22 = local_d8;
    *pcVar24 = (code)0x0;
    *(undefined8 *)(pcVar24 + 8) = local_108;
    *(undefined8 *)(pcVar24 + 0x10) = local_110;
    pcVar24[0x18] = SUB41(local_144,0);
    *(undefined8 *)(pcVar24 + 0x20) = param_18;
    *(undefined **)(pcVar24 + 0x28) = param_19;
    *(long *)(pcVar24 + 0x30) = local_130;
    _swift_errorRetain(0);
    pcVar13 = pcVar22;
    (*local_138)();
    uVar17 = 0x100;
    if ((local_e0 & 1) == 0) {
      uVar17 = 0;
    }
    iVar2 = *(int *)(lVar7 + 0x18);
    *(undefined8 *)(pcVar24 + *(int *)(lVar7 + 0x14)) = local_100;
    *(undefined8 *)(pcVar24 + iVar2) = 0;
    pcVar1 = pcVar24 + *(int *)(lVar7 + 0x1c);
    *(code **)pcVar1 = pcVar13;
    *(undefined8 **)(pcVar1 + 8) = puVar14;
    *(ushort *)(pcVar1 + 0x10) = uVar17 | uVar15 & 0xff;
    pcVar1[0x12] = (code)0x0;
    (**(code **)(pcVar23 + 8))(pcVar24,puVar4,pcVar23);
    FUN_1007fb2c4(local_f8,uStack_f0,local_dc,local_118 & 0xffffffff);
    _swift_errorRelease(0);
    FUN_10080a754(pcVar24);
    FUN_100004594(local_90);
  }
  (**(code **)(lVar18 + 0x20))(local_e8,pcVar22,lVar26);
  return;
}



/* Address: 0x1008058fc | FUN_1008058fc */

void FUN_1008058fc(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x21;
  
  uVar1 = *(undefined1 *)((long)param_2 + 0x11);
  (*param_3)(*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  if (unaff_x21 == 0) {
    lVar2 = 0;
    _swift_getTupleTypeMetadata2(0,param_5,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x30)) = uVar1;
  }
  else {
    *param_6 = unaff_x21;
  }
  return;
}



/* Address: 0x100805988 | FUN_100805988 */

void FUN_100805988(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,ulong param_7,code *param_8,undefined8 param_9,
                  undefined1 *param_10,undefined8 param_11,long param_12,long param_13,
                  undefined8 param_14,undefined8 param_15,undefined *param_16,undefined8 param_17,
                  long param_18)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Result RVar4;
  long lVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  Date DVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x21;
  undefined1 *puVar19;
  ulong auStack_1b0 [2];
  undefined1 auStack_19e [2];
  undefined4 local_19c;
  long local_198;
  long local_190 [4];
  undefined4 local_16c;
  undefined8 *local_168;
  ulong local_160;
  undefined1 *local_158;
  uint local_14c;
  ulong local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 *puStack_78;
  undefined8 local_58;
  
  local_190[1] = param_12;
  local_190[0] = param_11;
  local_158 = param_10;
  lVar5 = 0;
  auStack_1b0[1] = param_1;
  _swift_getTupleTypeMetadata2(0,param_18,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  lVar17 = (long)auStack_1b0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = 0;
  local_128 = lVar17;
  FUN_1007fb264();
  puVar19 = (undefined1 *)
            (lVar17 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_198 = lVar6;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  local_190[2] = lVar5;
  RVar4 = Swift::Result::typeMetadataAccessor();
  local_130 = CONCAT71(extraout_var,RVar4.value);
  local_138 = *(long *)(local_130 + -8);
  uVar18 = *(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_140 = (long)puVar19 - uVar18;
  lVar5 = local_140 - uVar18;
  FUN_1007ffcdc(param_2,param_3,param_6,param_7);
  local_19c = (undefined4)param_4;
  puVar7 = param_2;
  uVar12 = param_3;
  (*param_8)();
  uVar18 = (ulong)param_5;
  puVar13 = puVar7;
  uVar14 = uVar12;
  uVar16 = param_4;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  local_160 = uVar18;
  local_148 = uVar14;
  FUN_1007fb2c4(uVar12,param_4,param_7,param_7 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_190[3] = local_148;
  local_14c = uVar15;
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
    puVar8 = puVar13;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      uVar15 = uVar15 & 0x1ff;
      FUN_1007fb28c(puVar13,local_148,uVar16);
      local_16c = 0;
      local_168 = puVar13;
      uVar18 = local_190[3];
      goto LAB_100805c48;
    }
    FUN_10080a3bc();
    puVar8 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar7,0,0);
    *puVar7 = param_2;
    puVar7[1] = param_3;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_3);
  }
  uVar15 = 0;
  local_190[3] = 0;
  local_16c = 1;
  local_168 = puVar8;
  uVar18 = local_148;
LAB_100805c48:
  local_90 = param_18;
  local_58 = 0;
  local_148 = CONCAT44(local_148._4_4_,uVar15);
  local_c0._0_3_ = CONCAT12((char)local_16c,(short)uVar15);
  local_88 = local_190[0];
  puStack_78 = &local_58;
  local_80 = local_190[1];
  puVar9 = &DAT_100fe7230;
  local_d0 = local_168;
  uStack_c8 = local_190[3];
  FUN_1000f7830(&DAT_100fe7230,&DAT_100c7bbe0);
  FUN_100805f50(lVar5,FUN_10080ae3c,local_a0,puVar9,local_190[2]);
  FUN_1000f8cac(local_158,&local_d0,&DAT_100fe7238,&DAT_100c7c0c0);
  if (local_b8 == 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(local_160);
    FUN_10080a674(&local_d0);
    lVar6 = local_130;
  }
  else {
    FUN_100076508(&local_d0,local_a0);
    lVar3 = local_80;
    uVar12 = local_88;
    puVar10 = local_a0;
    FUN_100004640(puVar10,local_88);
    local_158 = puVar10;
    FUN_1007fb128();
    DVar11.unknown = param_16;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar19 = 0;
    *(undefined8 **)(puVar19 + 8) = param_2;
    *(undefined8 *)(puVar19 + 0x10) = param_3;
    puVar19[0x18] = (char)local_19c;
    *(undefined8 *)(puVar19 + 0x20) = param_15;
    *(undefined **)(puVar19 + 0x28) = param_16;
    *(undefined8 *)(puVar19 + 0x30) = param_17;
    uVar14 = local_58;
    local_c0 = param_18;
    local_b8 = param_13;
    local_b0 = param_14;
    _swift_errorRetain(local_58);
    puVar9 = &DAT_100fe7180;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    lVar6 = local_130;
    FUN_10062f364(&local_f0,thunk_FUN_10080ae48,&local_d0,local_130,puVar9);
    lVar17 = local_198;
    iVar1 = *(int *)(local_198 + 0x18);
    *(ulong *)(puVar19 + *(int *)(local_198 + 0x14)) = local_160;
    *(undefined8 *)(puVar19 + iVar1) = uVar14;
    puVar7 = (undefined8 *)(puVar19 + *(int *)(lVar17 + 0x1c));
    puVar7[1] = uStack_e8;
    *puVar7 = local_f0;
    *(undefined2 *)(puVar7 + 2) = local_e0;
    *(undefined1 *)((long)puVar7 + 0x12) = local_de;
    (**(code **)(lVar3 + 8))(puVar19,uVar12,lVar3);
    FUN_10080a754(puVar19);
    FUN_100004594(local_a0);
  }
  lVar17 = local_138;
  uVar2 = local_14c;
  uVar15 = local_14c >> 0x10;
  (**(code **)(local_138 + 0x10))(local_140,lVar5,lVar6);
  lVar3 = local_128;
  FUN_100628180(local_128,lVar6,local_a0);
  (**(code **)(lVar17 + 8))(lVar5,lVar6);
  FUN_10080a6bc(local_168,local_190[3],local_148 & 0xffffffff,local_16c);
  FUN_1007fb2c4(puVar13,uVar18,uVar2,uVar15);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_18 + -8) + 0x20))(auStack_1b0[1],lVar3,param_18);
  }
  _swift_errorRelease(local_58);
  return;
}



/* Address: 0x100805f50 | FUN_100805f50 */

void FUN_100805f50(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  Result RVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_4 + 0x10);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar5);
  lVar2 = lVar5;
  _swift_getEnumCaseMultiPayload(lVar5,param_4);
  if ((int)lVar2 == 1) {
    (**(code **)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x20))
              (param_1,lVar5,*(long *)(param_4 + 0x18));
    RVar1 = Swift::Result::typeMetadataAccessor();
    _swift_storeEnumTagMultiPayload(param_1,RVar1.value,1);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar3);
    (*param_2)(param_1,puVar4);
    (**(code **)(lVar6 + 8))(puVar4,lVar3);
  }
  return;
}



/* Address: 0x10080607c | FUN_10080607c */

/* WARNING: Removing unreachable block (ram,0x0001008060c4) */

void FUN_10080607c(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  Result RVar2;
  long lVar3;
  
  uVar1 = *(undefined1 *)((long)param_2 + 0x11);
  (*param_3)(*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,param_6,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x30)) = uVar1;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar2.value,0);
  return;
}



/* Address: 0x100806184 | FUN_100806184 */

void FUN_100806184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_15 + 0x10);
  puVar1 = &DAT_100f04ab8;
  _swift_allocObject(&DAT_100f04ab8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_100804cd4(param_1,param_2,param_3,param_4,param_5,param_13,param_14,thunk_FUN_10080af20,puVar1
                ,param_15 + 0x18,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_16
               );
  _swift_release(puVar1);
  return;
}



/* Address: 0x10080626c | FUN_10080626c */

void FUN_10080626c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_16 + 0x10);
  puVar1 = &DAT_100f04a90;
  _swift_allocObject(&DAT_100f04a90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1008052d4(param_1,param_2,param_3,param_4,param_5,param_6,param_14,param_15,
                thunk_FUN_10080af20,puVar1,param_16 + 0x18,param_7,param_8,param_9,param_10,param_11
                ,param_12,param_13,param_17);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100806358 | FUN_100806358 */

void FUN_100806358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_15 + 0x10);
  puVar1 = &DAT_100f04a68;
  _swift_allocObject(&DAT_100f04a68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_100805988(param_1,param_2,param_3,param_4,param_5,param_13,param_14,thunk_FUN_10080af20,puVar1
                ,param_15 + 0x18,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_16
               );
  _swift_release(puVar1);
  return;
}



/* Address: 0x100806454 | FUN_100806454 */

void FUN_100806454(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined8 param_18)

{
  Optional OVar1;
  Result RVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined7 extraout_var_00;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x138) = param_17;
  *(undefined8 *)(unaff_x22 + 0x140) = param_18;
  *(undefined8 *)(unaff_x22 + 0x128) = param_13;
  *(undefined8 *)(unaff_x22 + 0x130) = param_14;
  *(undefined8 *)(unaff_x22 + 0x120) = param_12;
  *(undefined8 *)(unaff_x22 + 0x118) = param_11;
  *(undefined8 *)(unaff_x22 + 0x110) = param_10;
  *(undefined8 *)(unaff_x22 + 0x108) = param_9;
  *(undefined1 *)(unaff_x22 + 0xcc) = param_7;
  *(char *)(unaff_x22 + 0xcb) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x100) = param_8;
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_18,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x150) = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x158) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  lVar7 = 0;
  FUN_1007fb264();
  *(long *)(unaff_x22 + 0x168) = lVar7;
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x178) = CONCAT71(extraout_var_00,RVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var_00,RVar2.value) + -8);
  *(long *)(unaff_x22 + 0x180) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  FUN_1007ffcdc(param_4,param_5,param_15,param_16);
  *(undefined8 *)(unaff_x22 + 0x198) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_5;
  uVar3 = *(undefined8 *)(param_17 + 0x10);
  plVar6 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10080660c;
  FUN_10082ee24(param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,uVar3);
  return;
}



/* Address: 0x10080660c | FUN_10080660c */

/* WARNING: Removing unreachable block (ram,0x000100806918) */

void FUN_10080660c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined *puVar7;
  Date DVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *unaff_x22;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar20 = *unaff_x22;
  uVar13 = *(undefined8 *)(lVar20 + 400);
  uVar11 = *(undefined8 *)(lVar20 + 0x150);
  lVar19 = *(long *)(lVar20 + 0x138);
  uVar9 = *(undefined8 *)(lVar20 + 0x140);
  uVar15 = (ulong)*(byte *)(lVar20 + 0xcc);
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x1a8));
  uVar18 = *(undefined8 *)(lVar20 + 0x108);
  uVar14 = *(undefined8 *)(lVar20 + 0x100);
  uVar17 = param_1;
  uVar16 = param_2;
  uVar10 = param_3;
  FUN_100804a74();
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(lVar20 + 0xe8) = 0;
  *(undefined8 *)(lVar20 + 0xb8) = uVar17;
  uVar21 = uVar10 >> 0x10 & 0xffff;
  *(undefined8 *)(lVar20 + 0xc0) = uVar16;
  *(short *)(lVar20 + 200) = (short)uVar10;
  *(char *)(lVar20 + 0xca) = (char)uVar21;
  *(undefined8 *)(lVar20 + 0x20) = uVar9;
  *(undefined8 *)(lVar20 + 0x30) = uVar18;
  *(undefined8 *)(lVar20 + 0x28) = uVar14;
  *(undefined8 **)(lVar20 + 0x38) = (undefined8 *)(lVar20 + 0xe8);
  puVar7 = &DAT_100fe7240;
  FUN_1000f7830(&DAT_100fe7240,&DAT_100c7bc40);
  FUN_100805f50(uVar13,FUN_10080ade8,lVar20 + 0x10,puVar7,uVar11);
  FUN_1000f8cac(lVar19 + 0x18,lVar20 + 0x90,&DAT_100fe7238,&DAT_100c7c0c0);
  if (*(long *)(lVar20 + 0xa8) == 0) {
    uVar9 = *(undefined8 *)(lVar20 + 0x198);
    uVar11 = *(undefined8 *)(lVar20 + 0x1a0);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar11);
    FUN_10080a674(lVar20 + 0x90);
  }
  else {
    puVar2 = *(undefined1 **)(lVar20 + 0x170);
    uVar11 = *(undefined8 *)(lVar20 + 0x178);
    lVar22 = *(long *)(lVar20 + 0x168);
    uVar14 = *(undefined8 *)(lVar20 + 0x140);
    puVar7 = *(undefined **)(lVar20 + 0x128);
    uVar13 = *(undefined8 *)(lVar20 + 0x130);
    uVar18 = *(undefined8 *)(lVar20 + 0x120);
    uVar4 = *(undefined1 *)(lVar20 + 0xcb);
    uVar26 = *(undefined8 *)(lVar20 + 0x1a0);
    uVar25 = *(undefined8 *)(lVar20 + 0x198);
    uVar24 = *(undefined8 *)(lVar20 + 0x118);
    uVar23 = *(undefined8 *)(lVar20 + 0x110);
    FUN_100076508(lVar20 + 0x90,lVar20 + 0x68);
    uVar9 = *(undefined8 *)(lVar20 + 0x80);
    lVar19 = *(long *)(lVar20 + 0x88);
    FUN_100004640(lVar20 + 0x68,uVar9);
    FUN_1007fb128();
    DVar8.unknown = puVar7;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar8);
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 0x10) = uVar26;
    *(undefined8 *)(puVar2 + 8) = uVar25;
    puVar2[0x18] = uVar4;
    *(undefined8 *)(puVar2 + 0x20) = uVar18;
    *(undefined **)(puVar2 + 0x28) = puVar7;
    *(undefined8 *)(puVar2 + 0x30) = uVar13;
    uVar13 = *(undefined8 *)(lVar20 + 0xe8);
    *(undefined8 *)(lVar20 + 0x50) = uVar14;
    *(undefined8 *)(lVar20 + 0x60) = uVar24;
    *(undefined8 *)(lVar20 + 0x58) = uVar23;
    _swift_errorRetain(uVar13);
    puVar7 = &DAT_100fe7180;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    FUN_10062f364(lVar20 + 0xd0,FUN_10080adf4,lVar20 + 0x40,uVar11,puVar7);
    uVar5 = *(undefined2 *)(lVar20 + 0xe0);
    uVar4 = *(undefined1 *)(lVar20 + 0xe2);
    iVar3 = *(int *)(lVar22 + 0x18);
    uVar14 = *(undefined8 *)(lVar20 + 0xd8);
    uVar11 = *(undefined8 *)(lVar20 + 0xd0);
    *(ulong *)(puVar2 + *(int *)(lVar22 + 0x14)) = uVar15;
    *(undefined8 *)(puVar2 + iVar3) = uVar13;
    puVar1 = (undefined8 *)(puVar2 + *(int *)(lVar22 + 0x1c));
    puVar1[1] = uVar14;
    *puVar1 = uVar11;
    *(undefined2 *)(puVar1 + 2) = uVar5;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar4;
    (**(code **)(lVar19 + 8))(puVar2,uVar9,lVar19);
    FUN_10080a754(puVar2);
    FUN_100004594(lVar20 + 0x68);
  }
  uVar11 = *(undefined8 *)(lVar20 + 400);
  uVar9 = *(undefined8 *)(lVar20 + 0x178);
  lVar19 = *(long *)(lVar20 + 0x180);
  uVar13 = *(undefined8 *)(lVar20 + 0x160);
  (**(code **)(lVar19 + 0x10))(*(undefined8 *)(lVar20 + 0x188),uVar11,uVar9);
  FUN_100628180(uVar13,uVar9,lVar20 + 0xf0);
  (**(code **)(lVar19 + 8))(uVar11,uVar9);
  FUN_1007fb2c4(uVar17,uVar16,uVar10 & 0xffffffff,uVar21);
  uVar17 = *(undefined8 *)(lVar20 + 0x160);
  uVar9 = uVar17;
  (**(code **)(*(long *)(*(long *)(lVar20 + 0x148) + -8) + 0x30))(uVar17,1);
  bVar6 = (int)uVar9 != 1;
  if (bVar6) {
    lVar19 = *(long *)(*(long *)(lVar20 + 0x140) + -8);
    (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar20 + 0xf8),uVar17);
  }
  else {
    lVar19 = *(long *)(lVar20 + 0x140);
    (**(code **)(*(long *)(lVar20 + 0x158) + 8))(uVar17,*(undefined8 *)(lVar20 + 0x150));
    lVar19 = *(long *)(lVar19 + -8);
  }
  uVar9 = *(undefined8 *)(lVar20 + 0x188);
  uVar17 = *(undefined8 *)(lVar20 + 400);
  uVar16 = *(undefined8 *)(lVar20 + 0x170);
  uVar11 = *(undefined8 *)(lVar20 + 0x160);
  (**(code **)(lVar19 + 0x38))
            (*(undefined8 *)(lVar20 + 0xf8),!bVar6,1,*(undefined8 *)(lVar20 + 0x140));
  _swift_errorRelease(*(undefined8 *)(lVar20 + 0xe8));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100806a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 8))();
  return;
}



/* Address: 0x100806a2c | FUN_100806a2c */

/* WARNING: Removing unreachable block (ram,0x000100806ac4) */

void FUN_100806a2c(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  Result RVar2;
  long lVar3;
  
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 0xff00) == 0x200) {
    lVar3 = 0;
    _swift_getTupleTypeMetadata2(0,param_6,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  }
  else {
    (*param_3)(param_1,*param_2,param_2[1],uVar1);
    lVar3 = 0;
    _swift_getTupleTypeMetadata2(0,param_6,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    *(byte *)(param_1 + *(int *)(lVar3 + 0x30)) = (byte)(uVar1 >> 8) & 1;
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,0,1,lVar3);
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar2.value,0);
  return;
}



/* Address: 0x100806bb0 | FUN_100806bb0 */

void FUN_100806bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_50 = param_5;
  uStack_48 = param_3;
  local_40 = param_4;
  _swift_getTupleTypeMetadata2(0xff,param_5,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_1006946ec(param_1,FUN_10080ae00,auStack_60,OVar1.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,&DAT_100f047e0,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100806c44 | FUN_100806c44 */

void FUN_100806c44(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,long param_18,undefined8 param_19)

{
  Result RVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  *(long *)(unaff_x22 + 0x150) = param_18;
  *(undefined8 *)(unaff_x22 + 0x158) = param_19;
  *(undefined8 *)(unaff_x22 + 0x148) = param_15;
  *(undefined8 *)(unaff_x22 + 0x140) = param_14;
  *(undefined8 *)(unaff_x22 + 0x138) = param_13;
  *(undefined8 *)(unaff_x22 + 0x130) = param_12;
  *(undefined8 *)(unaff_x22 + 0x128) = param_11;
  *(undefined8 *)(unaff_x22 + 0x120) = param_10;
  *(undefined8 *)(unaff_x22 + 0x118) = param_9;
  *(undefined1 *)(unaff_x22 + 0x4a) = param_7;
  *(char *)(unaff_x22 + 0x49) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_8;
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_19,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  *(long *)(unaff_x22 + 0x160) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar3;
  lVar2 = 0;
  FUN_1007fb264();
  *(long *)(unaff_x22 + 0x170) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar3;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x180) = CONCAT71(extraout_var,RVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0x188) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  FUN_1007ffcdc(param_4,param_5,param_16,param_17);
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_5;
  uVar6 = *(undefined8 *)(param_18 + 0x10);
  plVar5 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100806df4;
  FUN_10082ee24(param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,uVar6);
  return;
}



/* Address: 0x100806df4 | FUN_100806df4 */

/* WARNING: Removing unreachable block (ram,0x000100807134) */

void FUN_100806df4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  Date DVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *unaff_x22;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar19 = *unaff_x22;
  uVar14 = *(undefined8 *)(lVar19 + 0x198);
  uVar2 = *(undefined8 *)(lVar19 + 0x158);
  uVar23 = *(undefined8 *)(lVar19 + 0x160);
  lVar11 = *(long *)(lVar19 + 0x150);
  uVar12 = *(undefined8 *)(lVar19 + 0x110);
  bVar5 = *(byte *)(lVar19 + 0x4a);
  uVar15 = (ulong)bVar5;
  lVar13 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x1b0));
  uVar24 = *(undefined8 *)(lVar19 + 0x120);
  uVar16 = *(undefined8 *)(lVar19 + 0x118);
  uVar17 = param_1;
  uVar21 = param_2;
  uVar10 = param_3;
  FUN_100804a74();
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(lVar19 + 0xf8) = 0;
  *(undefined8 *)(lVar19 + 200) = uVar17;
  uVar20 = uVar10 >> 0x10 & 0xffff;
  *(undefined8 *)(lVar19 + 0xd0) = uVar21;
  *(short *)(lVar19 + 0xd8) = (short)uVar10;
  *(char *)(lVar19 + 0xda) = (char)uVar20;
  *(undefined8 *)(lVar19 + 0x20) = uVar2;
  *(undefined8 *)(lVar19 + 0x30) = uVar24;
  *(undefined8 *)(lVar19 + 0x28) = uVar16;
  *(undefined8 **)(lVar19 + 0x38) = (undefined8 *)(lVar19 + 0xf8);
  *(undefined8 *)(lVar19 + 0x40) = uVar12;
  *(byte *)(lVar19 + 0x48) = bVar5;
  puVar8 = &DAT_100fe7240;
  FUN_1000f7830(&DAT_100fe7240,&DAT_100c7bc40);
  FUN_100805f50(uVar14,FUN_10080add0,lVar19 + 0x10,puVar8,uVar23);
  FUN_1000f8cac(lVar11 + 0x18,lVar19 + 0xa0,&DAT_100fe7238,&DAT_100c7c0c0);
  if (*(long *)(lVar19 + 0xb8) == 0) {
    uVar2 = *(undefined8 *)(lVar19 + 0x1a0);
    uVar23 = *(undefined8 *)(lVar19 + 0x1a8);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10080a674(lVar19 + 0xa0);
  }
  else {
    puVar3 = *(undefined1 **)(lVar19 + 0x178);
    uVar23 = *(undefined8 *)(lVar19 + 0x180);
    lVar18 = *(long *)(lVar19 + 0x170);
    uVar14 = *(undefined8 *)(lVar19 + 0x158);
    puVar8 = *(undefined **)(lVar19 + 0x140);
    uVar12 = *(undefined8 *)(lVar19 + 0x148);
    uVar16 = *(undefined8 *)(lVar19 + 0x138);
    uVar6 = *(undefined1 *)(lVar19 + 0x49);
    uVar25 = *(undefined8 *)(lVar19 + 0x1a8);
    uVar24 = *(undefined8 *)(lVar19 + 0x1a0);
    uVar26 = *(undefined8 *)(lVar19 + 0x130);
    uVar22 = *(undefined8 *)(lVar19 + 0x128);
    FUN_100076508(lVar19 + 0xa0,lVar19 + 0x78);
    uVar2 = *(undefined8 *)(lVar19 + 0x90);
    lVar11 = *(long *)(lVar19 + 0x98);
    FUN_100004640(lVar19 + 0x78,uVar2);
    FUN_1007fb128();
    DVar9.unknown = puVar8;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 0x10) = uVar25;
    *(undefined8 *)(puVar3 + 8) = uVar24;
    puVar3[0x18] = uVar6;
    *(undefined8 *)(puVar3 + 0x20) = uVar16;
    *(undefined **)(puVar3 + 0x28) = puVar8;
    *(undefined8 *)(puVar3 + 0x30) = uVar12;
    uVar12 = *(undefined8 *)(lVar19 + 0xf8);
    *(undefined8 *)(lVar19 + 0x60) = uVar14;
    *(undefined8 *)(lVar19 + 0x70) = uVar26;
    *(undefined8 *)(lVar19 + 0x68) = uVar22;
    _swift_errorRetain(uVar12);
    puVar8 = &DAT_100fe7180;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    FUN_10062f364(lVar19 + 0xe0,thunk_FUN_10080ae48,lVar19 + 0x50,uVar23,puVar8);
    uVar7 = *(undefined2 *)(lVar19 + 0xf0);
    uVar6 = *(undefined1 *)(lVar19 + 0xf2);
    iVar4 = *(int *)(lVar18 + 0x18);
    uVar14 = *(undefined8 *)(lVar19 + 0xe8);
    uVar23 = *(undefined8 *)(lVar19 + 0xe0);
    *(ulong *)(puVar3 + *(int *)(lVar18 + 0x14)) = uVar15;
    *(undefined8 *)(puVar3 + iVar4) = uVar12;
    puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar18 + 0x1c));
    puVar1[1] = uVar14;
    *puVar1 = uVar23;
    *(undefined2 *)(puVar1 + 2) = uVar7;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar6;
    (**(code **)(lVar11 + 8))(puVar3,uVar2,lVar11);
    FUN_10080a754(puVar3);
    FUN_100004594(lVar19 + 0x78);
  }
  uVar23 = *(undefined8 *)(lVar19 + 0x198);
  uVar2 = *(undefined8 *)(lVar19 + 0x180);
  lVar11 = *(long *)(lVar19 + 0x188);
  uVar12 = *(undefined8 *)(lVar19 + 0x168);
  (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar19 + 400),uVar23,uVar2);
  FUN_100628180(uVar12,uVar2,lVar19 + 0x100);
  (**(code **)(lVar11 + 8))(uVar23,uVar2);
  FUN_1007fb2c4(uVar17,uVar21,uVar10 & 0xffffffff,uVar20);
  uVar2 = *(undefined8 *)(lVar19 + 400);
  uVar23 = *(undefined8 *)(lVar19 + 0x198);
  uVar17 = *(undefined8 *)(lVar19 + 0x178);
  uVar21 = *(undefined8 *)(lVar19 + 0x168);
  (**(code **)(*(long *)(*(long *)(lVar19 + 0x158) + -8) + 0x20))
            (*(undefined8 *)(lVar19 + 0x108),uVar21);
  _swift_errorRelease(*(undefined8 *)(lVar19 + 0xf8));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001008071d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 8))();
  return;
}



/* Address: 0x1008071d8 | FUN_1008071d8 */

/* WARNING: Removing unreachable block (ram,0x000100807284) */

void FUN_1008071d8(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,long param_8)

{
  ushort uVar1;
  int iVar2;
  Result RVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 0xff00) == 0x200) {
    lVar4 = 0;
    _swift_getTupleTypeMetadata2(0,param_8,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    iVar2 = *(int *)(lVar4 + 0x30);
    (**(code **)(*(long *)(param_8 + -8) + 0x10))(param_1,param_6,param_8);
    *(byte *)(param_1 + iVar2) = param_7 & 1;
  }
  else {
    (*param_3)(param_1,*param_2,param_2[1],uVar1);
    lVar4 = 0;
    _swift_getTupleTypeMetadata2(0,param_8,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    *(byte *)(param_1 + *(int *)(lVar4 + 0x30)) = (byte)(uVar1 >> 8) & 1;
  }
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar3 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar3.value,0);
  return;
}



/* Address: 0x100807348 | FUN_100807348 */

void FUN_100807348(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,undefined8 param_18)

{
  Result RVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  ulong uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  *(long *)(unaff_x22 + 0x148) = param_17;
  *(undefined8 *)(unaff_x22 + 0x150) = param_18;
  *(undefined8 *)(unaff_x22 + 0x138) = param_13;
  *(undefined8 *)(unaff_x22 + 0x140) = param_14;
  *(undefined8 *)(unaff_x22 + 0x130) = param_12;
  *(undefined8 *)(unaff_x22 + 0x128) = param_11;
  *(undefined8 *)(unaff_x22 + 0x120) = param_10;
  *(undefined8 *)(unaff_x22 + 0x118) = param_9;
  *(undefined1 *)(unaff_x22 + 0xdc) = param_7;
  *(char *)(unaff_x22 + 0xdb) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_8;
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,param_18,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  *(long *)(unaff_x22 + 0x158) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar3;
  lVar2 = 0;
  FUN_1007fb264();
  *(long *)(unaff_x22 + 0x168) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x178) = CONCAT71(extraout_var,RVar1.value);
  lVar2 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  *(long *)(unaff_x22 + 0x180) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  FUN_1007ffcdc(param_4,param_5,param_15,param_16);
  *(undefined8 *)(unaff_x22 + 0x198) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_5;
  uVar6 = *(undefined8 *)(param_17 + 0x10);
  plVar5 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1008074ec;
  FUN_10082ee24(param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,uVar6);
  return;
}



/* Address: 0x1008074ec | FUN_1008074ec */

/* WARNING: Removing unreachable block (ram,0x000100807814) */

void FUN_1008074ec(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  Date DVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar17 = *unaff_x22;
  uVar13 = *(undefined8 *)(lVar17 + 400);
  uVar2 = *(undefined8 *)(lVar17 + 0x150);
  uVar22 = *(undefined8 *)(lVar17 + 0x158);
  lVar10 = *(long *)(lVar17 + 0x148);
  uVar14 = (ulong)*(byte *)(lVar17 + 0xdc);
  lVar11 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 0x1a8));
  uVar23 = *(undefined8 *)(lVar17 + 0x118);
  uVar21 = *(undefined8 *)(lVar17 + 0x110);
  uVar15 = *(undefined8 *)(lVar17 + 0x1a0);
  uVar12 = *(undefined8 *)(lVar17 + 0x198);
  uVar16 = param_1;
  uVar20 = param_2;
  uVar9 = param_3;
  FUN_100804a74();
  FUN_1007fb2c4(param_2,param_3,param_4,param_4 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(lVar17 + 0xf8) = 0;
  *(undefined8 *)(lVar17 + 200) = uVar16;
  uVar18 = uVar9 >> 0x10 & 0xffff;
  *(undefined8 *)(lVar17 + 0xd0) = uVar20;
  *(short *)(lVar17 + 0xd8) = (short)uVar9;
  *(char *)(lVar17 + 0xda) = (char)uVar18;
  *(undefined8 *)(lVar17 + 0x20) = uVar2;
  *(undefined8 *)(lVar17 + 0x30) = uVar23;
  *(undefined8 *)(lVar17 + 0x28) = uVar21;
  *(undefined8 **)(lVar17 + 0x38) = (undefined8 *)(lVar17 + 0xf8);
  *(undefined8 *)(lVar17 + 0x48) = uVar15;
  *(undefined8 *)(lVar17 + 0x40) = uVar12;
  puVar7 = &DAT_100fe7240;
  FUN_1000f7830(&DAT_100fe7240,&DAT_100c7bc40);
  FUN_100805f50(uVar13,FUN_10080adc0,lVar17 + 0x10,puVar7,uVar22);
  FUN_1000f8cac(lVar10 + 0x18,lVar17 + 0xa0,&DAT_100fe7238,&DAT_100c7c0c0);
  if (*(long *)(lVar17 + 0xb8) == 0) {
    uVar2 = *(undefined8 *)(lVar17 + 0x198);
    uVar22 = *(undefined8 *)(lVar17 + 0x1a0);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar22);
    FUN_10080a674(lVar17 + 0xa0);
  }
  else {
    puVar3 = *(undefined1 **)(lVar17 + 0x170);
    uVar22 = *(undefined8 *)(lVar17 + 0x178);
    lVar19 = *(long *)(lVar17 + 0x168);
    uVar12 = *(undefined8 *)(lVar17 + 0x150);
    puVar7 = *(undefined **)(lVar17 + 0x138);
    uVar13 = *(undefined8 *)(lVar17 + 0x140);
    uVar15 = *(undefined8 *)(lVar17 + 0x130);
    uVar5 = *(undefined1 *)(lVar17 + 0xdb);
    uVar25 = *(undefined8 *)(lVar17 + 0x1a0);
    uVar24 = *(undefined8 *)(lVar17 + 0x198);
    uVar23 = *(undefined8 *)(lVar17 + 0x128);
    uVar21 = *(undefined8 *)(lVar17 + 0x120);
    FUN_100076508(lVar17 + 0xa0,lVar17 + 0x78);
    uVar2 = *(undefined8 *)(lVar17 + 0x90);
    lVar10 = *(long *)(lVar17 + 0x98);
    FUN_100004640(lVar17 + 0x78,uVar2);
    FUN_1007fb128();
    DVar8.unknown = puVar7;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar8);
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 0x10) = uVar25;
    *(undefined8 *)(puVar3 + 8) = uVar24;
    puVar3[0x18] = uVar5;
    *(undefined8 *)(puVar3 + 0x20) = uVar15;
    *(undefined **)(puVar3 + 0x28) = puVar7;
    *(undefined8 *)(puVar3 + 0x30) = uVar13;
    uVar13 = *(undefined8 *)(lVar17 + 0xf8);
    *(undefined8 *)(lVar17 + 0x60) = uVar12;
    *(undefined8 *)(lVar17 + 0x70) = uVar23;
    *(undefined8 *)(lVar17 + 0x68) = uVar21;
    _swift_errorRetain(uVar13);
    puVar7 = &DAT_100fe7180;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    FUN_10062f364(lVar17 + 0xe0,thunk_FUN_10080ae48,lVar17 + 0x50,uVar22,puVar7);
    uVar6 = *(undefined2 *)(lVar17 + 0xf0);
    uVar5 = *(undefined1 *)(lVar17 + 0xf2);
    iVar4 = *(int *)(lVar19 + 0x18);
    uVar12 = *(undefined8 *)(lVar17 + 0xe8);
    uVar22 = *(undefined8 *)(lVar17 + 0xe0);
    *(ulong *)(puVar3 + *(int *)(lVar19 + 0x14)) = uVar14;
    *(undefined8 *)(puVar3 + iVar4) = uVar13;
    puVar1 = (undefined8 *)(puVar3 + *(int *)(lVar19 + 0x1c));
    puVar1[1] = uVar12;
    *puVar1 = uVar22;
    *(undefined2 *)(puVar1 + 2) = uVar6;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar5;
    (**(code **)(lVar10 + 8))(puVar3,uVar2,lVar10);
    FUN_10080a754(puVar3);
    FUN_100004594(lVar17 + 0x78);
  }
  uVar22 = *(undefined8 *)(lVar17 + 400);
  uVar2 = *(undefined8 *)(lVar17 + 0x178);
  lVar10 = *(long *)(lVar17 + 0x180);
  uVar13 = *(undefined8 *)(lVar17 + 0x160);
  (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar17 + 0x188),uVar22,uVar2);
  FUN_100628180(uVar13,uVar2,lVar17 + 0x100);
  (**(code **)(lVar10 + 8))(uVar22,uVar2);
  FUN_1007fb2c4(uVar16,uVar20,uVar9 & 0xffffffff,uVar18);
  uVar2 = *(undefined8 *)(lVar17 + 0x188);
  uVar22 = *(undefined8 *)(lVar17 + 400);
  uVar16 = *(undefined8 *)(lVar17 + 0x170);
  uVar20 = *(undefined8 *)(lVar17 + 0x160);
  (**(code **)(*(long *)(*(long *)(lVar17 + 0x150) + -8) + 0x20))
            (*(undefined8 *)(lVar17 + 0x108),uVar20);
  _swift_errorRelease(*(undefined8 *)(lVar17 + 0xf8));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001008078b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))();
  return;
}



/* Address: 0x1008078b8 | FUN_1008078b8 */

/* WARNING: Removing unreachable block (ram,0x0001008079c4) */

void FUN_1008078b8(undefined8 *param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  Result RVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 0xff00) != 0x200) {
    (*param_3)(param_1,*param_2,param_2[1],uVar1);
    lVar4 = 0;
    _swift_getTupleTypeMetadata2(0,param_8,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    *(byte *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) = (byte)(uVar1 >> 8) & 1;
    FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
    RVar2 = Swift::Result::typeMetadataAccessor();
    _swift_storeEnumTagMultiPayload(param_1,RVar2.value,0);
    return;
  }
  FUN_10080a3bc();
  puVar3 = &DAT_100f05368;
  _swift_allocError(&DAT_100f05368,param_2,0,0);
  *param_2 = param_6;
  param_2[1] = param_7;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *param_1 = puVar3;
  _swift_getTupleTypeMetadata2(0xff,param_8,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar2.value,1);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_7);
  return;
}



/* Address: 0x100807ab8 | FUN_100807ab8 */

void FUN_100807ab8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1007ffcdc(param_4,param_5,param_17,param_18);
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_21;
  *(undefined1 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_9;
  *(undefined8 *)(unaff_x22 + 0x48) = param_17;
  *(undefined8 *)(unaff_x22 + 0x50) = param_18;
  *(undefined8 *)(unaff_x22 + 0x58) = param_19;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(char *)(unaff_x22 + 0x70) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_13;
  *(undefined8 *)(unaff_x22 + 0x78) = param_12;
  *(undefined8 *)(unaff_x22 + 0x88) = param_14;
  *(undefined8 *)(unaff_x22 + 0x98) = param_11;
  *(undefined8 *)(unaff_x22 + 0x90) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_15;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_16;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100807c10;
  FUN_10082f27c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,
                &DAT_100c7bc20,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100807c10 | FUN_100807c10 */

void FUN_100807c10(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0xb0);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100807c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100807c70 | FUN_100807c70 */

void FUN_100807c70(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,int *param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  AsyncMapSequence AVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  FUN_1000f8b08(&DAT_100fe7210,&DAT_100c7bbd0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  *(ulong *)(unaff_x22 + 0x60) = CONCAT71(extraout_var,OVar2.value);
  FUN_10080a614();
  AVar3 = Swift::AsyncMapSequence::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x68) = AVar3.unknown;
  lVar8 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x70) = lVar8;
  uVar6 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar4 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  FUN_1000f8cac(param_4,unaff_x22 + 0x10,&DAT_100fe7210,&DAT_100c7bbd0);
  puVar5 = &DAT_100f04a40;
  _swift_allocObject(&DAT_100f04a40,0x90,7);
  *(undefined8 *)(puVar5 + 0x10) = param_23;
  *(undefined8 *)(puVar5 + 0x18) = param_24;
  puVar5[0x20] = param_5;
  *(undefined8 *)(puVar5 + 0x28) = param_6;
  *(undefined8 *)(puVar5 + 0x30) = param_7;
  *(undefined8 *)(puVar5 + 0x38) = param_8;
  *(undefined8 *)(puVar5 + 0x40) = param_9;
  *(undefined8 *)(puVar5 + 0x48) = param_10;
  *(undefined8 *)(puVar5 + 0x50) = param_11;
  *(undefined8 *)(puVar5 + 0x58) = param_12;
  puVar5[0x60] = param_13;
  *(undefined8 *)(puVar5 + 0x68) = param_15;
  *(undefined8 *)(puVar5 + 0x70) = param_16;
  *(undefined8 *)(puVar5 + 0x78) = param_17;
  *(undefined8 *)(puVar5 + 0x80) = param_18;
  *(undefined8 *)(puVar5 + 0x88) = param_19;
  _swift_retain(param_7);
  FUN_10036c934(param_8,param_9);
  _swift_retain(param_10);
  _swift_bridgeObjectRetain(param_11);
  _swift_bridgeObjectRetain(param_12);
  _swift_bridgeObjectRetain(param_16);
  _swift_retain(param_19);
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar5);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar8 + 0x10))();
  puVar5 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar3.unknown);
  FUN_1008547c4(unaff_x22 + 0x38,uVar6,CONCAT71(extraout_var,OVar2.value),
                PTR___type_metadata_for_Swift_Never_100eadc38,AVar3.unknown,puVar5);
  _swift_task_dealloc(uVar6);
  iVar1 = *param_20;
  plVar7 = (long *)(ulong)(uint)param_20[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100807f34;
                    /* WARNING: Could not recover jumptable at 0x000100807f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_20))
            (plVar7,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x38);
  return;
}



/* Address: 0x100807f34 | FUN_100807f34 */

void FUN_100807f34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar7 + 0x78);
  uVar2 = *(undefined8 *)(lVar7 + 0x68);
  lVar3 = *(long *)(lVar7 + 0x70);
  uVar6 = *(undefined8 *)(lVar7 + 0x60);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x80));
  lVar4 = 0;
  FUN_100854dd4(0,uVar6,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar7 + 0x38,lVar4);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100807fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x100807fd8 | FUN_100807fd8 */

void FUN_100807fd8(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_16;
  *(undefined8 *)(unaff_x22 + 0x140) = param_15;
  *(undefined8 *)(unaff_x22 + 0x158) = param_18;
  *(undefined8 *)(unaff_x22 + 0x150) = param_17;
  *(undefined1 *)(unaff_x22 + 0xd5) = param_11;
  *(undefined8 *)(unaff_x22 + 0x128) = param_10;
  *(undefined8 *)(unaff_x22 + 0x120) = param_9;
  *(undefined8 *)(unaff_x22 + 0x138) = param_14;
  *(undefined8 *)(unaff_x22 + 0x130) = param_13;
  *(undefined8 *)(unaff_x22 + 0x110) = param_5;
  *(undefined8 *)(unaff_x22 + 0x118) = param_8;
  *(undefined1 *)(unaff_x22 + 0xd4) = param_3;
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = param_4;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x160) = param_19;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x178) = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x170) = uVar1;
  *(undefined2 *)(unaff_x22 + 0xd2) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)(unaff_x22 + 0xd6) = *(undefined1 *)((long)param_2 + 0x1a);
  _swift_task_switch(FUN_100808040,0,0);
  return;
}



/* Address: 0x100808040 | FUN_100808040 */

/* WARNING: Removing unreachable block (ram,0x000100808208) */

void FUN_100808040(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  Optional OVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined7 extraout_var;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  Date DVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  long unaff_x22;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  uVar24 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar19 = *(ulong *)(unaff_x22 + 0x178);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar9 = (ulong)*(byte *)(unaff_x22 + 0xd4);
  FUN_100804a74();
  uVar21 = (uint)uVar19;
  lVar10 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar22,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  lVar25 = CONCAT71(extraout_var,OVar7.value);
  lVar28 = *(long *)(lVar25 + -8);
  uVar18 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar11 = uVar18 & 0xfffffffffffffff0;
  _swift_task_alloc();
  if ((uVar21 >> 0x10 & 0xff) == 1) {
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar20;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) != 0) {
      puVar12 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0xf0,puVar12,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar22 = 0;
    uVar26 = 0;
    uVar27 = 0x200;
  }
  else {
    FUN_1007fb28c(uVar20,uVar24,uVar19);
    uVar22 = uVar24;
    uVar26 = uVar20;
    uVar27 = uVar19;
  }
  uVar13 = uVar18 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar13);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar26;
  *(undefined8 *)(unaff_x22 + 200) = uVar22;
  *(short *)(unaff_x22 + 0xd0) = (short)uVar27;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x108);
  puVar12 = &DAT_100fe7180;
  FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
  puVar14 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  FUN_100617fb8(uVar13,FUN_10080ad18,unaff_x22 + 0x10,puVar12,puVar14,lVar10,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                unaff_x22 + 0xf8);
  FUN_1007fb2d8(uVar26,uVar22,uVar27);
  (**(code **)(lVar28 + 0x20))(uVar11,uVar13,lVar25);
  _swift_task_dealloc(uVar13);
  FUN_1000f8cac(*(long *)(unaff_x22 + 0x118) + 0x18,unaff_x22 + 0x98,&DAT_100fe7238,&DAT_100c7c0c0);
  if (*(long *)(unaff_x22 + 0xb0) == 0) {
    _swift_errorRelease(0);
    FUN_1007fb2c4(uVar20,uVar24,uVar19 & 0xffffffff,uVar21 >> 0x10);
    _swift_bridgeObjectRelease(uVar9);
    FUN_10080a674(unaff_x22 + 0x98);
  }
  else {
    puVar12 = *(undefined **)(unaff_x22 + 0x138);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar5 = *(undefined1 *)(unaff_x22 + 0xd5);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x158);
    FUN_100076508(unaff_x22 + 0x98,unaff_x22 + 0x70);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = *(long *)(unaff_x22 + 0x90);
    FUN_100004640();
    lVar15 = 0;
    FUN_1007fb264();
    puVar16 = (undefined1 *)(*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar17.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar17);
    *puVar16 = 2;
    *(undefined8 *)(puVar16 + 0x10) = uVar33;
    *(undefined8 *)(puVar16 + 8) = uVar32;
    puVar16[0x18] = uVar5;
    *(undefined8 *)(puVar16 + 0x20) = uVar2;
    *(undefined **)(puVar16 + 0x28) = puVar12;
    *(undefined8 *)(puVar16 + 0x30) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar35;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar34;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar29;
    _swift_bridgeObjectRetain(uVar32);
    _swift_bridgeObjectRetain(uVar22);
    FUN_100617fb8(unaff_x22 + 0xd8,FUN_10080ad38,unaff_x22 + 0x40,lVar25,
                  PTR___type_metadata_for_Swift_Never_100eadc38,&DAT_100f047e0,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    uVar6 = *(undefined2 *)(unaff_x22 + 0xe8);
    iVar4 = *(int *)(lVar15 + 0x18);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(ulong *)(puVar16 + *(int *)(lVar15 + 0x14)) = uVar9;
    *(undefined8 *)(puVar16 + iVar4) = 0;
    puVar1 = (undefined8 *)(puVar16 + *(int *)(lVar15 + 0x1c));
    puVar1[1] = uVar31;
    *puVar1 = uVar22;
    *(undefined2 *)(puVar1 + 2) = uVar6;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar23 = *(code **)(lVar3 + 8);
    _swift_errorRetain(0);
    (*pcVar23)(puVar16,uVar26,lVar3);
    FUN_1007fb2c4(uVar20,uVar24,uVar19 & 0xffffffff,uVar21 >> 0x10);
    _swift_errorRelease(0);
    FUN_10080a754(puVar16);
    _swift_task_dealloc(puVar16);
    FUN_100004594(unaff_x22 + 0x70);
  }
  uVar18 = uVar18 & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar28 + 0x20))();
  uVar19 = uVar18;
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar18,1,lVar10);
  lVar10 = *(long *)(unaff_x22 + 0x158);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
  if ((int)uVar19 == 1) {
    (**(code **)(lVar28 + 8))(uVar18,lVar25);
    _swift_task_dealloc(uVar18);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar24,1,1,lVar10);
  }
  else {
    lVar25 = *(long *)(lVar10 + -8);
    (**(code **)(lVar25 + 0x20))(uVar24,uVar18,lVar10);
    (**(code **)(lVar25 + 0x38))(uVar24,0,1,lVar10);
    _swift_task_dealloc(uVar18);
  }
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100808510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100808514 | FUN_100808514 */

void FUN_100808514(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1007ffcdc(param_4,param_5,param_18,param_19);
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_21;
  *(undefined8 *)(unaff_x22 + 0x28) = param_22;
  *(undefined1 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = param_10;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_18;
  *(undefined8 *)(unaff_x22 + 0x58) = param_19;
  *(undefined8 *)(unaff_x22 + 0x60) = param_20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(char *)(unaff_x22 + 0x78) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_14;
  *(undefined8 *)(unaff_x22 + 0x80) = param_13;
  *(undefined8 *)(unaff_x22 + 0x90) = param_15;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_12;
  *(undefined8 *)(unaff_x22 + 0x98) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_16;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_17;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100808674;
  FUN_10082f27c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,
                &DAT_100c7bbf8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100808674 | FUN_100808674 */

void FUN_100808674(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xc0);
  uVar3 = *(undefined8 *)(lVar2 + 0xb8);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008086d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1008086d4 | FUN_1008086d4 */

void FUN_1008086d4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  int *param_21,undefined4 param_22,undefined4 param_23,long param_24,
                  undefined8 param_25)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  AsyncMapSequence AVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  ulong uVar13;
  
  *(long *)(unaff_x22 + 0x60) = param_24;
  lVar11 = *(long *)(param_24 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  uVar3 = lVar12 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  FUN_1000f8b08(&DAT_100fe7210,&DAT_100c7bbd0);
  FUN_10080a614();
  AVar4 = Swift::AsyncMapSequence::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = AVar4.unknown;
  lVar9 = *(long *)(AVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  FUN_1000f8cac(param_4,unaff_x22 + 0x10,&DAT_100fe7210,&DAT_100c7bbd0);
  (**(code **)(lVar11 + 0x10))(uVar3,param_8,param_24);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100f04a18;
  _swift_allocObject(&DAT_100f04a18,uVar13 + 0x58,uVar5 | 7);
  *(long *)(puVar6 + 0x10) = param_24;
  *(undefined8 *)(puVar6 + 0x18) = param_25;
  puVar6[0x20] = param_5;
  *(undefined8 *)(puVar6 + 0x28) = param_6;
  *(undefined8 *)(puVar6 + 0x30) = param_7;
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar10,uVar3,param_24);
  puVar1 = (undefined8 *)(puVar6 + uVar13);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1[2] = param_11;
  puVar1 = (undefined8 *)(puVar6 + uVar13 + 0x18);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined1 *)(puVar1 + 2) = param_14;
  *(undefined8 *)(puVar6 + uVar13 + 0x30) = param_16;
  *(undefined8 *)((long)(puVar6 + uVar13 + 0x30) + 8) = param_17;
  *(undefined8 *)(puVar6 + uVar13 + 0x40) = param_18;
  *(undefined8 *)(puVar6 + uVar13 + 0x48) = param_19;
  *(undefined8 *)((long)(puVar6 + uVar13 + 0x48) + 8) = param_20;
  _swift_retain(param_7);
  FUN_10036c934(param_9,param_10);
  _swift_retain(param_11);
  _swift_bridgeObjectRetain(param_12);
  _swift_bridgeObjectRetain(param_13);
  _swift_bridgeObjectRetain(param_17);
  _swift_retain(param_20);
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar6);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar9 + 0x10))();
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar4.unknown);
  FUN_1008547c4(unaff_x22 + 0x38,uVar7,param_24,PTR___type_metadata_for_Swift_Never_100eadc38,
                AVar4.unknown,puVar6);
  _swift_task_dealloc(uVar7);
  iVar2 = *param_21;
  plVar8 = (long *)(ulong)(uint)param_21[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100808a4c;
                    /* WARNING: Could not recover jumptable at 0x000100808a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)param_21))
            (plVar8,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x38);
  return;
}



/* Address: 0x100808a4c | FUN_100808a4c */

void FUN_100808a4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar8 + 0x80);
  uVar2 = *(undefined8 *)(lVar8 + 0x70);
  lVar4 = *(long *)(lVar8 + 0x78);
  uVar3 = *(undefined8 *)(lVar8 + 0x60);
  uVar5 = *(undefined8 *)(lVar8 + 0x68);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0x88));
  lVar6 = 0;
  FUN_100854dd4(0,uVar3,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar8 + 0x38,lVar6);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100808afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))();
  return;
}



/* Address: 0x100808b00 | FUN_100808b00 */

void FUN_100808b00(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_19;
  *(undefined8 *)(unaff_x22 + 0x120) = param_20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_17;
  *(undefined8 *)(unaff_x22 + 0x110) = param_18;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_15;
  *(undefined8 *)(unaff_x22 + 0x100) = param_16;
  *(undefined1 *)(unaff_x22 + 0xa5) = param_12;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_14;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_9;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined1 *)(unaff_x22 + 0xa4) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x128) = *param_2;
  uVar1 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x138) = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(undefined2 *)(unaff_x22 + 0xa2) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)(unaff_x22 + 0xa6) = *(undefined1 *)((long)param_2 + 0x1a);
  _swift_task_switch(FUN_100808b78,0,0);
  return;
}



/* Address: 0x100808b78 | FUN_100808b78 */

/* WARNING: Removing unreachable block (ram,0x000100808d60) */

void FUN_100808b78(void)

{
  ulong *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  Optional OVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined7 extraout_var;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  Date DVar17;
  undefined8 uVar18;
  ushort uVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  ushort uVar23;
  long lVar24;
  code *pcVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar22 = *(ulong *)(unaff_x22 + 0x138);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = (ulong)*(byte *)(unaff_x22 + 0xa4);
  FUN_100804a74();
  uVar21 = (uint)uVar22;
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,uVar26,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  lVar24 = *(long *)(lVar8 + -8);
  uVar11 = *(long *)(lVar24 + 0x40) + 0xf;
  uVar9 = uVar11 & 0xfffffffffffffff0;
  _swift_task_alloc();
  if ((uVar21 >> 0x10 & 0xff) == 1) {
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0xa8,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar26 = 0;
    uVar15 = 0x200;
    uVar27 = 0;
  }
  else {
    FUN_1007fb28c(uVar18,uVar20,uVar22);
    uVar26 = uVar20;
    uVar15 = uVar22;
    uVar27 = uVar18;
  }
  uVar11 = uVar11 & 0xfffffffffffffff0;
  _swift_task_alloc();
  OVar6 = Swift::Optional::typeMetadataAccessor();
  uVar31 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar32 = *(long *)(unaff_x22 + 0x118);
  uVar30 = *(undefined8 *)(unaff_x22 + 200);
  uVar29 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar28 = *(long *)(CONCAT71(extraout_var,OVar6.value) + -8);
  uVar14 = *(long *)(lVar28 + 0x40) + 0xf;
  uVar12 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar26;
  *(short *)(unaff_x22 + 0xa0) = (short)uVar15;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar31;
  *(long *)(unaff_x22 + 0x20) = lVar32;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar29;
  puVar10 = &DAT_100fe7180;
  FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
  puVar13 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  FUN_100617fb8(uVar12,FUN_10080b028,unaff_x22 + 0x10,puVar10,puVar13,lVar8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                unaff_x22 + 0xb0);
  FUN_1007fb2d8(uVar27,uVar26,uVar15);
  uVar14 = uVar14 & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar28 + 0x20))();
  pcVar25 = *(code **)(lVar24 + 0x30);
  uVar15 = uVar14;
  (*pcVar25)(uVar14,1,lVar8);
  if ((int)uVar15 == 1) {
    uVar3 = *(undefined1 *)(unaff_x22 + 0xa4);
    iVar2 = *(int *)(lVar8 + 0x30);
    (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x118) + -8) + 0x10))
              (uVar11,*(undefined8 *)(unaff_x22 + 0xd0));
    *(undefined1 *)(uVar11 + (long)iVar2) = uVar3;
    uVar15 = uVar14;
    (*pcVar25)(uVar14,1,lVar8);
    if ((int)uVar15 != 1) {
      (**(code **)(lVar28 + 8))(uVar14,CONCAT71(extraout_var,OVar6.value));
    }
  }
  else {
    (**(code **)(lVar24 + 0x20))(uVar11,uVar14,lVar8);
  }
  lVar24 = *(long *)(unaff_x22 + 0x118);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  cVar4 = *(char *)(uVar11 + (long)*(int *)(lVar8 + 0x30));
  lVar8 = *(long *)(lVar24 + -8);
  (**(code **)(lVar8 + 0x20))(uVar9,uVar11,lVar24);
  _swift_task_dealloc(uVar11);
  uVar19 = 0x7238;
  FUN_1000f8cac(*(long *)(unaff_x22 + 0xd8) + 0x18,unaff_x22 + 0x68,&DAT_100fe7238,&DAT_100c7c0c0);
  if (*(long *)(unaff_x22 + 0x80) == 0) {
    _swift_errorRelease(0);
    FUN_1007fb2c4(uVar18,uVar20,uVar22 & 0xffffffff,uVar21 >> 0x10);
    _swift_bridgeObjectRelease(uVar7);
    FUN_10080a674(unaff_x22 + 0x68);
  }
  else {
    pcVar25 = *(code **)(unaff_x22 + 0x108);
    puVar10 = *(undefined **)(unaff_x22 + 0xf8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar3 = *(undefined1 *)(unaff_x22 + 0xa5);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_100076508(unaff_x22 + 0x68,unaff_x22 + 0x40);
    uVar11 = *(ulong *)(unaff_x22 + 0x58);
    lVar24 = *(long *)(unaff_x22 + 0x60);
    uVar14 = uVar11;
    FUN_100004640();
    lVar28 = 0;
    FUN_1007fb264();
    puVar16 = (undefined1 *)(*(long *)(*(long *)(lVar28 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1007fb128();
    DVar17.unknown = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar17);
    *puVar16 = 2;
    *(undefined8 *)(puVar16 + 0x10) = uVar31;
    *(undefined8 *)(puVar16 + 8) = uVar30;
    puVar16[0x18] = uVar3;
    *(undefined8 *)(puVar16 + 0x20) = uVar29;
    *(undefined **)(puVar16 + 0x28) = puVar10;
    *(undefined8 *)(puVar16 + 0x30) = uVar27;
    _swift_bridgeObjectRetain(uVar30);
    _swift_bridgeObjectRetain(uVar26);
    _swift_errorRetain(0);
    uVar15 = uVar9;
    (*pcVar25)();
    uVar23 = 0x100;
    if (cVar4 == '\0') {
      uVar23 = 0;
    }
    iVar2 = *(int *)(lVar28 + 0x18);
    *(ulong *)(puVar16 + *(int *)(lVar28 + 0x14)) = uVar7;
    *(undefined8 *)(puVar16 + iVar2) = 0;
    puVar1 = (ulong *)(puVar16 + *(int *)(lVar28 + 0x1c));
    *puVar1 = uVar15;
    puVar1[1] = uVar14;
    *(ushort *)(puVar1 + 2) = uVar23 | uVar19 & 0xff;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    (**(code **)(lVar24 + 8))(puVar16,uVar11,lVar24);
    FUN_1007fb2c4(uVar18,uVar20,uVar22 & 0xffffffff,uVar21 >> 0x10);
    _swift_errorRelease(0);
    FUN_10080a754(puVar16);
    _swift_task_dealloc(puVar16);
    FUN_100004594(unaff_x22 + 0x40);
  }
  (**(code **)(lVar8 + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xb8),uVar9,*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001008090a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008090a4 | FUN_1008090a4 */

void FUN_1008090a4(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x21;
  
  uVar1 = *(undefined1 *)((long)param_2 + 0x11);
  (*param_3)(*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  if (unaff_x21 == 0) {
    lVar2 = 0;
    _swift_getTupleTypeMetadata2(0,param_5,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
    *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x30)) = uVar1;
  }
  else {
    *param_7 = unaff_x21;
  }
  return;
}



/* Address: 0x100809130 | FUN_100809130 */

void FUN_100809130(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1007ffcdc(param_4,param_5,param_17,param_18);
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_21;
  *(undefined1 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x58) = param_17;
  *(undefined8 *)(unaff_x22 + 0x60) = param_18;
  *(undefined8 *)(unaff_x22 + 0x68) = param_19;
  *(char *)(unaff_x22 + 0x70) = (char)param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_13;
  *(undefined8 *)(unaff_x22 + 0x78) = param_12;
  *(undefined8 *)(unaff_x22 + 0x88) = param_14;
  *(undefined8 *)(unaff_x22 + 0x98) = param_11;
  *(undefined8 *)(unaff_x22 + 0x90) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_15;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_16;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100807c10;
  FUN_10082f27c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,
                &DAT_100c7bbc8,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100809288 | FUN_100809288 */

void FUN_100809288(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,int *param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_23;
  puVar2 = &DAT_100f049f0;
  _swift_allocObject(&DAT_100f049f0,0x90,7);
  *(undefined8 *)(puVar2 + 0x10) = param_23;
  *(undefined8 *)(puVar2 + 0x18) = param_24;
  puVar2[0x20] = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  *(undefined8 *)(puVar2 + 0x50) = param_11;
  *(undefined8 *)(puVar2 + 0x58) = param_12;
  puVar2[0x60] = param_13;
  *(undefined8 *)(puVar2 + 0x68) = param_15;
  *(undefined8 *)(puVar2 + 0x70) = param_16;
  *(undefined8 *)(puVar2 + 0x78) = param_17;
  *(undefined8 *)(puVar2 + 0x80) = param_18;
  *(undefined8 *)(puVar2 + 0x88) = param_19;
  puVar3 = &DAT_100fe7210;
  FUN_1000f7830(&DAT_100fe7210,&DAT_100c7bbd0);
  puVar4 = &DAT_100fe7218;
  FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
  *(undefined **)(unaff_x22 + 0xe0) = puVar4;
  puVar5 = puVar4;
  FUN_10080a614();
  FUN_100854800(unaff_x22 + 0x10,FUN_10080a5b8,puVar2,puVar3,param_23,puVar4,puVar5,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_7);
  _swift_retain(param_9);
  FUN_10036c934(param_10,param_11);
  _swift_retain(param_12);
  _swift_bridgeObjectRetain(param_16);
  _swift_retain(param_19);
  _swift_release(puVar2);
  puVar2 = &DAT_100fe7228;
  FUN_1000f8b08(&DAT_100fe7228,&DAT_100c7bbd8);
  *(undefined8 *)(unaff_x22 + 0x80) = param_23;
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  *(undefined **)(unaff_x22 + 0x90) = puVar2;
  *(undefined **)(unaff_x22 + 0x98) = puVar3;
  *(undefined **)(unaff_x22 + 0xa0) =
       PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  *(undefined **)(unaff_x22 + 0xa8) = puVar5;
  lVar6 = 0;
  FUN_100855854();
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  lVar9 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar9;
  (**(code **)(lVar9 + 0x10))(unaff_x22 + 0x48,unaff_x22 + 0x10,lVar6);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c7d630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d630,lVar6);
  FUN_1008547c4(unaff_x22 + 0xb0,unaff_x22 + 0x48,param_23,puVar4,lVar6,pTVar7);
  iVar1 = *param_20;
  plVar8 = (long *)(ulong)(uint)param_20[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10080952c;
                    /* WARNING: Could not recover jumptable at 0x000100809528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_20))
            (plVar8,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0xb0);
  return;
}



/* Address: 0x10080952c | FUN_10080952c */

void FUN_10080952c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar1 = *(long *)(lVar7 + 0xf0);
  uVar2 = *(undefined8 *)(lVar7 + 0xe0);
  uVar3 = *(undefined8 *)(lVar7 + 0xe8);
  uVar6 = *(undefined8 *)(lVar7 + 0xd8);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0xf8));
  lVar4 = 0;
  FUN_100854dd4(0,uVar6,uVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar7 + 0xb0,lVar4);
  (**(code **)(lVar1 + 8))(lVar7 + 0x10,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001008095c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x1008095c4 | FUN_1008095c4 */

void FUN_1008095c4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined *param_14,undefined8 param_15,undefined8 param_16,
                  long param_17,long param_18,long param_19,undefined8 *param_20)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  Result RVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined *puVar8;
  undefined **ppuVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  long unaff_x21;
  long lVar17;
  long alStack_190 [2];
  long local_180;
  undefined1 auStack_17e [6];
  undefined **local_178;
  long local_170 [6];
  undefined8 *local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined *local_128;
  uint local_120;
  uint local_11c;
  undefined8 local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  long local_b0;
  long local_a8;
  undefined8 local_a0 [2];
  long local_90;
  long local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 *local_70;
  undefined8 local_58;
  
  local_170[5] = param_10;
  lVar6 = 0;
  local_170[0] = param_1;
  local_170[2] = param_5;
  local_170[3] = param_4;
  local_170[4] = param_7;
  _swift_getTupleTypeMetadata2(0,param_18,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  lVar17 = (long)alStack_190 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = 0;
  FUN_1007fb264();
  puVar16 = (undefined1 *)
            (lVar17 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_170[1] = lVar7;
  FUN_1000f8b08(&DAT_100fe7218,&DAT_100c7c6a0);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_f8 = CONCAT71(extraout_var,RVar5.value);
  local_100 = *(long *)(local_f8 + -8);
  uVar14 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = (long)puVar16 - uVar14;
  lVar7 = local_108 - uVar14;
  puVar11 = (undefined *)*param_2;
  uVar15 = param_2[1];
  uVar12 = param_2[2];
  FUN_100804a74();
  local_11c = (uint)uVar12;
  local_128 = puVar11;
  local_140 = param_3;
  local_118 = uVar15;
  if ((local_11c >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar11);
    uVar15 = 0;
    uVar13 = 0;
    local_12c = 1;
  }
  else if ((local_11c & 0xff00) == 0x200) {
    FUN_10080a3bc();
    puVar8 = &DAT_100f05368;
    _swift_allocError(&DAT_100f05368,param_3,0,0);
    lVar3 = local_170[2];
    *param_3 = local_170[3];
    param_3[1] = local_170[2];
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined1 *)(param_3 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar3);
    uVar15 = 0;
    uVar13 = 0;
    local_12c = 1;
    local_128 = puVar8;
  }
  else {
    uVar13 = local_11c & 0x1ff;
    FUN_1007fb28c(puVar11,uVar15,uVar12);
    local_12c = 0;
  }
  local_58 = 0;
  local_b8 = (undefined2)uVar13;
  local_b6 = (undefined1)local_12c;
  local_90 = param_18;
  local_88 = param_19;
  lStack_78 = local_170[4];
  local_70 = &local_58;
  puVar8 = &DAT_100fe7230;
  local_138 = uVar15;
  local_120 = uVar13;
  local_110 = puVar11;
  local_c8 = local_128;
  uStack_c0 = uVar15;
  local_80 = param_6;
  FUN_1000f7830(&DAT_100fe7230,&DAT_100c7bbe0);
  FUN_100805f50(lVar7,FUN_10080a664,local_a0,puVar8,lVar6);
  FUN_1000f8cac(local_170[5] + 0x18,local_a0,&DAT_100fe7238,&DAT_100c7c0c0);
  lVar6 = local_170[2];
  if (local_88 == 0) {
    _swift_bridgeObjectRelease(local_140);
    FUN_10080a674(local_a0);
    lVar6 = local_f8;
  }
  else {
    local_180 = param_17;
    alStack_190[1] = param_16;
    FUN_100076508(local_a0,&local_c8);
    local_170[5] = local_b0;
    local_170[4] = local_a8;
    ppuVar9 = &local_c8;
    FUN_100004640();
    local_178 = ppuVar9;
    FUN_1007fb128();
    DVar10.unknown = param_14;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar16 = 2;
    *(long *)(puVar16 + 8) = local_170[3];
    *(long *)(puVar16 + 0x10) = lVar6;
    puVar16[0x18] = param_11;
    *(undefined8 *)(puVar16 + 0x20) = param_13;
    *(undefined **)(puVar16 + 0x28) = param_14;
    *(undefined8 *)(puVar16 + 0x30) = param_15;
    uVar15 = local_58;
    local_90 = param_18;
    local_88 = param_19;
    local_80 = alStack_190[1];
    lStack_78 = local_180;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar6);
    _swift_errorRetain(uVar15);
    puVar11 = &DAT_100fe7180;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    lVar6 = local_f8;
    FUN_10062f364(&local_e0,FUN_10080a6d0,local_a0,local_f8,puVar11);
    lVar3 = local_170[1];
    iVar2 = *(int *)(local_170[1] + 0x18);
    *(undefined8 **)(puVar16 + *(int *)(local_170[1] + 0x14)) = local_140;
    *(undefined8 *)(puVar16 + iVar2) = uVar15;
    puVar1 = (undefined8 *)(puVar16 + *(int *)(lVar3 + 0x1c));
    puVar1[1] = uStack_d8;
    *puVar1 = local_e0;
    *(undefined2 *)(puVar1 + 2) = local_d0;
    *(undefined1 *)((long)puVar1 + 0x12) = local_ce;
    (**(code **)(local_170[4] + 8))(puVar16,local_170[5]);
    FUN_10080a754(puVar16);
    FUN_100004594(&local_c8);
  }
  lVar3 = local_100;
  uVar4 = local_11c;
  uVar13 = local_11c >> 0x10;
  (**(code **)(local_100 + 0x10))(local_108,lVar7,lVar6);
  FUN_100628180(lVar17,lVar6,local_a0);
  (**(code **)(lVar3 + 8))(lVar7,lVar6);
  FUN_10080a6bc(local_128,local_138,local_120,local_12c);
  FUN_1007fb2c4(local_110,local_118,uVar4,uVar13);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_18 + -8) + 0x20))(local_170[0],lVar17,param_18);
    _swift_errorRelease(local_58);
  }
  else {
    *param_20 = local_a0[0];
    _swift_errorRelease(local_58);
  }
  return;
}



/* Address: 0x100809b24 | FUN_100809b24 */

void FUN_100809b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,bool param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar11 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(param_11 + 0x10);
  _swift_bridgeObjectRetain(param_3);
  (*pcVar9)(lVar8,param_2,param_3,param_10,param_11);
  lVar10 = *(long *)(param_10 + -8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,param_10);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar11 + 8))(lVar8,CONCAT71(extraout_var,OVar1.value));
    uVar3 = local_80;
    uVar6 = uStack_78;
    FUN_1007ffcdc(local_80,uStack_78,local_70,uStack_68);
    uVar4 = uVar3;
    uVar7 = uVar6;
    thunk_FUN_1007ff8e4();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar3);
    SVar12 = Swift::__typeName(param_4);
    pcVar5 = SVar12.str;
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar5,0,0);
    *(undefined8 *)pcVar5 = uVar4;
    *(undefined8 *)(pcVar5 + 8) = uVar7;
    *(String *)(pcVar5 + 0x10) = SVar12;
    pcVar5[0x20] = '\x02';
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar10 + 0x20))(param_1,lVar8,param_10);
  }
  return;
}



/* Address: 0x100809c9c | FUN_100809c9c */

void FUN_100809c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,bool param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_2;
  uStack_68 = param_3;
  _swift_bridgeObjectRetain(param_3);
  Swift::RawRepresentable::_init();
  lVar9 = *(long *)(param_10 + -8);
  lVar2 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,param_10);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar10 + 8))(lVar8,CONCAT71(extraout_var,OVar1.value));
    uVar3 = local_90;
    uVar6 = uStack_88;
    FUN_1007ffcdc(local_90,uStack_88,local_80,uStack_78);
    uVar4 = uVar3;
    uVar7 = uVar6;
    thunk_FUN_1007ff8e4();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar3);
    SVar11 = Swift::__typeName(param_4);
    pcVar5 = SVar11.str;
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar5,0,0);
    *(undefined8 *)pcVar5 = uVar4;
    *(undefined8 *)(pcVar5 + 8) = uVar7;
    *(String *)(pcVar5 + 0x10) = SVar11;
    pcVar5[0x20] = '\x02';
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar9 + 0x20))(param_1,lVar8,param_10);
  }
  return;
}



/* Address: 0x100809e10 | FUN_100809e10 */

void FUN_100809e10(undefined8 param_1,undefined8 param_2,bool param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_78 = param_5;
  local_70 = param_6;
  local_68 = param_7;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar7 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_10 + 0x10))(puVar7,param_2,param_9,param_10);
  lVar8 = *(long *)(param_9 + -8);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,param_9);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar9 + 8))(puVar7,CONCAT71(extraout_var,OVar1.value));
    uVar5 = local_78;
    FUN_1007ffcdc(param_4,local_78,local_70,local_68);
    uVar3 = param_4;
    uVar6 = uVar5;
    thunk_FUN_1007ff8e4();
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(param_4);
    SVar10 = Swift::__typeName(param_3);
    pcVar4 = SVar10.str;
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar4,0,0);
    *(undefined8 *)pcVar4 = uVar3;
    *(undefined8 *)(pcVar4 + 8) = uVar6;
    *(String *)(pcVar4 + 0x10) = SVar10;
    pcVar4[0x20] = '\x02';
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(param_1,puVar7,param_9);
  }
  return;
}



/* Address: 0x100809f84 | FUN_100809f84 */

void FUN_100809f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = param_5;
  local_78 = param_6;
  local_70 = param_7;
  local_68 = param_3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  lVar7 = (long)&local_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Swift::RawRepresentable::_init();
  lVar8 = *(long *)(param_9 + -8);
  lVar2 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,param_9);
  if ((int)lVar2 == 1) {
    (**(code **)(lVar9 + 8))(lVar7,CONCAT71(extraout_var,OVar1.value));
    uVar5 = local_80;
    FUN_1007ffcdc(param_4,local_80,local_78,local_70);
    uVar3 = param_4;
    uVar6 = uVar5;
    thunk_FUN_1007ff8e4();
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(param_4);
    SVar10 = Swift::__typeName(SUB81(local_68,0));
    pcVar4 = SVar10.str;
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar4,0,0);
    *(undefined8 *)pcVar4 = uVar3;
    *(undefined8 *)(pcVar4 + 8) = uVar6;
    *(String *)(pcVar4 + 0x10) = SVar10;
    pcVar4[0x20] = '\x02';
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar8 + 0x20))(param_1,lVar7,param_9);
  }
  return;
}



/* Address: 0x10080a0f8 | FUN_10080a0f8 */

char * FUN_10080a0f8(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1.str;
}



/* Address: 0x10080a128 | FUN_10080a128 */

void FUN_10080a128(void)

{
  FUN_10080a18c();
  return;
}



/* Address: 0x10080a13c | FUN_10080a13c */

undefined8 FUN_10080a13c(void)

{
  undefined8 local_30;
  
  Swift::RawRepresentable::_get_rawValue();
  return local_30;
}



/* Address: 0x10080a178 | FUN_10080a178 */

void FUN_10080a178(void)

{
  FUN_10080a18c();
  return;
}



/* Address: 0x10080a18c | FUN_10080a18c */

undefined8
FUN_10080a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_60 = param_2;
  uStack_58 = param_3;
  local_38 = param_1;
  _swift_getKeyPath(param_4,&local_60);
  uVar1 = 0;
  local_50 = param_3;
  uStack_48 = param_4;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  FUN_1005f45bc(param_5,&local_60,uVar1,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_release(param_4);
  return param_5;
}



/* Address: 0x10080a248 | FUN_10080a248 */

void FUN_10080a248(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x18))(param_2,param_3);
  return;
}



/* Address: 0x10080a27c | FUN_10080a27c */

void FUN_10080a27c(void)

{
  FUN_10080a2e4();
  return;
}



/* Address: 0x10080a290 | FUN_10080a290 */

undefined8 FUN_10080a290(void)

{
  undefined8 local_28;
  
  Swift::RawRepresentable::_get_rawValue();
  return local_28;
}



/* Address: 0x10080a2d0 | FUN_10080a2d0 */

void FUN_10080a2d0(void)

{
  FUN_10080a2e4();
  return;
}



/* Address: 0x10080a2e4 | FUN_10080a2e4 */

undefined8
FUN_10080a2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_60 = param_2;
  uStack_58 = param_3;
  local_38 = param_1;
  _swift_getKeyPath(param_4,&local_60);
  uVar1 = 0;
  local_50 = param_3;
  uStack_48 = param_4;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  FUN_1005f45bc(param_5,&local_60,uVar1,PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_release(param_4);
  return param_5;
}



/* Address: 0x10080a3a0 | thunk_FUN_10082d328 */

void thunk_FUN_10082d328(void)

{
  FUN_10082d328();
  return;
}



/* Address: 0x10080a3a4 | FUN_10080a3a4 */

undefined1  [16] FUN_10080a3a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10080a3b0 | FUN_10080a3b0 */

void FUN_10080a3b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  return;
}



/* Address: 0x10080a3bc | FUN_10080a3bc */

void FUN_10080a3bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7bfe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7bfe0,&DAT_100f05368);
  DAT_100fe7208 = pTVar1;
  return;
}



/* Address: 0x10080a3fc | thunk_FUN_10082d354 */

void thunk_FUN_10082d354(void)

{
  FUN_10082d354();
  return;
}



/* Address: 0x10080a400 | FUN_10080a400 */

undefined1  [16] FUN_10080a400(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10080a40c | FUN_10080a40c */

void FUN_10080a40c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getAtKeyPath(param_1,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10080a434 | thunk_FUN_10082d328 */

void thunk_FUN_10082d328(void)

{
  FUN_10082d328();
  return;
}



/* Address: 0x10080a438 | FUN_10080a438 */

undefined1  [16] FUN_10080a438(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10080a444 | thunk_FUN_10082d2f0 */

void thunk_FUN_10082d2f0(void)

{
  FUN_10082d2f0();
  return;
}


