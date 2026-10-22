/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100380724 | FUN_100380724 */

void FUN_100380724(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fc1b28,PTR_typeMetadataAccessor_100eaeaa0,
                PTR_UniformTypeIdentifiers__UniformTypeIdentifiers__UTType_>Swift__Hashable_100eaeab0
               );
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_100380874(param_1,_Var1);
  return;
}



/* Address: 0x100380790 | FUN_100380790 */

void FUN_100380790(undefined8 param_1)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(unaff_x20 + 0x28));
  FUN_1003809ac(param_1,_Var1,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  return;
}



/* Address: 0x1003807dc | FUN_1003807dc */

void FUN_1003807dc(undefined8 param_1)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(unaff_x20 + 0x28));
  FUN_1003809ac(param_1,_Var1,&DAT_100fc1b60,&PTR__OBJC_CLASS___CKShareMetadata_100f8dc18);
  return;
}



/* Address: 0x100380828 | FUN_100380828 */

void FUN_100380828(undefined8 param_1)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(unaff_x20 + 0x28));
  FUN_1003809ac(param_1,_Var1,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
  return;
}



/* Address: 0x100380874 | FUN_100380874 */

undefined1  [16] FUN_100380874(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  UTType UVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  UVar2 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,UVar2.unknown);
      puVar3 = &DAT_100fc1b30;
      FUN_100003a00(&DAT_100fc1b30,PTR_typeMetadataAccessor_100eaeaa0,
                    PTR_UniformTypeIdentifiers__UniformTypeIdentifiers__UTType_>Swift__Equatable_100eaeab8
                   );
      bVar1 = Swift::Equatable::___infix(puVar6,local_68,UVar2.unknown,puVar3);
      uVar8 = (ulong)bVar1;
      (**(code **)(lVar9 + 8))(puVar6,UVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Address: 0x1003809ac | FUN_1003809ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_1003809ac(NSObject *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_10000ec2c(0,param_3,param_4);
    do {
      bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix
                        (*(NSObject **)(*(long *)(unaff_x20 + 0x30) + param_2 * 8),param_1);
      uVar3 = (ulong)bVar1;
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Address: 0x100380a70 | FUN_100380a70 */

void FUN_100380a70(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(DVar2.unknown + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10031c7f0();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar4 + 0x38);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar6 = *(long *)(DVar2.unknown + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,DVar2.unknown);
    FUN_10031e824(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100380b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,DVar2.unknown);
  return;
}



/* Address: 0x100380b90 | FUN_100380b90 */

void FUN_100380b90(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_10031ca10();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x10);
    uVar4 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar4;
    FUN_10031e9f4(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Address: 0x100380c64 | FUN_100380c64 */

void FUN_100380c64(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100380d44);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_10031d2c0(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100380d04);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10031c64c();
    lVar4 = *unaff_x20;
    goto joined_r0x000100380d58;
  }
  lVar4 = *unaff_x20;
joined_r0x000100380d58:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100380d88 | FUN_100380d88 */

void FUN_100380d88(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  FUN_100071370(param_2);
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100380e78);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_10031d57c(lVar5,param_4 & 1);
    uVar7 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100380e28);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10031c7f0();
    lVar5 = *unaff_x20;
    goto joined_r0x000100380e8c;
  }
  lVar5 = *unaff_x20;
joined_r0x000100380e8c:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100380e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(DVar3.unknown + -8) + 0x48) * lVar2,param_1,DVar3.unknown
              );
    return;
  }
  FUN_10031c530();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100380ebc | FUN_100380ebc */

void FUN_100380ebc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  lVar5 = param_3;
  uVar6 = param_4;
  FUN_100071370();
  lVar8 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar7 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100380f98);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    FUN_10031d89c(lVar7,param_5 & 1);
    uVar9 = param_4;
    FUN_100071370();
    lVar5 = param_3;
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100380f60);
      (*pcVar4)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_10031ca10();
    lVar7 = *unaff_x20;
    goto joined_r0x000100380fac;
  }
  lVar7 = *unaff_x20;
joined_r0x000100380fac:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar5 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    FUN_10003bf2c(uVar2,uVar3);
    return;
  }
  FUN_1002b0fc0();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x100380fe0 | FUN_100380fe0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100380fe0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100381004 | FUN_100381004 */

void FUN_100381004(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100381014 | FUN_100381014 */

void FUN_100381014(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100381028 | FUN_100381028 */

void FUN_100381028(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100381030 | FUN_100381030 */

void FUN_100381030(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_3;
  uVar5 = param_4;
  FUN_100071370();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038110c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10031ddf4(lVar6,param_5 & 1);
    uVar8 = param_4;
    FUN_100071370();
    lVar3 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003810d4);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_10031cd04();
    lVar6 = *unaff_x20;
    goto joined_r0x000100381120;
  }
  lVar6 = *unaff_x20;
joined_r0x000100381120:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar4);
    return;
  }
  FUN_1002b0fc0();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x100381154 | FUN_100381154 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100381154(undefined8 param_1,ulong param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar3 = param_3;
  uVar4 = param_2;
  FUN_100380790();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100381234);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_4 = param_4 & 1;
    FUN_10031e344(lVar5);
    lVar3 = param_3;
    FUN_100380790();
    if (((uint)uVar4 & 1) != (param_4 & 1)) {
      FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003811fc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10031cfec();
    lVar5 = *unaff_x20;
    goto joined_r0x000100381248;
  }
  lVar5 = *unaff_x20;
joined_r0x000100381248:
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
    lVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_release(lVar5);
    return lVar5;
  }
  FUN_10031c5c0();
  return param_3;
}



/* Address: 0x100381278 | FUN_100381278 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_100381278(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar5 = param_2;
  FUN_100380790();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar5 & 1;
  lVar3 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10038134c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar3) {
    param_3 = param_3 & 1;
    FUN_10031e5bc(lVar3);
    uVar2 = param_2;
    FUN_100380790();
    if (((uint)uVar5 & 1) != (param_3 & 1)) {
      FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381318);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10031d15c();
    lVar3 = *unaff_x20;
    goto joined_r0x000100381360;
  }
  lVar3 = *unaff_x20;
joined_r0x000100381360:
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(*(long *)(lVar3 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar2 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar5);
    return uVar5;
  }
  FUN_10031c608();
  return param_2;
}



/* Address: 0x100381388 | FUN_100381388 */

void FUN_100381388(long param_1)

{
  FUN_10037fb90(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10038139c | FUN_10038139c */

void FUN_10038139c(long param_1)

{
  FUN_10037f834(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1003813b0 | FUN_1003813b0 */

void FUN_1003813b0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038145c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100381460);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100381464);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_10037f834();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_10012ad88(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038146c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100381468);
  (*pcVar2)();
}



/* Address: 0x10038146c | FUN_10038146c */

void FUN_10038146c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1a50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43b68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43b68,&DAT_100ecd7a8);
  DAT_100fc1a50 = pTVar1;
  return;
}



/* Address: 0x1003814ac | FUN_1003814ac */

