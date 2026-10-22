/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003b838c | FUN_1003b838c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1003b838c(ulong param_1)

{
  if (param_1 >> 0x3e == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 & 0x3fffffffffffffff;
  }
  return param_1;
}



/* Address: 0x1003b83c4 | FUN_1003b83c4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003b83c4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  String SVar3;
  String SVar4;
  long lVar5;
  long lVar6;
  undefined *self;
  bool bVar7;
  Date DVar8;
  undefined *puVar9;
  undefined *puVar10;
  __int64 _Var11;
  Date DVar12;
  long lVar13;
  undefined7 extraout_var;
  ID self_00;
  ID IVar14;
  _StringGuts _Var15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  long lVar21;
  String SVar22;
  String local_90;
  long local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  
  DVar8 = Foundation::Date::typeMetadataAccessor();
  local_70 = *(ulong *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  lVar20 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fc11a8;
  local_80 = lVar20;
  FUN_1000037f0(&DAT_100fc11a8,&DAT_100c42ee0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_00;
  puVar10 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar16 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar16 - extraout_x12_00;
  _Var11 = Swift::Collection::get_count();
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (_Var11 != 1) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  (extension_Swift)::Swift::Collection::_get_first();
  self = local_68;
  if (local_68 == (undefined *)0x0) {
    return puVar10;
  }
  if (param_2 >> 0x3e == 0) {
    local_90 = (String)ZEXT816(0);
  }
  else {
    objc_stub::identifier(param_2 & 0x3fffffffffffffff);
    local_90 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_68 = puVar10;
  DVar12.unknown = (undefined *)objc_stub::timestamp(self);
  if (DVar12.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar12);
  }
  uVar1 = local_70;
  pcVar17 = *(code **)(local_70 + 0x38);
  (*pcVar17)(lVar21,DVar12.unknown == (undefined *)0x0,1,DVar8.unknown);
  (*pcVar17)(lVar16,1,1,DVar8.unknown);
  lVar18 = (long)*(int *)(puVar9 + 0x30);
  FUN_100364a64(lVar21,lVar20);
  FUN_100364a64(lVar16,lVar20 + lVar18);
  pcVar17 = *(code **)(uVar1 + 0x30);
  lVar13 = lVar20;
  (*pcVar17)(lVar20,1,DVar8.unknown);
  lVar6 = local_78;
  if ((int)lVar13 == 1) {
    FUN_100005808(lVar16,&DAT_100fbe6e8,&DAT_100c43250);
    FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
    lVar18 = lVar20 + lVar18;
    (*pcVar17)(lVar18,1,DVar8.unknown);
    if ((int)lVar18 != 1) {
LAB_1003b86d0:
      FUN_100005808(lVar20,&DAT_100fc11a8,&DAT_100c42ee0);
      pvVar19 = local_90.bridgeObject;
      goto LAB_1003b86ec;
    }
    FUN_100005808(lVar20,&DAT_100fbe6e8,&DAT_100c43250);
    pvVar19 = local_90.bridgeObject;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100364a64(lVar20,local_78);
    lVar13 = lVar20 + lVar18;
    (*pcVar17)(lVar13,1,DVar8.unknown);
    lVar5 = local_80;
    if ((int)lVar13 == 1) {
      FUN_100005808(lVar16,&DAT_100fbe6e8,&DAT_100c43250);
      FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
      (**(code **)(uVar1 + 8))(lVar6,DVar8.unknown);
      goto LAB_1003b86d0;
    }
    lVar13 = local_80;
    (**(code **)(uVar1 + 0x20))(local_80,lVar20 + lVar18,DVar8.unknown);
    FUN_1003b8a14();
    bVar7 = Swift::Equatable::___infix(lVar6,lVar5,DVar8.unknown,lVar13);
    local_70 = CONCAT44(local_70._4_4_,(int)CONCAT71(extraout_var,bVar7));
    pcVar17 = *(code **)(uVar1 + 8);
    (*pcVar17)(lVar5,DVar8.unknown);
    FUN_100005808(lVar16,&DAT_100fbe6e8,&DAT_100c43250);
    FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
    (*pcVar17)(lVar6,DVar8.unknown);
    FUN_100005808(lVar20,&DAT_100fbe6e8,&DAT_100c43250);
    pvVar19 = local_90.bridgeObject;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((local_70 & 1) != 0) goto LAB_1003b8878;
LAB_1003b86ec:
    pcVar17 = thunk_FUN_10035aca8;
    FUN_10035a72c(thunk_FUN_10035aca8,0);
    objc_stub::identifier((ID)pcVar17);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var15.unknown = SVar22.bridgeObject;
    if (pvVar19 == (void *)0x0) {
      _swift_bridgeObjectRelease(_Var15.unknown);
LAB_1003b883c:
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
      uVar2 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
      if (uVar2 >> 1 <= uVar1) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,pcVar17);
      puVar9 = local_68;
    }
    else {
      SVar3.bridgeObject = pvVar19;
      SVar3.str = local_90.str;
      if (SVar22 == SVar3) {
        _swift_bridgeObjectRelease(_Var15.unknown);
        puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar22.str,_Var15,
                           (_StringComparisonResult)(__int8)local_90.str);
        _swift_bridgeObjectRelease(_Var15.unknown);
        puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (!bVar7) goto LAB_1003b883c;
      }
    }
  }
LAB_1003b8878:
  self_00 = objc_stub::list((ID)self);
  if ((self_00 == 0) || (IVar14 = self_00, FUN_1003250f0(), (IVar14 & 1) == 0)) {
LAB_1003b8904:
    _swift_bridgeObjectRelease(pvVar19);
    local_68 = puVar9;
  }
  else {
    objc_stub::identifier(self_00);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var15.unknown = SVar22.bridgeObject;
    if (pvVar19 == (void *)0x0) {
      _swift_bridgeObjectRelease(_Var15.unknown);
    }
    else {
      SVar4.bridgeObject = pvVar19;
      SVar4.str = local_90.str;
      if (SVar22 == SVar4) {
        _swift_bridgeObjectRelease(_Var15.unknown);
        goto LAB_1003b8904;
      }
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar22.str,_Var15,
                         (_StringComparisonResult)(__int8)local_90.str);
      _swift_bridgeObjectRelease(_Var15.unknown);
      _swift_bridgeObjectRelease(pvVar19);
      if (bVar7) {
        return puVar9;
      }
    }
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
    uVar2 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
    if (uVar2 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,self_00);
  }
  return local_68;
}



/* Address: 0x1003b8a10 | thunk_FUN_10035aca8 */

