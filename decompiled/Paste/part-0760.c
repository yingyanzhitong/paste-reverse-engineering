/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10085cdb0 | FUN_10085cdb0 */

void FUN_10085cdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100863e30(param_3,param_4,param_5);
  return;
}



/* Address: 0x10085cdc0 | FUN_10085cdc0 */

void FUN_10085cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1008636a8(param_1,param_4,param_5);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10085ce0c | FUN_10085ce0c */

undefined1  [16]
FUN_10085ce0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x4e8c);
  }
  *param_1 = puVar1;
  puVar1[3] = param_5;
  puVar1[4] = unaff_x20;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  FUN_100863e30(param_4,param_5,*unaff_x20);
  *puVar1 = param_4;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_10085ce94;
  return auVar2;
}



/* Address: 0x10085ce94 | FUN_10085ce94 */

void FUN_10085ce94(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = *param_1;
  uVar1 = param_1[3];
  uVar3 = param_1[2];
  puVar5 = param_1 + 1;
  uVar4 = *puVar5;
  if ((param_2 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar1);
    FUN_1008636a8(uVar2,uVar3,uVar1);
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
    FUN_1008636a8(uVar2,uVar3,uVar1);
    _swift_bridgeObjectRelease(uVar4);
    puVar5 = param_1;
  }
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(*puVar5);
  _free(param_1);
  return;
}



/* Address: 0x10085cf54 | FUN_10085cf54 */

void FUN_10085cf54(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = (ulong)*(ushort *)(unaff_x20 + 1);
  if (uVar3 == 0xffff) {
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar9 = 0;
    uVar5 = 0;
  }
  else {
    if (*(ulong *)(*unaff_x20 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085d018);
      (*pcVar2)();
    }
    lVar1 = *unaff_x20 + uVar3 * 0x40;
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar8 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = (ulong)*(byte *)(lVar1 + 0x40);
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined2 *)(unaff_x20 + 1) = *(undefined2 *)(lVar1 + 0x58);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
  }
  *param_1 = uVar7;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar5;
  return;
}



/* Address: 0x10085d018 | FUN_10085d018 */

void FUN_10085d018(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined2 *)(unaff_x20 + 1);
  *param_1 = *unaff_x20;
  *(undefined2 *)(param_1 + 1) = uVar1;
  return;
}



/* Address: 0x10085d02c | FUN_10085d02c */

undefined8 FUN_10085d02c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_100860900(uVar2,*(undefined2 *)(unaff_x20 + 1));
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Address: 0x10085d064 | FUN_10085d064 */

void FUN_10085d064(void)

{
  FUN_10085d070();
  return;
}



/* Address: 0x10085d070 | FUN_10085d070 */

long FUN_10085d070(long *param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  
  param_5 = param_5 & 0xffff;
  uVar10 = param_5;
  if (param_2 == (undefined8 *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10085d1a0);
        (*pcVar8)();
      }
      if (param_5 == 0xffff) {
        lVar9 = 0;
        uVar10 = 0xffff;
      }
      else {
        lVar9 = 0;
        uVar10 = 0xffff;
        do {
          if (*(ulong *)(param_4 + 0x10) <= param_5) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10085d19c);
            (*pcVar8)();
          }
          puVar1 = (undefined8 *)(param_4 + 0x20 + param_5 * 0x40);
          uVar4 = puVar1[1];
          uVar2 = puVar1[2];
          uVar5 = puVar1[3];
          uVar7 = *(undefined1 *)(puVar1 + 4);
          uVar3 = puVar1[5];
          uVar6 = puVar1[6];
          param_5 = (ulong)*(ushort *)(puVar1 + 7);
          *param_2 = *puVar1;
          param_2[1] = uVar4;
          param_2[2] = uVar2;
          param_2[3] = uVar5;
          *(undefined1 *)(param_2 + 4) = uVar7;
          param_2[5] = uVar3;
          param_2[6] = uVar6;
          if (param_3 + -1 == lVar9) {
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar5);
            _swift_bridgeObjectRetain(uVar6);
            lVar9 = param_3;
            uVar10 = param_5;
            break;
          }
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar6);
          lVar9 = lVar9 + 1;
          param_2 = param_2 + 7;
        } while (param_5 != 0xffff);
      }
    }
  }
  *param_1 = param_4;
  *(short *)(param_1 + 1) = (short)uVar10;
  return lVar9;
}



/* Address: 0x10085d1a0 | FUN_10085d1a0 */

void FUN_10085d1a0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined8 uStack_13e;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined6 local_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined6 local_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  uVar9 = *(ulong *)(param_1 + 0x10);
  bVar4 = uVar9 == 0;
  if (bVar4) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20);
  }
  uVar10 = (ulong)!bVar4;
  uVar12 = *unaff_x20;
  uVar8 = *(ulong *)(uVar12 + 0x10);
  if (uVar8 != 0) {
    uVar14 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_1008603a4();
    }
    uVar13 = 0;
    uVar14 = 0;
    do {
      if (uVar14 == uVar8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d458);
        (*pcVar5)();
      }
      if (!bVar4) {
        if (SCARRY8(uVar14,uVar13)) {
LAB_10085d448:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d44c);
          (*pcVar5)();
        }
        uVar6 = (uVar9 + 1 + uVar13) - uVar10;
        uVar7 = uVar10;
        if (uVar10 <= uVar9) {
          uVar7 = uVar9;
        }
        while (uVar14 + uVar13 == lVar11) {
          lVar1 = uVar13 + 1;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d450);
            (*pcVar5)();
          }
          if (uVar9 == uVar10) {
            lVar11 = 0;
            bVar4 = true;
            uVar10 = uVar9;
            uVar13 = uVar6;
            goto joined_r0x00010085d308;
          }
          if (uVar7 == uVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d454);
            (*pcVar5)();
          }
          lVar11 = *(long *)(param_1 + 0x20 + uVar10 * 8);
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 + 1;
          if (SCARRY8(uVar14,lVar1)) goto LAB_10085d448;
        }
        bVar4 = false;
      }