void FUN_1003814ac(long *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined *puStack_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc1a68;
    FUN_100005c24(&DAT_100fc1a68,&DAT_100c43a18);
    puVar2 = puVar1;
    (*param_2)();
    local_50 = param_3;
    puStack_48 = puVar2;
    _swift_getWitnessTable(param_4,puVar1,&local_50);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100381528 | FUN_100381528 */

void FUN_100381528(undefined8 param_1,undefined8 param_2)

{
  FUN_100381540(param_1,param_2,PTR_get_png_100eaea20);
  return;
}



/* Address: 0x100381534 | FUN_100381534 */

void FUN_100381534(undefined8 param_1,undefined8 param_2)

{
  FUN_100381540(param_1,param_2,PTR_get_jpeg_100eaea50);
  return;
}



/* Address: 0x100381540 | FUN_100381540 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100381540(undefined *param_1,undefined8 param_2,code *param_3)

{
  UTType UVar1;
  ID IVar2;
  UTType UVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  long extraout_x8;
  ID unaff_x20;
  ulong uVar8;
  long lVar9;
  String SVar10;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  _objc_allocWithZone();
  IVar2 = objc_stub::init(unaff_x20);
  UVar3.unknown = param_1;
  FUN_1001037b4(param_1,param_2);
  (*param_3)(auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  SVar10 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  pvVar7 = SVar10.bridgeObject;
  (**(code **)(lVar9 + 8))
            (auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),UVar1.unknown);
  lVar9 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(IVar2 + _TtC9PasteCore14PasteboardItem::types,auStack_78,0x21,0);
  uVar8 = *(ulong *)(IVar2 + lVar9);
  _swift_bridgeObjectRetain(pvVar7);
  uVar4 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(IVar2 + lVar9) = uVar8;
  uVar6 = uVar8;
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    FUN_10037f834(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(IVar2 + lVar9) = uVar6;
  }
  uVar4 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_10037f834(uVar8,uVar4 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
  *(String *)(uVar8 + uVar4 * 0x10 + 0x20) = SVar10;
  *(ulong *)(IVar2 + lVar9) = uVar8;
  _swift_endAccess(auStack_78);
  lVar9 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(IVar2 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x21,0);
  FUN_1001037b4(param_1,param_2);
  uVar5 = *(undefined8 *)(IVar2 + lVar9);
  _swift_isUniquelyReferenced_nonNull_native(uVar5);
  local_80 = *(undefined8 *)(IVar2 + lVar9);
  *(undefined8 *)(IVar2 + lVar9) = 0x8000000000000000;
  FUN_100380ebc(param_1,param_2,SVar10.str,pvVar7,uVar5);
  _swift_bridgeObjectRelease(pvVar7);
  *(undefined8 *)(IVar2 + lVar9) = local_80;
  _swift_endAccess(auStack_78);
  FUN_10003bf2c(param_1,param_2);
  return IVar2;
}



/* Address: 0x100381740 | FUN_100381740 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100381740(void)

{
  return ZEXT816(0x100f98360);
}



/* Address: 0x100381760 | FUN_100381760 */

undefined1  [16] FUN_100381760(void)

{
  return ZEXT816(0x100ecd7a8);
}



/* Address: 0x100381770 | thunk_FUN_100381774 */

void thunk_FUN_100381774(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1af8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43b40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43b40,&DAT_100ecd7a8);
  DAT_100fc1af8 = pTVar1;
  return;
}



/* Address: 0x100381774 | FUN_100381774 */

void FUN_100381774(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1af8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43b40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43b40,&DAT_100ecd7a8);
  DAT_100fc1af8 = pTVar1;
  return;
}



/* Address: 0x1003817b4 | thunk_FUN_1003817b8 */

void thunk_FUN_1003817b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1b00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43ad8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43ad8,&DAT_100ecd7a8);
  DAT_100fc1b00 = pTVar1;
  return;
}



/* Address: 0x1003817b8 | FUN_1003817b8 */

void FUN_1003817b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1b00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43ad8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43ad8,&DAT_100ecd7a8);
  DAT_100fc1b00 = pTVar1;
  return;
}



/* Address: 0x1003817f8 | thunk_FUN_1003817fc */

void thunk_FUN_1003817fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1b08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43ab0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43ab0,&DAT_100ecd7a8);
  DAT_100fc1b08 = pTVar1;
  return;
}



/* Address: 0x1003817fc | FUN_1003817fc */

void FUN_1003817fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1b08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43ab0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43ab0,&DAT_100ecd7a8);
  DAT_100fc1b08 = pTVar1;
  return;
}



/* Address: 0x10038183c | thunk_FUN_1001f5454 */

void thunk_FUN_1001f5454(undefined8 param_1)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_88 [72];
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(_Var1);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_10007145c(param_1,_Var1);
  return;
}



/* Address: 0x100381840 | FUN_100381840 */

void FUN_100381840(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381950);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_10037f6a0();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381954);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381958);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10038195c);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x10038195c | FUN_10038195c */

void FUN_10038195c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381a48);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_10037f834();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381a4c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381a50);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100381a54);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100381a54 | FUN_100381a54 */

void FUN_100381a54(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381b50);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_10037f93c();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381b54);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381b58);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fc1b90;
    FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
    _swift_arrayInitWithCopy(lVar5 + lVar7 * 8 + 0x20,param_1 + 0x20,uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100381b5c);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x100381b5c | FUN_100381b5c */

void FUN_100381b5c(undefined8 param_1)

{
  FUN_100381b84(param_1,FUN_10037fcc0,FUN_10030ce7c);
  return;
}



/* Address: 0x100381b70 | FUN_100381b70 */

void FUN_100381b70(undefined8 param_1)

{
  FUN_100381b84(param_1,FUN_10037fb74,PTR_typeMetadataAccessor_100ea71a8);
  return;
}



/* Address: 0x100381b84 | FUN_100381b84 */

void FUN_100381b84(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar6 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar6,uVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381c98);
    (*pcVar1)();
  }
  lVar5 = lVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar5 == 0) ||
     (uVar2 = *(ulong *)(lVar3 + 0x18) >> 1, (long)uVar2 < (long)(lVar6 + uVar4))) {
    (*param_2)();
    uVar2 = *(ulong *)(lVar5 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar3 = lVar5;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381c9c);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = 0;
    (*param_3)();
    if (uVar2 - lVar5 < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381ca0);
      (*pcVar1)();
    }
    uVar2 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    uVar2 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar3 + uVar2 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * lVar5,param_1 + uVar2,uVar4
               ,lVar6);
    _swift_bridgeObjectRelease(param_1);
    if (uVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100381ca4);
        (*pcVar1)();
      }
      *(ulong *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + uVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}



/* Address: 0x100381ca4 | FUN_100381ca4 */

void FUN_100381ca4(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381d90);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100380358();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381d94);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381d98);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,&DAT_100ecc2b0);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100381d9c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100381d9c | FUN_100381d9c */

void FUN_100381d9c(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong *unaff_x20;
  __int64 _Var5;
  ulong uVar6;
  ulong uVar7;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var5 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar4 = (undefined *)*unaff_x20;
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (!SCARRY8(lVar3,_Var5)) {
    FUN_10008c054(lVar3 + _Var5,1);
    uVar6 = *unaff_x20;
    uVar7 = uVar6 & 0xffffffffffffff8;
    FUN_100364458(uVar7 + *(long *)(uVar7 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar7 + 0x18) >> 1) - *(long *)(uVar7 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < _Var5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100381e84);
      (*pcVar2)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar7 + 0x10),(long)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100381e88);
        (*pcVar2)();
      }
      *(undefined **)(uVar7 + 0x10) = param_1 + *(long *)(uVar7 + 0x10);
    }
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100381e80);
  (*pcVar2)();
}



/* Address: 0x100381e88 | FUN_100381e88 */

void FUN_100381e88(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100381f78);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_100380600();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381f7c);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100381f80);
      (*pcVar1)();
    }
    uVar3 = 0;
    FUN_1002fc214(0);
    _swift_arrayInitWithCopy(lVar5 + lVar7 * 8 + 0x20,param_1 + 0x20,uVar6,uVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100381f84);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x100381f84 | FUN_100381f84 */

