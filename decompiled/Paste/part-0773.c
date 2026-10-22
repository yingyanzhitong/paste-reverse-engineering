/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10087e534 | FUN_10087e534 */

uint FUN_10087e534(uint param_1)

{
  FUN_10087daa0();
  return param_1 & 1;
}



/* Address: 0x10087e558 | FUN_10087e558 */

void FUN_10087e558(void)

{
  FUN_10087dec8();
  return;
}



/* Address: 0x10087e578 | FUN_10087e578 */

String FUN_10087e578(undefined8 param_1)

{
  String SVar1;
  
  SVar1 = Swift::String::_init(param_1,&DAT_100f09088);
  return SVar1;
}



/* Address: 0x10087e584 | FUN_10087e584 */

long FUN_10087e584(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == param_3) {
    lVar2 = 0;
  }
  else {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e60c);
      (*pcVar1)();
    }
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e610);
      (*pcVar1)();
    }
    if (*(ulong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e614);
      (*pcVar1)();
    }
    param_1 = param_1 + param_2 * 0x18;
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e618);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _swift_retain(lVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  return lVar2;
}



/* Address: 0x10087e618 | FUN_10087e618 */

undefined1  [16] FUN_10087e618(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (param_2 == param_3) {
    uVar3 = 0;
    lVar2 = 0x22;
  }
  else {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e688);
      (*pcVar1)();
    }
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e68c);
      (*pcVar1)();
    }
    if (*(ulong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e690);
      (*pcVar1)();
    }
    param_1 = param_1 + param_2 * 0x10;
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0x22) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e694);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_100881fec(uVar3,lVar2);
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Address: 0x10087e694 | FUN_10087e694 */

void FUN_10087e694(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined2 uStack_28;
  byte bStack_26;
  
  if (param_3 == param_4) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((long)param_1 + 0x42) = 0xff;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e748);
      (*pcVar1)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e74c);
      (*pcVar1)();
    }
    if (*(ulong *)(param_2 + 0x10) <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e750);
      (*pcVar1)();
    }
    FUN_1000f8cac(param_2 + param_3 * 0x48 + 0x20,&local_68,&DAT_100fe90d0,&DAT_100c7f500);
    if (0xfe < bStack_26) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087e754);
      (*pcVar1)();
    }
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = CONCAT17(uStack_29,uStack_30);
    param_1[6] = local_38;
    *(uint *)((long)param_1 + 0x3f) = CONCAT13(bStack_26,CONCAT21(uStack_28,uStack_29));
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x10087e754 | FUN_10087e754 */

void FUN_10087e754(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e874);
    (*pcVar2)();
  }
  FUN_100892624(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e878);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e87c);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_100881294();
  _swift_release(lVar3);
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e884);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_100881294();
    _swift_release(lVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    lVar4 = lVar4 - lVar5;
    if (-1 < lVar4) {
      FUN_1008813b8(lVar4,0,0x22);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e888);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e880);
  (*pcVar2)();
}



/* Address: 0x10087e888 | FUN_10087e888 */

void FUN_10087e888(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9ac);
    (*pcVar2)();
  }
  FUN_100892640(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9b0);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9b4);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_100881608();
  _swift_release(lVar3);
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9bc);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_100881608();
    _swift_release(lVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    lVar4 = lVar4 - lVar5;
    if (-1 < lVar4) {
      FUN_100881730(lVar4,0,0,0);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9c0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e9b8);
  (*pcVar2)();
}



/* Address: 0x10087e9c0 | FUN_10087e9c0 */

void FUN_10087e9c0(void)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_98 [9];
  undefined2 local_50;
  undefined1 local_4e;
  undefined *local_48;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x10) * 2;
  if (lVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eadc);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008926b0(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eae0);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eae4);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_10087f940();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eaec);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_10087f940();
    lVar4 = *(long *)(local_48 + 0x10);
    local_98[6] = 0;
    local_98[5] = 0;
    local_98[8] = 0;
    local_98[7] = 0;
    local_98[2] = 0;
    local_98[1] = 0;
    local_98[4] = 0;
    local_98[3] = 0;
    local_4e = 0xff;
    local_50 = 0;
    local_98[0] = lVar3 - lVar4;
    if (-1 < local_98[0]) {
      FUN_10087f55c(local_98);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eaf0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087eae8);
  (*pcVar1)();
}



/* Address: 0x10087eaf0 | FUN_10087eaf0 */

void FUN_10087eaf0(void)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_98 [9];
  undefined2 local_50;
  undefined *local_48;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x10) * 2;
  if (lVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec08);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008926e8(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec0c);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec10);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_10087fd00();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec18);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_10087fd00();
    lVar4 = *(long *)(local_48 + 0x10);
    local_98[6] = 0;
    local_98[5] = 0;
    local_98[8] = 0;
    local_98[7] = 0;
    local_98[2] = 0;
    local_98[1] = 0;
    local_98[4] = 0;
    local_98[3] = 0;
    local_50 = 0xff00;
    local_98[0] = lVar3 - lVar4;
    if (-1 < local_98[0]) {
      FUN_1008800cc(local_98);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec1c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ec14);
  (*pcVar1)();
}



/* Address: 0x10087ec1c | FUN_10087ec1c */

