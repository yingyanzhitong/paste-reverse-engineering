/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100647054 | FUN_100647054 */

long * FUN_100647054(long *param_1)

{
  long *unaff_x20;
  
  if (param_1 == *(long **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60))) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_1006422fc();
    _swift_retain();
    FUN_100648698();
    _swift_release(param_1);
    unaff_x20 = param_1;
  }
  return unaff_x20;
}



/* Address: 0x1006470d0 | FUN_1006470d0 */

ulong FUN_1006470d0(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

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
  
  FUN_1000f8cac(param_2,&local_c0,&DAT_100fd8720,&DAT_100c6ace8);
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10064720c);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100647208);
            (*pcVar2)();
          }
          local_70 = uVar5;
          FUN_1000f8cac(&uStack_b8,&local_108,&DAT_100fd4db0,&DAT_100c659e0);
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



/* Address: 0x10064720c | FUN_10064720c */

void FUN_10064720c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *unaff_x20;
    puVar1 = &DAT_100ef0078;
    _swift_allocObject(&DAT_100ef0078,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(long *)(puVar1 + 0x20) = param_1;
    _swift_retain_n(param_1,2);
    FUN_1006483a0(FUN_1006528f4,puVar1);
    _swift_release(param_1);
    _swift_release(puVar1);
    return;
  }
  return;
}



/* Address: 0x1006472a4 | FUN_1006472a4 */

void FUN_1006472a4(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  
  CVar1.unknown = &DAT_100fd8710;
  FUN_1000f7830(&DAT_100fd8710,&DAT_100c6acd8);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  *(undefined8 *)(_Var2.unknown + 0x28) = 0;
  *(undefined8 *)(_Var2.unknown + 0x20) = 0;
  *(undefined8 *)(_Var2.unknown + 0x38) = 0;
  *(undefined8 *)(_Var2.unknown + 0x30) = 0;
  *(undefined8 *)(_Var2.unknown + 0x48) = 0;
  *(undefined8 *)(_Var2.unknown + 0x40) = 0;
  *(undefined8 *)(_Var2.unknown + 0x58) = 0;
  *(undefined8 *)(_Var2.unknown + 0x50) = 0;
  *(undefined8 *)(_Var2.unknown + 0x68) = 0;
  *(undefined8 *)(_Var2.unknown + 0x60) = 0;
  *(undefined8 *)(_Var2.unknown + 0x78) = 0;
  *(undefined8 *)(_Var2.unknown + 0x70) = 0;
  *(undefined8 *)(_Var2.unknown + 0x88) = 0;
  *(undefined8 *)(_Var2.unknown + 0x80) = 0;
  *(undefined8 *)(_Var2.unknown + 0x98) = 0;
  *(undefined8 *)(_Var2.unknown + 0x90) = 0;
  *(undefined8 *)(_Var2.unknown + 0xa8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xa0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xb8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xb0) = 0;
  *(undefined8 *)(_Var2.unknown + 200) = 0;
  *(undefined8 *)(_Var2.unknown + 0xc0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xd8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xd0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xe8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xe0) = 0;
  *(undefined8 *)(_Var2.unknown + 0xf8) = 0;
  *(undefined8 *)(_Var2.unknown + 0xf0) = 0;
  *(undefined8 *)(_Var2.unknown + 0x108) = 0;
  *(undefined8 *)(_Var2.unknown + 0x100) = 0;
  *(undefined8 *)(_Var2.unknown + 0x118) = 0;
  *(undefined8 *)(_Var2.unknown + 0x110) = 0;
  return;
}



/* Address: 0x100647310 | FUN_100647310 */

void FUN_100647310(void)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647440);
    (*pcVar2)();
  }
  FUN_100624f24(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647444);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647448);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_1006525e8();
  _swift_release(lVar3);
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100647450);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_1006525e8();
    _swift_release(lVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    lVar4 = lVar4 - lVar5;
    if (-1 < lVar4) {
      FUN_1006522bc(lVar4,0,0);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647454);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10064744c);
  (*pcVar2)();
}



/* Address: 0x100647454 | FUN_100647454 */

void FUN_100647454(void)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064756c);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100624f40(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647570);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647574);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_100647800();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10064757c);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_100647800();
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
      FUN_100647bcc(local_98);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647580);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100647578);
  (*pcVar1)();
}



/* Address: 0x100647580 | FUN_100647580 */

void FUN_100647580(void)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476a4);
    (*pcVar2)();
  }
  FUN_100624f78(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476a8);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476ac);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_100652e00();
  _swift_release(lVar3);
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476b4);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_100652e00();
    _swift_release(lVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    lVar4 = lVar4 - lVar5;
    if (-1 < lVar4) {
      FUN_100647fac(lVar4,0,0,0);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476b8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006476b0);
  (*pcVar2)();
}



/* Address: 0x1006476b8 | FUN_1006476b8 */

void FUN_1006476b8(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10) * 2;
  if (lVar5 < 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006477ec);
    (*pcVar3)();
  }
  lVar6 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  FUN_100624f24(0,lVar5,0);
  if (*(long *)(lVar4 + 0x10) < lVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006477f0);
    (*pcVar3)();
  }
  if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006477f4);
    (*pcVar3)();
  }
  _swift_retain(lVar4);
  FUN_1006525e8();
  _swift_release(lVar4);
  if (-1 < (long)uVar1) {
    if (*(ulong *)(lVar4 + 0x10) < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006477fc);
      (*pcVar3)();
    }
    _swift_retain(lVar4);
    FUN_1006525e8();
    _swift_release(lVar4);
    lVar6 = *(long *)(puVar2 + 0x10);
    lVar5 = lVar5 - lVar6;
    if (-1 < lVar5) {
      FUN_1006522bc(lVar5,0,0);
      _swift_release(lVar4);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar6;
      *unaff_x20 = (long)puVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100647800);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006477f8);
  (*pcVar3)();
}



/* Address: 0x100647800 | FUN_100647800 */