long FUN_100381f84(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Address: 0x100381fdc | FUN_100381fdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100381fdc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  Encoding EVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  NSDictionary *pNVar7;
  Data DVar8;
  undefined8 extraout_x1;
  ID unaff_x20;
  undefined8 uVar9;
  Encoding EVar10;
  undefined1 auVar11 [16];
  undefined8 local_d0 [15];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &DAT_100fc1ca8;
  FUN_1000037f0(&DAT_100fc1ca8,&DAT_100c43c18);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_100ea9040;
  uVar9 = *(undefined8 *)PTR__NSRTFTextDocumentType_100ea9108;
  uVar2 = 0;
  FUN_1002fbb80();
  *(undefined8 *)(puVar1 + 0x28) = uVar9;
                    /* WARNING: Load size is inaccurate */
  EVar10.unknown = *PTR__NSCharacterEncodingDocumentAttribute_100ea9018;
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  *(undefined **)(puVar1 + 0x48) = EVar10.unknown;
  EVar3 = Encoding::_typeMetadataAccessor();
  *(undefined **)(puVar1 + 0x68) = EVar3.unknown;
  FUN_10000cbb0(puVar1 + 0x50);
  Encoding::_get_utf8(EVar10);
  puVar4 = puVar1;
  FUN_1003c9194(puVar1);
  _swift_setDeallocating(puVar1);
  puVar5 = &DAT_100fc1cb0;
  FUN_1000037f0(&DAT_100fc1cb0,&DAT_100c43c20);
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar5);
  IVar6 = objc_stub::length(unaff_x20);
  FUN_1002fbb94(0);
  FUN_100383bf0();
  pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  local_d0[0] = 0;
  DVar8.unknown = (undefined *)objc_stub::FUN_100c008c0(unaff_x20,0,IVar6,pNVar7,local_d0);
  if (DVar8.unknown == (undefined *)0x0) {
    uVar2 = local_d0[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar2);
    DVar8.unknown = (undefined *)0x0;
    uVar2 = 0xf000000000000000;
  }
  else {
    uVar2 = extraout_x1;
    DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    auVar11._8_8_ = uVar2;
    auVar11._0_8_ = DVar8.unknown;
    return auVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003821e8 | FUN_1003821e8 */

void FUN_1003821e8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Address: 0x10038222c | FUN_10038222c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10038222c(ulong param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  Encoding using;
  code *pcVar7;
  ulong uVar8;
  ID IVar9;
  __int64 _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  Encoding EVar13;
  long lVar14;
  UTType UVar15;
  undefined *puVar16;
  void *pvVar17;
  NSString *pNVar18;
  undefined *puVar19;
  ID IVar20;
  undefined *puVar21;
  UTType UVar22;
  ulong uVar23;
  long extraout_x1;
  ulong extraout_x1_00;
  long extraout_x8;
  long lVar24;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  _ArrayBuffer _Var31;
  long lVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_210 [8];
  long local_208;
  undefined1 *local_200;
  undefined *local_1f8;
  ulong local_1f0;
  _ArrayBuffer local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  uint local_1c4;
  ulong local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_188;
  undefined *local_180;
  uint local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  Encoding local_158;
  long local_150;
  undefined *local_148;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  long local_128;
  ulong local_120;
  ulong local_118;
  long local_110;
  void *local_108;
  ID local_100;
  ulong local_f8;
  String local_f0;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  
  local_1c0 = param_1;
  local_180 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_188 + 0x40));
  local_200 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = (long)(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_208 = lVar24;
  local_148 = (undefined *)Encoding::_typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  local_158.unknown = (undefined *)(lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _Var31.unknown = *(undefined **)(unaff_x20 + 0x10);
  if ((ulong)_Var31.unknown >> 0x3e == 0) {
    uVar25 = *(ulong *)((_Var31.unknown & 0xffffffffffffff8U) + 0x10);
    local_1c4 = (uint)(1 < uVar25);
  }
  else {
    _Var2.unknown = _Var31.unknown & 0xffffffffffffff8U;
    if (((ulong)_Var31.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = _Var31.unknown;
    }
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    local_1c4 = (uint)(1 < _Var10);
    uVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar25 == 0) {
    local_174 = 1;
  }
  else {
    uVar30 = 0;
    do {
      if (((ulong)_Var31.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var31.unknown & 0xffffffffffffff8) + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1003823fc);
          (*pcVar7)();
        }
        uVar8 = *(ulong *)(_Var31.unknown + uVar30 * 8 + 0x20);
      }
      else {
        uVar8 = uVar30;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar30,_Var31);
      }
      uVar29 = uVar30 + 1;
      if (SCARRY8(uVar30,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003823f8);
        (*pcVar7)();
      }
      IVar9 = objc_stub::rawType(uVar8);
      if ((IVar9 == 5) || (IVar9 = objc_stub::rawType(uVar8), IVar9 == 4)) {
        local_174 = 0;
        goto LAB_100382438;
      }
      uVar30 = uVar30 + 1;
    } while (uVar29 != uVar25);
    local_174 = 1;
  }