void FUN_10087ec1c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long lStack_1f0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined2 uStack_198;
  byte bStack_196;
  long local_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  undefined7 uStack_158;
  undefined1 local_151;
  undefined2 uStack_150;
  byte bStack_14e;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined2 uStack_100;
  byte bStack_fe;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  long local_a0;
  long local_98;
  ulong local_90;
  uint local_88;
  short local_84;
  char local_82;
  byte local_81;
  code *local_80;
  
  lVar7 = param_1[2] - param_1[1];
  if (param_1[2] < param_1[1]) {
    lVar7 = lVar7 + *(long *)(*param_1 + 0x10);
  }
  lVar12 = *unaff_x20;
  lVar9 = *(long *)(lVar12 + 0x10);
  if (SCARRY8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f110);
    (*pcVar1)();
  }
  lVar2 = lVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar12;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar12 + 0x18) >> 1, (long)uVar6 < lVar9 + lVar7)) {
    FUN_1008926b0();
    lVar12 = *unaff_x20;
    uVar6 = *(ulong *)(lVar12 + 0x18) >> 1;
  }
  plVar11 = (long *)(uVar6 - *(long *)(lVar12 + 0x10));
  plVar3 = &local_a0;
  FUN_100880dd4(plVar3,lVar12 + *(long *)(lVar12 + 0x10) * 0x48 + 0x20,plVar11);
  if ((long)plVar3 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f114);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar12 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f118);
      (*pcVar1)();
    }
    *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar11) {
    uVar6 = *(ulong *)(lVar12 + 0x10);
    FUN_10088104c(&local_f0);
    FUN_1000f8cac(&local_f0,&local_140,&DAT_100fe9578,&DAT_100c7fcf0);
    while (bStack_fe != 0xfe) {
      FUN_1000fb4c4(&local_140,&DAT_100fe9578,&DAT_100c7fcf0);
      if ((long)(*(ulong *)(lVar12 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_1008926b0(1 < *(ulong *)(lVar12 + 0x18),uVar6 + 1,1);
      }
      lVar12 = *unaff_x20;
      uVar8 = *(ulong *)(lVar12 + 0x18);
      FUN_1000f8cac(&local_f0,&local_190,&DAT_100fe9578,&DAT_100c7fcf0);
      if (bStack_14e != 0xfe) {
        uVar8 = uVar8 >> 1;
        uVar13 = uVar6;
        if ((long)uVar6 <= (long)uVar8) {
          uVar13 = uVar8;
        }
        plVar3 = (long *)(lVar12 + uVar6 * 0x48 + 0x20);
        do {
          lStack_118 = lStack_168;
          local_120 = local_170;
          uStack_108 = uStack_158;
          lStack_110 = lStack_160;
          local_101 = local_151;
          uStack_100 = uStack_150;
          bStack_fe = bStack_14e;
          lStack_138 = lStack_188;
          local_140 = local_190;
          lStack_128 = lStack_178;
          local_130 = lStack_180;
          if (uVar13 == uVar6) {
            FUN_1000fb4c4(&local_140,&DAT_100fe90d0,&DAT_100c7f500);
            goto LAB_10087ee08;
          }
          FUN_1000fb4c4(&local_f0,&DAT_100fe9578,&DAT_100c7fcf0);
          lVar7 = local_98;
          plVar3[1] = lStack_138;
          *plVar3 = local_140;
          plVar3[3] = lStack_128;
          plVar3[2] = local_130;
          plVar3[5] = lStack_118;
          plVar3[4] = local_120;
          *(uint *)((long)plVar3 + 0x3f) = CONCAT13(bStack_fe,CONCAT21(uStack_100,local_101));
          plVar3[7] = CONCAT17(local_101,uStack_108);
          plVar3[6] = lStack_110;
          if ((long)local_90 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f100);
            (*pcVar1)();
          }
          if (local_90 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f104);
            (*pcVar1)();
          }
          uVar8 = (ulong)local_88;
          if ((((local_88 == (uint)local_90) && (local_84 == -1)) && (local_82 == -1)) &&
             ((((long)local_90 < local_98 ^ local_81) & 1) != 0)) {
            lStack_168 = 0;
            local_170 = 0;
            uStack_158 = 0;
            local_151 = 0;
            lStack_160 = 0;
            lStack_188 = 0;
            local_190 = 0;
            lStack_178 = 0;
            lStack_180 = 0;
            bStack_14e = 0xff;
            uStack_150 = 0;
          }
          else {
            uVar10 = *(ulong *)(local_a0 + 0x10);
            if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f108);
              (*pcVar1)();
            }
            FUN_1000f8cac(local_a0 + (ulong)local_88 * 0x48 + 0x20,&local_1d8,&DAT_100fe90d0,
                          &DAT_100c7f500);
            if (0xfe < bStack_196) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f11c);
              (*pcVar1)();
            }
            lStack_168 = lStack_1b0;
            local_170 = local_1b8;
            uStack_158 = uStack_1a0;
            lStack_160 = local_1a8;
            local_151 = uStack_199;
            uStack_150 = uStack_198;
            bStack_14e = bStack_196;
            lStack_188 = lStack_1d0;
            local_190 = local_1d8;
            lStack_178 = lStack_1c0;
            lStack_180 = local_1c8;
            uVar8 = uVar10 - 1 & uVar8 + 1;
            if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f10c);
              (*pcVar1)();
            }
            local_88 = (uint)uVar8;
            local_81 = lVar7 <= (long)uVar8;
            local_84 = -1;
            local_82 = -1;
          }
          pcVar1 = local_80;
          FUN_1000f8cac(&local_190,&local_1d8,&DAT_100fe90d0,&DAT_100c7f500);
          if (bStack_196 < 0xff) {
            lStack_1f8 = lStack_1b0;
            local_200 = local_1b8;
            lStack_1f0 = local_1a8;
            lStack_218 = lStack_1d0;
            local_220 = local_1d8;
            lStack_208 = lStack_1c0;
            lStack_210 = local_1c8;
            (*pcVar1)(&local_f0,&local_220);
            FUN_10088209c(&local_220);
            FUN_1000fb4c4(&local_190,&DAT_100fe90d0,&DAT_100c7f500);
          }
          else {
            FUN_1000fb4c4(&local_190,&DAT_100fe90d0,&DAT_100c7f500);
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            local_ae = 0xfe;
            local_b0 = 0;
          }
          FUN_1000f8cac(&local_f0,&local_190,&DAT_100fe9578,&DAT_100c7fcf0);
          plVar3 = plVar3 + 9;
          uVar6 = uVar6 + 1;
        } while (bStack_14e != 0xfe);
      }
      FUN_1000fb4c4(&local_190,&DAT_100fe9578,&DAT_100c7fcf0);
      uVar13 = uVar6;
LAB_10087ee08:
      *(ulong *)(lVar12 + 0x10) = uVar13;
      FUN_1000f8cac(&local_f0,&local_140,&DAT_100fe9578,&DAT_100c7fcf0);
      uVar6 = uVar13;
    }
    puVar4 = &DAT_100fe9578;
    puVar5 = &DAT_100c7fcf0;
    FUN_1000fb4c4(&local_f0,&DAT_100fe9578,&DAT_100c7fcf0);
    FUN_1000fb4c4(&local_a0,&DAT_100fe9580,&DAT_100c7fcf8);
    plVar3 = &local_140;
  }
  else {
    puVar4 = &DAT_100fe9580;
    puVar5 = &DAT_100c7fcf8;
    plVar3 = &local_a0;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar12;
  return;
}



/* Address: 0x10087f11c | FUN_10087f11c */

void FUN_10087f11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  byte bStack_186;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined7 uStack_148;
  undefined1 local_141;
  undefined2 uStack_140;
  char cStack_13e;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined2 uStack_f0;
  char cStack_ee;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  long local_90;
  ulong local_88;
  code *local_80;
  undefined8 local_78;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar11 = *unaff_x20;
  lVar6 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f554);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar2 == 0) || (uVar4 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar4 < lVar6 + lVar5)) {
    FUN_1008926b0();
    lVar11 = *unaff_x20;
    uVar4 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar7 = (long *)(uVar4 - *(long *)(lVar11 + 0x10));
  plVar3 = &local_90;
  FUN_100880bb8(plVar3,lVar11 + *(long *)(lVar11 + 0x10) * 0x48 + 0x20,plVar7,param_1,param_2,
                param_3);
  if ((long)plVar3 < lVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f558);
    (*pcVar1)();
  }
  if (plVar3 != (long *)0x0) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f55c);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar7) {
    uVar4 = *(ulong *)(lVar11 + 0x10);
    FUN_100880f24(&local_e0);
    FUN_1000f8cac(&local_e0,&local_130,&DAT_100fe9578,&DAT_100c7fcf0);
    if (cStack_ee != -2) {
      uVar10 = local_88;
      do {
        FUN_1000fb4c4(&local_130,&DAT_100fe9578,&DAT_100c7fcf0);
        if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar4 + 1)) {
          FUN_1008926b0(1 < *(ulong *)(lVar11 + 0x18),uVar4 + 1,1);
        }
        lVar11 = *unaff_x20;
        uVar8 = *(ulong *)(lVar11 + 0x18);
        FUN_1000f8cac(&local_e0,&local_180,&DAT_100fe9578,&DAT_100c7fcf0);
        if (cStack_13e != -2) {
          uVar8 = uVar8 >> 1;
          uVar12 = uVar4;
          if ((long)uVar4 <= (long)uVar8) {
            uVar12 = uVar8;
          }
          puVar9 = (undefined8 *)(lVar11 + uVar4 * 0x48 + 0x20);
          do {
            uStack_108 = uStack_158;
            local_110 = local_160;
            uStack_f8 = uStack_148;
            uStack_100 = uStack_150;
            local_f1 = local_141;
            uStack_f0 = uStack_140;
            cStack_ee = cStack_13e;
            uStack_128 = uStack_178;
            local_130 = local_180;
            uStack_118 = uStack_168;
            local_120 = uStack_170;
            if (uVar12 == uVar4) {
              FUN_1000fb4c4(&local_130,&DAT_100fe90d0,&DAT_100c7f500);
              goto LAB_10087f2b8;
            }
            FUN_1000fb4c4(&local_e0,&DAT_100fe9578,&DAT_100c7fcf0);
            puVar9[1] = uStack_128;
            *puVar9 = local_130;
            *(uint *)((long)puVar9 + 0x3f) = CONCAT13(cStack_ee,CONCAT21(uStack_f0,local_f1));
            puVar9[5] = uStack_108;
            puVar9[4] = local_110;
            puVar9[7] = CONCAT17(local_f1,uStack_f8);
            puVar9[6] = uStack_100;
            puVar9[3] = uStack_118;
            puVar9[2] = local_120;
            if (uVar10 == *(ulong *)(local_90 + 0x10)) {
              uStack_158 = 0;
              local_160 = 0;
              uStack_148 = 0;
              local_141 = 0;
              uStack_150 = 0;
              uStack_178 = 0;
              local_180 = 0;
              uStack_168 = 0;
              uStack_170 = 0;
              cStack_13e = -1;
              uStack_140 = 0;
            }
            else {
              if (*(ulong *)(local_90 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f550);
                (*pcVar1)();
              }
              FUN_100882060(local_90 + 0x20 + uVar10 * 0x48,&local_180);
              uVar10 = uVar10 + 1;
            }
            FUN_1000f8cac(&local_180,&local_1c8,&DAT_100fe90d0,&DAT_100c7f500);
            if (bStack_186 < 0xff) {
              uStack_1e8 = uStack_1a0;
              local_1f0 = local_1a8;
              uStack_1e0 = local_198;
              uStack_208 = uStack_1c0;
              local_210 = local_1c8;
              uStack_1f8 = uStack_1b0;
              uStack_200 = local_1b8;
              (*local_80)(&local_e0,&local_210);
              FUN_10088209c(&local_210);
              FUN_1000fb4c4(&local_180,&DAT_100fe90d0,&DAT_100c7f500);
            }
            else {
              FUN_1000fb4c4(&local_180,&DAT_100fe90d0,&DAT_100c7f500);
              uStack_d8 = 0;
              local_e0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_9e = 0xfe;
              local_a0 = 0;
            }
            FUN_1000f8cac(&local_e0,&local_180,&DAT_100fe9578,&DAT_100c7fcf0);
            puVar9 = puVar9 + 9;
            uVar4 = uVar4 + 1;
          } while (cStack_13e != -2);
        }
        FUN_1000fb4c4(&local_180,&DAT_100fe9578,&DAT_100c7fcf0);
        uVar12 = uVar4;
LAB_10087f2b8:
        *(ulong *)(lVar11 + 0x10) = uVar12;
        FUN_1000f8cac(&local_e0,&local_130,&DAT_100fe9578,&DAT_100c7fcf0);
        uVar4 = uVar12;
      } while (cStack_ee != -2);
    }
    FUN_1000fb4c4(&local_e0,&DAT_100fe9578,&DAT_100c7fcf0);
    _swift_release(local_78);
    _swift_bridgeObjectRelease(local_90);
    FUN_1000fb4c4(&local_130,&DAT_100fe9578,&DAT_100c7fcf0);
  }
  else {
    _swift_bridgeObjectRelease(local_90);
    _swift_release(local_78);
  }
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x10087f55c | FUN_10087f55c */

