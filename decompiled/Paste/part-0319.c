/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003fe464 | FUN_1003fe464 */

void FUN_1003fe464(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc4608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1003efa8c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c46578;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c46578,uVar1);
  DAT_100fc4608 = pTVar2;
  return;
}



/* Address: 0x1003fe4a8 | FUN_1003fe4a8 */

void FUN_1003fe4a8(void)

{
  FUN_1003fdb1c();
  return;
}



/* Address: 0x1003fe4c8 | FUN_1003fe4c8 */

void FUN_1003fe4c8(void)

{
  FUN_1003fdecc();
  return;
}



/* Address: 0x1003fe4e8 | thunk_FUN_1001b81c8 */

void thunk_FUN_1001b81c8(void)

{
  FUN_1001b81c8();
  return;
}



/* Address: 0x1003fe4ec | FUN_1003fe4ec */

void FUN_1003fe4ec(void)

{
  FUN_1003fe00c();
  return;
}



/* Address: 0x1003fe50c | FUN_1003fe50c */

void FUN_1003fe50c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003fe530 | FUN_1003fe530 */

void FUN_1003fe530(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1003fe258(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x1003fe538 | FUN_1003fe538 */

void FUN_1003fe538(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1003fe568 | FUN_1003fe568 */

void FUN_1003fe568(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003fe5a0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003fe584 | FUN_1003fe584 */

void FUN_1003fe584(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003fe6a8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003fe5a0 | FUN_1003fe5a0 */

undefined * FUN_1003fe5a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003fe6a8);
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
    puVar3 = &DAT_100fc4678;
    FUN_1000037f0(&DAT_100fc4678,&DAT_100c46c78);
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



/* Address: 0x1003fe6a8 | FUN_1003fe6a8 */

undefined * FUN_1003fe6a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fe824);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc4680;
    FUN_1000037f0(&DAT_100fc4680,&DAT_100c46c80);
    lVar5 = 0;
    FUN_1003efa8c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fe81c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fe820);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1003efa8c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x1003fe824 | thunk_FUN_1003fe50c */

void thunk_FUN_1003fe50c(void)

{
  FUN_1003fe50c();
  return;
}



/* Address: 0x1003fe828 | FUN_1003fe828 */

long FUN_1003fe828(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _swift_allocObject();
  puVar1 = &DAT_100c46c90;
  _swift_getKeyPath(&DAT_100c46c90);
  puVar2 = &DAT_100fc4500;
  FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar3 = &DAT_100fc4518;
  FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_68,puVar1,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x10) = local_68;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x20) = local_58;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x30) = local_48;
  *(undefined8 *)(unaff_x20 + 0x40) = local_38;
  return unaff_x20;
}



/* Address: 0x1003fe8f4 | FUN_1003fe8f4 */

undefined8 FUN_1003fe8f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x1003fe9d0 | FUN_1003fe9d0 */

void FUN_1003fe9d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = &DAT_100c46c90;
  _swift_getKeyPath(&DAT_100c46c90);
  puVar2 = &DAT_100fc4500;
  FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar3 = &DAT_100fc4518;
  FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_68,puVar1,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x10) = local_68;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x20) = local_58;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x30) = local_48;
  *(undefined8 *)(unaff_x20 + 0x40) = local_38;
  return;
}



/* Address: 0x1003fea88 | thunk_FUN_1003fc658 */

void thunk_FUN_1003fc658(void)

{
  FUN_1003fc658();
  return;
}



/* Address: 0x1003fea8c | FUN_1003fea8c */