joined_r0x00010085d308:
      if (SCARRY8(uVar14,uVar13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d408);
        (*pcVar5)();
      }
      uVar6 = uVar14 + uVar13;
      uVar7 = *(ulong *)(uVar12 + 0x10);
      if ((long)uVar7 <= (long)uVar6) break;
      if (uVar14 != uVar6) {
        if (uVar7 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d45c);
          (*pcVar5)();
        }
        puVar2 = (undefined8 *)(uVar12 + 0x20 + uVar14 * 0x40);
        uStack_168 = puVar2[1];
        local_170 = *puVar2;
        uStack_158 = puVar2[3];
        local_160 = puVar2[2];
        uStack_150 = puVar2[4];
        uStack_13e = *(undefined8 *)((long)puVar2 + 0x32);
        uStack_140 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x2a) >> 0x30);
        uStack_148 = (undefined2)puVar2[5];
        local_146 = (undefined6)((ulong)puVar2[5] >> 0x10);
        if (uVar7 <= uVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d460);
          (*pcVar5)();
        }
        puVar3 = (undefined8 *)(uVar12 + 0x20 + uVar6 * 0x40);
        uStack_128 = puVar3[1];
        local_130 = *puVar3;
        uStack_118 = puVar3[3];
        local_120 = puVar3[2];
        uStack_110 = puVar3[4];
        uStack_fe = *(undefined8 *)((long)puVar3 + 0x32);
        uStack_100 = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x2a) >> 0x30);
        uStack_108 = (undefined2)puVar3[5];
        local_106 = (undefined6)((ulong)puVar3[5] >> 0x10);
        FUN_1000f8cac(&local_170,&local_b0,&DAT_100fe8320,&DAT_100c7dd08);
        FUN_1000f8cac(&local_130,&local_b0,&DAT_100fe8320,&DAT_100c7dd08);
        uStack_e8 = puVar2[1];
        local_f0 = *puVar2;
        uStack_d8 = puVar2[3];
        local_e0 = puVar2[2];
        uStack_d0 = puVar2[4];
        uStack_be = *(undefined8 *)((long)puVar2 + 0x32);
        uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x2a) >> 0x30);
        uStack_c8 = (undefined2)puVar2[5];
        local_c6 = (undefined6)((ulong)puVar2[5] >> 0x10);
        *(undefined8 *)((long)puVar2 + 0x32) = uStack_fe;
        *(ulong *)((long)puVar2 + 0x2a) = CONCAT26(uStack_100,local_106);
        puVar2[3] = uStack_118;
        puVar2[2] = local_120;
        puVar2[5] = CONCAT62(local_106,uStack_108);
        puVar2[4] = uStack_110;
        puVar2[1] = uStack_128;
        *puVar2 = local_130;
        FUN_1000fb4c4(&local_f0,&DAT_100fe8320,&DAT_100c7dd08);
        if (*(ulong *)(uVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d464);
          (*pcVar5)();
        }
        uStack_a8 = puVar3[1];
        local_b0 = *puVar3;
        uStack_98 = puVar3[3];
        local_a0 = puVar3[2];
        uStack_90 = puVar3[4];
        uStack_7e = *(undefined8 *)((long)puVar3 + 0x32);
        uStack_80 = (undefined2)((ulong)*(undefined8 *)((long)puVar3 + 0x2a) >> 0x30);
        uStack_88 = (undefined2)puVar3[5];
        local_86 = (undefined6)((ulong)puVar3[5] >> 0x10);
        *(undefined8 *)((long)puVar3 + 0x32) = uStack_13e;
        *(ulong *)((long)puVar3 + 0x2a) = CONCAT26(uStack_140,local_146);
        puVar3[3] = uStack_158;
        puVar3[2] = local_160;
        puVar3[5] = CONCAT62(local_146,uStack_148);
        puVar3[4] = uStack_150;
        puVar3[1] = uStack_168;
        *puVar3 = local_170;
        FUN_1000fb4c4(&local_b0,&DAT_100fe8320,&DAT_100c7dd08);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar8);
    *unaff_x20 = uVar12;
    if (uVar13 != 0) {
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d478);
        (*pcVar5)();
      }
      if (*(ulong *)(uVar12 + 0x10) < uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10085d47c);
        (*pcVar5)();
      }
      FUN_1008627cc(*(ulong *)(uVar12 + 0x10) - uVar13);
    }
  }
  return;
}



/* Address: 0x10085d47c | FUN_10085d47c */

uint FUN_10085d47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  uint uVar2;
  code *pcVar3;
  long local_48;
  
  pcVar3 = *(code **)(*param_5 + 0x98);
  puVar1 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar3)(&local_48,FUN_100863f40,param_5,puVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
            PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (*(long *)(local_48 + 0x10) == 0) {
    _swift_bridgeObjectRelease(local_48);
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(local_48);
    FUN_100071370(param_3,param_4);
    uVar2 = (uint)param_4;
    _swift_bridgeObjectRelease_n(local_48,2);
  }
  return uVar2 & 1;
}



/* Address: 0x10085d544 | thunk_FUN_100861ee4 */

undefined8 thunk_FUN_100861ee4(long *param_1,long *param_2)

{
  long *plVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  ushort uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  ushort uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  pcVar16 = *(code **)(*param_1 + 0x98);
  puVar11 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  puVar5 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar4 = PTR___type_metadata_for_Swift_Never_100eadc38;
  (*pcVar16)(&lStack_e0,FUN_100865530,param_1,puVar11,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar7 = lStack_e0;
  (**(code **)(*param_2 + 0x98))(&lStack_e0,FUN_100865530,param_2,puVar11,puVar4,puVar5);
  lVar8 = lStack_e0;
  if (*(long *)(lVar7 + 0x10) == *(long *)(lStack_e0 + 0x10)) {
    lVar20 = 0;
    uVar15 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
      uVar17 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar17 = uVar17 & *(ulong *)(lVar7 + 0x40);
    while( true ) {
      while (uVar17 == 0) {
        bVar10 = SCARRY8(lVar20,1);
        lVar20 = lVar20 + 1;
        if (bVar10) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622bc);
          (*pcVar16)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
          _swift_release(lVar7);
          _swift_bridgeObjectRelease(lVar8);
          return 1;
        }
        uVar17 = ((ulong *)(lVar7 + 0x40))[lVar20];
      }
      if (*(long *)(lVar8 + 0x10) == 0) break;
      uVar14 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar20 << 6;
      plVar1 = (long *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
      uVar19 = *(ushort *)(*(long *)(lVar7 + 0x38) + uVar14 * 4);
      lVar12 = *plVar1;
      uVar14 = plVar1[1];
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(lVar8);
      uVar13 = uVar14;
      FUN_100071370();
      if ((uVar13 & 1) == 0) {
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease_n(lVar8,2);
        return 0;
      }
      uVar18 = *(ushort *)(*(long *)(lVar8 + 0x38) + lVar12 * 4);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(lVar8);
      _swift_beginAccess(param_1 + 2,auStack_88,0,0);
      _swift_beginAccess(param_2 + 2,auStack_a0,0,0);
      if (uVar19 != 0xffff && uVar18 != 0xffff) {
        do {
          if (*(ulong *)(param_1[2] + 0x10) <= (ulong)uVar19) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622c0);
            (*pcVar16)();
          }
          lVar12 = param_1[2] + (ulong)uVar19 * 0x40;
          puStack_108 = *(undefined **)(lVar12 + 0x38);
          puStack_110 = *(undefined **)(lVar12 + 0x30);
          uStack_100 = *(undefined8 *)(lVar12 + 0x40);
          uStack_118 = *(undefined8 *)(lVar12 + 0x28);
          uStack_120 = *(undefined8 *)(lVar12 + 0x20);
          uStack_f8 = (undefined2)*(undefined8 *)(lVar12 + 0x48);
          uStack_ee = (undefined6)*(undefined8 *)(lVar12 + 0x52);
          uStack_e8 = (ushort)((ulong)*(undefined8 *)(lVar12 + 0x52) >> 0x30);
          uStack_f6 = (undefined6)*(undefined8 *)(lVar12 + 0x4a);
          uStack_f0 = (undefined2)((ulong)*(undefined8 *)(lVar12 + 0x4a) >> 0x30);
          if (*(ulong *)(param_2[2] + 0x10) <= (ulong)uVar18) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622c4);
            (*pcVar16)();
          }
          cVar6 = (char)uStack_100;
          _Var2.unknown._2_6_ = uStack_f6;
          _Var2.unknown._0_2_ = uStack_f8;
          _Var3.unknown._2_6_ = uStack_ee;
          _Var3.unknown._0_2_ = uStack_f0;
          lVar12 = param_2[2] + (ulong)uVar18 * 0x40;
          puStack_c8 = *(undefined **)(lVar12 + 0x38);
          puStack_d0 = *(undefined **)(lVar12 + 0x30);
          uVar21 = *(undefined8 *)(lVar12 + 0x48);
          uStack_c0 = *(undefined8 *)(lVar12 + 0x40);
          uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
          lStack_e0 = *(long *)(lVar12 + 0x20);
          uStack_b8 = (undefined2)uVar21;
          uStack_ae = (undefined6)*(undefined8 *)(lVar12 + 0x52);
          uStack_a8 = (ushort)((ulong)*(undefined8 *)(lVar12 + 0x52) >> 0x30);
          uStack_b6 = (undefined6)*(undefined8 *)(lVar12 + 0x4a);
          uStack_b0 = (undefined2)((ulong)*(undefined8 *)(lVar12 + 0x4a) >> 0x30);
          cVar9 = (char)uStack_c0;
          puVar11 = (undefined *)CONCAT62(uStack_b6,uStack_b8);
          puVar4 = (undefined *)CONCAT62(uStack_ae,uStack_b0);
          if ((((puStack_110 != puStack_d0) || (puStack_108 != puStack_c8)) &&
              (bVar10 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)puStack_110,(_StringGuts)puStack_108,
                                   (_StringComparisonResult)(__int8)puStack_d0), !bVar10)) ||
             (uVar18 = uStack_a8, uVar19 = uStack_e8, cVar6 != cVar9)) {
            FUN_1000f8cac(&uStack_120,auStack_160,&DAT_100fe8320,&DAT_100c7dd08);
            FUN_1000f8cac(&lStack_e0,auStack_160,&DAT_100fe8320,&DAT_100c7dd08);
            _swift_bridgeObjectRelease(lVar8);
            _swift_release(lVar7);
            FUN_1000fb4c4(&lStack_e0,&DAT_100fe8320,&DAT_100c7dd08);
            FUN_1000fb4c4(&uStack_120,&DAT_100fe8320,&DAT_100c7dd08);
            return 0;
          }
          if (((_Var2.unknown != puVar11) || (_Var3.unknown != puVar4)) &&
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var2,_Var3,(_StringComparisonResult)(__int8)uVar21), !bVar10)) {
            _swift_bridgeObjectRelease(lVar8);
            goto LAB_100862270;
          }
        } while ((uVar19 != 0xffff) && (uVar18 != 0xffff));
      }
      uVar17 = uVar17 - 1 & uVar17;
      if (uVar19 != uVar18) break;
    }
    _swift_bridgeObjectRelease(lVar8);