void FUN_100647800(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bbc);
    (*pcVar2)();
  }
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bc0);
    (*pcVar2)();
  }
  lVar3 = lVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar10;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar10 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_100624f40();
    lVar10 = *unaff_x20;
    uVar5 = *(ulong *)(lVar10 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar10 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bc4);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_10064793c:
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
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100fd8730,&DAT_100c6acf8);
      while (local_d0._1_1_ != -2) {
        FUN_1000fb4c4(&local_110,&DAT_100fd8730,&DAT_100c6acf8);
        if ((long)(*(ulong *)(lVar10 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_100624f40(1 < *(ulong *)(lVar10 + 0x18),uVar5 + 1,1);
        }
        lVar10 = *unaff_x20;
        uVar6 = *(ulong *)(lVar10 + 0x18);
        FUN_1000f8cac(&local_c0,&local_158,&DAT_100fd8730,&DAT_100c6acf8);
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
              FUN_1000fb4c4(&local_110,&DAT_100fd4db0,&DAT_100c659e0);
              goto LAB_100647a10;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100fd8730,&DAT_100c6acf8);
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
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bb8);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x48,&local_c0,&DAT_100fd4db0,&DAT_100c659e0);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_158,&DAT_100fd8730,&DAT_100c6acf8);
            puVar9 = puVar9 + 9;
            uVar5 = uVar5 + 1;
          } while (local_118._1_1_ != -2);
        }
        FUN_1000fb4c4(&local_158,&DAT_100fd8730,&DAT_100c6acf8);
        uVar8 = uVar5;
LAB_100647a10:
        *(ulong *)(lVar10 + 0x10) = uVar8;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100fd8730,&DAT_100c6acf8);
        uVar5 = uVar8;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100fd8730,&DAT_100c6acf8);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100fd8730,&DAT_100c6acf8);
      goto LAB_1006479c0;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bc8);
      (*pcVar2)();
    }
    puVar4 = &DAT_100fd4db0;
    FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
    _swift_arrayInitWithCopy(lVar10 + uVar6 * 0x48 + 0x20,param_2 + param_3 * 0x48,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar10 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100647bcc);
        (*pcVar2)();
      }
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_10064793c;
  }
  _swift_unknownObjectRelease(param_1);
LAB_1006479c0:
  *unaff_x20 = lVar10;
  return;
}



/* Address: 0x100647bcc | FUN_100647bcc */

void FUN_100647bcc(long *param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647fa0);
    (*pcVar1)();
  }
  lVar2 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar6 < lVar9 + lVar7)) {
    FUN_100624f40();
    lVar11 = *unaff_x20;
    uVar6 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar10 = (long *)(uVar6 - *(long *)(lVar11 + 0x10));
  plVar3 = &local_c8;
  FUN_1006470d0(plVar3,param_1,lVar11 + *(long *)(lVar11 + 0x10) * 0x48 + 0x20,plVar10);
  FUN_1000fb4c4(param_1,&DAT_100fd8720,&DAT_100c6ace8);
  if ((long)plVar3 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647fa4);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100647fa8);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100647fac);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fd4db0,&DAT_100c659e0);
      lVar7 = local_78 + 1;
      local_78 = lVar7;
    }
    FUN_1000f8cac(&local_110,&local_160,&DAT_100fd8730,&DAT_100c6acf8);
    while (local_120._1_1_ != -2) {
      FUN_1000fb4c4(&local_160,&DAT_100fd8730,&DAT_100c6acf8);
      if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_100624f40(1 < *(ulong *)(lVar11 + 0x18),uVar6 + 1,1);
      }
      lVar11 = *unaff_x20;
      uVar8 = *(ulong *)(lVar11 + 0x18);
      FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fd8730,&DAT_100c6acf8);
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
            FUN_1000fb4c4(&local_160,&DAT_100fd4db0,&DAT_100c659e0);
            goto LAB_100647df8;
          }
          FUN_1000fb4c4(&local_110,&DAT_100fd8730,&DAT_100c6acf8);
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
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100647f9c);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_110,&DAT_100fd4db0,&DAT_100c659e0);
            local_78 = lVar7 + 1;
            lVar7 = local_78;
          }
          FUN_1000f8cac(&local_110,&local_1a8,&DAT_100fd8730,&DAT_100c6acf8);
          plVar3 = plVar3 + 9;
          uVar6 = uVar6 + 1;
        } while (local_168._1_1_ != -2);
      }
      FUN_1000fb4c4(&local_1a8,&DAT_100fd8730,&DAT_100c6acf8);
      uVar12 = uVar6;
LAB_100647df8:
      *(ulong *)(lVar11 + 0x10) = uVar12;
      FUN_1000f8cac(&local_110,&local_160,&DAT_100fd8730,&DAT_100c6acf8);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100fd8730;
    puVar5 = &DAT_100c6acf8;
    FUN_1000fb4c4(&local_110,&DAT_100fd8730,&DAT_100c6acf8);
    FUN_1000fb4c4(&local_c8,&DAT_100fd8728,&DAT_100c6acf0);
    plVar3 = &local_160;
  }
  else {
    puVar4 = &DAT_100fd8728;
    puVar5 = &DAT_100c6acf0;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x100647fac | FUN_100647fac */

void FUN_100647fac(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined3 local_6c;
  undefined1 uStack_6a;
  long local_68;
  
  lVar7 = *unaff_x20;
  lVar12 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar12,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006481ec);
    (*pcVar2)();
  }
  lVar6 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar6 == 0) || (uVar4 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar4 < lVar12 + param_1))
  {
    FUN_100624f78();
    lVar7 = *unaff_x20;
    uVar4 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  plVar11 = (long *)(uVar4 - *(long *)(lVar7 + 0x10));
  plVar3 = &local_88;
  FUN_100651f38(plVar3,lVar7 + *(long *)(lVar7 + 0x10) * 0x18 + 0x20,plVar11,param_1,param_2,param_3
                ,param_4 & 0xffffffffffffff);
  uVar1 = local_80;
  if ((long)plVar3 < param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006481f0);
    (*pcVar2)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006481f4);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + (long)plVar3;
  }
  if ((plVar3 == plVar11) && (local_68 != local_88)) {
    if ((local_68 < 0) || (local_88 <= local_68)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006481f8);
      (*pcVar2)();
    }
    uVar4 = *(ulong *)(lVar7 + 0x10);
    _swift_retain(local_80);
    lVar12 = local_68 + 1;
    do {
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar4 + 1)) {
        FUN_100624f78(1 < *(ulong *)(lVar7 + 0x18),uVar4 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar5 = *(ulong *)(lVar7 + 0x18) >> 1;
      uVar9 = uVar4;
      lVar6 = lVar12;
      if ((long)uVar4 < (long)uVar5) {
        lVar8 = 0;
        lVar6 = (lVar12 + uVar5) - uVar4;
        puVar10 = (undefined4 *)(lVar7 + uVar4 * 0x18 + 0x30);
        do {
          *(undefined8 *)(puVar10 + -4) = uVar1;
          *(undefined8 *)(puVar10 + -2) = uStack_78;
          *puVar10 = local_70;
          *(undefined1 *)((long)puVar10 + 6) = uStack_6a;
          *(short *)(puVar10 + 1) = (short)local_6c;
          if (local_88 - lVar12 == lVar8) {
            *(ulong *)(lVar7 + 0x10) = uVar4 + lVar8 + 1;
            goto LAB_1006481b8;
          }
          if ((lVar12 < 0) || (local_88 <= lVar12 + lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006481e8);
            (*pcVar2)();
          }
          _swift_retain(uVar1);
          lVar8 = lVar8 + 1;
          puVar10 = puVar10 + 6;
          uVar9 = uVar5;
        } while ((uVar4 - uVar5) + lVar8 != 0);
      }
      *(ulong *)(lVar7 + 0x10) = uVar9;
      uVar4 = uVar9;
      lVar12 = lVar6;
    } while( true );
  }