void FUN_1003fea8c(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_120 [3];
  long local_108;
  undefined *local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = 0;
  FUN_1003efa8c();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar3 = (long)local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = (undefined8 *)(lVar3 - extraout_x12);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_f8,0,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  local_a0 = uVar12;
  uStack_98 = uVar14;
  local_90 = uVar15;
  local_80 = uVar13;
  local_70 = uVar9;
  _swift_retain(uVar12);
  _swift_retain(uVar14);
  _swift_retain(uVar15);
  _swift_retain(uVar13);
  _swift_retain(uVar9);
  puVar4 = &DAT_100fc4650;
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  local_120[2] = puVar4;
  FUN_1002ca7e0(&local_e0);
  _swift_release(uVar9);
  _swift_release(uVar13);
  _swift_release(uVar15);
  _swift_release(uVar14);
  _swift_release(uVar12);
  uVar8 = *(ulong *)(local_e0 + 0x10);
  if (uVar8 != 0) {
    uVar10 = 0;
    do {
      if (*(ulong *)(local_e0 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fee80);
        (*pcVar1)();
      }
      uVar11 = (ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
      lVar3 = *(long *)(lVar6 + 0x48) * uVar10;
      FUN_10008c240(local_e0 + uVar11 + lVar3,puVar7);
      if ((undefined *)*puVar7 == (undefined *)*param_1 &&
          (undefined *)puVar7[1] == (undefined *)param_1[1]) {
        FUN_10008c284(puVar7);
LAB_1003fed50:
        _swift_bridgeObjectRelease(local_e0);
        puVar4 = &DAT_100c46cb8;
        _swift_getKeyPath();
        puVar5 = &DAT_100c46ce0;
        local_120[1] = puVar4;
        _swift_getKeyPath();
        uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
        lVar6 = *(long *)(unaff_x20 + 0x10);
        uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
        uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
        local_120[0] = puVar5;
        local_108 = lVar6;
        local_e0 = lVar6;
        uStack_d8 = uVar13;
        local_d0 = uVar14;
        local_c0 = uVar12;
        local_b0 = uVar9;
        _swift_retain();
        _swift_retain(lVar6);
        _swift_retain(uVar13);
        _swift_retain(uVar14);
        _swift_retain(uVar12);
        _swift_retain(uVar9);
        FUN_1002ca7e0(local_120 + 4,local_120[2]);
        _swift_release(uVar9);
        _swift_release(uVar12);
        _swift_release(uVar14);
        _swift_release(uVar13);
        _swift_release(local_108);
        puVar4 = local_100;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = local_100;
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1003ffce0();
          puVar5 = local_100;
        }
        if (*(ulong *)((long)puVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003feed4);
          (*pcVar1)();
        }
        FUN_1003ffcf4(param_1,(long)puVar5 + uVar11 + lVar3);
        local_100 = puVar5;
        goto LAB_1003fee58;
      }
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar7,(undefined *)puVar7[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_1);
      FUN_10008c284(puVar7);
      if (bVar2) goto LAB_1003fed50;
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  _swift_bridgeObjectRelease(local_e0);
  FUN_10008c240(param_1,local_108);
  _swift_getKeyPath(&DAT_100c46cb8);
  _swift_getKeyPath(&DAT_100c46ce0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  local_e0 = lVar3;
  uStack_d8 = uVar13;
  local_d0 = uVar14;
  local_c0 = uVar12;
  local_b0 = uVar9;
  _swift_retain();
  _swift_retain(lVar3);
  _swift_retain(uVar13);
  _swift_retain(uVar14);
  _swift_retain(uVar12);
  _swift_retain(uVar9);
  FUN_1002ca7e0(local_120 + 4,local_120[2]);
  _swift_release(uVar9);
  _swift_release(uVar12);
  _swift_release(uVar14);
  _swift_release(uVar13);
  _swift_release(lVar3);
  puVar4 = local_100;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar5 = local_100;
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    FUN_1003ffb64(0,*(long *)((long)local_100 + 0x10) + 1,1,local_100);
  }
  uVar8 = *(ulong *)((long)puVar5 + 0x10);
  uVar10 = (ulong)puVar5;
  if (*(ulong *)((long)puVar5 + 0x18) >> 1 <= uVar8) {
    uVar10 = (ulong)(1 < *(ulong *)((long)puVar5 + 0x18));
    FUN_1003ffb64(uVar10,uVar8 + 1,1,puVar5);
  }
  *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
  FUN_1000aa308(local_108,
                uVar10 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(lVar6 + 0x48) * uVar8);
  local_100 = (undefined *)uVar10;
LAB_1003fee58:
  FUN_1002cb5a0(local_120 + 4);
  return;
}



/* Address: 0x1003feed4 | FUN_1003feed4 */

void FUN_1003feed4(undefined8 *param_1)

{
  FUN_1003feee0(*param_1,param_1[1]);
  return;
}



/* Address: 0x1003feee0 | FUN_1003feee0 */

void FUN_1003feee0(undefined *param_1,undefined *param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  _StringComparisonResult expecting;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *local_130 [3];
  long local_118;
  long local_110;
  ulong local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar5 = 0;
  FUN_1003efa8c();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = (long)local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12;
  local_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined8 *)(lVar5 - extraout_x12_00);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_f8,0,0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
  local_a0 = uVar17;
  uStack_98 = uVar19;
  local_90 = uVar20;
  local_80 = uVar18;
  local_70 = uVar14;
  _swift_retain(uVar17);
  _swift_retain(uVar19);
  _swift_retain(uVar20);
  _swift_retain(uVar18);
  _swift_retain(uVar14);
  puVar6 = &DAT_100fc4650;
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  local_130[2] = puVar6;
  FUN_1002ca7e0(&local_e0);
  _swift_release(uVar14);
  _swift_release(uVar18);
  _swift_release(uVar20);
  _swift_release(uVar19);
  _swift_release(uVar17);
  uVar10 = 0;
  uVar15 = *(ulong *)(local_e0 + 0x10);
  do {
    if (uVar15 == uVar10) {
      _swift_bridgeObjectRelease(local_e0);
      return;
    }
    if (*(ulong *)(local_e0 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff38c);
      (*pcVar3)();
    }
    uVar8 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
            ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
    lVar5 = *(long *)(lVar13 + 0x48);
    FUN_10008c240(local_e0 + uVar8 + lVar5 * uVar10,puVar12);
    expecting.value = (__int8)param_1;
    if ((undefined *)*puVar12 == param_1 && (undefined *)puVar12[1] == param_2) {
      FUN_10008c284(puVar12);
      break;
    }
    uVar10 = uVar10 + 1;
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar12,(undefined *)puVar12[1],expecting);
    FUN_10008c284(puVar12);
  } while (!bVar4);
  _swift_bridgeObjectRelease(local_e0);
  puVar6 = &DAT_100c46cb8;
  _swift_getKeyPath();
  puVar7 = &DAT_100c46ce0;
  local_130[1] = puVar6;
  _swift_getKeyPath();
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
  local_130[0] = puVar7;
  local_e0 = lVar13;
  uStack_d8 = uVar18;
  local_d0 = uVar19;
  local_c0 = uVar17;
  local_b0 = uVar14;
  _swift_retain(lVar13);
  _swift_retain(uVar18);
  _swift_retain(uVar19);
  _swift_retain(uVar17);
  _swift_retain(uVar14);
  FUN_1002ca7e0(&local_100,local_130[2]);
  _swift_release(uVar14);
  _swift_release(uVar17);
  _swift_release(uVar19);
  _swift_release(uVar18);
  _swift_release(lVar13);
  uVar15 = *(ulong *)(local_100 + 0x10);
  uVar10 = local_100;
  if (uVar15 == 0) {
    uVar11 = 0;
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar9 = uVar8;
    do {
      _Var1.unknown = *(undefined **)(local_100 + uVar9);
      _Var2.unknown = (undefined *)((undefined8 *)(local_100 + uVar9))[1];
      if ((_Var1.unknown == param_1 && _Var2.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,expecting), bVar4)) {
        uVar11 = uVar16 + 1;
        uVar15 = *(ulong *)(local_100 + 0x10);
        if (uVar15 - 1 != uVar16) {
          do {
            uVar9 = lVar5 + uVar9;
            if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff390);
              (*pcVar3)();
            }
            puVar12 = (undefined8 *)(uVar10 + uVar9);
            if (((undefined *)*puVar12 != param_1 || (undefined *)puVar12[1] != param_2) &&
               (bVar4 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)*puVar12,(undefined *)puVar12[1],expecting), !bVar4)
               ) {
              if (uVar11 != uVar16) {
                if (uVar15 <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff39c);
                  (*pcVar3)();
                }
                FUN_10008c240(uVar10 + uVar8 + uVar16 * lVar5,local_118);
                FUN_10008c240(puVar12,local_110);
                uVar15 = uVar10;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar15 & 1) == 0) {
                  FUN_1003ffce0();
                }
                if (*(ulong *)(uVar10 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff3a0);
                  (*pcVar3)();
                }
                FUN_1003ffd38(local_110,uVar10 + uVar8 + uVar16 * lVar5);
                if (*(ulong *)(uVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff3a4);
                  (*pcVar3)();
                }
                FUN_1003ffd38(local_118,uVar10 + uVar9);
              }
              uVar16 = uVar16 + 1;
            }
            uVar11 = uVar11 + 1;
            uVar15 = *(ulong *)(uVar10 + 0x10);
          } while (uVar11 != uVar15);
        }
        goto LAB_1003ff1e8;
      }
      uVar16 = uVar16 + 1;
      uVar9 = uVar9 + lVar5;
    } while (uVar15 != uVar16);
    uVar11 = *(ulong *)(local_100 + 0x10);
    uVar16 = uVar15;
