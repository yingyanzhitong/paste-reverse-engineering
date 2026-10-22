/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006efc14 | FUN_1006efc14 */

void FUN_1006efc14(void)

{
  FUN_1006ef690();
  return;
}



/* Address: 0x1006efc60 | FUN_1006efc60 */

void FUN_1006efc60(void)

{
  FUN_1006ef690();
  return;
}



/* Address: 0x1006efca8 | FUN_1006efca8 */

void FUN_1006efca8(void)

{
  FUN_1006ef690();
  return;
}



/* Address: 0x1006efcf0 | FUN_1006efcf0 */

void FUN_1006efcf0(void)

{
  FUN_1006ef690();
  return;
}



/* Address: 0x1006efd3c | FUN_1006efd3c */

void FUN_1006efd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_8;
  *(undefined8 *)(unaff_x22 + 0x88) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(long *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  lVar4 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006efdf8;
                    /* WARNING: Could not recover jumptable at 0x0001006efdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar3,uVar2,param_2,param_3);
  return;
}



/* Address: 0x1006efdf8 | FUN_1006efdf8 */

void FUN_1006efdf8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006efe5c;
  }
  else {
    pcVar1 = FUN_1006eff8c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006efe5c | FUN_1006efe5c */

void FUN_1006efe5c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar7,0x100cbc5a4,&TargetProtocolRequirement_100cbc5b4);
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar7,uVar3,0x100cbc5a4,&TargetProtocolRequirement_100cbc5ac);
  (*UNRECOVERED_JUMPTABLE)(unaff_x22 + 0x10,uVar8,uVar11,uVar3,uVar4,uVar10,lVar2);
  (**(code **)(lVar1 + 8))(uVar9,uVar10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  if (lVar6 == 0) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar5[1] = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar5 = uVar7;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined1 *)(puVar5 + 8) = *(undefined1 *)(unaff_x22 + 0x50);
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[7] = uVar3;
    puVar5[6] = uVar11;
    puVar5[3] = uVar8;
    puVar5[2] = uVar7;
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006eff88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006eff8c | FUN_1006eff8c */

void FUN_1006eff8c(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001006effc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006effc8 | FUN_1006effc8 */

undefined1  [16]
FUN_1006effc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_100efa458;
  _swift_allocObject(&DAT_100efa458,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,0x100cbc5a4,&TargetProtocolRequirement_100cbc5b4);
  puVar3 = &DAT_100c72d78;
  FUN_100004520(&DAT_100c72d78,puVar1,uVar2);
  _swift_retain(param_2);
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Address: 0x1006f0080 | FUN_1006f0080 */

void FUN_1006f0080(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006f00a4 | FUN_1006f00a4 */

void FUN_1006f00a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar7 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1006efd3c(plVar7,param_1,param_2,param_3,uVar3,uVar6,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x1006f0150 | FUN_1006f0150 */

undefined8 FUN_1006f0150(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  _StringGuts _Var16;
  Range<__int64> RVar17;
  ulong local_b0;
  ulong uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  byte local_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar9 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar12 = (ulong *)(param_1 + 0x20);
  puVar13 = (ulong *)(param_2 + 0x30);
  do {
    lVar9 = lVar9 + -1;
    uStack_a8 = puVar12[1];
    local_b0 = *puVar12;
    puStack_98 = (undefined *)puVar12[3];
    local_a0 = (undefined *)puVar12[2];
    uVar15 = puVar12[5];
    uVar14 = puVar12[4];
    RVar17.unknown = (undefined *)puVar12[7];
    _Var16.unknown = (undefined *)puVar12[6];
    local_70 = (byte)puVar12[8];
    uVar10 = puVar13[-2];
    uVar4 = puVar13[-1];
    puVar1 = (undefined *)*puVar13;
    puVar5 = (undefined *)puVar13[1];
    uVar2 = puVar13[2];
    uVar6 = puVar13[3];
    puVar3 = (undefined *)puVar13[4];
    puVar11 = (undefined *)puVar13[5];
    cVar7 = (char)puVar13[6];
    local_90 = uVar14;
    uStack_88 = uVar15;
    local_80 = _Var16.unknown;
    puStack_78 = RVar17.unknown;
    if (local_70 < 3) {
      if (local_70 == 0) {
        if (cVar7 != '\0') {
          return 0;
        }
      }
      else {
        if (local_70 != 1) {
          if (cVar7 != '\x02') {
            return 0;
          }
          goto LAB_1006f0238;
        }
        if (cVar7 != '\x01') {
          return 0;
        }
      }
LAB_1006f02e4:
      if (((local_a0 != puVar1) || (puVar5 != puStack_98)) ||
         (((undefined *)(local_b0 >> 0x10) != (undefined *)(uVar10 >> 0x10) ||
          ((undefined *)(uStack_a8 >> 0x10) != (undefined *)(uVar4 >> 0x10))))) {
        bVar8 = Swift::_stringCompareInternal
                          ((_StringGuts)local_a0,(Range<__int64>)puStack_98,
                           (undefined *)(local_b0 >> 0x10),(undefined *)(uStack_a8 >> 0x10),
                           (_StringComparisonResult)(__int8)puVar1);
joined_r0x0001006f02d4:
        if (!bVar8) {
          return 0;
        }
      }
    }
    else {
      if (local_70 < 5) {
        if (local_70 != 3) {
          if (cVar7 != '\x04') {
            return 0;
          }
          goto LAB_1006f02e4;
        }
        if (cVar7 != '\x03') {
          return 0;
        }
LAB_1006f0238:
        if (((((local_a0 != puVar1) || (puVar5 != puStack_98)) ||
             ((undefined *)(local_b0 >> 0x10) != (undefined *)(uVar10 >> 0x10))) ||
            ((undefined *)(uStack_a8 >> 0x10) != (undefined *)(uVar4 >> 0x10))) &&
           (bVar8 = Swift::_stringCompareInternal
                              ((_StringGuts)local_a0,(Range<__int64>)puStack_98,
                               (undefined *)(local_b0 >> 0x10),(undefined *)(uStack_a8 >> 0x10),
                               (_StringComparisonResult)(__int8)puVar1), !bVar8)) {
          return 0;
        }
        if (((_Var16.unknown == puVar3) && (puVar11 == RVar17.unknown)) &&
           (((undefined *)(uVar14 >> 0x10) == (undefined *)(uVar2 >> 0x10) &&
            ((undefined *)(uVar15 >> 0x10) == (undefined *)(uVar6 >> 0x10))))) goto LAB_1006f0410;
        bVar8 = Swift::_stringCompareInternal
                          (_Var16,RVar17,(undefined *)(uVar14 >> 0x10),(undefined *)(uVar15 >> 0x10)
                           ,(_StringComparisonResult)(__int8)puVar3);
        goto joined_r0x0001006f02d4;
      }
      if (local_70 == 5) {
        if (cVar7 != '\x05') {
          return 0;
        }
        goto LAB_1006f02e4;
      }
      if ((((local_a0 == (undefined *)0x0 && uStack_a8 == 0) && (local_b0 == 0 && uVar14 == 0)) &&
          ((uVar15 == 0 && _Var16.unknown == (undefined *)0x0) && RVar17.unknown == (undefined *)0x0
          )) && puStack_98 == (undefined *)0x0) {
        FUN_1006ee85c(&local_b0);
        if (cVar7 != '\x06') {
          return 0;
        }
        uVar10 = (ulong)puVar1 | uVar4 | uVar10 | (ulong)puVar5 | uVar2 | uVar6 | (ulong)puVar3;
      }
      else {
        if ((local_b0 == 1) &&
           ((((local_a0 == (undefined *)0x0 && uStack_a8 == 0) && uVar14 == 0) &&
            ((uVar15 == 0 && _Var16.unknown == (undefined *)0x0) &&
            RVar17.unknown == (undefined *)0x0)) && puStack_98 == (undefined *)0x0)) {
          FUN_1006ee85c(&local_b0);
          if (cVar7 != '\x06') {
            return 0;
          }
          if (uVar10 != 1) {
            return 0;
          }
        }
        else {
          FUN_1006ee85c(&local_b0);
          if (cVar7 != '\x06') {
            return 0;
          }
          if (uVar10 != 2) {
            return 0;
          }
        }
        uVar10 = (ulong)puVar1 | uVar4 | (ulong)puVar5 | uVar2;
        puVar11 = (undefined *)(uVar6 | (ulong)puVar3 | (ulong)puVar11);
      }
      if (uVar10 != 0 || puVar11 != (undefined *)0x0) {
        return 0;
      }
    }
LAB_1006f0410:
    if (lVar9 == 0) {
      return 1;
    }
    puVar13 = puVar13 + 9;
    puVar12 = puVar12 + 9;
  } while( true );
}



/* Address: 0x1006f0464 | FUN_1006f0464 */

undefined8 FUN_1006f0464(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      pcVar13 = (char *)(param_2 + 0x30);
      pbVar14 = (byte *)(param_1 + 0x30);
      do {
        _Var1.unknown = *(undefined **)(pbVar14 + -0x10);
        _Var3.unknown = *(undefined **)(pbVar14 + -8);
        bVar5 = *pbVar14;
        puVar2 = *(undefined **)(pcVar13 + -0x10);
        puVar4 = *(undefined **)(pcVar13 + -8);
        cVar6 = *pcVar13;
        if (bVar5 < 2) {
          if (bVar5 == 0) {
            if (cVar6 != '\0') goto LAB_1006f068c;
            if (_Var3.unknown == (undefined *)0x0) {
              if (puVar4 != (undefined *)0x0) goto LAB_1006f068c;
              FUN_1006ad108(puVar2,0,0);
            }
            else if ((puVar4 == (undefined *)0x0) ||
                    (((_Var1.unknown != puVar2 || (_Var3.unknown != puVar4)) &&
                     (bVar7 = Swift::_stringCompareWithSmolCheck
                                        (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2),
                     !bVar7)))) goto LAB_1006f068c;
          }
          else {
            if (cVar6 != '\x01') goto LAB_1006f068c;
            _swift_beginAccess(_Var1.unknown + 0x10,auStack_a8,0,0);
            uVar10 = *(ulong *)(_Var1.unknown + 0x10);
            _swift_beginAccess(puVar2 + 0x10,auStack_c0,0,0);
            uVar11 = *(undefined8 *)(puVar2 + 0x10);
            FUN_1006ad53c(puVar2,puVar4,1);
            FUN_1006ad53c(_Var1.unknown,_Var3.unknown,1);
            _swift_bridgeObjectRetain(uVar10);
            _swift_bridgeObjectRetain(uVar11);
            uVar8 = uVar10;
            FUN_1006b563c(uVar10,uVar11);
            FUN_1006ad108(puVar2,puVar4,1);
            uVar9 = 1;
LAB_1006f0658:
            FUN_1006ad108(_Var1.unknown,_Var3.unknown,uVar9);
            _swift_bridgeObjectRelease(uVar10);
            _swift_bridgeObjectRelease(uVar11);
            if ((uVar8 & 1) == 0) goto LAB_1006f068c;
          }
        }
        else {
          if (bVar5 == 2) {
            if (cVar6 == '\x02') {
              _swift_beginAccess(_Var1.unknown + 0x10,auStack_78,0,0);
              uVar10 = *(ulong *)(_Var1.unknown + 0x10);
              _swift_beginAccess(puVar2 + 0x10,auStack_90,0,0);
              uVar11 = *(undefined8 *)(puVar2 + 0x10);
              FUN_1006ad53c(puVar2,puVar4,2);
              FUN_1006ad53c(_Var1.unknown,_Var3.unknown,2);
              _swift_bridgeObjectRetain(uVar10);
              _swift_bridgeObjectRetain(uVar11);
              uVar8 = uVar10;
              FUN_1006f0464(uVar10,uVar11);
              FUN_1006ad108(puVar2,puVar4,2);
              uVar9 = 2;
              goto LAB_1006f0658;
            }
            goto LAB_1006f068c;
          }
          if (cVar6 != '\x03' || (puVar4 != (undefined *)0x0 || puVar2 != (undefined *)0x0))
          goto LAB_1006f068c;
        }
        pcVar13 = pcVar13 + 0x18;
        pbVar14 = pbVar14 + 0x18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar9 = 1;
  }
  else {
LAB_1006f068c:
    uVar9 = 0;
  }
  return uVar9;
}



/* Address: 0x1006f06b8 | thunk_FUN_1006f28f4 */

void thunk_FUN_1006f28f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puStack_c0 = (undefined *)0x2f;
  uStack_b8 = 0xe100000000000000;
  ppuStack_a0 = &puStack_c0;
  lVar6 = 0x7fffffffffffffff;
  FUN_1006f1390(0x7fffffffffffffff,1,FUN_1000f64a4,&uStack_b0,param_1,param_2);
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puStack_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006bf844(0,lVar8,0);
    puVar9 = (undefined8 *)(lVar6 + 0x38);
    do {
      puVar7 = puStack_c0;
      uVar1 = puVar9[-3];
      uVar4 = puVar9[-2];
      uVar2 = puVar9[-1];
      uVar5 = *puVar9;
      _swift_bridgeObjectRetain(uVar5);
      FUN_1006f2074(&uStack_b0,uVar1,uVar4,uVar2,uVar5);
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puStack_c0 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        FUN_1006bf844(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
      }
      puVar7 = puStack_c0;
      puVar9 = puVar9 + 4;
      *(ulong *)(puStack_c0 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x28) = uStack_a8;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x20) = uStack_b0;
      puStack_c0[uVar3 * 0x48 + 0x60] = uStack_70;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x48) = uStack_88;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x40) = uStack_90;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x58) = uStack_78;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x50) = uStack_80;
      *(undefined8 *)(puStack_c0 + uVar3 * 0x48 + 0x38) = uStack_98;
      *(undefined ***)(puStack_c0 + uVar3 * 0x48 + 0x30) = ppuStack_a0;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  FUN_1006f1c2c(puVar7);
  return;
}