LAB_1006481b8:
  _swift_release(local_80);
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x1006481f8 | FUN_1006481f8 */

void FUN_1006481f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100648370);
    (*pcVar4)();
  }
  FUN_100624f24(0,param_1,0);
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar5 = *unaff_x20;
  if ((long)uVar2 < (long)uVar1) {
    if (*(long *)(lVar5 + 0x10) < (long)uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100648378);
      (*pcVar4)();
    }
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100648380);
      (*pcVar4)();
    }
    _swift_retain(lVar5);
    FUN_1006525e8();
    _swift_release(lVar5);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100648388);
      (*pcVar4)();
    }
    if (*(ulong *)(lVar5 + 0x10) < uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064838c);
      (*pcVar4)();
    }
    _swift_retain(lVar5);
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064837c);
      (*pcVar4)();
    }
    if (*(ulong *)(lVar5 + 0x10) < uVar1 || (long)*(ulong *)(lVar5 + 0x10) < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100648384);
      (*pcVar4)();
    }
    _swift_retain(lVar5);
  }
  FUN_1006525e8();
  _swift_release(lVar5);
  lVar6 = *(long *)(puVar3 + 0x10);
  param_1 = param_1 - lVar6;
  if (-1 < param_1) {
    FUN_1006522bc(param_1,0,0);
    _swift_release(lVar5);
    unaff_x20[1] = 0;
    unaff_x20[2] = lVar6;
    *unaff_x20 = (long)puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100648374);
  (*pcVar4)();
}



/* Address: 0x10064838c | FUN_10064838c */

void FUN_10064838c(undefined8 param_1,undefined8 param_2)

{
  FUN_1006483b4(param_1,param_2,&DAT_100ef00a0,FUN_100645e60);
  return;
}



/* Address: 0x1006483a0 | FUN_1006483a0 */

void FUN_1006483a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1006483b4(param_1,param_2,&DAT_100ef00c8,FUN_100645f0c);
  return;
}



/* Address: 0x1006483b4 | FUN_1006483b4 */

void FUN_1006483b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  _swift_allocObject(param_3,0x28,7);
  *(undefined8 *)(param_3 + 0x10) = unaff_x20;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  _swift_retain();
  _swift_retain(param_2);
  FUN_10064bde0(param_4,param_3);
  _swift_release(param_3);
  return;
}



/* Address: 0x100648424 | FUN_100648424 */

void FUN_100648424(void)

{
  FUN_1006484c0();
  return;
}



/* Address: 0x100648430 | thunk_FUN_10064a5bc */

void thunk_FUN_10064a5bc(void)

{
  FUN_10064a9f0();
  return;
}



/* Address: 0x100648434 | FUN_100648434 */

void FUN_100648434(undefined8 param_1,undefined8 param_2)

{
  FUN_100648698(param_2);
  return;
}



/* Address: 0x100648458 | FUN_100648458 */

void FUN_100648458(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x6;
  
  thunk_FUN_1006528a4(param_1,param_2,in_x6);
  return;
}



/* Address: 0x100648460 | FUN_100648460 */

undefined8 FUN_100648460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10064a41c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1006484b4 | FUN_1006484b4 */

void FUN_1006484b4(void)

{
  FUN_1006484c0();
  return;
}



/* Address: 0x1006484c0 | FUN_1006484c0 */

undefined8 FUN_1006484c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  (*param_4)(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x100648520 | FUN_100648520 */

void FUN_100648520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100652900(param_1,param_2,param_4);
  return;
}



/* Address: 0x100648528 | FUN_100648528 */

void FUN_100648528(void)

{
  FUN_100649e9c();
  return;
}



/* Address: 0x100648548 | FUN_100648548 */

void FUN_100648548(code *param_1,undefined8 param_2)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lVar3;
  
  lVar6 = *unaff_x20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var_00,OVar2.value);
  lVar7 = *(long *)(lVar3 + -8);
  puVar5 = auStack_80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar6 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar6,auStack_68,0,0);
  (**(code **)(lVar7 + 0x10))(puVar5,(long)unaff_x20 + lVar6,lVar3);
  puVar4 = puVar5;
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x30))
            (puVar5,1,CONCAT71(extraout_var,RVar1.value));
  (**(code **)(lVar7 + 8))(puVar5,lVar3);
  if ((int)puVar4 == 1) {
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),auStack_80,0x21,0);
    FUN_10064967c(param_1,param_2);
    _swift_endAccess(auStack_80);
  }
  else {
    (*param_1)();
  }
  return;
}



/* Address: 0x100648698 | FUN_100648698 */

void FUN_100648698(undefined8 param_1)

{
  FUN_10064cc9c(param_1,&DAT_100ef00f0,FUN_100652954,FUN_100646e1c);
  return;
}



/* Address: 0x1006486b4 | FUN_1006486b4 */