LAB_100862270:
    _swift_release(lVar7);
  }
  else {
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lStack_e0);
  }
  return 0;
}



/* Address: 0x10085d548 | FUN_10085d548 */

void FUN_10085d548(Hasher param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  lVar6 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar9 = (undefined8 *)(lVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash(param_1,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash(param_1,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Address: 0x10085d638 | FUN_10085d638 */

void FUN_10085d638(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  Swift::Hasher::init(0);
  HVar5.unknown = (undefined *)(param_1 + 0x10);
  _swift_beginAccess(HVar5.unknown,auStack_c0,0,0);
  puVar6 = *(undefined **)(param_1 + 0x10);
  lVar8 = *(long *)(puVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(puVar6);
    puVar9 = (undefined8 *)(puVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease();
    HVar5.unknown = puVar6;
  }
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10085d73c | FUN_10085d73c */

void FUN_10085d73c(void)

{
  undefined8 *unaff_x20;
  
  FUN_10085d638(*unaff_x20);
  return;
}



/* Address: 0x10085d744 | FUN_10085d744 */

void FUN_10085d744(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10085d548(param_1,*unaff_x20);
  return;
}



/* Address: 0x10085d74c | FUN_10085d74c */

void FUN_10085d74c(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10085d548(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10085d78c | FUN_10085d78c */

undefined8 FUN_10085d78c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100863f5c();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x10085d7bc | FUN_10085d7bc */

void FUN_10085d7bc(__int64 param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  Dictionary DVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  undefined1 auStack_50 [32];
  
  pcVar2 = (code *)auStack_50;
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = *unaff_x20;
  if ((uVar1 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(uVar5);
    *unaff_x20 = uVar1;
    uVar5 = uVar1;
  }
  FUN_100611ea8();
  if (*param_2 != 0) {
    DVar3.unknown = &DAT_100fe8318;
    FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
    Swift::Dictionary::reserveCapacity(param_1,DVar3);
  }
  (*pcVar2)(auStack_50,0);
  _swift_beginAccess(uVar5 + 0x10,auStack_50,0x21,0);
  lVar6 = *(long *)(uVar5 + 0x10);
  lVar4 = lVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(long *)(uVar5 + 0x10) = lVar6;
  if (((int)lVar4 == 0) || ((long)(*(ulong *)(lVar6 + 0x18) >> 1) < param_1)) {
    FUN_1008603b8();
    lVar6 = lVar4;
  }
  *(long *)(uVar5 + 0x10) = lVar6;
  _swift_endAccess(auStack_50);
  return;
}



/* Address: 0x10085d8bc | FUN_10085d8bc */

void FUN_10085d8bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100863f5c();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10085d8f8 | FUN_10085d8f8 */

undefined8 FUN_10085d8f8(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
}



/* Address: 0x10085d938 | FUN_10085d938 */

bool FUN_10085d938(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0;
}



/* Address: 0x10085d980 | FUN_10085d980 */

void FUN_10085d980(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10085d9f0);
    (*pcVar1)();
  }
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  if (param_2 < *(ulong *)(*(long *)(param_3 + 0x10) + 0x10)) {
    FUN_100864328(*(long *)(param_3 + 0x10) + param_2 * 0x40 + 0x20,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085d9f4);
  (*pcVar1)();
}



/* Address: 0x10085d9f4 | FUN_10085d9f4 */

void FUN_10085d9f4(undefined8 *param_1,ulong param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *unaff_x20;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dc24);
    (*pcVar7)();
  }
  uVar12 = *unaff_x20;
  _swift_beginAccess(uVar12 + 0x10,auStack_78,0,0);
  lVar11 = *(long *)(uVar12 + 0x10);
  if (*(ulong *)(lVar11 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dc28);
    (*pcVar7)();
  }
  lVar17 = param_2 * 0x40;
  lVar11 = lVar11 + lVar17;
  cVar6 = *(char *)(lVar11 + 0x40);
  _Var1.unknown = *(undefined **)(lVar11 + 0x48);
  _Var4.unknown = *(undefined **)(lVar11 + 0x50);
  uVar10 = *param_1;
  uVar13 = param_1[1];
  _Var2.unknown = (undefined *)param_1[2];
  _Var5.unknown = (undefined *)param_1[3];
  if ((((*(undefined **)(lVar11 + 0x30) == _Var2.unknown &&
         *(undefined **)(lVar11 + 0x38) == _Var5.unknown) ||
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(lVar11 + 0x30),
                           (_StringGuts)*(undefined **)(lVar11 + 0x38),
                           (_StringComparisonResult)(__int8)_Var2.unknown), bVar8)) &&
      (cVar6 == *(char *)(param_1 + 4))) &&
     ((_Var1.unknown == (undefined *)param_1[5] && _Var4.unknown == (undefined *)param_1[6] ||
      (bVar8 = Swift::_stringCompareWithSmolCheck
                         (_Var1,_Var4,(_StringComparisonResult)(__int8)(undefined *)param_1[5]),
      bVar8)))) {
    FUN_1006ec3e4(param_1);
  }
  else {
    uVar9 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = *unaff_x20;
    if ((uVar9 & 1) == 0) {
      FUN_10085ba44();
      _swift_release(uVar12);
      *unaff_x20 = uVar9;
      uVar12 = uVar9;
    }
    _swift_beginAccess(uVar12 + 0x10,auStack_90,0,0);
    if (*(ulong *)(*(long *)(uVar12 + 0x10) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dc2c);
      (*pcVar7)();
    }
    lVar11 = *(long *)(uVar12 + 0x10) + lVar17;
    puVar3 = *(undefined **)(lVar11 + 0x30);
    if ((_Var2.unknown != puVar3 || _Var5.unknown != *(undefined **)(lVar11 + 0x38)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var5,(_StringComparisonResult)(__int8)puVar3), !bVar8)) {
      FUN_100830fd0(uVar10,uVar13);
      if ((((uint)uVar10 & 0xff00) != 0x100) && (((uint)uVar10 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dc48);
        (*pcVar7)();
      }
      _swift_beginAccess(uVar12 + 0x18,auStack_a8,1,0);
      uVar10 = *(undefined8 *)(uVar12 + 0x18);
      *(undefined8 *)(uVar12 + 0x18) = 0;
      _swift_bridgeObjectRelease(uVar10);
    }
    _swift_beginAccess(uVar12 + 0x10,auStack_c0,0x21,0);
    uVar14 = *(ulong *)(uVar12 + 0x10);
    uVar9 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(uVar12 + 0x10) = uVar14;
    if ((uVar9 & 1) == 0) {
      FUN_1008603a4();
      *(ulong *)(uVar12 + 0x10) = uVar14;
    }
    if (*(ulong *)(uVar14 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dc44);
      (*pcVar7)();
    }
    lVar17 = uVar14 + lVar17;
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar16 = *(undefined8 *)(lVar17 + 0x50);
    uVar10 = param_1[6];
    uVar20 = param_1[1];
    uVar19 = *param_1;
    uVar18 = param_1[2];
    uVar22 = param_1[5];
    uVar21 = param_1[4];
    *(undefined8 *)(lVar17 + 0x38) = param_1[3];
    *(undefined8 *)(lVar17 + 0x30) = uVar18;
    *(undefined8 *)(lVar17 + 0x48) = uVar22;
    *(undefined8 *)(lVar17 + 0x40) = uVar21;
    *(undefined8 *)(lVar17 + 0x50) = uVar10;
    *(undefined8 *)(lVar17 + 0x28) = uVar20;
    *(undefined8 *)(lVar17 + 0x20) = uVar19;
    *(ulong *)(uVar12 + 0x10) = uVar14;
    _swift_endAccess(auStack_c0);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar13);
  }
  return;
}



/* Address: 0x10085dc48 | FUN_10085dc48 */

undefined1  [16] FUN_10085dc48(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  void *pvVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  pvVar8 = (void *)0x108;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar8 = _malloc(0x108);
  }
  else {
    _swift_coroFrameAlloc(0x108,0x71b2);
  }
  *param_1 = pvVar8;
  *(ulong *)((long)pvVar8 + 0xf8) = param_2;
  *(long **)((long)pvVar8 + 0x100) = unaff_x20;
  if (-1 < (long)param_2) {
    lVar9 = *unaff_x20;
    _swift_beginAccess(lVar9 + 0x10,(long)pvVar8 + 0xe0,0,0);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (param_2 < *(ulong *)(lVar9 + 0x10)) {
      lVar9 = lVar9 + param_2 * 0x40;
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      uVar1 = *(undefined8 *)(lVar9 + 0x30);
      uVar4 = *(undefined8 *)(lVar9 + 0x38);
      uVar6 = *(undefined1 *)(lVar9 + 0x40);
      uVar2 = *(undefined8 *)(lVar9 + 0x48);
      uVar5 = *(undefined8 *)(lVar9 + 0x50);
      *(undefined8 *)((long)pvVar8 + 0x70) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)((long)pvVar8 + 0x78) = uVar3;
      *(undefined8 *)((long)pvVar8 + 0x80) = uVar1;
      *(undefined8 *)((long)pvVar8 + 0x88) = uVar4;
      *(undefined1 *)((long)pvVar8 + 0x90) = uVar6;
      *(undefined8 *)((long)pvVar8 + 0x98) = uVar2;
      *(undefined8 *)((long)pvVar8 + 0xa0) = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      auVar10._8_8_ = (long)pvVar8 + 0x70;
      auVar10._0_8_ = FUN_10085dd18;
      return auVar10;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dd18);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10085dd14);
  (*pcVar7)();
}



/* Address: 0x10085dd18 | FUN_10085dd18 */

void FUN_10085dd18(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    param_1[8] = param_1[0xf];
    param_1[7] = param_1[0xe];
    param_1[10] = param_1[0x11];
    param_1[9] = param_1[0x10];
    param_1[0xc] = param_1[0x13];
    param_1[0xb] = param_1[0x12];
    param_1[0xd] = param_1[0x14];
    FUN_10085d9f4(param_1 + 7,param_1[0x1f]);
  }
  else {
    uVar1 = param_1[0x1f];
    param_1[1] = param_1[0xf];
    *param_1 = param_1[0xe];
    param_1[3] = param_1[0x11];
    param_1[2] = param_1[0x10];
    param_1[5] = param_1[0x13];
    param_1[4] = param_1[0x12];
    param_1[6] = param_1[0x14];
    FUN_100864328(param_1,param_1 + 0x15);
    FUN_10085d9f4(param_1,uVar1);
    uVar1 = param_1[0x11];
    uVar2 = param_1[0x14];
    _swift_bridgeObjectRelease(param_1[0xf]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  _free(param_1);
  return;
}



/* Address: 0x10085ddc4 | FUN_10085ddc4 */

void FUN_10085ddc4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  code *pcStack_68;
  undefined8 local_60;
  
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  if ((uVar2 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
    uVar4 = uVar2;
  }
  _swift_beginAccess(uVar4 + 0x10,auStack_b8,0,0);
  if (param_1 == *(long *)(*(long *)(uVar4 + 0x10) + 0x10)) {
    uStack_98 = param_3[1];
    uVar3 = *param_3;
    uStack_88 = param_3[3];
    uStack_90 = param_3[2];
    uStack_78 = param_3[5];
    local_80 = param_3[4];
    local_70 = param_3[6];
    local_a0 = uVar3;
    FUN_100830fd0(uVar3,uStack_98);
    if ((((uint)uVar3 & 0xff00) != 0x100) && (((uint)uVar3 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085df9c);
      (*pcVar1)();
    }
    FUN_1000f8cac(param_3,&local_110,&DAT_100fe8728,&DAT_100c7e268);
    FUN_10085bc74(&local_a0);
    FUN_1000fb4c4(param_3,&DAT_100fe8728,&DAT_100c7e268);
  }
  else {
    _swift_beginAccess(uVar4 + 0x18,auStack_d0,1,0);
    uVar3 = *(undefined8 *)(uVar4 + 0x18);
    *(undefined8 *)(uVar4 + 0x18) = 0;
    _swift_bridgeObjectRelease(uVar3);
    uStack_108 = param_3[1];
    local_110 = *param_3;
    uStack_f8 = param_3[3];
    uStack_100 = param_3[2];
    uStack_e8 = param_3[5];
    local_f0 = param_3[4];
    local_e0 = param_3[6];
    _swift_beginAccess(uVar4 + 0x10,auStack_128,0x21,0);
    uStack_98 = uStack_108;
    local_a0 = local_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    uStack_78 = uStack_e8;
    local_80 = local_f0;
    local_70 = local_e0;
    pcStack_68 = FUN_10085e3a4;
    local_60 = 0;
    FUN_1000f8cac(param_3,auStack_160,&DAT_100fe8728,&DAT_100c7e268);
    FUN_10085e438(param_1,param_2,&local_a0);
    _swift_endAccess(auStack_128);
    if (0xfffe < *(ulong *)(*(long *)(uVar4 + 0x10) + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085df98);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x10085df9c | FUN_10085df9c */

void FUN_10085df9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  LazyMapSequence LVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong *unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0 [4];
  undefined1 local_80;
  
  uVar14 = *(undefined8 *)(param_5 + 8);
  local_148 = param_5;
  local_140 = param_2;
  local_110 = param_3;
  local_120 = (undefined *)Swift::LazySequence::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  lVar9 = (long)&local_150 - (*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fe8320;
  local_130 = lVar9;
  FUN_1000f8b08(&DAT_100fe8320,&DAT_100c7dd08);
  local_138 = puVar7;
  LVar8 = Swift::LazyMapSequence::typeMetadataAccessor();
  local_118 = lVar9 - (*(long *)(*(long *)(LVar8.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_4 + -8);
  lVar15 = local_118 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_150 = *(long *)(lVar9 + -8);
  local_108 = lVar15 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *unaff_x20;
  local_100 = lVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar13 = *unaff_x20;
  if ((uVar10 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(uVar13);
    *unaff_x20 = uVar10;
    uVar13 = uVar10;
  }
  _swift_beginAccess(uVar13 + 0x10,auStack_b8,0,0);
  if (param_1 == *(long *)(*(long *)(uVar13 + 0x10) + 0x10)) {
    (**(code **)(lVar16 + 0x10))(lVar15,local_110,param_4);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar14,param_4,local_100,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    uVar14 = local_f8;
    lVar9 = local_f0;
    uVar1 = local_e8;
    uVar2 = uStack_e0;
    uVar3 = local_d8;
    uVar4 = uStack_d0;
    uVar5 = local_c8;
    while (lVar9 != 0) {
      local_80 = (undefined1)uVar3;
      uVar11 = uVar14;
      local_f8 = uVar14;
      local_f0 = lVar9;
      local_e8 = uVar1;
      uStack_e0 = uVar2;
      local_d8 = uVar3;
      uStack_d0 = uVar4;
      local_c8 = uVar5;
      FUN_100830fd0(uVar14,lVar9);
      if ((((uint)uVar11 & 0xff00) != 0x100) && (((uint)uVar11 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10085e240);
        (*pcVar6)();
      }
      FUN_10085bc74(local_a0);
      FUN_100864364(uVar14,lVar9,uVar1,uVar2,uVar3,uVar4,uVar5);
      Swift::IteratorProtocol::_next();
      uVar14 = local_f8;
      lVar9 = local_f0;
      uVar1 = local_e8;
      uVar2 = uStack_e0;
      uVar3 = local_d8;
      uVar4 = uStack_d0;
      uVar5 = local_c8;
    }
    (**(code **)(local_150 + 8))(local_108,local_100);
  }
  else {
    _swift_beginAccess(uVar13 + 0x18,local_a0,1,0);
    uVar14 = *(undefined8 *)(uVar13 + 0x18);
    *(undefined8 *)(uVar13 + 0x18) = 0;
    _swift_bridgeObjectRelease(uVar14);
    lVar9 = local_130;
    (extension_Swift)::Swift::Sequence::get_lazy();
    puVar7 = local_120;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
               local_120);
    lVar15 = local_118;
    (extension_Swift)::Swift::LazySequenceProtocol::_map();
    (**(code **)(local_128 + 8))(lVar9,puVar7);
    _swift_beginAccess(uVar13 + 0x10,&local_f8,0x21,0);
    puVar7 = &DAT_100fe8328;
    FUN_1000f7830(&DAT_100fe8328,&DAT_100c7dd10);
    local_c0 = local_148;
    puVar12 = PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Collection_100ead1b8;
    _swift_getWitnessTable
              (PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Collection_100ead1b8,
               LVar8.unknown,&local_c0);
    Swift::Array<undefined>::_replaceSubrange(param_1,local_140,lVar15,puVar7,LVar8.unknown,puVar12)
    ;
    _swift_endAccess(&local_f8);
    if (0xfffe < *(ulong *)(*(long *)(uVar13 + 0x10) + 0x10)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10085e370);
      (*pcVar6)();
    }
  }
  return;
}



/* Address: 0x10085e3a4 | FUN_10085e3a4 */

void FUN_10085e3a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  uVar6 = param_2[6];
  uVar9 = uVar1;
  FUN_100830fd0(uVar1,uVar4);
  if ((((uint)uVar9 & 0xff00) != 0x100) && (((uint)uVar9 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10085e438);
    (*pcVar8)();
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = uVar7;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  *(undefined2 *)(param_1 + 7) = 0;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return;
}



/* Address: 0x10085e438 | FUN_10085e438 */

void FUN_10085e438(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085e4f8);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085e4fc);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085e500);
    (*pcVar2)();
  }
  lVar1 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1008603b8();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_10086103c(param_1,param_2,1,param_3);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085e508);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10085e504);
  (*pcVar2)();
}



/* Address: 0x10085e508 | FUN_10085e508 */

void FUN_10085e508(undefined8 *param_1,undefined8 param_2)

{
  FUN_10085c548();
  *param_1 = param_2;
  return;
}



/* Address: 0x10085e52c | FUN_10085e52c */

void FUN_10085e52c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_10085df9c(*param_1,param_1[1],param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010085e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x10085e57c | thunk_FUN_10085d7bc */

void thunk_FUN_10085d7bc(void)

{
  FUN_10085d7bc();
  return;
}



/* Address: 0x10085e580 | FUN_10085e580 */

void FUN_10085e580(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar7 = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  uVar6 = param_2[6];
  FUN_10085c548();
  *param_1 = param_2;
  if (param_3 == 0) {
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar4);
    return;
  }
  if (-1 < param_3) {
    local_a0 = param_3;
    uStack_98 = uVar1;
    local_90 = uVar4;
    uStack_88 = uVar2;
    local_80 = uVar5;
    local_78 = uVar7;
    local_70 = uVar3;
    uStack_68 = uVar6;
    FUN_10085e6e0(&local_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10085e63c);
  (*pcVar8)();
}



/* Address: 0x10085e63c | FUN_10085e63c */

void FUN_10085e63c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar7 = *(undefined1 *)(param_1 + 4);
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  lVar9 = *unaff_x20;
  _swift_beginAccess(lVar9 + 0x10,auStack_b0,0,0);
  uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
  local_98 = uVar1;
  uStack_90 = uVar4;
  local_88 = uVar2;
  uStack_80 = uVar5;
  local_78 = uVar7;
  local_70 = uVar3;
  uStack_68 = uVar6;
  FUN_10085ddc4(uVar8,uVar8,&local_98);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x10085e6e0 | FUN_10085e6e0 */

void FUN_10085e6e0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_2a0 [64];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined8 uStack_22e;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined8 uStack_1ee;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1ae;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 local_180;
  ulong uStack_178;
  ulong uStack_170;
  code *pcStack_168;
  undefined8 local_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  ulong uStack_100;
  ulong uStack_f8;
  code *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined3 local_b0;
  undefined1 uStack_ad;
  undefined3 uStack_ac;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  undefined1 local_88;
  undefined3 local_87;
  undefined1 uStack_84;
  undefined3 uStack_83;
  ulong local_80;
  ulong uStack_78;
  
  uVar14 = *param_1;
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar10 = param_1[4];
  uVar4 = (undefined1)param_1[5];
  local_b0 = (undefined3)*(undefined4 *)((long)param_1 + 0x29);
  uStack_ad = (undefined1)*(undefined4 *)((long)param_1 + 0x2c);
  uStack_ac = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2c) >> 8);
  uVar11 = param_1[7];
  if (uVar14 != 0) {
    uVar12 = param_1[6];
    uVar15 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
    do {
      _local_87 = CONCAT13(uStack_ad,local_b0);
      uStack_83 = uStack_ac;
      local_a8 = uVar2;
      uStack_a0 = uVar1;
      local_98 = uVar3;
      uStack_90 = uVar10;
      local_88 = uVar4;
      local_80 = uVar12;
      uStack_78 = uVar11;
      if (uVar15 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10085ea94);
        (*pcVar5)();
      }
      uVar13 = *unaff_x20;
      _swift_beginAccess(uVar13 + 0x10,auStack_c8,0,0);
      uVar17 = *(ulong *)(*(long *)(uVar13 + 0x10) + 0x10);
      FUN_100864328(&local_a8,&local_128);
      uVar6 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar13 = *unaff_x20;
      if ((uVar6 & 1) == 0) {
        FUN_10085ba44();
        _swift_release(uVar13);
        *unaff_x20 = uVar6;
        uVar13 = uVar6;
      }
      _swift_beginAccess(uVar13 + 0x10,auStack_e0,0,0);
      if (uVar17 == *(ulong *)(*(long *)(uVar13 + 0x10) + 0x10)) {
        uVar13 = local_a8;
        FUN_100830fd0(local_a8,uStack_a0);
        if ((((uint)uVar13 & 0xff00) != 0x100) && (((uint)uVar13 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085eaa0);
          (*pcVar5)();
        }
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(uVar11);
        FUN_10085bc74(&local_a8);
        FUN_1006ec3e4(&local_a8);
        FUN_1006ec3e4(&local_a8);
      }
      else {
        _swift_beginAccess(uVar13 + 0x18,auStack_140,1,0);
        uVar7 = *(undefined8 *)(uVar13 + 0x18);
        *(undefined8 *)(uVar13 + 0x18) = 0;
        _swift_bridgeObjectRelease(uVar7);
        _swift_beginAccess(uVar13 + 0x10,auStack_158,0x21,0);
        local_f0 = FUN_10085e3a4;
        uStack_e8 = 0;
        lVar16 = *(long *)(uVar13 + 0x10);
        uVar6 = *(ulong *)(lVar16 + 0x10);
        local_128 = uVar2;
        uStack_120 = uVar1;
        local_118 = uVar3;
        uStack_110 = uVar10;
        local_108 = uVar4;
        uStack_100 = uVar12;
        uStack_f8 = uVar11;
        if (uVar6 < uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085ea98);
          (*pcVar5)();
        }
        FUN_100864328(&local_a8,&local_1a0);
        lVar8 = lVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        *(long *)(uVar13 + 0x10) = lVar16;
        if (((int)lVar8 == 0) || (*(ulong *)(lVar16 + 0x18) >> 1 <= uVar6)) {
          FUN_1008603b8();
          *(long *)(uVar13 + 0x10) = lVar8;
          lVar16 = lVar8;
        }
        lVar8 = lVar16 + uVar17 * 0x40;
        puVar9 = &DAT_100fe8320;
        FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
        _swift_arrayDestroy(lVar8 + 0x20,0,puVar9);
        _memmove((void *)(lVar8 + 0x60),(void *)(lVar8 + 0x20),
                 (*(long *)(lVar16 + 0x10) - uVar17) * 0x40);
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
        local_180 = CONCAT71(uStack_107,local_108);
        uStack_178 = uStack_100;
        pcStack_168 = local_f0;
        uStack_170 = uStack_f8;
        local_160 = uStack_e8;
        uStack_198 = uStack_120;
        local_1a0 = local_128;
        uStack_188 = uStack_110;
        uStack_190 = local_118;
        (*local_f0)(&local_260,&local_1a0);
        uStack_218 = uStack_258;
        local_220 = local_260;
        uStack_208 = uStack_248;
        local_210 = uStack_250;
        uStack_1f8 = uStack_238;
        local_200 = local_240;
        uStack_1ee = uStack_22e;
        uStack_1f6 = uStack_236;
        uStack_1f0 = uStack_230;
        uStack_1d8 = uStack_258;
        local_1e0 = local_260;
        uStack_1c8 = uStack_248;
        uStack_1d0 = uStack_250;
        local_1c0 = local_240;
        uStack_1ae = uStack_22e;
        FUN_1000f8cac(&local_220,auStack_2a0,&DAT_100fe8320,&DAT_100c7dd08);
        FUN_1000fb4c4(&local_1e0,&DAT_100fe8320,&DAT_100c7dd08);
        *(undefined8 *)(lVar8 + 0x52) = uStack_1ee;
        *(ulong *)(lVar8 + 0x4a) = CONCAT26(uStack_1f0,uStack_1f6);
        *(undefined8 *)(lVar8 + 0x38) = uStack_208;
        *(undefined8 *)(lVar8 + 0x30) = local_210;
        *(ulong *)(lVar8 + 0x48) = CONCAT62(uStack_1f6,uStack_1f8);
        *(undefined8 *)(lVar8 + 0x40) = local_200;
        *(undefined8 *)(lVar8 + 0x28) = uStack_218;
        *(undefined8 *)(lVar8 + 0x20) = local_220;
        FUN_1000fb4c4(&local_128,&DAT_100fe8730,&DAT_100c7e270);
        *(long *)(uVar13 + 0x10) = lVar16;
        _swift_endAccess(auStack_158);
        uVar13 = *(ulong *)(lVar16 + 0x10);
        FUN_1006ec3e4(&local_a8);
        if (0xfffe < uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10085ea9c);
          (*pcVar5)();
        }
      }
      uVar15 = uVar15 - 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10085eaa0 | FUN_10085eaa0 */

void FUN_10085eaa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_68 = *param_1;
  uVar1 = param_1[1];
  local_58 = param_1[2];
  uVar2 = param_1[3];
  local_48 = *(undefined1 *)(param_1 + 4);
  local_40 = param_1[5];
  uVar3 = param_1[6];
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  uStack_38 = uVar3;
  FUN_10085ddc4(*param_2,*param_2,&local_68);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10085eb0c | FUN_10085eb0c */

void FUN_10085eb0c(undefined8 *param_1)

{
  FUN_10085eb14(*param_1);
  return;
}



/* Address: 0x10085eb14 | FUN_10085eb14 */

void FUN_10085eb14(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(lVar9 + 0x10,auStack_58,0,0);
  lVar9 = *(long *)(lVar9 + 0x10);
  uVar8 = *(ulong *)(lVar9 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ebc4);
    (*pcVar7)();
  }
  if (-1 < (long)param_2) {
    if (param_2 < uVar8) {
      lVar9 = lVar9 + param_2 * 0x40;
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      uVar1 = *(undefined8 *)(lVar9 + 0x30);
      uVar4 = *(undefined8 *)(lVar9 + 0x38);
      uVar6 = *(undefined1 *)(lVar9 + 0x40);
      uVar2 = *(undefined8 *)(lVar9 + 0x48);
      uVar5 = *(undefined8 *)(lVar9 + 0x50);
      *param_1 = *(undefined8 *)(lVar9 + 0x20);
      param_1[1] = uVar3;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      *(undefined1 *)(param_1 + 4) = uVar6;
      param_1[5] = uVar2;
      param_1[6] = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1008644ec(param_2,param_2 + 1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ebcc);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ebc8);
  (*pcVar7)();
}



/* Address: 0x10085ebcc | FUN_10085ebcc */

void FUN_10085ebcc(undefined8 *param_1)

{
  FUN_1008644ec(*param_1,param_1[1]);
  return;
}



/* Address: 0x10085ebd8 | FUN_10085ebd8 */

void FUN_10085ebd8(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Address: 0x10085ebec | thunk_FUN_10085ebf0 */

void thunk_FUN_10085ebf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  uint uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(lVar9 + 0x10,auStack_58,0,0);
  lVar9 = *(long *)(lVar9 + 0x10);
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecb4);
    (*pcVar7)();
  }
  uVar3 = *(undefined8 *)(lVar9 + 0x28);
  uVar1 = *(undefined8 *)(lVar9 + 0x30);
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  uVar6 = *(undefined1 *)(lVar9 + 0x40);
  uVar2 = *(undefined8 *)(lVar9 + 0x48);
  uVar5 = *(undefined8 *)(lVar9 + 0x50);
  *param_1 = *(undefined8 *)(lVar9 + 0x20);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar6;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  lVar9 = 0;
  uVar8 = 1;
  FUN_10085ee58();
  if ((uVar8 & 0xff) != 1) {
    if (-1 < lVar9) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1008644ec(0,lVar9);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecb8);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecbc);
  (*pcVar7)();
}



