/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100895468 | FUN_100895468 */

undefined8 FUN_100895468(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe9d08;
  FUN_1000f7830(&DAT_100fe9d08,&DAT_100c80a50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008954b0 | FUN_1008954b0 */

undefined8 FUN_1008954b0(undefined8 param_1)

{
  FUN_1006c6f98();
  return param_1;
}



/* Address: 0x1008954e4 | FUN_1008954e4 */

undefined8 * FUN_1008954e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1[1] != 0x22) {
    uVar2 = param_2[1];
    if (uVar2 == 0x22) {
      FUN_1008954b0(param_1);
    }
    else if (0x21 < (ulong)param_1[1]) {
      if (0x21 < uVar2) {
        *param_1 = *param_2;
        param_1[1] = uVar2;
        _swift_bridgeObjectRelease();
        goto LAB_10089553c;
      }
      FUN_100895468(param_1);
    }
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
LAB_10089553c:
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x100895574 | FUN_100895574 */

int FUN_100895574(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1008955d0 | FUN_1008955d0 */

void FUN_1008955d0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x10089562c | FUN_10089562c */

undefined1  [16] FUN_10089562c(void)

{
  return ZEXT816(0x100f0a270);
}



/* Address: 0x10089563c | FUN_10089563c */

undefined8
FUN_10089563c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_100899024(param_1,param_2,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1008956b4 | FUN_1008956b4 */

undefined8 FUN_1008956b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100899024();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1008956e4 | FUN_1008956e4 */

void FUN_1008956e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) != 0) {
    _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0x21,0);
    FUN_10087d04c(param_2);
    _swift_endAccess(auStack_58);
    return;
  }
  puVar3 = &DAT_100fe90f8;
  puVar4 = &DAT_100c7f5d0;
  FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
  thunk_FUN_100885488();
  pcVar2 = *(code **)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  if ((long)pcVar2 < 2) {
    if (pcVar2 == (code *)0x0) {
      FUN_100895898(param_1,puVar3,puVar4,param_3);
      goto LAB_100895874;
    }
    if (pcVar2 == (code *)&DAT_00000001) {
      if (param_3 >> 0x38 == 2) {
        FUN_100877974();
        *(undefined1 *)(unaff_x20 + 0x38) = 1;
        return;
      }
      goto LAB_100895874;
    }
  }
  else {
    if (pcVar2 == (code *)0x3) {
      FUN_100626ce0(param_2);
      goto LAB_100895874;
    }
    if (pcVar2 == (code *)0x2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100895894);
      (*pcVar2)();
    }
    if (pcVar2 == (code *)0x4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100895898);
      (*pcVar2)();
    }
  }
  if (param_3 >> 0x38 == 2) {
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
    _swift_retain(uVar1);
    (*pcVar2)();
    FUN_100877974(puVar3,puVar4,param_3,2);
    FUN_10089944c(pcVar2,uVar1);
    return;
  }
LAB_100895874:
  FUN_100877974();
  return;
}



/* Address: 0x100895898 | FUN_100895898 */

void FUN_100895898(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  String SVar13;
  undefined1 auStack_90 [24];
  undefined *local_78 [3];
  
  if (param_4 >> 0x38 != 0) {
    lVar4 = param_1;
    FUN_100899924();
    puVar5 = &DAT_100f0a390;
    _swift_allocError(&DAT_100f0a390,lVar4,0,0);
    FUN_100626c9c();
    _swift_errorRelease(puVar5);
    FUN_100895fd0(param_1,param_2,param_3,param_4);
    return;
  }
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(param_3);
  lVar4 = 0x65646172677075;
  FUN_10089dad4(0x65646172677075,&DAT_e700000000000000,param_3,param_4);
  uVar12 = *(ulong *)(lVar4 + 0x10);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100892608(0,uVar12,0);
    uVar10 = 0;
    puVar11 = (undefined8 *)(lVar4 + 0x38);
    do {
      puVar5 = local_78[0];
      if (*(ulong *)(lVar4 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100895df4);
        (*pcVar8)();
      }
      SVar13 = *(String *)(puVar11 + -3);
      uVar9 = *puVar11;
      _swift_bridgeObjectRetain(uVar9);
      SVar13 = Swift::String::__fromSubstring(SVar13);
      _swift_bridgeObjectRelease(uVar9);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_78[0] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100892608(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_78[0];
      uVar10 = uVar10 + 1;
      *(ulong *)(local_78[0] + 0x10) = uVar1 + 1;
      *(String *)(local_78[0] + uVar1 * 0x10 + 0x20) = SVar13;
      puVar11 = puVar11 + 4;
    } while (uVar12 != uVar10);
    _swift_bridgeObjectRelease(lVar4);
    lVar4 = *(long *)(puVar5 + 0x10);
  }
  if (lVar4 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 1;
    FUN_10089944c(uVar9,uVar2);
    lVar4 = param_1;
    FUN_100896140(param_1,param_2,param_3,param_4,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = &DAT_100f0a4d0;
    _swift_allocObject(&DAT_100f0a4d0,0x38,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(long *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    puVar5[0x36] = (char)(param_4 >> 0x30);
    *(short *)(puVar5 + 0x34) = (short)(param_4 >> 0x20);
    *(int *)(puVar5 + 0x30) = (int)param_4;
    puVar5[0x37] = 0;
    puVar6 = &DAT_100f0a4f8;
    _swift_allocObject(&DAT_100f0a4f8,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    *(code **)(puVar6 + 0x18) = FUN_1008999b0;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    _swift_beginAccess(lVar4 + 0x10,local_78,0,0);
    cVar3 = *(char *)(lVar4 + 0x20);
    if (cVar3 == '\x01') {
      FUN_100878fa0(param_2,param_3,param_4,0);
      _swift_retain(param_1);
      _swift_retain(unaff_x20);
      _swift_retain(puVar5);
      _swift_retain(lVar4);
    }
    else if (cVar3 == -1) {
      _swift_beginAccess(lVar4 + 0x38,auStack_90,0x21,0);
      FUN_100878fa0(param_2,param_3,param_4,0);
      _swift_retain(param_1);
      _swift_retain(unaff_x20);
      _swift_retain(puVar5);
      _swift_retain(lVar4);
      FUN_10064967c(FUN_1008999ec,puVar6);
      _swift_endAccess(auStack_90);
    }
    else {
      pcVar8 = *(code **)(lVar4 + 0x10);
      if (pcVar8 == (code *)0x0) {
        FUN_100878fa0(param_2,param_3,param_4,0);
        _swift_retain(param_1);
        _swift_retain(unaff_x20);
        _swift_retain(puVar5);
        _swift_retain(lVar4);
        FUN_100895fd0(param_1,param_2,param_3,param_4);
      }
      else {
        uVar9 = *(undefined8 *)(lVar4 + 0x18);
        puVar7 = &DAT_100f0a520;
        _swift_allocObject(&DAT_100f0a520,0x20,7);
        *(code **)(puVar7 + 0x10) = pcVar8;
        *(undefined8 *)(puVar7 + 0x18) = uVar9;
        if (*(long *)(unaff_x20 + 0x40) != 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100895df8);
          (*pcVar8)();
        }
        *(code **)(unaff_x20 + 0x40) = FUN_1000386a0;
        *(undefined **)(unaff_x20 + 0x48) = puVar7;
        if (*(char *)(unaff_x20 + 0x38) == '\x01') {
          FUN_100899a1c(pcVar8,uVar9,cVar3);
          FUN_100878fa0(param_2,param_3,param_4,0);
          _swift_retain(param_1);
          _swift_retain(unaff_x20);
          _swift_retain(puVar5);
          _swift_retain(lVar4);
          FUN_100899a1c(pcVar8,uVar9,cVar3);
          _swift_retain(puVar7);
          (*pcVar8)();
          _swift_release(puVar7);
          FUN_100899a44(pcVar8,uVar9,cVar3);
        }
        else {
          FUN_100878fa0(param_2,param_3,param_4,0);
          _swift_retain(param_1);
          _swift_retain(unaff_x20);
          _swift_retain(puVar5);
          _swift_retain(lVar4);
          FUN_100899a1c(pcVar8,uVar9,cVar3);
        }
      }
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_bridgeObjectRelease(param_3);
    _swift_release(param_2);
    _swift_release(lVar4);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
    return;
  }
  _swift_bridgeObjectRelease(puVar5);
  FUN_100895fd0(param_1,param_2,param_3,param_4);
  _swift_bridgeObjectRelease(param_3);
  _swift_release(param_2);
  return;
}



/* Address: 0x100895df8 | FUN_100895df8 */

void FUN_100895df8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_80,0,0);
  do {
    uVar5 = *(ulong *)(unaff_x20 + 0x58);
    uVar2 = *(ulong *)(unaff_x20 + 0x60);
    lVar3 = uVar2 - uVar5;
    if ((long)uVar2 < (long)uVar5) {
      lVar3 = lVar3 + *(long *)(*(long *)(unaff_x20 + 0x50) + 0x10);
    }
    if (lVar3 < 1) {
      FUN_100627ea0(param_2);
      return;
    }
    while( true ) {
      uVar4 = *(ulong *)(unaff_x20 + 0x50);
      lVar3 = uVar2 - uVar5;
      if ((long)uVar2 < (long)uVar5) {
        lVar3 = lVar3 + *(long *)(uVar4 + 0x10);
      }
      if (lVar3 < 1) break;
      _swift_beginAccess(unaff_x20 + 0x50,auStack_e8,0x21,0);
      if (uVar2 == uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fb8);
        (*pcVar1)();
      }
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fbc);
        (*pcVar1)();
      }
      if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fc0);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar4 + 0x10);
      if (uVar6 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fc4);
        (*pcVar1)();
      }
      FUN_10087b514(uVar4 + uVar5 * 0x48 + 0x20,&local_130);
      if (0xfe < local_f0._1_1_) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fd0);
        (*pcVar1)();
      }
      uStack_a8 = uStack_108;
      local_b0 = local_110;
      uStack_98 = uStack_f8;
      uStack_a0 = uStack_100;
      local_90 = local_f0;
      uStack_c8 = uStack_128;
      local_d0 = local_130;
      uStack_b8 = uStack_118;
      uStack_c0 = uStack_120;
      if ((long)uVar5 <= (long)uVar2) {
        uVar6 = 0;
      }
      if ((long)((uVar2 - uVar5) + uVar6) < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fc8);
        (*pcVar1)();
      }
      uVar2 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x50) = uVar4;
      if ((uVar2 & 1) == 0) {
        FUN_10089875c();
      }
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      local_f0 = 0xff00;
      *(ulong *)(unaff_x20 + 0x50) = uVar4;
      if (*(ulong *)(uVar4 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100895fcc);
        (*pcVar1)();
      }
      FUN_100899460(&local_130,uVar4 + uVar5 * 0x48 + 0x20);
      *(ulong *)(unaff_x20 + 0x50) = uVar4;
      *(ulong *)(unaff_x20 + 0x58) = *(long *)(uVar4 + 0x10) + 0x1ffffffffU & uVar5 + 1;
      _swift_endAccess(auStack_e8);
      FUN_100626ce0(&local_d0);
      FUN_1005e70f4(&local_d0);
      uVar5 = *(ulong *)(unaff_x20 + 0x58);
      uVar2 = *(ulong *)(unaff_x20 + 0x60);
    }
    FUN_100626d4c();
  } while( true );
}