void FUN_1006486b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100648548();
  FUN_1006486f8();
  FUN_100004550(param_1,param_2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1006486f8 | FUN_1006486f8 */

void FUN_1006486f8(code *param_1,code *param_2,code *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *local_78;
  code *local_70;
  code *local_68;
  
  if (param_1 != (code *)0x0) {
    if (param_3 == (code *)0x0) {
      pcVar17 = (code *)0x2;
      pcVar13 = param_2;
      _swift_retain_n();
      (*param_1)();
      pcVar22 = pcVar17;
      pcVar10 = param_3;
      _swift_release(param_2);
      local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
      while( true ) {
        pcVar21 = pcVar17;
        PTR___swiftEmptyArrayStorage_100eae0d8 = local_78;
        if (pcVar13 == (code *)0x0) {
          _swift_release(param_2);
          _swift_bridgeObjectRelease(param_3);
          return;
        }
        if (param_3 != (code *)0x0) break;
        _swift_release(param_2);
        pcVar17 = pcVar21;
        _swift_retain();
        (*pcVar13)();
        pcVar11 = pcVar22;
        pcVar18 = pcVar10;
        _swift_release(pcVar21);
        pcVar13 = pcVar17;
        pcVar17 = pcVar22;
        pcVar22 = pcVar11;
        param_3 = pcVar10;
        pcVar10 = pcVar18;
        param_2 = pcVar21;
        local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      FUN_1006524e8();
      pcVar17 = pcVar21;
      local_70 = pcVar22;
      local_68 = pcVar10;
      FUN_100649880(&local_78,pcVar13,pcVar21,param_3);
      while( true ) {
        pcVar10 = local_68;
        pcVar22 = local_70;
        puVar6 = local_78;
        lVar20 = (long)local_68 - (long)local_70;
        if ((long)local_68 < (long)local_70) {
          lVar20 = lVar20 + *(long *)(local_78 + 0x10);
        }
        if (lVar20 < 1) break;
        if (local_68 == local_70) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649204);
          (*pcVar13)();
        }
        if ((long)local_70 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649208);
          (*pcVar13)();
        }
        if ((ulong)local_70 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10064920c);
          (*pcVar13)();
        }
        pcVar11 = *(code **)(local_78 + 0x10);
        if (pcVar11 <= local_70) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649210);
          (*pcVar13)();
        }
        pcVar18 = *(code **)(local_78 + (long)local_70 * 0x10 + 0x20);
        if (pcVar18 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649238);
          (*pcVar13)();
        }
        if ((long)local_70 <= (long)local_68) {
          pcVar11 = (code *)0x0;
        }
        if ((long)(pcVar11 + ((long)local_68 - (long)local_70)) < 1) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649214);
          (*pcVar13)();
        }
        lVar20 = *(long *)(local_78 + (long)local_70 * 0x10 + 0x28);
        _swift_retain(lVar20);
        puVar5 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        pcVar11 = pcVar17;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_100651f14();
          pcVar11 = pcVar17;
        }
        if (*(code **)(puVar6 + 0x10) <= pcVar22) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649218);
          (*pcVar13)();
        }
        puVar1 = (undefined8 *)(puVar6 + (long)pcVar22 * 0x10 + 0x20);
        uVar12 = *puVar1;
        lVar9 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_100004550(uVar12);
        pcVar22 = (code *)(*(long *)(puVar6 + 0x10) + 0x1ffffffffU & (ulong)(pcVar22 + 1));
        lVar7 = lVar20;
        local_78 = puVar6;
        local_70 = pcVar22;
        _swift_retain();
        (*pcVar18)();
        pcVar17 = pcVar11;
        FUN_100004550(pcVar18,lVar20);
        if (lVar7 == 0) {
          FUN_100004550(pcVar18,lVar20);
          _swift_bridgeObjectRelease(pcVar11);
        }
        else if (pcVar11 == (code *)0x0) {
          FUN_100011128(lVar7,lVar9);
          _swift_retain(lVar9);
          if ((long)pcVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10064922c);
            (*pcVar13)();
          }
          if (*(code **)(puVar6 + 0x10) <= pcVar10) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100649230);
            (*pcVar13)();
          }
          plVar2 = (long *)(puVar6 + (long)pcVar10 * 0x10 + 0x20);
          lVar16 = *plVar2;
          lVar8 = plVar2[1];
          *plVar2 = lVar7;
          plVar2[1] = lVar9;
          FUN_100004550(lVar16,lVar8);
          local_68 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU & (ulong)(pcVar10 + 1))
          ;
          local_78 = puVar6;
          if (pcVar22 == local_68) {
            FUN_100647310();
          }
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(pcVar18,lVar20);
        }
        else {
          lVar16 = (long)pcVar10 - (long)pcVar22;
          if ((long)pcVar10 < (long)pcVar22) {
            lVar16 = lVar16 + *(long *)(puVar6 + 0x10);
          }
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10064921c);
            (*pcVar13)();
          }
          lVar8 = lVar16 + 1 + *(long *)(pcVar11 + 0x10);
          if (SCARRY8(lVar16 + 1,*(long *)(pcVar11 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100649220);
            (*pcVar13)();
          }
          if (*(long *)(puVar6 + 0x10) < lVar8) {
            FUN_1006322e0();
            FUN_100011128(lVar7,lVar9);
            _swift_bridgeObjectRetain(pcVar11);
            FUN_1006481f8(lVar8);
            puVar6 = local_78;
          }
          else {
            FUN_100011128(lVar7,lVar9);
            _swift_bridgeObjectRetain(pcVar11);
          }
          pcVar22 = local_68;
          _swift_retain(lVar9);
          puVar5 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100651f14();
          }
          if ((long)pcVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100649224);
            (*pcVar13)();
          }
          if (*(code **)(puVar6 + 0x10) <= pcVar22) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100649228);
            (*pcVar13)();
          }
          uVar12 = *(undefined8 *)(puVar6 + (long)pcVar22 * 0x10 + 0x20);
          uVar23 = *(undefined8 *)(puVar6 + (long)pcVar22 * 0x10 + 0x28);
          *(long *)(puVar6 + (long)pcVar22 * 0x10 + 0x20) = lVar7;
          *(long *)(puVar6 + (long)pcVar22 * 0x10 + 0x28) = lVar9;
          FUN_100004550(uVar12,uVar23);
          local_68 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU & (ulong)(pcVar22 + 1))
          ;
          local_78 = puVar6;
          if (local_70 == local_68) {
            FUN_100647310();
          }
          uVar15 = *(ulong *)(pcVar11 + 0x10);
          pcVar22 = local_70;
          pcVar10 = local_68;
          if (uVar15 != 0) {
            uVar14 = 0;
            pcVar19 = pcVar11 + 0x28;
            do {
              puVar6 = local_78;
              if (*(ulong *)(pcVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491b8);
                (*pcVar13)();
              }
              uVar12 = *(undefined8 *)pcVar19;
              uVar24 = *(undefined8 *)(pcVar11 + uVar14 * 0x10 + 0x20 + 8);
              uVar23 = *(undefined8 *)(pcVar11 + uVar14 * 0x10 + 0x20);
              _swift_retain_n(uVar12,2);
              puVar5 = puVar6;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar5 & 1) == 0) {
                FUN_100651f14();
              }
              if ((long)pcVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491bc);
                (*pcVar13)();
              }
              if (*(code **)(puVar6 + 0x10) <= pcVar10) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491c0);
                (*pcVar13)();
              }
              puVar1 = (undefined8 *)(puVar6 + (long)pcVar10 * 0x10 + 0x20);
              uVar3 = *puVar1;
              uVar4 = puVar1[1];
              puVar1[1] = uVar24;
              *puVar1 = uVar23;
              FUN_100004550(uVar3,uVar4);
              puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
              pcVar10 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU &
                                (ulong)(pcVar10 + 1));
              local_78 = puVar6;
              if (pcVar22 == pcVar10) {
                lVar16 = *(long *)(puVar6 + 0x10) * 2;
                if (lVar16 < 1) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491dc);
                  (*pcVar13)();
                }
                FUN_100624f24(0,lVar16,0);
                if (*(code **)(puVar6 + 0x10) < pcVar22) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491e0);
                  (*pcVar13)();
                }
                _swift_retain(puVar6);
                FUN_1006525e8();
                _swift_release(puVar6);
                if (*(code **)(puVar6 + 0x10) < pcVar22) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491e4);
                  (*pcVar13)();
                }
                _swift_retain(puVar6);
                FUN_1006525e8();
                _swift_release(puVar6);
                pcVar10 = *(code **)(puVar5 + 0x10);
                if (lVar16 - (long)pcVar10 < 0) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491e8);
                  (*pcVar13)();
                }
                pcVar17 = (code *)0x0;
                FUN_1006522bc(lVar16 - (long)pcVar10,0);
                _swift_release(uVar12);
                _swift_release(puVar6);
                pcVar22 = (code *)0x0;
                local_78 = puVar5;
              }
              else {
                _swift_release(uVar12);
              }
              uVar14 = uVar14 + 1;
              pcVar19 = pcVar19 + 0x10;
            } while (uVar15 != uVar14);
          }
          local_70 = pcVar22;
          local_68 = pcVar10;
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(lVar7,lVar9);
          _swift_bridgeObjectRelease(pcVar11);
          FUN_100004550(pcVar18,lVar20);
          _swift_bridgeObjectRelease(pcVar11);
        }
      }
      _swift_release(param_2);
      FUN_100004550(pcVar13,pcVar21);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(param_3);
    }
    else {
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      pcVar13 = param_2;
      pcVar22 = param_3;
      FUN_1006524e8();
      local_78 = puVar6;
      local_70 = pcVar13;
      local_68 = pcVar22;
      FUN_100649880(&local_78,param_1,param_2,param_3);
      while( true ) {
        pcVar22 = local_68;
        pcVar13 = local_70;
        puVar6 = local_78;
        lVar20 = (long)local_68 - (long)local_70;
        if ((long)local_68 < (long)local_70) {
          lVar20 = lVar20 + *(long *)(local_78 + 0x10);
        }
        if (lVar20 < 1) break;
        if (local_68 == local_70) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491c4);
          (*pcVar13)();
        }
        if ((long)local_70 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491c8);
          (*pcVar13)();
        }
        if ((ulong)local_70 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491cc);
          (*pcVar13)();
        }
        pcVar10 = *(code **)(local_78 + 0x10);
        if (pcVar10 <= local_70) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491d0);
          (*pcVar13)();
        }
        pcVar17 = *(code **)(local_78 + (long)local_70 * 0x10 + 0x20);
        if (pcVar17 == (code *)0x0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100649234);
          (*pcVar13)();
        }
        if ((long)local_70 <= (long)local_68) {
          pcVar10 = (code *)0x0;
        }
        if ((long)(pcVar10 + ((long)local_68 - (long)local_70)) < 1) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491d4);
          (*pcVar13)();
        }
        lVar20 = *(long *)(local_78 + (long)local_70 * 0x10 + 0x28);
        _swift_retain(lVar20);
        puVar5 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        pcVar10 = param_2;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_100651f14();
          pcVar10 = param_2;
        }
        if (*(code **)(puVar6 + 0x10) <= pcVar13) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491d8);
          (*pcVar13)();
        }
        puVar1 = (undefined8 *)(puVar6 + (long)pcVar13 * 0x10 + 0x20);
        uVar12 = *puVar1;
        lVar9 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_100004550(uVar12);
        pcVar13 = (code *)(*(long *)(puVar6 + 0x10) + 0x1ffffffffU & (ulong)(pcVar13 + 1));
        lVar7 = lVar20;
        local_78 = puVar6;
        local_70 = pcVar13;
        _swift_retain();
        (*pcVar17)();
        param_2 = pcVar10;
        FUN_100004550(pcVar17,lVar20);
        if (lVar7 == 0) {
          FUN_100004550(pcVar17,lVar20);
          _swift_bridgeObjectRelease(pcVar10);
        }
        else if (pcVar10 == (code *)0x0) {
          FUN_100011128(lVar7,lVar9);
          _swift_retain(lVar9);
          if ((long)pcVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491fc);
            (*pcVar13)();
          }
          if (*(code **)(puVar6 + 0x10) <= pcVar22) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100649200);
            (*pcVar13)();
          }
          plVar2 = (long *)(puVar6 + (long)pcVar22 * 0x10 + 0x20);
          lVar16 = *plVar2;
          lVar8 = plVar2[1];
          *plVar2 = lVar7;
          plVar2[1] = lVar9;
          FUN_100004550(lVar16,lVar8);
          local_68 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU & (ulong)(pcVar22 + 1))
          ;
          local_78 = puVar6;
          if (pcVar13 == local_68) {
            FUN_100647310();
          }
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(pcVar17,lVar20);
        }
        else {
          lVar16 = (long)pcVar22 - (long)pcVar13;
          if ((long)pcVar22 < (long)pcVar13) {
            lVar16 = lVar16 + *(long *)(puVar6 + 0x10);
          }
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491ec);
            (*pcVar13)();
          }
          lVar8 = lVar16 + 1 + *(long *)(pcVar10 + 0x10);
          if (SCARRY8(lVar16 + 1,*(long *)(pcVar10 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491f0);
            (*pcVar13)();
          }
          if (*(long *)(puVar6 + 0x10) < lVar8) {
            FUN_1006322e0();
            FUN_100011128(lVar7,lVar9);
            _swift_bridgeObjectRetain(pcVar10);
            FUN_1006481f8(lVar8);
            puVar6 = local_78;
          }
          else {
            FUN_100011128(lVar7,lVar9);
            _swift_bridgeObjectRetain(pcVar10);
          }
          pcVar13 = local_68;
          _swift_retain(lVar9);
          puVar5 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar5 & 1) == 0) {
            FUN_100651f14();
          }
          if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491f4);
            (*pcVar13)();
          }
          if (*(code **)(puVar6 + 0x10) <= pcVar13) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491f8);
            (*pcVar13)();
          }
          uVar12 = *(undefined8 *)(puVar6 + (long)pcVar13 * 0x10 + 0x20);
          uVar23 = *(undefined8 *)(puVar6 + (long)pcVar13 * 0x10 + 0x28);
          *(long *)(puVar6 + (long)pcVar13 * 0x10 + 0x20) = lVar7;
          *(long *)(puVar6 + (long)pcVar13 * 0x10 + 0x28) = lVar9;
          FUN_100004550(uVar12,uVar23);
          local_68 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU & (ulong)(pcVar13 + 1))
          ;
          local_78 = puVar6;
          if (local_70 == local_68) {
            FUN_100647310();
          }
          uVar15 = *(ulong *)(pcVar10 + 0x10);
          pcVar13 = local_68;
          pcVar22 = local_70;
          if (uVar15 != 0) {
            uVar14 = 0;
            pcVar21 = pcVar10 + 0x28;
            do {
              puVar6 = local_78;
              if (*(ulong *)(pcVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10064919c);
                (*pcVar13)();
              }
              uVar12 = *(undefined8 *)pcVar21;
              uVar24 = *(undefined8 *)(pcVar10 + uVar14 * 0x10 + 0x20 + 8);
              uVar23 = *(undefined8 *)(pcVar10 + uVar14 * 0x10 + 0x20);
              _swift_retain_n(uVar12,2);
              puVar5 = puVar6;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar5 & 1) == 0) {
                FUN_100651f14();
              }
              if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491a0);
                (*pcVar13)();
              }
              if (*(code **)(puVar6 + 0x10) <= pcVar13) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491a4);
                (*pcVar13)();
              }
              puVar1 = (undefined8 *)(puVar6 + (long)pcVar13 * 0x10 + 0x20);
              uVar3 = *puVar1;
              uVar4 = puVar1[1];
              puVar1[1] = uVar24;
              *puVar1 = uVar23;
              FUN_100004550(uVar3,uVar4);
              puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
              pcVar13 = (code *)(*(long *)(puVar6 + 0x10) + 0x7fffffffffffffffU &
                                (ulong)(pcVar13 + 1));
              local_78 = puVar6;
              if (pcVar22 == pcVar13) {
                lVar16 = *(long *)(puVar6 + 0x10) * 2;
                if (lVar16 < 1) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491a8);
                  (*pcVar13)();
                }
                FUN_100624f24(0,lVar16,0);
                if (*(code **)(puVar6 + 0x10) < pcVar22) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491ac);
                  (*pcVar13)();
                }
                _swift_retain(puVar6);
                FUN_1006525e8();
                _swift_release(puVar6);
                if (*(code **)(puVar6 + 0x10) < pcVar22) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491b0);
                  (*pcVar13)();
                }
                _swift_retain(puVar6);
                FUN_1006525e8();
                _swift_release(puVar6);
                pcVar13 = *(code **)(puVar5 + 0x10);
                if (lVar16 - (long)pcVar13 < 0) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1006491b4);
                  (*pcVar13)();
                }
                param_2 = (code *)0x0;
                FUN_1006522bc(lVar16 - (long)pcVar13,0);
                _swift_release(uVar12);
                _swift_release(puVar6);
                pcVar22 = (code *)0x0;
                local_78 = puVar5;
              }
              else {
                _swift_release(uVar12);
              }
              uVar14 = uVar14 + 1;
              pcVar21 = pcVar21 + 0x10;
            } while (uVar15 != uVar14);
          }
          local_70 = pcVar22;
          local_68 = pcVar13;
          FUN_100004550(lVar7,lVar9);
          FUN_100004550(lVar7,lVar9);
          _swift_bridgeObjectRelease(pcVar10);
          FUN_100004550(pcVar17,lVar20);
          _swift_bridgeObjectRelease(pcVar10);
        }
      }
      _swift_release(local_78);
    }
  }
  return;
}