void FUN_10087f55c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined2 uStack_168;
  char cStack_166;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  undefined7 uStack_128;
  undefined1 local_121;
  undefined2 uStack_120;
  char cStack_11e;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  long local_c8;
  undefined1 auStack_c0 [72];
  long local_78;
  
  lVar11 = *param_1;
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f934);
    (*pcVar1)();
  }
  lVar2 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar6 < lVar8 + lVar11)) {
    FUN_1008926b0();
    lVar7 = *unaff_x20;
    uVar6 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  plVar9 = (long *)(uVar6 - *(long *)(lVar7 + 0x10));
  plVar3 = &local_c8;
  FUN_1008804ac(plVar3,param_1,lVar7 + *(long *)(lVar7 + 0x10) * 0x48 + 0x20,plVar9);
  FUN_1000fb4c4(param_1,&DAT_100fe9568,&DAT_100c7fcd8);
  if ((long)plVar3 < lVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f938);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f93c);
      (*pcVar1)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar9) {
    uVar6 = *(ulong *)(lVar7 + 0x10);
    if (local_78 == local_c8) {
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_ce = 0xfe;
      local_d0 = 0;
      lVar8 = local_c8;
    }
    else {
      if ((local_78 < 0) || (local_c8 <= local_78)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f940);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fe90d0,&DAT_100c7f500);
      lVar8 = local_78 + 1;
      local_78 = lVar8;
    }
    FUN_1000f8cac(&local_110,&local_160,&DAT_100fe9578,&DAT_100c7fcf0);
    while (cStack_11e != -2) {
      FUN_1000fb4c4(&local_160,&DAT_100fe9578,&DAT_100c7fcf0);
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_1008926b0(1 < *(ulong *)(lVar7 + 0x18),uVar6 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar10 = *(ulong *)(lVar7 + 0x18);
      FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fe9578,&DAT_100c7fcf0);
      if (cStack_166 != -2) {
        uVar10 = uVar10 >> 1;
        uVar12 = uVar6;
        if ((long)uVar6 <= (long)uVar10) {
          uVar12 = uVar10;
        }
        plVar3 = (long *)(lVar7 + uVar6 * 0x48 + 0x20);
        do {
          lStack_138 = lStack_180;
          local_140 = local_188;
          uStack_128 = uStack_170;
          lStack_130 = local_178;
          local_121 = uStack_169;
          uStack_120 = uStack_168;
          cStack_11e = cStack_166;
          lStack_158 = lStack_1a0;
          local_160 = local_1a8;
          lStack_148 = lStack_190;
          local_150 = local_198;
          if (uVar12 == uVar6) {
            FUN_1000fb4c4(&local_160,&DAT_100fe90d0,&DAT_100c7f500);
            goto LAB_10087f788;
          }
          FUN_1000fb4c4(&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
          plVar3[1] = lStack_158;
          *plVar3 = local_160;
          *(uint *)((long)plVar3 + 0x3f) = CONCAT13(cStack_11e,CONCAT21(uStack_120,local_121));
          plVar3[5] = lStack_138;
          plVar3[4] = local_140;
          plVar3[7] = CONCAT17(local_121,uStack_128);
          plVar3[6] = lStack_130;
          plVar3[3] = lStack_148;
          plVar3[2] = local_150;
          if (lVar8 == local_c8) {
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            local_ce = 0xfe;
            local_d0 = 0;
            lVar8 = local_c8;
          }
          else {
            if ((lVar8 < 0) || (local_c8 <= lVar8)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10087f930);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fe90d0,&DAT_100c7f500);
            local_78 = lVar8 + 1;
            lVar8 = local_78;
          }
          FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fe9578,&DAT_100c7fcf0);
          plVar3 = plVar3 + 9;
          uVar6 = uVar6 + 1;
        } while (cStack_166 != -2);
      }
      FUN_1000fb4c4(&local_1a8,&DAT_100fe9578,&DAT_100c7fcf0);
      uVar12 = uVar6;
LAB_10087f788:
      *(ulong *)(lVar7 + 0x10) = uVar12;
      FUN_1000f8cac(&local_110,&local_160,&DAT_100fe9578,&DAT_100c7fcf0);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100fe9578;
    puVar5 = &DAT_100c7fcf0;
    FUN_1000fb4c4(&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
    FUN_1000fb4c4(&local_c8,&DAT_100fe9570,&DAT_100c7fce0);
    plVar3 = &local_160;
  }
  else {
    puVar4 = &DAT_100fe9570;
    puVar5 = &DAT_100c7fce0;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x10087f940 | FUN_10087f940 */

void FUN_10087f940(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined2 uStack_118;
  char cStack_116;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined2 uStack_d0;
  char cStack_ce;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined1 local_7e;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fcf0);
    (*pcVar2)();
  }
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fcf4);
    (*pcVar2)();
  }
  lVar3 = lVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar9;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar9 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_1008926b0();
    lVar9 = *unaff_x20;
    uVar5 = *(ulong *)(lVar9 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar9 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fcf8);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_10087fa68:
      uVar5 = *(ulong *)(lVar9 + 0x10);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_7e = 0xfe;
      local_80 = 0;
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
      while (cStack_ce != -2) {
        FUN_1000fb4c4(&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
        if ((long)(*(ulong *)(lVar9 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_1008926b0(1 < *(ulong *)(lVar9 + 0x18),uVar5 + 1,1);
        }
        lVar9 = *unaff_x20;
        uVar6 = *(ulong *)(lVar9 + 0x18);
        FUN_1000f8cac(&local_c0,&local_158,&DAT_100fe9578,&DAT_100c7fcf0);
        if (cStack_116 != -2) {
          uVar6 = uVar6 >> 1;
          uVar10 = uVar5;
          if ((long)uVar5 <= (long)uVar6) {
            uVar10 = uVar6;
          }
          puVar8 = (undefined8 *)(lVar9 + uVar5 * 0x48 + 0x20);
          do {
            uStack_e8 = uStack_130;
            local_f0 = local_138;
            uStack_d8 = uStack_120;
            uStack_e0 = local_128;
            local_d1 = uStack_119;
            uStack_d0 = uStack_118;
            cStack_ce = cStack_116;
            uStack_108 = uStack_150;
            local_110 = local_158;
            uStack_f8 = uStack_140;
            local_100 = local_148;
            if (uVar10 == uVar5) {
              FUN_1000fb4c4(&local_110,&DAT_100fe90d0,&DAT_100c7f500);
              goto LAB_10087fb3c;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100fe9578,&DAT_100c7fcf0);
            puVar8[1] = uStack_108;
            *puVar8 = local_110;
            *(uint *)((long)puVar8 + 0x3f) = CONCAT13(cStack_ce,CONCAT21(uStack_d0,local_d1));
            puVar8[5] = uStack_e8;
            puVar8[4] = local_f0;
            puVar8[7] = CONCAT17(local_d1,uStack_d8);
            puVar8[6] = uStack_e0;
            puVar8[3] = uStack_f8;
            puVar8[2] = local_100;
            if (uVar11 == param_4) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_7e = 0xfe;
              local_80 = 0;
              uVar11 = param_4;
            }
            else {
              if (((long)uVar11 < (long)param_3) || ((long)param_4 <= (long)uVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fcec);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x48,&local_c0,&DAT_100fe90d0,&DAT_100c7f500);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_158,&DAT_100fe9578,&DAT_100c7fcf0);
            puVar8 = puVar8 + 9;
            uVar5 = uVar5 + 1;
          } while (cStack_116 != -2);
        }
        FUN_1000fb4c4(&local_158,&DAT_100fe9578,&DAT_100c7fcf0);
        uVar10 = uVar5;
LAB_10087fb3c:
        *(ulong *)(lVar9 + 0x10) = uVar10;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
        uVar5 = uVar10;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100fe9578,&DAT_100c7fcf0);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
      goto LAB_10087faf0;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fcfc);
      (*pcVar2)();
    }
    puVar4 = &DAT_100fe90d0;
    FUN_1000f7830(&DAT_100fe90d0,&DAT_100c7f500);
    _swift_arrayInitWithCopy(lVar9 + uVar6 * 0x48 + 0x20,param_2 + param_3 * 0x48,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar9 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087fd00);
        (*pcVar2)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_10087fa68;
  }
  _swift_unknownObjectRelease(param_1);