/* Address: 0x100895fd0 | FUN_100895fd0 */

void FUN_100895fd0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 local_81;
  undefined *local_80;
  undefined1 local_57;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 3;
  FUN_10089944c(uVar3,uVar1);
  local_81 = (undefined1)(param_4 >> 0x38);
  uStack_84 = (undefined2)(param_4 >> 0x20);
  uStack_82 = (undefined1)(param_4 >> 0x30);
  local_89 = (undefined1)((ulong)param_3 >> 0x38);
  uStack_90 = (undefined7)param_3;
  local_98 = param_2;
  uStack_88 = (int)param_4;
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    puVar2 = &DAT_100fe90f8;
    FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
    local_57 = 2;
    local_80 = puVar2;
    FUN_100878fa0(param_2,param_3,param_4,param_4 >> 0x38);
  }
  else {
    puVar2 = &DAT_100fe90f8;
    FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
    local_57 = 2;
    local_80 = puVar2;
    FUN_100878fa0(param_2,param_3,param_4,param_4 >> 0x38);
    FUN_100626ce0(&local_98);
    FUN_1005e70f4(&local_98);
    local_98 = 0;
    uStack_90 = 0;
    local_89 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_82 = 0;
    local_81 = 2;
    local_57 = 2;
    local_80 = puVar2;
  }
  FUN_100626ce0(&local_98);
  FUN_1005e70f4(&local_98);
  FUN_100626d4c();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _swift_retain(uVar3);
  thunk_FUN_1006313ac(param_1,0,uVar3);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100896140 | FUN_100896140 */

