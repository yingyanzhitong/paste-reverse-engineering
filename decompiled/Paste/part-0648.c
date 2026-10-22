/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006dc190 | FUN_1006dc190 */

undefined8 FUN_1006dc190(undefined8 param_1,undefined8 param_2)

{
  FUN_1006d3980(param_2,param_1);
  return param_2;
}



/* Address: 0x1006dc1cc | FUN_1006dc1cc */

void FUN_1006dc1cc(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  bool bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  undefined8 uVar29;
  uint local_1a4;
  undefined1 auStack_198 [72];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_58;
  
  puVar28 = (ulong *)(param_1 + 0x40);
  uVar24 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar24 < 0x40) {
    uVar19 = ~(-1L << (-uVar24 & 0x3f));
  }
  uVar19 = uVar19 & *puVar28;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar27 = 0;
  local_58 = uVar19;
  local_1a4 = param_4;
  lVar25 = lVar27;
  while( true ) {
    while (uVar19 == 0) {
      bVar16 = SCARRY8(lVar27,1);
      lVar27 = lVar27 + 1;
      if (bVar16) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1006dc548);
        (*pcVar15)();
      }
      if ((long)(0x3f - uVar24 >> 6) <= lVar27) goto LAB_1006dc4fc;
      uVar19 = puVar28[lVar27];
    }
    uVar20 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar27 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar20 * 0x10);
    local_150 = *puVar1;
    uStack_148 = puVar1[1];
    puVar21 = (undefined1 *)(*(long *)(param_1 + 0x38) + uVar20 * 0x38);
    local_f0 = *puVar21;
    uStack_138 = *(undefined8 *)(puVar21 + 8);
    uVar9 = *(undefined8 *)(puVar21 + 0x10);
    uVar5 = *(undefined8 *)(puVar21 + 0x18);
    uVar10 = *(undefined8 *)(puVar21 + 0x20);
    uVar6 = *(undefined8 *)(puVar21 + 0x28);
    uVar11 = *(undefined8 *)(puVar21 + 0x30);
    uStack_140 = CONCAT71(uStack_ef,local_f0);
    local_130 = uVar9;
    uStack_128 = uVar5;
    uStack_120 = uVar10;
    uStack_118 = uVar6;
    local_110 = uVar11;
    local_100 = local_150;
    uStack_f8 = uStack_148;
    local_e8 = uStack_138;
    local_e0 = uVar9;
    uStack_d8 = uVar5;
    uStack_d0 = uVar10;
    local_c8 = uVar6;
    uStack_c0 = uVar11;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar9);
    FUN_1006bcff0(uVar5,uVar10,uVar6,uVar11);
    FUN_1000f8cac(&local_100,auStack_198,&DAT_100fdd3e8,&DAT_100c71da0);
    (*param_2)(&local_b8,&local_150);
    FUN_1000fb4c4(&local_100,&DAT_100fdd3e8,&DAT_100c71da0);
    FUN_1000fb4c4(&local_100,&DAT_100fdd3e8,&DAT_100c71da0);
    uVar14 = uStack_78;
    uVar11 = local_80;
    uVar10 = uStack_88;
    uVar9 = local_90;
    uVar6 = uStack_98;
    uVar5 = local_a0;
    uVar13 = local_a8;
    uVar12 = local_b0;
    uVar20 = local_b8;
    if (local_b0 == 0) break;
    lVar26 = *param_5;
    uVar17 = local_b8;
    uVar18 = local_b0;
    FUN_10046483c();
    lVar22 = *(long *)(lVar26 + 0x10);
    uVar23 = (ulong)~(uint)uVar18 & 1;
    lVar25 = lVar22 + uVar23;
    if (SCARRY8(lVar22,uVar23)) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1006dc54c);
      (*pcVar15)();
    }
    if (*(long *)(lVar26 + 0x18) < lVar25) {
      FUN_1006bb448(lVar25,local_1a4 & 1);
      uVar17 = uVar20;
      uVar23 = uVar12;
      FUN_10046483c();
      if (((uint)uVar18 & 1) != ((uint)uVar23 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1006dc560);
        (*pcVar15)();
      }
    }
    else if ((local_1a4 & 1) == 0) {
      FUN_1006ba6b8();
    }
    uVar19 = uVar19 - 1 & uVar19;
    lVar25 = *param_5;
    if ((uVar18 & 1) == 0) {
      lVar22 = lVar25 + (uVar17 >> 6) * 8;
      *(ulong *)(lVar22 + 0x40) = *(ulong *)(lVar22 + 0x40) | 1L << (uVar17 & 0x3f);
      puVar2 = (ulong *)(*(long *)(lVar25 + 0x30) + uVar17 * 0x10);
      *puVar2 = uVar20;
      puVar2[1] = uVar12;
      puVar21 = (undefined1 *)(*(long *)(lVar25 + 0x38) + uVar17 * 0x38);
      *puVar21 = uVar13;
      *(undefined8 *)(puVar21 + 8) = uVar5;
      *(undefined8 *)(puVar21 + 0x10) = uVar6;
      *(undefined8 *)(puVar21 + 0x18) = uVar9;
      *(undefined8 *)(puVar21 + 0x20) = uVar10;
      *(undefined8 *)(puVar21 + 0x28) = uVar11;
      *(undefined8 *)(puVar21 + 0x30) = uVar14;
      if (SCARRY8(*(long *)(lVar25 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1006dc550);
        (*pcVar15)();
      }
      *(long *)(lVar25 + 0x10) = *(long *)(lVar25 + 0x10) + 1;
    }
    else {
      _swift_bridgeObjectRelease(uVar12);
      puVar21 = (undefined1 *)(*(long *)(lVar25 + 0x38) + uVar17 * 0x38);
      uVar3 = *(undefined8 *)(puVar21 + 0x10);
      uVar7 = *(undefined8 *)(puVar21 + 0x18);
      uVar4 = *(undefined8 *)(puVar21 + 0x20);
      uVar8 = *(undefined8 *)(puVar21 + 0x28);
      uVar29 = *(undefined8 *)(puVar21 + 0x30);
      *puVar21 = uVar13;
      *(undefined8 *)(puVar21 + 8) = uVar5;
      *(undefined8 *)(puVar21 + 0x10) = uVar6;
      *(undefined8 *)(puVar21 + 0x18) = uVar9;
      *(undefined8 *)(puVar21 + 0x20) = uVar10;
      *(undefined8 *)(puVar21 + 0x28) = uVar11;
      *(undefined8 *)(puVar21 + 0x30) = uVar14;
      _swift_bridgeObjectRelease(uVar3);
      FUN_1006bf814(uVar7,uVar4,uVar8,uVar29);
    }
    local_1a4 = 1;
    local_58 = uVar19;
    lVar25 = lVar27;
  }
LAB_1006dc4fc:
  FUN_10000c650(param_1,puVar28,~uVar24,lVar25,local_58);
  _swift_release(param_3);
  return;
}



/* Address: 0x1006dc560 | FUN_1006dc560 */

void FUN_1006dc560(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71cc8;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006dc58c | FUN_1006dc58c */

void FUN_1006dc58c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  undefined *puStack_28;
  
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_48 = &DAT_100c71d20;
  local_40 = &DAT_100c71d20;
  puStack_38 = &DAT_100c71d38;
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar2 = 0x13f;
  local_50 = puVar1;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_initStructMetadata(param_1,0,6,&local_50,param_1 + 0x38);
  }
  return;
}



/* Address: 0x1006dc61c | FUN_1006dc61c */

long * FUN_1006dc61c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  
  lVar5 = *(long *)(param_3 + 0x18);
  lVar3 = *(long *)(lVar5 + -8);
  uVar1 = *(uint *)(lVar3 + 0x50);
  uVar4 = (ulong)uVar1 & 0xff;
  lVar7 = *(long *)(lVar3 + 0x40);
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (((uint)uVar4 < 8 && (uVar1 & 0x100000) == 0) &&
      (lVar7 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8) + 8 < 0x19) {
    *(char *)(param_1 + 1) = (char)param_2[1];
    *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
    puVar8 = (undefined8 *)((long)param_1 + 0x11U & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)((long)param_2 + 0x11U & 0xfffffffffffffff8);
    *puVar8 = *puVar9;
    uVar6 = puVar9[1];
    puVar8[1] = uVar6;
    pcVar10 = *(code **)(lVar3 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    (*pcVar10)(puVar8 + 2,puVar9 + 2,lVar5);
    *(undefined8 *)((long)puVar8 + lVar7 + 0x17 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)puVar9 + lVar7 + 0x17 & 0xfffffffffffffff8);
    _swift_bridgeObjectRetain();
  }
  else {
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006dc72c | FUN_1006dc72c */

void FUN_1006dc72c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = (long)param_1 + 0x11U & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar1 + 8));
  lVar2 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar1 = uVar1 + *(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar1);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(*(long *)(lVar2 + 0x40) + uVar1 + 7 & 0xfffffffffffffff8));
  return;
}