/* Address: 0x1006f06bc | FUN_1006f06bc */

void FUN_1006f06bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_1);
  FUN_1006a1c64();
  FUN_1006f1c2c(param_4);
  return;
}



/* Address: 0x1006f0700 | FUN_1006f0700 */

bool FUN_1006f0700(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  local_50 = *param_1;
  lStack_48 = param_1[1];
  local_40 = param_1[2];
  lStack_38 = param_1[3];
  bVar1 = *(byte *)(param_1 + 8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_1006b7940();
      bVar2 = (extension_Swift)::Swift::StringProtocol::____infix
                        (&local_50,param_2,PTR___type_metadata_for_Swift_Substring_100eaca98,param_3
                         ,param_1,param_4);
      return bVar2;
    }
    if (bVar1 == 1) {
      return true;
    }
LAB_1006f0754:
    FUN_1006b7940();
    bVar2 = (extension_Swift)::Swift::StringProtocol::_hasSuffix
                      (&local_50,param_3,PTR___type_metadata_for_Swift_Substring_100eaca98,param_4,
                       param_1);
  }
  else {
    if (bVar1 < 5) {
      if (bVar1 != 3) goto LAB_1006f0754;
    }
    else if (bVar1 != 5) {
      if ((((local_40 == 0 && lStack_48 == 0) && (local_50 == 0 && lStack_38 == 0)) &&
          ((param_1[7] == 0 && param_1[6] == 0) && param_1[5] == 0)) && param_1[4] == 0) {
        return true;
      }
      return local_50 == 1 &&
             ((((local_40 == 0 && lStack_48 == 0) && lStack_38 == 0) &&
              ((param_1[7] == 0 && param_1[6] == 0) && param_1[5] == 0)) && param_1[4] == 0);
    }
    FUN_1006b7940();
    bVar2 = (extension_Swift)::Swift::StringProtocol::_hasPrefix
                      (&local_50,param_3,PTR___type_metadata_for_Swift_Substring_100eaca98,param_4,
                       param_1);
  }
  return bVar2;
}



/* Address: 0x1006f0848 | thunk_FUN_1006f2a5c */

void thunk_FUN_1006f2a5c(void)

{
  FUN_1006f2a5c();
  return;
}



/* Address: 0x1006f084c | thunk_FUN_1006f192c */

void thunk_FUN_1006f192c(void)

{
  FUN_1006f192c();
  return;
}



/* Address: 0x1006f0850 | FUN_1006f0850 */

uint FUN_1006f0850(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  local_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1006f192c(&local_b0,&local_60);
  return uVar1 & 1;
}



/* Address: 0x1006f08a8 | FUN_1006f08a8 */

void FUN_1006f08a8(void)

{
  FUN_1006ee7e4();
  return;
}



/* Address: 0x1006f08b4 | FUN_1006f08b4 */

void FUN_1006f08b4(void)

{
  FUN_1006f099c();
  return;
}



/* Address: 0x1006f08bc | FUN_1006f08bc */

void FUN_1006f08bc(void)

{
  FUN_1006f090c();
  return;
}



/* Address: 0x1006f08e0 | FUN_1006f08e0 */

void FUN_1006f08e0(void)

{
  FUN_1006f099c();
  return;
}



/* Address: 0x1006f08e8 | FUN_1006f08e8 */

void FUN_1006f08e8(void)

{
  FUN_1006f090c();
  return;
}



/* Address: 0x1006f090c | FUN_1006f090c */

void FUN_1006f090c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  *(undefined1 *)(param_1 + 8) = param_10;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_9);
  return;
}



/* Address: 0x1006f094c | FUN_1006f094c */

void FUN_1006f094c(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 8) = 6;
  return;
}



/* Address: 0x1006f0964 | FUN_1006f0964 */

void FUN_1006f0964(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 6;
  return;
}



/* Address: 0x1006f098c | FUN_1006f098c */

void FUN_1006f098c(void)

{
  FUN_1006f099c();
  return;
}



/* Address: 0x1006f0994 | FUN_1006f0994 */

void FUN_1006f0994(void)

{
  FUN_1006f099c();
  return;
}



/* Address: 0x1006f099c | FUN_1006f099c */

void FUN_1006f099c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_b0 [72];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_68 = param_2;
  uStack_60 = param_3;
  local_58 = param_4;
  uStack_50 = param_5;
  local_28 = param_6;
  FUN_1006ee820(&local_68,auStack_b0);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006f09f8 | FUN_1006f09f8 */

void FUN_1006f09f8(undefined8 *param_1)

{
  *param_1 = 2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 6;
  return;
}



/* Address: 0x1006f0a20 | FUN_1006f0a20 */