/* Address: 0x10085ebf0 | FUN_10085ebf0 */

void FUN_10085ebf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  uint uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_58 [24];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(lVar9 + 0x10,auStack_58,0,0);
  lVar9 = *(long *)(lVar9 + 0x10);
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecb4);
    (*pcVar7)();
  }
  uVar3 = *(undefined8 *)(lVar9 + 0x28);
  uVar1 = *(undefined8 *)(lVar9 + 0x30);
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  uVar6 = *(undefined1 *)(lVar9 + 0x40);
  uVar2 = *(undefined8 *)(lVar9 + 0x48);
  uVar5 = *(undefined8 *)(lVar9 + 0x50);
  *param_1 = *(undefined8 *)(lVar9 + 0x20);
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar6;
  param_1[5] = uVar2;
  param_1[6] = uVar5;
  lVar9 = 0;
  uVar8 = 1;
  FUN_10085ee58();
  if ((uVar8 & 0xff) != 1) {
    if (-1 < lVar9) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      FUN_1008644ec(0,lVar9);
      return;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecb8);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10085ecbc);
  (*pcVar7)();
}



/* Address: 0x10085ecbc | thunk_FUN_10085ecc0 */

void thunk_FUN_10085ecc0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed48);
      (*pcVar1)();
    }
    lVar3 = *unaff_x20;
    _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
    lVar2 = 0;
    FUN_10085ee58(0,param_1,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10),lVar3);
    if (((uint)param_1 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed50);
      (*pcVar1)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed4c);
      (*pcVar1)();
    }
    FUN_1008644ec(0,lVar2);
  }
  return;
}