/* Address: 0x1006dc7a0 | FUN_1006dc7a0 */

undefined8 * FUN_1006dc7a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  puVar1 = (undefined8 *)((long)param_1 + 0x11U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x11U & 0xfffffffffffffff8);
  *puVar1 = *puVar2;
  uVar4 = puVar2[1];
  puVar1[1] = uVar4;
  lVar5 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar5 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar3 + 0x10 + (long)puVar1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar3 + 0x10 + (long)puVar2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar7 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar8)(uVar6,uVar3,lVar5);
  lVar5 = *(long *)(lVar7 + 0x40) + 7;
  *(undefined8 *)(lVar5 + uVar6 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar5 + uVar3 & 0xfffffffffffffff8);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006dc874 | FUN_1006dc874 */

undefined8 * FUN_1006dc874(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  puVar4 = (undefined8 *)((long)param_1 + 0x11U & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0x11U & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  uVar3 = puVar4[1];
  puVar4[1] = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar2 = uVar1 + 0x10 + (long)puVar4 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar1 + 0x10 + (long)puVar5 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x18))(uVar2,uVar1);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  uVar3 = *puVar4;
  *puVar4 = *(undefined8 *)(lVar6 + uVar1 & 0xfffffffffffffff8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1006dc964 | FUN_1006dc964 */

undefined8 * FUN_1006dc964(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  puVar1 = (undefined8 *)((long)param_1 + 0x11U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x11U & 0xfffffffffffffff8);
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar3 + 0x10 + (long)puVar1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar3 + 0x10 + (long)puVar2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x20))(uVar4,uVar3);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  *(undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8) =
       *(undefined8 *)(lVar5 + uVar3 & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1006dca0c | FUN_1006dca0c */

undefined8 * FUN_1006dca0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  puVar5 = (undefined8 *)((long)param_1 + 0x11U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 + 0x11U & 0xfffffffffffffff8);
  *puVar5 = *puVar4;
  uVar1 = puVar5[1];
  puVar5[1] = puVar4[1];
  _swift_bridgeObjectRelease(uVar1);
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 0x10 + (long)puVar5 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 0x10 + (long)puVar4 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar3,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *puVar4;
  *puVar4 = *(undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006dcae4 | FUN_1006dcae4 */

ulong FUN_1006dcae4(ulong *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar6 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar6;
  if (uVar6 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (*(long *)(lVar8 + 0x40) + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 8;
    uVar2 = uVar1 & 0xfffffff8;
    uVar7 = (uint)uVar2;
    uVar10 = 2;
    uVar5 = uVar10;
    if (uVar2 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0x100) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar10;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1006dcb84;
    }
    else if (uVar4 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1006dcb84:
        uVar10 = uVar10 - 1;
        if (uVar2 != 0) {
          uVar10 = 0;
          uVar7 = (uint)*param_1;
        }
        return (ulong)(uVar3 + (uVar7 | uVar10) + 1);
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar1);
      if (uVar10 != 0) goto LAB_1006dcb84;
    }
  }
  if (-1 < (int)uVar6) {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    return (ulong)((int)uVar9 + 1);
  }
  uVar9 = ((long)param_1 + 0x11U & 0xfffffffffffffff8) + uVar9 + 0x10 & ~uVar9;
                    /* WARNING: Could not recover jumptable at 0x0001006dcbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(uVar9);
  return uVar9;
}



/* Address: 0x1006dcbec | FUN_1006dcbec */

void FUN_1006dcbec(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  sVar1 = (*(long *)(lVar6 + 0x40) + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 8;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar9 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_1006dcc98;
  }
  else {
    uVar8 = 2;
    uVar3 = uVar8;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar8 = 4;
    }
    if (uVar3 < 0x100) {
      uVar8 = 1;
    }
    uVar9 = 0;
    if (1 < uVar3) {
      uVar9 = uVar8;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_1006dcc98:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *(uint *)param_1 = param_2 + ~uVar2;
      }
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar9 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar9 < 2) {
    if (uVar9 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar9 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006dcd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))
                (((long)param_1 + 0x11U & 0xfffffffffffffff8) + uVar7 + 0x10 & ~uVar7);
      return;
    }
    if ((int)param_2 < 0) {
      param_2 = param_2 & 0x7fffffff;
    }
    else {
      param_2 = param_2 - 1;
    }
    *param_1 = (ulong)param_2;
  }
  return;
}



/* Address: 0x1006dcd64 | FUN_1006dcd64 */

void FUN_1006dcd64(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbbd00);
  return;
}



/* Address: 0x1006dcd70 | FUN_1006dcd70 */

void FUN_1006dcd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1006da958(plVar7,param_1,param_2,param_3,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x1006dce28 | FUN_1006dce28 */

void FUN_1006dce28(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbbd8c);
  return;
}



/* Address: 0x1006dce34 | _swift_release */

void _swift_release(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100eae3e8)();
  return;
}



/* Address: 0x1006dce38 | FUN_1006dce38 */

void FUN_1006dce38(void)