LAB_100382438:
  puVar11 = (undefined *)0x0;
  FUN_100385598();
  _swift_allocObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar12 = 0xd000000000000017;
  FUN_1000d4624(0xd000000000000017,0x8000000100da1840);
  *(undefined8 *)(puVar11 + 0x10) = uVar12;
  local_1e0 = puVar11;
  if ((ulong)_Var31.unknown >> 0x3e == 0) {
    puVar11 = *(undefined **)((_Var31.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = _Var31.unknown & 0xffffffffffffff8U;
    if (((ulong)_Var31.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = _Var31.unknown;
    }
    puVar11 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar11 == (undefined *)0x0) {
    local_1a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_1d0 = (ulong)_Var31.unknown & 0xc000000000000001;
    local_160 = *(undefined8 *)(unaff_x20 + 0x18);
    local_1f0 = (ulong)_Var31.unknown & 0xffffffffffffff8;
    local_1f8 = _Var31.unknown + 0x20;
    uVar25 = 0x8000000100da3ce0;
    local_f8 = 0x8000000100d97ae0;
    uStack_168 = 0xc000000000000000;
    local_170 = 0;
    uStack_198 = 6;
    local_1a0 = 3;
    local_1a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_120 = 0x8000000100da3ce0;
    puVar16 = (undefined *)0x0;
    local_1e8.unknown = _Var31.unknown;
    local_1d8 = puVar11;
    do {
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (local_1d0 == 0) {
        if (*(undefined **)(local_1f0 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100383520);
          (*pcVar7)();
        }
        puVar21 = *(undefined **)(local_1f8 + (long)puVar16 * 8);
      }
      else {
        puVar21 = puVar16;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar16,local_1e8);
      }
      local_138 = puVar21;
      if (SCARRY8((long)puVar16,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100383518);
        (*pcVar7)();
      }
      local_90 = puVar11;
      _Var31.unknown = (undefined *)objc_stub::rawType(puVar21);
      FUN_100323594();
      local_1b8 = puVar16 + 1;
      if (((uint)_Var31.unknown & 0xff) == 5) {
LAB_1003825f8:
        if (((uint)local_1c0 >> 1 & 1) == 0) goto LAB_100382604;
LAB_100382628:
        FUN_10031bcdc();
      }
      else {
        _Var31.unknown = (undefined *)objc_stub::rawType(local_138);
        FUN_100323594();
        if (((uint)_Var31.unknown & 0xff) == 4) goto LAB_1003825f8;
        if ((local_1c0 & 1) != 0) goto LAB_100382628;
LAB_100382604:
        _Var31.unknown = local_138;
        FUN_100383d90();
      }
      local_1b0 = puVar19;
      if ((ulong)_Var31.unknown >> 0x3e == 0) {
        lVar24 = *(long *)(((ulong)_Var31.unknown & 0xffffffffffffff8) + 0x10);
        if (lVar24 == 0) goto LAB_10038308c;
LAB_100382654:
        uVar30 = 0;
        local_118 = (ulong)_Var31.unknown & 0xc000000000000001;
        local_140 = (ulong)_Var31.unknown & 0xffffffffffffff8;
        local_130 = _Var31.unknown;
        local_128 = lVar24;
        do {
          if (local_118 == 0) {
            if (*(ulong *)(local_140 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100383500);
              (*pcVar7)();
            }
            uVar8 = *(ulong *)(_Var31.unknown + uVar30 * 8 + 0x20);
          }
          else {
            uVar8 = uVar30;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar30,_Var31);
          }
          if (SCARRY8(uVar30,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1003834fc);
            (*pcVar7)();
          }
          local_110 = uVar30 + 1;
          FUN_100383574(local_160);
          local_100 = objc_stub::sourceApplication((ID)local_138);
          if (local_100 == 0) {
            local_f0 = (String)(ZEXT816(0xe000000000000000) << 0x40);
          }
          else {
            objc_stub::bundleIdentifier(local_100);
            local_f0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
          }
          using.unknown = local_158.unknown;
          local_108 = local_f0.bridgeObject;
          Encoding::_get_utf8((Encoding)0x0);
          FUN_10030cce0();
          uVar23 = 0;
          EVar13.unknown = using.unknown;
          (extension_Foundation)::Swift::StringProtocol::_data(using,false);
          (**(code **)(local_150 + 8))(using.unknown,local_148);
          lVar24 = _TtC9PasteCore14PasteboardItem::types;
          _swift_beginAccess(uVar8 + _TtC9PasteCore14PasteboardItem::types,&local_f0,0x21,0);
          uVar26 = *(ulong *)(uVar8 + lVar24);
          uVar29 = uVar26;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(uVar8 + lVar24) = uVar26;
          uVar28 = uVar26;
          if ((uVar29 & 1) == 0) {
            uVar28 = 0;
            FUN_10037f834(0,*(long *)(uVar26 + 0x10) + 1,1,uVar26);
            *(ulong *)(uVar8 + lVar24) = uVar28;
          }
          uVar29 = *(ulong *)(uVar28 + 0x10);
          uVar26 = uVar28;
          if (*(ulong *)(uVar28 + 0x18) >> 1 <= uVar29) {
            uVar26 = (ulong)(1 < *(ulong *)(uVar28 + 0x18));
            FUN_10037f834(uVar26,uVar29 + 1,1,uVar28);
          }
          *(ulong *)(uVar26 + 0x10) = uVar29 + 1;
          lVar32 = uVar26 + uVar29 * 0x10;
          *(undefined8 *)(lVar32 + 0x20) = 0xd000000000000017;
          *(ulong *)(lVar32 + 0x28) = uVar25;
          *(ulong *)(uVar8 + lVar24) = uVar26;
          _swift_endAccess(&local_f0);
          lVar32 = _TtC9PasteCore14PasteboardItem::dataByType;
          _swift_beginAccess(uVar8 + _TtC9PasteCore14PasteboardItem::dataByType,&local_f0,0x21,0);
          if (uVar23 >> 0x3c < 0xf) {
            FUN_1001037b4(EVar13.unknown,uVar23);
            uVar12 = *(undefined8 *)(uVar8 + lVar32);
            _swift_isUniquelyReferenced_nonNull_native();
            lVar27 = *(long *)(uVar8 + lVar32);
            uVar29 = 0xd000000000000017;
            local_98 = lVar27;
            FUN_100071370();
            uVar28 = (ulong)~(uint)uVar25 & 1;
            lVar14 = *(long *)(lVar27 + 0x10) + uVar28;
            if (SCARRY8(*(long *)(lVar27 + 0x10),uVar28)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100383508);
              (*pcVar7)();
            }
            if (*(long *)(lVar27 + 0x18) < lVar14) {
              FUN_10031d89c(lVar14,uVar12);
              uVar29 = 0xd000000000000017;
              uVar28 = local_120;
              FUN_100071370();
              if (((uint)uVar25 & 1) != ((uint)uVar28 & 1)) goto LAB_100383564;
            }
            else if ((int)uVar12 == 0) {
              FUN_10031ca10();
            }
            lVar14 = local_98;
            if ((uVar25 & 1) == 0) {
              lVar27 = local_98 + (uVar29 >> 6) * 8;
              *(ulong *)(lVar27 + 0x40) = *(ulong *)(lVar27 + 0x40) | 1L << (uVar29 & 0x3f);
              puVar1 = (undefined8 *)(*(long *)(local_98 + 0x30) + uVar29 * 0x10);
              *puVar1 = 0xd000000000000017;
              puVar1[1] = local_120;
              puVar1 = (undefined8 *)(*(long *)(local_98 + 0x38) + uVar29 * 0x10);
              *puVar1 = EVar13.unknown;
              puVar1[1] = uVar23;
              if (SCARRY8(*(long *)(local_98 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100383514);
                (*pcVar7)();
              }
              *(long *)(local_98 + 0x10) = *(long *)(local_98 + 0x10) + 1;
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(local_98 + 0x38) + uVar29 * 0x10);
              uVar12 = *puVar1;
              uVar3 = puVar1[1];
              *puVar1 = EVar13.unknown;
              puVar1[1] = uVar23;
              FUN_10003bf2c(uVar12,uVar3);
            }
            *(long *)(uVar8 + lVar32) = lVar14;
          }
          else {
            uVar12 = *(undefined8 *)(uVar8 + lVar32);
            _swift_bridgeObjectRetain(uVar12);
            lVar14 = -0x2fffffffffffffe9;
            FUN_100071370();
            _swift_bridgeObjectRelease(uVar12);
            if ((uVar25 & 1) != 0) {
              uVar25 = *(ulong *)(uVar8 + lVar32);
              _swift_isUniquelyReferenced_nonNull_native();
              local_98 = *(long *)(uVar8 + lVar32);
              if ((uVar25 & 1) == 0) {
                FUN_10031ca10();
              }
              lVar27 = local_98;
              _swift_bridgeObjectRelease
                        (*(undefined8 *)(*(long *)(local_98 + 0x30) + lVar14 * 0x10 + 8));
              puVar1 = (undefined8 *)(*(long *)(lVar27 + 0x38) + lVar14 * 0x10);
              uVar12 = *puVar1;
              uVar3 = puVar1[1];
              FUN_10031e9f4(lVar14,lVar27);
              *(long *)(uVar8 + lVar32) = lVar27;
              FUN_10003bf2c(uVar12,uVar3);
            }
          }
          _swift_endAccess(&local_f0);
          FUN_10003bf18(EVar13.unknown,uVar23);
          _swift_bridgeObjectRelease(local_108);
          _swift_beginAccess(uVar8 + lVar24,&local_f0,0x21,0);
          uVar28 = *(ulong *)(uVar8 + lVar24);
          uVar25 = uVar28;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(uVar8 + lVar24) = uVar28;
          uVar29 = uVar28;
          if ((uVar25 & 1) == 0) {
            uVar29 = 0;
            FUN_10037f834(0,*(long *)(uVar28 + 0x10) + 1,1,uVar28);
            *(ulong *)(uVar8 + lVar24) = uVar29;
          }
          uVar25 = local_120;
          uVar28 = *(ulong *)(uVar29 + 0x10);
          uVar23 = uVar29;
          if (*(ulong *)(uVar29 + 0x18) >> 1 <= uVar28) {
            uVar23 = (ulong)(1 < *(ulong *)(uVar29 + 0x18));
            FUN_10037f834(uVar23,uVar28 + 1,1,uVar29);
          }
          uVar29 = local_f8;
          *(ulong *)(uVar23 + 0x10) = uVar28 + 1;
          lVar14 = uVar23 + uVar28 * 0x10;
          uVar26 = 0xd000000000000011;
          *(undefined8 *)(lVar14 + 0x20) = 0xd000000000000011;
          *(ulong *)(lVar14 + 0x28) = local_f8;
          *(ulong *)(uVar8 + lVar24) = uVar23;
          _swift_endAccess(&local_f0);
          _swift_beginAccess(uVar8 + lVar32,&local_f0,0x21,0);
          uVar12 = *(undefined8 *)(uVar8 + lVar32);
          _swift_isUniquelyReferenced_nonNull_native();
          lVar14 = *(long *)(uVar8 + lVar32);
          *(undefined8 *)(uVar8 + lVar32) = 0x8000000000000000;
          uVar28 = uVar26;
          local_98 = lVar14;
          FUN_100071370();
          _Var31.unknown = local_130;
          uVar23 = (ulong)~(uint)uVar29 & 1;
          lVar24 = *(long *)(lVar14 + 0x10) + uVar23;
          if (SCARRY8(*(long *)(lVar14 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100383504);
            (*pcVar7)();
          }
          if (*(long *)(lVar14 + 0x18) < lVar24) {
            FUN_10031d89c(lVar24,uVar12);
            uVar23 = local_f8;
            FUN_100071370();
            uVar28 = uVar26;
            _Var31.unknown = local_130;
            if (((uint)uVar29 & 1) != ((uint)uVar23 & 1)) {
LAB_100383564:
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100383574);
              (*pcVar7)();
            }
          }
          else if ((int)uVar12 == 0) {
            FUN_10031ca10();
          }
          lVar14 = local_98;
          lVar24 = local_128;
          if ((uVar29 & 1) == 0) {
            lVar27 = local_98 + (uVar28 >> 6) * 8;
            *(ulong *)(lVar27 + 0x40) = *(ulong *)(lVar27 + 0x40) | 1L << (uVar28 & 0x3f);
            puVar1 = (undefined8 *)(*(long *)(local_98 + 0x30) + uVar28 * 0x10);
            *puVar1 = 0xd000000000000011;
            puVar1[1] = local_f8;
            puVar1 = (undefined8 *)(*(long *)(local_98 + 0x38) + uVar28 * 0x10);
            puVar1[1] = uStack_168;
            *puVar1 = local_170;
            if (SCARRY8(*(long *)(local_98 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10038350c);
              (*pcVar7)();
            }
            *(long *)(local_98 + 0x10) = *(long *)(local_98 + 0x10) + 1;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(local_98 + 0x38) + uVar28 * 0x10);
            uVar12 = *puVar1;
            uVar3 = puVar1[1];
            puVar1[1] = uStack_168;
            *puVar1 = local_170;
            FUN_10003bf2c(uVar12,uVar3);
          }
          *(long *)(uVar8 + lVar32) = lVar14;
          _swift_endAccess(&local_f0);
          uVar30 = uVar30 + 1;
        } while (local_110 != lVar24);
        if ((local_1c4 & 1) == 0) goto LAB_100383270;
        if (lVar24 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10038351c);
          (*pcVar7)();
        }
        lVar32 = 0;
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          if (local_118 == 0) {
            lVar14 = *(long *)(_Var31.unknown + lVar32 * 8 + 0x20);
          }
          else {
            lVar14 = lVar32;
            Swift::_ArrayBuffer::__getElementSlowPath(lVar32,_Var31);
          }
          if ((local_174 & 1) == 0) {
            UVar22.unknown = &DAT_100fbf8d8;
            FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
            bVar4 = *(byte *)(local_188 + 0x50);
            _swift_allocObject();
            *(undefined8 *)(UVar22.unknown + 0x18) = uStack_198;
            *(undefined8 *)(UVar22.unknown + 0x10) = local_1a0;
            UVar15 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar22);
            UVar15 = UniformTypeIdentifiers::UTType::get_rtfd(UVar15);
            UniformTypeIdentifiers::UTType::get_rtf(UVar15);
            UVar15.unknown = UVar22.unknown;
            FUN_10037ebdc(UVar22.unknown,lVar14);
            _swift_setDeallocating(UVar22.unknown);
            _swift_arrayDestroy(UVar22.unknown +
                                ((ulong)bVar4 + 0x20 & ((ulong)bVar4 ^ 0xffffffffffffffff)),3,
                                local_180);
            lVar24 = 0x20;
            _swift_deallocClassInstance(UVar22.unknown,0x20,7);
            if (UVar15.unknown == (undefined *)0x0) {
              FUN_10037c9a8();
              lVar14 = 0;
              if (lVar24 != 0) {
                puVar19 = &_OBJC_CLASS___NSAttributedString;
                _objc_allocWithZone();
                pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(lVar24);
                IVar9 = objc_stub::initWithString_((ID)puVar19,pNVar18);
                lVar14 = extraout_x1;
                if (IVar9 != 0) goto LAB_100382e4c;
              }
              FUN_10037c9a8();
              lVar24 = local_128;
              if (lVar14 == 0) goto LAB_100382ea0;
              puVar19 = &_OBJC_CLASS___NSAttributedString;
              _objc_allocWithZone();
              pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(lVar14);
              IVar9 = objc_stub::initWithString_((ID)puVar19,pNVar18);
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(0);
              uVar30 = *(ulong *)(((ulong)local_80 & 0xffffffffffffff8) + 0x10);
              uVar8 = *(ulong *)(((ulong)local_80 & 0xffffffffffffff8) + 0x18);
              if (uVar8 >> 1 <= uVar30) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar8,uVar30 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar30,IVar9);
            }
            else {
              puVar19 = &_OBJC_CLASS___NSMutableAttributedString;
              _objc_allocWithZone();
              IVar9 = objc_stub::initWithAttributedString_((ID)puVar19,UVar15.unknown);
              IVar20 = objc_stub::length((ID)UVar15.unknown);
              puVar19 = &DAT_100ecd878;
              _swift_allocObject(&DAT_100ecd878,0x18,7);
              *(ID *)(puVar19 + 0x10) = IVar9;
              puVar16 = &DAT_100ecd8a0;
              _swift_allocObject(&DAT_100ecd8a0,0x20,7);
              *(code **)(puVar16 + 0x10) = FUN_100309b24;
              *(undefined **)(puVar16 + 0x18) = puVar19;
              local_d0 = FUN_100215f00;
              local_f0.bridgeObject = (void *)0x42000000;
              local_f0.str = PTR___NSConcreteStackBlock_100ea82a0;
              local_e0 = FUN_100309738;
              puStack_d8 = &DAT_100ecd8b8;
              local_c8 = puVar16;
              pvVar17 = __Block_copy(&local_f0);
              puVar21 = local_c8;
              _swift_retain(puVar16);
              _swift_release(puVar21);
              objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar9,0,IVar20,0,pvVar17);
              __Block_release(pvVar17);
              puVar21 = puVar16;
              _swift_isEscapingClosureAtFileLocation(puVar16,"",0x9e,0x25,0x45,1);
              _swift_release(puVar19);
              _swift_release(puVar16);
              _Var31.unknown = local_130;
              uVar25 = local_120;
              if (((ulong)puVar21 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100383510);
                (*pcVar7)();
              }
LAB_100382e4c:
              lVar24 = local_128;
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              uVar30 = *(ulong *)(((ulong)local_80 & 0xffffffffffffff8) + 0x10);
              uVar8 = *(ulong *)(((ulong)local_80 & 0xffffffffffffff8) + 0x18);
              if (uVar8 >> 1 <= uVar30) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar8,uVar30 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar30,IVar9);
            }
            local_1a8 = local_80;
          }
          else {
            Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
            uVar30 = *(ulong *)(((ulong)local_90 & 0xffffffffffffff8) + 0x10);
            uVar8 = *(ulong *)(((ulong)local_90 & 0xffffffffffffff8) + 0x18);
            if (uVar8 >> 1 <= uVar30) {
              Swift::Array<undefined>::__createNewBuffer(1 < uVar8,uVar30 + 1,1);
            }
            Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar30,lVar14);
            puVar11 = local_90;
          }