LAB_1003ff1e8:
    if ((long)uVar11 < (long)uVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff394);
      (*pcVar3)();
    }
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff1f8);
      (*pcVar3)();
    }
  }
  if (!SCARRY8(uVar11,uVar16 - uVar11)) {
    uVar15 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar15 == 0) ||
       ((long)(*(ulong *)(uVar10 + 0x18) >> 1) < (long)(uVar11 + (uVar16 - uVar11)))) {
      FUN_1003ffb64();
    }
    puVar7 = local_130[1];
    puVar6 = local_130[0];
    FUN_1003ffd7c(uVar16,uVar11,0);
    _swift_retain(unaff_x20);
    FUN_1002cb5a0(&local_100,unaff_x20,puVar7,puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ff398);
  (*pcVar3)();
}



/* Address: 0x1003ff3a4 | FUN_1003ff3a4 */

void FUN_1003ff3a4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_getKeyPath(&DAT_100c46cb8);
  _swift_getKeyPath(&DAT_100c46ce0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_a0 = uVar2;
  uStack_98 = uVar4;
  local_90 = uVar5;
  local_80 = uVar3;
  local_70 = uVar1;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(&local_a8);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(local_a8);
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002cb5a0(&local_a8);
  return;
}



/* Address: 0x1003ff4e0 | FUN_1003ff4e0 */