{
  undefined *puVar1;
  
  if (DAT_100fdd3e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int8_>Swift__BinaryInteger_100eadce0;
  _swift_getWitnessTable
            (PTR_Swift____int8_>Swift__BinaryInteger_100eadce0,
             PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  DAT_100fdd3e0 = puVar1;
  return;
}



/* Address: 0x1006dce78 | FUN_1006dce78 */

void FUN_1006dce78(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [32];
  undefined1 *local_40;
  undefined *puStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = 0x13f;
  uVar3 = uVar4;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar4,uVar5,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  if (uVar3 < 0x40) {
    lVar2 = 0x13f;
    _swift_getAssociatedTypeWitness
              (0x13f,uVar4,uVar5,0x100cbb850,&TargetProtocolRequirement_100cbb858);
    if (uVar4 < 0x40) {
      _swift_getTupleTypeLayout3
                (auStack_60,&DAT_100c71dc8,*(long *)(lVar1 + -8) + 0x40,*(long *)(lVar2 + -8) + 0x40
                );
      puStack_38 = &DAT_100c71dc8;
      local_40 = auStack_60;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_40);
    }
  }
  return;
}



/* Address: 0x1006dcf50 | FUN_1006dcf50 */

long * FUN_1006dcf50(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar8,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar12 = *(long *)(lVar3 + -8);
  uVar6 = *(uint *)(lVar12 + 0x50);
  uVar13 = (ulong)uVar6 & 0xff;
  lVar11 = *(long *)(lVar12 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar8,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar10 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar1 = (lVar11 + uVar9 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) &
          (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  uVar5 = uVar9 | uVar13;
  if ((uVar5 < 8 && ((*(uint *)(lVar10 + 0x50) | uVar6) & 0x100000) == 0) && uVar1 + 1 < 0x19) {
    uVar6 = (uint)*(byte *)((long)param_2 + uVar1);
    if (1 < *(byte *)((long)param_2 + uVar1)) {
      uVar6 = (int)*param_2 + 2;
    }
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    if (uVar6 == 1) {
      *(undefined1 *)((long)param_1 + uVar1) = 1;
      _swift_bridgeObjectRetain(lVar2);
    }
    else {
      uVar5 = (long)param_1 + uVar13 + 0x10 & ~uVar13;
      uVar13 = (long)param_2 + uVar13 + 0x10 & ~uVar13;
      pcVar14 = *(code **)(lVar12 + 0x10);
      _swift_bridgeObjectRetain(lVar2);
      (*pcVar14)(uVar5,uVar13,lVar3);
      lVar11 = lVar11 + uVar9;
      (**(code **)(lVar10 + 0x10))(uVar5 + lVar11 & ~uVar9,uVar13 + lVar11 & ~uVar9,lVar4);
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    param_1 = (long *)(lVar11 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006dd108 | FUN_1006dd108 */

void FUN_1006dd108(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar8,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar12 = *(long *)(lVar2 + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar11 = *(long *)(lVar12 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar8,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar9 = *(long *)(lVar3 + -8);
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = (lVar11 + uVar10 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) &
          (uVar10 ^ 0xffffffffffffffff)) + *(long *)(lVar9 + 0x40);
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar6);
  uVar14 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar6;
    uVar5 = 4;
    if (uVar4 < 4) {
      uVar5 = uVar4;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1006dd228;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar14 = uVar5 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar14 = uVar5;
    }
    uVar14 = uVar14 + 2;
  }
LAB_1006dd228:
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  if (uVar14 == 1) {
    return;
  }
  uVar6 = (ulong)((long)param_1 + uVar13 + 0x10) & ~uVar13;
  (**(code **)(lVar12 + 8))(uVar6,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006dd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))(uVar6 + lVar11 + uVar10 & ~uVar10,lVar3);
  return;
}



/* Address: 0x1006dd2a8 | FUN_1006dd2a8 */

undefined8 * FUN_1006dd2a8(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar10,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar7 = *(long *)(lVar3 + -8);
  uVar16 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar13 = *(long *)(lVar7 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar10,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar15 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar1 = (lVar13 + uVar9 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)) &
          (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar12 = (uint)uVar1;
    uVar6 = 4;
    if (uVar12 < 4) {
      uVar6 = uVar12;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1006dd3d8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1006dd3d8:
  uVar10 = *(undefined8 *)(param_2 + 2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar10;
  if (uVar5 != 1) {
    uVar8 = (long)param_1 + uVar16 + 0x10 & ~uVar16;
    uVar16 = (ulong)((long)param_2 + uVar16 + 0x10) & ~uVar16;
    pcVar14 = *(code **)(lVar7 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar14)(uVar8,uVar16,lVar3);
    lVar13 = lVar13 + uVar9;
    (**(code **)(lVar15 + 0x10))(uVar8 + lVar13 & ~uVar9,uVar16 + lVar13 & ~uVar9,lVar4);
  }
  else {
    _swift_bridgeObjectRetain();
  }
  *(bool *)((long)param_1 + uVar1) = uVar5 == 1;
  return param_1;
}



/* Address: 0x1006dd480 | FUN_1006dd480 */

uint * FUN_1006dd480(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar15 = *(long *)(lVar4 + -8);
  uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar17 = *(long *)(lVar15 + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar7,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar13 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar1 = (lVar17 + uVar6 + (uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff)) &
          (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar13 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar10 = (uint)bVar3;
  uVar16 = (uint)uVar1;
  if (1 < bVar3) {
    uVar2 = 4;
    if (uVar16 < 4) {
      uVar2 = uVar16;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1006dd5c8;
      uVar10 = (uint)(byte)*param_1;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_1;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_1;
    }
    else {
      uVar10 = *param_1;
    }
    if (uVar16 < 4) {
      uVar10 = (uVar10 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3)) + 2;
    }
    else {
      uVar10 = uVar10 + 2;
    }
  }
LAB_1006dd5c8:
  uVar8 = ~uVar18;
  uVar14 = ~uVar6;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  if (uVar10 != 1) {
    uVar12 = (ulong)((long)param_1 + uVar18 + 0x10) & uVar8;
    (**(code **)(lVar15 + 8))(uVar12,lVar4);
    (**(code **)(lVar13 + 8))(uVar12 + lVar17 + uVar6 & uVar14,lVar5);
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar2 = 4;
    if (uVar16 < 4) {
      uVar2 = uVar16;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) goto LAB_1006dd6a0;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar2 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar2 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    if (uVar16 < 4) {
      uVar10 = (uVar10 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3)) + 2;
    }
    else {
      uVar10 = uVar10 + 2;
    }
  }
LAB_1006dd6a0:
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  if (uVar10 == 1) {
    *(byte *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar12 = (ulong)((long)param_1 + uVar18 + 0x10) & uVar8;
    uVar8 = (ulong)((long)param_2 + uVar18 + 0x10) & uVar8;
    pcVar9 = *(code **)(lVar15 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar9)(uVar12,uVar8,lVar4);
    (**(code **)(lVar13 + 0x10))
              (uVar12 + lVar17 + uVar6 & uVar14,uVar8 + lVar17 + uVar6 & uVar14,lVar5);
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1006dd740 | FUN_1006dd740 */

undefined8 * FUN_1006dd740(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  uVar10 = *(undefined8 *)(param_3 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar10,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar13 = *(long *)(lVar3 + -8);
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  lVar7 = *(long *)(lVar13 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar10,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar15 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar1 = (lVar7 + uVar9 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)) &
          (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (1 < bVar2) {
    uVar12 = (uint)uVar1;
    uVar6 = 4;
    if (uVar12 < 4) {
      uVar6 = uVar12;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1006dd87c;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 2 << (ulong)((uVar12 & 3) << 3);
    if (3 < uVar12) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1006dd87c:
  uVar10 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar10;
  if (uVar5 != 1) {
    uVar8 = (long)param_1 + uVar14 + 0x10 & ~uVar14;
    uVar14 = (ulong)((long)param_2 + uVar14 + 0x10) & ~uVar14;
    (**(code **)(lVar13 + 0x20))(uVar8,uVar14,lVar3);
    lVar7 = lVar7 + uVar9;
    (**(code **)(lVar15 + 0x20))(uVar8 + lVar7 & ~uVar9,uVar14 + lVar7 & ~uVar9,lVar4);
  }
  *(bool *)((long)param_1 + uVar1) = uVar5 == 1;
  return param_1;
}



/* Address: 0x1006dd918 | FUN_1006dd918 */

uint * FUN_1006dd918(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar12,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  lVar6 = *(long *)(lVar3 + -8);
  uVar17 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar16 = *(long *)(lVar6 + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar12,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  lVar7 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = (lVar16 + uVar8 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)) &
          (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar11 = (uint)bVar2;
  uVar14 = (uint)uVar1;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar14 < 4) {
      uVar5 = uVar14;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1006dda6c;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar11 = uVar5 | bVar2 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar11 = uVar5;
    }
    uVar11 = uVar11 + 2;
  }
LAB_1006dda6c:
  uVar10 = ~uVar17;
  uVar15 = ~uVar8;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  if (uVar11 != 1) {
    uVar13 = (ulong)((long)param_1 + uVar17 + 0x10) & uVar10;
    (**(code **)(lVar6 + 8))(uVar13,lVar3);
    (**(code **)(lVar7 + 8))(uVar13 + lVar16 + uVar8 & uVar15,lVar4);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar11 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar14 < 4) {
      uVar5 = uVar14;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1006ddb30;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar11 = uVar5 | bVar2 - 2 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar11 = uVar5;
    }
    uVar11 = uVar11 + 2;
  }
LAB_1006ddb30:
  uVar9 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = uVar9;
  if (uVar11 != 1) {
    uVar13 = (ulong)((long)param_1 + uVar17 + 0x10) & uVar10;
    uVar10 = (ulong)((long)param_2 + uVar17 + 0x10) & uVar10;
    (**(code **)(lVar6 + 0x20))(uVar13,uVar10,lVar3);
    (**(code **)(lVar7 + 0x20))
              (uVar13 + lVar16 + uVar8 & uVar15,uVar10 + lVar16 + uVar8 & uVar15,lVar4);
  }
  *(bool *)((long)param_1 + uVar1) = uVar11 == 1;
  return param_1;
}



/* Address: 0x1006ddbc4 | FUN_1006ddbc4 */

int FUN_1006ddbc4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar10,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar11 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar9,uVar10,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = ((uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)) + lVar11 + uVar7 &
          (uVar7 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar6 < 0x11) {
    uVar6 = 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_1006ddcf8;
  uVar7 = uVar6 + 1;
  uVar5 = (uint)uVar7;
  uVar2 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - 0xfe >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1006ddcf8;
      goto LAB_1006ddc84;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1006ddc84:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar5 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar2 = 4;
      if (uVar5 < 4) {
        uVar2 = uVar5;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar1) + 0xff;
  }
LAB_1006ddcf8:
  iVar3 = 0;
  if (1 < *(byte *)((long)param_1 + uVar6)) {
    iVar3 = (*(byte *)((long)param_1 + uVar6) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1006ddd68 | FUN_1006ddd68 */

void FUN_1006ddd68(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  uVar11 = *(undefined8 *)(param_4 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar8,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar12 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar8,uVar11,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = ((uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + lVar12 + uVar6 &
          (uVar6 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar4 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  sVar1 = uVar5 + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0xff) {
    bVar10 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar7 << 3 & 0x1f)) +
            1;
    bVar10 = 2;
    if (0xffff < uVar2) {
      bVar10 = 4;
    }
    if (uVar2 < 0x100) {
      bVar10 = 1 < uVar2;
    }
  }
  else {
    bVar10 = 1;
  }
  if (param_2 < 0xff) {
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar7 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar10 < 2) {
      if (bVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar9;
      }
    }
    else if (bVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar9;
    }
  }
  return;
}



/* Address: 0x1006ddf88 | FUN_1006ddf88 */

uint FUN_1006ddf88(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar8,uVar9,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar8,uVar9,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = ((uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + lVar10 + uVar6 &
          (uVar6 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (uVar5 < 0x11) {
    uVar5 = 0x10;
  }
  bVar1 = *(byte *)((long)param_1 + uVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)uVar5;
    uVar7 = 4;
    if (uVar4 < 4) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) {
        return uVar2;
      }
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar2 = uVar7 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar7;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x1006de0ac | FUN_1006de0ac */

void FUN_1006de0ac(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar7,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar9 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar7,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = ((uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + lVar9 + uVar4 &
          (uVar4 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar3 + -8) + 0x40);
  if (param_2 < 2) {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    if (uVar4 < 0x11) {
      uVar4 = 0x10;
    }
    param_2 = param_2 - 2;
    uVar5 = (uint)uVar4;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x02';
      if (uVar5 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 2;
      _bzero(param_1,uVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1006de200 | thunk_FUN_1006daa48 */

bool thunk_FUN_1006daa48(Scalar param_1)

{
  long lVar1;
  long lVar2;
  NumericType NVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  Properties PVar8;
  Properties PVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lStack_70;
  long lStack_68;
  long lVar5;
  
  NVar3 = Swift::Unicode::NumericType::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,NVar3.value);
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fdd3d0;
  lStack_70 = lVar12;
  FUN_1000f7830(&DAT_100fdd3d0,&DAT_100c71d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  puVar7 = &DAT_100fdd3d8;
  FUN_1000f7830(&DAT_100fdd3d8,&DAT_100c71d90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar11 - extraout_x12_00;
  PVar8 = Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  lVar16 = *(long *)(PVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  PVar9 = Swift::Unicode::Scalar::get_properties(param_1);
  Swift::Unicode::Scalar::Properties::_get_numericType(PVar9);
  (**(code **)(lVar16 + 8))(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),PVar8.unknown);
  (**(code **)(lVar15 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___enum_case_for_Swift_Unicode_NumericType_decimal_Swift_Unicode_NumericType_Type___>_Swift_Unicode_NumericType_100eadf30
             ,lVar5);
  (**(code **)(lVar15 + 0x38))(lVar11,0,1,lVar5);
  lVar16 = (long)*(int *)(puVar6 + 0x30);
  FUN_1000f8cac(lVar13,lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
  FUN_1000f8cac(lVar11,lVar12 + lVar16,&DAT_100fdd3d8,&DAT_100c71d90);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar12;
  (*pcVar14)(lVar12,1,lVar5);
  lVar2 = lStack_68;
  if ((int)lVar10 == 1) {
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar16 = lVar12 + lVar16;
    (*pcVar14)(lVar16,1,lVar5);
    if ((int)lVar16 == 1) {
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return true;
    }
  }
  else {
    FUN_1000f8cac(lVar12,lStack_68,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar10 = lVar12 + lVar16;
    (*pcVar14)(lVar10,1,lVar5);
    lVar1 = lStack_70;
    if ((int)lVar10 != 1) {
      (**(code **)(lVar15 + 0x20))(lStack_70,lVar12 + lVar16,lVar5);
      bVar4 = Swift::Equatable::___infix
                        (lVar2,lVar1,lVar5,
                         PTR___protocol_witness_table_for_Swift_Unicode_NumericType___Swift_Equatable_in_Swift_100eadf48
                        );
      pcVar14 = *(code **)(lVar15 + 8);
      (*pcVar14)(lVar1,lVar5);
      FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
      FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
      (*pcVar14)(lVar2,lVar5);
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return bVar4;
    }
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    (**(code **)(lVar15 + 8))(lVar2,lVar5);
  }
  FUN_1000fb4c4(lVar12,&DAT_100fdd3d0,&DAT_100c71d88);
  return false;
}



/* Address: 0x1006de204 | FUN_1006de204 */

undefined1  [16] FUN_1006de204(void)

{
  return ZEXT816(2) << 0x40;
}



/* Address: 0x1006de210 | FUN_1006de210 */

void FUN_1006de210(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1006de228 | FUN_1006de228 */

void FUN_1006de228(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1006de240 | FUN_1006de240 */

void FUN_1006de240(void)

{
  return;
}



/* Address: 0x1006de248 | FUN_1006de248 */

void FUN_1006de248(undefined8 *param_1,undefined8 param_2)

{
  FUN_1006de240();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Address: 0x1006de274 | FUN_1006de274 */

ulong FUN_1006de274(ulong param_1,long param_2,char param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if (param_3 == '\0') {
    uVar12 = *(ulong *)(param_4 + 0x10);
    _swift_bridgeObjectRetain(param_2);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if (*(ulong *)(param_4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1006de570);
          (*pcVar8)();
        }
        puVar15 = (undefined8 *)(param_4 + 0x20 + uVar13 * 0x20);
        uVar11 = *puVar15;
        uVar4 = puVar15[1];
        puVar3 = (undefined *)puVar15[2];
        puVar5 = (undefined *)puVar15[3];
        uVar13 = uVar13 + 1;
        lVar14 = *(long *)(param_2 + 0x10) + 1;
        puVar15 = (undefined8 *)(param_2 + 0x38);
        do {
          lVar14 = lVar14 + -1;
          if (lVar14 == 0) {
            _swift_bridgeObjectRetain(uVar4);
            _swift_bridgeObjectRetain(puVar5);
            puVar10 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar10 & 1) == 0) {
              FUN_1006bf87c(0,*(long *)(puVar7 + 0x10) + 1,1);
            }
            uVar2 = *(ulong *)(puVar7 + 0x10);
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
              FUN_1006bf87c(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
            }
            *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
            *(undefined8 *)(puVar7 + uVar2 * 0x20 + 0x20) = uVar11;
            *(undefined8 *)(puVar7 + uVar2 * 0x20 + 0x28) = uVar4;
            *(undefined **)(puVar7 + uVar2 * 0x20 + 0x30) = puVar3;
            *(undefined **)(puVar7 + uVar2 * 0x20 + 0x38) = puVar5;
            break;
          }
          puVar1 = puVar15 + -1;
          _Var6.unknown = (undefined *)*puVar15;
          if ((undefined *)*puVar1 == puVar3 && _Var6.unknown == puVar5) break;
          puVar15 = puVar15 + 4;
          bVar9 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar1,_Var6,(_StringComparisonResult)(__int8)puVar3);
        } while (!bVar9);
      } while (uVar13 != uVar12);
    }
    _swift_bridgeObjectRelease(param_4);
    uVar11 = 0;
  }
  else {
    if (param_3 != '\x01') {
      _swift_bridgeObjectRelease(param_4);
      return param_1;
    }
    uVar12 = *(ulong *)(param_4 + 0x10);
    _swift_bridgeObjectRetain(param_2);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if (*(ulong *)(param_4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1006de56c);
          (*pcVar8)();
        }
        puVar15 = (undefined8 *)(param_4 + 0x20 + uVar13 * 0x20);
        uVar11 = *puVar15;
        uVar4 = puVar15[1];
        puVar3 = (undefined *)puVar15[2];
        puVar5 = (undefined *)puVar15[3];
        uVar13 = uVar13 + 1;
        lVar14 = *(long *)(param_2 + 0x10) + 1;
        puVar15 = (undefined8 *)(param_2 + 0x38);
        do {
          lVar14 = lVar14 + -1;
          if (lVar14 == 0) goto LAB_1006de300;
          puVar1 = puVar15 + -1;
          _Var6.unknown = (undefined *)*puVar15;
          if ((undefined *)*puVar1 == puVar3 && _Var6.unknown == puVar5) break;
          puVar15 = puVar15 + 4;
          bVar9 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar1,_Var6,(_StringComparisonResult)(__int8)puVar3);
        } while (!bVar9);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(puVar5);
        puVar10 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar10 & 1) == 0) {
          FUN_1006bf87c(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          FUN_1006bf87c(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar7 + uVar2 * 0x20 + 0x20) = uVar11;
        *(undefined8 *)(puVar7 + uVar2 * 0x20 + 0x28) = uVar4;
        *(undefined **)(puVar7 + uVar2 * 0x20 + 0x30) = puVar3;
        *(undefined **)(puVar7 + uVar2 * 0x20 + 0x38) = puVar5;
LAB_1006de300:
      } while (uVar13 != uVar12);
    }
    _swift_bridgeObjectRelease(param_4);
    uVar11 = 1;
  }
  FUN_1006df838(param_2,uVar11);
  return param_1 & 0xffffffff;
}



/* Address: 0x1006de570 | FUN_1006de570 */

void FUN_1006de570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x950) = param_11;
  *(undefined8 *)(unaff_x22 + 0x948) = param_10;
  *(undefined8 *)(unaff_x22 + 0x940) = param_9;
  *(undefined1 *)(unaff_x22 + 0x7d2) = param_8;
  *(undefined8 *)(unaff_x22 + 0x938) = param_7;
  *(undefined1 *)(unaff_x22 + 0x7d1) = param_6;
  *(undefined8 *)(unaff_x22 + 0x930) = param_5;
  *(undefined8 *)(unaff_x22 + 0x928) = param_4;
  *(undefined8 *)(unaff_x22 + 0x920) = param_3;
  *(undefined8 *)(unaff_x22 + 0x918) = param_2;
  *(undefined8 *)(unaff_x22 + 0x910) = param_1;
  _swift_task_switch(FUN_1006de5b8,0,0);
  return;
}



/* Address: 0x1006de5b8 | FUN_1006de5b8 */

void FUN_1006de5b8(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar5 = *(long *)(unaff_x22 + 0x948);
  cVar2 = *(char *)(unaff_x22 + 0x7d2);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x950) + 0x10) + 8))(lVar5);
  bVar3 = *(byte *)(unaff_x22 + 0x7d1);
  lVar18 = lVar5 + 0x20;
  if (cVar2 == '\0') {
    _swift_beginAccess(lVar18,unaff_x22 + 0x8f8,0,0);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x800);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x818);
    lVar18 = *(long *)(unaff_x22 + 0x820);
    FUN_100004640(unaff_x22 + 0x800,uVar17);
    (**(code **)(lVar18 + 0x70))(uVar17,lVar18);
    FUN_100004594(unaff_x22 + 0x800);
    if ((uint)bVar3 < ((uint)uVar17 & 0xff)) goto LAB_1006ded30;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x950);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x948);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x940);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x938);
    puVar19 = *(undefined8 **)(unaff_x22 + 0x918);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x7d1);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x850);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x868);
    lVar18 = *(long *)(unaff_x22 + 0x870);
    FUN_100004640();
    puVar6 = &DAT_100fdbdd0;
    FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 6;
    *(undefined8 *)(puVar6 + 0x10) = 3;
    *(undefined8 *)(puVar6 + 0x20) = 0x65757165722e6268;
    *(undefined8 *)(puVar6 + 0x28) = 0xef687461702e7473;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar11 = puVar19[2];
    uVar22 = puVar19[5];
    uVar21 = puVar19[4];
    *(undefined8 *)(unaff_x22 + 0x2e8) = puVar19[3];
    *(undefined8 *)(unaff_x22 + 0x2e0) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x2f8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x2f0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x2d8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x2d0) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar21 = puVar19[9];
    uVar11 = puVar19[8];
    uVar24 = puVar19[10];
    uVar23 = puVar19[0xd];
    uVar22 = puVar19[0xc];
    *(undefined8 *)(unaff_x22 + 0x328) = puVar19[0xb];
    *(undefined8 *)(unaff_x22 + 800) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x338) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x330) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x308) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x300) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x318) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x310) = uVar11;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar21 = puVar19[0x11];
    uVar11 = puVar19[0x10];
    uVar22 = puVar19[0x12];
    uVar24 = puVar19[0x15];
    uVar23 = puVar19[0x14];
    *(undefined8 *)(unaff_x22 + 0x368) = puVar19[0x13];
    *(undefined8 *)(unaff_x22 + 0x360) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x378) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x370) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x348) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x358) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x350) = uVar11;
    *(undefined **)(puVar6 + 0x48) = &DAT_100f27618;
    puVar7 = puVar6;
    FUN_1006df84c();
    *(undefined **)(puVar6 + 0x50) = puVar7;
    puVar7 = &DAT_100ef9580;
    _swift_allocObject(&DAT_100ef9580,0xc0,7);
    *(undefined **)(puVar6 + 0x30) = puVar7;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar11 = puVar19[2];
    uVar22 = puVar19[5];
    uVar21 = puVar19[4];
    *(undefined8 *)(puVar7 + 0x28) = puVar19[3];
    *(undefined8 *)(puVar7 + 0x20) = uVar11;
    *(undefined8 *)(puVar7 + 0x38) = uVar22;
    *(undefined8 *)(puVar7 + 0x30) = uVar21;
    *(undefined8 *)(puVar7 + 0x18) = uVar20;
    *(undefined8 *)(puVar7 + 0x10) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar21 = puVar19[9];
    uVar11 = puVar19[8];
    uVar22 = puVar19[10];
    uVar24 = puVar19[0xd];
    uVar23 = puVar19[0xc];
    *(undefined8 *)(puVar7 + 0x68) = puVar19[0xb];
    *(undefined8 *)(puVar7 + 0x60) = uVar22;
    *(undefined8 *)(puVar7 + 0x78) = uVar24;
    *(undefined8 *)(puVar7 + 0x70) = uVar23;
    *(undefined8 *)(puVar7 + 0x48) = uVar20;
    *(undefined8 *)(puVar7 + 0x40) = uVar17;
    *(undefined8 *)(puVar7 + 0x58) = uVar21;
    *(undefined8 *)(puVar7 + 0x50) = uVar11;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar21 = puVar19[0x11];
    uVar11 = puVar19[0x10];
    uVar22 = puVar19[0x12];
    uVar24 = puVar19[0x15];
    uVar23 = puVar19[0x14];
    *(undefined8 *)(puVar7 + 0xa8) = puVar19[0x13];
    *(undefined8 *)(puVar7 + 0xa0) = uVar22;
    *(undefined8 *)(puVar7 + 0xb8) = uVar24;
    *(undefined8 *)(puVar7 + 0xb0) = uVar23;
    *(undefined8 *)(puVar7 + 0x88) = uVar20;
    *(undefined8 *)(puVar7 + 0x80) = uVar17;
    *(undefined8 *)(puVar7 + 0x98) = uVar21;
    *(undefined8 *)(puVar7 + 0x90) = uVar11;
    puVar6[0x58] = 1;
    *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000011;
    *(undefined8 *)(puVar6 + 0x68) = 0x8000000100db0cf0;
    uVar17 = puVar19[0x16];
    uVar20 = puVar19[0x17];
    uVar11 = uVar20;
    FUN_100867ea8();
    *(undefined8 *)(puVar6 + 0x70) = uVar17;
    *(undefined8 *)(puVar6 + 0x78) = uVar11;
    puVar6[0x98] = 0;
    *(undefined8 *)(puVar6 + 0xa0) = 0xd000000000000012;
    *(undefined8 *)(puVar6 + 0xa8) = 0x8000000100db0d10;
    FUN_1006df8d8(unaff_x22 + 0x2d0,unaff_x22 + 0x220);
    FUN_1006df090(uVar20,uVar16,uVar4,uVar16,0,uVar13,uVar12,uVar15);
    puVar7 = &DAT_100fdc4a0;
    FUN_1000f7830(&DAT_100fdc4a0,&DAT_100c71e00);
    *(undefined **)(puVar6 + 200) = puVar7;
    FUN_1006df914();
    *(undefined **)(puVar6 + 0xd0) = puVar7;
    *(undefined8 *)(puVar6 + 0xb0) = uVar20;
    puVar6[0xd8] = 1;
    puVar8 = puVar6;
    FUN_1006c2220();
    _swift_setDeallocating(puVar6);
    puVar7 = &DAT_100fdbdd8;
    FUN_1000f7830(&DAT_100fdbdd8,&DAT_100c6f548);
    _swift_arrayDestroy(puVar6 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x730) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x738) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x740) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x748) = 0;
    *(undefined **)(unaff_x22 + 0x750) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x760) = 0;
    *(undefined8 *)(unaff_x22 + 0x758) = 0;
    *(undefined8 *)(unaff_x22 + 0x768) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x770) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x778) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x780) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x788) = 0x50;
    *(undefined1 *)(unaff_x22 + 0x5b0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x5b8) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x5c0) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    *(undefined **)(unaff_x22 + 0x5d0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x5f0) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x600) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x608) = 0x50;
    FUN_1005bf638(unaff_x22 + 0x730,unaff_x22 + 0x610);
    FUN_1004eaa3c(unaff_x22 + 0x5b0);
    (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x730,uVar10);
    _swift_release(lVar5);
    FUN_1004eaa3c(unaff_x22 + 0x730);
    lVar18 = unaff_x22 + 0x850;
  }
  else if (cVar2 == '\x01') {
    _swift_beginAccess(lVar18,unaff_x22 + 0x8c8,0,0);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x828);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x840);
    lVar18 = *(long *)(unaff_x22 + 0x848);
    FUN_100004640(unaff_x22 + 0x828,uVar17);
    (**(code **)(lVar18 + 0x70))(uVar17,lVar18);
    FUN_100004594(unaff_x22 + 0x828);
    if ((uint)bVar3 < ((uint)uVar17 & 0xff)) {
LAB_1006ded30:
      _swift_release(lVar5);
      goto LAB_1006defbc;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x950);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x948);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x940);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x938);
    puVar19 = *(undefined8 **)(unaff_x22 + 0x918);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x7d1);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x7d8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x7f0);
    lVar18 = *(long *)(unaff_x22 + 0x7f8);
    FUN_100004640();
    puVar6 = &DAT_100fdbdd0;
    FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 6;
    *(undefined8 *)(puVar6 + 0x10) = 3;
    *(undefined8 *)(puVar6 + 0x20) = 0x65757165722e6268;
    *(undefined8 *)(puVar6 + 0x28) = 0xef687461702e7473;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar11 = puVar19[2];
    uVar22 = puVar19[5];
    uVar21 = puVar19[4];
    *(undefined8 *)(unaff_x22 + 0x28) = puVar19[3];
    *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar21 = puVar19[9];
    uVar11 = puVar19[8];
    uVar24 = puVar19[10];
    uVar23 = puVar19[0xd];
    uVar22 = puVar19[0xc];
    *(undefined8 *)(unaff_x22 + 0x68) = puVar19[0xb];
    *(undefined8 *)(unaff_x22 + 0x60) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar21 = puVar19[0x11];
    uVar11 = puVar19[0x10];
    uVar22 = puVar19[0x12];
    uVar24 = puVar19[0x15];
    uVar23 = puVar19[0x14];
    *(undefined8 *)(unaff_x22 + 0xa8) = puVar19[0x13];
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar24;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar11;
    *(undefined **)(puVar6 + 0x48) = &DAT_100f27618;
    puVar7 = puVar6;
    FUN_1006df84c();
    *(undefined **)(puVar6 + 0x50) = puVar7;
    puVar7 = &DAT_100ef9580;
    _swift_allocObject(&DAT_100ef9580,0xc0,7);
    *(undefined **)(puVar6 + 0x30) = puVar7;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar11 = puVar19[2];
    uVar22 = puVar19[5];
    uVar21 = puVar19[4];
    *(undefined8 *)(puVar7 + 0x28) = puVar19[3];
    *(undefined8 *)(puVar7 + 0x20) = uVar11;
    *(undefined8 *)(puVar7 + 0x38) = uVar22;
    *(undefined8 *)(puVar7 + 0x30) = uVar21;
    *(undefined8 *)(puVar7 + 0x18) = uVar20;
    *(undefined8 *)(puVar7 + 0x10) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar21 = puVar19[9];
    uVar11 = puVar19[8];
    uVar22 = puVar19[10];
    uVar24 = puVar19[0xd];
    uVar23 = puVar19[0xc];
    *(undefined8 *)(puVar7 + 0x68) = puVar19[0xb];
    *(undefined8 *)(puVar7 + 0x60) = uVar22;
    *(undefined8 *)(puVar7 + 0x78) = uVar24;
    *(undefined8 *)(puVar7 + 0x70) = uVar23;
    *(undefined8 *)(puVar7 + 0x48) = uVar20;
    *(undefined8 *)(puVar7 + 0x40) = uVar17;
    *(undefined8 *)(puVar7 + 0x58) = uVar21;
    *(undefined8 *)(puVar7 + 0x50) = uVar11;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar21 = puVar19[0x11];
    uVar11 = puVar19[0x10];
    uVar22 = puVar19[0x12];
    uVar24 = puVar19[0x15];
    uVar23 = puVar19[0x14];
    *(undefined8 *)(puVar7 + 0xa8) = puVar19[0x13];
    *(undefined8 *)(puVar7 + 0xa0) = uVar22;
    *(undefined8 *)(puVar7 + 0xb8) = uVar24;
    *(undefined8 *)(puVar7 + 0xb0) = uVar23;
    *(undefined8 *)(puVar7 + 0x88) = uVar20;
    *(undefined8 *)(puVar7 + 0x80) = uVar17;
    *(undefined8 *)(puVar7 + 0x98) = uVar21;
    *(undefined8 *)(puVar7 + 0x90) = uVar11;
    puVar6[0x58] = 1;
    *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000011;
    *(undefined8 *)(puVar6 + 0x68) = 0x8000000100db0cf0;
    uVar17 = puVar19[0x16];
    uVar20 = puVar19[0x17];
    uVar11 = uVar20;
    FUN_100867ea8();
    *(undefined8 *)(puVar6 + 0x70) = uVar17;
    *(undefined8 *)(puVar6 + 0x78) = uVar11;
    puVar6[0x98] = 0;
    *(undefined8 *)(puVar6 + 0xa0) = 0xd000000000000012;
    *(undefined8 *)(puVar6 + 0xa8) = 0x8000000100db0d10;
    FUN_1006df8d8(unaff_x22 + 0x10,unaff_x22 + 0x380);
    FUN_1006df2c4(uVar20,uVar16,uVar4,uVar16,1,uVar13,uVar12,uVar15);
    puVar7 = &DAT_100fdc4a0;
    FUN_1000f7830(&DAT_100fdc4a0,&DAT_100c71e00);
    *(undefined **)(puVar6 + 200) = puVar7;
    FUN_1006df914();
    *(undefined **)(puVar6 + 0xd0) = puVar7;
    *(undefined8 *)(puVar6 + 0xb0) = uVar20;
    puVar6[0xd8] = 1;
    puVar8 = puVar6;
    FUN_1006c2220();
    _swift_setDeallocating(puVar6);
    puVar7 = &DAT_100fdbdd8;
    FUN_1000f7830(&DAT_100fdbdd8,&DAT_100c6f548);
    _swift_arrayDestroy(puVar6 + 0x20,3,puVar7);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x550) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x558) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x560) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x568) = 0;
    *(undefined **)(unaff_x22 + 0x570) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x578) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x598) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x5a0) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x5a8) = 0x5a;
    *(undefined1 *)(unaff_x22 + 0x490) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x498) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x4a0) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
    *(undefined **)(unaff_x22 + 0x4b0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x4d8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x4e0) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x4e8) = 0x5a;
    FUN_1005bf638(unaff_x22 + 0x550,unaff_x22 + 0x4f0);
    FUN_1004eaa3c(unaff_x22 + 0x490);
    (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x550,uVar10);
    _swift_release(lVar5);
    FUN_1004eaa3c(unaff_x22 + 0x550);
    lVar18 = unaff_x22 + 0x7d8;
  }
  else {
    _swift_beginAccess(lVar18,unaff_x22 + 0x8e0,0,0);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x878);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x890);
    lVar18 = *(long *)(unaff_x22 + 0x898);
    FUN_100004640(unaff_x22 + 0x878,uVar17);
    (**(code **)(lVar18 + 0x70))(uVar17,lVar18);
    FUN_100004594(unaff_x22 + 0x878);
    if ((uint)bVar3 < ((uint)uVar17 & 0xff)) goto LAB_1006ded30;
    uVar4 = *(undefined1 *)(unaff_x22 + 0x7d1);
    puVar19 = *(undefined8 **)(unaff_x22 + 0x918);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x8a0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x8b8);
    lVar18 = *(long *)(unaff_x22 + 0x8c0);
    FUN_100004640();
    puVar6 = &DAT_100fdbdd0;
    FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 4;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined8 *)(puVar6 + 0x20) = 0x65757165722e6268;
    *(undefined8 *)(puVar6 + 0x28) = 0xef687461702e7473;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar10 = puVar19[2];
    uVar13 = puVar19[5];
    uVar12 = puVar19[4];
    *(undefined8 *)(unaff_x22 + 0x188) = puVar19[3];
    *(undefined8 *)(unaff_x22 + 0x180) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar13;
    *(undefined8 *)(unaff_x22 + 400) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x178) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x170) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar12 = puVar19[9];
    uVar10 = puVar19[8];
    uVar16 = puVar19[10];
    uVar15 = puVar19[0xd];
    uVar13 = puVar19[0xc];
    *(undefined8 *)(unaff_x22 + 0x1c8) = puVar19[0xb];
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar10;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar12 = puVar19[0x11];
    uVar10 = puVar19[0x10];
    uVar13 = puVar19[0x12];
    uVar16 = puVar19[0x15];
    uVar15 = puVar19[0x14];
    *(undefined8 *)(unaff_x22 + 0x208) = puVar19[0x13];
    *(undefined8 *)(unaff_x22 + 0x200) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x218) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x210) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar10;
    *(undefined **)(puVar6 + 0x48) = &DAT_100f27618;
    puVar7 = puVar6;
    FUN_1006df84c();
    *(undefined **)(puVar6 + 0x50) = puVar7;
    puVar7 = &DAT_100ef9580;
    _swift_allocObject(&DAT_100ef9580,0xc0,7);
    *(undefined **)(puVar6 + 0x30) = puVar7;
    uVar20 = puVar19[1];
    uVar17 = *puVar19;
    uVar10 = puVar19[2];
    uVar13 = puVar19[5];
    uVar12 = puVar19[4];
    *(undefined8 *)(puVar7 + 0x28) = puVar19[3];
    *(undefined8 *)(puVar7 + 0x20) = uVar10;
    *(undefined8 *)(puVar7 + 0x38) = uVar13;
    *(undefined8 *)(puVar7 + 0x30) = uVar12;
    *(undefined8 *)(puVar7 + 0x18) = uVar20;
    *(undefined8 *)(puVar7 + 0x10) = uVar17;
    uVar20 = puVar19[7];
    uVar17 = puVar19[6];
    uVar12 = puVar19[9];
    uVar10 = puVar19[8];
    uVar13 = puVar19[10];
    uVar16 = puVar19[0xd];
    uVar15 = puVar19[0xc];
    *(undefined8 *)(puVar7 + 0x68) = puVar19[0xb];
    *(undefined8 *)(puVar7 + 0x60) = uVar13;
    *(undefined8 *)(puVar7 + 0x78) = uVar16;
    *(undefined8 *)(puVar7 + 0x70) = uVar15;
    *(undefined8 *)(puVar7 + 0x48) = uVar20;
    *(undefined8 *)(puVar7 + 0x40) = uVar17;
    *(undefined8 *)(puVar7 + 0x58) = uVar12;
    *(undefined8 *)(puVar7 + 0x50) = uVar10;
    uVar20 = puVar19[0xf];
    uVar17 = puVar19[0xe];
    uVar12 = puVar19[0x11];
    uVar10 = puVar19[0x10];
    uVar13 = puVar19[0x12];
    uVar16 = puVar19[0x15];
    uVar15 = puVar19[0x14];
    *(undefined8 *)(puVar7 + 0xa8) = puVar19[0x13];
    *(undefined8 *)(puVar7 + 0xa0) = uVar13;
    *(undefined8 *)(puVar7 + 0xb8) = uVar16;
    *(undefined8 *)(puVar7 + 0xb0) = uVar15;
    *(undefined8 *)(puVar7 + 0x88) = uVar20;
    *(undefined8 *)(puVar7 + 0x80) = uVar17;
    *(undefined8 *)(puVar7 + 0x98) = uVar12;
    *(undefined8 *)(puVar7 + 0x90) = uVar10;
    puVar6[0x58] = 1;
    *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000011;
    *(undefined8 *)(puVar6 + 0x68) = 0x8000000100db0cf0;
    uVar17 = puVar19[0x16];
    uVar20 = puVar19[0x17];
    FUN_100867ea8();
    *(undefined8 *)(puVar6 + 0x70) = uVar17;
    *(undefined8 *)(puVar6 + 0x78) = uVar20;
    puVar6[0x98] = 0;
    FUN_1006df8d8(unaff_x22 + 0x170,unaff_x22 + 0xc0);
    puVar8 = puVar6;
    FUN_1006c2220();
    _swift_setDeallocating(puVar6);
    puVar7 = &DAT_100fdbdd8;
    FUN_1000f7830(&DAT_100fdbdd8,&DAT_100c6f548);
    _swift_arrayDestroy(puVar6 + 0x20,2,puVar7);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x6d0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x6d8) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x6e0) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x6e8) = 0;
    *(undefined **)(unaff_x22 + 0x6f0) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x700) = 0;
    *(undefined8 *)(unaff_x22 + 0x6f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x708) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x710) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x718) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x720) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x728) = 0x47;
    *(undefined1 *)(unaff_x22 + 0x670) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x678) = 0x74736575716552;
    *(undefined1 **)(unaff_x22 + 0x680) = &DAT_e700000000000000;
    *(undefined8 *)(unaff_x22 + 0x688) = 0;
    *(undefined **)(unaff_x22 + 0x690) = puVar8;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x6b0) = 0x8000000100db0ca0;
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0x8000000100db0cd0;
    *(undefined8 *)(unaff_x22 + 0x6c8) = 0x47;
    FUN_1005bf638(unaff_x22 + 0x6d0,unaff_x22 + 0x430);
    FUN_1004eaa3c(unaff_x22 + 0x670);
    (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x6d0,uVar11,lVar18);
    _swift_release(lVar5);
    FUN_1004eaa3c(unaff_x22 + 0x6d0);
    lVar18 = unaff_x22 + 0x8a0;
  }
  FUN_100004594(lVar18);