void thunk_FUN_10035aca8(void)

{
  FUN_10035aca8();
  return;
}



/* Address: 0x1003b8a14 | FUN_1003b8a14 */

void FUN_1003b8a14(void)

{
  Date DVar1;
  undefined *puVar2;
  
  if (DAT_100fc11f8 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0;
  _swift_getWitnessTable(PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0,DVar1.unknown)
  ;
  DAT_100fc11f8 = puVar2;
  return;
}



/* Address: 0x1003b8a58 | FUN_1003b8a58 */

undefined8 * FUN_1003b8a58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10000444c(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1003b8a88 | FUN_1003b8a88 */

void FUN_1003b8a88(undefined8 *param_1)

{
  FUN_100021e40(*param_1);
  return;
}



/* Address: 0x1003b8a90 | FUN_1003b8a90 */

undefined8 * FUN_1003b8a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_10000444c(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  FUN_100021e40(uVar1);
  return param_1;
}



/* Address: 0x1003b8ac8 | FUN_1003b8ac8 */

undefined8 * FUN_1003b8ac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  FUN_100021e40(uVar1);
  return param_1;
}



/* Address: 0x1003b8af8 | FUN_1003b8af8 */

int FUN_1003b8af8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003b8b54 | FUN_1003b8b54 */

void FUN_1003b8b54(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x1003b8ba4 | FUN_1003b8ba4 */

ulong FUN_1003b8ba4(ulong *param_1)

{
  return *param_1 >> 0x3e;
}



/* Address: 0x1003b8bb0 | FUN_1003b8bb0 */

void FUN_1003b8bb0(ulong *param_1)

{
  *param_1 = *param_1 & 0x3fffffffffffffff;
  return;
}



/* Address: 0x1003b8bc0 | FUN_1003b8bc0 */

void FUN_1003b8bc0(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8 | param_2 << 0x3e;
  return;
}



/* Address: 0x1003b8bd4 | FUN_1003b8bd4 */

undefined1  [16] FUN_1003b8bd4(void)

{
  return ZEXT816(0x100ecec10);
}



/* Address: 0x1003b8be4 | thunk_FUN_10035aca8 */

void thunk_FUN_10035aca8(void)

{
  FUN_10035aca8();
  return;
}



/* Address: 0x1003b8be8 | thunk_FUN_1003b8a58 */

void thunk_FUN_1003b8a58(void)

{
  FUN_1003b8a58();
  return;
}



/* Address: 0x1003b8bec | FUN_1003b8bec */

void FUN_1003b8bec(void)

{
  long in_x6;
  
                    /* WARNING: Could not recover jumptable at 0x0001003b8bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x6 + 8))();
  return;
}



/* Address: 0x1003b8bfc | FUN_1003b8bfc */

code * FUN_1003b8bfc(void)

{
  code *pcVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  pcVar2 = pcVar1;
  if (pcVar1 == (code *)0x0) {
    pcVar2 = FUN_1003bb684;
    FUN_10035a864();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(code **)(unaff_x20 + 0x10) = pcVar2;
    _swift_retain();
    _swift_release(uVar3);
    pcVar1 = (code *)0x0;
  }
  _swift_retain(pcVar1);
  return pcVar2;
}



/* Address: 0x1003b8c60 | FUN_1003b8c60 */

undefined1  [16] FUN_1003b8c60(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1003b8bfc();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10020a3f4;
  return auVar2;
}



/* Address: 0x1003b8c94 | FUN_1003b8c94 */

code * FUN_1003b8c94(void)

{
  code *pcVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  pcVar2 = pcVar1;
  if (pcVar1 == (code *)0x0) {
    pcVar2 = FUN_1003b8cf8;
    FUN_10035a880(FUN_1003b8cf8,0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(code **)(unaff_x20 + 0x18) = pcVar2;
    _swift_retain();
    _swift_release(uVar3);
    pcVar1 = (code *)0x0;
  }
  _swift_retain(pcVar1);
  return pcVar2;
}



/* Address: 0x1003b8cf8 | FUN_1003b8cf8 */

void FUN_1003b8cf8(undefined8 *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_1003595f8(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x18))(local_40,lStack_38);
  *param_1 = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x1003b8d60 | FUN_1003b8d60 */

void FUN_1003b8d60(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1003b8d70 | FUN_1003b8d70 */

undefined1  [16] FUN_1003b8d70(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1003b8c94();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1003b8da4;
  return auVar2;
}



/* Address: 0x1003b8da4 | FUN_1003b8da4 */

void FUN_1003b8da4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1[1] + 0x18);
  *(undefined8 *)(param_1[1] + 0x18) = uVar1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar1);
    _swift_release(uVar2);
    uVar2 = uVar1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x1003b8de4 | FUN_1003b8de4 */

long FUN_1003b8de4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  long local_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1000da768(auStack_58);
    FUN_100004640(auStack_58,local_40);
    lVar2 = local_40;
    (**(code **)(lStack_38 + 0x10))(local_40,lStack_38);
    FUN_100004594(auStack_58);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar3);
    lVar1 = 0;
  }
  _swift_retain(lVar1);
  return lVar2;
}



/* Address: 0x1003b8e84 | FUN_1003b8e84 */