void FUN_1003ff4e0(undefined8 param_1,char param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  LocalizedStringResource LVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  URL UVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar11;
  code *pcVar12;
  String SVar13;
  String SVar14;
  code *local_c0;
  char *pcStack_b8;
  String local_b0;
  undefined8 uStack_a0;
  void *local_98;
  char *local_90 [3];
  
  local_b0.bridgeObject = (void *)param_1;
  uStack_a0._4_4_ = param_3;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_1003efa8c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar11 = (undefined8 *)(LVar5.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar7 = (undefined8 *)0x7463416c61697274;
  FUN_1003feee0(0x7463416c61697274,0xeb00000000657669);
  FUN_10020cfe4();
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  local_b0.str = (char *)puVar7;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d26d4(LVar5.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(LVar5);
  local_90[1] = SVar13.bridgeObject;
  local_90[2] = SVar13.str;
  FUN_1001d2554(LVar5.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(LVar5);
  local_98 = SVar13.bridgeObject;
  local_90[0] = SVar13.str;
  FUN_1001cccd4(LVar5.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(LVar5);
  pcVar8 = SVar13.str;
  FUN_1001aba98();
  puVar7 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar6 + 0x20));
  lVar9 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar9 + 0x18);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  local_c0 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x10);
  pcStack_b8 = pcVar8;
  (*local_c0)((long)puVar7 + (long)iVar3,pcVar8,UVar10.unknown);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(String *)(puVar7 + 2) = SVar13;
  pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar12)((long)puVar11 + (long)*(int *)(lVar6 + 0x24),1,1,lVar9);
  *puVar11 = 0x7078456c61697274;
  puVar11[1] = 0xec00000064657269;
  puVar11[2] = uVar1;
  puVar11[3] = uVar2;
  pcVar8 = local_90[1];
  puVar11[4] = local_90[2];
  puVar11[5] = pcVar8;
  puVar11[6] = local_90[0];
  puVar11[7] = local_98;
  FUN_1003feee0();
  FUN_10008c284(puVar11);
  if (param_2 == '\x01') {
    if ((uStack_a0._4_4_ & 1) == 0) {
      return;
    }
    uVar1 = *(undefined8 *)local_b0.str;
    uVar2 = *(undefined8 *)((long)local_b0.str + 8);
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001d26d4(LVar5.unknown);
    SVar13 = (extension_Foundation)::Swift::String::init(LVar5);
    local_90[2] = SVar13.bridgeObject;
    FUN_1001d2554(LVar5.unknown);
    SVar14 = (extension_Foundation)::Swift::String::init(LVar5);
    local_90[0] = SVar14.bridgeObject;
    local_90[1] = SVar14.str;
    FUN_1001cccd4(LVar5.unknown);
    SVar14 = (extension_Foundation)::Swift::String::init(LVar5);
    puVar7 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar6 + 0x20));
    (*local_c0)((long)puVar7 + (long)*(int *)(lVar9 + 0x18),pcStack_b8,UVar10.unknown);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(String *)(puVar7 + 2) = SVar14;
    (*pcVar12)((long)puVar11 + (long)*(int *)(lVar6 + 0x24),1,1,lVar9);
    *puVar11 = 0x7078456c61697274;
    puVar11[1] = 0xec00000064657269;
    puVar11[2] = uVar1;
    puVar11[3] = uVar2;
    pcVar8 = local_90[2];
    pcVar4 = local_90[1];
    puVar11[4] = SVar13.str;
    puVar11[5] = pcVar8;
    pcVar8 = local_90[0];
    puVar11[6] = pcVar4;
    puVar11[7] = pcVar8;
  }
  else {
    FUN_1003fcf30(puVar11,local_b0.bridgeObject);
  }
  FUN_1003fea8c(puVar11);
  FUN_10008c284(puVar11);
  return;
}



/* Address: 0x1003ff7e0 | FUN_1003ff7e0 */