LAB_10087faf0:
  *unaff_x20 = lVar9;
  return;
}



/* Address: 0x10087fd00 | FUN_10087fd00 */

void FUN_10087fd00(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800bc);
    (*pcVar2)();
  }
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800c0);
    (*pcVar2)();
  }
  lVar3 = lVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar10;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar10 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_1008926e8();
    lVar10 = *unaff_x20;
    uVar5 = *(ulong *)(lVar10 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar10 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800c4);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_10087fe3c:
      uVar5 = *(ulong *)(lVar10 + 0x10);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_80 = 0xfe00;
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
      while (local_d0._1_1_ != -2) {
        FUN_1000fb4c4(&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
        if ((long)(*(ulong *)(lVar10 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_1008926e8(1 < *(ulong *)(lVar10 + 0x18),uVar5 + 1,1);
        }
        lVar10 = *unaff_x20;
        uVar6 = *(ulong *)(lVar10 + 0x18);
        FUN_1000f8cac(&local_c0,&local_158,&DAT_100fe9560,&DAT_100c7fcd0);
        if (local_118._1_1_ != -2) {
          uVar6 = uVar6 >> 1;
          uVar8 = uVar5;
          if ((long)uVar5 <= (long)uVar6) {
            uVar8 = uVar6;
          }
          puVar9 = (undefined8 *)(lVar10 + uVar5 * 0x48 + 0x20);
          do {
            uStack_e8 = uStack_130;
            local_f0 = local_138;
            uStack_d8 = uStack_120;
            uStack_e0 = local_128;
            local_d0 = local_118;
            uStack_108 = uStack_150;
            local_110 = local_158;
            uStack_f8 = uStack_140;
            local_100 = local_148;
            if (uVar8 == uVar5) {
              FUN_1000fb4c4(&local_110,&DAT_100fe90d8,&DAT_100c81b10);
              goto LAB_10087ff10;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100fe9560,&DAT_100c7fcd0);
            puVar9[1] = uStack_108;
            *puVar9 = local_110;
            *(undefined2 *)(puVar9 + 8) = local_d0;
            puVar9[5] = uStack_e8;
            puVar9[4] = local_f0;
            puVar9[7] = uStack_d8;
            puVar9[6] = uStack_e0;
            puVar9[3] = uStack_f8;
            puVar9[2] = local_100;
            if (uVar11 == param_4) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_80 = 0xfe00;
              uVar11 = param_4;
            }
            else {
              if (((long)uVar11 < (long)param_3) || ((long)param_4 <= (long)uVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800b8);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x48,&local_c0,&DAT_100fe90d8,&DAT_100c81b10);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_158,&DAT_100fe9560,&DAT_100c7fcd0);
            puVar9 = puVar9 + 9;
            uVar5 = uVar5 + 1;
          } while (local_118._1_1_ != -2);
        }
        FUN_1000fb4c4(&local_158,&DAT_100fe9560,&DAT_100c7fcd0);
        uVar8 = uVar5;
LAB_10087ff10:
        *(ulong *)(lVar10 + 0x10) = uVar8;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
        uVar5 = uVar8;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100fe9560,&DAT_100c7fcd0);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
      goto LAB_10087fec0;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800c8);
      (*pcVar2)();
    }
    puVar4 = &DAT_100fe90d8;
    FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
    _swift_arrayInitWithCopy(lVar10 + uVar6 * 0x48 + 0x20,param_2 + param_3 * 0x48,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar10 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008800cc);
        (*pcVar2)();
      }
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_10087fe3c;
  }
  _swift_unknownObjectRelease(param_1);
LAB_10087fec0:
  *unaff_x20 = lVar10;
  return;
}



/* Address: 0x1008800cc | FUN_1008800cc */

void FUN_1008800cc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined2 local_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined2 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  long local_c8;
  undefined1 auStack_c0 [72];
  long local_78;
  
  lVar7 = *param_1;
  lVar11 = *unaff_x20;
  lVar9 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008804a0);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar6 < lVar9 + lVar7)) {
    FUN_1008926e8();
    lVar11 = *unaff_x20;
    uVar6 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar10 = (long *)(uVar6 - *(long *)(lVar11 + 0x10));
  plVar3 = &local_c8;
  FUN_1008805e8(plVar3,param_1,lVar11 + *(long *)(lVar11 + 0x10) * 0x48 + 0x20,plVar10);
  FUN_1000fb4c4(param_1,&DAT_100fe9550,&DAT_100c7fcc0);
  if ((long)plVar3 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008804a4);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008804a8);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar10) {
    uVar6 = *(ulong *)(lVar11 + 0x10);
    if (local_78 == local_c8) {
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_d0 = 0xfe00;
      lVar7 = local_c8;
    }
    else {
      if ((local_78 < 0) || (local_c8 <= local_78)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008804ac);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fe90d8,&DAT_100c81b10);
      lVar7 = local_78 + 1;
      local_78 = lVar7;
    }
    FUN_1000f8cac(&local_110,&local_160,&DAT_100fe9560,&DAT_100c7fcd0);
    while (local_120._1_1_ != -2) {
      FUN_1000fb4c4(&local_160,&DAT_100fe9560,&DAT_100c7fcd0);
      if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_1008926e8(1 < *(ulong *)(lVar11 + 0x18),uVar6 + 1,1);
      }
      lVar11 = *unaff_x20;
      uVar8 = *(ulong *)(lVar11 + 0x18);
      FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fe9560,&DAT_100c7fcd0);
      if (local_168._1_1_ != -2) {
        uVar8 = uVar8 >> 1;
        uVar12 = uVar6;
        if ((long)uVar6 <= (long)uVar8) {
          uVar12 = uVar8;
        }
        plVar3 = (long *)(lVar11 + uVar6 * 0x48 + 0x20);
        do {
          lStack_138 = lStack_180;
          local_140 = local_188;
          lStack_128 = lStack_170;
          lStack_130 = local_178;
          local_120 = local_168;
          lStack_158 = lStack_1a0;
          local_160 = local_1a8;
          lStack_148 = lStack_190;
          local_150 = local_198;
          if (uVar12 == uVar6) {
            FUN_1000fb4c4(&local_160,&DAT_100fe90d8,&DAT_100c81b10);
            goto LAB_1008802f8;
          }
          FUN_1000fb4c4(&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
          plVar3[1] = lStack_158;
          *plVar3 = local_160;
          *(undefined2 *)(plVar3 + 8) = local_120;
          plVar3[5] = lStack_138;
          plVar3[4] = local_140;
          plVar3[7] = lStack_128;
          plVar3[6] = lStack_130;
          plVar3[3] = lStack_148;
          plVar3[2] = local_150;
          if (lVar7 == local_c8) {
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            local_d0 = 0xfe00;
            lVar7 = local_c8;
          }
          else {
            if ((lVar7 < 0) || (local_c8 <= lVar7)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10088049c);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fe90d8,&DAT_100c81b10);
            local_78 = lVar7 + 1;
            lVar7 = local_78;
          }
          FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fe9560,&DAT_100c7fcd0);
          plVar3 = plVar3 + 9;
          uVar6 = uVar6 + 1;
        } while (local_168._1_1_ != -2);
      }
      FUN_1000fb4c4(&local_1a8,&DAT_100fe9560,&DAT_100c7fcd0);
      uVar12 = uVar6;