LAB_1006defbc:
  piVar14 = *(int **)(unaff_x22 + 0x928);
  iVar1 = *piVar14;
  plVar9 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x958) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1006df020;
                    /* WARNING: Could not recover jumptable at 0x0001006df01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (plVar9,unaff_x22 + 0x790,*(undefined8 *)(unaff_x22 + 0x918),
             *(undefined8 *)(unaff_x22 + 0x920));
  return;
}



/* Address: 0x1006df020 | FUN_1006df020 */

void FUN_1006df020(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x958));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x910);
    uVar4 = *(undefined8 *)(lVar2 + 0x790);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x798);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x7a8);
    uVar4 = *(undefined8 *)(lVar2 + 0x7a0);
    uVar7 = *(undefined8 *)(lVar2 + 0x7b8);
    uVar6 = *(undefined8 *)(lVar2 + 0x7b0);
    uVar9 = *(undefined8 *)(lVar2 + 0x7c8);
    uVar8 = *(undefined8 *)(lVar2 + 0x7c0);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 2000);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006df08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006df090 | FUN_1006df090 */

/* WARNING: Removing unreachable block (ram,0x0001006df2bc) */
/* WARNING: Removing unreachable block (ram,0x0001006df298) */

void FUN_1006df090(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  _DictionaryStorage *this;
  long lVar9;
  undefined *puVar10;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar9 = param_1;
  FUN_10085d8f8();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    lVar9 = 0;
    do {
      FUN_10085d980(&local_a0,lVar9,param_1);
      lVar6 = param_1;
      FUN_10085d8f8();
      if (lVar6 <= lVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006df298);
        (*pcVar5)();
      }
      uStack_d8 = uStack_98;
      local_e0 = local_a0;
      local_c8 = uStack_88;
      uStack_d0 = uStack_90;
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      FUN_1006df680(&local_100,&local_e0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = local_c8;
      uVar2 = uStack_d8;
      _swift_bridgeObjectRelease(local_b0);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = uStack_e8;
      uVar3 = local_f0;
      lVar6 = local_f8;
      uVar2 = local_100;
      if (local_f8 != 0) {
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_1006a2cfc(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puVar8 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_1006a2cfc(puVar8,uVar1 + 1,1,puVar10);
        }
        *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar8 + uVar1 * 0x20 + 0x20) = uVar2;
        *(long *)(puVar8 + uVar1 * 0x20 + 0x28) = lVar6;
        *(undefined8 *)(puVar8 + uVar1 * 0x20 + 0x30) = uVar3;
        *(undefined8 *)(puVar8 + uVar1 * 0x20 + 0x38) = uVar4;
      }
      lVar9 = lVar9 + 1;
      lVar6 = param_1;
      FUN_10085d8f8();
    } while (lVar9 != lVar6);
  }
  puVar7 = puVar8;
  FUN_1006df548();
  _swift_bridgeObjectRelease(puVar8);
  puVar10 = *(undefined **)(puVar7 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar10 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc4b0;
    FUN_1000f7830(&DAT_100fdc4b0,&DAT_100c70730);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar10);
    puVar8 = puVar10;
  }
  local_e0 = puVar8;
  FUN_1006dfc38(puVar7,1,&local_e0);
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1006df2c4 | FUN_1006df2c4 */