/* Address: 0x100649238 | thunk_FUN_10064a9dc */

void thunk_FUN_10064a9dc(void)

{
  FUN_10064a9dc();
  return;
}



/* Address: 0x10064923c | thunk_FUN_10064adac */

void thunk_FUN_10064adac(undefined8 param_1,undefined8 param_2)

{
  FUN_10064adc0(param_1,param_2,&DAT_100ef0230,FUN_100652b58);
  return;
}



/* Address: 0x100649240 | FUN_100649240 */

void FUN_100649240(undefined8 param_1,undefined8 param_2)

{
  FUN_10064adc0(param_1,param_2,&DAT_100ef0118,FUN_100652960);
  return;
}



/* Address: 0x100649254 | thunk_FUN_10064b714 */

void thunk_FUN_10064b714(void)

{
  FUN_10064b714();
  return;
}



/* Address: 0x100649258 | FUN_100649258 */

void FUN_100649258(undefined8 param_1,undefined8 param_2)

{
  FUN_10064adc0(param_1,param_2,&DAT_100ef0140,FUN_10065296c);
  return;
}



/* Address: 0x10064926c | FUN_10064926c */

undefined8 FUN_10064926c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  Optional OVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar14 = *unaff_x20;
  lVar12 = *param_1;
  lVar18 = *(long *)(lVar14 + 0x50);
  local_68 = param_1;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var,OVar5.value);
  lVar15 = *(long *)(lVar12 + 0x50);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var_00,OVar5.value);
  lVar6 = 0;
  local_98 = lVar13;
  local_80 = lVar12;
  _swift_getTupleTypeMetadata2(0,lVar13,lVar12,"t u ",0);
  lVar10 = (long)&local_a0 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(long *)(lVar12 + -8);
  lVar16 = lVar10 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(lVar13 + -8);
  lVar12 = lVar16 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar14 + 0x60));
  uVar2 = *puVar1;
  uVar9 = puVar1[1];
  uVar7 = 0;
  local_70 = uVar9;
  _swift_getTupleTypeMetadata2(0,lVar18,lVar15,0,0);
  uVar8 = uVar2;
  local_78 = uVar2;
  FUN_1006528a4(uVar2,uVar9,uVar7);
  uVar9 = 0;
  local_90 = uVar8;
  FUN_100663960(0,lVar6);
  pcVar17 = *(code **)(*(long *)(lVar18 + -8) + 0x38);
  local_a0 = uVar9;
  _swift_unknownObjectRetain(uVar2);
  (*pcVar17)(lVar12,1,1,lVar18);
  (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar16,1,1,lVar15);
  iVar3 = *(int *)(lVar6 + 0x30);
  (**(code **)(lVar13 + 0x20))(lVar10,lVar12,local_98);
  (**(code **)(local_88 + 0x20))(lVar10 + iVar3,lVar16,local_80);
  FUN_100663568();
  puVar11 = &DAT_100ef0168;
  _swift_allocObject(&DAT_100ef0168,0x30,7);
  uVar2 = local_90;
  *(long *)(puVar11 + 0x10) = lVar15;
  *(long **)(puVar11 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar11 + 0x20) = local_90;
  *(long *)(puVar11 + 0x28) = lVar10;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(lVar10);
  FUN_10064bde0(FUN_10065298c,puVar11);
  _swift_release(puVar11);
  plVar4 = local_68;
  uVar9 = local_78;
  FUN_100647054(local_78,local_70);
  puVar11 = &DAT_100ef0190;
  _swift_allocObject(&DAT_100ef0190,0x30,7);
  *(long **)(puVar11 + 0x10) = unaff_x20;
  *(long **)(puVar11 + 0x18) = plVar4;
  *(undefined8 *)(puVar11 + 0x20) = uVar2;
  *(long *)(puVar11 + 0x28) = lVar10;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(lVar10);
  _swift_retain(plVar4);
  FUN_10064bde0(FUN_1006529d4,puVar11);
  _swift_release(puVar11);
  _swift_release(uVar9);
  _swift_release(lVar10);
  return uVar2;
}