/* Address: 0x10085ecc0 | FUN_10085ecc0 */

void FUN_10085ecc0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed48);
      (*pcVar1)();
    }
    lVar3 = *unaff_x20;
    _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
    lVar2 = 0;
    FUN_10085ee58(0,param_1,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10),lVar3);
    if (((uint)param_1 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed50);
      (*pcVar1)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ed4c);
      (*pcVar1)();
    }
    FUN_1008644ec(0,lVar2);
  }
  return;
}



/* Address: 0x10085ed50 | FUN_10085ed50 */

void FUN_10085ed50(ulong param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  if ((param_1 & 1) == 0) {
    _swift_release();
    FUN_10085c548();
    *unaff_x20 = lVar1;
  }
  else {
    _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
    FUN_1008644ec(0,*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10));
  }
  return;
}



/* Address: 0x10085edb0 | FUN_10085edb0 */

void FUN_10085edb0(long param_1)

{
  code *pcVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_48 [24];
  
  FUN_1008611d4();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
    if (*(long *)(*(long *)(lVar2 + 0x10) + 0x10) < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ee20);
      (*pcVar1)();
    }
    FUN_1008644ec(param_1);
  }
  return;
}



/* Address: 0x10085ee20 | thunk_FUN_10085f9e4 */

void thunk_FUN_10085f9e4(void)