void FUN_1003b8e84(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1003b8e94 | FUN_1003b8e94 */

undefined1  [16] FUN_1003b8e94(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1003b8de4();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1003b8ec8;
  return auVar2;
}



/* Address: 0x1003b8ec8 | FUN_1003b8ec8 */

void FUN_1003b8ec8(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1[1] + 0x20);
  *(undefined8 *)(param_1[1] + 0x20) = uVar1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar1);
    _swift_release(uVar2);
    uVar2 = uVar1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x1003b8f08 | FUN_1003b8f08 */

undefined8 FUN_1003b8f08(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_10000444c(uVar1);
  return uVar1;
}



/* Address: 0x1003b8f30 | FUN_1003b8f30 */

undefined1  [16] FUN_1003b8f30(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Address: 0x1003b8f7c | FUN_1003b8f7c */

void FUN_1003b8f7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x1003b8fcc | FUN_1003b8fcc */

undefined1  [16] FUN_1003b8fcc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x48,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1003b8ffc | FUN_1003b8ffc */

undefined * FUN_1003b8ffc(void)

{
  undefined *puVar1;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_50 [8];
  long local_48;
  
  puVar1 = &DAT_100fc2680;
  FUN_1000037f0(&DAT_100fc2680,&DAT_100c44920);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_48 = *(long *)(unaff_x20 + 0xb0);
  if (local_48 == 0) {
    AVar2.unknown = (undefined *)0x0;
  }
  else {
    FUN_1000037f0(&DAT_100fc2688,&DAT_100c44928);
    FUN_100016eac(&DAT_100fc2690,&DAT_100fc2688,&DAT_100c44928,
                  PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
                 );
    FUN_1003bb68c();
    (extension_Combine)::Combine::Publisher::_removeDuplicates();
    FUN_100016eac(&DAT_100fc26b0,&DAT_100fc2680,&DAT_100c44920,
                  PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
                 );
    AVar2 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    (**(code **)(lVar3 + 8))(auStack_50 + -extraout_x8,puVar1);
  }
  return AVar2.unknown;
}



/* Address: 0x1003b9128 | FUN_1003b9128 */

uint FUN_1003b9128(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_1000da768(auStack_48);
  puVar1 = auStack_48;
  FUN_100004640(puVar1,local_30);
  uVar2 = local_30;
  FUN_1001a15c4(local_30,uStack_28,puVar1);
  FUN_100004594(auStack_48);
  return (uint)uVar2 & 1;
}



/* Address: 0x1003b9188 | FUN_1003b9188 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003b9188(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  if ((long)uVar2 < -0x4000000000000000) {
    uVar1 = uVar2 & 0x3fffffffffffffff;
    FUN_100328f38();
    FUN_100021e40(uVar2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1003b91dc | FUN_1003b91dc */

undefined8 FUN_1003b91dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_1003bb7bc(param_1,param_2);
  FUN_100021e40(param_1);
  return uVar1;
}



/* Address: 0x1003b9234 | FUN_1003b9234 */

undefined8 FUN_1003b9234(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1003bb7bc();
  FUN_100021e40(param_1);
  return uVar1;
}



/* Address: 0x1003b9264 | FUN_1003b9264 */

void FUN_1003b9264(undefined8 param_1,undefined1 param_2)

{
  CurrentValueSubject *pCVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong local_40;
  undefined1 local_38;
  
  puVar2 = &local_40;
  uVar6 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar6 >> 0x3e != 0) {
    uVar4 = uVar6;
    local_38 = param_2;
    FUN_10000444c();
    FUN_1003293c4();
    pCVar1 = (CurrentValueSubject *)&DAT_100fc2688;
    local_40 = uVar4;
    FUN_1000037f0(&DAT_100fc2688,&DAT_100c44928);
    _swift_allocObject();
    Combine::CurrentValueSubject::_init(pCVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(ulong **)(unaff_x20 + 0xb0) = puVar2;
    _swift_release(uVar5);
    puVar3 = &DAT_100ecec88;
    _swift_allocObject(&DAT_100ecec88,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    FUN_1000037f0(&DAT_100fc28e0,&DAT_100c44a88);
    _swift_allocObject();
    uVar4 = uVar6 & 0x3fffffffffffffff;
    FUN_1003c1c3c(uVar4,FUN_1003bbc18,puVar3);
    _swift_release(puVar3);
    FUN_100021e40(uVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xa8);
    *(ulong *)(unaff_x20 + 0xa8) = uVar4;
    _swift_release(uVar5);
  }
  return;
}



/* Address: 0x1003b936c | FUN_1003b936c */

uint FUN_1003b936c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = *(long *)(param_3 - 8);
  uVar1 = param_3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_4 + 8);
  FUN_10031c4c4(uVar1,uVar4);
  if ((uVar1 & 1) == 0) {
    FUN_1000da768(&local_68);
    (**(code **)(lVar5 + 0x10))(puVar3,param_1,param_3);
    uVar2 = 0;
    FUN_1003214a8(0);
    Swift::Array<undefined>::_init(puVar3,uVar2,param_3,uVar4);
    FUN_10037a144();
    _swift_release(local_68);
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    lVar5 = *(long *)(unaff_x20 + 0x78);
    FUN_100004640(unaff_x20 + 0x58,uVar4);
    (**(code **)(lVar5 + 0x18))(uVar4,lVar5);
  }
  return ((uint)uVar1 ^ 0xffffffff) & 1;
}