LAB_100382ea0:
          lVar32 = lVar32 + 1;
        } while (lVar24 != lVar32);
      }
      else {
        _Var2.unknown = _Var31.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var31.unknown) {
          _Var2.unknown = _Var31.unknown;
        }
        lVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        if (lVar24 != 0) goto LAB_100382654;
LAB_10038308c:
        if ((local_1c4 & 1) == 0) {
LAB_100383270:
          puVar11 = &DAT_100fc1b88;
          FUN_1000037f0(&DAT_100fc1b88,&DAT_100c43be8);
          _swift_initStackObject();
          *(undefined8 *)(puVar11 + 0x18) = 2;
          *(undefined8 *)(puVar11 + 0x10) = 1;
          *(undefined **)(puVar11 + 0x20) = _Var31.unknown;
          FUN_100381a54();
          _swift_release(local_1e0);
          _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100eae0d8);
          return local_88;
        }
      }
      _swift_bridgeObjectRelease(_Var31.unknown);
      _swift_bridgeObjectRetain(puVar11);
      puVar19 = local_1b0;
      puVar16 = local_1b0;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar21 = puVar19;
      if (((ulong)puVar16 & 1) == 0) {
        puVar21 = (undefined *)0x0;
        FUN_10037f93c(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
      }
      puVar6 = local_1d8;
      uVar30 = *(ulong *)(puVar21 + 0x10);
      puVar19 = puVar21;
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar30) {
        puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar21 + 0x18));
        FUN_10037f93c(puVar19,uVar30 + 1,1,puVar21);
      }
      *(ulong *)(puVar19 + 0x10) = uVar30 + 1;
      *(undefined **)(puVar19 + uVar30 * 8 + 0x20) = puVar11;
      _swift_bridgeObjectRelease(puVar11);
      puVar16 = local_1b8;
      local_88 = puVar19;
    } while (local_1b8 != puVar6);
  }
  puVar11 = local_1a8;
  IVar9 = 10;
  FUN_100383a0c(10,0xe100000000000000,local_1a8);
  IVar20 = objc_stub::length(IVar9);
  if ((long)IVar20 < 1) {
    _swift_bridgeObjectRelease(puVar11);
    puVar16 = local_1e0;
  }
  else {
    IVar20 = 0;
    FUN_100381740();
    _objc_allocWithZone();
    puVar21 = (undefined *)objc_stub::init(IVar20);
    puVar16 = puVar21;
    uVar25 = extraout_x1_00;
    FUN_1003838bc();
    if ((((uint)local_1c0 >> 1 & 1) == 0) && (FUN_100381fdc(), uVar25 >> 0x3c < 0xf)) {
      UVar22.unknown = puVar16;
      local_1b0 = puVar19;
      FUN_1001037b4();
      lVar24 = local_208;
      UVar22 = UniformTypeIdentifiers::UTType::get_rtf(UVar22);
      SVar33 = UniformTypeIdentifiers::UTType::get_identifier(UVar22);
      pvVar17 = SVar33.bridgeObject;
      (**(code **)(local_188 + 8))(lVar24,local_180);
      lVar24 = _TtC9PasteCore14PasteboardItem::types;
      _swift_beginAccess(puVar21 + _TtC9PasteCore14PasteboardItem::types,&local_f0,0x21,0);
      uVar29 = *(ulong *)(puVar21 + lVar24);
      _swift_bridgeObjectRetain(pvVar17);
      uVar30 = uVar29;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(puVar21 + lVar24) = uVar29;
      uVar8 = uVar29;
      if ((uVar30 & 1) == 0) {
        uVar8 = 0;
        FUN_10037f834(0,*(long *)(uVar29 + 0x10) + 1,1,uVar29);
        *(ulong *)(puVar21 + lVar24) = uVar8;
      }
      uVar30 = *(ulong *)(uVar8 + 0x10);
      uVar29 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar30) {
        uVar29 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10037f834(uVar29,uVar30 + 1,1,uVar8);
      }
      *(ulong *)(uVar29 + 0x10) = uVar30 + 1;
      *(String *)(uVar29 + uVar30 * 0x10 + 0x20) = SVar33;
      *(ulong *)(puVar21 + lVar24) = uVar29;
      _swift_endAccess(&local_f0);
      lVar24 = _TtC9PasteCore14PasteboardItem::dataByType;
      _swift_beginAccess(puVar21 + _TtC9PasteCore14PasteboardItem::dataByType,&local_f0,0x21,0);
      FUN_10011da54(puVar16,uVar25);
      uVar12 = *(undefined8 *)(puVar21 + lVar24);
      _swift_isUniquelyReferenced_nonNull_native(uVar12);
      local_90 = *(undefined **)(puVar21 + lVar24);
      FUN_100380ebc(puVar16,uVar25,SVar33.str,pvVar17,uVar12);
      _swift_bridgeObjectRelease(pvVar17);
      *(undefined **)(puVar21 + lVar24) = local_90;
      _swift_endAccess(&local_f0);
      FUN_10003bf18(puVar16,uVar25);
      FUN_10003bf18(puVar16,uVar25);
      puVar19 = local_1b0;
      puVar11 = local_1a8;
    }
    else {
      objc_stub::string(IVar9);
      SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar5 = local_200;
      UVar22 = UniformTypeIdentifiers::UTType::get_utf8PlainText((UTType)0x0);
      SVar34 = UniformTypeIdentifiers::UTType::get_identifier(UVar22);
      (**(code **)(local_188 + 8))(puVar5,local_180);
      FUN_10037c4a8(SVar33.str,SVar33.bridgeObject,SVar34.str,SVar34.bridgeObject);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
    }
    puVar16 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 3;
    *(undefined8 *)(puVar16 + 0x10) = 1;
    *(undefined **)(puVar16 + 0x20) = puVar21;
    uVar25 = *(ulong *)(puVar19 + 0x10);
    puVar21 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)puVar21 == 0) || (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar25)) {
      local_88 = puVar19;
      FUN_10037f93c();
      puVar19 = puVar21;
    }
    local_88 = puVar19;
    FUN_100383c34(0,0,1,puVar16);
    _swift_bridgeObjectRelease(puVar11);
    _swift_release(local_1e0);
  }
  _swift_release(puVar16);
  return puVar19;
}



