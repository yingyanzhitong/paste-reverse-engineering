/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003fbf30 | FUN_1003fbf30 */

void FUN_1003fbf30(void)

{
  FUN_1003fbf48(FUN_1003fbc60);
  return;
}



/* Address: 0x1003fbf3c | FUN_1003fbf3c */

void FUN_1003fbf3c(void)

{
  FUN_1003fbf48(FUN_1003fbcdc);
  return;
}



/* Address: 0x1003fbf48 | FUN_1003fbf48 */

void FUN_1003fbf48(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1003efa8c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001003fbf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),
             unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1003fbf88 | FUN_1003fbf88 */

undefined8 FUN_1003fbf88(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efaa0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1003fbfc4 | thunk_FUN_1003fa088 */

void thunk_FUN_1003fa088(void)

{
  thunk_FUN_1003fa088();
  return;
}



/* Address: 0x1003fbfc8 | FUN_1003fbfc8 */

undefined8 FUN_1003fbfc8(void)

{
  undefined *puVar1;
  undefined *local_40;
  undefined8 local_38 [3];
  
  local_40 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = &DAT_100fc4508;
  FUN_1000037f0(&DAT_100fc4508,&DAT_100c46a98);
  FUN_1002ccc34(local_38,0xd000000000000012,0x8000000100da0e70,&local_40,puVar1);
  return local_38[0];
}



/* Address: 0x1003fc038 | FUN_1003fc038 */

void FUN_1003fc038(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = &DAT_100c46a70;
  _swift_getKeyPath(&DAT_100c46a70);
  puVar2 = &DAT_100fc4500;
  FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar3 = &DAT_100fc4518;
  FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_68,puVar1,puVar2,puVar3);
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[6] = local_38;
  return;
}



/* Address: 0x1003fc0f0 | thunk_FUN_1003fc658 */

void thunk_FUN_1003fc658(void)

{
  FUN_1003fc658();
  return;
}



/* Address: 0x1003fc0f4 | FUN_1003fc0f4 */

void FUN_1003fc0f4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc4508;
    FUN_100005c24(&DAT_100fc4508,&DAT_100c46a98);
    FUN_100003a00(param_2,FUN_1003efa8c,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1003fc180 | FUN_1003fc180 */

void FUN_1003fc180(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = 0;
  FUN_1003ffe88();
  _swift_allocObject();
  puVar2 = &DAT_100c46a70;
  _swift_getKeyPath(&DAT_100c46a70);
  puVar3 = &DAT_100fc4500;
  FUN_1003fc0f4(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar4 = &DAT_100fc4518;
  FUN_1003fc0f4(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_68,puVar2,puVar3,puVar4);
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x10) = local_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = local_58;
  *(undefined8 *)(lVar1 + 0x38) = uStack_40;
  *(undefined8 *)(lVar1 + 0x30) = local_48;
  *(undefined8 *)(lVar1 + 0x40) = local_38;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1003fc254 | FUN_1003fc254 */

void FUN_1003fc254(void)

{
  FUN_1000dbd5c(&DAT_100c46ac8,&DAT_100fc4530,&DAT_100c46e00,0x30);
  return;
}



/* Address: 0x1003fc274 | FUN_1003fc274 */

void FUN_1003fc274(undefined8 *param_1,undefined8 param_2)

{
  FUN_1000dc6a8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1003fc298 | FUN_1003fc298 */

void FUN_1003fc298(void)

{
  FUN_1000dbd5c(&DAT_100c46af8,&DAT_100fc4538,&DAT_100c46b28,0x50);
  return;
}



/* Address: 0x1003fc2b8 | FUN_1003fc2b8 */

void FUN_1003fc2b8(void)

{
  FUN_1000dbd5c(&DAT_100c46aa0,&DAT_100fc4528,&DAT_100c46d80,0x30);
  return;
}



/* Address: 0x1003fc2d8 | FUN_1003fc2d8 */

undefined * FUN_1003fc2d8(void)

{
  __int64 _Var1;
  undefined *puVar2;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) {
    _Var1 = Swift::_CocoaArrayWrapper::get_endIndex
                      ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
    if (_Var1 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1003fc31c(PTR___swiftEmptyArrayStorage_100eae0d8);
      return puVar2;
    }
  }
  return PTR___swiftEmptySetSingleton_100eae0e8;
}



/* Address: 0x1003fc31c | FUN_1003fc31c */

undefined * FUN_1003fc31c(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  ulong uVar5;
  AnyCancellable *pAVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  __int64 seed;
  undefined8 local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar14 = *(undefined **)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fc4540;
    FUN_1000037f0(&DAT_100fc4540,&DAT_100c46b30);
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar2 = puVar14;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar13 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      puVar14 = PTR_typeMetadataAccessor_100ea9780;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fc584);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1.unknown + uVar15 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar5 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,param_1);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fc57c);
        (*pcVar3)();
      }
      uVar15 = uVar15 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar5;
      pAVar6 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fc4548,puVar14,
                    PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100ea9790);
      uVar7 = Swift::Hashable::_rawHashValue(seed);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar7 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar8 = &DAT_100fc4550;
        FUN_100003a00(&DAT_100fc4550,puVar14,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100ea9798);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar7 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar6,puVar8);
          if (bVar4) {
            _swift_release(uVar5);
            goto LAB_1003fc404;
          }
          uVar7 = uVar7 + 1 & ~uVar12;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar7 * 8) = uVar5;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fc580);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_1003fc404:
    } while (uVar15 != uVar13);
  }
  return puVar2;
}