/* Address: 0x10064950c | FUN_10064950c */

long FUN_10064950c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  lVar4 = 0;
  FUN_1006529e0();
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  _swift_allocObject(lVar4,*(undefined4 *)(lVar4 + 0x30),*(undefined2 *)(lVar4 + 0x34));
  thunk_FUN_10064a354(uVar2,uVar3,&stack0xffffffffffffffb0 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
  _swift_unknownObjectRetain(uVar2);
  lVar5 = lVar4;
  FUN_10064926c(lVar4);
  _swift_release(lVar4);
  return lVar5;
}



/* Address: 0x1006495e4 | thunk_FUN_10064bde0 */

void thunk_FUN_10064bde0(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long *unaff_x20;
  code *pcVar6;
  
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  uVar4 = uVar3;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_1006486b4(param_1,param_2);
    return;
  }
  puVar5 = &DAT_100ef02d0;
  _swift_allocObject(&DAT_100ef02d0,0x28,7);
  *(long **)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcVar6 = *(code **)(uVar2 + 0x18);
  _swift_retain();
  _swift_retain(param_2);
  (*pcVar6)(FUN_100652c10,puVar5,uVar3,uVar2);
  _swift_release(puVar5);
  return;
}



/* Address: 0x1006495e8 | FUN_1006495e8 */