String FUN_1006f0a20(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  void *pvVar6;
  byte bVar7;
  String SVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  void *pvVar14;
  String *unaff_x20;
  String SVar15;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String local_50;
  String SVar16;
  void *pvVar10;
  
  pcVar9 = unaff_x20->str;
  pvVar10 = unaff_x20->bridgeObject;
  SVar15 = *unaff_x20;
  pcVar11 = unaff_x20[1].str;
  pvVar13 = unaff_x20[1].bridgeObject;
  pcVar5 = unaff_x20[2].str;
  pvVar6 = unaff_x20[2].bridgeObject;
  pcVar12 = unaff_x20[3].str;
  pvVar14 = unaff_x20[3].bridgeObject;
  bVar7 = *(byte *)&unaff_x20[4].str;
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      SVar15 = Swift::String::__fromSubstring(*unaff_x20);
      return SVar15;
    }
    if (bVar7 != 1) {
      local_50.str = (char *)0x7b;
      SVar18 = Swift::String::__fromSubstring(unaff_x20[2]);
      SVar22.bridgeObject = pvVar14;
      SVar22.str = pcVar12;
      Swift::String::append(SVar18,SVar22);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      SVar18.bridgeObject = (void *)0xe100000000000000;
      SVar18.str = (char *)0x7d;
      SVar23.bridgeObject = pvVar14;
      SVar23.str = pcVar12;
      Swift::String::append(SVar18,SVar23);
LAB_1006f0b6c:
      local_50.bridgeObject = (void *)0xe100000000000000;
      SVar15 = Swift::String::__fromSubstring(SVar15);
      SVar24.bridgeObject = pvVar13;
      SVar24.str = pcVar11;
      Swift::String::append(SVar15,SVar24);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      return local_50;
    }
    local_50.bridgeObject = (void *)0xe100000000000000;
    local_50.str = (char *)0x7b;
  }
  else {
    if (4 < bVar7) {
      if (bVar7 != 5) {
        pcVar1 = (char *)0x2a2a;
        if (pcVar9 != &DAT_00000001 ||
            ((((pcVar11 != (char *)0x0 || pvVar10 != (void *)0x0) || pvVar13 != (void *)0x0) ||
             ((pcVar5 != (char *)0x0 || pvVar6 != (void *)0x0) || pcVar12 != (char *)0x0)) ||
            pvVar14 != (void *)0x0)) {
          pcVar1 = (char *)0x21;
        }
        puVar2 = &SUB_e200000000000000;
        if (pcVar9 != &DAT_00000001 ||
            ((((pcVar11 != (char *)0x0 || pvVar10 != (void *)0x0) || pvVar13 != (void *)0x0) ||
             ((pcVar5 != (char *)0x0 || pvVar6 != (void *)0x0) || pcVar12 != (char *)0x0)) ||
            pvVar14 != (void *)0x0)) {
          puVar2 = (undefined1 *)0xe100000000000000;
        }
        pcVar3 = &DAT_0000002a;
        if ((((pcVar11 != (char *)0x0 || pvVar10 != (void *)0x0) ||
             (pcVar9 != (char *)0x0 || pvVar13 != (void *)0x0)) ||
            ((pcVar5 != (char *)0x0 || pvVar6 != (void *)0x0) || pcVar12 != (char *)0x0)) ||
            pvVar14 != (void *)0x0) {
          pcVar3 = pcVar1;
        }
        puVar4 = (undefined1 *)0xe100000000000000;
        if ((((pcVar11 != (char *)0x0 || pvVar10 != (void *)0x0) ||
             (pcVar9 != (char *)0x0 || pvVar13 != (void *)0x0)) ||
            ((pcVar5 != (char *)0x0 || pvVar6 != (void *)0x0) || pcVar12 != (char *)0x0)) ||
            pvVar14 != (void *)0x0) {
          puVar4 = puVar2;
        }
        SVar8.bridgeObject = puVar4;
        SVar8.str = pcVar3;
        return SVar8;
      }
      local_50 = Swift::String::__fromSubstring(*unaff_x20);
      pcVar9 = &DAT_0000002a;
      goto LAB_1006f0ae4;
    }
    if (bVar7 != 3) {
      local_50.str = &DAT_0000002a;
      goto LAB_1006f0b6c;
    }
    local_50 = Swift::String::__fromSubstring(*unaff_x20);
    SVar15.bridgeObject = (void *)0xe100000000000000;
    SVar15.str = (char *)0x7b;
    SVar19.bridgeObject = pvVar13;
    SVar19.str = pcVar11;
    Swift::String::append(SVar15,SVar19);
    pcVar9 = pcVar5;
    pvVar10 = pvVar6;
    pcVar11 = pcVar12;
    pvVar13 = pvVar14;
  }
  SVar16.bridgeObject = pvVar10;
  SVar16.str = pcVar9;
  SVar15 = Swift::String::__fromSubstring(SVar16);
  SVar20.bridgeObject = pvVar13;
  SVar20.str = pcVar11;
  Swift::String::append(SVar15,SVar20);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  pcVar9 = (char *)0x7d;
LAB_1006f0ae4:
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = pcVar9;
  SVar21.bridgeObject = pvVar13;
  SVar21.str = pcVar11;
  Swift::String::append(SVar17,SVar21);
  return local_50;
}



/* Address: 0x1006f0c08 | FUN_1006f0c08 */

bool FUN_1006f0c08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return false;
  }
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  FUN_1006b7940();
  bVar1 = (extension_Swift)::Swift::StringProtocol::____infix
                    (&local_50,param_2,PTR___type_metadata_for_Swift_Substring_100eaca98,param_3,
                     param_1,param_4);
  return bVar1;
}



/* Address: 0x1006f0c80 | FUN_1006f0c80 */

void FUN_1006f0c80(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  Substring SVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 *unaff_x20;
  String SVar10;
  String SVar11;
  String SVar12;
  
  SVar6.unknown = (undefined *)*unaff_x20;
  SVar11.str = (char *)unaff_x20[1];
  SVar10 = *(String *)(unaff_x20 + 2);
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  pvVar8 = (void *)unaff_x20[7];
  bVar5 = *(byte *)(unaff_x20 + 8);
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      SVar10 = Swift::Substring::lowercased(SVar6);
      pvVar8 = SVar10.bridgeObject;
      SVar11.str = SVar10.str;
      if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
        SVar11.str = (char *)((ulong)pvVar8 >> 0x38 & 0xf);
      }
      uVar9 = SVar10.str._4_4_ >> 0x1b & 1;
      if (((ulong)pvVar8 & 0x1000000000000000) == 0) {
        uVar9 = 1;
      }
      uVar1 = 7;
      if (uVar9 == 0) {
        uVar1 = 0xb;
      }
      SVar12.str = (char *)(uVar1 | (long)SVar11.str << 0x10);
      SVar12.bridgeObject = SVar10.str;
      SVar6 = Swift::String::get_subscript((Range<Index>)0xf,SVar12);
      _swift_bridgeObjectRelease(pvVar8);
      SVar11.str = SVar12.str;
      goto LAB_1006f0de0;
    }
    if (bVar5 == 2) goto LAB_1006f0ce8;
  }
  else if (bVar5 == 3) {
LAB_1006f0ce8:
    SVar10 = Swift::Substring::lowercased(SVar6);
    pvVar7 = SVar10.bridgeObject;
    SVar11.str = SVar10.str;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      SVar11.str = (char *)((ulong)pvVar7 >> 0x38 & 0xf);
    }
    uVar9 = SVar10.str._4_4_ >> 0x1b & 1;
    if (((ulong)pvVar7 & 0x1000000000000000) == 0) {
      uVar9 = 1;
    }
    uVar1 = 7;
    if (uVar9 == 0) {
      uVar1 = 0xb;
    }
    SVar11.str = (char *)(uVar1 | (long)SVar11.str << 0x10);
    SVar11.bridgeObject = SVar10.str;
    SVar6 = Swift::String::get_subscript((Range<Index>)0xf,SVar11);
    _swift_bridgeObjectRelease(pvVar7);
    _swift_bridgeObjectRetain(pvVar8);
    goto LAB_1006f0de0;
  }
  FUN_1006ee820();
LAB_1006f0de0:
  *param_1 = SVar6.unknown;
  param_1[1] = SVar11.str;
  *(String *)(param_1 + 2) = SVar10;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = uVar3;
  param_1[7] = pvVar8;
  *(byte *)(param_1 + 8) = bVar5;
  return;
}



/* Address: 0x1006f0e14 | FUN_1006f0e14 */

uint FUN_1006f0e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uStack_38 = param_1[5];
  local_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  local_20 = *(undefined1 *)(param_1 + 8);
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  local_70 = *(undefined1 *)(param_2 + 8);
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  puVar1 = &local_60;
  FUN_1006f192c(puVar1,&local_b0);
  return (uint)puVar1 & 1;
}



/* Address: 0x1006f0e6c | thunk_FUN_1006f0a20 */

void thunk_FUN_1006f0a20(void)

{
  FUN_1006f0a20();
  return;
}



/* Address: 0x1006f0e70 | FUN_1006f0e70 */

bool FUN_1006f0e70(ulong param_1,_StringGuts param_2,_StringGuts param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  bool bVar1;
  
  FUN_1006f0150(param_1,param_4);
  if ((param_1 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if ((param_2.unknown != param_5) || (param_3.unknown != param_6)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,param_3,(_StringComparisonResult)(__int8)param_5);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}



/* Address: 0x1006f0eec | thunk_FUN_1006f0f6c */

void thunk_FUN_1006f0f6c(void)

{
  FUN_1006f0f6c();
  return;
}



/* Address: 0x1006f0ef0 | FUN_1006f0ef0 */

bool FUN_1006f0ef0(ulong *param_1,undefined8 *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  
  uVar4 = *param_1;
  _Var1.unknown = (undefined *)param_1[1];
  _Var5.unknown = (undefined *)param_1[2];
  puVar2 = (undefined *)param_2[1];
  puVar6 = (undefined *)param_2[2];
  FUN_1006f0150(uVar4,*param_2);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    if (_Var1.unknown != puVar2 || _Var5.unknown != puVar6) {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var5,(_StringComparisonResult)(__int8)puVar2);
      return bVar3;
    }
    bVar3 = true;
  }
  return bVar3;
}



/* Address: 0x1006f0f6c | FUN_1006f0f6c */

void FUN_1006f0f6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1006f28f4();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1006f0f9c | FUN_1006f0f9c */

void FUN_1006f0f9c(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f0fc4);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(param_3 + 0x10)) {
    FUN_1006ee820(param_3 + param_2 * 0x48 + 0x20,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f0fc8);
  (*pcVar1)();
}



/* Address: 0x1006f0fc8 | FUN_1006f0fc8 */

void FUN_1006f0fc8(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x10);
  return;
}



/* Address: 0x1006f0fd8 | FUN_1006f0fd8 */

code * FUN_1006f0fd8(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)0x41;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x41);
  }
  else {
    _swift_coroFrameAlloc(0x41,0xfb12);
  }
  *param_1 = puVar2;
  uVar3 = *param_2;
  if (-1 < (long)uVar3) {
    if (uVar3 < *(ulong *)(*unaff_x20 + 0x10)) {
      lVar4 = *unaff_x20 + uVar3 * 0x48;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      puVar2[1] = *(undefined8 *)(lVar4 + 0x28);
      *puVar2 = uVar5;
      uVar6 = *(undefined8 *)(lVar4 + 0x38);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar8 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar10 = *(undefined8 *)(lVar4 + 0x58);
      uVar9 = *(undefined8 *)(lVar4 + 0x50);
      *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(lVar4 + 0x60);
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      puVar2[7] = uVar10;
      puVar2[6] = uVar9;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      return FUN_1006f1078;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1078);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1074);
  (*pcVar1)();
}



/* Address: 0x1006f1078 | FUN_1006f1078 */

void FUN_1006f1078(undefined8 *param_1)

{
  _free((void *)*param_1);
  return;
}



/* Address: 0x1006f1080 | FUN_1006f1080 */