undefined8
FUN_100896140(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  Substring SVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  String SVar10;
  
  lVar4 = 0x697463656e6e6f63;
  FUN_10089dad4(0x697463656e6e6f63,0xea00000000006e6f);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar9 = *(long *)(lVar4 + 0x10);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100892608(0,lVar9,0);
    puVar8 = (undefined8 *)(lVar4 + 0x38);
    do {
      SVar1.unknown = (undefined *)puVar8[-3];
      uVar3 = *puVar8;
      _swift_bridgeObjectRetain(uVar3);
      SVar10 = Swift::Substring::lowercased(SVar1);
      _swift_bridgeObjectRelease(uVar3);
      uVar2 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        FUN_100892608(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(String *)(puVar7 + uVar2 * 0x10 + 0x20) = SVar10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _swift_bridgeObjectRelease(lVar4);
  }
  puVar5 = puVar7;
  FUN_1008b3d44(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar9 = *(long *)(param_3 + 0x10);
  if (lVar9 != 0) {
    FUN_100892608(0,lVar9,0);
    puVar8 = (undefined8 *)(param_3 + 0x28);
    do {
      SVar10.bridgeObject = (void *)*puVar8;
      SVar10.str = (char *)puVar8[-1];
      SVar10 = Swift::String::lowercased(SVar10);
      uVar2 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        FUN_100892608(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(String *)(puVar7 + uVar2 * 0x10 + 0x20) = SVar10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar6 = puVar7;
  FUN_1008b3d44(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  FUN_100896460(param_1,param_5,0,param_2,param_3,param_4,puVar6,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(puVar6);
  return param_1;
}



/* Address: 0x100896394 | FUN_100896394 */

void FUN_100896394(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)*param_1;
  if (pcVar2 == (code *)0x0) {
    FUN_100895fd0(param_3,param_4,param_5,param_6);
    return;
  }
  uVar3 = param_1[1];
  puVar1 = &DAT_100f0a7a0;
  _swift_allocObject(&DAT_100f0a7a0,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  if (*(long *)(param_2 + 0x40) == 1) {
    *(code **)(param_2 + 0x40) = thunk_FUN_1000386a0;
    *(undefined **)(param_2 + 0x48) = puVar1;
    if (*(char *)(param_2 + 0x38) == '\x01') {
      FUN_100011128(pcVar2,uVar3);
      _swift_retain(puVar1);
      (*pcVar2)();
      _swift_release(puVar1);
      return;
    }
    _swift_retain(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100896460);
  (*pcVar2)();
}



/* Address: 0x100896460 | FUN_100896460 */

undefined8 *
FUN_100896460(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6,ulong param_7,ulong param_8)

{
  String *pSVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  ushort uVar6;
  undefined1 uVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  code *pcVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  String SVar27;
  undefined *local_160;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [40];
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  long lStack_70;
  void *pvVar15;
  
  if (param_3 == *(ulong *)(param_2 + 0x10)) {
    uVar3 = *(undefined8 *)(param_1[4] + 0x30);
    uVar25 = *(undefined8 *)(param_1[4] + 0x38);
    uVar26 = uVar3;
    _swift_getObjectType(uVar3);
    local_90 = 0;
    uStack_88 = 0;
    _swift_bridgeObjectRetain(param_2);
    _swift_unknownObjectRetain(uVar3);
    puVar11 = &DAT_100fe9e70;
    FUN_1000f7830(&DAT_100fe9e70,&DAT_100c80c98);
    puVar12 = &local_90;
    FUN_1006412ac(puVar12,uVar26,puVar11,uVar25);
    _swift_bridgeObjectRelease(param_2);
    _swift_unknownObjectRelease(uVar3);
    return puVar12;
  }
  if (*(ulong *)(param_2 + 0x10) <= param_3) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10089730c);
    (*pcVar16)();
  }
  lVar2 = param_2 + param_3 * 0x10;
  pSVar1 = (String *)(lVar2 + 0x20);
  pcVar4 = pSVar1->str;
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  lVar2 = param_3 + 1;
  lVar19 = *(long *)(unaff_x20 + 0x10);
  SVar27 = Swift::String::lowercased(*pSVar1);
  pvVar15 = SVar27.bridgeObject;
  if (*(long *)(lVar19 + 0x10) == 0) {
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = (undefined *)0x0;
    local_a8 = 0;
    uStack_b0 = 0;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(lVar19);
    FUN_100071370(SVar27.str);
    if (((ulong)SVar27.bridgeObject & 1) != 0) {
      FUN_100076688(*(long *)(lVar19 + 0x38) + (long)SVar27.str * 0x28,&local_c0);
      _swift_bridgeObjectRelease(pvVar15);
      _swift_bridgeObjectRelease(lVar19);
      if (local_a8 == 0) goto LAB_1008966c4;
      FUN_100076508(&local_c0,&local_90);
      lVar19 = lStack_70;
      lVar9 = local_78;
      FUN_100004640(&local_90,local_78);
      (**(code **)(lVar19 + 0x10))(lVar9,lVar19);
      lVar19 = *(long *)(lVar9 + 0x10);
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(lVar9);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        local_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_100892608(0,lVar19,0);
        puVar12 = (undefined8 *)(lVar9 + 0x28);
        do {
          puVar11 = local_c0;
          SVar27.bridgeObject = (void *)*puVar12;
          SVar27.str = (char *)puVar12[-1];
          SVar27 = Swift::String::lowercased(SVar27);
          uVar20 = *(ulong *)(puVar11 + 0x10);
          local_c0 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar20) {
            FUN_100892608(1 < *(ulong *)(puVar11 + 0x18),uVar20 + 1,1);
          }
          puVar11 = local_c0;
          puVar12 = puVar12 + 2;
          *(ulong *)(local_c0 + 0x10) = uVar20 + 1;
          *(String *)(local_c0 + uVar20 * 0x10 + 0x20) = SVar27;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        _swift_bridgeObjectRelease(lVar9);
      }
      puVar10 = puVar11;
      FUN_1008b3d44(puVar11);
      _swift_bridgeObjectRelease(puVar11);
      uVar20 = param_7;
      FUN_1008af79c(param_7,puVar10);
      if ((uVar20 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar10);
      }
      else {
        uVar20 = param_8;
        FUN_1008af79c(param_8,puVar10);
        _swift_bridgeObjectRelease(puVar10);
        if ((uVar20 & 1) != 0) {
          puVar11 = &DAT_100fe9538;
          FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
          _swift_allocObject();
          *(undefined8 *)(puVar11 + 0x18) = 4;
          *(undefined8 *)(puVar11 + 0x10) = 2;
          *(undefined8 *)(puVar11 + 0x20) = 0x697463656e6e6f63;
          *(undefined8 *)(puVar11 + 0x28) = 0xea00000000006e6f;
          *(undefined8 *)(puVar11 + 0x30) = 0x65646172677075;
          *(undefined1 **)(puVar11 + 0x38) = &DAT_e700000000000000;
          *(undefined8 *)(puVar11 + 0x40) = 0x65646172677075;
          *(undefined1 **)(puVar11 + 0x48) = &DAT_e700000000000000;
          *(char **)(puVar11 + 0x50) = pcVar4;
          *(undefined8 *)(puVar11 + 0x58) = uVar3;
          lVar17 = param_1[4];
          FUN_100004640(&local_90,local_78);
          uVar25 = uVar3;
          _swift_bridgeObjectRetain(uVar3);
          FUN_100627f08();
          uVar26 = uVar25;
          (**(code **)(lStack_70 + 0x18))();
          _swift_release(puVar11);
          _swift_unknownObjectRelease(uVar25);
          lVar19 = *(long *)(lVar17 + 0x30);
          lVar9 = lVar19;
          _swift_unknownObjectRetain();
          FUN_1008afb94();
          _swift_release(uVar26);
          _swift_unknownObjectRelease(lVar19);
          _swift_getObjectType(*(undefined8 *)(lVar9 + 0x20));
          FUN_100642338();
          FUN_100076688(&local_90,&local_c0);
          FUN_100076688(&local_c0,auStack_e8);
          puVar11 = &DAT_100f0a548;
          _swift_allocObject(&DAT_100f0a548,0x78,7);
          *(long *)(puVar11 + 0x10) = unaff_x20;
          *(long *)(puVar11 + 0x18) = lVar17;
          *(undefined8 **)(puVar11 + 0x20) = param_1;
          *(undefined8 *)(puVar11 + 0x28) = param_4;
          *(undefined8 *)(puVar11 + 0x30) = param_5;
          uVar7 = (undefined1)param_6;
          puVar11[0x38] = uVar7;
          FUN_100076508(&local_c0,puVar11 + 0x40);
          *(char **)(puVar11 + 0x68) = pcVar4;
          *(undefined8 *)(puVar11 + 0x70) = uVar3;
          puVar12 = (undefined8 *)&DAT_100fe9e68;
          FUN_1000f7830(&DAT_100fe9e68,&DAT_100c80c90);
          puVar13 = puVar12;
          _swift_allocObject();
          uVar25 = *(undefined8 *)(lVar9 + 0x20);
          puVar13[6] = *(undefined8 *)(lVar9 + 0x28);
          puVar13[5] = uVar25;
          puVar13[2] = 0;
          puVar13[3] = 0;
          *(undefined1 *)(puVar13 + 4) = 0xff;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar10 = &DAT_100f0a570;
          _swift_allocObject(&DAT_100f0a570,0x30,7);
          *(undefined8 **)(puVar10 + 0x10) = puVar13;
          *(long *)(puVar10 + 0x18) = lVar9;
          *(code **)(puVar10 + 0x20) = FUN_100899ac0;
          *(undefined **)(puVar10 + 0x28) = puVar11;
          _swift_beginAccess(lVar9 + 0x10,auStack_100,0,0);
          uVar6 = *(ushort *)(lVar9 + 0x18);
          if (uVar6 >> 8 < 0xff) {
            pcVar16 = *(code **)(lVar9 + 0x10);
            bVar8 = (uVar6 & 0xff00) != 0x100;
            if (bVar8) {
              FUN_100076688(auStack_e8,auStack_128);
              local_160 = &DAT_100f0a610;
              _swift_allocObject(&DAT_100f0a610,0x88,7);
              *(long *)(local_160 + 0x10) = unaff_x20;
              *(long *)(local_160 + 0x18) = lVar17;
              *(undefined8 **)(local_160 + 0x20) = param_1;
              *(undefined8 *)(local_160 + 0x28) = param_4;
              *(undefined8 *)(local_160 + 0x30) = param_5;
              local_160[0x38] = uVar7;
              *(code **)(local_160 + 0x40) = pcVar16;
              local_160[0x48] = (char)uVar6;
              FUN_100076508(auStack_128,local_160 + 0x50);
              *(char **)(local_160 + 0x78) = pcVar4;
              *(undefined8 *)(local_160 + 0x80) = uVar3;
              _swift_retain(unaff_x20);
              _swift_retain(lVar17);
              _swift_retain(param_1);
              _swift_retain(param_4);
              _swift_bridgeObjectRetain(param_5);
              _swift_bridgeObjectRetain(uVar3);
              pcVar24 = thunk_FUN_100899f90;
            }
            else {
              local_160 = (undefined *)0x0;
              pcVar24 = pcVar16;
            }
            bVar8 = !bVar8;
            uVar20 = (ulong)bVar8;
            pcVar23 = pcVar24;
            puVar22 = local_160;
            FUN_1008b1ef8(pcVar24,local_160,uVar20);
            _swift_retain_n(unaff_x20,2);
            _swift_retain_n(lVar17,2);
            _swift_retain_n(param_1,2);
            _swift_retain_n(param_4,2);
            _swift_bridgeObjectRetain_n(param_5,2);
            _swift_bridgeObjectRetain(uVar3);
            _swift_unknownObjectRetain(uVar25);
            _swift_retain(puVar13);
            _swift_retain(puVar11);
            _swift_retain(lVar9);
            FUN_100899bf0(pcVar16,uVar6);
            FUN_100899a58(pcVar24,local_160,bVar8);
          }
          else {
            _swift_beginAccess(lVar9 + 0x30,auStack_128,0x21,0);
            _swift_retain_n(unaff_x20,2);
            _swift_retain_n(lVar17,2);
            _swift_retain_n(param_1,2);
            _swift_retain_n(param_4,2);
            _swift_bridgeObjectRetain_n(param_5,2);
            _swift_bridgeObjectRetain(uVar3);
            _swift_unknownObjectRetain(uVar25);
            _swift_retain(puVar13);
            _swift_retain(puVar11);
            _swift_retain(lVar9);
            FUN_10064967c(FUN_100899afc,puVar10);
            _swift_endAccess(auStack_128);
            pcVar23 = (code *)0x0;
            puVar22 = (undefined *)0x0;
            uVar20 = 0;
          }
          FUN_1006486f8(pcVar23,puVar22,uVar20);
          FUN_100004550(pcVar23,puVar22);
          _swift_bridgeObjectRelease(param_5);
          _swift_release(param_4);
          _swift_release(param_1);
          _swift_release(lVar17);
          _swift_release(unaff_x20);
          _swift_release(puVar11);
          _swift_release(puVar10);
          _swift_bridgeObjectRelease(uVar20);
          FUN_100004594(auStack_e8);
          _swift_release(lVar9);
          _swift_bridgeObjectRelease(uVar3);
          puVar11 = &DAT_100f0a598;
          _swift_allocObject(&DAT_100f0a598,0x58,7);
          *(undefined8 **)(puVar11 + 0x10) = param_1;
          *(long *)(puVar11 + 0x18) = unaff_x20;
          *(ulong *)(puVar11 + 0x20) = param_2;
          *(long *)(puVar11 + 0x28) = lVar2;
          *(undefined8 *)(puVar11 + 0x30) = param_4;
          *(undefined8 *)(puVar11 + 0x38) = param_5;
          puVar11[0x40] = uVar7;
          *(ulong *)(puVar11 + 0x48) = param_7;
          *(ulong *)(puVar11 + 0x50) = param_8;
          _swift_allocObject(puVar12,0x50,7);
          uVar26 = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar12[5] = uVar26;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(undefined1 *)(puVar12 + 4) = 0xff;
          puVar14 = puVar12 + 7;
          *puVar14 = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
          puVar10 = &DAT_100f0a5c0;
          _swift_allocObject(&DAT_100f0a5c0,0x30,7);
          *(undefined8 **)(puVar10 + 0x10) = puVar13;
          *(undefined8 **)(puVar10 + 0x18) = puVar12;
          *(code **)(puVar10 + 0x20) = FUN_100899b5c;
          *(undefined **)(puVar10 + 0x28) = puVar11;
          _swift_beginAccess(puVar13 + 2,&local_c0,0,0);
          uVar3 = puVar13[2];
          uVar25 = puVar13[3];
          cVar5 = *(char *)(puVar13 + 4);
          if (cVar5 == '\x01') {
            _swift_retain_n(param_1,4);
            _swift_retain_n(unaff_x20,4);
            _swift_bridgeObjectRetain_n(param_2,4);
            _swift_retain_n(param_4,4);
            _swift_bridgeObjectRetain_n(param_5,4);
            _swift_bridgeObjectRetain_n(param_7,2);
            _swift_bridgeObjectRetain_n(param_8,2);
            _swift_retain(puVar13);
            _swift_unknownObjectRetain(uVar26);
            _swift_retain(puVar12);
            _swift_retain(puVar11);
            FUN_100899a1c(uVar3,uVar25,1);
            FUN_100626c9c(uVar3);
            puVar14 = param_1;
            FUN_100896460(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8);
            puVar22 = &DAT_100f0a5e8;
            _swift_allocObject(&DAT_100f0a5e8,0x20,7);
            *(undefined8 **)(puVar22 + 0x10) = puVar12;
            *(undefined8 **)(puVar22 + 0x18) = puVar14;
            _swift_beginAccess(puVar14 + 2,auStack_e8,0,0);
            uVar20 = (ulong)*(byte *)(puVar14 + 4);
            if (*(byte *)(puVar14 + 4) == 0xff) {
              _swift_beginAccess(puVar14 + 7,auStack_128,0x21,0);
              _swift_retain(puVar12);
              _swift_retain(puVar14);
              FUN_10064967c(FUN_100899be8,puVar22);
              _swift_endAccess(auStack_128);
              FUN_100899a44(uVar3,uVar25,1);
              _swift_release(param_1);
              _swift_release(unaff_x20);
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease(param_5);
              _swift_release(param_4);
              _swift_release(puVar14);
              _swift_release(puVar22);
              uVar18 = 0;
              uVar21 = 0;
              uVar20 = 0;
            }
            else {
              uVar18 = puVar14[2];
              uVar21 = puVar14[3];
              FUN_1008b1ef8(uVar18,uVar21);
              _swift_retain(puVar12);
              _swift_retain(puVar14);
              FUN_100899a44(uVar3,uVar25,1);
              _swift_release(param_1);
              _swift_release(unaff_x20);
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease(param_5);
              _swift_release(param_4);
              _swift_release(puVar14);
              _swift_release(puVar22);
            }
          }
          else {
            if (cVar5 == -1) {
              _swift_beginAccess(puVar13 + 7,auStack_e8,0x21,0);
              _swift_retain_n(param_1,3);
              _swift_retain_n(unaff_x20,3);
              _swift_bridgeObjectRetain_n(param_2,3);
              _swift_retain_n(param_4,3);
              _swift_bridgeObjectRetain_n(param_5,3);
              _swift_bridgeObjectRetain_n(param_7,2);
              _swift_bridgeObjectRetain_n(param_8,2);
              _swift_retain(puVar13);
              _swift_unknownObjectRetain(uVar26);
              _swift_retain(puVar12);
              _swift_retain(puVar11);
              FUN_10064967c(FUN_100899bd8,puVar10);
              _swift_endAccess(auStack_e8);
            }
            else {
              _swift_beginAccess(puVar12 + 2,auStack_e8,1,0);
              if (*(char *)(puVar12 + 4) == -1) {
                puVar12[2] = uVar3;
                puVar12[3] = uVar25;
                *(char *)(puVar12 + 4) = cVar5;
                _swift_beginAccess(puVar14,auStack_128,1,0);
                uVar18 = puVar12[7];
                uVar21 = puVar12[8];
                uVar20 = puVar12[9];
                *puVar14 = 0;
                puVar12[8] = 0;
                puVar12[9] = 0;
                _swift_retain_n(param_1,3);
                _swift_retain_n(unaff_x20,3);
                _swift_bridgeObjectRetain_n(param_2,3);
                _swift_retain_n(param_4,3);
                _swift_bridgeObjectRetain_n(param_5,3);
                _swift_bridgeObjectRetain_n(param_7,2);
                _swift_bridgeObjectRetain_n(param_8,2);
                _swift_retain(puVar13);
                _swift_unknownObjectRetain(uVar26);
                _swift_retain(puVar12);
                _swift_retain(puVar11);
                FUN_100899a1c(uVar3,uVar25,cVar5);
                goto LAB_100897274;
              }
              _swift_retain_n(param_1,3);
              _swift_retain_n(unaff_x20,3);
              _swift_bridgeObjectRetain_n(param_2,3);
              _swift_retain_n(param_4,3);
              _swift_bridgeObjectRetain_n(param_5,3);
              _swift_bridgeObjectRetain_n(param_7,2);
              _swift_bridgeObjectRetain_n(param_8,2);
              _swift_retain(puVar13);
              _swift_unknownObjectRetain(uVar26);
              _swift_retain(puVar12);
              _swift_retain(puVar11);
            }
            uVar18 = 0;
            uVar21 = 0;
            uVar20 = 0;
          }
LAB_100897274:
          FUN_1006486f8(uVar18,uVar21,uVar20);
          FUN_100004550(uVar18,uVar21);
          _swift_release(puVar13);
          _swift_bridgeObjectRelease(param_8);
          _swift_bridgeObjectRelease(param_7);
          _swift_release_n(param_1,2);
          _swift_release_n(unaff_x20,2);
          _swift_bridgeObjectRelease_n(param_2,3);
          _swift_bridgeObjectRelease_n(param_5,2);
          _swift_release_n(param_4,2);
          _swift_release(puVar11);
          _swift_release(puVar10);
          param_2 = uVar20;
          param_1 = puVar12;
          goto LAB_1008972f8;
        }
      }
      _swift_bridgeObjectRelease(uVar3);
      FUN_100896460(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8);
LAB_1008972f8:
      _swift_bridgeObjectRelease(param_2);
      FUN_100004594(&local_90);
      return param_1;
    }
    _swift_bridgeObjectRelease(lVar19);
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = (undefined *)0x0;
    local_a8 = 0;
    uStack_b0 = 0;
  }
  _swift_bridgeObjectRelease(pvVar15);
LAB_1008966c4:
  _swift_bridgeObjectRelease(uVar3);
  FUN_10088fa30(&local_c0);
  FUN_100896460(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_2);
  return param_1;
}



/* Address: 0x10089730c | FUN_10089730c */

void FUN_10089730c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  
  uVar3 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_100076688(param_9,auStack_88);
  puVar2 = &DAT_100f0a778;
  _swift_allocObject(&DAT_100f0a778,0x88,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  puVar2[0x38] = param_8;
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  puVar2[0x48] = uVar1;
  FUN_100076508(auStack_88,puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x78) = param_10;
  *(undefined8 *)(puVar2 + 0x80) = param_11;
  *param_1 = thunk_FUN_100899f90;
  param_1[1] = puVar2;
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(param_11);
  return;
}



/* Address: 0x100897410 | FUN_100897410 */

void FUN_100897410(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [24];
  undefined *local_88 [3];
  undefined *local_70;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 2;
  FUN_10089944c(uVar3,uVar9);
  lVar4 = param_2;
  FUN_10089789c();
  _swift_getObjectType(*(undefined8 *)(lVar4 + 0x20));
  FUN_100642338();
  puVar5 = &DAT_100f0a638;
  _swift_allocObject(&DAT_100f0a638,0x41,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  puVar5[0x30] = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  puVar5[0x40] = param_8;
  _swift_retain();
  _swift_retain(param_1);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  lVar6 = lVar4;
  FUN_1008b4194(lVar4,FUN_100899c50,puVar5);
  _swift_release(lVar4);
  _swift_release_n(puVar5,2);
  puVar5 = &DAT_100f0a660;
  _swift_allocObject(&DAT_100f0a660,0x20,7);
  *(long *)(puVar5 + 0x10) = param_2;
  *(long *)(puVar5 + 0x18) = param_1;
  _swift_retain(param_1);
  _swift_retain(puVar5);
  _swift_retain(param_2);
  lVar4 = lVar6;
  FUN_1008b4194(lVar6,FUN_100899c60,puVar5);
  _swift_release(lVar6);
  _swift_release_n(puVar5,2);
  FUN_100076688(param_9,local_88);
  puVar5 = &DAT_100f0a688;
  _swift_allocObject(&DAT_100f0a688,0x59,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = param_3;
  FUN_100076508(local_88,puVar5 + 0x20);
  *(undefined8 *)(puVar5 + 0x48) = param_4;
  *(undefined8 *)(puVar5 + 0x50) = param_5;
  puVar5[0x58] = param_6;
  _swift_retain(param_1);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_5);
  lVar6 = lVar4;
  FUN_1008b4194(lVar4,FUN_100899cb8,puVar5);
  _swift_release(lVar4);
  _swift_release(puVar5);
  puVar5 = &DAT_100f0a6b0;
  _swift_allocObject(&DAT_100f0a6b0,0x48,7);
  *(long *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_10;
  *(undefined8 *)(puVar5 + 0x20) = param_11;
  *(undefined8 *)(puVar5 + 0x28) = param_4;
  *(undefined8 *)(puVar5 + 0x30) = param_5;
  puVar5[0x38] = param_6;
  *(long *)(puVar5 + 0x40) = param_1;
  puVar7 = &DAT_100f0a6d8;
  _swift_allocObject(&DAT_100f0a6d8,0x28,7);
  *(code **)(puVar7 + 0x10) = FUN_100899d7c;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(long *)(puVar7 + 0x20) = lVar6;
  _swift_beginAccess(lVar6 + 0x10,auStack_a0,0,0);
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  cVar2 = *(char *)(lVar6 + 0x18);
  if (cVar2 == '\x01') {
    _swift_retain(param_1);
    _swift_retain(param_3);
    _swift_retain(param_4);
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRetain(param_11);
    _swift_retain(lVar6);
    _swift_retain(puVar5);
    FUN_1005dfeb4(uVar3,1);
    FUN_100626c9c(uVar3);
    FUN_100308538(uVar3,1);
  }
  else if (cVar2 == -1) {
    _swift_beginAccess(lVar6 + 0x30,local_88,0x21,0);
    _swift_retain(param_1);
    _swift_retain(param_3);
    _swift_retain(param_4);
    _swift_bridgeObjectRetain(param_5);
    _swift_bridgeObjectRetain(param_11);
    _swift_retain(lVar6);
    _swift_retain(puVar5);
    FUN_10064967c(FUN_1006225d4,puVar7);
    _swift_endAccess(local_88);
  }
  else {
    local_70 = &DAT_100f0a420;
    puVar8 = &DAT_100f0a700;
    _swift_allocObject(&DAT_100f0a700,0x31,7);
    *(undefined8 *)(puVar8 + 0x10) = param_10;
    *(undefined8 *)(puVar8 + 0x18) = param_11;
    *(undefined8 *)(puVar8 + 0x20) = param_4;
    *(undefined8 *)(puVar8 + 0x28) = param_5;
    puVar8[0x30] = param_6;
    local_88[0] = puVar8;
    _swift_retain_n(param_4,2);
    _swift_bridgeObjectRetain_n(param_5,2);
    _swift_bridgeObjectRetain_n(param_11,2);
    _swift_retain(param_1);
    _swift_retain(param_3);
    _swift_retain(lVar6);
    _swift_retain(puVar5);
    FUN_100626b98(local_88);
    FUN_100004594(local_88);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 4;
    FUN_10089944c(uVar9,uVar1);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _swift_retain(uVar9);
    thunk_FUN_1006313ac(param_3,0,uVar9);
    FUN_100308538(uVar3,cVar2);
    _swift_release(uVar9);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar6);
  _swift_release(puVar5);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x10089789c | FUN_10089789c */

void FUN_10089789c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    _swift_getObjectType(*(undefined8 *)(param_1 + 0x30));
    FUN_10063dc68();
  }
  else {
    FUN_100892704(0,lVar6,0);
    lVar7 = lVar7 + 0x28;
    do {
      uVar10 = *(undefined8 *)(lVar7 + -8);
      uVar2 = uVar10;
      _swift_unknownObjectRetain();
      FUN_10062c4e4();
      _swift_unknownObjectRelease(uVar10);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_100892704(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      lVar7 = lVar7 + 0x10;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 8 + 0x20) = uVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar7 = *(long *)(param_1 + 0x30);
    _swift_getObjectType();
    FUN_100893ef4();
    lVar6 = *(long *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(ulong *)(lVar7 + 0x20);
    uVar3 = uVar9;
    _swift_getObjectType();
    uVar4 = uVar3;
    (**(code **)(lVar6 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f0a728;
      _swift_allocObject(&DAT_100f0a728,0x30,7);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(ulong *)(puVar5 + 0x20) = uVar9;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_bridgeObjectRetain(puVar1);
      _swift_unknownObjectRetain(uVar9);
      (*pcVar8)(FUN_100899f28,puVar5,uVar3,lVar6);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar5);
    }
    else {
      FUN_1008b2cb0(lVar7,puVar1,uVar9,lVar6);
      _swift_bridgeObjectRelease(puVar1);
    }
  }
  return;
}



/* Address: 0x100897a84 | FUN_100897a84 */

void FUN_100897a84(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_70 [3];
  undefined *local_58;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100626c9c(*param_1);
  }
  else {
    local_58 = &DAT_100f0a420;
    puVar2 = &DAT_100f0a700;
    _swift_allocObject(&DAT_100f0a700,0x31,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    *(undefined8 *)(puVar2 + 0x28) = param_6;
    puVar2[0x30] = param_7;
    local_70[0] = puVar2;
    _swift_bridgeObjectRetain(param_4);
    _swift_retain(param_5);
    _swift_bridgeObjectRetain(param_6);
    FUN_100626b98(local_70);
    FUN_100004594(local_70);
    uVar3 = *(undefined8 *)(param_8 + 0x40);
    uVar1 = *(undefined8 *)(param_8 + 0x48);
    *(undefined8 *)(param_8 + 0x48) = 0;
    *(undefined8 *)(param_8 + 0x40) = 4;
    FUN_10089944c(uVar3,uVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    _swift_retain(uVar3);
    thunk_FUN_1006313ac(param_2,0,uVar3);
    _swift_release(uVar3);
  }
  return;
}



/* Address: 0x100897b80 | FUN_100897b80 */

void FUN_100897b80(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_10089944c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100897bc4 | FUN_100897bc4 */

void FUN_100897bc4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_10089944c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100897c10 | FUN_100897c10 */

void FUN_100897c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar3 = (undefined4)param_4;
  puVar1 = &DAT_100fe90f8;
  puVar2 = &DAT_100c7f5d0;
  FUN_1000f7830();
  thunk_FUN_100885488();
  *param_1 = puVar1;
  param_1[1] = puVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar4 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar4 >> 0x18);
  return;
}



/* Address: 0x100897c68 | thunk_FUN_100895df8 */

void thunk_FUN_100895df8(void)

{
  FUN_100895df8();
  return;
}



/* Address: 0x100897c6c | thunk_FUN_1008956e4 */

void thunk_FUN_1008956e4(void)

{
  FUN_1008956e4();
  return;
}



/* Address: 0x100897c70 | FUN_100897c70 */

void FUN_100897c70(void)

{
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100fe97c8;
    FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
    if (puVar2 != (undefined *)0x0) {
      FUN_1000f7830(&DAT_100fe9e50,&DAT_100c80c68);
      return;
    }
  }
  FUN_1000f7830(&DAT_100fe9e48,&DAT_100c80c60);
  return;
}



/* Address: 0x100897ce0 | FUN_100897ce0 */

undefined * FUN_100897ce0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100897de8);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100897de8 | FUN_100897de8 */

undefined * FUN_100897de8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100897f18);
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
    puVar3 = &DAT_100fe9e40;
    FUN_1000f7830(&DAT_100fe9e40,&DAT_100c80c50);
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
    puVar5 = &DAT_100fe9530;
    FUN_1000f7830(&DAT_100fe9530,&DAT_100c7fca0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100897f18 | FUN_100897f18 */

undefined * FUN_100897f18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100898058);
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
    puVar3 = &DAT_100fe9e38;
    FUN_1000f7830(&DAT_100fe9e38,&DAT_100c80c48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe95a0;
    FUN_1000f7830(&DAT_100fe95a0,&DAT_100c809a0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100898058 | FUN_100898058 */

void FUN_100898058(void)

{
  FUN_1008981d0();
  return;
}



/* Address: 0x10089807c | FUN_10089807c */

undefined * FUN_10089807c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008981ac);
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
    puVar3 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
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
    puVar5 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008981ac | FUN_1008981ac */

void FUN_1008981ac(void)

{
  FUN_1008981d0();
  return;
}



/* Address: 0x1008981d0 | FUN_1008981d0 */

undefined *
FUN_1008981d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100898314);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000f7830(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x100898314 | FUN_100898314 */

void FUN_100898314(void)

{
  FUN_100898464();
  return;
}



/* Address: 0x100898338 | FUN_100898338 */

undefined * FUN_100898338(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100898440);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100898440 | FUN_100898440 */

void FUN_100898440(void)

{
  FUN_100898464();
  return;
}



/* Address: 0x100898464 | FUN_100898464 */

undefined *
FUN_100898464(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008985ac);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000f7830(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x48 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x1008985ac | FUN_1008985ac */

undefined * FUN_1008985ac(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008986dc);
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
    puVar3 = param_1;
    FUN_100897c70();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    puVar5 = &DAT_100fe97c8;
    FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1008986dc | FUN_1008986dc */

void FUN_1008986dc(long param_1)

{
  FUN_100897ce0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008986f0 | FUN_1008986f0 */

void FUN_1008986f0(long param_1)

{
  FUN_100897de8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100898704 | FUN_100898704 */

void FUN_100898704(long param_1)

{
  FUN_100897f18(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100898718 | FUN_100898718 */

void FUN_100898718(long param_1)

{
  FUN_100898464(0,*(undefined8 *)(param_1 + 0x10),0,param_1,&DAT_100fe9e78,&DAT_100c80ca0,
                &DAT_100fe90d0,&DAT_100c7f500);
  return;
}



/* Address: 0x10089875c | FUN_10089875c */

void FUN_10089875c(long param_1)

{
  FUN_100898464(0,*(undefined8 *)(param_1 + 0x10),0,param_1,&DAT_100fe9e58,&DAT_100c80c78,
                &DAT_100fe90d8,&DAT_100c81b10);
  return;
}



/* Address: 0x1008987a0 | FUN_1008987a0 */

void FUN_1008987a0(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_88 [40];
  
  this = (_DictionaryStorage *)&DAT_100fe9e80;
  FUN_1000f7830(&DAT_100fe9e80,&DAT_100c80cb0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100898920:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100898888;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x28;
      FUN_100076688(*(long *)(original + 0x38) + lVar10,auStack_88);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100076508(auStack_88,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100898888:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100898948);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100898920;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x100898948 | FUN_100898948 */

void FUN_100898948(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  long lVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe9e80;
  FUN_1000f7830(&DAT_100fe9e80,&DAT_100c80cb0);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100898bdc:
    _swift_release(original);
LAB_100898be4:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100898c0c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100898be4;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100898bdc;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar9;
    }
    uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar11 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar9 = *(long *)(original + 0x38) + uVar11 * 0x28;
    if ((param_2 & 1U) == 0) {
      FUN_100076688(lVar9,auStack_88);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100076508(lVar9,auStack_88);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_d0;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar14 >> 6;
      do {
        uVar10 = uVar12 + 1;
        if ((uVar10 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100898c10);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar10 != uVar11) {
          uVar12 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar11 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100076508(auStack_88,*(long *)(p_Var8 + 0x38) + uVar11 * 0x28);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Address: 0x100898c10 | FUN_100898c10 */

undefined8 FUN_100898c10(long param_1,long param_2,code *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar1 = *(ushort *)(param_2 + 0x18);
  if ((char)(uVar1 >> 8) != -1) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    bVar3 = (uVar1 & 0xff00) != 0x100;
    if (bVar3) {
      local_80 = (undefined1)uVar1;
      local_88 = uVar4;
      FUN_100899bf0(uVar4,uVar1);
      (*param_3)(&local_70,&local_88);
      FUN_100899fd4(uVar4,uVar1);
      uVar4 = local_70;
      uVar5 = uStack_68;
    }
    else {
      FUN_10081c834(uVar4,uVar1,1);
      uVar5 = 0;
    }
    bVar3 = !bVar3;
    _swift_beginAccess(param_1 + 0x10,&local_70,1,0);
    if (*(char *)(param_1 + 0x20) == -1) {
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      *(bool *)(param_1 + 0x20) = bVar3;
      _swift_beginAccess(param_1 + 0x38,&local_88,1,0);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      FUN_100899a58(uVar4,uVar5,bVar3);
      uVar4 = 0;
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100898d44);
  (*pcVar2)();
}



/* Address: 0x100898d44 | FUN_100898d44 */

undefined8 FUN_100898d44(long param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x01') {
    FUN_100899a30(lVar1,uVar2,1);
    lVar5 = lVar1;
    (*param_3)();
    puVar6 = &DAT_100f0a750;
    _swift_allocObject(&DAT_100f0a750,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar5;
    _swift_beginAccess(lVar5 + 0x10,auStack_80,0,0);
    if (*(char *)(lVar5 + 0x20) == -1) {
      _swift_beginAccess(lVar5 + 0x38,auStack_98,0x21,0);
      _swift_retain_n(lVar5,2);
      _swift_retain(param_2);
      FUN_10064967c(thunk_FUN_100899be8,puVar6);
      _swift_endAccess(auStack_98);
      FUN_100899a44(lVar1,uVar2,1);
      _swift_release(puVar6);
      _swift_release_n(lVar5,2);
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
      FUN_1008b1ef8(uVar7,*(undefined8 *)(lVar5 + 0x18));
      _swift_retain(lVar5);
      _swift_retain(param_2);
      FUN_100899a44(lVar1,uVar2,1);
      _swift_release(lVar5);
      _swift_release(puVar6);
    }
  }
  else {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100898f48);
      (*pcVar4)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar7 = 0;
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar3;
      _swift_beginAccess(param_2 + 0x38,auStack_98,1,0);
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_100011128(lVar1,uVar2);
    }
  }
  return uVar7;
}



/* Address: 0x100898f48 | FUN_100898f48 */

undefined8 FUN_100898f48(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  cVar3 = *(char *)(param_2 + 0x20);
  if (cVar3 != -1) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    _swift_beginAccess(param_1 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_1 + 0x20) == -1) {
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(char *)(param_1 + 0x20) = cVar3;
      _swift_beginAccess(param_1 + 0x38,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_100899a30(uVar1,uVar2,cVar3);
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100899024);
  (*pcVar4)();
}



/* Address: 0x100899024 | FUN_100899024 */

void FUN_100899024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  char *pcVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  char *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 local_70;
  void *pvVar7;
  
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_70 = 0xff00;
  CVar2.unknown = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar2);
  *(undefined8 *)(_Var3.unknown + 0x10) = 0x10;
  FUN_10087b514(&local_b0,_Var3.unknown + 0x20);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x68);
  FUN_10087b514(&local_b0,_Var3.unknown + 0xb0);
  FUN_10087b514(&local_b0,_Var3.unknown + 0xf8);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x140);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x188);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x1d0);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x218);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x260);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x2a8);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x2f0);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x338);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x380);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x3c8);
  FUN_10087b514(&local_b0,_Var3.unknown + 0x410);
  *(undefined8 *)(_Var3.unknown + 0x480) = uStack_88;
  *(undefined8 *)(_Var3.unknown + 0x478) = local_90;
  *(undefined8 *)(_Var3.unknown + 0x490) = uStack_78;
  *(undefined8 *)(_Var3.unknown + 0x488) = uStack_80;
  *(undefined2 *)(_Var3.unknown + 0x498) = local_70;
  *(undefined8 *)(_Var3.unknown + 0x460) = uStack_a8;
  *(undefined8 *)(_Var3.unknown + 0x458) = local_b0;
  *(undefined8 *)(_Var3.unknown + 0x470) = uStack_98;
  *(undefined8 *)(_Var3.unknown + 0x468) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined **)(unaff_x20 + 0x50) = _Var3.unknown;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (lVar10 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_100076688(param_1,&local_b0);
      FUN_100076508(&local_b0,auStack_d8);
      pvVar6 = pvStack_b8;
      pcVar4 = local_c0;
      FUN_100004640(auStack_d8,local_c0);
      (**(code **)((long)pvVar6 + 8))();
      SVar12.bridgeObject = pvVar6;
      SVar12.str = pcVar4;
      SVar12 = Swift::String::lowercased(SVar12);
      pvVar7 = SVar12.bridgeObject;
      _swift_bridgeObjectRelease(pvVar6);
      FUN_100076688(auStack_d8,&local_100);
      uStack_158 = uStack_f8;
      local_160 = local_100;
      local_148 = lStack_e8;
      uStack_150 = uStack_f0;
      local_140 = local_e0;
      if (lStack_e8 == 0) {
        FUN_10088fa30(&local_160);
        _swift_bridgeObjectRetain(puVar11);
        FUN_100071370();
        pcVar4 = SVar12.str;
        _swift_bridgeObjectRelease(puVar11);
        if (((ulong)SVar12.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(pvVar7);
          local_110 = 0;
          uStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        else {
          puVar5 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          local_160 = puVar11;
          if ((int)puVar5 == 0) {
            FUN_1008987a0();
          }
          puVar11 = local_160;
          _swift_bridgeObjectRelease
                    (*(undefined8 *)(*(long *)(local_160 + 0x30) + (long)pcVar4 * 0x10 + 8));
          FUN_100076508(*(long *)(puVar11 + 0x38) + (long)pcVar4 * 0x28,&local_130);
          FUN_1001977c8(pcVar4,puVar11);
          _swift_bridgeObjectRelease(pvVar7);
        }
        FUN_10088fa30(&local_130);
      }
      else {
        FUN_100076508(&local_160,&local_130);
        puVar5 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        SVar13 = SVar12;
        local_160 = puVar11;
        FUN_100071370();
        pcVar4 = SVar13.str;
        uVar8 = (ulong)~(uint)SVar13.bridgeObject & 1;
        lVar9 = *(long *)(puVar11 + 0x10) + uVar8;
        if (SCARRY8(*(long *)(puVar11 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100899438);
          (*pcVar1)();
        }
        if (*(long *)(puVar11 + 0x18) < lVar9) {
          FUN_100898948(lVar9,puVar5);
          SVar14 = SVar12;
          FUN_100071370();
          pcVar4 = SVar14.str;
          puVar11 = local_160;
          if (((uint)SVar13.bridgeObject & 1) != ((uint)SVar14.bridgeObject & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10089944c);
            (*pcVar1)();
          }
        }
        else {
          puVar11 = local_160;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_1008987a0();
            puVar11 = local_160;
          }
        }
        local_160 = puVar11;
        if (((ulong)SVar13.bridgeObject & 1) == 0) {
          *(ulong *)(puVar11 + ((ulong)pcVar4 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar11 + ((ulong)pcVar4 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar4 & 0x3f);
          *(String *)(*(long *)(puVar11 + 0x30) + (long)pcVar4 * 0x10) = SVar12;
          FUN_100076508(&local_130,*(long *)(puVar11 + 0x38) + (long)pcVar4 * 0x28);
          if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10089943c);
            (*pcVar1)();
          }
          *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
        }
        else {
          lVar9 = *(long *)(puVar11 + 0x38) + (long)pcVar4 * 0x28;
          FUN_100004594(lVar9);
          FUN_100076508(&local_130,lVar9);
          _swift_bridgeObjectRelease(pvVar7);
        }
      }
      FUN_100004594(auStack_d8);
      param_1 = param_1 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar11;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Address: 0x10089944c | FUN_10089944c */

void FUN_10089944c(ulong param_1,undefined8 param_2)

{
  if (param_1 < 5) {
    return;
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x100899460 | FUN_100899460 */

undefined8 FUN_100899460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1008994b0 | thunk_FUN_1008994b4 */

void thunk_FUN_1008994b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9d10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80a80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80a80,&DAT_100f0a390);
  DAT_100fe9d10 = pTVar1;
  return;
}



/* Address: 0x1008994b4 | FUN_1008994b4 */

void FUN_1008994b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9d10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80a80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80a80,&DAT_100f0a390);
  DAT_100fe9d10 = pTVar1;
  return;
}



/* Address: 0x1008994f4 | FUN_1008994f4 */

undefined1  [16] FUN_1008994f4(void)

{
  return ZEXT816(0x100f0a390);
}



/* Address: 0x100899504 | FUN_100899504 */

void FUN_100899504(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100899534 | FUN_100899534 */

undefined8 * FUN_100899534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100899594 | FUN_100899594 */

undefined8 * FUN_100899594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x100899618 | FUN_100899618 */

void FUN_100899618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10089962c | FUN_10089962c */

undefined8 * FUN_10089962c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x100899688 | FUN_100899688 */

undefined1  [16] FUN_100899688(void)

{
  return ZEXT816(0x100f0a420);
}



/* Address: 0x100899698 | FUN_100899698 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100899698(void)

{
  return ZEXT816(0x100fe9da8);
}



/* Address: 0x1008996b8 | thunk_FUN_1008996d8 */

ulong * thunk_FUN_1008996d8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1008996bc | FUN_1008996bc */

void FUN_1008996bc(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_release(param_1[1]);
    return;
  }
  return;
}



/* Address: 0x1008996d8 | FUN_1008996d8 */

ulong * FUN_1008996d8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (0xfffffffe < *param_2) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x100899724 | FUN_100899724 */

ulong * FUN_100899724(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (uVar2 < 0xffffffff) {
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
    }
    else {
      uVar1 = param_2[1];
      *param_1 = uVar2;
      param_1[1] = uVar1;
      _swift_retain(uVar1);
    }
  }
  else if (uVar2 < 0xffffffff) {
    _swift_release(param_1[1]);
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    uVar1 = param_2[1];
    uVar3 = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar1;
    _swift_retain(uVar1);
    _swift_release(uVar3);
  }
  return param_1;
}