/* Address: 0x1003fc584 | thunk_FUN_1003fc2b8 */

void thunk_FUN_1003fc2b8(void)

{
  FUN_1000dbd5c(&DAT_100c46aa0,&DAT_100fc4528,&DAT_100c46d80,0x30);
  return;
}



/* Address: 0x1003fc588 | FUN_1003fc588 */

long FUN_1003fc588(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = 0;
  FUN_1003ffe88();
  _swift_allocObject();
  puVar2 = &DAT_100c46b38;
  _swift_getKeyPath(&DAT_100c46b38);
  puVar3 = &DAT_100fc4500;
  FUN_1003fc730(&DAT_100fc4500,&DAT_100fc4510,&TargetProtocolConformanceDescriptor_100c46528,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  puVar4 = &DAT_100fc4518;
  FUN_1003fc730(&DAT_100fc4518,&DAT_100fc4520,&TargetProtocolConformanceDescriptor_100c46550,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  FUN_1002cb88c(&local_68,puVar2,puVar3,puVar4);
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x10) = local_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = local_58;
  *(undefined8 *)(lVar1 + 0x38) = uStack_40;
  *(undefined8 *)(lVar1 + 0x30) = local_48;
  *(undefined8 *)(lVar1 + 0x40) = local_38;
  return lVar1;
}



/* Address: 0x1003fc658 | FUN_1003fc658 */

void FUN_1003fc658(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  
  local_28 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = &DAT_100fc4508;
  FUN_1000037f0(&DAT_100fc4508,&DAT_100c46a98);
  FUN_1002ccc34(param_1,0xd000000000000012,0x8000000100da0e70,&local_28,puVar1);
  return;
}



/* Address: 0x1003fc6c4 | FUN_1003fc6c4 */

void FUN_1003fc6c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  
  local_28 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = &DAT_100fc4508;
  FUN_1000037f0(&DAT_100fc4508,&DAT_100c46a98);
  FUN_1002ccc34(param_1,0xd000000000000012,0x8000000100da0e70,&local_28,puVar1);
  return;
}



/* Address: 0x1003fc730 | FUN_1003fc730 */