/* Address: 0x1003b9490 | FUN_1003b9490 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b9490(undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  Component CVar2;
  Date DVar3;
  Calendar CVar4;
  DateComponents DVar5;
  undefined *puVar6;
  Calendar CVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  Set<Component> SVar9;
  Date DVar10;
  undefined1 *puVar11;
  DateComponents DVar12;
  ID IVar13;
  uint uVar14;
  Date DVar15;
  long extraout_x8;
  long extraout_x8_00;
  Date from;
  long lVar16;
  long extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  Date to;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar19;
  long unaff_x20;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined1 auStack_130 [8];
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_104;
  undefined1 *local_100;
  undefined8 local_f8;
  ID local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  puVar6 = &DAT_100fbe6e8;
  local_f8 = param_1;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar28 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar28 + 0x40));
  to.unknown = (undefined *)(lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  from.unknown = to.unknown + -extraout_x12_00;
  CVar4 = Foundation::Calendar::typeMetadataAccessor();
  lVar16 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = (long)(from.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar22 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar24 = *(undefined8 *)(param_4 + 8);
  puVar6 = (undefined *)0x0;
  _swift_getAssociatedTypeWitness
            (0,uVar24,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(ulong *)(unaff_x20 + 0x40) >> 0x3e == 0) ||
     ((*(ulong *)(unaff_x20 + 0x40) & 0xc000000000000000) == 0x4000000000000000)) {
    local_128 = extraout_x12_01;
    (**(code **)(lVar22 + 0x10))(lVar20,local_f8,param_3);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar24,param_3,puVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    CVar7.unknown = puVar6;
    local_f8 = uVar24;
    Swift::IteratorProtocol::_next();
    if (local_90[0] != 0) {
      local_104 = *(undefined4 *)
                   PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
      ;
      uStack_118 = 2;
      local_120 = 1;
      local_100 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      do {
        IVar13 = local_90[0];
        puVar25 = local_100;
        Foundation::Calendar::get_current(CVar7);
        puVar8 = &DAT_100fbe870;
        FUN_1000037f0(&DAT_100fbe870,&DAT_100c44940);
        CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
        lVar22 = CONCAT71(extraout_var,CVar2.value);
        lVar23 = *(long *)(lVar22 + -8);
        uVar18 = (ulong)*(byte *)(lVar23 + 0x50);
        uVar27 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
        _swift_allocObject(puVar8,uVar27 + *(long *)(lVar23 + 0x48),uVar18 | 7);
        *(undefined8 *)(puVar8 + 0x18) = uStack_118;
        *(undefined8 *)(puVar8 + 0x10) = local_120;
        (**(code **)(lVar23 + 0x68))(puVar8 + uVar27,local_104,lVar22);
        SVar9.unknown = puVar8;
        FUN_1002fcc90();
        _swift_setDeallocating(puVar8);
        (**(code **)(lVar23 + 8))(puVar8 + uVar27,lVar22);
        _swift_deallocClassInstance(puVar8,0x20,7);
        DVar10.unknown = (undefined *)objc_stub::timestamp(IVar13);
        if (DVar10.unknown != (undefined *)0x0) {
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
        }
        DVar15 = DVar3;
        (**(code **)(lVar28 + 0x38))(lVar26,DVar10.unknown == (undefined *)0x0,1);
        FUN_100354148(lVar26,puVar25);
        pcVar21 = *(code **)(lVar28 + 0x30);
        puVar11 = puVar25;
        (*pcVar21)(puVar25,1,DVar3.unknown);
        if ((int)puVar11 == 1) {
          Foundation::Date::init();
          puVar11 = puVar25;
          (*pcVar21)(puVar25,1,DVar3.unknown);
          if ((int)puVar11 != 1) {
            FUN_100005808(puVar25,&DAT_100fbe6e8,&DAT_100c43250);
          }
        }
        else {
          (**(code **)(lVar28 + 0x20))(from.unknown,puVar25,DVar3.unknown);
        }
        Foundation::Date::init();
        Foundation::Calendar::dateComponents(SVar9,from,to,(Calendar)DVar15.unknown);
        _swift_bridgeObjectRelease(SVar9.unknown);
        pcVar21 = *(code **)(lVar28 + 8);
        (*pcVar21)(to.unknown,DVar3.unknown);
        (*pcVar21)(from.unknown,DVar3.unknown);
        DVar12.unknown = from.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
        CVar7 = CVar4;
        (**(code **)(lVar16 + 8))();
        uVar14 = (uint)CVar7.unknown;
        Foundation::DateComponents::_get_day(DVar12);
        (**(code **)(lVar17 + 8))(lVar19,DVar5.unknown);
        puVar8 = (undefined *)0x0;
        if ((uVar14 & 0xff) != 1) {
          puVar8 = DVar12.unknown;
        }
        IVar13 = objc_stub::rawType(IVar13);
        if ((long)IVar13 < 3) {
          if (IVar13 == 1) {
            puVar25 = &DAT_e500000000000000;
            uVar24 = 0x6567616d69;
          }
          else if (IVar13 == 2) {
            puVar25 = &DAT_e500000000000000;
            uVar24 = 0x726f6c6f63;
          }
          else {
LAB_1003b9a2c:
            puVar25 = &DAT_e700000000000000;
            uVar24 = 0x6e776f6e6b6e75;
          }
        }
        else if (IVar13 == 3) {
          puVar25 = &DAT_e400000000000000;
          uVar24 = 0x656c6966;
        }
        else if (IVar13 == 4) {
          puVar25 = &DAT_e400000000000000;
          uVar24 = 0x6b6e696c;
        }
        else {
          if (IVar13 != 5) goto LAB_1003b9a2c;
          puVar25 = &DAT_e400000000000000;
          uVar24 = 0x74786574;
        }
        FUN_1000da768(local_90);
        lVar22 = lStack_70;
        uVar1 = local_78;
        FUN_100004640(local_90,local_78);
        (**(code **)(lVar22 + 0x20))(uVar24,puVar25,puVar8,param_2,uVar1,lVar22);
        _swift_bridgeObjectRelease(puVar25);
        FUN_100004594(local_90);
        CVar7.unknown = puVar6;
        Swift::IteratorProtocol::_next();
      } while (local_90[0] != 0);
    }
    (**(code **)(local_128 + 8))(lVar20 - extraout_x8_04,puVar6);
  }
  return;
}



/* Address: 0x1003b9a78 | FUN_1003b9a78 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003ba110) */