void FUN_1006f1080(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  
  if (-1 < *param_2) {
    lVar5 = param_2[1];
    lVar4 = *unaff_x20;
    if (lVar5 <= *(long *)(lVar4 + 0x10)) {
      lVar1 = unaff_x20[1];
      lVar2 = unaff_x20[2];
      *param_1 = *param_2;
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      param_1[3] = lVar1;
      param_1[4] = lVar2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar2);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006f10d0);
  (*pcVar3)();
}



/* Address: 0x1006f10d0 | FUN_1006f10d0 */

void FUN_1006f10d0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = unaff_x20[1];
  lVar3 = unaff_x20[2];
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  *param_1 = *unaff_x20;
  param_1[1] = lVar1;
  param_1[2] = lVar3;
  param_1[3] = 0;
  param_1[4] = lVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar3);
  return;
}



/* Address: 0x1006f1108 | FUN_1006f1108 */

bool FUN_1006f1108(void)

{
  long *unaff_x20;
  
  return *(long *)(*unaff_x20 + 0x10) == 0;
}



/* Address: 0x1006f111c | FUN_1006f111c */

void FUN_1006f111c(ulong *param_1,ulong *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1148);
    (*pcVar1)();
  }
  uVar2 = *param_2;
  if (param_3 != 0) {
    if ((uVar2 ^ 0x7fffffffffffffff) <= param_3 - 1U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f114c);
      (*pcVar1)();
    }
    uVar2 = uVar2 + param_3;
  }
  *param_1 = uVar2;
  return;
}



/* Address: 0x1006f114c | FUN_1006f114c */

void FUN_1006f114c(ulong *param_1,ulong *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f1244);
    (*pcVar2)();
  }
  uVar3 = *param_2;
  if (param_3 != 0) {
    uVar8 = *param_4 - uVar3;
    if (param_3 - 1U <= uVar8) {
      uVar8 = param_3 - 1U;
    }
    if ((uVar3 ^ 0x7fffffffffffffff) <= uVar8) {
      uVar8 = uVar3 ^ 0x7fffffffffffffff;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 < 9) {
      lVar6 = 0;
      uVar8 = uVar3;
    }
    else {
      uVar1 = 8;
      if ((uVar8 & 7) != 0) {
        uVar1 = uVar8 & 7;
      }
      lVar6 = uVar8 - uVar1;
      lVar5 = 0;
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar7 = lVar6;
      uVar8 = uVar3;
      do {
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
        lVar5 = lVar5 + 1;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
      uVar8 = lVar13 + lVar11 + lVar5 + uVar8 + lVar14 + lVar12 + lVar9 + lVar10;
    }
    lVar7 = lVar6 + uVar3 + -0x7fffffffffffffff;
    lVar5 = (lVar6 + uVar3) - *param_4;
    param_3 = param_3 - lVar6;
    uVar3 = uVar8;
    do {
      if (lVar5 == 0) {
        uVar3 = 0;
        uVar4 = 1;
        goto LAB_1006f1230;
      }
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f1240);
        (*pcVar2)();
      }
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar4 = 0;
LAB_1006f1230:
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}



/* Address: 0x1006f1244 | FUN_1006f1244 */

long FUN_1006f1244(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if (lVar3 < lVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f127c);
    (*pcVar1)();
  }
  if (lVar2 == lVar3) {
    return 0;
  }
  if (lVar3 <= lVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1280);
    (*pcVar1)();
  }
  if (0x8000000000000000 < (ulong)(lVar2 - lVar3)) {
    return lVar3 - lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1284);
  (*pcVar1)();
}



/* Address: 0x1006f1284 | FUN_1006f1284 */

void FUN_1006f1284(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return;
}



/* Address: 0x1006f1298 | FUN_1006f1298 */

undefined8 FUN_1006f1298(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Address: 0x1006f12a4 | FUN_1006f12a4 */

undefined8 FUN_1006f12a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[2];
  uVar2 = uVar1;
  FUN_1006f177c(uVar1,unaff_x20[1],uVar3);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Address: 0x1006f12f0 | FUN_1006f12f0 */

void FUN_1006f12f0(void)

{
  FUN_1006f182c();
  return;
}



/* Address: 0x1006f12fc | FUN_1006f12fc */

undefined * FUN_1006f12fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fdbc90;
    FUN_1000f7830(&DAT_100fdbc90,&DAT_100c70c40);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x48) * 2;
  }
  return puVar1;
}



/* Address: 0x1006f1390 | FUN_1006f1390 */

UnsafeMutablePointer
FUN_1006f1390(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f1714);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1006f1418:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_1006f14d4;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1006f1660;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1006a2740(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1006a2740(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1006f1674:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_1006f14d4:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f177c);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1006a2740(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1006a2740(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1006f1660;
  goto LAB_1006f1418;
LAB_1006f1660:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1006a2740(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1006a2740(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f1738);
    (*pcVar2)();
  }
  goto LAB_1006f1674;
}



/* Address: 0x1006f177c | FUN_1006f177c */

undefined * FUN_1006f177c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_60 [2];
  undefined8 local_50;
  
  puVar3 = local_60;
  puVar4 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    FUN_1006f12fc(puVar4,0);
    FUN_1006f182c(local_60,puVar2 + 0x20,puVar4,param_1,param_2,param_3);
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(local_60[0]);
    _swift_bridgeObjectRelease(local_50);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1808);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Address: 0x1006f182c | FUN_1006f182c */

ulong FUN_1006f182c(long *param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5,
                   long param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    if (param_3 == 0) goto LAB_1006f18f8;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f192c);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(param_4 + 0x10);
    if (uVar2 != 0) {
      uVar3 = 0;
      puVar4 = (undefined8 *)(param_4 + 0x20);
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f1928);
          (*pcVar1)();
        }
        uStack_88 = puVar4[5];
        local_90 = puVar4[4];
        uStack_78 = puVar4[7];
        uStack_80 = puVar4[6];
        local_70 = *(undefined1 *)(puVar4 + 8);
        uStack_a8 = puVar4[1];
        local_b0 = *puVar4;
        uStack_98 = puVar4[3];
        uStack_a0 = puVar4[2];
        *(undefined1 *)(param_2 + 8) = local_70;
        param_2[5] = uStack_88;
        param_2[4] = local_90;
        param_2[7] = uStack_78;
        param_2[6] = uStack_80;
        param_2[1] = uStack_a8;
        *param_2 = local_b0;
        param_2[3] = uStack_98;
        param_2[2] = uStack_a0;
        if (param_3 - 1 == uVar3) {
          FUN_1006ee820(&local_b0,auStack_f8);
          uVar3 = param_3;
          break;
        }
        param_2 = param_2 + 9;
        FUN_1006ee820(&local_b0,auStack_f8);
        uVar2 = *(ulong *)(param_4 + 0x10);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 9;
      } while (uVar3 != uVar2);
      goto LAB_1006f18f8;
    }
  }
  uVar3 = 0;
LAB_1006f18f8:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = uVar3;
  return uVar3;
}



/* Address: 0x1006f192c | FUN_1006f192c */