void FUN_1003fc730(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc4508;
    FUN_100005c24(&DAT_100fc4508,&DAT_100c46a98);
    FUN_1003fc7b4(param_2,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1003fc7b4 | FUN_1003fc7b4 */

void FUN_1003fc7b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1003efa8c(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1003fc7f4 | FUN_1003fc7f4 */

undefined1  [16] FUN_1003fc7f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _swift_retain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1003fc824 | FUN_1003fc824 */

undefined1  [16] FUN_1003fc824(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100ed1428;
  _swift_allocObject(&DAT_100ed1428,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  _swift_bridgeObjectRetain(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1003fc988;
  return auVar2;
}



/* Address: 0x1003fc87c | FUN_1003fc87c */

undefined1 FUN_1003fc87c(undefined8 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  FUN_1003efa8c();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  lVar3 = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  while( true ) {
    if (lVar6 == lVar3) {
      return 1;
    }
    FUN_10008c240(param_2 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar5 + 0x48) * lVar3,puVar4);
    if ((undefined *)*param_1 == (undefined *)*puVar4 &&
        (undefined *)param_1[1] == *(undefined **)(&stack0xffffffffffffffb8 + lVar1)) break;
    lVar3 = lVar3 + 1;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*puVar4);
    FUN_10008c284(puVar4);
    if (bVar2) {
      return 0;
    }
  }
  FUN_10008c284(puVar4);
  return 0;
}



/* Address: 0x1003fc964 | FUN_1003fc964 */

void FUN_1003fc964(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003fc988 | FUN_1003fc988 */

void FUN_1003fc988(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003fc87c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003fc990 | FUN_1003fc990 */

undefined1  [16] FUN_1003fc990(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100ed1450;
  _swift_allocObject(&DAT_100ed1450,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  _swift_bridgeObjectRetain(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1003fcad0;
  return auVar2;
}



/* Address: 0x1003fc9e8 | FUN_1003fc9e8 */

undefined1 FUN_1003fc9e8(undefined8 *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  FUN_1003efa8c();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  lVar3 = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  while( true ) {
    if (lVar6 == lVar3) {
      return 0;
    }
    FUN_10008c240(param_2 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar5 + 0x48) * lVar3,puVar4);
    if ((undefined *)*param_1 == (undefined *)*puVar4 &&
        (undefined *)param_1[1] == *(undefined **)(&stack0xffffffffffffffb8 + lVar1)) break;
    lVar3 = lVar3 + 1;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*puVar4);
    FUN_10008c284(puVar4);
    if (bVar2) {
      return 1;
    }
  }
  FUN_10008c284(puVar4);
  return 1;
}



/* Address: 0x1003fcad0 | FUN_1003fcad0 */

void FUN_1003fcad0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003fc9e8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003fcad8 | FUN_1003fcad8 */

void FUN_1003fcad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003fcae4 | FUN_1003fcae4 */

undefined1  [16] FUN_1003fcae4(void)

{
  return ZEXT816(0x100ed14d0);
}



/* Address: 0x1003fcaf4 | thunk_FUN_1003fc964 */

void thunk_FUN_1003fc964(void)

{
  FUN_1003fc964();
  return;
}



/* Address: 0x1003fcaf8 | FUN_1003fcaf8 */

char * FUN_1003fcaf8(void)

{
  return "startFreeTrial";
}



/* Address: 0x1003fcb04 | FUN_1003fcb04 */

undefined1  [16] FUN_1003fcb04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee006c6169725465;
  auVar1._0_8_ = 0x6572467472617473;
  return auVar1;
}



/* Address: 0x1003fcb28 | FUN_1003fcb28 */

undefined * FUN_1003fcb28(void)

{
  return &DAT_100ed14e8;
}



/* Address: 0x1003fcb34 | FUN_1003fcb34 */

undefined1  [16] FUN_1003fcb34(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9f490;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x1003fcb50 | FUN_1003fcb50 */

char * FUN_1003fcb50(void)

{
  return "trialRetention";
}



/* Address: 0x1003fcb5c | FUN_1003fcb5c */

undefined1  [16] FUN_1003fcb5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee006e6f69746e65;
  auVar1._0_8_ = 0x7465526c61697274;
  return auVar1;
}



/* Address: 0x1003fcb80 | FUN_1003fcb80 */

char * FUN_1003fcb80(void)

{
  return "paidRetention";
}



/* Address: 0x1003fcb8c | FUN_1003fcb8c */

undefined1  [16] FUN_1003fcb8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006e6f69746e;
  auVar1._0_8_ = 0x6574655264696170;
  return auVar1;
}



/* Address: 0x1003fcbb0 | FUN_1003fcbb0 */

void FUN_1003fcbb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020cfc8();
  local_68 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d2254(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar9.bridgeObject;
  local_70 = SVar9.str;
  FUN_1001d20d4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.str;
  FUN_1001d1f54(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001ac06c();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0x6572467472617473;
  param_1[1] = 0xee006c6169725465;
  param_1[2] = local_68;
  param_1[3] = uVar2;
  param_1[4] = local_70;
  param_1[5] = local_78;
  param_1[6] = local_80;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1003fcd2c | FUN_1003fcd2c */

void FUN_1003fcd2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  char *local_90;
  void *local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_70 = 0x8000000100d9f490;
  FUN_10020d0d0();
  local_78 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  local_68 = param_2;
  _swift_bridgeObjectRetain(uVar2);
  SVar9 = Swift::CustomStringConvertible::get_description();
  thunk_FUN_1001e6c78(localized.unknown,SVar9.str);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_88 = SVar9.bridgeObject;
  pcStack_80 = SVar9.str;
  FUN_1001cad54(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_90 = SVar9.str;
  FUN_1001cce54(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001ac1bc();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0xd000000000000011;
  param_1[1] = local_70;
  param_1[2] = local_78;
  param_1[3] = uVar2;
  param_1[4] = pcStack_80;
  param_1[5] = local_88;
  param_1[6] = local_90;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1003fced8 | FUN_1003fced8 */

char * FUN_1003fced8(void)

{
  return "trialActive";
}



/* Address: 0x1003fcee4 | FUN_1003fcee4 */

undefined1  [16] FUN_1003fcee4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000657669;
  auVar1._0_8_ = 0x7463416c61697274;
  return auVar1;
}



/* Address: 0x1003fcf04 | FUN_1003fcf04 */

char * FUN_1003fcf04(void)

{
  return "trialExpired";
}



/* Address: 0x1003fcf10 | FUN_1003fcf10 */

undefined1  [16] FUN_1003fcf10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000064657269;
  auVar1._0_8_ = 0x7078456c61697274;
  return auVar1;
}



/* Address: 0x1003fcf30 | FUN_1003fcf30 */

void FUN_1003fcf30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  LocalizedStringResource LVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  URL UVar9;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar10;
  String SVar11;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d0d0();
  if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fd0cc);
    (*pcVar4)();
  }
  if (param_2 < 0x80000000) {
    local_68 = *(undefined8 *)LVar5.unknown;
    uVar2 = *(undefined8 *)((long)LVar5.unknown + 8);
    _swift_bridgeObjectRetain(uVar2);
    thunk_FUN_1001e6ed8(localized.unknown,param_2);
    SVar10 = (extension_Foundation)::Swift::String::init(localized);
    local_78 = SVar10.bridgeObject;
    local_70 = SVar10.str;
    FUN_1001d23d4(localized.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(localized);
    local_80 = SVar10.str;
    FUN_1001cccd4(localized.unknown);
    SVar11 = (extension_Foundation)::Swift::String::init(localized);
    pcVar6 = SVar11.str;
    FUN_1001aba98();
    lVar7 = 0;
    FUN_1003efa8c();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
    lVar8 = 0;
    FUN_1003efaa0();
    iVar3 = *(int *)(lVar8 + 0x18);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar9.unknown + -8) + 0x10))
              ((long)puVar1 + (long)iVar3,pcVar6,UVar9.unknown);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(String *)(puVar1 + 2) = SVar11;
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))
              ((long)param_1 + (long)*(int *)(lVar7 + 0x24),1,1,lVar8);
    *param_1 = 0x7463416c61697274;
    param_1[1] = 0xeb00000000657669;
    param_1[2] = local_68;
    param_1[3] = uVar2;
    param_1[4] = local_70;
    param_1[5] = local_78;
    param_1[6] = local_80;
    param_1[7] = SVar10.bridgeObject;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003fd0d0);
  (*pcVar4)();
}