/* WARNING: Removing unreachable block (ram,0x0001006df48c) */

void FUN_1006df2c4(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  _DictionaryStorage *this;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(param_2 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    puVar10 = (undefined8 *)(param_2 + 0x38);
    do {
      local_70 = puVar10[-1];
      uVar2 = *puVar10;
      local_80 = (undefined *)puVar10[-3];
      uVar3 = puVar10[-2];
      uStack_78 = uVar3;
      uStack_68 = uVar2;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1006df494(&local_a0,&local_80,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar3);
      uVar5 = uStack_88;
      uVar3 = local_90;
      lVar4 = local_98;
      uVar2 = local_a0;
      if (local_98 != 0) {
        puVar6 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_1006a2cfc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puVar7 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_1006a2cfc(puVar7,uVar1 + 1,1,puVar9);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x20) = uVar2;
        *(long *)(puVar7 + uVar1 * 0x20 + 0x28) = lVar4;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x30) = uVar3;
        *(undefined8 *)(puVar7 + uVar1 * 0x20 + 0x38) = uVar5;
      }
      puVar10 = puVar10 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  puVar6 = puVar7;
  FUN_1006df548();
  _swift_bridgeObjectRelease(puVar7);
  puVar9 = *(undefined **)(puVar6 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar9 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc4b0;
    FUN_1000f7830(&DAT_100fdc4b0,&DAT_100c70730);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar9);
    puVar7 = puVar9;
  }
  local_80 = puVar7;
  FUN_1006dfc38(puVar6,1,&local_80);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1006df494 | FUN_1006df494 */