bool FUN_1006f192c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  _StringGuts _Var9;
  Range<__int64> RVar10;
  _StringGuts _Var11;
  Range<__int64> RVar12;
  undefined *puVar13;
  undefined *puVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  
  uVar1 = *param_1;
  uVar32 = param_1[1];
  _Var9.unknown = (undefined *)param_1[2];
  RVar10.unknown = (undefined *)param_1[3];
  uVar33 = param_1[4];
  uVar2 = param_1[5];
  puVar3 = (undefined *)param_1[6];
  puVar14 = (undefined *)param_1[7];
  bVar15 = (byte)param_1[8];
  if (bVar15 < 3) {
    if (bVar15 == 0) {
      if ((char)param_2[8] != '\0') {
        return false;
      }
    }
    else {
      if (bVar15 != 1) {
        if ((char)param_2[8] != '\x02') {
          return false;
        }
        uVar34 = param_2[4];
        uVar35 = param_2[5];
        puVar13 = (undefined *)param_2[6];
        puVar4 = (undefined *)param_2[7];
        if (((((_Var9.unknown != (undefined *)param_2[2]) ||
              (RVar10.unknown != (undefined *)param_2[3])) ||
             ((undefined *)(uVar1 >> 0x10) != (undefined *)(*param_2 >> 0x10))) ||
            ((undefined *)(uVar32 >> 0x10) != (undefined *)(param_2[1] >> 0x10))) &&
           (bVar8 = Swift::_stringCompareInternal
                              (_Var9,RVar10,(undefined *)(uVar1 >> 0x10),
                               (undefined *)(uVar32 >> 0x10),
                               (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar8)) {
          return false;
        }
        if (((puVar3 == puVar13) && (puVar14 == puVar4)) && (uVar33 >> 0x10 == uVar34 >> 0x10))
        goto LAB_1006f1ac4;
        goto LAB_1006f1acc;
      }
      if ((char)param_2[8] != '\x01') {
        return false;
      }
    }
  }
  else if (bVar15 < 5) {
    if (bVar15 == 3) {
      if ((char)param_2[8] != '\x03') {
        return false;
      }
      uVar34 = param_2[4];
      uVar35 = param_2[5];
      puVar13 = (undefined *)param_2[6];
      puVar4 = (undefined *)param_2[7];
      if (((((_Var9.unknown != (undefined *)param_2[2]) ||
            (RVar10.unknown != (undefined *)param_2[3])) ||
           ((undefined *)(uVar1 >> 0x10) != (undefined *)(*param_2 >> 0x10))) ||
          ((undefined *)(uVar32 >> 0x10) != (undefined *)(param_2[1] >> 0x10))) &&
         (bVar8 = Swift::_stringCompareInternal
                            (_Var9,RVar10,(undefined *)(uVar1 >> 0x10),(undefined *)(uVar32 >> 0x10)
                             ,(_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar8)) {
        return false;
      }
      if (((puVar3 == puVar13) && (puVar14 == puVar4)) && (uVar33 >> 0x10 == uVar34 >> 0x10)) {
LAB_1006f1ac4:
        if (uVar2 >> 0x10 == uVar35 >> 0x10) {
          return true;
        }
      }
LAB_1006f1acc:
      RVar12.unknown = (undefined *)(uVar2 >> 0x10);
      _Var11.unknown = (undefined *)(uVar33 >> 0x10);
      _Var9.unknown = puVar3;
      RVar10.unknown = puVar14;
      goto LAB_1006f1b2c;
    }
    if ((char)param_2[8] != '\x04') {
      return false;
    }
  }
  else {
    if (bVar15 != 5) {
      if ((((_Var9.unknown == (undefined *)0x0 && uVar32 == 0) &&
           (uVar1 == 0 && RVar10.unknown == (undefined *)0x0)) &&
          ((uVar33 == 0 && uVar2 == 0) && puVar3 == (undefined *)0x0)) &&
          puVar14 == (undefined *)0x0) {
        if ((char)param_2[8] != '\x06') {
          return false;
        }
        uVar2 = param_2[5];
        uVar1 = param_2[4];
        uVar33 = param_2[1];
        uVar32 = *param_2;
        uVar35 = param_2[3];
        uVar34 = param_2[2];
        bVar15 = (byte)uVar32 | (byte)uVar1 | (byte)uVar34 | (byte)param_2[6];
        bVar16 = (byte)(uVar32 >> 8) | (byte)(uVar1 >> 8) |
                 (byte)(uVar34 >> 8) | *(byte *)((long)param_2 + 0x31);
        bVar17 = (byte)(uVar32 >> 0x10) | (byte)(uVar1 >> 0x10) |
                 (byte)(uVar34 >> 0x10) | *(byte *)((long)param_2 + 0x32);
        bVar18 = (byte)(uVar32 >> 0x18) | (byte)(uVar1 >> 0x18) |
                 (byte)(uVar34 >> 0x18) | *(byte *)((long)param_2 + 0x33);
        bVar19 = (byte)(uVar32 >> 0x20) | (byte)(uVar1 >> 0x20) |
                 (byte)(uVar34 >> 0x20) | *(byte *)((long)param_2 + 0x34);
        bVar20 = (byte)(uVar32 >> 0x28) | (byte)(uVar1 >> 0x28) |
                 (byte)(uVar34 >> 0x28) | *(byte *)((long)param_2 + 0x35);
        bVar21 = (byte)(uVar32 >> 0x30) | (byte)(uVar1 >> 0x30) |
                 (byte)(uVar34 >> 0x30) | *(byte *)((long)param_2 + 0x36);
        bVar22 = (byte)(uVar32 >> 0x38) | (byte)(uVar1 >> 0x38) |
                 (byte)(uVar34 >> 0x38) | *(byte *)((long)param_2 + 0x37);
        bVar23 = (byte)uVar33 | (byte)uVar2 | (byte)uVar35 | (byte)param_2[7];
        bVar24 = (byte)(uVar33 >> 8) | (byte)(uVar2 >> 8) |
                 (byte)(uVar35 >> 8) | *(byte *)((long)param_2 + 0x39);
        bVar25 = (byte)(uVar33 >> 0x10) | (byte)(uVar2 >> 0x10) |
                 (byte)(uVar35 >> 0x10) | *(byte *)((long)param_2 + 0x3a);
        bVar26 = (byte)(uVar33 >> 0x18) | (byte)(uVar2 >> 0x18) |
                 (byte)(uVar35 >> 0x18) | *(byte *)((long)param_2 + 0x3b);
        bVar27 = (byte)(uVar33 >> 0x20) | (byte)(uVar2 >> 0x20) |
                 (byte)(uVar35 >> 0x20) | *(byte *)((long)param_2 + 0x3c);
        bVar28 = (byte)(uVar33 >> 0x28) | (byte)(uVar2 >> 0x28) |
                 (byte)(uVar35 >> 0x28) | *(byte *)((long)param_2 + 0x3d);
        bVar29 = (byte)(uVar33 >> 0x30) | (byte)(uVar2 >> 0x30) |
                 (byte)(uVar35 >> 0x30) | *(byte *)((long)param_2 + 0x3e);
        bVar30 = (byte)(uVar33 >> 0x38) | (byte)(uVar2 >> 0x38) |
                 (byte)(uVar35 >> 0x38) | *(byte *)((long)param_2 + 0x3f);
        auVar31[1] = bVar16;
        auVar31[0] = bVar15;
        auVar31[2] = bVar17;
        auVar31[3] = bVar18;
        auVar31[4] = bVar19;
        auVar31[5] = bVar20;
        auVar31[6] = bVar21;
        auVar31[7] = bVar22;
        auVar31[8] = bVar23;
        auVar31[9] = bVar24;
        auVar31[10] = bVar25;
        auVar31[0xb] = bVar26;
        auVar31[0xc] = bVar27;
        auVar31[0xd] = bVar28;
        auVar31[0xe] = bVar29;
        auVar31[0xf] = bVar30;
        auVar7[1] = bVar16;
        auVar7[0] = bVar15;
        auVar7[2] = bVar17;
        auVar7[3] = bVar18;
        auVar7[4] = bVar19;
        auVar7[5] = bVar20;
        auVar7[6] = bVar21;
        auVar7[7] = bVar22;
        auVar7[8] = bVar23;
        auVar7[9] = bVar24;
        auVar7[10] = bVar25;
        auVar7[0xb] = bVar26;
        auVar7[0xc] = bVar27;
        auVar7[0xd] = bVar28;
        auVar7[0xe] = bVar29;
        auVar7[0xf] = bVar30;
        auVar31 = NEON_ext(auVar31,auVar7,8,1);
        if (CONCAT17(bVar22 | auVar31[7],
                     CONCAT16(bVar21 | auVar31[6],
                              CONCAT15(bVar20 | auVar31[5],
                                       CONCAT14(bVar19 | auVar31[4],
                                                CONCAT13(bVar18 | auVar31[3],
                                                         CONCAT12(bVar17 | auVar31[2],
                                                                  CONCAT11(bVar16 | auVar31[1],
                                                                           bVar15 | auVar31[0]))))))
                    ) != 0) {
          return false;
        }
        return true;
      }
      if ((uVar1 == 1) &&
         ((((_Var9.unknown == (undefined *)0x0 && uVar32 == 0) && RVar10.unknown == (undefined *)0x0
           ) && ((uVar33 == 0 && uVar2 == 0) && puVar3 == (undefined *)0x0)) &&
          puVar14 == (undefined *)0x0)) {
        if ((char)param_2[8] != '\x06') {
          return false;
        }
        if (*param_2 != 1) {
          return false;
        }
      }
      else {
        if ((char)param_2[8] != '\x06') {
          return false;
        }
        if (*param_2 != 2) {
          return false;
        }
      }
      uVar2 = param_2[7];
      uVar1 = param_2[6];
      bVar15 = (byte)param_2[4] | (byte)uVar1;
      bVar16 = *(byte *)((long)param_2 + 0x21) | (byte)(uVar1 >> 8);
      bVar17 = *(byte *)((long)param_2 + 0x22) | (byte)(uVar1 >> 0x10);
      bVar18 = *(byte *)((long)param_2 + 0x23) | (byte)(uVar1 >> 0x18);
      bVar19 = *(byte *)((long)param_2 + 0x24) | (byte)(uVar1 >> 0x20);
      bVar20 = *(byte *)((long)param_2 + 0x25) | (byte)(uVar1 >> 0x28);
      bVar21 = *(byte *)((long)param_2 + 0x26) | (byte)(uVar1 >> 0x30);
      bVar22 = *(byte *)((long)param_2 + 0x27) | (byte)(uVar1 >> 0x38);
      bVar23 = (byte)param_2[5] | (byte)uVar2;
      bVar24 = *(byte *)((long)param_2 + 0x29) | (byte)(uVar2 >> 8);
      bVar25 = *(byte *)((long)param_2 + 0x2a) | (byte)(uVar2 >> 0x10);
      bVar26 = *(byte *)((long)param_2 + 0x2b) | (byte)(uVar2 >> 0x18);
      bVar27 = *(byte *)((long)param_2 + 0x2c) | (byte)(uVar2 >> 0x20);
      bVar28 = *(byte *)((long)param_2 + 0x2d) | (byte)(uVar2 >> 0x28);
      bVar29 = *(byte *)((long)param_2 + 0x2e) | (byte)(uVar2 >> 0x30);
      bVar30 = *(byte *)((long)param_2 + 0x2f) | (byte)(uVar2 >> 0x38);
      auVar5[1] = bVar16;
      auVar5[0] = bVar15;
      auVar5[2] = bVar17;
      auVar5[3] = bVar18;
      auVar5[4] = bVar19;
      auVar5[5] = bVar20;
      auVar5[6] = bVar21;
      auVar5[7] = bVar22;
      auVar5[8] = bVar23;
      auVar5[9] = bVar24;
      auVar5[10] = bVar25;
      auVar5[0xb] = bVar26;
      auVar5[0xc] = bVar27;
      auVar5[0xd] = bVar28;
      auVar5[0xe] = bVar29;
      auVar5[0xf] = bVar30;
      auVar6[1] = bVar16;
      auVar6[0] = bVar15;
      auVar6[2] = bVar17;
      auVar6[3] = bVar18;
      auVar6[4] = bVar19;
      auVar6[5] = bVar20;
      auVar6[6] = bVar21;
      auVar6[7] = bVar22;
      auVar6[8] = bVar23;
      auVar6[9] = bVar24;
      auVar6[10] = bVar25;
      auVar6[0xb] = bVar26;
      auVar6[0xc] = bVar27;
      auVar6[0xd] = bVar28;
      auVar6[0xe] = bVar29;
      auVar6[0xf] = bVar30;
      auVar31 = NEON_ext(auVar5,auVar6,8,1);
      if ((CONCAT17(bVar22 | auVar31[7],
                    CONCAT16(bVar21 | auVar31[6],
                             CONCAT15(bVar20 | auVar31[5],
                                      CONCAT14(bVar19 | auVar31[4],
                                               CONCAT13(bVar18 | auVar31[3],
                                                        CONCAT12(bVar17 | auVar31[2],
                                                                 CONCAT11(bVar16 | auVar31[1],
                                                                          bVar15 | auVar31[0])))))))
           == 0 && param_2[3] == 0) && (param_2[2] == 0 && param_2[1] == 0)) {
        return true;
      }
      return false;
    }
    if ((char)param_2[8] != '\x05') {
      return false;
    }
  }
  puVar13 = (undefined *)param_2[2];
  _Var11.unknown = (undefined *)(uVar1 >> 0x10);
  RVar12.unknown = (undefined *)(uVar32 >> 0x10);
  if (((_Var9.unknown == puVar13) && (RVar10.unknown == (undefined *)param_2[3])) &&
     ((_Var11.unknown == (undefined *)(*param_2 >> 0x10) &&
      (RVar12.unknown == (undefined *)(param_2[1] >> 0x10))))) {
    return true;
  }
LAB_1006f1b2c:
  bVar8 = Swift::_stringCompareInternal
                    (_Var9,RVar10,_Var11,RVar12,(_StringComparisonResult)(__int8)puVar13);
  return bVar8;
}



/* Address: 0x1006f1c2c | FUN_1006f1c2c */

long FUN_1006f1c2c(long param_1)

{
  String *pSVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  String *pSVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  char *local_128;
  String local_118 [4];
  char *local_d0;
  void *pvStack_c8;
  char *local_c0;
  void *pvStack_b8;
  char *local_b0;
  void *pvStack_a8;
  char *local_a0;
  void *pvStack_98;
  byte local_90;
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_78 = 0x2f;
  uStack_70 = 0xe100000000000000;
  lVar6 = *(long *)(param_1 + 0x10);
  pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006bf7c0(0,lVar6,0);
    pSVar5 = (String *)(param_1 + 0x20);
    do {
      pcVar4 = local_80;
      pvStack_c8 = pSVar5->bridgeObject;
      local_d0 = pSVar5->str;
      SVar20 = *pSVar5;
      SVar14 = *pSVar5;
      SVar24 = *pSVar5;
      SVar23 = *pSVar5;
      SVar12 = *pSVar5;
      pvVar9 = pSVar5[1].bridgeObject;
      pcVar7 = pSVar5[1].str;
      pSVar1 = pSVar5 + 2;
      pvStack_a8 = pSVar5[2].bridgeObject;
      local_b0 = pSVar1->str;
      SVar16 = *pSVar1;
      SVar21 = *pSVar1;
      pvVar10 = pSVar5[3].bridgeObject;
      pcVar8 = pSVar5[3].str;
      local_90 = *(byte *)&pSVar5[4].str;
      local_c0 = pcVar7;
      pvStack_b8 = pvVar9;
      local_a0 = pcVar8;
      pvStack_98 = pvVar10;
      if (local_90 < 3) {
        if (local_90 != 0) {
          if (local_90 != 1) {
            local_128 = (char *)0x7b;
            FUN_1006ee820(&local_d0,local_118);
            SVar12 = Swift::String::__fromSubstring(SVar16);
            SVar23.bridgeObject = pvVar10;
            SVar23.str = pcVar8;
            Swift::String::append(SVar12,SVar23);
            _swift_bridgeObjectRelease(SVar12.bridgeObject);
            SVar12.bridgeObject = (void *)0xe100000000000000;
            SVar12.str = (char *)0x7d;
            SVar24.bridgeObject = pvVar10;
            SVar24.str = pcVar8;
            Swift::String::append(SVar12,SVar24);
            goto LAB_1006f1ec0;
          }
          local_128 = (char *)0x7b;
          FUN_1006ee820(&local_d0,local_118);
          SVar12 = Swift::String::__fromSubstring(SVar23);
          SVar20.bridgeObject = pvVar9;
          SVar20.str = pcVar7;
          Swift::String::append(SVar12,SVar20);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          SVar14.bridgeObject = (void *)0xe100000000000000;
          SVar14.str = (char *)0x7d;
          SVar21.bridgeObject = pvVar9;
          SVar21.str = pcVar7;
          Swift::String::append(SVar14,SVar21);
LAB_1006f1ee8:
          FUN_1006ee85c(&local_d0);
          pvVar9 = (void *)0xe100000000000000;
          goto LAB_1006f1ef4;
        }
        FUN_1006ee820(&local_d0,local_118);
        SVar16 = Swift::String::__fromSubstring(SVar14);
        FUN_1006ee85c(&local_d0);
      }
      else if (local_90 < 5) {
        if (local_90 != 3) {
          local_128 = &DAT_0000002a;
          FUN_1006ee820(&local_d0,local_118);
LAB_1006f1ec0:
          SVar12 = Swift::String::__fromSubstring(SVar20);
          SVar25.bridgeObject = pvVar9;
          SVar25.str = pcVar7;
          Swift::String::append(SVar12,SVar25);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          goto LAB_1006f1ee8;
        }
        FUN_1006ee820(&local_d0,local_118);
        local_118[0] = Swift::String::__fromSubstring(SVar12);
        SVar11.bridgeObject = (void *)0xe100000000000000;
        SVar11.str = (char *)0x7b;
        SVar17.bridgeObject = pvVar9;
        SVar17.str = pcVar7;
        Swift::String::append(SVar11,SVar17);
        SVar12 = Swift::String::__fromSubstring(SVar21);
        SVar18.bridgeObject = pvVar10;
        SVar18.str = pcVar8;
        Swift::String::append(SVar12,SVar18);
        _swift_bridgeObjectRelease(SVar12.bridgeObject);
        SVar13.bridgeObject = (void *)0xe100000000000000;
        SVar13.str = (char *)0x7d;
        SVar19.bridgeObject = pvVar10;
        SVar19.str = pcVar8;
        Swift::String::append(SVar13,SVar19);
        FUN_1006ee85c(&local_d0);
        local_128 = local_118[0].str;
        pvVar9 = local_118[0].bridgeObject;
LAB_1006f1ef4:
        SVar16.bridgeObject = pvVar9;
        SVar16.str = local_128;
      }
      else if (local_90 == 5) {
        FUN_1006ee820(&local_d0,local_118);
        local_118[0] = Swift::String::__fromSubstring(SVar24);
        SVar15.bridgeObject = (void *)0xe100000000000000;
        SVar15.str = &DAT_0000002a;
        SVar22.bridgeObject = pvVar9;
        SVar22.str = pcVar7;
        Swift::String::append(SVar15,SVar22);
        FUN_1006ee85c(&local_d0);
        SVar16 = local_118[0];
      }
      else if ((((pcVar7 == (char *)0x0 && pvStack_c8 == (void *)0x0) &&
                (local_d0 == (char *)0x0 && local_b0 == (char *)0x0)) &&
               ((pvStack_a8 == (void *)0x0 && pcVar8 == (char *)0x0) && pvVar10 == (void *)0x0)) &&
               pvVar9 == (void *)0x0) {
        FUN_1006ee85c(&local_d0);
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = &DAT_0000002a;
      }
      else if ((local_d0 == (char *)0x1) &&
              ((((pcVar7 == (char *)0x0 && pvStack_c8 == (void *)0x0) && local_b0 == (char *)0x0) &&
               ((pvStack_a8 == (void *)0x0 && pcVar8 == (char *)0x0) && pvVar10 == (void *)0x0)) &&
               pvVar9 == (void *)0x0)) {
        FUN_1006ee85c(&local_d0);
        SVar16.bridgeObject = &SUB_e200000000000000;
        SVar16.str = (char *)0x2a2a;
      }
      else {
        FUN_1006ee85c(&local_d0);
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = (char *)0x21;
      }
      uVar2 = *(ulong *)(pcVar4 + 0x10);
      local_80 = pcVar4;
      if (*(ulong *)(pcVar4 + 0x18) >> 1 <= uVar2) {
        FUN_1006bf7c0(1 < *(ulong *)(pcVar4 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_80 + 0x10) = uVar2 + 1;
      *(String *)(local_80 + uVar2 * 0x10 + 0x20) = SVar16;
      pSVar5 = (String *)&pSVar5[4].bridgeObject;
      lVar6 = lVar6 + -1;
      pcVar4 = local_80;
    } while (lVar6 != 0);
  }
  pcVar7 = &DAT_100fdc3a8;
  local_d0 = pcVar4;
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  puVar3 = &DAT_100fdc3b0;
  FUN_100134584(&DAT_100fdc3b0,&DAT_100fdc3a8,&DAT_100c71a80,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2f;
  SVar12 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar4);
  SVar26.bridgeObject = puVar3;
  SVar26.str = pcVar7;
  Swift::String::append(SVar12,SVar26);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  return param_1;
}



/* Address: 0x1006f2074 | FUN_1006f2074 */

void FUN_1006f2074(undefined8 *param_1,Index param_2,Index param_3,undefined *param_4,
                  undefined *param_5)

{
  code *pcVar1;
  bool bVar2;
  Index IVar3;
  Index after;
  Index IVar4;
  Index IVar5;
  Index IVar6;
  Index IVar7;
  __int64 _Var8;
  uint uVar9;
  _StringGuts _Var10;
  ulong uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  Substring SVar15;
  Index IVar16;
  Substring unaff_x27;
  Index unaff_x28;
  Character CVar17;
  
  SVar15.unknown = (undefined *)((ulong)param_2.cmsgPointer.unknown >> 0xe);
  IVar16.cmsgPointer.unknown = (UnsafeMutablePointer)((ulong)param_3.cmsgPointer.unknown >> 0xe);
  IVar7.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
  IVar3.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_5;
  IVar4.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if ((UnsafeMutablePointer)SVar15.unknown == IVar16.cmsgPointer.unknown) {
LAB_1006f20b8:
    IVar6.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    FUN_1006ccb40(param_2.cmsgPointer.unknown,param_3.cmsgPointer.unknown,param_4,param_5,0x2a,
                  0xe100000000000000);
    if (((ulong)IVar6.cmsgPointer.unknown & 1) != 0) {
      _swift_bridgeObjectRelease(param_5);
      SVar15.unknown = (undefined *)0x0;
      uVar12 = 6;
      IVar7.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar3.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined1 *)0x0;
      param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar16.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined8 *)0x0;
      unaff_x27.unknown = (undefined *)0x0;
      unaff_x28.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      goto LAB_1006f222c;
    }
    IVar6.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    FUN_1006ccb40(param_2.cmsgPointer.unknown,param_3.cmsgPointer.unknown,param_4,param_5,0x2a2a,
                  &SUB_e200000000000000);
    if (((ulong)IVar6.cmsgPointer.unknown & 1) != 0) {
      _swift_bridgeObjectRelease(param_5);
      SVar15.unknown = (undefined *)0x0;
      uVar12 = 6;
      IVar7.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar3.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)&DAT_00000001;
      param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      IVar16.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined8 *)0x0;
      unaff_x27.unknown = (undefined *)0x0;
      unaff_x28.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x0;
      goto LAB_1006f222c;
    }
    if ((UnsafeMutablePointer)SVar15.unknown == IVar16.cmsgPointer.unknown) {
LAB_1006f2268:
      uVar12 = 0;
      param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_4;
    }
    else {
      CVar17 = Swift::Substring::get_subscript(param_2,(Substring)param_2.cmsgPointer.unknown);
      _Var10.unknown = CVar17.bridgeObject;
      if ((CVar17.str == &DAT_0000002a) && (_Var10.unknown == (undefined *)0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
        param_4 = unaff_x27.unknown;
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x2a);
        _swift_bridgeObjectRelease(_Var10.unknown);
        if (!bVar2) {
          IVar6 = Swift::Substring::index(param_3,(Substring)param_2.cmsgPointer.unknown);
          CVar17 = Swift::Substring::get_subscript(IVar6,(Substring)param_2.cmsgPointer.unknown);
          _Var10.unknown = CVar17.bridgeObject;
          unaff_x27.unknown = param_4;
          if ((CVar17.str == &DAT_0000002a) && (_Var10.unknown == (undefined *)0xe100000000000000))
          {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x2a);
            _swift_bridgeObjectRelease(_Var10.unknown);
            if (!bVar2) goto LAB_1006f2268;
          }
          _Var8 = Swift::Substring::distance(param_2,param_3,(Substring)param_2.cmsgPointer.unknown)
          ;
          if (SBORROW8(_Var8,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28e8);
            (*pcVar1)();
          }
          uVar11 = _Var8 - 1U & ((long)(_Var8 - 1U) >> 0x3f ^ 0xffffffffffffffffU);
          IVar3.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
          Swift::Substring::_index(param_2,uVar11,param_3,(Substring)param_2.cmsgPointer.unknown);
          if (((uint)uVar11 & 0xff) != 1) {
            IVar7.cmsgPointer.unknown = IVar3.cmsgPointer.unknown;
          }
          if ((undefined8 *)((ulong)IVar7.cmsgPointer.unknown >> 0xe) < SVar15.unknown) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28ec);
            (*pcVar1)();
          }
          IVar4.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               Swift::Substring::get_subscript
                         ((Range<Index>)param_2.cmsgPointer.unknown,
                          (Substring)IVar7.cmsgPointer.unknown);
          _swift_bridgeObjectRelease(param_5);
          uVar12 = 5;
          IVar3.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
          goto LAB_1006f222c;
        }
      }
      uVar9 = 1;
      IVar3.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
      Swift::Substring::_index(param_2,1,param_3,(Substring)param_2.cmsgPointer.unknown);
      if ((uVar9 & 0xff) != 1) {
        IVar7.cmsgPointer.unknown = IVar3.cmsgPointer.unknown;
      }
      if ((ulong)IVar16.cmsgPointer.unknown <
          (undefined8 *)((ulong)IVar7.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28d0);
        (*pcVar1)();
      }
      IVar3.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
      IVar4.cmsgPointer.unknown =
           (UnsafeMutablePointer)
           Swift::Substring::get_subscript
                     ((Range<Index>)IVar7.cmsgPointer.unknown,(Substring)param_3.cmsgPointer.unknown
                     );
      _swift_bridgeObjectRelease(param_5);
      uVar12 = 4;
      IVar7.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
      unaff_x27.unknown = param_4;
    }
    goto LAB_1006f222c;
  }
  CVar17 = Swift::Substring::get_subscript(param_2,(Substring)param_2.cmsgPointer.unknown);
  _Var10.unknown = CVar17.bridgeObject;
  if ((CVar17.str == &DAT_0000003a) && (_Var10.unknown == (undefined *)0xe100000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x3a);
    _swift_bridgeObjectRelease(_Var10.unknown);
    if (!bVar2) {
      CVar17 = Swift::Substring::get_subscript(param_2,(Substring)param_2.cmsgPointer.unknown);
      _Var10.unknown = CVar17.bridgeObject;
      IVar6.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
      if ((CVar17.str == (undefined *)0x7b) && (_Var10.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1006f2308:
        _swift_bridgeObjectRetain(param_5);
        uVar9 = 1;
        IVar5.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
        Swift::Substring::_index(param_2,1,param_3,(Substring)param_2.cmsgPointer.unknown);
        if ((uVar9 & 0xff) != 1) {
          IVar7.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
        }
        if ((ulong)IVar16.cmsgPointer.unknown <
            (undefined8 *)((ulong)IVar7.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28cc);
          (*pcVar1)();
        }
        IVar5.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
        IVar16.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
        unaff_x27 = Swift::Substring::get_subscript
                              ((Range<Index>)IVar7.cmsgPointer.unknown,
                               (Substring)param_3.cmsgPointer.unknown);
        _swift_bridgeObjectRelease(param_5);
        uVar14 = (ulong)IVar5.cmsgPointer.unknown >> 0xe;
        uVar13 = (ulong)unaff_x27.unknown >> 0xe;
        uVar11 = uVar13;
        after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x27;
        while (uVar11 != uVar14) {
          CVar17 = Swift::Substring::get_subscript(after,unaff_x27);
          _Var10.unknown = CVar17.bridgeObject;
          if ((CVar17.str == (undefined *)0x7d) &&
             (_Var10.unknown == (undefined *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(param_5);
            param_5 = (undefined *)0xe100000000000000;
LAB_1006f2674:
            _swift_bridgeObjectRelease(param_5);
            IVar4 = Swift::Substring::index(after,unaff_x27);
            IVar3.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
            if ((ulong)IVar4.cmsgPointer.unknown >> 0xe == uVar14) {
              if (uVar11 < uVar13) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28dc);
                (*pcVar1)();
              }
              IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
              IVar4.cmsgPointer.unknown =
                   (UnsafeMutablePointer)
                   Swift::Substring::get_subscript
                             ((Range<Index>)unaff_x27.unknown,(Substring)after.cmsgPointer.unknown);
              _swift_bridgeObjectRelease(IVar6.cmsgPointer.unknown);
              uVar12 = 1;
              param_2.cmsgPointer.unknown =
                   (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x27.unknown;
              unaff_x27.unknown = (undefined *)IVar5.cmsgPointer.unknown;
              unaff_x28.cmsgPointer.unknown = after.cmsgPointer.unknown;
            }
            else {
              if (uVar14 < (ulong)IVar4.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28e0);
                (*pcVar1)();
              }
              IVar7.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
              param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x27;
              IVar4.cmsgPointer.unknown =
                   (UnsafeMutablePointer)
                   Swift::Substring::get_subscript
                             ((Range<Index>)IVar4.cmsgPointer.unknown,
                              (Substring)IVar5.cmsgPointer.unknown);
              if (uVar11 < uVar13) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28e4);
                (*pcVar1)();
              }
              SVar15 = Swift::Substring::get_subscript
                                 (unaff_x27.unknown,(Substring)after.cmsgPointer.unknown);
              _swift_bridgeObjectRelease(IVar6.cmsgPointer.unknown);
              uVar12 = 2;
              IVar16.cmsgPointer.unknown = after.cmsgPointer.unknown;
              unaff_x28.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
            }
            goto LAB_1006f222c;
          }
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x7d);
          _swift_bridgeObjectRelease(_Var10.unknown);
          SVar15.unknown = (undefined *)param_1;
          if (bVar2) goto LAB_1006f2674;
          after = Swift::Substring::index(after,unaff_x27);
          unaff_x28 = after;
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
        }
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x7b);
        _swift_bridgeObjectRelease(_Var10.unknown);
        if (bVar2) goto LAB_1006f2308;
        IVar5 = Swift::Substring::index(param_3,(Substring)param_2.cmsgPointer.unknown);
        CVar17 = Swift::Substring::get_subscript(IVar5,(Substring)param_2.cmsgPointer.unknown);
        _Var10.unknown = CVar17.bridgeObject;
        if ((CVar17.str == (undefined *)0x7d) && (_Var10.unknown == (undefined *)0xe100000000000000)
           ) {
          _swift_bridgeObjectRelease(0xe100000000000000);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar17.str,_Var10,(_StringComparisonResult)0x7d);
          _swift_bridgeObjectRelease(_Var10.unknown);
          if (!bVar2) goto LAB_1006f20b8;
        }
        _swift_bridgeObjectRetain(param_5);
        _Var8 = Swift::Substring::distance(param_2,param_3,(Substring)param_2.cmsgPointer.unknown);
        if (SBORROW8(_Var8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28d4);
          (*pcVar1)();
        }
        uVar11 = _Var8 - 1U & ((long)(_Var8 - 1U) >> 0x3f ^ 0xffffffffffffffffU);
        IVar7.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
        Swift::Substring::_index(param_2,uVar11,param_3,(Substring)param_2.cmsgPointer.unknown);
        IVar16.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
        if (((uint)uVar11 & 0xff) != 1) {
          IVar16.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
        }
        if ((undefined8 *)((ulong)IVar16.cmsgPointer.unknown >> 0xe) < SVar15.unknown) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28d8);
          (*pcVar1)();
        }
        IVar5.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
        unaff_x27 = Swift::Substring::get_subscript
                              ((Range<Index>)param_2.cmsgPointer.unknown,
                               (Substring)IVar16.cmsgPointer.unknown);
        _swift_bridgeObjectRelease(param_5);
        IVar7.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x7b;
        uVar9 = 0;
        FUN_1006bf6d8(0x7b,0xe100000000000000,unaff_x27.unknown,IVar16.cmsgPointer.unknown,
                      IVar5.cmsgPointer.unknown,IVar6.cmsgPointer.unknown);
        SVar15 = unaff_x27;
        if ((uVar9 & 0xff) != 1) {
          unaff_x28.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
          if ((ulong)IVar7.cmsgPointer.unknown >> 0xe != (ulong)unaff_x27.unknown >> 0xe) {
            _swift_bridgeObjectRelease(param_5);
            IVar5 = Swift::Substring::index(IVar7,unaff_x27);
            if ((ulong)IVar7.cmsgPointer.unknown >> 0xe < (ulong)unaff_x27.unknown >> 0xe) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28f0);
              (*pcVar1)();
            }
            param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x27;
            IVar3.cmsgPointer.unknown = IVar16.cmsgPointer.unknown;
            IVar4.cmsgPointer.unknown =
                 (UnsafeMutablePointer)
                 Swift::Substring::get_subscript
                           ((Range<Index>)unaff_x27.unknown,(Substring)IVar7.cmsgPointer.unknown);
            if ((ulong)IVar16.cmsgPointer.unknown >> 0xe < (ulong)IVar5.cmsgPointer.unknown >> 0xe)
            {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28f4);
              (*pcVar1)();
            }
            unaff_x28.cmsgPointer.unknown = IVar16.cmsgPointer.unknown;
            SVar15 = Swift::Substring::get_subscript
                               ((Range<Index>)IVar5.cmsgPointer.unknown,
                                (Substring)IVar16.cmsgPointer.unknown);
            _swift_bridgeObjectRelease(IVar6.cmsgPointer.unknown);
            uVar12 = 3;
            goto LAB_1006f222c;
          }
        }
      }
      _swift_bridgeObjectRelease(IVar6.cmsgPointer.unknown);
      uVar12 = 0;
      IVar7.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
      param_2.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_4;
      unaff_x27.unknown = (undefined *)IVar5.cmsgPointer.unknown;
      goto LAB_1006f222c;
    }
  }
  uVar9 = 1;
  IVar3.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  Swift::Substring::_index(param_2,1,param_3,(Substring)param_2.cmsgPointer.unknown);
  if ((uVar9 & 0xff) != 1) {
    IVar7.cmsgPointer.unknown = IVar3.cmsgPointer.unknown;
  }
  if ((ulong)IVar16.cmsgPointer.unknown < (undefined8 *)((ulong)IVar7.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f28c8);
    (*pcVar1)();
  }
  IVar3.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
  IVar4.cmsgPointer.unknown =
       (UnsafeMutablePointer)
       Swift::Substring::get_subscript
                 ((Range<Index>)IVar7.cmsgPointer.unknown,(Substring)param_3.cmsgPointer.unknown);
  _swift_bridgeObjectRelease(param_5);
  uVar12 = 1;
  IVar7.cmsgPointer.unknown = param_3.cmsgPointer.unknown;