/* Address: 0x1003fd0d0 | FUN_1003fd0d0 */

void FUN_1003fd0d0(undefined8 param_1)

{
  FUN_1003fd138(param_1,thunk_FUN_1001e6c78,FUN_1001cad54,0x7465526c61697274,0xee006e6f69746e65);
  return;
}



/* Address: 0x1003fd104 | FUN_1003fd104 */

void FUN_1003fd104(undefined8 param_1)

{
  FUN_1003fd138(param_1,thunk_FUN_1001e6c88,FUN_1001cb054,0x6574655264696170,0xed00006e6f69746e);
  return;
}



/* Address: 0x1003fd138 | FUN_1003fd138 */

void FUN_1003fd138(undefined8 *param_1,undefined8 param_2,code *param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  undefined1 auStack_a0 [8];
  char *local_98;
  void *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = param_5;
  uStack_70 = param_6;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10020d0d0();
  local_80 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  local_68 = param_2;
  _swift_bridgeObjectRetain(uVar2);
  SVar9 = Swift::CustomStringConvertible::get_description();
  (*param_3)(localized.unknown,SVar9.str);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_90 = SVar9.bridgeObject;
  local_88 = SVar9.str;
  (*param_4)(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_98 = SVar9.str;
  FUN_1001cce54(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001ac1bc();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[2] = local_80;
  param_1[3] = uVar2;
  param_1[4] = local_88;
  param_1[5] = local_90;
  param_1[6] = local_98;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1003fd2d0 | FUN_1003fd2d0 */

void FUN_1003fd2d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020cfe4();
  local_68 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d26d4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar9.bridgeObject;
  local_70 = SVar9.str;
  FUN_1001d2554(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.str;
  FUN_1001cccd4(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001aba98();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0x7078456c61697274;
  param_1[1] = 0xec00000064657269;
  param_1[2] = local_68;
  param_1[3] = uVar2;
  param_1[4] = local_70;
  param_1[5] = local_78;
  param_1[6] = local_80;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1003fd448 | FUN_1003fd448 */

void FUN_1003fd448(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  undefined1 auStack_90 [8];
  char *local_88;
  void *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_68 = 0x8000000100da5ab0;
  FUN_10020c9f8();
  local_70 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d08d4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.bridgeObject;
  pcStack_78 = SVar9.str;
  FUN_1001d0754(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_88 = SVar9.str;
  FUN_1001d05d4(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001ac30c();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0xd000000000000010;
  param_1[1] = local_68;
  param_1[2] = local_70;
  param_1[3] = uVar2;
  param_1[4] = pcStack_78;
  param_1[5] = local_80;
  param_1[6] = local_88;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1003fd5c8 | FUN_1003fd5c8 */

void FUN_1003fd5c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar6;
  String SVar7;
  void *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_68 = 0x8000000100da5ad0;
  FUN_10020cc18();
  local_70 = *(undefined8 *)LVar3.unknown;
  uVar2 = *(undefined8 *)((long)LVar3.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001cfcd4(localized.unknown);
  SVar6 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar6.bridgeObject;
  pcStack_78 = SVar6.str;
  FUN_1001cfb54(localized.unknown);
  SVar6 = (extension_Foundation)::Swift::String::init(localized);
  FUN_1001cf9d4(localized.unknown);
  SVar7 = (extension_Foundation)::Swift::String::init(localized);
  lVar4 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x20));
  lVar5 = 0;
  FUN_1003efaa0();
  FUN_1001ab2ec((long)puVar1 + (long)*(int *)(lVar5 + 0x18),0xd000000000000016,0x8000000100da5af0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar4 + 0x24),1,1,lVar5);
  *param_1 = 0xd000000000000017;
  param_1[1] = local_68;
  param_1[2] = local_70;
  param_1[3] = uVar2;
  param_1[4] = pcStack_78;
  param_1[5] = local_80;
  *(String *)(param_1 + 6) = SVar6;
  return;
}



/* Address: 0x1003fd73c | FUN_1003fd73c */

void FUN_1003fd73c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  URL UVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long lVar11;
  LocalizedStringResource localized;
  String SVar12;
  undefined1 auStack_90 [8];
  void *local_88;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  puVar4 = &DAT_100fc4558;
  FUN_1000037f0(&DAT_100fc4558,&DAT_100c46bf8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  localized.unknown = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10020d190();
  local_68 = *(undefined8 *)LVar5.unknown;
  uVar2 = *(undefined8 *)((long)LVar5.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d14d4(localized.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar12.bridgeObject;
  local_70 = SVar12.str;
  FUN_1001d1354(localized.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(localized);
  local_88 = SVar12.bridgeObject;
  local_80 = SVar12.str;
  FUN_1001d11d4(localized.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(localized);
  Foundation::URL::_init();
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar6.unknown + -8);
  puVar7 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,UVar6.unknown);
  if ((int)puVar7 != 1) {
    lVar8 = 0;
    FUN_1003efa8c();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(String *)(puVar1 + 2) = SVar12;
    lVar9 = 0;
    FUN_1003efaa0();
    (**(code **)(lVar11 + 0x20))((long)puVar1 + (long)*(int *)(lVar9 + 0x18),puVar10,UVar6.unknown);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))
              ((long)param_1 + (long)*(int *)(lVar8 + 0x24),1,1,lVar9);
    *param_1 = 0xd000000000000011;
    param_1[1] = 0x8000000100da5b40;
    param_1[2] = local_68;
    param_1[3] = uVar2;
    param_1[4] = local_70;
    param_1[5] = local_78;
    param_1[6] = local_80;
    param_1[7] = local_88;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fd92c);
  (*pcVar3)();
}



/* Address: 0x1003fd92c | FUN_1003fd92c */

void FUN_1003fd92c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  URL UVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  LocalizedStringResource localized;
  String SVar11;
  String SVar12;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  puVar4 = &DAT_100fc4558;
  FUN_1000037f0(&DAT_100fc4558,&DAT_100c46bf8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_80 - extraout_x8;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  localized.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d56c();
  local_68 = *(undefined8 *)LVar5.unknown;
  uVar2 = *(undefined8 *)((long)LVar5.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d0bd4(localized.unknown);
  SVar11 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar11.bridgeObject;
  local_70 = SVar11.str;
  FUN_1001d0a54(localized.unknown);
  SVar11 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar11.str;
  FUN_1001c1c88(localized.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(localized);
  Foundation::URL::_init();
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar6.unknown + -8);
  lVar7 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,UVar6.unknown);
  if ((int)lVar7 != 1) {
    lVar7 = 0;
    FUN_1003efa8c();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(String *)(puVar1 + 2) = SVar12;
    lVar8 = 0;
    FUN_1003efaa0();
    (**(code **)(lVar10 + 0x20))((long)puVar1 + (long)*(int *)(lVar8 + 0x18),lVar9,UVar6.unknown);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))
              ((long)param_1 + (long)*(int *)(lVar7 + 0x24),1,1,lVar8);
    *param_1 = 0x6c4764697571696c;
    param_1[1] = 0xeb00000000737361;
    param_1[2] = local_68;
    param_1[3] = uVar2;
    param_1[4] = local_70;
    param_1[5] = local_78;
    param_1[6] = local_80;
    param_1[7] = SVar11.bridgeObject;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fdb1c);
  (*pcVar3)();
}



/* Address: 0x1003fdb1c | FUN_1003fdb1c */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1003fdb1c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *apuStack_b0 [5];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = 0;
  FUN_1003efa8c();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)apuStack_b0 + lVar2);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  apuStack_b0[2] = (undefined *)uVar10;
  apuStack_b0[3] = (undefined *)uVar12;
  apuStack_b0[4] = (undefined *)uVar13;
  local_80 = uVar11;
  local_70 = uVar6;
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  _swift_retain(uVar6);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(apuStack_b0 + 1);
  _swift_release(uVar6);
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar10);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  FUN_1003fdd0c(lVar3,*(undefined8 *)(unaff_x20 + 0x50),apuStack_b0[1]);
  lVar7 = *(long *)(lVar3 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    apuStack_b0[1] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003fe568(0,lVar7,0);
    lVar8 = lVar3 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar9 + 0x48);
    do {
      puVar5 = apuStack_b0[1];
      FUN_10008c240(lVar8,puVar4);
      uVar6 = *puVar4;
      uVar10 = *(undefined8 *)((long)apuStack_b0 + lVar2 + 8U);
      _swift_bridgeObjectRetain(uVar10);
      FUN_10008c284(puVar4);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      apuStack_b0[1] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1003fe568(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = apuStack_b0[1];
      *(ulong *)(apuStack_b0[1] + 0x10) = uVar1 + 1;
      *(undefined8 *)(apuStack_b0[1] + uVar1 * 0x10 + 0x20) = uVar6;
      *(undefined8 *)(apuStack_b0[1] + uVar1 * 0x10 + 0x28) = uVar10;
      lVar8 = lVar8 + lVar9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return puVar5;
}



/* Address: 0x1003fdd0c | FUN_1003fdd0c */

undefined * FUN_1003fdd0c(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [8];
  code *local_88;
  undefined8 local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  lVar4 = 0;
  FUN_1003efa8c();
  local_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = *(ulong *)(param_3 + 0x10);
  if (local_70 != 0) {
    uVar8 = 0;
    local_88 = param_1;
    local_80 = param_2;
    lStack_78 = param_3;
    do {
      if (*(ulong *)(param_3 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003fdecc);
        (*pcVar3)();
      }
      uVar7 = (ulong)*(byte *)(local_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(local_68 + 0x50) ^ 0xffffffffffffffff);
      lVar4 = *(long *)(local_68 + 0x48);
      FUN_10008c240(param_3 + uVar7 + lVar4 * uVar8,puVar9);
      puVar5 = puVar9;
      (*param_1)();
      if (unaff_x21 != 0) {
        FUN_10008c284(puVar9);
        _swift_release(puVar2);
        _swift_bridgeObjectRelease(param_3);
        return puVar2;
      }
      if (((ulong)puVar5 & 1) == 0) {
        FUN_10008c284(puVar9);
      }
      else {
        puVar6 = puVar2;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar6 & 1) == 0) {
          FUN_1003fe584(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          FUN_1003fe584(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
        FUN_1000aa308(puVar9,puVar2 + uVar1 * lVar4 + uVar7);
        param_3 = lStack_78;
        param_1 = local_88;
      }
      uVar8 = uVar8 + 1;
    } while (local_70 != uVar8);
  }
  _swift_bridgeObjectRelease(param_3);
  return puVar2;
}



/* Address: 0x1003fdecc | FUN_1003fdecc */

void FUN_1003fdecc(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  local_a0 = uVar6;
  uStack_98 = uVar8;
  local_90 = uVar9;
  local_80 = uVar7;
  local_70 = uVar5;
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  FUN_1002ca7e0(&local_a8);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar8);
  _swift_release(uVar6);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  FUN_1003fdd0c(lVar2,*(undefined8 *)(unaff_x20 + 0x50),local_a8);
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fe008);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(lVar2 + 0x10)) {
    lVar3 = 0;
    FUN_1003efa8c();
    uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    FUN_10008c240(lVar2 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)) +
                  *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_2,param_1);
    _swift_bridgeObjectRelease(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fe00c);
  (*pcVar1)();
}