void FUN_1003b9a78(undefined8 param_1,ID param_2,code *param_3,undefined8 param_4,char *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID self;
  char *pcVar3;
  bool bVar4;
  LocalizedStringResource LVar5;
  code *pcVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  long local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  LocalizedStringResource local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  ID local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  char *local_198;
  undefined1 auStack_188 [96];
  String local_128;
  String local_118;
  String local_108;
  code *local_f8;
  undefined *local_f0;
  String SStack_e8;
  code *pcStack_d8;
  undefined8 local_d0;
  String local_c8;
  String local_b8;
  String local_a8;
  code *local_98;
  undefined *local_90;
  String SStack_88;
  code *pcStack_78;
  undefined8 local_70;
  
  puVar8 = &DAT_100fbfa58;
  local_1c0 = param_4;
  local_1b8 = param_3;
  local_1b0 = param_2;
  local_1a8 = param_6;
  local_198 = param_5;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1d0 = (long)&local_1e0 - extraout_x8;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar8 = (undefined *)
           (((long)&local_1e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar13 = *(long *)(param_7 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  local_1c8.unknown = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)puVar8 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar10 - extraout_x12;
  pcVar14 = *(code **)(lVar13 + 0x10);
  local_1d8 = param_1;
  (*pcVar14)(lVar16,param_1,param_7);
  (*pcVar14)(lVar10,lVar16,param_7);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_100ecec38;
  _swift_allocObject(&DAT_100ecec38,uVar12 + 0x18,uVar9 | 7);
  pcVar14 = local_1b8;
  *(long *)(puVar8 + 0x10) = param_7;
  *(undefined8 *)(puVar8 + 0x18) = param_8;
  local_1a0 = lVar13;
  (**(code **)(lVar13 + 0x20))(puVar8 + uVar15,lVar16,param_7);
  pcVar3 = local_198;
  uVar2 = local_1a8;
  self = local_1b0;
  *(ID *)(puVar8 + uVar12) = local_1b0;
  *(char **)(puVar8 + uVar12 + 8) = local_198;
  *(undefined8 *)((long)(puVar8 + uVar12 + 8) + 8) = local_1a8;
  if (pcVar14 == (code *)0x0) {
    FUN_100011128(local_198,local_1a8);
    FUN_1003baac8(lVar10,self,pcVar3,uVar2,param_7,param_8,FUN_1003bbbcc);
LAB_1003ba0d4:
    _swift_release(puVar8);
  }
  else {
    local_1e0 = lVar10;
    FUN_100011128(local_198,local_1a8);
    uVar1 = local_1c0;
    pcVar6 = pcVar14;
    FUN_100011128(pcVar14,local_1c0);
    FUN_100328f38();
    if (((ulong)pcVar6 & 1) == 0) {
      objc_stub::name(self);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      LVar5.unknown = local_1c8.unknown;
      thunk_FUN_1001e6b28(local_1c8.unknown,SVar17.str,SVar17.bridgeObject);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      SVar17 = (extension_Foundation)::Swift::String::init(LVar5);
      FUN_1001c2288(LVar5.unknown);
      local_108 = (extension_Foundation)::Swift::String::init(LVar5);
      local_b8 = (String)ZEXT816(0);
      local_90 = (undefined *)0x0;
      pcStack_78 = (code *)0x0;
      SStack_88 = (String)ZEXT816(0);
      local_98 = FUN_100004520;
      local_70 = 0;
      local_118 = (String)ZEXT816(0);
      local_f8 = FUN_100004520;
      local_d0 = 0;
      pcStack_d8 = (code *)0x0;
      SStack_e8 = (String)ZEXT816(0);
      local_f0 = (undefined *)0x0;
      local_128 = SVar17;
      local_c8 = SVar17;
      local_a8 = local_108;
      FUN_10003c978(&local_c8,auStack_188);
      FUN_10003c9b4(&local_128);
      (*pcVar14)(&local_c8);
      FUN_10003c9b4(&local_c8);
      FUN_100004550(pcVar14,uVar1);
    }
    else {
      FUN_1003b4444();
      uVar9 = local_1d0;
      if (pcVar6 == (code *)0x0) {
        FUN_100325588();
        uVar9 = local_1d0;
        (**(code **)(*(long *)(pcVar6 + -8) + 0x38))(local_1d0,1,1,pcVar6);
LAB_1003b9f00:
        FUN_100005808(uVar9,&DAT_100fbfa58,&DAT_100c44ed0);
LAB_1003b9f18:
        bVar4 = (extension_Swift)::Swift::Sequence::_contains();
        lVar10 = local_1e0;
        if (!bVar4) {
          FUN_1003baac8(local_1e0,self,local_198,uVar2,param_7,param_8,FUN_1003bbbcc);
          FUN_100004550(pcVar14,local_1c0);
          goto LAB_1003ba0d4;
        }
        objc_stub::name(self);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        LVar5.unknown = local_1c8.unknown;
        thunk_FUN_1001e6af8(local_1c8.unknown,SVar17.str,SVar17.bridgeObject);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar17 = (extension_Foundation)::Swift::String::init(LVar5);
        pvVar7 = SVar17.bridgeObject;
        local_198 = SVar17.str;
        objc_stub::name(self);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6ae8(LVar5.unknown,SVar17.str,SVar17.bridgeObject);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar17 = (extension_Foundation)::Swift::String::init(LVar5);
        FUN_1001c1508(LVar5.unknown);
        SVar18 = (extension_Foundation)::Swift::String::init(LVar5);
        _swift_retain(puVar8);
        FUN_1001c0788(LVar5.unknown);
        SStack_e8 = (extension_Foundation)::Swift::String::init(LVar5);
        local_c8.bridgeObject = pvVar7;
        local_c8.str = local_198;
      }
      else {
        FUN_10032670c(local_1d0);
        lVar10 = 0;
        FUN_100325588();
        uVar12 = uVar9;
        (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar9,1,lVar10);
        if ((int)uVar12 == 1) goto LAB_1003b9f00;
        FUN_100005808(uVar9,&DAT_100fbfa58,&DAT_100c44ed0);
        FUN_100328f38();
        if ((uVar9 & 1) == 0) goto LAB_1003b9f18;
        objc_stub::name(self);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        LVar5.unknown = local_1c8.unknown;
        thunk_FUN_1001e6b18(local_1c8.unknown,SVar17.str,SVar17.bridgeObject);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar17 = (extension_Foundation)::Swift::String::init(LVar5);
        pvVar7 = SVar17.bridgeObject;
        local_198 = SVar17.str;
        objc_stub::name(self);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6b08(LVar5.unknown,SVar17.str,SVar17.bridgeObject);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar17 = (extension_Foundation)::Swift::String::init(LVar5);
        FUN_1001c1508(LVar5.unknown);
        SVar18 = (extension_Foundation)::Swift::String::init(LVar5);
        _swift_retain(puVar8);
        FUN_1001c0788(LVar5.unknown);
        SStack_e8 = (extension_Foundation)::Swift::String::init(LVar5);
        local_c8.bridgeObject = pvVar7;
        local_c8.str = local_198;
      }
      local_98 = FUN_1003bb9e8;
      pcStack_78 = FUN_100004520;
      local_70 = 0;
      local_128.bridgeObject = pvVar7;
      local_128.str = local_198;
      local_f8 = FUN_1003bb9e8;
      pcStack_d8 = FUN_100004520;
      local_d0 = 0;
      local_118 = SVar17;
      local_108 = SVar18;
      local_f0 = puVar8;
      local_b8 = SVar17;
      local_a8 = SVar18;
      local_90 = puVar8;
      SStack_88 = SStack_e8;
      FUN_10003c978(&local_c8,auStack_188);
      FUN_10003c9b4(&local_128);
      uVar2 = local_1c0;
      (*pcVar14)(&local_c8);
      FUN_100004550(pcVar14,uVar2);
      FUN_10003c9b4(&local_c8);
    }
    _swift_release(puVar8);
    lVar10 = local_1e0;
  }
  (**(code **)(local_1a0 + 8))(lVar10,param_7);
  return;
}



/* Address: 0x1003ba130 | FUN_1003ba130 */

void FUN_1003ba130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100357cf0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  (**(code **)(*(long *)(lStack_58 + 0x10) + 0x28))
            (param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),local_60);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003ba1c8 | FUN_1003ba1c8 */

uint FUN_1003ba1c8(undefined8 param_1)

{
  FUN_1003babd8(param_1,0x7c);
  return (uint)param_1 & 1;
}



/* Address: 0x1003ba1e4 | FUN_1003ba1e4 */

/* WARNING: Removing unreachable block (ram,0x0001003ba214) */

void FUN_1003ba1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40 = param_2;
  uStack_38 = param_3;
  local_30 = param_1;
  FUN_1002ff310(FUN_1003bb9f4,auStack_50);
  return;
}