LAB_1008802f8:
      *(ulong *)(lVar11 + 0x10) = uVar12;
      FUN_1000f8cac(&local_110,&local_160,&DAT_100fe9560,&DAT_100c7fcd0);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100fe9560;
    puVar5 = &DAT_100c7fcd0;
    FUN_1000fb4c4(&local_110,&DAT_100fe9560,&DAT_100c7fcd0);
    FUN_1000fb4c4(&local_c8,&DAT_100fe9558,&DAT_100c7fcc8);
    plVar3 = &local_160;
  }
  else {
    puVar4 = &DAT_100fe9558;
    puVar5 = &DAT_100c7fcc8;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x1008804ac | FUN_1008804ac */

ulong FUN_1008804ac(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined7 uStack_d0;
  undefined4 uStack_c9;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  FUN_1000f8cac(param_2,&local_c0,&DAT_100fe9568,&DAT_100c7fcd8);
  uVar1 = local_c0;
  local_70 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4;
    if (param_4 != 0) {
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008805e8);
        (*pcVar2)();
      }
      uVar3 = uVar1;
      if (local_c0 != 0) {
        uVar4 = local_c0 & ((long)local_c0 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = 1;
        uVar6 = local_c0;
        do {
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1008805e4);
            (*pcVar2)();
          }
          local_70 = uVar5;
          FUN_1000f8cac(&uStack_b8,&local_108,&DAT_100fe90d0,&DAT_100c7f500);
          param_3[1] = uStack_100;
          *param_3 = local_108;
          *(undefined4 *)((long)param_3 + 0x3f) = uStack_c9;
          param_3[5] = uStack_e0;
          param_3[4] = local_e8;
          param_3[7] = CONCAT17((undefined1)uStack_c9,uStack_d0);
          param_3[6] = local_d8;
          param_3[3] = uStack_f0;
          param_3[2] = local_f8;
          uVar3 = param_4;
          if (param_4 == uVar5) break;
          param_3 = param_3 + 9;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar1;
        } while (uVar6 != 0);
      }
    }
  }
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[10] = local_70;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return uVar3;
}



/* Address: 0x1008805e8 | FUN_1008805e8 */

ulong FUN_1008805e8(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  FUN_1000f8cac(param_2,&local_c0,&DAT_100fe9550,&DAT_100c7fcc0);
  uVar1 = local_c0;
  local_70 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4;
    if (param_4 != 0) {
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880724);
        (*pcVar2)();
      }
      uVar3 = uVar1;
      if (local_c0 != 0) {
        uVar4 = local_c0 & ((long)local_c0 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = 1;
        uVar6 = local_c0;
        do {
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100880720);
            (*pcVar2)();
          }
          local_70 = uVar5;
          FUN_1000f8cac(&uStack_b8,&local_108,&DAT_100fe90d8,&DAT_100c81b10);
          param_3[1] = uStack_100;
          *param_3 = local_108;
          *(undefined2 *)(param_3 + 8) = local_c8;
          param_3[5] = uStack_e0;
          param_3[4] = local_e8;
          param_3[7] = uStack_d0;
          param_3[6] = local_d8;
          param_3[3] = uStack_f0;
          param_3[2] = local_f8;
          uVar3 = param_4;
          if (param_4 == uVar5) break;
          param_3 = param_3 + 9;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar1;
        } while (uVar6 != 0);
      }
    }
  }
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[10] = local_70;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return uVar3;
}



/* Address: 0x100880724 | FUN_100880724 */

undefined * FUN_100880724(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10088082c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe9598;
    FUN_1000f7830(&DAT_100fe9598,&DAT_100c7fd10);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10088082c | thunk_FUN_100880a88 */

undefined * thunk_FUN_100880a88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880bb8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe9538;
    FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe9540;
    FUN_1000f7830(&DAT_100fe9540,&DAT_100c7fcb0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100880830 | FUN_100880830 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100880830(void)

{
  return ZEXT816(0x100fe91e8);
}



/* Address: 0x100880850 | FUN_100880850 */

undefined * FUN_100880850(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880980);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe9590;
    FUN_1000f7830(&DAT_100fe9590,&DAT_100c7fd08);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100880980 | FUN_100880980 */

undefined * FUN_100880980(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880a88);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe9548;
    FUN_1000f7830(&DAT_100fe9548,&DAT_100c80c70);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100880a88 | FUN_100880a88 */

undefined * FUN_100880a88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880bb8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe9538;
    FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe9540;
    FUN_1000f7830(&DAT_100fe9540,&DAT_100c7fcb0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100880bb8 | FUN_100880bb8 */

long FUN_100880bb8(long *param_1,undefined8 *param_2,long param_3,long param_4,code *param_5,
                  long param_6)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b1;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_169;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined2 uStack_d0;
  char cStack_ce;
  undefined4 uStack_81;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100880dd4);
      (*pcVar1)();
    }
    uVar4 = 0;
    lVar3 = 0;
    uVar2 = *(ulong *)(param_4 + 0x10);
    do {
      if (uVar4 == uVar2) {
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        local_11e = 0xff;
        local_120 = 0;
        uVar4 = uVar2;
      }
      else {
        if (*(ulong *)(param_4 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100880dd0);
          (*pcVar1)();
        }
        FUN_100882060(param_4 + 0x20 + uVar4 * 0x48,&local_160);
        uVar4 = uVar4 + 1;
      }
      FUN_1000f8cac(&local_160,&local_1a8,&DAT_100fe90d0,&DAT_100c7f500);
      if (0xfeffff < uStack_169._1_3_) {
        FUN_1000fb4c4(&local_160,&DAT_100fe90d0,&DAT_100c7f500);
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        local_d1 = 0;
        uStack_e0 = 0;
        cStack_ce = -2;
        uStack_d0 = 0;
LAB_100880d80:
        FUN_1000fb4c4(&local_110,&DAT_100fe9578,&DAT_100c7fcf0);
        param_3 = lVar3;
        break;
      }
      uStack_1c8 = uStack_180;
      local_1d0 = local_188;
      uStack_1c0 = local_178;
      local_1b1 = uStack_169;
      uStack_1e8 = uStack_1a0;
      local_1f0 = local_1a8;
      uStack_1d8 = uStack_190;
      uStack_1e0 = local_198;
      (*param_5)(&local_110,&local_1f0);
      FUN_10088209c(&local_1f0);
      FUN_1000fb4c4(&local_160,&DAT_100fe90d0,&DAT_100c7f500);
      if (cStack_ce == -2) goto LAB_100880d80;
      lVar3 = lVar3 + 1;
      uStack_81 = CONCAT31((int3)(CONCAT13(cStack_ce,CONCAT21(uStack_d0,local_d1)) >> 8),local_d1);
      param_2[5] = uStack_e8;
      param_2[4] = local_f0;
      param_2[7] = CONCAT17(local_d1,uStack_d8);
      param_2[6] = uStack_e0;
      *(undefined4 *)((long)param_2 + 0x3f) = uStack_81;
      param_2[1] = uStack_108;
      *param_2 = local_110;
      param_2[3] = uStack_f8;
      param_2[2] = uStack_100;
      param_2 = param_2 + 9;
    } while (param_3 != lVar3);
  }
  *param_1 = param_4;
  param_1[1] = uVar4;
  param_1[2] = (long)param_5;
  param_1[3] = param_6;
  return param_3;
}



/* Address: 0x100880dd4 | FUN_100880dd4 */