/* Address: 0x1003fe00c | FUN_1003fe00c */

undefined * FUN_1003fe00c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100fc4648;
  FUN_1000037f0(&DAT_100fc4648,&DAT_100c46c58);
  local_b0 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  local_a0 = uVar8;
  uStack_98 = uVar10;
  local_90 = uVar11;
  local_80 = uVar9;
  local_70 = uVar7;
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  puVar2 = &DAT_100fc4650;
  FUN_1000037f0(&DAT_100fc4650,&DAT_100c46c60);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x50);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_1002cb1ec();
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar10);
  _swift_release(uVar8);
  puVar3 = &DAT_100ed1508;
  local_a8 = puVar2;
  _swift_allocObject(&DAT_100ed1508,0x20,7);
  *(undefined8 *)(puVar3 + 0x18) = uStack_b8;
  *(undefined8 *)(puVar3 + 0x10) = local_c0;
  puVar4 = &DAT_100ed1530;
  _swift_allocObject(&DAT_100ed1530,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003fe530;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(uVar6);
  FUN_1000037f0(&DAT_100fc4658,&DAT_100c46c68);
  FUN_1000037f0(&DAT_100fc4660,&DAT_100c46c70);
  FUN_100016eac(&DAT_100fc4668,&DAT_100fc4658,&DAT_100c46c68,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar2);
  _swift_release(puVar4);
  FUN_100016eac(&DAT_100fc4670,&DAT_100fc4648,&DAT_100c46c58,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  AVar5 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_b0 + 8))((long)&local_c0 - extraout_x8,puVar1);
  return AVar5.unknown;
}