void FUN_1003ff7e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar1 = 0;
  FUN_1003fe440();
  lVar2 = lVar1;
  _swift_allocObject();
  puVar3 = &DAT_100c46c90;
  _swift_getKeyPath(&DAT_100c46c90);
  puVar4 = &DAT_100fc4500;
  FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar5 = &DAT_100fc4518;
  FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_88,puVar3,puVar4,puVar5);
  *(undefined8 *)(lVar2 + 0x18) = uStack_80;
  *(undefined8 *)(lVar2 + 0x10) = local_88;
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x20) = local_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_60;
  *(undefined8 *)(lVar2 + 0x30) = local_68;
  *(undefined8 *)(lVar2 + 0x40) = local_58;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  local_90 = lVar2;
  FUN_1000037f0(&DAT_100fc4688,&DAT_100c46d00);
  _swift_allocObject();
  puVar3 = &DAT_100fc4690;
  FUN_100003a00(&DAT_100fc4690,FUN_1003fe440,&TargetProtocolConformanceDescriptor_100c46c3c);
  _swift_retain(param_2);
  FUN_1001ae768(&local_90,lVar1,puVar3);
  return;
}



/* Address: 0x1003ff934 | FUN_1003ff934 */

void FUN_1003ff934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1003ff994 | FUN_1003ff994 */

void FUN_1003ff994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003ff9fc | FUN_1003ff9fc */

void FUN_1003ff9fc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x10,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uStack_68 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1003ffae4 | thunk_FUN_1003ff9fc */

void thunk_FUN_1003ff9fc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x10,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uStack_68 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uStack_90 = uVar3;
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  uStack_70 = uVar4;
  uStack_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1003ffae8 | FUN_1003ffae8 */

void FUN_1003ffae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  puVar1 = &DAT_100c46cb8;
  _swift_getKeyPath(&DAT_100c46cb8);
  puVar2 = &DAT_100c46ce0;
  _swift_getKeyPath(&DAT_100c46ce0);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_38,uVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1003ffb60 | thunk_FUN_1003ffae8 */

void thunk_FUN_1003ffae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  puVar1 = &DAT_100c46cb8;
  _swift_getKeyPath(&DAT_100c46cb8);
  puVar2 = &DAT_100c46ce0;
  _swift_getKeyPath(&DAT_100c46ce0);
  uStack_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar4);
  FUN_1002cb5a0(&uStack_38,uVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1003ffb64 | FUN_1003ffb64 */

undefined * FUN_1003ffb64(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffce0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc4680;
    FUN_1000037f0(&DAT_100fc4680,&DAT_100c46c80);
    lVar5 = 0;
    FUN_1003efa8c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffcd8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffcdc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1003efa8c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1003ffce0 | FUN_1003ffce0 */

void FUN_1003ffce0(long param_1)

{
  FUN_1003ffb64(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1003ffcf4 | FUN_1003ffcf4 */

undefined8 FUN_1003ffcf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efa8c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1003ffd38 | FUN_1003ffd38 */

undefined8 FUN_1003ffd38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efa8c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1003ffd7c | FUN_1003ffd7c */

void FUN_1003ffd7c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar4 = 0;
  FUN_1003efa8c();
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffe78);
    (*pcVar3)();
  }
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = lVar8 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  lVar7 = lVar1 + lVar9 * param_1;
  _swift_arrayDestroy(lVar7,lVar2,lVar4);
  lVar4 = param_3 - lVar2;
  if (SBORROW8(param_3,lVar2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffe7c);
    (*pcVar3)();
  }
  if (lVar4 != 0) {
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffe80);
      (*pcVar3)();
    }
    uVar5 = lVar1 + lVar9 * param_2;
    uVar6 = lVar7 + lVar9 * param_3;
    if (uVar6 < uVar5 || uVar5 + (*(long *)(lVar8 + 0x10) - param_2) * lVar9 <= uVar6) {
      _swift_arrayInitWithTakeFrontToBack();
    }
    else if (uVar6 != uVar5) {
      _swift_arrayInitWithTakeBackToFront();
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffe84);
      (*pcVar3)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (0 < lVar9 * param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ffe88);
    (*pcVar3)();
  }
  return;
}



/* Address: 0x1003ffe88 | FUN_1003ffe88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ffe88(void)

{
  return ZEXT816(0x100fc46d8);
}



/* Address: 0x1003ffea8 | thunk_FUN_1003feed4 */

void thunk_FUN_1003feed4(undefined8 *param_1)

{
  FUN_1003feee0(*param_1,param_1[1]);
  return;
}



/* Address: 0x1003ffeac | FUN_1003ffeac */