/* Address: 0x1003ba22c | FUN_1003ba22c */

void FUN_1003ba22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100357cf0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  (**(code **)(*(long *)(lStack_58 + 0x10) + 0x48))
            (param_2,param_3,*(undefined8 *)(param_4 + 8),local_60);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003ba2bc | FUN_1003ba2bc */

bool FUN_1003ba2bc(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long unaff_x20;
  
  bVar1 = (extension_Swift)::Swift::Sequence::_allSatisfy();
  bVar2 = (extension_Swift)::Swift::Sequence::_contains();
  if (((*(ulong *)(unaff_x20 + 0x40) >> 0x3e != 1) ||
      (bVar3 = Swift::Collection::get_isEmpty(), bVar3)) || (!bVar2)) {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x1003ba374 | FUN_1003ba374 */

uint FUN_1003ba374(undefined8 param_1)

{
  FUN_1003ba4d0(param_1,0x90);
  return (uint)param_1 & 1;
}



/* Address: 0x1003ba390 | FUN_1003ba390 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003ba390(ID *param_1)

{
  uint uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
  IVar6 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_10033d98c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/ItemCollectionViewModel.swift",0x27,1,0x91,UVar4.unknown,pMVar2);
  }
  IVar6 = objc_stub::list(IVar6);
  if (IVar6 == 0) {
    _swift_release(pMVar3);
    uVar1 = 0;
  }
  else {
    FUN_1003250f0();
    _swift_release(pMVar3);
    uVar1 = (uint)IVar6 & 1;
  }
  return uVar1;
}



/* Address: 0x1003ba464 | FUN_1003ba464 */

bool FUN_1003ba464(void)

{
  bool bVar1;
  
  bVar1 = (extension_Swift)::Swift::Sequence::_allSatisfy();
  return bVar1;
}



/* Address: 0x1003ba4b4 | FUN_1003ba4b4 */

uint FUN_1003ba4b4(undefined8 param_1)

{
  FUN_1003ba4d0(param_1,0x97);
  return (uint)param_1 & 1;
}



/* Address: 0x1003ba4d0 | FUN_1003ba4d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003ba4d0(ID *param_1,undefined8 param_2)

{
  uint uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong uVar6;
  ID self;
  
  self = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_10033d98c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/ItemCollectionViewModel.swift",0x27,1,param_2,UVar4.unknown,pMVar2);
  }
  uVar6 = objc_stub::list(self);
  if (uVar6 == 0) {
    _swift_release(pMVar3);
  }
  else {
    FUN_1003250f0();
    uVar1 = (uint)uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_100328f38();
      _swift_release(pMVar3);
      return uVar1 & 1;
    }
    _swift_release(pMVar3);
  }
  return 1;
}



/* Address: 0x1003ba5c4 | FUN_1003ba5c4 */

/* WARNING: Removing unreachable block (ram,0x0001003baaa8) */

void FUN_1003ba5c4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  bool bVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  __int64 _Var5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined auStack_1f0 [8];
  long local_1e8;
  LocalizedStringResource local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_198 [96];
  String local_138;
  String local_128;
  String local_118;
  code *pcStack_108;
  undefined *puStack_100;
  String local_f8;
  code *local_e8;
  undefined8 uStack_e0;
  String local_d0;
  String local_c0;
  String local_b0;
  code *local_a0;
  undefined *puStack_98;
  String local_90;
  code *local_80;
  undefined8 uStack_78;
  
  local_1d8 = param_5;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar13 = *(long *)(param_6 + -8);
  lVar7 = *(long *)(lVar13 + 0x40);
  local_1e0.unknown = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar12 - extraout_x12;
  pcVar11 = *(code **)(lVar13 + 0x10);
  (*pcVar11)(lVar9,param_1,param_6);
  (*pcVar11)(lVar12,lVar9,param_6);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar7 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ecec60;
  _swift_allocObject(&DAT_100ecec60,uVar8 + 0x18,uVar6 | 7);
  uVar1 = local_1d8;
  *(long *)(puVar4 + 0x10) = param_6;
  *(undefined8 *)(puVar4 + 0x18) = param_7;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar10,lVar9,param_6);
  *(undefined8 *)(puVar4 + uVar8) = unaff_x20;
  *(undefined8 *)(puVar4 + uVar8 + 8) = param_4;
  *(undefined8 *)((long)(puVar4 + uVar8 + 8) + 8) = uVar1;
  if (param_2 == (code *)0x0) {
    FUN_100011128(param_4,uVar1);
    _swift_retain(unaff_x20);
    FUN_1003baac8(lVar12,unaff_x20,param_4,uVar1,param_6,param_7,FUN_1003bbbb0);
    _swift_release(puVar4);
  }
  else {
    local_1e8 = lVar12;
    FUN_100011128(param_4,uVar1);
    _swift_retain(unaff_x20);
    FUN_100011128(param_2,param_3);
    bVar2 = (extension_Swift)::Swift::Sequence::_contains();
    _Var5 = Swift::Collection::get_count();
    LVar3.unknown = local_1e0.unknown;
    lVar12 = local_1e8;
    if (_Var5 < 2) {
      if (!bVar2) {
        FUN_1003baac8(local_1e8,unaff_x20,param_4,uVar1,param_6,param_7,FUN_1003bbbb0);
        FUN_100004550(param_2,param_3);
        _swift_release(puVar4);
        goto LAB_1003baa74;
      }
      FUN_1001bc408(local_1e0.unknown);
      SVar14 = (extension_Foundation)::Swift::String::init(LVar3);
      FUN_1001bc288(LVar3.unknown);
      SVar15 = (extension_Foundation)::Swift::String::init(LVar3);
      FUN_1001c1088(LVar3.unknown);
      SVar16 = (extension_Foundation)::Swift::String::init(LVar3);
      _swift_retain(puVar4);
      FUN_1001c0788(LVar3.unknown);
      local_f8 = (extension_Foundation)::Swift::String::init(LVar3);
      pcStack_108 = FUN_1003bba90;
      local_e8 = FUN_100004520;
      uStack_e0 = 0;
      local_a0 = FUN_1003bba90;
      local_80 = FUN_100004520;
      uStack_78 = 0;
      local_138 = SVar14;
      local_128 = SVar15;
      local_118 = SVar16;
      puStack_100 = puVar4;
      local_d0 = SVar14;
      local_c0 = SVar15;
      local_b0 = SVar16;
      puStack_98 = puVar4;
      local_90 = local_f8;
      FUN_10003c978(&local_138,auStack_198);
      FUN_10003c9b4(&local_d0);
    }
    else {
      if (bVar2) {
        FUN_1001bc708(local_1e0.unknown);
        SVar14 = (extension_Foundation)::Swift::String::init(LVar3);
        FUN_1001bc588(LVar3.unknown);
        SVar15 = (extension_Foundation)::Swift::String::init(LVar3);
      }
      else {
        FUN_1001bc108(local_1e0.unknown);
        SVar14 = (extension_Foundation)::Swift::String::init(LVar3);
        SVar15 = (String)ZEXT816(0);
      }
      FUN_1001c1088(LVar3.unknown);
      SVar16 = (extension_Foundation)::Swift::String::init(LVar3);
      _swift_retain(puVar4);
      FUN_1001c0788(LVar3.unknown);
      local_f8 = (extension_Foundation)::Swift::String::init(LVar3);
      pcStack_108 = FUN_1003bba90;
      local_e8 = FUN_100004520;
      uStack_e0 = 0;
      local_a0 = FUN_1003bba90;
      local_80 = FUN_100004520;
      uStack_78 = 0;
      local_138 = SVar14;
      local_128 = SVar15;
      local_118 = SVar16;
      puStack_100 = puVar4;
      local_d0 = SVar14;
      local_c0 = SVar15;
      local_b0 = SVar16;
      puStack_98 = puVar4;
      local_90 = local_f8;
      FUN_10003c978(&local_138,auStack_198);
      FUN_10003c9b4(&local_d0);
    }
    local_b0 = local_118;
    puStack_98 = puStack_100;
    local_a0 = pcStack_108;
    local_90.bridgeObject = local_f8.bridgeObject;
    local_90.str = local_f8.str;
    local_d0 = local_138;
    local_c0 = local_128;
    local_80 = local_e8;
    uStack_78 = uStack_e0;
    (*param_2)(&local_d0);
    FUN_10003c9b4(&local_138);
    FUN_100004550(param_2,param_3);
    _swift_release(puVar4);
    lVar12 = local_1e8;
  }
LAB_1003baa74:
  (**(code **)(lVar13 + 8))(lVar12,param_6);
  return;
}