LAB_1006f222c:
  *param_1 = IVar4.cmsgPointer.unknown;
  param_1[1] = IVar7.cmsgPointer.unknown;
  param_1[2] = param_2.cmsgPointer.unknown;
  param_1[3] = IVar3.cmsgPointer.unknown;
  param_1[4] = SVar15.unknown;
  param_1[5] = IVar16.cmsgPointer.unknown;
  param_1[6] = unaff_x27.unknown;
  param_1[7] = unaff_x28.cmsgPointer.unknown;
  *(undefined1 *)(param_1 + 8) = uVar12;
  return;
}



/* Address: 0x1006f28f4 | FUN_1006f28f4 */

void FUN_1006f28f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_c0 = (undefined *)0x2f;
  uStack_b8 = 0xe100000000000000;
  local_a0 = &local_c0;
  lVar6 = 0x7fffffffffffffff;
  FUN_1006f1390(0x7fffffffffffffff,1,FUN_1000f64a4,&local_b0,param_1,param_2);
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006bf844(0,lVar8,0);
    puVar9 = (undefined8 *)(lVar6 + 0x38);
    do {
      puVar7 = local_c0;
      uVar1 = puVar9[-3];
      uVar4 = puVar9[-2];
      uVar2 = puVar9[-1];
      uVar5 = *puVar9;
      _swift_bridgeObjectRetain(uVar5);
      FUN_1006f2074(&local_b0,uVar1,uVar4,uVar2,uVar5);
      uVar3 = *(ulong *)(puVar7 + 0x10);
      local_c0 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        FUN_1006bf844(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
      }
      puVar7 = local_c0;
      puVar9 = puVar9 + 4;
      *(ulong *)(local_c0 + 0x10) = uVar3 + 1;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x28) = uStack_a8;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x20) = local_b0;
      local_c0[uVar3 * 0x48 + 0x60] = local_70;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x48) = uStack_88;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x40) = uStack_90;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x58) = uStack_78;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x50) = local_80;
      *(undefined8 *)(local_c0 + uVar3 * 0x48 + 0x38) = uStack_98;
      *(undefined ***)(local_c0 + uVar3 * 0x48 + 0x30) = local_a0;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  FUN_1006f1c2c(puVar7);
  return;
}