void FUN_1006df494(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 in_x5;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  FUN_10085c5ec(uVar3,uVar5,uVar1,uVar2,param_3);
  if (uVar5 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar4 = uVar1;
    FUN_1006fb1d0(uVar1,uVar2,in_x5);
    if ((uVar4 & 1) == 0) {
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar5;
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[3] = 0xe300000000000000;
      param_1[2] = 0x2a2a2a;
    }
    _swift_bridgeObjectRetain(uVar2);
  }
  return;
}



/* Address: 0x1006df548 | FUN_1006df548 */

undefined * FUN_1006df548(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  lVar9 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    FUN_1006bf898(0,lVar9,0);
    puVar10 = (undefined8 *)(param_1 + 0x38);
    do {
      puVar6 = local_68;
      local_a8 = puVar10[-3];
      uStack_a0 = puVar10[-2];
      local_98 = puVar10[-1];
      uVar2 = *puVar10;
      uStack_90 = uVar2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      puVar7 = &DAT_100fdbca8;
      FUN_1000f7830(&DAT_100fdbca8,&DAT_100c6f4d0);
      puVar8 = &DAT_100fdc560;
      FUN_1000f7830(&DAT_100fdc560,&DAT_100c70c50);
      _swift_dynamicCast(&local_88,&local_a8,puVar7,puVar8,7);
      uVar5 = uStack_70;
      uVar4 = local_78;
      uVar3 = uStack_80;
      uVar2 = local_88;
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_1006bf898(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar10 = puVar10 + 4;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x20) = uVar2;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x30) = uVar4;
      *(undefined8 *)(local_68 + uVar1 * 0x20 + 0x38) = uVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return local_68;
}