void FUN_1006495e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_release(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x10064961c | FUN_10064961c */

undefined1  [16] FUN_10064961c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  FUN_100011128();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100649648 | FUN_100649648 */

void FUN_100649648(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_100004550(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x10064967c | FUN_10064967c */

void FUN_10064967c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  
  if (*unaff_x20 == 0) {
    *unaff_x20 = param_1;
    unaff_x20[1] = param_2;
  }
  else {
    uVar5 = unaff_x20[2];
    if (uVar5 != 0) {
      _swift_retain(param_2);
      uVar4 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar3 = uVar5;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
        FUN_1006243a4(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar5 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1006243a4(uVar4,uVar5 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
      lVar1 = uVar4 + uVar5 * 0x10;
      *(long *)(lVar1 + 0x20) = param_1;
      *(long *)(lVar1 + 0x28) = param_2;
      unaff_x20[2] = uVar4;
      return;
    }
    puVar2 = &DAT_100fd7840;
    FUN_1000f7830(&DAT_100fd7840,&DAT_100c69420);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(long *)(puVar2 + 0x20) = param_1;
    *(long *)(puVar2 + 0x28) = param_2;
    unaff_x20[2] = (long)puVar2;
  }
  _swift_retain(param_2);
  return;
}



/* Address: 0x100649784 | FUN_100649784 */

void FUN_100649784(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_58;
  undefined8 uStack_50;
  long local_48;
  
  if (param_1 == 0) {
    FUN_1006524e8(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else if (param_3 == 0) {
    puVar1 = &DAT_100fd7840;
    FUN_1000f7830(&DAT_100fd7840,&DAT_100c69420);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(long *)(puVar1 + 0x20) = param_1;
    *(undefined8 *)(puVar1 + 0x28) = param_2;
    FUN_100011128(param_1,param_2);
    FUN_1006524e8(puVar1);
    _swift_setDeallocating(puVar1);
    FUN_1006529ec(puVar1 + 0x20);
  }
  else {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar2 = param_2;
    lVar3 = param_3;
    FUN_1006524e8();
    local_58 = puVar1;
    uStack_50 = uVar2;
    local_48 = lVar3;
    FUN_100649880(&local_58,param_1,param_2,param_3);
  }
  return;
}



/* Address: 0x100649880 | FUN_100649880 */

void FUN_100649880(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (param_4 == 0) {
    _swift_retain(param_3);
    FUN_1006376ac(param_2,param_3);
  }
  else {
    lVar3 = param_1[2] - param_1[1];
    if (param_1[2] < param_1[1]) {
      lVar3 = lVar3 + *(long *)(*param_1 + 0x10);
    }
    if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100649988);
      (*pcVar1)();
    }
    lVar2 = lVar3 + 1 + *(long *)(param_4 + 0x10);
    if (SCARRY8(lVar3 + 1,*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10064998c);
      (*pcVar1)();
    }
    if (*(long *)(*param_1 + 0x10) < lVar2) {
      FUN_1006322e0();
      FUN_100011128(param_2,param_3);
      _swift_bridgeObjectRetain(param_4);
      FUN_1006481f8(lVar2);
    }
    else {
      FUN_100011128(param_2,param_3);
      _swift_bridgeObjectRetain(param_4);
    }
    FUN_1006376ac(param_2,param_3);
    FUN_100652718(param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  FUN_100004550(param_2,param_3);
  return;
}



/* Address: 0x10064998c | FUN_10064998c */

void FUN_10064998c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006528a4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100649994 | FUN_100649994 */

void FUN_100649994(void)

{
  FUN_1006499b0();
  return;
}



/* Address: 0x1006499b0 | FUN_1006499b0 */

void FUN_1006499b0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar4 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    (*param_4)(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar4);
    return;
  }
  _swift_allocObject(param_5,0x21,7);
  *(long *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(char *)(param_5 + 0x20) = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar5)(param_6,param_5,uVar2,lVar1);
  _swift_release(param_5);
  return;
}



/* Address: 0x100649ab8 | FUN_100649ab8 */

void FUN_100649ab8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  Result RVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long lVar5;
  
  puVar4 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar3.value);
  lVar10 = *(long *)(lVar5 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  puVar1 = (ulong *)((long)param_2 + *(long *)(*param_2 + 0x60));
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  uVar7 = uVar6;
  uVar8 = uVar2;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar7 & 1) != 0) {
    FUN_100649e9c(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,uVar8);
    _swift_bridgeObjectRelease(puVar4);
    return;
  }
  (**(code **)(lVar10 + 0x10))(auStack_70 + -(lVar11 + 0xfU & 0xfffffffffffffff0),param_1,lVar5);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ef01b8;
  local_68 = param_3;
  _swift_allocObject(&DAT_100ef01b8,uVar8 + lVar11,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = local_68;
  *(long **)(puVar4 + 0x18) = param_2;
  (**(code **)(lVar10 + 0x20))
            (puVar4 + uVar8,auStack_70 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar5);
  pcVar9 = *(code **)(uVar2 + 0x18);
  _swift_retain(param_2);
  (*pcVar9)(FUN_100652acc,puVar4,uVar6,uVar2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100649c4c | FUN_100649c4c */

undefined8 FUN_100649c4c(undefined8 param_1)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  long lVar3;
  long lVar4;
  
  lVar9 = *unaff_x20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  lVar10 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = (undefined8 *)((long)auStack_90 - uVar6);
  lVar8 = (long)puVar7 - uVar6;
  lVar11 = *(long *)(lVar9 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar11,auStack_78,0,0);
  (**(code **)(lVar10 + 0x10))(lVar8,(long)unaff_x20 + lVar11,lVar4);
  lVar12 = *(long *)(lVar3 + -8);
  lVar9 = lVar8;
  (**(code **)(lVar12 + 0x30))(lVar8,1,lVar3);
  (**(code **)(lVar10 + 8))(lVar8,lVar4);
  uVar5 = 0;
  if ((int)lVar9 == 1) {
    *puVar7 = param_1;
    _swift_storeEnumTagMultiPayload(puVar7,lVar3,1);
    (**(code **)(lVar12 + 0x38))(puVar7,0,1,lVar3);
    _swift_beginAccess((long)unaff_x20 + lVar11,auStack_90,0x21,0);
    _swift_errorRetain(param_1);
    (**(code **)(lVar10 + 0x28))((long)unaff_x20 + lVar11,puVar7,lVar4);
    _swift_endAccess(auStack_90);
    puVar7 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
    _swift_beginAccess(puVar7,auStack_90,1,0);
    uVar5 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
  }
  return uVar5;
}



/* Address: 0x100649e00 | FUN_100649e00 */

void FUN_100649e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100649c4c(param_2);
  FUN_1006486f8();
  FUN_100004550(param_2,uVar1);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100649e4c | thunk_FUN_100649ab8 */

void thunk_FUN_100649ab8(void)

{
  FUN_100649ab8();
  return;
}



/* Address: 0x100649e50 | FUN_100649e50 */

void FUN_100649e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100649e9c(param_2);
  FUN_1006486f8();
  FUN_100004550(param_2,uVar1);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100649e9c | FUN_100649e9c */

undefined8 FUN_100649e9c(undefined8 param_1)

{
  undefined8 *puVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lVar4;
  long lVar5;
  
  lVar10 = *unaff_x20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,OVar3.value);
  lVar11 = *(long *)(lVar5 + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_90 + -uVar7;
  lVar9 = (long)puVar8 - uVar7;
  lVar12 = *(long *)(lVar10 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar12,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(lVar9,(long)unaff_x20 + lVar12,lVar5);
  lVar13 = *(long *)(lVar4 + -8);
  lVar10 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,lVar4);
  (**(code **)(lVar11 + 8))(lVar9,lVar5);
  uVar6 = 0;
  if ((int)lVar10 == 1) {
    (**(code **)(lVar13 + 0x10))(puVar8,param_1,lVar4);
    (**(code **)(lVar13 + 0x38))(puVar8,0,1,lVar4);
    _swift_beginAccess((long)unaff_x20 + lVar12,auStack_90,0x21,0);
    (**(code **)(lVar11 + 0x28))((long)unaff_x20 + lVar12,puVar8,lVar5);
    _swift_endAccess(auStack_90);
    puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
    _swift_beginAccess(puVar1,auStack_90,1,0);
    uVar6 = *puVar1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
  }
  return uVar6;
}



/* Address: 0x10064a048 | FUN_10064a048 */

void FUN_10064a048(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))
            (param_1,(long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x10064a0e4 | FUN_10064a0e4 */

void FUN_10064a0e4(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0x21,0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))
            ((long)unaff_x20 + lVar2,param_1,CONCAT71(extraout_var,OVar1.value));
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x10064a188 | FUN_10064a188 */

undefined1  [16] FUN_10064a188(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10064a1c8 | FUN_10064a1c8 */

void FUN_10064a1c8(void)

{
  long *unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)));
  return;
}



/* Address: 0x10064a1f8 | FUN_10064a1f8 */

undefined8 FUN_10064a1f8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[2];
  FUN_100011128(uVar2,puVar1[1]);
  _swift_bridgeObjectRetain(uVar3);
  return uVar2;
}