/* Address: 0x1006f2a5c | FUN_1006f2a5c */

void FUN_1006f2a5c(long param_1)

{
  ulong uVar1;
  Substring SVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Substring SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_108 [72];
  undefined *local_c0;
  char *pcStack_b8;
  char *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  byte local_80;
  undefined *local_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar3 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006bf844(0,lVar3,0);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar6 = local_70;
      lVar3 = lVar3 + -1;
      pcStack_b8 = (char *)puVar8[1];
      SVar2.unknown = (undefined *)*puVar8;
      pvStack_a8 = (void *)puVar8[3];
      local_b0 = (char *)puVar8[2];
      uVar10 = puVar8[5];
      uVar9 = puVar8[4];
      SVar12.unknown = (undefined *)puVar8[7];
      uVar11 = puVar8[6];
      local_80 = *(byte *)(puVar8 + 8);
      local_c0 = SVar2.unknown;
      local_a0 = uVar9;
      uStack_98 = uVar10;
      local_90 = uVar11;
      puStack_88 = SVar12.unknown;
      if (local_80 < 3) {
        if (local_80 == 0) {
          FUN_1006ee820(&local_c0,auStack_108);
          SVar13 = Swift::Substring::lowercased(SVar2);
          pvVar4 = SVar13.bridgeObject;
          SVar16.str = SVar13.str;
          if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
            SVar16.str = (char *)((ulong)pvVar4 >> 0x38 & 0xf);
          }
          uVar5 = SVar13.str._4_4_ >> 0x1b & 1;
          if (((ulong)pvVar4 & 0x1000000000000000) == 0) {
            uVar5 = 1;
          }
          uVar1 = 7;
          if (uVar5 == 0) {
            uVar1 = 0xb;
          }
          SVar16.str = (char *)(uVar1 | (long)SVar16.str << 0x10);
          SVar16.bridgeObject = SVar13.str;
          SVar2 = Swift::String::get_subscript((Range<Index>)0xf,SVar16);
          _swift_bridgeObjectRelease(pvVar4);
          FUN_1006ee85c(&local_c0);
          bVar7 = 0;
          uVar9 = extraout_x9;
          uVar10 = extraout_x10;
          SVar12 = SVar2;
        }
        else {
          if (local_80 != 2) goto LAB_1006f2bb0;
          FUN_1006ee820(&local_c0,auStack_108);
          SVar13 = Swift::Substring::lowercased(SVar2);
          pvVar4 = SVar13.bridgeObject;
          SVar16.str = SVar13.str;
          if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
            SVar16.str = (char *)((ulong)pvVar4 >> 0x38 & 0xf);
          }
          uVar5 = SVar13.str._4_4_ >> 0x1b & 1;
          if (((ulong)pvVar4 & 0x1000000000000000) == 0) {
            uVar5 = 1;
          }
          uVar1 = 7;
          if (uVar5 == 0) {
            uVar1 = 0xb;
          }
          SVar14.str = (char *)(uVar1 | (long)SVar16.str << 0x10);
          SVar14.bridgeObject = SVar13.str;
          SVar2 = Swift::String::get_subscript((Range<Index>)0xf,SVar14);
          _swift_bridgeObjectRelease(pvVar4);
          _swift_bridgeObjectRetain(SVar12.unknown);
          FUN_1006ee85c(&local_c0);
          bVar7 = 2;
          SVar16.str = SVar14.str;
        }
      }
      else if (local_80 == 3) {
        FUN_1006ee820(&local_c0,auStack_108);
        SVar13 = Swift::Substring::lowercased(SVar2);
        pvVar4 = SVar13.bridgeObject;
        SVar16.str = SVar13.str;
        if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
          SVar16.str = (char *)((ulong)pvVar4 >> 0x38 & 0xf);
        }
        uVar5 = SVar13.str._4_4_ >> 0x1b & 1;
        if (((ulong)pvVar4 & 0x1000000000000000) == 0) {
          uVar5 = 1;
        }
        uVar1 = 7;
        if (uVar5 == 0) {
          uVar1 = 0xb;
        }
        SVar15.str = (char *)(uVar1 | (long)SVar16.str << 0x10);
        SVar15.bridgeObject = SVar13.str;
        SVar2 = Swift::String::get_subscript((Range<Index>)0xf,SVar15);
        _swift_bridgeObjectRelease(pvVar4);
        _swift_bridgeObjectRetain(SVar12.unknown);
        FUN_1006ee85c(&local_c0);
        bVar7 = 3;
        SVar16.str = SVar15.str;
      }
      else {
LAB_1006f2bb0:
        FUN_1006ee820(&local_c0,auStack_108);
        SVar13.bridgeObject = pvStack_a8;
        SVar13.str = local_b0;
        uVar9 = local_a0;
        uVar10 = uStack_98;
        SVar2.unknown = local_c0;
        SVar16.str = pcStack_b8;
        SVar12.unknown = puStack_88;
        uVar11 = local_90;
        bVar7 = local_80;
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_70 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_1006bf844(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(undefined **)(local_70 + uVar1 * 0x48 + 0x20) = SVar2.unknown;
      *(char **)(local_70 + uVar1 * 0x48 + 0x28) = SVar16.str;
      *(String *)(local_70 + uVar1 * 0x48 + 0x30) = SVar13;
      *(undefined8 *)(local_70 + uVar1 * 0x48 + 0x40) = uVar9;
      *(undefined8 *)(local_70 + uVar1 * 0x48 + 0x48) = uVar10;
      *(undefined8 *)(local_70 + uVar1 * 0x48 + 0x50) = uVar11;
      *(undefined **)(local_70 + uVar1 * 0x48 + 0x58) = SVar12.unknown;
      local_70[uVar1 * 0x48 + 0x60] = bVar7;
      puVar6 = local_70;
      if (lVar3 == 0) break;
      puVar8 = puVar8 + 9;
    } while( true );
  }
  FUN_1006f1c2c(puVar6);
  return;
}



/* Address: 0x1006f2db0 | thunk_FUN_1006f2db4 */

void thunk_FUN_1006f2db4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ec8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ec8,&DAT_100efa4e0);
  DAT_100fde270 = pTVar1;
  return;
}