/* Address: 0x1003baac8 | FUN_1003baac8 */

/* WARNING: Removing unreachable block (ram,0x0001003bab00) */

void FUN_1003baac8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_5;
  uStack_48 = param_6;
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_1002ff310(param_7,auStack_60);
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Address: 0x1003bab24 | FUN_1003bab24 */

void FUN_1003bab24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100357cf0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  (**(code **)(*(long *)(lStack_58 + 0x10) + 0x40))
            (param_2,*(undefined8 *)(param_3 + 0x40),param_4,*(undefined8 *)(param_5 + 8),local_60);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003babbc | FUN_1003babbc */

uint FUN_1003babbc(undefined8 param_1)

{
  FUN_1003babd8(param_1,0xa5);
  return (uint)param_1 & 1;
}



/* Address: 0x1003babd8 | FUN_1003babd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003babd8(ID *param_1,undefined8 param_2)

{
  uint uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong uVar6;
  ID self;
  
  self = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_10033d98c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    UVar5.unknown = (undefined *)0x0;
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/ItemCollectionViewModel.swift",0x27,1,param_2,UVar4.unknown,pMVar2);
  }
  FUN_100321210();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_release(pMVar3);
    uVar1 = 0;
  }
  else {
    uVar6 = objc_stub::list(self);
    if (uVar6 == 0) {
      _swift_release(pMVar3);
    }
    else {
      FUN_1003250f0();
      uVar1 = (uint)uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_100328f38();
        _swift_release(pMVar3);
        return uVar1 & 1;
      }
      _swift_release(pMVar3);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Address: 0x1003bace8 | FUN_1003bace8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bad3c) */