long FUN_100880dd4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined2 uStack_d8;
  char cStack_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_91;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_80 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uStack_58 = unaff_x20[4];
  local_60 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_78 = unaff_x20[1];
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100880f1c);
    (*pcVar2)();
  }
  if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100880f20);
    (*pcVar2)();
  }
  local_68 = (undefined4)uVar1;
  uStack_64 = 0x1ffffff;
  if (param_2 == (undefined8 *)0x0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100880f24);
      (*pcVar2)();
    }
    FUN_10088104c(&local_118);
    if (cStack_d6 == -2) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        uStack_a8 = uStack_f0;
        local_b0 = local_f8;
        uStack_91 = CONCAT31((int3)(CONCAT13(cStack_d6,CONCAT21(uStack_d8,uStack_d9)) >> 8),
                             uStack_d9);
        local_a0 = local_e8;
        uStack_c8 = uStack_110;
        local_d0 = local_118;
        uStack_b8 = uStack_100;
        uStack_c0 = local_108;
        param_2[5] = uStack_f0;
        param_2[4] = local_f8;
        param_2[7] = CONCAT17(uStack_d9,uStack_e0);
        param_2[6] = local_e8;
        *(undefined4 *)((long)param_2 + 0x3f) = uStack_91;
        param_2[1] = uStack_110;
        *param_2 = local_118;
        param_2[3] = uStack_100;
        param_2[2] = local_108;
        if (param_3 + -1 == lVar3) goto LAB_100880ee8;
        param_2 = param_2 + 9;
        FUN_10088104c(&local_118);
        lVar3 = lVar3 + 1;
      } while (cStack_d6 != -2);
    }
    param_3 = lVar3;
    FUN_1000fb4c4(&local_118,&DAT_100fe9578,&DAT_100c7fcf0);
  }
LAB_100880ee8:
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = CONCAT44(uStack_64,local_68);
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  return param_3;
}



/* Address: 0x100880f24 | FUN_100880f24 */

void FUN_100880f24(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char cStack_86;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined1 local_3e;
  
  uVar1 = unaff_x20[1];
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar1 == uVar3) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_3e = 0xff;
    local_40 = 0;
  }
  else {
    if (uVar3 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10088104c);
      (*pcVar2)();
    }
    FUN_100882060(*unaff_x20 + uVar1 * 0x48 + 0x20,&local_80);
    unaff_x20[1] = uVar1 + 1;
  }
  pcVar2 = (code *)unaff_x20[2];
  FUN_1000f8cac(&local_80,&local_c8,&DAT_100fe90d0,&DAT_100c7f500);
  if (cStack_86 == -1) {
    FUN_1000fb4c4(&local_80,&DAT_100fe90d0,&DAT_100c7f500);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0x42) = 0xfe;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    uStack_e8 = uStack_a0;
    local_f0 = local_a8;
    uStack_e0 = local_98;
    uStack_108 = uStack_c0;
    local_110 = local_c8;
    uStack_f8 = uStack_b0;
    uStack_100 = local_b8;
    (*pcVar2)(param_1,&local_110);
    FUN_10088209c(&local_110);
    FUN_1000fb4c4(&local_80,&DAT_100fe90d0,&DAT_100c7f500);
  }
  return;
}



/* Address: 0x10088104c | FUN_10088104c */

void FUN_10088104c(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined2 uStack_a8;
  byte bStack_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined2 uStack_60;
  byte bStack_5e;
  
  uVar3 = unaff_x20[2];
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100881238);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088123c);
    (*pcVar2)();
  }
  lVar4 = unaff_x20[1];
  uVar1 = *(uint *)(unaff_x20 + 3);
  if (((uVar1 == (uint)uVar3 && *(short *)((long)unaff_x20 + 0x1c) == -1) &&
      (*(char *)((long)unaff_x20 + 0x1e) == -1)) &&
     ((((long)uVar3 < lVar4 ^ *(byte *)((long)unaff_x20 + 0x1f)) & 1) != 0)) {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_61 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    bStack_5e = 0xff;
    uStack_60 = 0;
  }
  else {
    uVar3 = *(ulong *)(*unaff_x20 + 0x10);
    if (uVar3 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100881240);
      (*pcVar2)();
    }
    FUN_1000f8cac(*unaff_x20 + (ulong)uVar1 * 0x48 + 0x20,&local_e8,&DAT_100fe90d0,&DAT_100c7f500);
    if (0xfe < bStack_a6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100881248);
      (*pcVar2)();
    }
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    uStack_68 = uStack_b0;
    uStack_70 = local_b8;
    local_61 = uStack_a9;
    uStack_60 = uStack_a8;
    bStack_5e = bStack_a6;
    uStack_98 = uStack_e0;
    local_a0 = local_e8;
    uStack_88 = uStack_d0;
    uStack_90 = local_d8;
    uVar3 = uVar3 - 1 & (ulong)uVar1 + 1;
    if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100881244);
      (*pcVar2)();
    }
    *(int *)(unaff_x20 + 3) = (int)uVar3;
    *(undefined2 *)((long)unaff_x20 + 0x1c) = 0xffff;
    *(undefined1 *)((long)unaff_x20 + 0x1e) = 0xff;
    *(bool *)((long)unaff_x20 + 0x1f) = lVar4 <= (long)uVar3;
  }
  pcVar2 = (code *)unaff_x20[4];
  FUN_1000f8cac(&local_a0,&local_e8,&DAT_100fe90d0,&DAT_100c7f500);
  if (bStack_a6 == 0xff) {
    FUN_1000fb4c4(&local_a0,&DAT_100fe90d0,&DAT_100c7f500);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0x42) = 0xfe;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    uStack_108 = uStack_c0;
    local_110 = local_c8;
    uStack_100 = local_b8;
    uStack_128 = uStack_e0;
    local_130 = local_e8;
    uStack_118 = uStack_d0;
    uStack_120 = local_d8;
    (*pcVar2)(param_1,&local_130);
    FUN_10088209c(&local_130);
    FUN_1000fb4c4(&local_a0,&DAT_100fe90d0,&DAT_100c7f500);
  }
  return;
}



/* Address: 0x100881248 | FUN_100881248 */

String FUN_100881248(UnsafePointer<__int8> param_1)

{
  code *pcVar1;
  String SVar2;
  
  if ((uint)param_1.unknown < 0x2e) {
    SVar2.str = *(char **)(&DAT_100c7fd28 + ((ulong)param_1.unknown & 0xffffffff) * 8);
    SVar2.bridgeObject = *(void **)(&DAT_100c7fe98 + ((ulong)param_1.unknown & 0xffffffff) * 8);
    return SVar2;
  }
  FUN_100960d24();
  if (param_1.unknown != (undefined *)0x0) {
    SVar2 = Swift::String::init(param_1);
    return SVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100881294);
  (*pcVar1)();
}



/* Address: 0x100881294 | FUN_100881294 */

void FUN_100881294(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008813a0);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      FUN_100892624();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100881304);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008813b4);
        (*pcVar2)();
      }
      puVar4 = &DAT_100fe9530;
      FUN_1000f7830(&DAT_100fe9530,&DAT_100c7fca0);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x10 + 0x20,param_2 + param_3 * 0x10,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1008813b8);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008813a4);
  (*pcVar2)();
}



/* Address: 0x1008813b8 | FUN_1008813b8 */

void FUN_1008813b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815d8);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar5;
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar3 < (long)(lVar7 + param_1))) {
    FUN_100892624();
    lVar5 = *unaff_x20;
    uVar3 = *(ulong *)(lVar5 + 0x18) >> 1;
  }
  uVar4 = *(ulong *)(lVar5 + 0x10);
  uVar10 = uVar3 - uVar4;
  if (uVar10 == 0) {
    if (0 < (long)param_1) {
LAB_1008815d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815dc);
      (*pcVar1)();
    }
LAB_1008814a8:
    if (uVar10 != 0) goto LAB_1008815a8;
  }
  else {
    if (param_1 == 0) goto LAB_1008814a8;
    uVar9 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    lVar7 = ~uVar4 + uVar3;
    uVar3 = param_1;
    puVar11 = (undefined8 *)(lVar5 + uVar4 * 0x10 + 0x20);
    do {
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815d4);
        (*pcVar1)();
      }
      *puVar11 = param_2;
      puVar11[1] = param_3;
      if (lVar7 == 0) {
        FUN_100882050(param_2,param_3);
        uVar4 = uVar10;
        if ((long)uVar10 < (long)param_1) goto LAB_1008815d8;
        break;
      }
      FUN_100882050(param_2,param_3);
      uVar9 = uVar9 - 1;
      lVar7 = lVar7 + -1;
      uVar3 = uVar3 - 1;
      uVar4 = param_1;
      puVar11 = puVar11 + 2;
    } while (uVar3 != 0);
    if (SCARRY8(*(long *)(lVar5 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815e0);
      (*pcVar1)();
    }
    *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar4;
    if (uVar4 != uVar10) goto LAB_1008815a8;
  }
  if (uVar10 != param_1) {
    if ((long)param_1 <= (long)uVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815e4);
      (*pcVar1)();
    }
    uVar3 = *(ulong *)(lVar5 + 0x10);
    FUN_100882050(param_2,param_3);
    uVar10 = uVar10 + 1;
    do {
      if ((long)(*(ulong *)(lVar5 + 0x18) >> 1) < (long)(uVar3 + 1)) {
        FUN_100892624(1 < *(ulong *)(lVar5 + 0x18),uVar3 + 1,1);
      }
      lVar5 = *unaff_x20;
      uVar9 = *(ulong *)(lVar5 + 0x18) >> 1;
      lVar7 = uVar9 - uVar3;
      uVar4 = uVar10;
      if (lVar7 != 0 && (long)uVar3 <= (long)uVar9) {
        uVar4 = (uVar10 + uVar9) - uVar3;
        puVar11 = (undefined8 *)(lVar5 + uVar3 * 0x10 + 0x28);
        uVar8 = ~uVar3;
        uVar6 = uVar10;
        do {
          puVar11[-1] = param_2;
          *puVar11 = param_3;
          if (param_1 == uVar6) {
            *(ulong *)(lVar5 + 0x10) = -uVar8;
            goto LAB_1008815a8;
          }
          if (((long)uVar10 < 0) || ((long)param_1 <= (long)uVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1008815d0);
            (*pcVar1)();
          }
          uVar6 = uVar6 + 1;
          FUN_100882050(param_2,param_3);
          puVar11 = puVar11 + 2;
          uVar8 = uVar8 - 1;
          lVar7 = lVar7 + -1;
          uVar3 = uVar9;
        } while (lVar7 != 0);
      }
      *(ulong *)(lVar5 + 0x10) = uVar3;
      uVar10 = uVar4;
    } while( true );
  }