{
  FUN_10085f9e4();
  return;
}



/* Address: 0x10085ee24 | FUN_10085ee24 */

void FUN_10085ee24(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_10085ee58(uVar1,param_3,*param_4,*unaff_x20);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x10085ee58 | FUN_10085ee58 */

undefined1  [16] FUN_10085ee58(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
  uVar4 = *(ulong *)(*(long *)(param_4 + 0x10) + 0x10);
  if (uVar4 < param_1 || uVar4 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ef08);
    (*pcVar1)();
  }
  param_3 = param_3 - param_1;
  if ((long)param_2 < 1) {
    if (((long)param_3 < 1) && ((long)param_2 < (long)param_3)) goto LAB_10085eed0;
  }
  else if ((-1 < (long)param_3) && (param_3 < param_2)) {
LAB_10085eed0:
    uVar2 = 0;
    uVar3 = 1;
    goto LAB_10085eef0;
  }
  uVar2 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ef0c);
    (*pcVar1)();
  }
  if (uVar4 < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10085ef10);
    (*pcVar1)();
  }
  uVar3 = 0;
LAB_10085eef0:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x10085ef10 | thunk_FUN_10085fa50 */

void thunk_FUN_10085fa50(void)

{
  FUN_10085fa50();
  return;
}



/* Address: 0x10085ef14 | FUN_10085ef14 */