/* Address: 0x100383574 | FUN_100383574 */

void FUN_100383574(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  bool bVar14;
  long lVar15;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined *puVar16;
  
  lVar11 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_78,0,0);
  lVar12 = _TtC9PasteCore14PasteboardItem::dataByType;
  lVar15 = *(long *)(unaff_x20 + lVar11);
  uVar18 = *(ulong *)(lVar15 + 0x10);
  if (uVar18 != 0) {
    lVar21 = *(long *)(param_1 + 0x10);
    lVar1 = lVar15 + 0x20;
    _swift_bridgeObjectRetain();
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    uVar20 = 0;
    do {
      if (*(ulong *)(lVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1003838b0);
        (*pcVar13)();
      }
      plVar2 = (long *)(lVar1 + uVar20 * 0x10);
      puVar4 = (undefined *)*plVar2;
      puVar7 = (undefined *)plVar2[1];
      uVar20 = uVar20 + 1;
      puVar16 = puVar7;
      puStack_a0 = puVar4;
      local_98 = puVar7;
      _swift_bridgeObjectRetain(puVar7);
      puVar19 = (undefined8 *)(param_1 + 0x28);
      lVar22 = lVar21 + 1;
      do {
        lVar22 = lVar22 + -1;
        if (lVar22 == 0) {
          _swift_bridgeObjectRelease(puVar7);
          goto LAB_100383614;
        }
        local_88 = puVar19[-1];
        uStack_80 = *puVar19;
        FUN_10030cce0();
        bVar14 = (extension_Foundation)::Swift::StringProtocol::_contains
                           (&local_88,puVar10,puVar10,puVar16,puVar16);
        puVar16 = (undefined *)(ulong)bVar14;
        puVar19 = puVar19 + 2;
      } while (!bVar14);
      _swift_beginAccess(unaff_x20 + lVar11,&puStack_a0,0x21,0);
      uVar23 = *(ulong *)(unaff_x20 + lVar11);
      uVar24 = *(ulong *)(uVar23 + 0x10);
      if (uVar24 == 0) {
        uVar25 = 0;
        uVar26 = 0;
      }
      else {
        lVar22 = 0;
        uVar25 = 0;
        puVar19 = (undefined8 *)(uVar23 + 0x28);
        do {
          if (((undefined *)puVar19[-1] == puVar4 && (undefined *)*puVar19 == puVar7) ||
             (bVar14 = Swift::_stringCompareWithSmolCheck
                                 ((undefined *)puVar19[-1],(undefined *)*puVar19,
                                  (_StringComparisonResult)(__int8)puVar4), bVar14)) {
            uVar26 = uVar25 + 1;
            uVar24 = *(ulong *)(uVar23 + 0x10);
            if (uVar24 - 1 != uVar25) {
              do {
                if (uVar24 <= uVar26) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x1003838ac);
                  (*pcVar13)();
                }
                _Var5.unknown = *(undefined **)(uVar23 + lVar22 + 0x30);
                _Var8.unknown = *(undefined **)(uVar23 + lVar22 + 0x38);
                if ((_Var5.unknown != puVar4 || _Var8.unknown != puVar7) &&
                   (bVar14 = Swift::_stringCompareWithSmolCheck
                                       (_Var5,_Var8,(_StringComparisonResult)(__int8)puVar4),
                   !bVar14)) {
                  if (uVar26 != uVar25) {
                    if (uVar24 <= uVar25) {
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x1003838b8);
                      (*pcVar13)();
                    }
                    puVar19 = (undefined8 *)(uVar23 + 0x20 + uVar25 * 0x10);
                    uVar6 = *puVar19;
                    uVar9 = puVar19[1];
                    _swift_bridgeObjectRetain(uVar9);
                    _swift_bridgeObjectRetain(_Var8.unknown);
                    uVar24 = uVar23;
                    _swift_isUniquelyReferenced_nonNull_native();
                    *(ulong *)(unaff_x20 + lVar11) = uVar23;
                    if ((uVar24 & 1) == 0) {
                      FUN_10038139c();
                      *(ulong *)(unaff_x20 + lVar11) = uVar23;
                    }
                    lVar3 = uVar23 + uVar25 * 0x10;
                    uVar17 = *(undefined8 *)(lVar3 + 0x28);
                    *(undefined **)(lVar3 + 0x20) = _Var5.unknown;
                    *(undefined **)(lVar3 + 0x28) = _Var8.unknown;
                    _swift_bridgeObjectRelease(uVar17);
                    *(ulong *)(unaff_x20 + lVar11) = uVar23;
                    if (*(ulong *)(uVar23 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x1003838bc);
                      (*pcVar13)();
                    }
                    lVar3 = uVar23 + lVar22;
                    uVar17 = *(undefined8 *)(lVar3 + 0x38);
                    *(undefined8 *)(lVar3 + 0x30) = uVar6;
                    *(undefined8 *)(lVar3 + 0x38) = uVar9;
                    _swift_bridgeObjectRelease(uVar17);
                    *(ulong *)(unaff_x20 + lVar11) = uVar23;
                  }
                  uVar25 = uVar25 + 1;
                }
                uVar26 = uVar26 + 1;
                uVar24 = *(ulong *)(uVar23 + 0x10);
                lVar22 = lVar22 + 0x10;
              } while (uVar26 != uVar24);
            }
            goto LAB_100383718;
          }
          puVar19 = puVar19 + 2;
          uVar25 = uVar25 + 1;
          lVar22 = lVar22 + 0x10;
        } while (uVar24 != uVar25);
        uVar26 = *(ulong *)(uVar23 + 0x10);
        uVar25 = uVar24;