/* Address: 0x1003fe258 | FUN_1003fe258 */

undefined1  [16]
FUN_1003fe258(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined *local_70 [2];
  
  lVar5 = 0;
  FUN_1003efa8c();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)local_70 + lVar4);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003fdd0c(param_3,param_4,param_2);
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_3);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_70[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003fe568(0,lVar5,0);
    lVar8 = param_3 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar9 + 0x48);
    do {
      puVar7 = local_70[0];
      FUN_10008c240(lVar8,puVar6);
      uVar1 = *puVar6;
      uVar3 = *(undefined8 *)((long)local_70 + lVar4 + 8);
      _swift_bridgeObjectRetain(uVar3);
      FUN_10008c284(puVar6);
      uVar2 = *(ulong *)(puVar7 + 0x10);
      local_70[0] = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        FUN_1003fe568(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
      }
      puVar7 = local_70[0];
      *(ulong *)(local_70[0] + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_70[0] + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(local_70[0] + uVar2 * 0x10 + 0x28) = uVar3;
      lVar8 = lVar8 + lVar9;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_3);
  }
  auVar10._8_8_ = PTR___swiftEmptySetSingleton_100eae0e8;
  auVar10._0_8_ = puVar7;
  return auVar10;
}



/* Address: 0x1003fe3d0 | FUN_1003fe3d0 */

void FUN_1003fe3d0(void)

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
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003fe440 | FUN_1003fe440 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003fe440(void)

{
  return ZEXT816(0x100fc45a0);
}



/* Address: 0x1003fe460 | thunk_FUN_1003fe464 */

void thunk_FUN_1003fe464(void)

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