LAB_1008815a8:
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x1008815e4 | FUN_1008815e4 */

undefined1 FUN_1008815e4(int param_1)

{
  if (param_1 - 1U < 0x1e) {
    return (&DAT_100c80008)[param_1 - 1U];
  }
  return 0x18;
}



/* Address: 0x100881608 | FUN_100881608 */

void FUN_100881608(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100881718);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      FUN_100892640();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100881678);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10088172c);
        (*pcVar2)();
      }
      puVar4 = &DAT_100fe95a0;
      FUN_1000f7830(&DAT_100fe95a0,&DAT_100c809a0);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x18 + 0x20,param_2 + param_3 * 0x18,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100881730);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10088171c);
  (*pcVar2)();
}



/* Address: 0x100881730 | FUN_100881730 */

void FUN_100881730(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar11 = *unaff_x20;
  lVar8 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar8,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100881998);
    (*pcVar1)();
  }
  lVar4 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar4 == 0) ||
     (uVar3 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar3 < (long)(lVar8 + param_1))) {
    FUN_100892640();
    lVar11 = *unaff_x20;
    uVar3 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  uVar5 = *(ulong *)(lVar11 + 0x10);
  uVar13 = uVar3 - uVar5;
  if (uVar13 == 0) {
    if (0 < (long)param_1) {
LAB_100881998:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10088199c);
      (*pcVar1)();
    }
LAB_100881840:
    uVar3 = 0;
    if (uVar13 != 0) goto LAB_100881968;
  }
  else {
    if (param_1 == 0) goto LAB_100881840;
    uVar12 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    puVar9 = (undefined8 *)(lVar11 + uVar5 * 0x18 + 0x20);
    lVar8 = ~uVar5 + uVar3;
    uVar6 = param_1;
    do {
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100881994);
        (*pcVar1)();
      }
      *puVar9 = param_2;
      puVar9[1] = param_3;
      *(char *)(puVar9 + 2) = (char)param_4;
      if (lVar8 == 0) {
        FUN_1008820d0(param_2,param_3,param_4);
        uVar3 = uVar13;
        if ((long)uVar13 < (long)param_1) goto LAB_100881998;
        break;
      }
      FUN_1008820d0(param_2,param_3,param_4);
      uVar12 = uVar12 - 1;
      lVar8 = lVar8 + -1;
      puVar9 = puVar9 + 3;
      uVar6 = uVar6 - 1;
      uVar3 = param_1;
    } while (uVar6 != 0);
    bVar2 = SCARRY8(uVar5,uVar3);
    uVar5 = uVar5 + uVar3;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008819a4);
      (*pcVar1)();
    }
    *(ulong *)(lVar11 + 0x10) = uVar5;
    if (uVar3 != uVar13) goto LAB_100881968;
  }
  if (uVar3 != param_1) {
    if ((long)param_1 <= (long)uVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008819a0);
      (*pcVar1)();
    }
    FUN_1008820d0(param_2,param_3,param_4);
    lVar8 = uVar13 + 1;
    do {
      if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar5 + 1)) {
        FUN_100892640(1 < *(ulong *)(lVar11 + 0x18),uVar5 + 1,1);
      }
      lVar11 = *unaff_x20;
      uVar13 = *(ulong *)(lVar11 + 0x18) >> 1;
      uVar3 = uVar5;
      lVar4 = lVar8;
      if (uVar5 < uVar13) {
        lVar10 = 0;
        lVar4 = (lVar8 + uVar13) - uVar5;
        puVar7 = (undefined1 *)(lVar11 + uVar5 * 0x18 + 0x30);
        do {
          *(undefined8 *)(puVar7 + -0x10) = param_2;
          *(undefined8 *)(puVar7 + -8) = param_3;
          *puVar7 = (char)param_4;
          if (param_1 - lVar8 == lVar10) {
            *(ulong *)(lVar11 + 0x10) = uVar5 + lVar10 + 1;
            goto LAB_100881968;
          }
          if ((lVar8 < 0) || ((long)param_1 <= lVar8 + lVar10)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100881990);
            (*pcVar1)();
          }
          FUN_1008820d0(param_2,param_3,param_4);
          lVar10 = lVar10 + 1;
          uVar3 = uVar13;
          puVar7 = puVar7 + 0x18;
        } while ((uVar5 - uVar13) + lVar10 != 0);
      }
      *(ulong *)(lVar11 + 0x10) = uVar3;
      uVar5 = uVar3;
      lVar8 = lVar4;
    } while( true );
  }
LAB_100881968:
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x1008819a4 | FUN_1008819a4 */

void FUN_1008819a4(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_60 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x68);
  _swift_beginAccess(lVar4 + 0x28,auStack_60,0x21,0);
  _swift_retain();
  FUN_1004375f4(&stack0xffffffffffffffb8,lVar4 + 0x28,&DAT_100fe9528,&DAT_100c7fc90);
  _swift_endAccess(auStack_60);
  uVar10 = *(undefined8 *)(lVar4 + 0x58);
  uVar9 = *(undefined8 *)(lVar4 + 0x50);
  uVar12 = *(undefined8 *)(lVar4 + 0x68);
  uVar11 = *(undefined8 *)(lVar4 + 0x60);
  uVar14 = *(undefined8 *)(lVar4 + 0x78);
  uVar13 = *(undefined8 *)(lVar4 + 0x70);
  uVar6 = *(undefined8 *)(lVar4 + 0x90);
  uVar5 = *(undefined8 *)(lVar4 + 0x88);
  uVar8 = *(undefined8 *)(lVar4 + 0xa0);
  uVar7 = *(undefined8 *)(lVar4 + 0x98);
  uVar3 = *(undefined8 *)(lVar4 + 0xa8);
  cVar1 = *(char *)(lVar4 + 0xb0);
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined1 *)(lVar4 + 0xb0) = 1;
  if (cVar1 != '\x01') {
    *(undefined8 *)(lVar4 + 0x58) = uVar10;
    *(undefined8 *)(lVar4 + 0x50) = uVar9;
    *(undefined8 *)(lVar4 + 0x68) = uVar12;
    *(undefined8 *)(lVar4 + 0x60) = uVar11;
    *(undefined8 *)(lVar4 + 0x78) = uVar14;
    *(undefined8 *)(lVar4 + 0x70) = uVar13;
    *(long *)(lVar4 + 0x80) = lVar4;
    *(undefined8 *)(lVar4 + 0x90) = uVar6;
    *(undefined8 *)(lVar4 + 0x88) = uVar5;
    *(undefined8 *)(lVar4 + 0xa0) = uVar8;
    *(undefined8 *)(lVar4 + 0x98) = uVar7;
    *(undefined8 *)(lVar4 + 0xa8) = uVar3;
    *(char *)(lVar4 + 0xb0) = cVar1;
    _swift_retain(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100881a7c);
  (*pcVar2)();
}



/* Address: 0x100881a7c | FUN_100881a7c */