/* Address: 0x1006df680 | FUN_1006df680 */

void FUN_1006df680(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined8 in_x5;
  long *plVar5;
  long lVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  
  _Var8.unknown = *(undefined **)(param_2 + 0x18);
  _Var7.unknown = *(undefined **)(param_2 + 0x10);
  plVar5 = (long *)(param_3 + 0x38);
  lVar6 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      _Var3.unknown = _Var7.unknown;
      _Var4.unknown = _Var8.unknown;
      FUN_1006fb1d0(_Var7.unknown,_Var8.unknown,in_x5);
      if (((ulong)_Var3.unknown & 1) != 0) {
        *param_1 = _Var7.unknown;
        param_1[1] = _Var8.unknown;
        param_1[3] = 0xe300000000000000;
        param_1[2] = 0x2a2a2a;
        _swift_bridgeObjectRetain(_Var8.unknown);
        return;
      }
      _Var3.unknown = _Var8.unknown;
      _swift_bridgeObjectRetain();
      FUN_100857828();
      *param_1 = _Var7.unknown;
      param_1[1] = _Var8.unknown;
      param_1[2] = _Var3.unknown;
      param_1[3] = _Var4.unknown;
      return;
    }
    plVar1 = plVar5 + -1;
    if (_Var7.unknown == (undefined *)*plVar1 && _Var8.unknown == (undefined *)*plVar5) break;
    plVar5 = plVar5 + 4;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      (_Var7,_Var8,(_StringComparisonResult)(__int8)(undefined *)*plVar1);
  } while (!bVar2);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1006df774 | FUN_1006df774 */