LAB_100383718:
        if ((long)uVar26 < (long)uVar25) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1003838b4);
          (*pcVar13)();
        }
      }
      FUN_1003813b0(uVar25,uVar26);
      _swift_endAccess(&puStack_a0);
      _swift_beginAccess(unaff_x20 + lVar12,&puStack_a0,0x21,0);
      FUN_100380b90(&local_88,puVar4,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      FUN_10003bf18(local_88,uStack_80);
      _swift_endAccess(&puStack_a0);
LAB_100383614:
    } while (uVar20 != uVar18);
    _swift_bridgeObjectRelease();
  }
  return;
}



/* Address: 0x1003838bc | FUN_1003838bc */

void FUN_1003838bc(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_58,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar2);
  uVar3 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar2) = uVar7;
  uVar5 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
    FUN_10037f834(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + lVar2) = uVar5;
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_10037f834(uVar7,uVar3 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
  lVar1 = uVar7 + uVar3 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(lVar1 + 0x28) = 0x8000000100d97ae0;
  *(ulong *)(unaff_x20 + lVar2) = uVar7;
  _swift_endAccess(auStack_58);
  lVar2 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_58,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_100380ebc(0,0xc000000000000000,0xd000000000000011,0x8000000100d97ae0,uVar4);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x100383a0c | FUN_100383a0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100383a0c(undefined8 param_1,undefined8 param_2,_ArrayBuffer param_3)

{
  long lVar1;
  ulong uVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  undefined *puVar5;
  ID self;
  ulong uVar6;
  NSString *pNVar7;
  ID IVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  String SVar12;
  
  puVar5 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar5);
  if ((ulong)param_3.unknown >> 0x3e == 0) {
    lVar10 = *(long *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = param_3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_3.unknown) {
      _Var3.unknown = param_3.unknown;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar10 != 0) {
    uVar11 = 0;
    do {
      if (((ulong)param_3.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100383b64);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_3.unknown + uVar11 * 8 + 0x20);
      }
      else {
        uVar6 = uVar11;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar11,param_3);
      }
      lVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100383b60);
        (*pcVar4)();
      }
      objc_stub::string(self);
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar9 = SVar12.bridgeObject;
      _swift_bridgeObjectRelease(pvVar9);
      uVar2 = (ulong)SVar12.str & 0xffffffffffff;
      if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)pvVar9 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        puVar5 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar8 = objc_stub::initWithString_((ID)puVar5,pNVar7);
        objc_stub::appendAttributedString_(self,IVar8);
      }
      objc_stub::appendAttributedString_(self,uVar6);
      uVar11 = uVar11 + 1;
    } while (lVar1 != lVar10);
  }
  return self;
}



/* Address: 0x100383ba0 | FUN_100383ba0 */

void FUN_100383ba0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100383bc4 | FUN_100383bc4 */

void FUN_100383bc4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100383bf0 | FUN_100383bf0 */

void FUN_100383bf0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbde38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002fbb94(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3fb20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3fb20,uVar1);
  DAT_100fbde38 = pTVar2;
  return;
}



/* Address: 0x100383c34 | FUN_100383c34 */

void FUN_100383c34(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100383d10);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  puVar1 = (undefined8 *)(lVar8 + 0x20 + param_1 * 8);
  puVar7 = &DAT_100fc1b90;
  FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
  _swift_arrayDestroy(puVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100383d14);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100383d18);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(lVar8 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      _memmove(puVar2,puVar3,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100383d1c);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    _swift_bridgeObjectRetain(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100383d20);
      (*pcVar6)();
    }
  }
  return;
}



/* Address: 0x100383d20 | FUN_100383d20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100383d20(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100383d44 | FUN_100383d44 */