void FUN_10085ef14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  local_30 = param_1[4];
  local_20 = param_1[6];
  FUN_10085d9f4(&local_50,*param_2);
  return;
}



/* Address: 0x10085ef50 | FUN_10085ef50 */

undefined1  [16] FUN_10085ef50(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  void *pvVar8;
  long *unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  pvVar8 = (void *)0x108;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar8 = _malloc(0x108);
  }
  else {
    _swift_coroFrameAlloc(0x108,0xa7fc);
  }
  *param_1 = pvVar8;
  uVar10 = *param_2;
  *(long **)((long)pvVar8 + 0xf8) = unaff_x20;
  *(ulong *)((long)pvVar8 + 0x100) = uVar10;
  if (-1 < (long)uVar10) {
    lVar9 = *unaff_x20;
    _swift_beginAccess(lVar9 + 0x10,(long)pvVar8 + 0xe0,0,0);
    lVar9 = *(long *)(lVar9 + 0x10);
    if (uVar10 < *(ulong *)(lVar9 + 0x10)) {
      lVar9 = lVar9 + uVar10 * 0x40;
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      uVar1 = *(undefined8 *)(lVar9 + 0x30);
      uVar4 = *(undefined8 *)(lVar9 + 0x38);
      uVar6 = *(undefined1 *)(lVar9 + 0x40);
      uVar2 = *(undefined8 *)(lVar9 + 0x48);
      uVar5 = *(undefined8 *)(lVar9 + 0x50);
      *(undefined8 *)((long)pvVar8 + 0x70) = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)((long)pvVar8 + 0x78) = uVar3;
      *(undefined8 *)((long)pvVar8 + 0x80) = uVar1;
      *(undefined8 *)((long)pvVar8 + 0x88) = uVar4;
      *(undefined1 *)((long)pvVar8 + 0x90) = uVar6;
      *(undefined8 *)((long)pvVar8 + 0x98) = uVar2;
      *(undefined8 *)((long)pvVar8 + 0xa0) = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      auVar11._8_8_ = (long)pvVar8 + 0x70;
      auVar11._0_8_ = FUN_10085f024;
      return auVar11;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10085f024);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10085f020);
  (*pcVar7)();
}



/* Address: 0x10085f024 | FUN_10085f024 */

void FUN_10085f024(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    param_1[8] = param_1[0xf];
    param_1[7] = param_1[0xe];
    param_1[10] = param_1[0x11];
    param_1[9] = param_1[0x10];
    param_1[0xc] = param_1[0x13];
    param_1[0xb] = param_1[0x12];
    param_1[0xd] = param_1[0x14];
    FUN_10085d9f4(param_1 + 7,param_1[0x20]);
  }
  else {
    uVar1 = param_1[0x20];
    param_1[1] = param_1[0xf];
    *param_1 = param_1[0xe];
    param_1[3] = param_1[0x11];
    param_1[2] = param_1[0x10];
    param_1[5] = param_1[0x13];
    param_1[4] = param_1[0x12];
    param_1[6] = param_1[0x14];
    FUN_100864328(param_1,param_1 + 0x15);
    FUN_10085d9f4(param_1,uVar1);
    uVar1 = param_1[0x11];
    uVar2 = param_1[0x14];
    _swift_bridgeObjectRelease(param_1[0xf]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  _free(param_1);
  return;
}



/* Address: 0x10085f0d0 | FUN_10085f0d0 */

void FUN_10085f0d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_10085fdd4();
  _swift_release(uVar1);
  return;
}



/* Address: 0x10085f108 | FUN_10085f108 */

code * FUN_10085f108(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xfb4c);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_10085f16c();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10026c674;
}



/* Address: 0x10085f16c | FUN_10085f16c */

undefined1  [16] FUN_10085f16c(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  void *pvVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  pvVar2 = (void *)0x120;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0x120);
  }
  else {
    _swift_coroFrameAlloc(0x120,0x2132);
  }
  *param_1 = pvVar2;
  *(long *)((long)pvVar2 + 0x108) = param_3;
  *(long **)((long)pvVar2 + 0x110) = unaff_x20;
  *(long *)((long)pvVar2 + 0x100) = param_2;
  lVar3 = *unaff_x20;
  *(long *)((long)pvVar2 + 0x118) = lVar3;
  _swift_beginAccess(lVar3 + 0x10,(long)pvVar2 + 0x88,0,0);
  if ((-1 < param_2) && (param_3 <= *(long *)(*(long *)(lVar3 + 0x10) + 0x10))) {
    *(long *)((long)pvVar2 + 0x70) = param_2;
    *(long *)((long)pvVar2 + 0x78) = param_3;
    *(long *)((long)pvVar2 + 0x80) = lVar3;
    _swift_retain(lVar3);
    auVar4._8_8_ = (long)pvVar2 + 0x70;
    auVar4._0_8_ = FUN_10085f224;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085f224);
  (*pcVar1)();
}



/* Address: 0x10085f224 | FUN_10085f224 */