void FUN_100881a7c(void)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar11 = *(long *)(unaff_x20 + 0x68);
  pauVar1 = (undefined1 (*) [16])(lVar11 + 0x60);
  uVar19 = *(undefined8 *)*pauVar1;
  auVar4 = *pauVar1;
  auVar3 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(lVar11 + 0x70);
  uVar18 = *(undefined8 *)*pauVar1;
  auVar14 = *pauVar1;
  auVar13 = *pauVar1;
  pauVar1 = (undefined1 (*) [16])(lVar11 + 0x50);
  uVar20 = *(undefined8 *)*pauVar1;
  auVar6 = *pauVar1;
  auVar5 = *pauVar1;
  lVar10 = *(long *)(lVar11 + 0x80);
  uVar17 = *(undefined8 *)(lVar11 + 0xa0);
  uVar16 = *(undefined8 *)(lVar11 + 0x98);
  uVar7 = *(undefined8 *)(lVar11 + 0x88);
  uVar8 = *(undefined8 *)(lVar11 + 0x90);
  uVar12 = *(undefined8 *)(lVar11 + 0xa8);
  cVar2 = *(char *)(lVar11 + 0xb0);
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined1 *)(lVar11 + 0xb0) = 1;
  if (cVar2 == '\x01') {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100881b94);
    (*pcVar9)();
  }
  if (lVar10 != 0) {
    auVar15 = NEON_ext(auVar13,auVar14,8,1);
    auVar13 = NEON_ext(auVar3,auVar4,8,1);
    auVar14 = NEON_ext(auVar5,auVar6,8,1);
    _swift_release();
    *(long *)(lVar11 + 0x58) = auVar14._0_8_;
    *(undefined8 *)(lVar11 + 0x50) = uVar20;
    *(long *)(lVar11 + 0x68) = auVar13._0_8_;
    *(undefined8 *)(lVar11 + 0x60) = uVar19;
    *(long *)(lVar11 + 0x78) = auVar15._0_8_;
    *(undefined8 *)(lVar11 + 0x70) = uVar18;
    *(undefined8 *)(lVar11 + 0x80) = 0xdedbeef;
    *(undefined8 *)(lVar11 + 0xa0) = uVar17;
    *(undefined8 *)(lVar11 + 0x98) = uVar16;
    *(undefined8 *)(lVar11 + 0x90) = uVar8;
    *(undefined8 *)(lVar11 + 0x88) = uVar7;
    *(undefined8 *)(lVar11 + 0xa8) = uVar12;
    *(char *)(lVar11 + 0xb0) = cVar2;
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    _swift_beginAccess(lVar11 + 0x28,auStack_78,0x21,0);
    FUN_1004375f4(&local_60,lVar11 + 0x28,&DAT_100fe9528,&DAT_100c7fc90);
    _swift_endAccess(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100881b98);
  (*pcVar9)();
}



/* Address: 0x100881b98 | FUN_100881b98 */

void FUN_100881b98(void)

{
  undefined8 uVar1;
  
  if (DAT_100fe9108 != 0) {
    return;
  }
  uVar1 = 0x100c69d08;
  _swift_getWitnessTable(0x100c69d08,&DAT_100eee720);
  DAT_100fe9108 = uVar1;
  return;
}



/* Address: 0x100881bd8 | thunk_FUN_100881bdc */

void thunk_FUN_100881bdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f5e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f5e0,&DAT_100f08c38);
  DAT_100fe9110 = pTVar1;
  return;
}



/* Address: 0x100881bdc | FUN_100881bdc */

void FUN_100881bdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f5e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f5e0,&DAT_100f08c38);
  DAT_100fe9110 = pTVar1;
  return;
}



/* Address: 0x100881c1c | FUN_100881c1c */

void FUN_100881c1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100881c40();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100881c40 | FUN_100881c40 */

void FUN_100881c40(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe9138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe9140;
  FUN_1000f8b08(&DAT_100fe9140,&DAT_100c80d00);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7f6ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f6ec,puVar1);
  DAT_100fe9138 = pTVar2;
  return;
}



/* Address: 0x100881c90 | thunk_FUN_100881c94 */

void thunk_FUN_100881c94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f6c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f6c4,&DAT_100f08cb0);
  DAT_100fe9148 = pTVar1;
  return;
}



/* Address: 0x100881c94 | FUN_100881c94 */

void FUN_100881c94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f6c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f6c4,&DAT_100f08cb0);
  DAT_100fe9148 = pTVar1;
  return;
}



/* Address: 0x100881cd4 | thunk_FUN_100881cd8 */

void thunk_FUN_100881cd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9188 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f718;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f718,&DAT_100f08e30);
  DAT_100fe9188 = pTVar1;
  return;
}



/* Address: 0x100881cd8 | FUN_100881cd8 */

void FUN_100881cd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9188 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f718;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f718,&DAT_100f08e30);
  DAT_100fe9188 = pTVar1;
  return;
}



/* Address: 0x100881d18 | thunk_FUN_100881d1c */

void thunk_FUN_100881d1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9190 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f780;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f780,&DAT_100f08f40);
  DAT_100fe9190 = pTVar1;
  return;
}



/* Address: 0x100881d1c | FUN_100881d1c */

void FUN_100881d1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9190 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f780;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f780,&DAT_100f08f40);
  DAT_100fe9190 = pTVar1;
  return;
}



/* Address: 0x100881d5c | thunk_FUN_100881d60 */

void thunk_FUN_100881d60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9198 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f828,&DAT_100f08ea8);
  DAT_100fe9198 = pTVar1;
  return;
}



/* Address: 0x100881d60 | FUN_100881d60 */

void FUN_100881d60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9198 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f828;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f828,&DAT_100f08ea8);
  DAT_100fe9198 = pTVar1;
  return;
}



/* Address: 0x100881da0 | thunk_FUN_100881da4 */

void thunk_FUN_100881da4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe91a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f8d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f8d0,&DAT_100f08f60);
  DAT_100fe91a0 = pTVar1;
  return;
}



/* Address: 0x100881da4 | FUN_100881da4 */

void FUN_100881da4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe91a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f8d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f8d0,&DAT_100f08f60);
  DAT_100fe91a0 = pTVar1;
  return;
}



/* Address: 0x100881de4 | FUN_100881de4 */

void FUN_100881de4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100881df0 | FUN_100881df0 */

undefined1  [16] FUN_100881df0(void)

{
  return ZEXT816(0x100f08c38);
}



/* Address: 0x100881e00 | FUN_100881e00 */

void FUN_100881e00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100881e14 | FUN_100881e14 */

undefined1  [16] FUN_100881e14(void)

{
  return ZEXT816(0x100f08cb0);
}



/* Address: 0x100881e24 | FUN_100881e24 */

void FUN_100881e24(long param_1)

{
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_80 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_70 = &DAT_100c7fad0;
  puStack_68 = &DAT_100c7fad0;
  local_60 = &DAT_100c7fae8;
  puStack_58 = &DAT_100c7fb00;
  puStack_78 = &DAT_100c7fab8;
  puStack_48 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_50 = &DAT_100c7fab8;
  local_40 = &DAT_100c7fae8;
  puStack_38 = &DAT_100c7fb18;
  local_30 = &DAT_100c7fb18;
  puStack_28 = &DAT_100c7fb18;
  local_20 = &DAT_100c7fb18;
  puStack_18 = &DAT_100c7fab8;
  _swift_initClassMetadata2(param_1,0,0xe,&local_80,param_1 + 0x60);
  return;
}



/* Address: 0x100881eb4 | FUN_100881eb4 */

void FUN_100881eb4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100881ec0 | FUN_100881ec0 */

undefined1  [16] FUN_100881ec0(void)

{
  return ZEXT816(0x100f08e30);
}



/* Address: 0x100881ed0 | FUN_100881ed0 */

undefined1  [16] FUN_100881ed0(void)

{
  return ZEXT816(0x100f08ea8);
}



/* Address: 0x100881ee0 | FUN_100881ee0 */

undefined1  [16] FUN_100881ee0(void)

{
  return ZEXT816(0x100f08f40);
}



/* Address: 0x100881ef0 | FUN_100881ef0 */

undefined1  [16] FUN_100881ef0(void)

{
  return ZEXT816(0x100f08f60);
}



/* Address: 0x100881f00 | FUN_100881f00 */

undefined1  [16] FUN_100881f00(void)

{
  return ZEXT816(0x100f08ff8);
}



/* Address: 0x100881f10 | FUN_100881f10 */

void FUN_100881f10(void)

{
  return;
}



/* Address: 0x100881f14 | FUN_100881f14 */

undefined1  [16] FUN_100881f14(void)

{
  return ZEXT816(0x100f09088);
}