void FUN_1006df774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar5 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar6 = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x960;
  uVar1 = unaff_x20[0x10];
  uVar2 = *unaff_x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006d6040;
  FUN_1006de570(plVar3,unaff_x22 + 0x40,param_2,param_3,&DAT_100c71f20,unaff_x22 + 0x10,uVar2,uVar4,
                uVar1,uVar7,uVar5,uVar6);
  return;
}



/* Address: 0x1006df838 | FUN_1006df838 */

void FUN_1006df838(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1006df84c | FUN_1006df84c */

void FUN_1006df84c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdd470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8d978;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8d978,&DAT_100f27618);
  DAT_100fdd470 = pTVar1;
  return;
}



/* Address: 0x1006df88c | FUN_1006df88c */

void FUN_1006df88c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006df8d8 | FUN_1006df8d8 */

undefined8 FUN_1006df8d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1009ff62c(param_2,param_1);
  return param_2;
}



/* Address: 0x1006df914 | FUN_1006df914 */

void FUN_1006df914(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fdd478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdc4a0;
  FUN_1000f8b08(&DAT_100fdc4a0,&DAT_100c71e00);
  puVar2 = 
  PTR_Swift__Swift__Dictionary<undefined,undefined>_>Swift__CustomStringConvertible_100eabe80;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Dictionary<undefined,undefined>_>Swift__CustomStringConvertible_100eabe80
             ,puVar1);
  DAT_100fdd478 = puVar2;
  return;
}



/* Address: 0x1006df964 | FUN_1006df964 */

void FUN_1006df964(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71e68;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006df990 | FUN_1006df990 */

void FUN_1006df990(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x1006df9a4 | FUN_1006df9a4 */

void FUN_1006df9a4(long param_1)

{
  FUN_1006df838(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1006df9d0 | FUN_1006df9d0 */

undefined1 * FUN_1006df9d0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_2[0x10];
  FUN_1006df990(uVar2,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x10] = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006dfa2c | FUN_1006dfa2c */

undefined1 * FUN_1006dfa2c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_2[0x10];
  FUN_1006df990(uVar4,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar2 = param_1[0x10];
  param_1[0x10] = uVar1;
  FUN_1006df838(uVar3,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1006dfaa0 | FUN_1006dfaa0 */

undefined1 * FUN_1006dfaa0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[0x10];
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = param_1[0x10];
  param_1[0x10] = uVar1;
  FUN_1006df838(uVar3,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1006dfaf8 | FUN_1006dfaf8 */

void FUN_1006dfaf8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006dfb04 | FUN_1006dfb04 */

undefined8 * FUN_1006dfb04(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1006df990(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x1006dfb48 | FUN_1006dfb48 */

void FUN_1006dfb48(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006dfb54 | FUN_1006dfb54 */

void FUN_1006dfb54(undefined8 *param_1)

{
  FUN_1006df838(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1006dfb64 | thunk_FUN_1006dfb68 */

undefined8 * thunk_FUN_1006dfb68(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1006df990(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1006df838(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1006dfb68 | FUN_1006dfb68 */

undefined8 * FUN_1006dfb68(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1006df990(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1006df838(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1006dfbb8 | FUN_1006dfbb8 */

undefined8 * FUN_1006dfbb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_1006df838(uVar3,uVar2);
  return param_1;
}



/* Address: 0x1006dfbf4 | thunk_FUN_1002d72b8 */

void thunk_FUN_1002d72b8(void)

{
  FUN_1002d72b8();
  return;
}



/* Address: 0x1006dfbf8 | thunk_FUN_1002d7300 */

void thunk_FUN_1002d7300(void)

{
  FUN_1002d7300();
  return;
}