void FUN_10085f224(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  param_1 = (undefined8 *)*param_1;
  uVar16 = param_1[0xe];
  lVar13 = param_1[0x21];
  uVar3 = param_1[0xf];
  lVar6 = param_1[0x10];
  lVar12 = *(long *)(*(long *)(param_1[0x23] + 0x10) + 0x10);
  if ((param_2 & 1) == 0) {
    if (lVar12 < lVar13) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f510);
      (*pcVar11)();
    }
    lVar12 = param_1[0x20];
    _swift_beginAccess(lVar6 + 0x10,param_1 + 0x1a,0,0);
    uVar17 = uVar16;
    if (lVar12 != lVar13) {
      lVar12 = param_1[0x20];
      uVar2 = uVar16;
      if ((long)uVar16 <= (long)uVar3) {
        uVar2 = uVar3;
      }
      lVar13 = uVar16 * 0x40 + 0x50;
      do {
        if (uVar3 == uVar17) {
          _swift_release(lVar6);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f530);
          (*pcVar11)();
        }
        if (uVar2 == uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4e8);
          (*pcVar11)();
        }
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4f0);
          (*pcVar11)();
        }
        if (*(ulong *)(*(long *)(lVar6 + 0x10) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4f8);
          (*pcVar11)();
        }
        plVar14 = (long *)param_1[0x22];
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar13);
        uVar7 = puVar1[-5];
        uVar4 = puVar1[-4];
        uVar8 = puVar1[-3];
        uVar10 = *(undefined1 *)(puVar1 + -2);
        uVar5 = puVar1[-1];
        uVar9 = *puVar1;
        param_1[7] = puVar1[-6];
        param_1[8] = uVar7;
        param_1[9] = uVar4;
        param_1[10] = uVar8;
        *(undefined1 *)(param_1 + 0xb) = uVar10;
        param_1[0xc] = uVar5;
        param_1[0xd] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar9);
        FUN_10085d9f4(param_1 + 7,lVar12);
        lVar15 = *plVar14;
        _swift_beginAccess(lVar15 + 0x10,param_1 + 0x1d,0,0);
        if (*(long *)(*(long *)(lVar15 + 0x10) + 0x10) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f500);
          (*pcVar11)();
        }
        if (*(ulong *)(*(long *)(lVar6 + 0x10) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f508);
          (*pcVar11)();
        }
        lVar12 = lVar12 + 1;
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x40;
      } while (lVar12 != param_1[0x21]);
    }
    _swift_release(lVar6);
    if (uVar17 != uVar3) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f518);
      (*pcVar11)();
    }
  }
  else {
    if (lVar12 < lVar13) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f50c);
      (*pcVar11)();
    }
    lVar12 = param_1[0x20];
    _swift_retain(lVar6);
    _swift_beginAccess(lVar6 + 0x10,param_1 + 0x14,0,0);
    uVar17 = uVar16;
    if (lVar12 != lVar13) {
      lVar12 = param_1[0x20];
      uVar2 = uVar16;
      if ((long)uVar16 <= (long)uVar3) {
        uVar2 = uVar3;
      }
      lVar13 = uVar16 * 0x40 + 0x50;
      do {
        if (uVar3 == uVar17) {
          _swift_release(lVar6);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f524);
          (*pcVar11)();
        }
        if (uVar2 == uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4e4);
          (*pcVar11)();
        }
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4ec);
          (*pcVar11)();
        }
        if (*(ulong *)(*(long *)(lVar6 + 0x10) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4f4);
          (*pcVar11)();
        }
        plVar14 = (long *)param_1[0x22];
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar13);
        uVar7 = puVar1[-5];
        uVar4 = puVar1[-4];
        uVar8 = puVar1[-3];
        uVar10 = *(undefined1 *)(puVar1 + -2);
        uVar5 = puVar1[-1];
        uVar9 = *puVar1;
        *param_1 = puVar1[-6];
        param_1[1] = uVar7;
        param_1[2] = uVar4;
        param_1[3] = uVar8;
        *(undefined1 *)(param_1 + 4) = uVar10;
        param_1[5] = uVar5;
        param_1[6] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar9);
        FUN_10085d9f4(param_1,lVar12);
        lVar15 = *plVar14;
        _swift_beginAccess(lVar15 + 0x10,param_1 + 0x17,0,0);
        if (*(long *)(*(long *)(lVar15 + 0x10) + 0x10) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f4fc);
          (*pcVar11)();
        }
        if (*(ulong *)(*(long *)(lVar6 + 0x10) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f504);
          (*pcVar11)();
        }
        lVar12 = lVar12 + 1;
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x40;
      } while (lVar12 != param_1[0x21]);
    }
    _swift_release(lVar6);
    if (uVar17 != uVar3) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10085f514);
      (*pcVar11)();
    }
    _swift_release(param_1[0x10]);
  }
  _free(param_1);
  return;
}



/* Address: 0x10085f530 | FUN_10085f530 */

void FUN_10085f530(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1008614e8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10085f558 | FUN_10085f558 */

void FUN_10085f558(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar5 = *param_1;
  uVar4 = *param_2;
  if (uVar5 != uVar4) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f638);
      (*pcVar2)();
    }
    lVar6 = *unaff_x20;
    _swift_beginAccess(lVar6 + 0x10,auStack_c8,0,0);
    lVar6 = *(long *)(lVar6 + 0x10);
    uVar3 = *(ulong *)(lVar6 + 0x10);
    if (uVar3 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f63c);
      (*pcVar2)();
    }
    lVar6 = lVar6 + 0x20;
    puVar1 = (undefined8 *)(lVar6 + uVar5 * 0x40);
    uStack_a8 = puVar1[1];
    local_b0 = *puVar1;
    uStack_98 = puVar1[3];
    local_a0 = puVar1[2];
    uStack_88 = puVar1[5];
    uStack_90 = puVar1[4];
    local_80 = puVar1[6];
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f640);
      (*pcVar2)();
    }
    if (uVar3 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f644);
      (*pcVar2)();
    }
    puVar1 = (undefined8 *)(lVar6 + uVar4 * 0x40);
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    uStack_58 = puVar1[3];
    local_60 = puVar1[2];
    uStack_48 = puVar1[5];
    uStack_50 = puVar1[4];
    local_40 = puVar1[6];
    FUN_100864328(&local_b0,auStack_100);
    FUN_100864328(&local_70,auStack_100);
    FUN_10085d9f4(&local_70,uVar5);
    FUN_10085d9f4(&local_b0,uVar4);
  }
  return;
}



/* Address: 0x10085f644 | FUN_10085f644 */

void FUN_10085f644(undefined8 *param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  *param_1 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
  return;
}



/* Address: 0x10085f68c | FUN_10085f68c */

undefined1  [16] FUN_10085f68c(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar7 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar7 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xe044);
  }
  *param_1 = puVar7;
  uVar9 = *param_2;
  if (-1 < (long)uVar9) {
    lVar8 = *unaff_x20;
    _swift_beginAccess(lVar8 + 0x10,puVar7 + 7,0,0);
    lVar8 = *(long *)(lVar8 + 0x10);
    if (uVar9 < *(ulong *)(lVar8 + 0x10)) {
      lVar8 = lVar8 + uVar9 * 0x40;
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
      uVar1 = *(undefined8 *)(lVar8 + 0x30);
      uVar3 = *(undefined8 *)(lVar8 + 0x38);
      uVar5 = *(undefined1 *)(lVar8 + 0x40);
      uVar2 = *(undefined8 *)(lVar8 + 0x48);
      uVar4 = *(undefined8 *)(lVar8 + 0x50);
      puVar7[1] = *(undefined8 *)(lVar8 + 0x28);
      *puVar7 = uVar10;
      puVar7[2] = uVar1;
      puVar7[3] = uVar3;
      *(undefined1 *)(puVar7 + 4) = uVar5;
      puVar7[5] = uVar2;
      puVar7[6] = uVar4;
      auVar11._8_8_ = puVar7;
      auVar11._0_8_ = FUN_1006f1078;
      return auVar11;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10085f744);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10085f740);
  (*pcVar6)();
}



/* Address: 0x10085f744 | FUN_10085f744 */

void FUN_10085f744(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar4 = *unaff_x20;
  _swift_beginAccess(lVar4 + 0x10,auStack_48,0,0);
  if ((-1 < lVar1) && (lVar2 <= *(long *)(*(long *)(lVar4 + 0x10) + 0x10))) {
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1[2] = lVar4;
    _swift_retain(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10085f7b4);
  (*pcVar3)();
}



/* Address: 0x10085f7b4 | FUN_10085f7b4 */

void FUN_10085f7b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