/* Address: 0x10064a268 | FUN_10064a268 */

void FUN_10064a268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  FUN_100004550(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x10064a2e0 | FUN_10064a2e0 */

undefined1  [16] FUN_10064a2e0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10064a320 | thunk_FUN_100652808 */

void thunk_FUN_100652808(void)

{
  FUN_100652808();
  return;
}



/* Address: 0x10064a324 | FUN_10064a324 */

ulong FUN_10064a324(ulong param_1)

{
  _swift_release();
  return param_1 ^ 0xbf15ca5d;
}



/* Address: 0x10064a350 | thunk_FUN_10064a354 */

void thunk_FUN_10064a354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  lVar3 = *(long *)(lVar3 + 0x50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)unaff_x20 + lVar4,param_3,lVar3);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  _swift_storeEnumTagMultiPayload((long)unaff_x20 + lVar4,lVar3,0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)unaff_x20 + lVar4,0,1,lVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x10064a354 | FUN_10064a354 */

void FUN_10064a354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  lVar3 = *(long *)(lVar3 + 0x50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)unaff_x20 + lVar4,param_3,lVar3);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  _swift_storeEnumTagMultiPayload((long)unaff_x20 + lVar4,lVar3,0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)unaff_x20 + lVar4,0,1,lVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x10064a41c | FUN_10064a41c */

void FUN_10064a41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar4;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  *(undefined8 *)((long)unaff_x20 + lVar4) = param_3;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  _swift_storeEnumTagMultiPayload((long)unaff_x20 + lVar4,lVar3,1);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)unaff_x20 + lVar4,0,1,lVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x10064a4d0 | FUN_10064a4d0 */

void FUN_10064a4d0(void)

{
  undefined8 *puVar1;
  long lVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  Swift::Result::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 8))
            ((long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar3.value));
  _swift_unknownObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  uVar4 = puVar1[2];
  FUN_100004550(*puVar1,puVar1[1]);
  _swift_bridgeObjectRelease(uVar4);
  return;
}


