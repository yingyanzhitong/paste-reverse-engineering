/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f0914 | FUN_1000f0914 */

void FUN_1000f0914(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar3 = &DAT_100fadc58;
  lVar1 = 0x13f;
  FUN_1000f0a38(0x13f,&DAT_100fadc58,PTR___type_metadata_for_Swift_String_100eac208);
  if (puVar3 < (undefined *)0x40) {
    local_80 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_100fadc60;
    lVar1 = 0x13f;
    FUN_1000f0a38(0x13f,&DAT_100fadc60,&DAT_100eb6980);
    if (puVar3 < (undefined *)0x40) {
      local_78 = *(long *)(lVar1 + -8) + 0x40;
      puVar3 = &DAT_100fadc68;
      lVar1 = 0x13f;
      FUN_1000f0a38(0x13f,&DAT_100fadc68,PTR___type_metadata_for_Swift_Bool_100eac570);
      if (puVar3 < (undefined *)0x40) {
        lVar1 = *(long *)(lVar1 + -8) + 0x40;
        lVar2 = 0x13f;
        local_70 = lVar1;
        FUN_1000f0a7c();
        if (puVar3 < (undefined *)0x40) {
          local_68 = *(long *)(lVar2 + -8) + 0x40;
          local_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
          local_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
          puStack_30 = &DAT_100c2cff8;
          local_28 = &DAT_100c2d010;
          lStack_60 = lVar1;
          puStack_50 = local_58;
          local_48 = local_58;
          puStack_40 = local_58;
          _swift_updateClassMetadata2(param_1,0x100,0xc,&local_80,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Address: 0x1000f0a38 | FUN_1000f0a38 */

void FUN_1000f0a38(undefined8 param_1,long *param_2,long param_3)

{
  Published PVar1;
  
  if (*param_2 != 0) {
    return;
  }
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (param_3 == 0) {
    *param_2 = (long)PVar1.unknown;
  }
  return;
}



/* Address: 0x1000f0a7c | FUN_1000f0a7c */

void FUN_1000f0a7c(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fadc70.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fad210;
    FUN_100005c24(&DAT_100fad210,&DAT_100c2c100);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fadc70 = PVar2;
    }
  }
  return;
}



/* Address: 0x1000f0adc | FUN_1000f0adc */

void FUN_1000f0adc(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_release(*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Address: 0x1000f0b24 | FUN_1000f0b24 */

undefined8 * FUN_1000f0b24(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    uVar2 = param_2[5];
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[5] = uVar2;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    _swift_retain(uVar2);
    return param_1;
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  return param_1;
}



/* Address: 0x1000f0bb0 | FUN_1000f0bb0 */

undefined8 * FUN_1000f0bb0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar2 = param_2[3];
      param_1[3] = uVar2;
      uVar3 = param_2[5];
      uVar4 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(uVar3);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      param_1[2] = param_2[2];
      uVar2 = param_1[3];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      uVar3 = param_1[5];
      uVar2 = param_2[5];
      uVar4 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      _swift_retain(uVar2);
      _swift_release(uVar3);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[3]);
    _swift_release(param_1[5]);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x1000f0cd0 | FUN_1000f0cd0 */

void FUN_1000f0cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f0ce4 | FUN_1000f0ce4 */

undefined8 * FUN_1000f0ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  if (uVar2 < 0xffffffff) {
    uVar1 = *param_2;
    uVar5 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar5;
    param_1[2] = uVar3;
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
  }
  else {
    uVar4 = param_2[1];
    if (uVar4 < 0xffffffff) {
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(param_1[3]);
      _swift_release(param_1[5]);
      uVar1 = *param_2;
      uVar5 = param_2[3];
      uVar3 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      param_1[3] = uVar5;
      param_1[2] = uVar3;
      uVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar2);
      param_1[2] = param_2[2];
      _swift_bridgeObjectRelease(param_1[3]);
      uVar3 = param_2[5];
      uVar1 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar1;
      uVar1 = param_1[5];
      param_1[5] = uVar3;
      _swift_release(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1000f0da4 | FUN_1000f0da4 */

int FUN_1000f0da4(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Address: 0x1000f0df8 | FUN_1000f0df8 */

void FUN_1000f0df8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return;
}



/* Address: 0x1000f0e5c | FUN_1000f0e5c */

int FUN_1000f0e5c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000f0e74 | FUN_1000f0e74 */

void FUN_1000f0e74(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
  }
  else if (param_2 != 0) {
    param_1[1] = (ulong)(param_2 - 1);
    return;
  }
  return;
}



/* Address: 0x1000f0ea4 | FUN_1000f0ea4 */

undefined1  [16] FUN_1000f0ea4(void)

{
  return ZEXT816(0x100eb6980);
}



/* Address: 0x1000f0eb4 | FUN_1000f0eb4 */

void FUN_1000f0eb4(undefined8 *param_1)

{
  ObservableObjectPublisher *pOVar1;
  
  FUN_1000f08dc(0);
  pOVar1 = (extension_Combine)::Combine::ObservableObject::_get_objectWillChange();
  *param_1 = pOVar1;
  return;
}



/* Address: 0x1000f0ef0 | FUN_1000f0ef0 */

void FUN_1000f0ef0(void)

{
  DAT_100faded8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x1000f0f24 | FUN_1000f0f24 */

void FUN_1000f0f24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1000f0f30 | FUN_1000f0f30 */

bool FUN_1000f0f30(long param_1,long param_2)

{
  bool bVar1;
  
  if (*(undefined **)(param_1 + 0x10) != *(undefined **)(param_2 + 0x10) ||
      *(undefined **)(param_1 + 0x18) != *(undefined **)(param_2 + 0x18)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(param_1 + 0x10),
                       (_StringGuts)*(undefined **)(param_1 + 0x18),
                       (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10));
    return bVar1;
  }
  return true;
}



/* Address: 0x1000f0f60 | FUN_1000f0f60 */

void FUN_1000f0f60(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  puVar2 = &DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000f0fc8 | thunk_FUN_1000f0f60 */

void thunk_FUN_1000f0f60(void)

{
  FUN_1000f0f60();
  return;
}



/* Address: 0x1000f0fcc | FUN_1000f0fcc */

void FUN_1000f0fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 local_90;
  Published *pPStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  pPVar4 = (Published *)param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar9 = *param_2;
  puVar7 = &DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  puVar8 = &DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  local_90 = uVar1;
  pPStack_88 = pPVar4;
  local_80 = uVar2;
  uStack_78 = uVar5;
  local_70 = uVar3;
  uStack_68 = uVar6;
  _swift_retain(uVar9);
  FUN_1000f1a5c(uVar1,pPVar4,uVar2,uVar5,uVar3,uVar6);
  Combine::Published::_set_subscript(pPVar4,&local_90,uVar9,puVar7,puVar8);
  return;
}



/* Address: 0x1000f1080 | thunk_FUN_1000f0fcc */

void thunk_FUN_1000f0fcc(void)

{
  FUN_1000f0fcc();
  return;
}



/* Address: 0x1000f1084 | FUN_1000f1084 */

void FUN_1000f1084(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000f10a8 | FUN_1000f10a8 */

void FUN_1000f10a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1000eff38(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000f1114 | FUN_1000f1114 */

void FUN_1000f1114(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2d1e0;
  _swift_getKeyPath(&DAT_100c2d1e0);
  puVar2 = &DAT_100c2d208;
  _swift_getKeyPath(&DAT_100c2d208);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000f117c | FUN_1000f117c */

void FUN_1000f117c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published *pPVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pPVar5 = (Published *)*param_2;
  puVar3 = &DAT_100c2d1e0;
  _swift_getKeyPath(&DAT_100c2d1e0);
  puVar4 = &DAT_100c2d208;
  _swift_getKeyPath(&DAT_100c2d208);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript(pPVar5,&local_50,pPVar5,puVar3,puVar4);
  return;
}



/* Address: 0x1000f11fc | FUN_1000f11fc */

void FUN_1000f11fc(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000f1210 | FUN_1000f1210 */

void FUN_1000f1210(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x1000f1224 | FUN_1000f1224 */

void FUN_1000f1224(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined1 local_31;
  
  uVar1 = *param_1;
  pPVar2 = (Published *)*param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_31 = uVar1;
  _swift_retain(pPVar2);
  Combine::Published::_set_subscript(pPVar2,&local_31,pPVar2,param_5,param_6);
  return;
}



/* Address: 0x1000f1290 | FUN_1000f1290 */

void FUN_1000f1290(undefined8 param_1,AnyHashable param_2)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(unaff_x20 + 0x28),param_2);
  FUN_1000f12c0(param_1,_Var1);
  return;
}



/* Address: 0x1000f12c0 | FUN_1000f12c0 */

undefined1  [16] FUN_1000f12c0(AnyHashable param_1,ulong param_2,AnyHashable param_3)

{
  bool bVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      FUN_1000f1c9c(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      bVar1 = Swift::AnyHashable::___infix((AnyHashable)auStack_78,param_1,param_3);
      uVar3 = (ulong)bVar1;
      FUN_100089674(auStack_78);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Address: 0x1000f137c | FUN_1000f137c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f1508 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f137c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  Published *pPVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong auStack_e0 [2];
  undefined *puStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  Published *pPStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_100fad470;
  local_c8 = param_1;
  local_b0 = param_2;
  uStack_a8 = param_3;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fadf00;
  local_a0 = (ulong *)((long)auStack_e0 - extraout_x8);
  FUN_1000037f0(&DAT_100fadf00,&DAT_100c2d2d0);
  local_c0 = *(long *)(puVar5 + -8);
  puStack_b8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)auStack_e0 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100fadef8;
  FUN_1000037f0(&DAT_100fadef8,&DAT_100c2d2c8);
  auStack_e0[1] = *(ulong *)(puVar5 + -8);
  puStack_d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(auStack_e0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar16 - extraout_x8_01;
  puVar5 = &DAT_100fadef0;
  FUN_1000037f0(&DAT_100fadef0,&DAT_100c2d2c0);
  lVar12 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar17 - extraout_x8_02;
  puVar6 = &DAT_100fadee8;
  FUN_1000037f0(&DAT_100fadee8,&DAT_100c2d2b8);
  lVar15 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::_licenseKey;
  local_90 = 0;
  pPStack_88 = (Published *)0xe000000000000000;
  Combine::Published::init
            (lVar11 - extraout_x8_03,puVar6,PTR___type_metadata_for_Swift_String_100eac208);
  uVar3 = local_c8;
  (**(code **)(lVar15 + 0x20))(unaff_x20 + lVar8,lVar11 - extraout_x8_03,puVar6);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::_state;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  pPStack_88 = (Published *)0x0;
  local_90 = 0;
  Combine::Published::init(lVar11,puVar6,&DAT_100eb6980);
  (**(code **)(lVar12 + 0x20))(unaff_x20 + lVar8,lVar11,puVar5);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::_isEnteringKey;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_90 = local_90 & 0xffffffffffffff00;
  Combine::Published::init(lVar17,puVar6,PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar6 = puStack_d0;
  pcVar13 = *(code **)(auStack_e0[1] + 0x20);
  (*pcVar13)(unaff_x20 + lVar8,lVar17,puStack_d0);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::_keyEntryError;
  local_90 = 0;
  pPStack_88 = (Published *)0x0;
  puVar5 = &DAT_100fad210;
  FUN_1000037f0(&DAT_100fad210,&DAT_100c2c100);
  Combine::Published::init(lVar16,puVar5,puVar5);
  (**(code **)(local_c0 + 0x20))(unaff_x20 + lVar8,lVar16,puStack_b8);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::_isActivatingKey;
  local_90 = local_90 & 0xffffffffffffff00;
  Combine::Published::init(lVar17,puVar5,puVar2);
  (*pcVar13)(unaff_x20 + lVar8,lVar17,puVar6);
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar7 = 0xd000000000000010;
  FUN_1000d4624(0xd000000000000010,0x8000000100c2cfb0);
  *(undefined8 *)(unaff_x20 + lVar8) = uVar7;
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager;
  puVar5 = &DAT_100c2d2e8;
  _swift_getKeyPath();
  puVar6 = &DAT_100facfd0;
  FUN_1000037f0(&DAT_100facfd0,&DAT_100c2d310);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  *(undefined **)(unaff_x20 + lVar8) = puVar5;
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::licenseManager;
  puVar5 = &DAT_100c2d318;
  _swift_getKeyPath();
  puVar6 = &DAT_100fadf10;
  FUN_1000037f0(&DAT_100fadf10,&DAT_100c2d348);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  *(undefined **)(unaff_x20 + lVar8) = puVar5;
  lVar8 = _TtC20PasteLicensingDirect16PaywallViewModel::trialManager;
  puVar5 = &DAT_100c2d350;
  _swift_getKeyPath();
  puVar6 = &DAT_100facfd8;
  FUN_1000037f0(&DAT_100facfd8,&DAT_100c2c7b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  *(undefined **)(unaff_x20 + lVar8) = puVar5;
  *(undefined **)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  FUN_100018280(uVar3,unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::router);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss);
  *puVar1 = local_b0;
  puVar1[1] = uStack_a8;
  uVar7 = *(undefined8 *)
           (unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager);
  FUN_100011128();
  _swift_retain(uVar7);
  FUN_1000da768(&local_90);
  _swift_release(uVar7);
  uVar14 = local_90;
  FUN_1000da768(&uStack_98);
  puVar4 = local_a0;
  FUN_1001a94ec(local_a0,1);
  _swift_release(uStack_98);
  _swift_release(uVar14);
  lVar8 = 0;
  FUN_1000dcac4();
  puVar9 = puVar4;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(puVar4,1,lVar8);
  if ((int)puVar9 == 1) {
    FUN_100005808(puVar4,&DAT_100fad470,&DAT_100c2d0f0);
    uVar14 = 0;
    pPVar10 = (Published *)0xe000000000000000;
  }
  else {
    uVar14 = *puVar4;
    pPVar10 = (Published *)puVar4[1];
    _swift_bridgeObjectRetain(pPVar10);
    FUN_10005241c(puVar4,FUN_1000dcac4);
  }
  _swift_getKeyPath(&DAT_100c2d150);
  _swift_getKeyPath(&DAT_100c2d178);
  local_90 = uVar14;
  pPStack_88 = pPVar10;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar10,&local_90);
  FUN_100004594(uVar3);
  return;
}



/* Address: 0x1000f189c | FUN_1000f189c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f194c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1000f189c(void)

{
  undefined8 uVar1;
  ID self;
  undefined *puVar2;
  URL UVar3;
  undefined *puVar4;
  NSDictionary *pNVar5;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100faded0 != -1) {
    _swift_once(&DAT_100faded0,FUN_1000f0ef0);
  }
  uVar1 = DAT_100faded8;
  puVar2 = &DAT_100fadf08;
  FUN_1000037f0(&DAT_100fadf08,&DAT_100c2d2d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  Swift::AnyHashable::_init
            (puVar2 + 0x20,puVar2,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(puVar2 + 0x60) = UVar3.unknown;
  FUN_10000cbb0(puVar2 + 0x48);
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))();
  puVar4 = puVar2;
  FUN_1000de1b4(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100005808(puVar2 + 0x20,&DAT_100fad238,&DAT_100c2c120);
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  NSNotificationCenter::postNotificationName_object_userInfo_(self,uVar1,0,pNVar5);
  return 0;
}



/* Address: 0x1000f1a2c | FUN_1000f1a2c */

void FUN_1000f1a2c(void)

{
  FUN_1000eebe4();
  return;
}



/* Address: 0x1000f1a44 | FUN_1000f1a44 */

void FUN_1000f1a44(void)

{
  FUN_1000f06cc();
  return;
}



/* Address: 0x1000f1a5c | FUN_1000f1a5c */

void FUN_1000f1a5c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 < 2) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  return;
}



/* Address: 0x1000f1a9c | thunk_FUN_1000eda88 */

void thunk_FUN_1000eda88(void)

{
  FUN_1000eda88();
  return;
}



/* Address: 0x1000f1aa0 | thunk_FUN_1000edaf0 */

void thunk_FUN_1000edaf0(void)

{
  FUN_1000edaf0();
  return;
}



/* Address: 0x1000f1aa4 | FUN_1000f1aa4 */

void FUN_1000f1aa4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000f1ac8 | FUN_1000f1ac8 */

void FUN_1000f1ac8(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x1000f1aec | thunk_FUN_1000f1114 */

void thunk_FUN_1000f1114(void)

{
  FUN_1000f1114();
  return;
}



/* Address: 0x1000f1af0 | thunk_FUN_1000f117c */

void thunk_FUN_1000f117c(void)

{
  FUN_1000f117c();
  return;
}



/* Address: 0x1000f1af4 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000f1af8 | FUN_1000f1af8 */

void FUN_1000f1af8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1000eeec0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000f1b64 | FUN_1000f1b64 */

void FUN_1000f1b64(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000f1b88 | FUN_1000f1b88 */

void FUN_1000f1b88(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x1000f1bac | FUN_1000f1bac */

void FUN_1000f1bac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1000ee928(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000f1c18 | FUN_1000f1c18 */

void FUN_1000f1c18(void)

{
  FUN_1000ee144();
  return;
}



/* Address: 0x1000f1c20 | FUN_1000f1c20 */

void FUN_1000f1c20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fadec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fadec0;
  FUN_100005c24(&DAT_100fadec0,&DAT_100c2d290);
  puVar2 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             puVar1);
  DAT_100fadec8 = puVar2;
  return;
}



/* Address: 0x1000f1c70 | FUN_1000f1c70 */

void FUN_1000f1c70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000f1c94 | FUN_1000f1c94 */

void FUN_1000f1c94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000ee3e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000f1c9c | FUN_1000f1c9c */

undefined8 FUN_1000f1c9c(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Swift_AnyHashable_100eacdb0 + -8) + 0x10))
            (param_2,param_1);
  return param_2;
}



/* Address: 0x1000f1cd8 | thunk_FUN_1000e5814 */

void thunk_FUN_1000e5814(void)

{
  FUN_1000e5814();
  return;
}



/* Address: 0x1000f1cdc | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  FUN_10019fbf0();
  return;
}



/* Address: 0x1000f1ce0 | thunk_FUN_1000e5db8 */

void thunk_FUN_1000e5db8(void)

{
  FUN_1000e5db8();
  return;
}



/* Address: 0x1000f1ce4 | FUN_1000f1ce4 */

undefined1  [16] FUN_1000f1ce4(void)

{
  return ZEXT816(0x100eb6ac0);
}



/* Address: 0x1000f1cf4 | thunk_FUN_1000f1a44 */

void thunk_FUN_1000f1a44(void)

{
  FUN_1000f06cc();
  return;
}



/* Address: 0x1000f1cf8 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1000f1cfc | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1000f1d00 | thunk_FUN_1000f1a2c */

void thunk_FUN_1000f1a2c(void)

{
  FUN_1000eebe4();
  return;
}



/* Address: 0x1000f1d04 | FUN_1000f1d04 */

undefined1  [16] FUN_1000f1d04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1000f1d34 | FUN_1000f1d34 */

uint FUN_1000f1d34(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 & 1;
}



/* Address: 0x1000f1d3c | FUN_1000f1d3c */

void FUN_1000f1d3c(void)

{
  return;
}



/* Address: 0x1000f1d44 | FUN_1000f1d44 */

uint FUN_1000f1d44(_StringGuts param_1,_StringGuts param_2,uint param_3,undefined *param_4,
                  undefined *param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  
  if ((param_1.unknown != param_4) || (param_2.unknown != param_5)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)param_4);
    uVar2 = 0;
    if (!bVar1) goto LAB_1000f1d88;
  }
  uVar2 = param_3 ^ param_6 ^ 1;
LAB_1000f1d88:
  return uVar2 & 1;
}



/* Address: 0x1000f1d98 | FUN_1000f1d98 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f1dd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f1d98(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fadf18;
  FUN_1000037f0(&DAT_100fadf18,&DAT_100c2d390);
  Combine::Published::init(param_1,puVar1,puVar1);
  return;
}