void FUN_1003bace8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x40);
  if ((long)uVar1 < -0x4000000000000000) {
    local_40 = uVar1 & 0x3fffffffffffffff;
    local_60 = param_3;
    uStack_58 = param_4;
    local_50 = param_1;
    uStack_48 = param_2;
    FUN_1002ff310(FUN_1003bbaf0,auStack_70);
    FUN_100021e40(uVar1);
  }
  return;
}



/* Address: 0x1003bad60 | FUN_1003bad60 */

void FUN_1003bad60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lStack_68 + 0x10) + 0x30))
            (param_2,param_3,param_4,param_5,*(undefined8 *)(param_6 + 8),local_70);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003bae08 | FUN_1003bae08 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bafc4) */

void FUN_1003bae08(_StringGuts param_1,_StringGuts param_2,ID param_3)

{
  ulong uVar1;
  bool bVar2;
  CharacterSet CVar3;
  ID IVar4;
  CharacterSet CVar5;
  char *extraout_x1;
  char *pcVar7;
  long extraout_x8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined *puStack_88;
  ID local_80;
  String SStack_78;
  char *pcVar6;
  void *pvVar8;
  
  SVar11.bridgeObject = param_2.unknown;
  SVar11.str = param_1.unknown;
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar9 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  IVar4 = objc_stub::title(param_3);
  pcVar6 = (char *)0x0;
  pcVar7 = extraout_x1;
  if (IVar4 != 0) {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar6 = SVar10.bridgeObject;
    uVar1 = (ulong)SVar10.str & 0xffffffffffff;
    if (((ulong)pcVar6 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pcVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_1003baec4;
    pcVar7 = pcVar6;
    _swift_bridgeObjectRelease();
  }
  FUN_100309008();
  SVar10.bridgeObject = pcVar7;
  SVar10.str = pcVar6;
LAB_1003baec4:
  CVar5.unknown = SVar10.bridgeObject;
  if (SVar10 != SVar11) {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)SVar10.str);
    _swift_bridgeObjectRelease();
    if (!bVar2) {
      local_90 = param_1.unknown;
      puStack_88 = param_2.unknown;
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
      FUN_10030cce0();
      SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                         ((CharacterSet)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
      pvVar8 = SVar11.bridgeObject;
      (**(code **)(lVar9 + 8))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar3.unknown);
      uVar1 = (ulong)SVar11.str & 0xffffffffffff;
      if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar8 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) && (IVar4 = objc_stub::title(param_3), IVar4 != 0)) {
        _swift_bridgeObjectRelease(pvVar8);
        SVar11 = (String)ZEXT816(0);
      }
      local_80 = param_3;
      SStack_78 = SVar11;
      FUN_1002ff310(FUN_1003bbb10,&local_90);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
    }
    return;
  }
  _swift_bridgeObjectRelease(CVar5.unknown);
  return;
}



/* Address: 0x1003baff4 | FUN_1003baff4 */

void FUN_1003baff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100357cf0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  local_90 = param_3;
  uStack_88 = param_4;
  (**(code **)(*(long *)(lStack_58 + 0x10) + 0x20))(param_2,FUN_1003bbb70,auStack_a0,local_60);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003bb08c | FUN_1003bb08c */

/* WARNING: Removing unreachable block (ram,0x0001003bb0cc) */

void FUN_1003bb08c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  FUN_1002ff2ec(FUN_1003bbb2c,auStack_50);
  return;
}



/* Address: 0x1003bb120 | FUN_1003bb120 */

void FUN_1003bb120(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  UUID UVar1;
  UUID UVar2;
  char *pcVar3;
  long extraout_x8;
  long lVar4;
  String SVar5;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  local_a0 = param_4;
  local_94 = param_5;
  local_90 = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  FUN_100357e58(auStack_88);
  FUN_100004640(auStack_88,local_70);
  UVar2 = Foundation::UUID::init();
  SVar5 = Foundation::UUID::get_uuidString(UVar2);
  pcVar3 = SVar5.str;
  (**(code **)(lVar4 + 8))
            ((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  (**(code **)(*(long *)(lStack_68 + 0x10) + 8))
            (pcVar3,SVar5.bridgeObject,param_3,local_a0,local_94,local_70);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  *local_90 = pcVar3;
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003bb23c | FUN_1003bb23c */

void FUN_1003bb23c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  lVar2 = *(long *)(unaff_x20 + 0x78);
  FUN_100004640(unaff_x20 + 0x58,uVar1);
  (**(code **)(lVar2 + 0x18))(uVar1,lVar2);
  return;
}



/* Address: 0x1003bb280 | FUN_1003bb280 */

void FUN_1003bb280(undefined8 param_1)

{
  FUN_1003bb290(param_1,1);
  return;
}