void FUN_100383d44(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100383d54 | FUN_100383d54 */

void FUN_100383d54(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100383d68 | FUN_100383d68 */

void FUN_100383d68(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100383d70 | FUN_100383d70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100383d70(void)

{
  return ZEXT816(0x100fc1d30);
}



/* Address: 0x100383d90 | FUN_100383d90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100383d90(ID param_1)

{
  uint uVar1;
  ID IVar2;
  
  IVar2 = objc_stub::rawType(param_1);
  uVar1 = (uint)IVar2;
  FUN_100323594();
  if ((uVar1 & 0xff) == 1) {
    FUN_100383df4();
    return param_1;
  }
  IVar2 = objc_stub::data(param_1);
  FUN_10031b218(IVar2);
  return IVar2;
}



/* Address: 0x100383df4 | FUN_100383df4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100384558) */

_ArrayBuffer FUN_100383df4(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  Data DVar3;
  undefined8 uVar4;
  byte bVar5;
  _ArrayBuffer _Var6;
  undefined1 *puVar7;
  char *pcVar8;
  void *pvVar9;
  bool bVar10;
  UTType UVar11;
  Date DVar12;
  URL UVar13;
  undefined *puVar14;
  UTType UVar15;
  UTType UVar16;
  undefined *self;
  ID IVar17;
  NSString *pNVar18;
  Date DVar19;
  NSDate *pNVar20;
  ulong uVar21;
  URL UVar22;
  void *pvVar23;
  Date DVar24;
  long extraout_x8;
  long lVar25;
  long extraout_x8_00;
  long lVar26;
  long lVar27;
  long extraout_x8_01;
  undefined *puVar28;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar29;
  URL to;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  UTType conformingTo;
  long lVar35;
  long lVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  undefined1 auStack_190 [8];
  undefined *local_188;
  ID local_180;
  _ArrayBuffer local_178;
  undefined1 *local_170;
  char *local_168;
  char *local_98;
  void *pvStack_90;
  
  UVar11 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar35 = *(long *)(UVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar35 + 0x40));
  local_170 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  conformingTo.unknown = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = (long)conformingTo.unknown - extraout_x12_00;
  puVar14 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  puVar29 = (undefined *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = (long)puVar29 - extraout_x12_01;
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar27 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  puVar28 = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar14 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)puVar28 - extraout_x8_02;
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar36 = *(long *)(UVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar36 + 0x40));
  to.unknown = (undefined *)(lVar30 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_100384824(lVar30);
  lVar33 = lVar30;
  (**(code **)(lVar36 + 0x30))(lVar30,1,UVar13.unknown);
  if ((int)lVar33 == 1) {
    FUN_100005808(lVar30,&DAT_100fc1a40,&DAT_100c40660);
    puVar14 = (undefined *)objc_stub::data(param_1);
    FUN_10031b218(puVar14);
    local_178.unknown = puVar14;
  }
  else {
    (**(code **)(lVar36 + 0x20))((long)to.unknown - extraout_x12_02,lVar30,UVar13.unknown);
    UVar15.unknown = &DAT_100fbf8d8;
    FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
    lVar33 = *(long *)(lVar35 + 0x48);
    bVar5 = *(byte *)(lVar35 + 0x50);
    _swift_allocObject();
    local_188 = UVar15.unknown;
    UVar16 = UniformTypeIdentifiers::UTType::get_png(UVar15);
    UVar16 = UniformTypeIdentifiers::UTType::get_jpeg(UVar16);
    UVar16 = UniformTypeIdentifiers::UTType::get_heic(UVar16);
    UniformTypeIdentifiers::UTType::get_tiff(UVar16);
    puVar14 = (undefined *)objc_stub::data(param_1);
    FUN_10031b218();
    self = &_OBJC_CLASS___NSDateFormatter;
    local_178.unknown = puVar14;
    _objc_allocWithZone();
    IVar17 = objc_stub::init((ID)self);
    pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_180 = IVar17;
    objc_stub::setDateFormat_(IVar17);
    local_98 = (char *)0x0;
    pvStack_90 = (void *)0xe000000000000000;
    IVar17 = objc_stub::sourceApplication(param_1);
    if (IVar17 == 0) {
      SVar37.bridgeObject = &DAT_e500000000000000;
      SVar37.str = (char *)0x6574736150;
    }
    else {
      objc_stub::name(IVar17);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    SVar40.bridgeObject = param_4;
    SVar40.str = (char *)pNVar18;
    Swift::String::append(SVar37,SVar40);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar39.bridgeObject = (void *)0xe100000000000000;
    SVar39.str = (char *)0x20;
    SVar41.bridgeObject = param_4;
    SVar41.str = (char *)pNVar18;
    Swift::String::append(SVar39,SVar41);
    DVar19.unknown = (undefined *)objc_stub::timestamp(param_1);
    if (DVar19.unknown != (undefined *)0x0) {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar19);
    }
    DVar24 = DVar12;
    (**(code **)(lVar27 + 0x38))(lVar26,DVar19.unknown == (undefined *)0x0,1);
    FUN_100354148(lVar26,puVar29);
    pcVar31 = *(code **)(lVar27 + 0x30);
    DVar19.unknown = puVar29;
    (*pcVar31)(puVar29,1,DVar12.unknown);
    if ((int)DVar19.unknown == 1) {
      Foundation::Date::get_now(DVar19);
      DVar19.unknown = puVar29;
      (*pcVar31)(puVar29,1,DVar12.unknown);
      if ((int)DVar19.unknown != 1) {
        FUN_100005808(puVar29,&DAT_100fbe6e8,&DAT_100c43250);
        DVar19.unknown = puVar29;
      }
    }
    else {
      DVar19.unknown = puVar28;
      (**(code **)(lVar27 + 0x20))(puVar28,puVar29,DVar12.unknown);
    }
    pNVar20 = Foundation::Date::_bridgeToObjectiveC(DVar19);
    (**(code **)(lVar27 + 8))(puVar28,DVar12.unknown);
    objc_stub::stringFromDate_(local_180);
    SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar42.bridgeObject = DVar24.unknown;
    SVar42.str = (char *)pNVar20;
    Swift::String::append(SVar37,SVar42);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    pvVar9 = pvStack_90;
    pcVar8 = local_98;
    if ((ulong)local_178.unknown >> 0x3e == 0) {
      uVar32 = *(ulong *)(((ulong)local_178.unknown & 0xffffffffffffff8) + 0x10);
      _Var6.unknown = local_178.unknown;
    }
    else {
      _Var2.unknown = local_178.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_178.unknown) {
        _Var2.unknown = local_178.unknown;
      }
      uVar32 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      _Var6.unknown = local_178.unknown;
    }
    local_178.unknown = _Var6.unknown;
    if (uVar32 != 0) {
      uVar34 = 0;
      local_168 = "yyyy-MM-dd HH.mm.ss";
      do {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
            pcVar31 = (code *)SoftwareBreakpoint(1,0x100384760);
            (*pcVar31)();
          }
          uVar21 = *(ulong *)(_Var6.unknown + uVar34 * 8 + 0x20);
        }
        else {
          uVar21 = uVar34;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar34,local_178);
        }
        lVar26 = _TtC9PasteCore14PasteboardItem::dataByType;
        bVar10 = SCARRY8(uVar34,1);
        uVar34 = uVar34 + 1;
        if (bVar10) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x10038475c);
          (*pcVar31)();
        }
        pcVar31 = *(code **)(lVar35 + 0x10);
        lVar27 = 4;
        puVar14 = UVar15.unknown + ((ulong)bVar5 + 0x20 & ((ulong)bVar5 ^ 0xffffffffffffffff));
        do {
          (*pcVar31)(lVar25,puVar14,UVar11.unknown);
          UVar16.unknown = conformingTo.unknown;
          (**(code **)(lVar35 + 0x20))(conformingTo.unknown,lVar25,UVar11.unknown);
          SVar37 = UniformTypeIdentifiers::UTType::get_identifier(UVar16);
          pvVar23 = SVar37.bridgeObject;
          _swift_beginAccess(uVar21 + lVar26,&local_98,0x20,0);
          lVar30 = *(long *)(uVar21 + lVar26);
          if (*(long *)(lVar30 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar30);
            FUN_100071370();
            if (((ulong)SVar37.bridgeObject & 1) != 0) {
              puVar1 = (undefined8 *)(*(long *)(lVar30 + 0x38) + (long)SVar37.str * 0x10);
              DVar3.unknown = (undefined *)*puVar1;
              uVar4 = puVar1[1];
              FUN_1001037b4(DVar3.unknown,uVar4);
              _swift_endAccess(&local_98);
              _swift_bridgeObjectRelease(pvVar23);
              _swift_bridgeObjectRelease(lVar30);
              SVar38.bridgeObject = pvVar9;
              SVar38.str = pcVar8;
              (extension_UniformTypeIdentifiers)::Foundation::URL::appendingPathComponent
                        (SVar38,conformingTo);
              UVar22.unknown = to.unknown;
              Foundation::Data::_write(to,(NSDataWritingOptions)0x0,DVar3);
              SVar37 = Foundation::URL::get_absoluteString(UVar22);
              puVar7 = local_170;
              UVar16 = UniformTypeIdentifiers::UTType::get_fileURL((UTType)SVar37.str);
              SVar39 = UniformTypeIdentifiers::UTType::get_identifier(UVar16);
              pcVar31 = *(code **)(lVar35 + 8);
              (*pcVar31)(puVar7,UVar11.unknown);
              FUN_10037c4a8(SVar37.str,SVar37.bridgeObject,SVar39.str,SVar39.bridgeObject);
              FUN_10003bf2c(DVar3.unknown,uVar4);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              _swift_bridgeObjectRelease(SVar39.bridgeObject);
              (**(code **)(lVar36 + 8))(to.unknown,UVar13.unknown);
              (*pcVar31)(conformingTo.unknown,UVar11.unknown);
              break;
            }
            _swift_bridgeObjectRelease(lVar30);
          }
          _swift_endAccess(&local_98);
          _swift_bridgeObjectRelease(pvVar23);
          (**(code **)(lVar35 + 8))(conformingTo.unknown,UVar11.unknown);
          puVar14 = puVar14 + lVar33;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      } while (uVar34 != uVar32);
    }
    _swift_bridgeObjectRelease(pvVar9);
    puVar14 = local_188;
    _swift_setDeallocating(local_188);
    _swift_arrayDestroy(UVar15.unknown + ((ulong)bVar5 + 0x20 & ((ulong)bVar5 ^ 0xffffffffffffffff))
                        ,4,UVar11.unknown);
    _swift_deallocClassInstance(puVar14,0x20,7);
    FUN_100384aac();
    (**(code **)(lVar36 + 8))((long)to.unknown - extraout_x12_02,UVar13.unknown);
  }
  return (_ArrayBuffer)local_178.unknown;
}



/* Address: 0x100384808 | FUN_100384808 */

void FUN_100384808(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100384824 | FUN_100384824 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100384824(undefined8 param_1,undefined8 param_2,undefined8 param_3,URL param_4)

{
  undefined8 uVar1;
  bool bVar2;
  URL UVar3;
  ID IVar4;
  URL UVar5;
  URL UVar6;
  NSURL *pNVar7;
  undefined8 uVar8;
  _StringGuts _Var9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined auStack_d0 [8];
  char local_c8 [24];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90 [3];
  undefined *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  UVar6.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar4 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = (undefined *)objc_stub::temporaryDirectory(IVar4);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  SVar14.bridgeObject = &DAT_e600000000000000;
  SVar14.str = (char *)0x736567616d69;
  Foundation::URL::appendingPathComponent(SVar14,param_4);
  (**(code **)(lVar12 + 8))(UVar6.unknown,UVar3.unknown);
  bVar2 = Foundation::URL::get_hasDirectoryPath(UVar6);
  if (!bVar2) {
    UVar5.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    local_90[0] = 0;
    pvVar11 = (void *)0x0;
    IVar4 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      ((ID)UVar5.unknown,pNVar7,0,0,local_90);
    if ((int)IVar4 == 0) {
      uVar8 = local_90[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_1000d468c(local_90);
      _Var9.unknown = local_78;
      FUN_100004640(local_90);
      local_a8 = 0;
      uStack_a0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x33,_Var9);
      SVar13.bridgeObject = (void *)0x8000000100da3d90;
      SVar13.str = (char *)0xd000000000000031;
      SVar15.bridgeObject = pvVar11;
      SVar15.str = (char *)pNVar7;
      Swift::String::append(SVar13,SVar15);
      pcVar10 = local_c8;
      _swift_getErrorValue(uVar8,auStack_b0);
      SVar14 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar16.bridgeObject = pvVar11;
      SVar16.str = pcVar10;
      Swift::String::append(SVar14,SVar16);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      uVar1 = uStack_a0;
      FUN_1000d4e0c(local_a8,uStack_a0,local_78,uStack_70);
      _swift_errorRelease(uVar8);
      _swift_bridgeObjectRelease(uVar1);
      FUN_100004594(local_90);
    }
  }
  (**(code **)(lVar12 + 0x38))(param_1,0,1,UVar3.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