long * FUN_1003ffeac(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  plVar1 = *(long **)(unaff_x20 + 0x50);
  plVar7 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_1000da768(&local_90);
    _swift_release(local_90);
    lVar2 = 0;
    FUN_1003fe440();
    lVar3 = lVar2;
    _swift_allocObject();
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = &DAT_100c46d30;
    _swift_getKeyPath(&DAT_100c46d30);
    puVar5 = &DAT_100fc4500;
    FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    puVar6 = &DAT_100fc4518;
    FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    FUN_1002cb88c(&local_88,puVar4,puVar5,puVar6);
    *(undefined8 *)(lVar3 + 0x18) = uStack_80;
    *(undefined8 *)(lVar3 + 0x10) = local_88;
    *(undefined8 *)(lVar3 + 0x28) = uStack_70;
    *(undefined8 *)(lVar3 + 0x20) = local_78;
    *(undefined8 *)(lVar3 + 0x38) = uStack_60;
    *(undefined8 *)(lVar3 + 0x30) = local_68;
    *(undefined8 *)(lVar3 + 0x40) = local_58;
    *(undefined8 *)(lVar3 + 0x50) = uVar10;
    *(undefined8 *)(lVar3 + 0x48) = uVar9;
    local_98 = lVar3;
    FUN_1000037f0(&DAT_100fc4688,&DAT_100c46d00);
    _swift_allocObject();
    puVar4 = &DAT_100fc4690;
    FUN_100003a00(&DAT_100fc4690,FUN_1003fe440,&TargetProtocolConformanceDescriptor_100c46c3c);
    _swift_retain(uVar8);
    plVar7 = &local_98;
    FUN_1001ae768(plVar7,lVar2,puVar4);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    *(long **)(unaff_x20 + 0x50) = plVar7;
    _swift_retain();
    _swift_release(uVar8);
    plVar1 = (long *)0x0;
  }
  _swift_retain(plVar1);
  return plVar7;
}



/* Address: 0x100400058 | thunk_FUN_1003fc658 */

void thunk_FUN_1003fc658(void)

{
  FUN_1003fc658();
  return;
}



/* Address: 0x10040005c | FUN_10040005c */

void FUN_10040005c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10040006c | FUN_10040006c */

undefined1  [16] FUN_10040006c(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1003ffeac();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1004000a0;
  return auVar2;
}



/* Address: 0x1004000a0 | FUN_1004000a0 */

void FUN_1004000a0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1[1] + 0x50);
  *(undefined8 *)(param_1[1] + 0x50) = uVar1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar1);
    _swift_release(uVar2);
    uVar2 = uVar1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x1004000e0 | FUN_1004000e0 */

long FUN_1004000e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100c46d58;
  _swift_getKeyPath();
  puVar2 = &DAT_100fc4528;
  FUN_1000037f0(&DAT_100fc4528,&DAT_100c46d80);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  FUN_100076508(param_3,unaff_x20 + 0x28);
  return unaff_x20;
}



/* Address: 0x100400184 | FUN_100400184 */

void FUN_100400184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100c46d58;
  _swift_getKeyPath();
  puVar2 = &DAT_100fc4528;
  FUN_1000037f0(&DAT_100fc4528,&DAT_100c46d80);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  FUN_100076508(param_3,unaff_x20 + 0x28);
  return;
}



/* Address: 0x100400218 | thunk_FUN_1003fc180 */

void thunk_FUN_1003fc180(void)

{
  FUN_1003fc180();
  return;
}



/* Address: 0x10040021c | FUN_10040021c */

void FUN_10040021c(undefined8 *param_1)

{
  undefined8 local_28;
  
  FUN_1000da768(&local_28);
  FUN_1003feee0(*param_1,param_1[1]);
  _swift_release(local_28);
  return;
}



/* Address: 0x100400260 | FUN_100400260 */

void FUN_100400260(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  FUN_100004640(unaff_x20 + 0x28,uVar1);
  lVar3 = 0;
  FUN_1003efaa0();
  (**(code **)(lVar2 + 8))(param_2 + *(int *)(lVar3 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x1004002b8 | FUN_1004002b8 */

void FUN_1004002b8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1004002ec | FUN_1004002ec */

void FUN_1004002ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100400328 | FUN_100400328 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100400328(void)

{
  return ZEXT816(0x100fc4778);
}



/* Address: 0x100400348 | FUN_100400348 */

undefined8 FUN_100400348(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10040037c();
  return unaff_x20;
}



/* Address: 0x10040037c | FUN_10040037c */

void FUN_10040037c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  __int64 _Var3;
  long unaff_x20;
  
  puVar1 = &DAT_100c46dd0;
  _swift_getKeyPath();
  puVar2 = &DAT_100fc4530;
  FUN_1000037f0(&DAT_100fc4530,&DAT_100c46e00);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  puVar1 = &DAT_100c46e08;
  _swift_getKeyPath();
  puVar2 = &DAT_100fc4538;
  FUN_1000037f0(&DAT_100fc4538,&DAT_100c46b28);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = &DAT_100c46e40;
  _swift_getKeyPath();
  puVar2 = &DAT_100fc4528;
  FUN_1000037f0(&DAT_100fc4528,&DAT_100c46d80);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar1 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003fc31c();
  }
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return;
}



/* Address: 0x1004004a4 | thunk_FUN_1003fc274 */

void thunk_FUN_1003fc274(void)

{
  FUN_1003fc274();
  return;
}



/* Address: 0x1004004a8 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x1004004ac | thunk_FUN_1003fc180 */

void thunk_FUN_1003fc180(void)

{
  FUN_1003fc180();
  return;
}



/* Address: 0x1004004b0 | FUN_1004004b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010040072c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004004b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  OS_dispatch_queue **ppOVar4;
  undefined *puVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  SchedulerOptions SVar8;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  OS_dispatch_queue **local_90;
  OS_dispatch_queue *local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  puVar1 = &DAT_100fc47f0;
  FUN_1000037f0(&DAT_100fc47f0,&DAT_100c46e70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_b0 - extraout_x8;
  puVar1 = &DAT_100fc47f8;
  FUN_1000037f0(&DAT_100fc47f8,&DAT_100c46e78);
  local_b0 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fc4800;
  FUN_1000037f0(&DAT_100fc4800,&DAT_100c46e80);
  local_a8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (lVar10 - extraout_x8_00) - extraout_x8_01;
  puVar2 = &DAT_100fc4808;
  FUN_1000037f0(&DAT_100fc4808,&DAT_100c46e88);
  local_98 = *(long *)(puVar2 + -8);
  local_a0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100400904();
  FUN_1000da768(local_88);
  FUN_100004640(local_88,local_70);
  uVar3 = local_70;
  (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
  FUN_1000037f0(&DAT_100fc4810,&DAT_100c46e90);
  FUN_100016eac(&DAT_100fc4818,&DAT_100fc4810,&DAT_100c46e90,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(uVar3);
  ppOVar4 = local_88;
  FUN_100004594();
  FUN_1000da768(local_88);
  FUN_1000e698c();
  _swift_release(local_88[0]);
  puVar2 = &DAT_100fc4820;
  local_90 = ppOVar4;
  FUN_1000037f0(&DAT_100fc4820,&DAT_100c46e98);
  puVar5 = &DAT_100fc4828;
  FUN_100016eac(&DAT_100fc4828,&DAT_100fc47f8,&DAT_100c46e78,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  puVar6 = &DAT_100fc4830;
  FUN_100016eac(&DAT_100fc4830,&DAT_100fc4820,&DAT_100c46e98,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  Combine::Publishers::Merge::init(lVar9,puVar6,&local_90,local_b0,puVar2,puVar5,puVar6);
  pOVar7 = (OS_dispatch_queue *)0x0;
  FUN_100400d28();
  local_88[0] = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
  SVar8 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar8.unknown + -8) + 0x38))(lVar10,1,1,SVar8.unknown);
  puVar2 = &DAT_100fc4840;
  FUN_100016eac(&DAT_100fc4840,&DAT_100fc4800,&DAT_100c46e80,
                PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0
               );
  puVar5 = &DAT_100fc4848;
  FUN_100003a00(&DAT_100fc4848,FUN_100400d28,
                PTR_Dispatch____C__OS_dispatch_queue_>Combine__Scheduler_100eae780);
  (extension_Combine)::Combine::Publisher::_receive
            (lVar9 - extraout_x8_02,puVar5,lVar10,puVar1,pOVar7,puVar2,puVar5);
  FUN_100005808(lVar10,&DAT_100fc47f0,&DAT_100c46e70);
  (**(code **)(local_a8 + 8))(lVar9,puVar1);
  puVar1 = &DAT_100ed1560;
  _swift_allocObject(&DAT_100ed1560,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_100ed1588;
  _swift_allocObject(&DAT_100ed1588,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100400d90;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  FUN_100016eac(&DAT_100fc4850,&DAT_100fc4808,&DAT_100c46e88,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  puVar1 = local_a0;
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  (**(code **)(local_98 + 8))(lVar9 - extraout_x8_02,puVar1);
  _swift_beginAccess(unaff_x20 + 0x28,local_88,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x28));
  _swift_endAccess(local_88);
  _swift_release(this);
  return;
}



/* Address: 0x100400904 | FUN_100400904 */

void FUN_100400904(void)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  _StringGuts _Var9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long local_90 [5];
  long local_68 [3];
  ulong local_50;
  undefined8 uStack_48;
  
  puVar4 = &DAT_100fc4918;
  FUN_1000037f0(&DAT_100fc4918,&DAT_100c46ee0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)local_90 + -extraout_x8);
  FUN_1000da768(local_68);
  plVar7 = local_68;
  FUN_100004640(plVar7,local_50);
  FUN_1001a15c4(local_50,uStack_48,plVar7);
  uVar8 = (uint)uStack_48;
  if ((local_50 & 1) == 0) {
LAB_100400aa4:
    plVar7 = local_68;
    FUN_100004594();
LAB_100400aac:
    FUN_1000da768(local_68);
    FUN_1000e7334();
    _swift_release(local_68[0]);
    if ((uVar8 & 0xff) == 1) {
      if (plVar7 != (long *)0x0) {
        FUN_1000da768(local_90);
        plVar7 = (long *)0x0;
        uVar10 = 1;
        uVar11 = 1;
        lVar5 = local_90[0];
        goto LAB_100400b34;
      }
      FUN_1000da768(local_90);
      goto LAB_100400b28;
    }
    FUN_1000da768(local_90);
    uVar10 = 0;
    lVar5 = local_90[0];
  }
  else {
    FUN_1000da768(local_90);
    FUN_100004640(local_90,local_90[3]);
    (**(code **)(local_90[4] + 8))(puVar12,local_90[3],local_90[4]);
    lVar5 = 0;
    FUN_10019fee0();
    uVar8 = 1;
    puVar6 = puVar12;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar12,1,lVar5);
    if ((int)puVar6 == 1) {
      FUN_100004594(local_90);
      FUN_100005808(puVar12,&DAT_100fc4918,&DAT_100c46ee0);
      FUN_1000e6a9c();
LAB_100400a80:
      FUN_100004594(local_68);
    }
    else {
      _Var1.unknown = (undefined *)*puVar12;
      _Var2.unknown = *(undefined **)((long)local_90 + -extraout_x8 + 8);
      _swift_bridgeObjectRetain(_Var2.unknown);
      FUN_10001835c(puVar12);
      plVar7 = local_90;
      FUN_100004594();
      FUN_1000e6a9c();
      if (_Var2.unknown == (undefined *)0x0) goto LAB_100400a80;
      if (_Var1.unknown == (undefined *)*plVar7 && _Var2.unknown == (undefined *)plVar7[1]) {
        _swift_bridgeObjectRelease(_Var2.unknown);
        goto LAB_100400aa4;
      }
      _Var9.unknown = _Var2.unknown;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)(undefined *)*plVar7);
      uVar8 = (uint)_Var9.unknown;
      _swift_bridgeObjectRelease(_Var2.unknown);
      plVar7 = local_68;
      FUN_100004594();
      if (bVar3) goto LAB_100400aac;
    }
    FUN_1000da768(local_68);
    local_90[0] = local_68[0];
LAB_100400b28:
    plVar7 = (long *)0x0;
    uVar10 = 1;
    lVar5 = local_90[0];
  }
  uVar11 = 0;
LAB_100400b34:
  FUN_1003ff4e0(plVar7,uVar10,uVar11);
  _swift_release(lVar5);
  return;
}



/* Address: 0x100400b58 | FUN_100400b58 */

void FUN_100400b58(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc4910;
  FUN_100003a00(&DAT_100fc4910,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteInAppNotifications/TrialNotificationsController.swift",0x3a,1,0x17,
               UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100400bf0 | FUN_100400bf0 */

void FUN_100400bf0(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  MainActor *pMVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc4910;
  FUN_100003a00(&DAT_100fc4910,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteInAppNotifications/TrialNotificationsController.swift",0x3a,1,0x1b,
               UVar4.unknown,puVar3);
  }
  pMVar6 = (MainActor *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 != (MainActor *)0x0) {
    FUN_100400904();
    _swift_release(pMVar2);
    pMVar2 = pMVar6;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100400cb8 | FUN_100400cb8 */

void FUN_100400cb8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100400cec | FUN_100400cec */

void FUN_100400cec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100400d28 | FUN_100400d28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100400d28(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fc4838 = puVar1;
  return;
}



/* Address: 0x100400d6c | FUN_100400d6c */

void FUN_100400d6c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100400d90 | FUN_100400d90 */

void FUN_100400d90(void)

{
  FUN_100400bf0();
  return;
}



/* Address: 0x100400d98 | FUN_100400d98 */

void FUN_100400d98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


