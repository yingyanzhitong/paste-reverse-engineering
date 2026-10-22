/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100838608 | FUN_100838608 */

undefined1  [16] FUN_100838608(void)

{
  return ZEXT816(0x100f058f0);
}



/* Address: 0x100838618 | FUN_100838618 */

void FUN_100838618(void)

{
  undefined *puVar1;
  
  if (DAT_100fe7508 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fe7508 = puVar1;
  return;
}



/* Address: 0x100838658 | FUN_100838658 */

void FUN_100838658(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7c760;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7c760,&DAT_100f05a78);
  DAT_100fe7558 = pTVar1;
  return;
}



/* Address: 0x100838698 | FUN_100838698 */

undefined8 FUN_100838698(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7568;
  FUN_1000f7830(&DAT_100fe7568,&DAT_100c7c688);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008386e0 | FUN_1008386e0 */

undefined1  [16] FUN_1008386e0(void)

{
  return ZEXT816(0x100f05988);
}



/* Address: 0x1008386f0 | thunk_FUN_100834cd8 */

void thunk_FUN_100834cd8(void)

{
  FUN_100834cd8();
  return;
}



/* Address: 0x1008386f4 | thunk_FUN_100062420 */

void thunk_FUN_100062420(void)

{
  thunk_FUN_100062420();
  return;
}



/* Address: 0x1008386f8 | thunk_FUN_100838420 */

void thunk_FUN_100838420(void)

{
  thunk_FUN_100838420();
  return;
}



/* Address: 0x1008386fc | thunk_FUN_10083845c */

void thunk_FUN_10083845c(void)

{
  thunk_FUN_10083845c();
  return;
}



/* Address: 0x100838700 | thunk_FUN_1008384e8 */

void thunk_FUN_1008384e8(void)

{
  thunk_FUN_1008384e8();
  return;
}



/* Address: 0x100838704 | thunk_FUN_10083857c */

void thunk_FUN_10083857c(void)

{
  thunk_FUN_10083857c();
  return;
}



/* Address: 0x100838708 | thunk_FUN_1000623d8 */

void thunk_FUN_1000623d8(void)

{
  thunk_FUN_1000623d8();
  return;
}



/* Address: 0x10083870c | FUN_10083870c */

undefined1  [16] FUN_10083870c(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  pcVar4 = (char *)&local_60;
  uVar1 = (uint)((ulong)param_2.unknown >> 0x20);
  uVar5 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar5 == 0) {
      local_40 = 0;
      local_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x20,param_2);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x8000000100db1f20;
      local_40 = 0xd00000000000001d;
    }
    else {
      local_40 = 0;
      local_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1b,param_2);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x8000000100db1f00;
      local_40 = 0xd000000000000018;
    }
  }
  else {
    if (uVar5 == 2) {
      local_40 = 0;
      local_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1d,param_2);
      pvVar3 = (void *)0x8000000100db1ee0;
      SVar7.bridgeObject = (void *)0x8000000100db1ee0;
      SVar7.str = (char *)0xd000000000000015;
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar7,SVar13);
      FUN_1005b32e4();
      SVar8.bridgeObject = pvVar3;
      SVar8.str = param_1;
      SVar14.bridgeObject = param_4;
      SVar14.str = param_3;
      Swift::String::append(SVar8,SVar14);
      _swift_bridgeObjectRelease(pvVar3);
      SVar9.bridgeObject = (void *)0xe300000000000000;
      SVar9.str = (char *)0x203a27;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar9,SVar15);
      _swift_getErrorValue((ulong)param_2.unknown & 0x1fffffffffffffff,auStack_48);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_60,uStack_58);
      goto LAB_1008388e8;
    }
    if (uVar5 == 3) {
      local_40 = 0;
      local_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x37,param_2);
      param_2.unknown = (undefined *)0x8000000100db1ea0;
      SVar6.bridgeObject = (void *)0x8000000100db1ea0;
      SVar6.str = (char *)0xd000000000000034;
      SVar12.bridgeObject = param_4;
      SVar12.str = param_3;
      Swift::String::append(SVar6,SVar12);
    }
    else {
      local_40 = 0;
      local_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x27,param_2);
      _swift_bridgeObjectRelease(local_38);
      local_38 = 0x8000000100db1e70;
      local_40 = 0xd000000000000024;
    }
  }
  FUN_1005b32e4();
  SVar10.bridgeObject = param_2.unknown;
  SVar10.str = param_1;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar10,SVar16);
  _swift_bridgeObjectRelease(param_2.unknown);
  pcVar4 = param_3;
LAB_1008388e8:
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0x2e;
  SVar17.bridgeObject = param_4;
  SVar17.str = pcVar4;
  Swift::String::append(SVar11,SVar17);
  auVar2._8_8_ = local_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}



/* Address: 0x100838910 | FUN_100838910 */

void FUN_100838910(void)

{
  undefined8 *unaff_x20;
  
  FUN_10083870c(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100838918 | FUN_100838918 */

void FUN_100838918(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838998;
  FUN_10083948c(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x100838998 | FUN_100838998 */

void FUN_100838998(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001008389f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1008389f8 | FUN_1008389f8 */

void FUN_1008389f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838a74;
  FUN_100838b54(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4);
  return;
}



/* Address: 0x100838a74 | FUN_100838a74 */

void FUN_100838a74(void)

{
  ulong uVar1;
  Date DVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x38));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(DVar2.unknown + -8) + 0x38);
    uVar3 = 0;
  }
  else {
    _swift_getErrorValue();
    uVar1 = *(ulong *)(lVar5 + 0x18);
    FUN_1008568d4(uVar1,*(undefined8 *)(lVar5 + 0x20));
    if ((uVar1 & 1) == 0) {
      _swift_willThrow();
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      goto LAB_100838b40;
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    _swift_errorRelease();
    DVar2 = Foundation::Date::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(DVar2.unknown + -8) + 0x38);
    uVar3 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar4,uVar3,1,DVar2.unknown);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
LAB_100838b40:
                    /* WARNING: Could not recover jumptable at 0x000100838b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100838b54 | FUN_100838b54 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100838b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ID IVar3;
  NSString *pNVar4;
  ulong uVar5;
  Dictionary<undefined,undefined> DVar6;
  Date DVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  
  local_50 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fe7418;
  FUN_1000f7830(&DAT_100fe7418,&DAT_100c7c250);
  puVar1 = (undefined8 *)(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  puVar2 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  uVar10 = extraout_x1;
  FUN_1005b32e4(param_4);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar10);
  local_78 = 0;
  IVar3 = objc_stub::attributesOfItemAtPath_error_(IVar3,pNVar4,&local_78);
  if (IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    uVar5 = 0;
    FUN_1007fc410();
    FUN_100839dc4();
    puVar2 = PTR___type_metadata_for_Any_100eae0c0;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_100838ce0:
      uStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      lVar11 = *(long *)PTR__NSFileModificationDate_100ea7ba8;
      _swift_bridgeObjectRetain(DVar6.unknown);
      FUN_1000712c0(lVar11);
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
        goto LAB_100838ce0;
      }
      FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar11 * 0x20,&local_70);
      _swift_bridgeObjectRelease(DVar6.unknown);
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
    if (local_58 == 0) {
      FUN_1000fb4c4(&local_70,&DAT_100fe75c8,&DAT_100c7c850);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar7.unknown + -8) + 0x38))(puVar1,1,1,DVar7.unknown);
    }
    else {
      DVar7 = Foundation::Date::typeMetadataAccessor();
      puVar8 = puVar1;
      _swift_dynamicCast(puVar1,&local_70,puVar2 + 8,DVar7.unknown,6);
      lVar11 = *(long *)(DVar7.unknown + -8);
      (**(code **)(lVar11 + 0x38))(puVar1,(uint)puVar8 ^ 1,1,DVar7.unknown);
      puVar8 = puVar1;
      (**(code **)(lVar11 + 0x30))(puVar1,1,DVar7.unknown);
      if ((int)puVar8 != 1) {
        (**(code **)(lVar11 + 0x20))(param_1,puVar1,DVar7.unknown);
        _swift_task_dealloc(puVar1);
        pcVar9 = *(code **)(unaff_x22 + 8);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_50) goto LAB_100838e60;
        goto LAB_100838e44;
      }
    }
    puVar8 = puVar1;
    FUN_1000fb4c4(puVar1,&DAT_100fe7418,&DAT_100c7c250);
    FUN_100838658();
    _swift_allocError(&DAT_100f05a78,puVar8,0,0);
    *puVar8 = param_4;
    puVar8[1] = 0x6000000000000000;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_4);
  }
  _swift_task_dealloc(puVar1);
  pcVar9 = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_50) {
LAB_100838e60:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
LAB_100838e44:
  (*pcVar9)();
  return;
}



/* Address: 0x100838e64 | FUN_100838e64 */

void FUN_100838e64(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100838ee4;
  FUN_1008396bc(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x100838ee4 | FUN_100838ee4 */

void FUN_100838ee4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100838f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100838f34 | FUN_100838f34 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100838f34(undefined8 *param_1,undefined8 *param_2,ID param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  NSString *pNVar5;
  ID IVar6;
  ulong uVar7;
  Dictionary<undefined,undefined> DVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  _StringGuts _Var12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_80 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(uVar2);
  uVar11 = uVar2;
  FUN_1005b62ec(uVar1,uVar2);
  uVar9 = local_80;
  FUN_1005b32e4(local_80);
  _swift_bridgeObjectRelease(uVar9);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar11);
  local_80 = 0;
  IVar6 = objc_stub::attributesOfItemAtPath_error_(param_3,pNVar5,&local_80);
  if (IVar6 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    goto LAB_1008391a8;
  }
  uVar7 = 0;
  FUN_1007fc410();
  FUN_100839dc4();
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_1008390b0:
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    lVar13 = *(long *)PTR__NSFileType_100ea7bd0;
    _swift_bridgeObjectRetain(DVar8.unknown);
    FUN_1000712c0(lVar13);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar8.unknown);
      goto LAB_1008390b0;
    }
    FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + lVar13 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar8.unknown);
  }
  _swift_bridgeObjectRelease(DVar8.unknown);
  if (local_68 == 0) {
    FUN_1000fb4c4(&local_80,&DAT_100fe75c8,&DAT_100c7c850);
  }
  else {
    uVar9 = 0;
    FUN_1007fc3fc(0);
    puVar10 = local_88;
    _swift_dynamicCast(puVar10,&local_80,puVar3 + 8,uVar9,6);
    if (((ulong)puVar10 & 1) != 0) {
      SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var12.unknown = SVar14.bridgeObject;
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar14 == SVar15) {
        _swift_bridgeObjectRelease(_Var12.unknown);
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar14.str,_Var12,
                           (_StringComparisonResult)(__int8)SVar15.str);
        _swift_bridgeObjectRelease(_Var12.unknown);
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
        if (!bVar4) goto LAB_100839160;
      }
      *param_1 = uVar1;
      param_1[1] = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      goto LAB_1008391a8;
    }
  }
LAB_100839160:
  *param_1 = 0;
  param_1[1] = 0;
LAB_1008391a8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1008391e4 | FUN_1008391e4 */

void FUN_1008391e4(undefined8 param_1,undefined8 param_2,char *param_3)

{
  DirectoryHint DVar1;
  undefined *puVar2;
  ulong uVar3;
  URL UVar4;
  ulong uVar5;
  ulong uVar6;
  undefined7 extraout_var;
  URL UVar7;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long unaff_x22;
  long lVar12;
  String SVar13;
  char *pcVar8;
  
  puVar2 = &DAT_100fe7408;
  puVar9 = &DAT_100c7c240;
  FUN_1000f7830();
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar4.unknown + -8);
  uVar6 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  FUN_1005b32e4();
  (**(code **)(lVar12 + 0x38))(uVar3,1,1,UVar4.unknown);
  DVar1 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  UVar7.unknown = (undefined *)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  (**(code **)(lVar10 + 0x68))();
  SVar13.bridgeObject = puVar9;
  SVar13.str = param_3;
  Foundation::URL::_init(SVar13,(DirectoryHint)(__int8)UVar7.unknown);
  _swift_task_dealloc();
  Foundation::URL::resolvingSymlinksInPath(UVar7);
  pcVar11 = *(code **)(lVar12 + 8);
  UVar7 = UVar4;
  (*pcVar11)(uVar5);
  SVar13 = Foundation::URL::path(true,UVar7);
  pcVar8 = SVar13.str;
  (*pcVar11)(uVar6,UVar4.unknown);
  thunk_FUN_1005b3cd0(pcVar8,SVar13.bridgeObject);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100839388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pcVar8);
  return;
}



/* Address: 0x10083938c | FUN_10083938c */

void FUN_10083938c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838998;
  FUN_10083948c(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x10083940c | FUN_10083940c */

void FUN_10083940c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100838ee4;
  FUN_1008396bc(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x10083948c | FUN_10083948c */

/* WARNING: Removing unreachable block (ram,0x0001008395a8) */
/* WARNING: Removing unreachable block (ram,0x000100839644) */
/* WARNING: Removing unreachable block (ram,0x0001008395d8) */

void FUN_10083948c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  DirectoryHint DVar1;
  undefined *puVar2;
  ulong uVar3;
  URL UVar4;
  NSDataReadingOptions contentsOf;
  undefined7 extraout_var;
  ulong uVar5;
  Data DVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  String filePath;
  
  puVar2 = &DAT_100fe7408;
  puVar7 = &DAT_100c7c240;
  FUN_1000f7830();
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar4.unknown + -8);
  contentsOf.unknown = (undefined *)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  FUN_1005b32e4();
  (**(code **)(lVar10 + 0x38))(uVar3,1,1,UVar4.unknown);
  DVar1 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar9 + 0x68))();
  filePath.bridgeObject = puVar7;
  filePath.str = param_3;
  Foundation::URL::_init(filePath,(DirectoryHint)(__int8)uVar5);
  _swift_task_dealloc(uVar5);
  uVar8 = 0;
  DVar6 = Foundation::Data::_init(contentsOf);
  (**(code **)(lVar10 + 8))(contentsOf.unknown,UVar4.unknown);
  _swift_task_dealloc(contentsOf.unknown);
  _swift_task_dealloc(uVar3);
  (**(code **)(unaff_x22 + 8))(DVar6.unknown,uVar8);
  return;
}



/* Address: 0x1008396bc | FUN_1008396bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100839b0c) */

void FUN_1008396bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  bool bVar5;
  ID self;
  NSString *pNVar6;
  ID IVar7;
  undefined8 *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  undefined8 extraout_x1_00;
  long unaff_x22;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  undefined *local_90;
  undefined8 uStack_88;
  char local_71;
  undefined8 local_70;
  long local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_71 = '\0';
  uVar12 = extraout_x1;
  FUN_1005b32e4(param_3);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar12);
  IVar7 = NSFileManager::fileExistsAtPath_isDirectory_(self,pNVar6,&local_71);
  puVar8 = (undefined8 *)0x0;
  if ((int)IVar7 == 0) {
    puVar10 = (undefined *)0x0;
LAB_1008398f0:
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100839930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(puVar10);
      return;
    }
  }
  else {
    if (local_71 == '\x01') {
      uVar12 = extraout_x1_00;
      FUN_1005b32e4(param_3);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar12);
      local_90 = (undefined *)0x0;
      IVar7 = NSFileManager::contentsOfDirectoryAtPath_error_(self,pNVar6,&local_90);
      if (IVar7 != 0) {
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        uVar15 = *(ulong *)(IVar7 + 0x10);
        puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar15 != 0) {
          uVar14 = 0;
          do {
            puVar8 = (undefined8 *)(IVar7 + 0x28 + uVar14 * 0x10);
            uVar16 = uVar14;
            while( true ) {
              if (*(ulong *)(IVar7 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100839b3c);
                (*UNRECOVERED_JUMPTABLE)();
              }
              pcVar1 = (char *)puVar8[-1];
              pvVar3 = (void *)*puVar8;
              uVar14 = uVar16 + 1;
              _swift_bridgeObjectRetain(pvVar3);
              SVar17.bridgeObject = (void *)0xe100000000000000;
              SVar17.str = (char *)0x2e;
              SVar18.bridgeObject = pvVar3;
              SVar18.str = pcVar1;
              bVar5 = Swift::String::hasPrefix(SVar17,SVar18);
              if (!bVar5) break;
              _swift_bridgeObjectRelease(pvVar3);
              puVar8 = puVar8 + 2;
              uVar16 = uVar14;
              if (uVar15 == uVar14) goto LAB_1008399e4;
            }
            puVar10 = puVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            local_90 = puVar13;
            if (((ulong)puVar10 & 1) == 0) {
              FUN_10083547c(0,*(long *)(puVar13 + 0x10) + 1,1);
            }
            uVar2 = *(ulong *)(local_90 + 0x10);
            if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar2) {
              FUN_10083547c(1 < *(ulong *)(local_90 + 0x18),uVar2 + 1,1);
            }
            *(ulong *)(local_90 + 0x10) = uVar2 + 1;
            *(char **)(local_90 + uVar2 * 0x10 + 0x20) = pcVar1;
            *(void **)(local_90 + uVar2 * 0x10 + 0x28) = pvVar3;
            puVar13 = local_90;
          } while (uVar15 - 1 != uVar16);
        }
LAB_1008399e4:
        _swift_bridgeObjectRelease(IVar7);
        uVar15 = *(ulong *)(puVar13 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar15 != 0) {
          uVar14 = 0;
          puVar8 = (undefined8 *)(puVar13 + 0x28);
          do {
            if (*(ulong *)(puVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100839b40);
              (*UNRECOVERED_JUMPTABLE)();
            }
            local_90 = (undefined *)puVar8[-1];
            uVar12 = *puVar8;
            uStack_88 = uVar12;
            _swift_bridgeObjectRetain(uVar12);
            FUN_100838f34(&local_70,&local_90,self,param_3);
            _swift_bridgeObjectRelease(uVar12);
            lVar4 = local_68;
            uVar12 = local_70;
            if (local_68 != 0) {
              puVar9 = puVar10;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar11 = puVar10;
              if (((ulong)puVar9 & 1) == 0) {
                puVar11 = (undefined *)0x0;
                FUN_1008367d4(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              }
              uVar16 = *(ulong *)(puVar11 + 0x10);
              puVar10 = puVar11;
              if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                FUN_1008367d4(puVar10,uVar16 + 1,1,puVar11);
              }
              *(ulong *)(puVar10 + 0x10) = uVar16 + 1;
              *(undefined8 *)(puVar10 + uVar16 * 0x10 + 0x20) = uVar12;
              *(long *)(puVar10 + uVar16 * 0x10 + 0x28) = lVar4;
            }
            uVar14 = uVar14 + 1;
            puVar8 = puVar8 + 2;
          } while (uVar15 != uVar14);
        }
        _swift_release(puVar13);
        goto LAB_1008398f0;
      }
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
    }
    else {
      FUN_100838658();
      _swift_allocError(&DAT_100f05a78,puVar8,0,0);
      *puVar8 = param_3;
      puVar8[1] = 0x8000000000000000;
      _swift_willThrow();
      _swift_bridgeObjectRetain(param_3);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x0001008399d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(UNRECOVERED_JUMPTABLE);
}



/* Address: 0x100839b44 | FUN_100839b44 */

undefined8 * FUN_100839b44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100839b80(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x100839b80 | FUN_100839b80 */

void FUN_100839b80(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if ((uVar2 == 0) || (uVar2 == 1)) {
      _swift_bridgeObjectRetain();
      return;
    }
  }
  else {
    if (uVar2 == 2) {
      _swift_bridgeObjectRetain();
      _swift_errorRetain(param_2 & 0x1fffffffffffffff);
      return;
    }
    if ((uVar2 == 3) || (uVar2 == 4)) {
      _swift_bridgeObjectRetain();
      return;
    }
  }
  return;
}



/* Address: 0x100839be0 | FUN_100839be0 */

void FUN_100839be0(undefined8 *param_1)

{
  FUN_100839bec(*param_1,param_1[1]);
  return;
}



/* Address: 0x100839bec | FUN_100839bec */

void FUN_100839bec(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if ((uVar2 == 0) || (uVar2 == 1)) {
      _swift_bridgeObjectRelease();
      return;
    }
  }
  else {
    if (uVar2 == 2) {
      _swift_bridgeObjectRelease();
      _swift_errorRelease(param_2 & 0x1fffffffffffffff);
      return;
    }
    if ((uVar2 == 3) || (uVar2 == 4)) {
      _swift_bridgeObjectRelease();
      return;
    }
  }
  return;
}



/* Address: 0x100839c4c | FUN_100839c4c */

undefined8 * FUN_100839c4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_100839b80(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_100839bec(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100839c90 | FUN_100839c90 */

undefined8 * FUN_100839c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_100839bec(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100839cc8 | FUN_100839cc8 */

int FUN_100839cc8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7b < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7c;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1d | (uVar1 >> 0x19 & 8 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 3) ^ 0x7f
  ;
  if (0x7a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100839d24 | FUN_100839d24 */

void FUN_100839d24(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7c) {
    if (0x7b < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 3 & 0xf | (-param_2 & 0x7f) << 4);
      *param_1 = 0;
      param_1[1] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7c);
    param_1[1] = 0;
    if (0x7b < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x100839d74 | FUN_100839d74 */

ulong FUN_100839d74(long param_1)

{
  return *(ulong *)(param_1 + 8) >> 0x3d;
}



/* Address: 0x100839d80 | FUN_100839d80 */

void FUN_100839d80(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0x1fffffffffffffff;
  return;
}



/* Address: 0x100839d90 | FUN_100839d90 */

void FUN_100839d90(long param_1,long param_2)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xffffffffffffff8 | param_2 << 0x3d;
  return;
}



/* Address: 0x100839da4 | FUN_100839da4 */

undefined1  [16] FUN_100839da4(void)

{
  return ZEXT816(0x100f05a78);
}



/* Address: 0x100839db4 | FUN_100839db4 */

undefined1  [16] FUN_100839db4(void)

{
  return ZEXT816(0x100f05a98);
}



/* Address: 0x100839dc4 | FUN_100839dc4 */

void FUN_100839dc4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe6e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1007fc410(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7ad60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ad60,uVar1);
  DAT_100fe6e20 = pTVar2;
  return;
}



/* Address: 0x100839e08 | thunk_FUN_100838ee4 */

void thunk_FUN_100838ee4(void)

{
  FUN_100838ee4();
  return;
}



/* Address: 0x100839e0c | thunk_FUN_100838998 */

void thunk_FUN_100838998(void)

{
  FUN_100838998();
  return;
}



/* Address: 0x100839e10 | thunk_FUN_100839b44 */

void thunk_FUN_100839b44(void)

{
  FUN_100839b44();
  return;
}



/* Address: 0x100839e14 | FUN_100839e14 */

void FUN_100839e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_10;
  *(char *)(unaff_x22 + 0x48) = (char)param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_7;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100839ec4;
  FUN_10083c964(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100839ec4 | FUN_100839ec4 */

void FUN_100839ec4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0x40));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar8 + 0x30);
    uVar2 = *(undefined8 *)(lVar8 + 0x38);
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    puVar1 = *(undefined8 **)(lVar8 + 0x10);
    uVar4 = *(undefined1 *)(lVar8 + 0x48);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x18));
    FUN_100837f50(uVar6,uVar3,uVar4);
    *puVar1 = 0xd000000000000016;
    puVar1[1] = 0x8000000100c7c850;
    puVar1[2] = param_1;
    puVar1[3] = uVar5;
    puVar1[4] = uVar2;
    puVar1[8] = &DAT_100f05c58;
    puVar1[9] = &PTR_PTR_100f05c80;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x38);
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    FUN_100837f50(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                  *(undefined1 *)(lVar8 + 0x48));
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100839fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100839fb4 | FUN_100839fb4 */

undefined *
FUN_100839fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_78;
  
  local_c0 = &local_100;
  local_100 = param_3;
  uStack_f8 = param_4;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0x7fffffffffffffff;
  FUN_1008362e0(0x7fffffffffffffff,1,FUN_1002dee10,&local_d0,param_1,param_2);
  lVar7 = *(long *)(lVar4 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar7,0);
    puVar8 = local_78;
    FUN_100831980();
    puVar9 = (undefined8 *)(lVar4 + 0x38);
    do {
      local_90 = puVar9[-1];
      uVar2 = *puVar9;
      uStack_98 = puVar9[-2];
      local_a0 = puVar9[-3];
      uStack_88 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      uVar3 = uStack_e8;
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      local_c0 = local_f0;
      uStack_b8 = uStack_e8;
      FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
      FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      _swift_bridgeObjectRelease(uVar3);
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      local_b0 = local_e0;
      uStack_a8 = uStack_d8;
      puVar5 = &DAT_100fe74a8;
      FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
      puVar6 = &DAT_100fe74b0;
      FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
      SVar10 = Swift::String::_init(&local_d0,puVar5,puVar6);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      local_78 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = local_78;
      puVar9 = puVar9 + 4;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(String *)(local_78 + uVar1 * 0x10 + 0x20) = SVar10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar4);
  }
  return puVar8;
}



/* Address: 0x10083a1fc | FUN_10083a1fc */

undefined1  [16] FUN_10083a1fc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x20,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x5d73656c696620;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0x8000000100db1f40;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x10083a2b0 | thunk_FUN_10083a1fc */

void thunk_FUN_10083a1fc(void)

{
  FUN_10083a1fc();
  return;
}



/* Address: 0x10083a2b4 | FUN_10083a2b4 */

/* WARNING: Removing unreachable block (ram,0x00010083a5a8) */

undefined1  [16] FUN_10083a2b4(void)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined8 ***pppuVar8;
  code *pcVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 ***pppuVar15;
  _StringGuts _Var16;
  undefined8 ***pppuVar17;
  long unaff_x20;
  undefined8 ****ppppuVar18;
  undefined8 ***pppuVar19;
  long lVar20;
  undefined8 ***pppuVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined8 ***local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar20 = *(long *)(unaff_x20 + 0x10);
  ppppuVar18 = *(undefined8 *****)(lVar20 + 0x10);
  _swift_bridgeObjectRetain(lVar20);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  ppppuVar10 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar18 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(lVar20);
    ppppuVar10 = ppppuVar18;
    FUN_100835bec(ppppuVar18,0);
    ppppuVar11 = &local_88;
    FUN_100837934(ppppuVar11,ppppuVar10 + 4,ppppuVar18,lVar20);
    FUN_10000c650(local_88,local_80,local_78,uStack_70,local_68);
    if (ppppuVar11 != ppppuVar18) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10083a33c);
      (*pcVar9)();
    }
  }
  local_88 = ppppuVar10;
  FUN_10083c4ec(&local_88);
  pppuVar8 = local_88;
  pppuVar21 = (undefined8 ***)local_88[2];
  if (pppuVar21 == (undefined8 ***)0x0) {
    _swift_release(local_88);
    pppuVar19 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_88 = (undefined8 ***)puVar7;
    FUN_10083547c(0,pppuVar21,0);
    pppuVar17 = (undefined8 ***)0x0;
    ppppuVar10 = (undefined8 ****)(pppuVar8 + 8);
    do {
      pppuVar19 = local_88;
      if (pppuVar8[2] <= pppuVar17) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10083a5a8);
        (*pcVar9)();
      }
      pppuVar12 = ppppuVar10[-4];
      pppuVar3 = ppppuVar10[-3];
      pppuVar1 = ppppuVar10[-2];
      pppuVar4 = ppppuVar10[-1];
      uVar5 = *(undefined1 *)ppppuVar10;
      _swift_bridgeObjectRetain(pppuVar3);
      FUN_1001037b4(pppuVar1,pppuVar4);
      pppuVar15 = pppuVar3;
      FUN_10083a5b4(pppuVar12,pppuVar3,pppuVar1,pppuVar4,uVar5);
      _swift_bridgeObjectRelease(pppuVar3);
      FUN_10003bf2c(pppuVar1,pppuVar4);
      ppuVar2 = pppuVar19[2];
      local_88 = pppuVar19;
      if ((undefined8 **)((ulong)pppuVar19[3] >> 1) <= ppuVar2) {
        FUN_10083547c((undefined8 **)0x1 < pppuVar19[3],(undefined8 **)((long)ppuVar2 + 1U),1);
      }
      pppuVar19 = local_88;
      pppuVar17 = (undefined8 ***)((long)pppuVar17 + 1);
      local_88[2] = (undefined8 **)((long)ppuVar2 + 1U);
      local_88[(long)ppuVar2 * 2 + 4] = pppuVar12;
      local_88[(long)ppuVar2 * 2 + 5] = pppuVar15;
      ppppuVar10 = ppppuVar10 + 5;
    } while (pppuVar21 != pppuVar17);
    _swift_release(pppuVar8);
  }
  pcVar13 = &DAT_100fe6f38;
  local_88 = pppuVar19;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  puVar14 = &DAT_100fe6f40;
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar22.bridgeObject = &SUB_e200000000000000;
  SVar22.str = (char *)0x202c;
  SVar22 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar22);
  _Var16.unknown = SVar22.bridgeObject;
  _swift_bridgeObjectRelease(pppuVar19);
  local_88 = (undefined8 ***)0x0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x24,_Var16);
  _swift_bridgeObjectRelease(local_80);
  local_88 = (undefined8 ***)0xd000000000000017;
  local_80 = 0x8000000100db1f40;
  _swift_bridgeObjectRelease();
  SVar23 = Swift::CustomStringConvertible::get_description();
  SVar25.bridgeObject = puVar14;
  SVar25.str = pcVar13;
  Swift::String::append(SVar23,SVar25);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar23.bridgeObject = &DAT_e800000000000000;
  SVar23.str = (char *)0x203a73656c696620;
  SVar26.bridgeObject = puVar14;
  SVar26.str = pcVar13;
  Swift::String::append(SVar23,SVar26);
  SVar27.bridgeObject = puVar14;
  SVar27.str = pcVar13;
  Swift::String::append(SVar22,SVar27);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x5d;
  SVar28.bridgeObject = puVar14;
  SVar28.str = pcVar13;
  Swift::String::append(SVar24,SVar28);
  auVar6._8_8_ = local_80;
  auVar6._0_8_ = local_88;
  return auVar6;
}



/* Address: 0x10083a5b4 | FUN_10083a5b4 */

void FUN_10083a5b4(__DataStorage *param_1,undefined8 param_2,char *param_3,undefined *param_4,
                  ulong param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  char *pcVar9;
  UnsafeBufferPointer<__int8> UVar10;
  char **ppcVar11;
  undefined *puVar12;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  tuple2_conflict1 tVar24;
  char *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_78;
  undefined *puStack_70;
  long local_68;
  undefined *puVar13;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_5 & 1) != 0) {
    SVar18.bridgeObject = (void *)0xea00000000003e44;
    SVar18.str = (char *)0x455443414445523c;
    goto LAB_10083a964;
  }
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar15 = uVar2 >> 0x1e;
  pcVar14 = param_3;
  if (uVar2 >> 0x1e < 2) {
    if (uVar15 == 0) {
      local_b0 = SUB81(param_3,0);
      uStack_af = (undefined1)((ulong)param_3 >> 8);
      uStack_ae = (undefined1)((ulong)param_3 >> 0x10);
      uStack_ad = (undefined1)((ulong)param_3 >> 0x18);
      uStack_ac = (undefined1)((ulong)param_3 >> 0x20);
      uStack_ab = (undefined1)((ulong)param_3 >> 0x28);
      uStack_aa = (undefined1)((ulong)param_3 >> 0x30);
      uStack_a9 = (undefined1)((ulong)param_3 >> 0x38);
      uStack_a8 = SUB81(param_4,0);
      uStack_a7 = (undefined1)((ulong)param_4 >> 8);
      uStack_a6 = (undefined1)((ulong)param_4 >> 0x10);
      uStack_a5 = (undefined1)((ulong)param_4 >> 0x18);
      uStack_a4 = (undefined1)((ulong)param_4 >> 0x20);
      SVar20.str = (char *)((ulong)param_4 >> 0x30 & 0xff);
      uStack_a3 = (undefined1)((ulong)param_4 >> 0x28);
      SVar20.bridgeObject = param_3;
      tVar24 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)&local_b0,SVar20);
      puVar13 = tVar24.result.bridgeObject;
      local_78 = tVar24.result.str;
    }
    else {
      lVar17 = (long)(int)param_3;
      pcVar16 = (char *)(((long)param_3 >> 0x20) - lVar17);
      if ((long)param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10083a9d8);
        (*pcVar5)();
      }
      p_Var7 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),param_1);
      if (p_Var7 != (__DataStorage *)0x0) {
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar17,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10083a9e0);
          (*pcVar5)();
        }
        UVar10.unknown = p_Var7 + (lVar17 - (long)p_Var8);
        goto LAB_10083a714;
      }
      Foundation::__DataStorage::get__length
                ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_10083a750:
      UVar10.unknown = (undefined *)0x0;
      pcVar9 = (char *)0x0;
LAB_10083a758:
      SVar21.bridgeObject = pcVar14;
      SVar21.str = pcVar9;
      tVar24 = Swift::String::_fromUTF8Repairing(UVar10,SVar21);
      local_78 = tVar24.result.str;
      puVar13 = tVar24.result.bridgeObject;
      if (tVar24.result.bridgeObject == (undefined *)0x0) {
        local_78 = param_3;
        puStack_70 = param_4;
        FUN_1001037b4(param_3,param_4,tVar24._16_8_);
        puVar13 = &DAT_100fe7560;
        FUN_1000f7830(&DAT_100fe7560,&DAT_100c7c680);
        ppcVar11 = &local_e0;
        _swift_dynamicCast(ppcVar11,&local_78,PTR___type_metadata_for_Foundation_Data_100ea7300,
                           puVar13,6);
        if (((ulong)ppcVar11 & 1) == 0) {
          local_c0 = 0;
          puStack_d8 = (undefined *)0x0;
          local_e0 = (char *)0x0;
          uStack_c8 = 0;
          local_d0 = 0;
          FUN_100838698(&local_e0);
        }
        else {
          FUN_100076508(&local_e0,&local_b0);
          FUN_100004640(&local_b0,local_98);
          bVar6 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
          if (bVar6) {
            FUN_100004640(&local_b0,local_98);
            Swift::_HasContiguousBytes::_withUnsafeBytes();
            FUN_100004594(&local_b0);
            local_78 = local_e0;
            puVar13 = puStack_d8;
            goto LAB_10083a858;
          }
          FUN_100004594(&local_b0);
        }
        FUN_10083c5f8();
        local_78 = param_3;
        puVar13 = param_4;
      }
    }
  }
  else {
    if (uVar15 == 2) {
      lVar17 = *(long *)(param_3 + 0x10);
      lVar1 = *(long *)(param_3 + 0x18);
      UVar10.unknown = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),param_1);
      p_Var8 = (__DataStorage *)0x0;
      if ((__DataStorage *)UVar10.unknown != (__DataStorage *)0x0) {
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),
                            (__DataStorage *)UVar10.unknown);
        if (SBORROW8(lVar17,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10083a9dc);
          (*pcVar5)();
        }
        UVar10.unknown = UVar10.unknown + (lVar17 - (long)p_Var8);
      }
      pcVar16 = (char *)(lVar1 - lVar17);
      if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10083a6dc);
        (*pcVar5)();
      }
LAB_10083a714:
      pcVar9 = (char *)Foundation::__DataStorage::get__length
                                 ((__DataStorage *)((ulong)param_4 & 0x3fffffffffffffff),p_Var8);
      if ((__DataStorage *)UVar10.unknown == (__DataStorage *)0x0) goto LAB_10083a750;
      if ((long)pcVar16 <= (long)pcVar9) {
        pcVar9 = pcVar16;
      }
      goto LAB_10083a758;
    }
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    uStack_a3 = 0;
    local_b0 = 0;
    uStack_af = 0;
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    tVar24 = Swift::String::_fromUTF8Repairing
                       ((UnsafeBufferPointer<__int8>)&local_b0,(String)(auVar3 << 0x40));
    puVar13 = tVar24.result.bridgeObject;
    local_78 = tVar24.result.str;
  }
LAB_10083a858:
  puStack_70 = puVar13;
  FUN_1008322f8();
  (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
  uVar4 = uStack_c8;
  uStack_a8 = SUB81(puStack_d8,0);
  uStack_a7 = (undefined1)((ulong)puStack_d8 >> 8);
  uStack_a6 = (undefined1)((ulong)puStack_d8 >> 0x10);
  uStack_a5 = (undefined1)((ulong)puStack_d8 >> 0x18);
  uStack_a4 = (undefined1)((ulong)puStack_d8 >> 0x20);
  uStack_a3 = (undefined1)((ulong)puStack_d8 >> 0x28);
  uStack_a2 = (undefined2)((ulong)puStack_d8 >> 0x30);
  local_b0 = SUB81(local_e0,0);
  uStack_af = (undefined1)((ulong)local_e0 >> 8);
  uStack_ae = (undefined1)((ulong)local_e0 >> 0x10);
  uStack_ad = (undefined1)((ulong)local_e0 >> 0x18);
  uStack_ac = (undefined1)((ulong)local_e0 >> 0x20);
  uStack_ab = (undefined1)((ulong)local_e0 >> 0x28);
  uStack_aa = (undefined1)((ulong)local_e0 >> 0x30);
  uStack_a9 = (undefined1)((ulong)local_e0 >> 0x38);
  local_a0 = local_d0;
  local_98 = uStack_c8;
  FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
  FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
  (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
  _swift_bridgeObjectRelease(uVar4);
  uStack_a8 = SUB81(puStack_d8,0);
  uStack_a7 = (undefined1)((ulong)puStack_d8 >> 8);
  uStack_a6 = (undefined1)((ulong)puStack_d8 >> 0x10);
  uStack_a5 = (undefined1)((ulong)puStack_d8 >> 0x18);
  uStack_a4 = (undefined1)((ulong)puStack_d8 >> 0x20);
  uStack_a3 = (undefined1)((ulong)puStack_d8 >> 0x28);
  uStack_a2 = (undefined2)((ulong)puStack_d8 >> 0x30);
  local_b0 = SUB81(local_e0,0);
  uStack_af = (undefined1)((ulong)local_e0 >> 8);
  uStack_ae = (undefined1)((ulong)local_e0 >> 0x10);
  uStack_ad = (undefined1)((ulong)local_e0 >> 0x18);
  uStack_ac = (undefined1)((ulong)local_e0 >> 0x20);
  uStack_ab = (undefined1)((ulong)local_e0 >> 0x28);
  uStack_aa = (undefined1)((ulong)local_e0 >> 0x30);
  uStack_a9 = (undefined1)((ulong)local_e0 >> 0x38);
  local_98 = uStack_c8;
  local_a0 = local_d0;
  local_90 = local_c0;
  uStack_88 = uStack_b8;
  puVar12 = &DAT_100fe74a8;
  FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
  param_3 = &DAT_100fe74b0;
  param_4 = PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398;
  FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630);
  SVar18 = Swift::String::_init(&local_b0,puVar12);
  _swift_bridgeObjectRelease(puVar13);
LAB_10083a964:
  local_b0 = SUB81(param_1,0);
  uStack_af = (undefined1)((ulong)param_1 >> 8);
  uStack_ae = (undefined1)((ulong)param_1 >> 0x10);
  uStack_ad = (undefined1)((ulong)param_1 >> 0x18);
  uStack_ac = (undefined1)((ulong)param_1 >> 0x20);
  uStack_ab = (undefined1)((ulong)param_1 >> 0x28);
  uStack_aa = (undefined1)((ulong)param_1 >> 0x30);
  uStack_a9 = (undefined1)((ulong)param_1 >> 0x38);
  uStack_a8 = (undefined1)param_2;
  uStack_a7 = (undefined1)((ulong)param_2 >> 8);
  uStack_a6 = (undefined1)((ulong)param_2 >> 0x10);
  uStack_a5 = (undefined1)((ulong)param_2 >> 0x18);
  uStack_a4 = (undefined1)((ulong)param_2 >> 0x20);
  uStack_a3 = (undefined1)((ulong)param_2 >> 0x28);
  uStack_a2 = (undefined2)((ulong)param_2 >> 0x30);
  _swift_bridgeObjectRetain(param_2);
  SVar19.bridgeObject = (void *)0xe100000000000000;
  SVar19.str = (char *)0x3d;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(CONCAT17(uStack_a9,
                               CONCAT16(uStack_aa,
                                        CONCAT15(uStack_ab,
                                                 CONCAT14(uStack_ac,
                                                          CONCAT13(uStack_ad,
                                                                   CONCAT12(uStack_ae,
                                                                            CONCAT11(uStack_af,
                                                                                     local_b0)))))))
                      ,CONCAT26(uStack_a2,
                                CONCAT15(uStack_a3,
                                         CONCAT14(uStack_a4,
                                                  CONCAT13(uStack_a5,
                                                           CONCAT12(uStack_a6,
                                                                    CONCAT11(uStack_a7,uStack_a8))))
                                        )));
  }
  return;
}



/* Address: 0x10083a9e4 | thunk_FUN_10083a2b4 */

void thunk_FUN_10083a2b4(void)

{
  FUN_10083a2b4();
  return;
}



/* Address: 0x10083a9e8 | FUN_10083a9e8 */

undefined8 *
FUN_10083a9e8(undefined8 *param_1,undefined8 *param_2,_StringObject param_3,_StringGuts param_4,
             uint param_5,undefined1 param_6)

{
  ulong uVar1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  Iterator IVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  _StringGuts _Var7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  UnsafeBufferPointer<__int8> UVar15;
  byte *pbVar16;
  long lVar17;
  _StringGuts unaff_x20;
  long lVar18;
  uint uVar19;
  int iVar20;
  _StringObject _Var21;
  ulong uVar22;
  UnsafeMutableBufferPointer<__int8> initializing;
  ulong *puVar23;
  undefined1 uVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  tuple2 tVar29;
  undefined8 *local_a8;
  ulong uStack_a0;
  byte local_91;
  undefined8 *local_90;
  ulong uStack_88;
  undefined8 **local_80;
  undefined8 *local_70;
  undefined8 *local_68;
  
  IVar5 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar18 = *(long *)(IVar5.unknown + -8);
  initializing.unknown =
       &stack0xffffffffffffff20 + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar20 = (int)param_3.unknown;
  iVar10 = (int)((ulong)param_3.unknown >> 0x20);
  uVar19 = (uint)((ulong)param_4.unknown >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_6) {
  case 0:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    unaff_x20.unknown = param_3.unknown;
    break;
  case 1:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    puVar11 = (undefined8 *)((ulong)param_3.unknown & 0xffffffffffff);
    puVar14 = (undefined8 *)((ulong)param_4.unknown >> 0x38 & 0xf);
    puVar25 = puVar11;
    if (((ulong)param_4.unknown & 0x2000000000000000) != 0) {
      puVar25 = puVar14;
    }
    if (puVar25 == (undefined8 *)0x0) {
      _swift_bridgeObjectRelease();
    }
    else {
      if (((ulong)param_4.unknown >> 0x3c & 1) == 0) {
        if (((ulong)param_4.unknown >> 0x3d & 1) == 0) {
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            puVar11 = (undefined8 *)param_4.unknown;
            UVar15 = Swift::_StringObject::get_sharedUTF8(param_3);
          }
          else {
            UVar15.unknown = (undefined *)(((ulong)param_4.unknown & 0xfffffffffffffff) + 0x20);
          }
          if (*UVar15.unknown == 0x2b) {
            if ((long)puVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba3c);
              (*pcVar3)();
            }
            puVar26 = (undefined *)((long)puVar11 + -1);
            if (puVar26 == (undefined *)0x0) goto LAB_10083b7b8;
            param_3.unknown = (undefined *)0x0;
            do {
              UVar15.unknown = UVar15.unknown + 1;
              if (((9 < (byte)*UVar15.unknown - 0x30) ||
                  (lVar18 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                 param_3.unknown = (undefined *)(lVar18 + uVar22), SCARRY8(lVar18,uVar22)))
              goto LAB_10083b7b8;
              uVar19 = 0;
              puVar26 = puVar26 + -1;
            } while (puVar26 != (undefined *)0x0);
          }
          else if (*UVar15.unknown == 0x2d) {
            if ((long)puVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba34);
              (*pcVar3)();
            }
            puVar26 = (undefined *)((long)puVar11 + -1);
            if (puVar26 == (undefined *)0x0) {
LAB_10083b7b8:
              param_3.unknown = (undefined *)0x0;
              uVar19 = 1;
            }
            else {
              param_3.unknown = (undefined *)0x0;
              do {
                UVar15.unknown = UVar15.unknown + 1;
                if (((9 < (byte)*UVar15.unknown - 0x30) ||
                    (lVar18 = (long)param_3.unknown * 10,
                    SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                   param_3.unknown = (undefined *)(lVar18 - uVar22), SBORROW8(lVar18,uVar22)))
                goto LAB_10083b7b8;
                uVar19 = 0;
                puVar26 = puVar26 + -1;
              } while (puVar26 != (undefined *)0x0);
            }
          }
          else {
            if (puVar11 == (undefined8 *)0x0) goto LAB_10083b7b8;
            param_3.unknown = (undefined *)0x0;
            if (UVar15.unknown == (byte *)0x0) {
              uVar19 = 0;
            }
            else {
              do {
                if (((9 < (byte)*UVar15.unknown - 0x30) ||
                    (lVar18 = (long)param_3.unknown * 10,
                    SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                   param_3.unknown = (undefined *)(lVar18 + uVar22), SCARRY8(lVar18,uVar22)))
                goto LAB_10083b7b8;
                uVar19 = 0;
                puVar11 = (undefined8 *)((long)puVar11 + -1);
                UVar15.unknown = UVar15.unknown + 1;
              } while (puVar11 != (undefined8 *)0x0);
            }
          }
        }
        else {
          local_90 = (undefined8 *)param_3.unknown;
          uStack_88 = (ulong)param_4.unknown & 0xffffffffffffff;
          uVar19 = (uint)param_3.unknown & 0xff;
          if (uVar19 == 0x2b) {
            if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba40);
              (*pcVar3)();
            }
            puVar26 = (undefined *)((long)puVar14 + -1);
            if (puVar26 == (undefined *)0x0) goto LAB_10083b7b8;
            param_3.unknown = (undefined *)0x0;
            pbVar16 = (byte *)((ulong)&local_90 | 1);
            do {
              if (((9 < *pbVar16 - 0x30) ||
                  (lVar18 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)(*pbVar16 - 0x30),
                 param_3.unknown = (undefined *)(lVar18 + uVar22), SCARRY8(lVar18,uVar22)))
              goto LAB_10083b7b8;
              uVar19 = 0;
              puVar26 = puVar26 + -1;
              pbVar16 = pbVar16 + 1;
            } while (puVar26 != (undefined *)0x0);
          }
          else if (uVar19 == 0x2d) {
            if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba38);
              (*pcVar3)();
            }
            puVar26 = (undefined *)((long)puVar14 + -1);
            if (puVar26 == (undefined *)0x0) goto LAB_10083b7b8;
            param_3.unknown = (undefined *)0x0;
            pbVar16 = (byte *)((ulong)&local_90 | 1);
            do {
              if (((9 < *pbVar16 - 0x30) ||
                  (lVar18 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)(*pbVar16 - 0x30),
                 param_3.unknown = (undefined *)(lVar18 - uVar22), SBORROW8(lVar18,uVar22)))
              goto LAB_10083b7b8;
              uVar19 = 0;
              puVar26 = puVar26 + -1;
              pbVar16 = pbVar16 + 1;
            } while (puVar26 != (undefined *)0x0);
          }
          else {
            if (puVar14 == (undefined8 *)0x0) goto LAB_10083b7b8;
            param_3.unknown = (undefined *)0x0;
            ppuVar13 = &local_90;
            do {
              if (((9 < *(byte *)ppuVar13 - 0x30) ||
                  (lVar18 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)(*(byte *)ppuVar13 - 0x30),
                 param_3.unknown = (undefined *)(lVar18 + uVar22), SCARRY8(lVar18,uVar22)))
              goto LAB_10083b7b8;
              uVar19 = 0;
              puVar14 = (undefined8 *)((long)puVar14 + -1);
              ppuVar13 = (undefined8 **)((long)ppuVar13 + 1);
            } while (puVar14 != (undefined8 *)0x0);
          }
        }
      }
      else {
        puVar25 = (undefined8 *)param_4.unknown;
        FUN_100837280();
        uVar19 = (uint)puVar25;
      }
      _swift_bridgeObjectRelease();
      unaff_x20.unknown = param_3.unknown;
      if ((uVar19 & 0xff) != 1) {
        return (undefined8 *)param_3.unknown;
      }
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,param_4.unknown,0,0);
    *(undefined8 **)param_4.unknown = param_1;
    *(undefined8 **)((long)param_4.unknown + 8) = param_2;
    uVar28 = 1;
    _Var7.unknown = param_4.unknown;
    goto LAB_10083b804;
  case 2:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    local_68 = (undefined8 *)0x0;
    local_80 = &local_68;
    _Var7.unknown = param_4.unknown;
    if (((ulong)param_4.unknown >> 0x3c & 1) == 0) {
      if (((ulong)param_4.unknown >> 0x3d & 1) == 0) {
        if (((ulong)param_3.unknown >> 0x3c & 1) == 0) goto LAB_10083b9bc;
        FUN_100837380(&local_70,((ulong)param_4.unknown & 0xfffffffffffffff) + 0x20,&local_68);
        goto LAB_10083ab34;
      }
      uStack_a0 = (ulong)param_4.unknown & 0xffffffffffffff;
      local_a8 = (undefined8 *)param_3.unknown;
      FUN_100837380(&local_70,&local_a8,&local_68);
      puVar25 = local_70;
      uVar24 = local_70._0_1_;
      _swift_bridgeObjectRelease();
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,uVar24);
    }
    else {
LAB_10083b9bc:
      Swift::_StringGuts::__slowWithCString((_StringGuts)0x10083d3c8);
LAB_10083ab34:
      _swift_bridgeObjectRelease();
      puVar25 = local_70;
    }
    if (((ulong)puVar25 & 1) != 0) {
      return local_68;
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,_Var7.unknown,0,0);
    *(undefined8 **)_Var7.unknown = param_1;
    *(undefined8 **)((long)_Var7.unknown + 8) = param_2;
    uVar28 = 2;
    unaff_x20.unknown = param_4.unknown;
    goto LAB_10083b804;
  case 3:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    if (((param_3.unknown == (undefined *)0x65757274) && (param_4.unknown == &DAT_e400000000000000))
       || (bVar4 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)param_3.unknown,param_4,(_StringComparisonResult)0x74),
          bVar4)) {
      _swift_bridgeObjectRelease(param_4.unknown);
      return (undefined8 *)&DAT_00000001;
    }
    if ((param_3.unknown == (undefined *)0x65736c6166) && (param_4.unknown == &DAT_e500000000000000)
       ) {
      _swift_bridgeObjectRelease(&DAT_e500000000000000);
      return (undefined8 *)0x0;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)param_3.unknown,param_4,(_StringComparisonResult)0x66);
    _Var7.unknown = param_4.unknown;
    _swift_bridgeObjectRelease();
    if (bVar4) {
      return (undefined8 *)0x0;
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,_Var7.unknown,0,0);
    *(undefined8 **)_Var7.unknown = param_1;
    *(undefined8 **)((long)_Var7.unknown + 8) = param_2;
    uVar28 = 3;
    unaff_x20.unknown = param_4.unknown;
LAB_10083b804:
    *(undefined8 *)((long)_Var7.unknown + 0x18) = 0;
    *(undefined8 *)((long)_Var7.unknown + 0x10) = uVar28;
    *(undefined1 *)((long)_Var7.unknown + 0x20) = 1;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_2);
    break;
  case 4:
    if (uVar19 >> 0x1e < 2) {
      if (uVar19 >> 0x1e == 0) {
        puVar25 = (undefined8 *)((ulong)param_4.unknown >> 0x30 & 0xff);
      }
      else {
        if (SBORROW4(iVar10,iVar20)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba2c);
          (*pcVar3)();
        }
        puVar25 = (undefined8 *)(long)(iVar10 - iVar20);
      }
    }
    else {
      if (uVar19 >> 0x1e != 2) {
        return (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      puVar25 = (undefined8 *)
                (*(long *)((long)param_3.unknown + 0x18) - *(long *)((long)param_3.unknown + 0x10));
      if (SBORROW8(*(long *)((long)param_3.unknown + 0x18),*(long *)((long)param_3.unknown + 0x10)))
      {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b350);
        (*pcVar3)();
      }
    }
    unaff_x20.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar25 != (undefined8 *)0x0) {
      unaff_x20.unknown = (undefined *)puVar25;
      FUN_100837588(puVar25,0);
      tVar29 = Foundation::Data::_copyContents(initializing,(Data)(unaff_x20.unknown + 0x20));
      (**(code **)(lVar18 + 8))(initializing.unknown,IVar5.unknown);
      if ((undefined8 *)tVar29._.unknown.unknown != puVar25) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b580);
        (*pcVar3)();
      }
    }
    break;
  case 5:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    FUN_100839fb4();
    _swift_bridgeObjectRelease(param_4.unknown);
    unaff_x20.unknown = param_3.unknown;
    break;
  case 6:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    FUN_100839fb4();
    _swift_bridgeObjectRelease(param_4.unknown);
    uVar22 = *(ulong *)((long)param_3.unknown + 0x10);
    if (uVar22 == 0) {
      _swift_bridgeObjectRelease(param_3.unknown);
      unaff_x20.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_a8 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835570(0,uVar22,0);
      uVar27 = 0;
      do {
        puVar11 = local_a8;
        if (*(ulong *)((long)param_3.unknown + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b93c);
          (*pcVar3)();
        }
        _Var21.unknown = *(undefined **)((long)param_3.unknown + (uVar27 * 2 + 4) * 8);
        puVar14 = (undefined8 *)((undefined8 *)((long)param_3.unknown + (uVar27 * 2 + 4) * 8))[1];
        puVar9 = (undefined8 *)((ulong)_Var21.unknown & 0xffffffffffff);
        puVar12 = (undefined8 *)((ulong)puVar14 >> 0x38 & 0xf);
        puVar25 = puVar9;
        if (((ulong)puVar14 & 0x2000000000000000) != 0) {
          puVar25 = puVar12;
        }
        puVar8 = puVar14;
        if (puVar25 == (undefined8 *)0x0) {
          _swift_bridgeObjectRetain();
          goto LAB_10083b944;
        }
        if (((ulong)puVar14 >> 0x3c & 1) == 0) {
          if (((ulong)puVar14 >> 0x3d & 1) == 0) {
            if (((ulong)_Var21.unknown >> 0x3c & 1) == 0) {
              puVar9 = puVar14;
              UVar15 = Swift::_StringObject::get_sharedUTF8(_Var21);
            }
            else {
              UVar15.unknown = (undefined *)(((ulong)puVar14 & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar15.unknown == 0x2b) {
              if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b9b0);
                (*pcVar3)();
              }
              lVar18 = (long)puVar9 - 1;
              if (lVar18 == 0) goto LAB_10083b110;
              _Var21.unknown = (undefined *)0x0;
              do {
                UVar15.unknown = UVar15.unknown + 1;
                if (((9 < (byte)*UVar15.unknown - 0x30) ||
                    (lVar17 = (long)_Var21.unknown * 10,
                    SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                   _Var21.unknown = (undefined *)(lVar17 + uVar1), SCARRY8(lVar17,uVar1)))
                goto LAB_10083b110;
                uVar19 = 0;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            else if (*UVar15.unknown == 0x2d) {
              if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b9b4);
                (*pcVar3)();
              }
              lVar18 = (long)puVar9 - 1;
              if (lVar18 == 0) {
LAB_10083b110:
                _Var21.unknown = (undefined *)0x0;
                uVar19 = 1;
              }
              else {
                _Var21.unknown = (undefined *)0x0;
                do {
                  UVar15.unknown = UVar15.unknown + 1;
                  if (((9 < (byte)*UVar15.unknown - 0x30) ||
                      (lVar17 = (long)_Var21.unknown * 10,
                      SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                     _Var21.unknown = (undefined *)(lVar17 - uVar1), SBORROW8(lVar17,uVar1)))
                  goto LAB_10083b110;
                  uVar19 = 0;
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
              }
            }
            else {
              if (puVar9 == (undefined8 *)0x0) goto LAB_10083b110;
              if (UVar15.unknown == (byte *)0x0) {
                uVar19 = 0;
                _Var21.unknown = (undefined *)0x0;
              }
              else {
                _Var21.unknown = (undefined *)0x0;
                do {
                  if (((9 < (byte)*UVar15.unknown - 0x30) ||
                      (lVar18 = (long)_Var21.unknown * 10,
                      SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)((byte)*UVar15.unknown - 0x30),
                     _Var21.unknown = (undefined *)(lVar18 + uVar1), SCARRY8(lVar18,uVar1)))
                  goto LAB_10083b110;
                  uVar19 = 0;
                  puVar9 = (undefined8 *)((long)puVar9 - 1);
                  UVar15.unknown = UVar15.unknown + 1;
                } while (puVar9 != (undefined8 *)0x0);
              }
            }
          }
          else {
            local_90 = (undefined8 *)_Var21.unknown;
            uStack_88 = (ulong)puVar14 & 0xffffffffffffff;
            uVar19 = (uint)_Var21.unknown & 0xff;
            if (uVar19 == 0x2b) {
              if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b9bc);
                (*pcVar3)();
              }
              lVar18 = (long)puVar12 + -1;
              if (lVar18 == 0) goto LAB_10083b110;
              _Var21.unknown = (undefined *)0x0;
              pbVar16 = (byte *)((ulong)&local_90 | 1);
              do {
                if (((9 < *pbVar16 - 0x30) ||
                    (lVar17 = (long)_Var21.unknown * 10,
                    SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*pbVar16 - 0x30),
                   _Var21.unknown = (undefined *)(lVar17 + uVar1), SCARRY8(lVar17,uVar1)))
                goto LAB_10083b110;
                uVar19 = 0;
                lVar18 = lVar18 + -1;
                pbVar16 = pbVar16 + 1;
              } while (lVar18 != 0);
            }
            else if (uVar19 == 0x2d) {
              if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b9b8);
                (*pcVar3)();
              }
              lVar18 = (long)puVar12 + -1;
              if (lVar18 == 0) goto LAB_10083b110;
              _Var21.unknown = (undefined *)0x0;
              pbVar16 = (byte *)((ulong)&local_90 | 1);
              do {
                if (((9 < *pbVar16 - 0x30) ||
                    (lVar17 = (long)_Var21.unknown * 10,
                    SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*pbVar16 - 0x30),
                   _Var21.unknown = (undefined *)(lVar17 - uVar1), SBORROW8(lVar17,uVar1)))
                goto LAB_10083b110;
                uVar19 = 0;
                lVar18 = lVar18 + -1;
                pbVar16 = pbVar16 + 1;
              } while (lVar18 != 0);
            }
            else {
              if (puVar12 == (undefined8 *)0x0) goto LAB_10083b110;
              _Var21.unknown = (undefined *)0x0;
              ppuVar13 = &local_90;
              do {
                if (((9 < *(byte *)ppuVar13 - 0x30) ||
                    (lVar18 = (long)_Var21.unknown * 10,
                    SUB168(SEXT816((long)_Var21.unknown) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*(byte *)ppuVar13 - 0x30),
                   _Var21.unknown = (undefined *)(lVar18 + uVar1), SCARRY8(lVar18,uVar1)))
                goto LAB_10083b110;
                uVar19 = 0;
                puVar12 = (undefined8 *)((long)puVar12 + -1);
                ppuVar13 = (undefined8 **)((long)ppuVar13 + 1);
              } while (puVar12 != (undefined8 *)0x0);
            }
          }
          _swift_bridgeObjectRetain();
        }
        else {
          _swift_bridgeObjectRetain_n(puVar14,2);
          puVar25 = puVar14;
          FUN_100837280(_Var21.unknown,puVar14,10);
          uVar19 = (uint)puVar25;
          _swift_bridgeObjectRelease();
        }
        if ((uVar19 & 0xff) == 1) {
LAB_10083b944:
          FUN_10080a3bc();
          _swift_allocError(&DAT_100f05368,puVar8,0,0);
          *puVar8 = param_1;
          puVar8[1] = param_2;
          puVar8[3] = 0;
          puVar8[2] = 6;
          *(undefined1 *)(puVar8 + 4) = 1;
          _swift_willThrow();
          _swift_bridgeObjectRetain(param_2);
          _swift_release(puVar11);
          _swift_bridgeObjectRelease(puVar14);
LAB_10083b9a4:
          _swift_bridgeObjectRelease(param_3.unknown);
          return puVar11;
        }
        _swift_bridgeObjectRelease(puVar14);
        uVar1 = puVar11[2];
        local_a8 = puVar11;
        if ((ulong)puVar11[3] >> 1 <= uVar1) {
          FUN_100835570(1 < (ulong)puVar11[3],uVar1 + 1,1);
        }
        unaff_x20.unknown = (undefined *)local_a8;
        uVar27 = uVar27 + 1;
        local_a8[2] = uVar1 + 1;
        local_a8[uVar1 + 4] = _Var21.unknown;
      } while (uVar27 != uVar22);
      _swift_bridgeObjectRelease(param_3.unknown);
    }
    break;
  case 7:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    FUN_100839fb4();
    _swift_bridgeObjectRelease(param_4.unknown);
    uVar22 = *(ulong *)((long)param_3.unknown + 0x10);
    if (uVar22 == 0) {
      _swift_bridgeObjectRelease(param_3.unknown);
      unaff_x20.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_68 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835554(0,uVar22,0);
      uVar27 = 0;
      puVar23 = (ulong *)((long)param_3.unknown + 0x28);
      do {
        puVar11 = local_68;
        if (*(ulong *)((long)param_3.unknown + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b938);
          (*pcVar3)();
        }
        uVar1 = *puVar23;
        local_70 = (undefined8 *)0x0;
        local_80 = &local_70;
        if ((uVar1 >> 0x3c & 1) == 0) {
          if ((uVar1 >> 0x3d & 1) == 0) {
            if ((puVar23[-1] >> 0x3c & 1) == 0) goto LAB_10083acf4;
            _swift_bridgeObjectRetain(uVar1);
            pcVar3 = (code *)((uVar1 & 0xfffffffffffffff) + 0x20);
            FUN_100837380(&local_91,pcVar3,&local_70);
          }
          else {
            uStack_a0 = uVar1 & 0xffffffffffffff;
            local_a8 = (undefined8 *)puVar23[-1];
            _swift_bridgeObjectRetain(uVar1);
            pcVar3 = (code *)&local_a8;
            FUN_100837380(&local_91,pcVar3,&local_70);
          }
        }
        else {
LAB_10083acf4:
          _swift_bridgeObjectRetain(uVar1);
          pcVar3 = FUN_10083d2b0;
          Swift::_StringGuts::__slowWithCString((_StringGuts)0x10083d2b0);
        }
        if ((local_91 & 1) == 0) {
          FUN_10080a3bc();
          _swift_allocError(&DAT_100f05368,pcVar3,0,0);
          *(undefined8 **)pcVar3 = param_1;
          *(undefined8 **)((long)pcVar3 + 8) = param_2;
          *(undefined8 **)((long)pcVar3 + 0x18) = (undefined8 *)0x0;
          *(undefined8 **)((long)pcVar3 + 0x10) = (undefined8 *)0x7;
          *(code *)((long)pcVar3 + 0x20) = (code)0x1;
          _swift_willThrow();
          _swift_bridgeObjectRetain(param_2);
          _swift_release(puVar11);
          _swift_bridgeObjectRelease(uVar1);
          goto LAB_10083b9a4;
        }
        _swift_bridgeObjectRelease(uVar1);
        puVar25 = local_70;
        uVar1 = puVar11[2];
        local_68 = puVar11;
        if ((ulong)puVar11[3] >> 1 <= uVar1) {
          FUN_100835554(1 < (ulong)puVar11[3],uVar1 + 1,1);
        }
        unaff_x20.unknown = (undefined *)local_68;
        uVar27 = uVar27 + 1;
        local_68[2] = uVar1 + 1;
        local_68[uVar1 + 4] = puVar25;
        puVar23 = puVar23 + 2;
      } while (uVar22 != uVar27);
      _swift_bridgeObjectRelease(param_3.unknown);
    }
    break;
  case 8:
    FUN_10083ba68(param_3.unknown,param_4.unknown,param_5 & 1);
    FUN_100839fb4();
    _swift_bridgeObjectRelease(param_4.unknown);
    uVar22 = *(ulong *)((long)param_3.unknown + 0x10);
    if (uVar22 == 0) {
      _swift_bridgeObjectRelease(param_3.unknown);
      unaff_x20.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_90 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835538(0,uVar22,0);
      uVar27 = 0;
      puVar25 = (undefined8 *)((long)param_3.unknown + 0x28);
      do {
        puVar11 = local_90;
        if (*(ulong *)((long)param_3.unknown + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b934);
          (*pcVar3)();
        }
        _Var7.unknown = (undefined *)puVar25[-1];
        _Var2.unknown = (undefined *)*puVar25;
        if ((_Var7.unknown == (undefined *)0x65757274 && _Var2.unknown == &DAT_e400000000000000) ||
           (bVar4 = Swift::_stringCompareWithSmolCheck(_Var7,_Var2,(_StringComparisonResult)0x74),
           bVar4)) {
          uVar24 = 1;
        }
        else {
          if ((_Var7.unknown != (undefined *)0x65736c6166) ||
             (_Var2.unknown != &DAT_e500000000000000)) {
            bVar4 = Swift::_stringCompareWithSmolCheck(_Var7,_Var2,(_StringComparisonResult)0x66);
            puVar14 = (undefined8 *)CONCAT71(extraout_var,bVar4);
            if (!bVar4) {
              FUN_10080a3bc();
              _swift_allocError(&DAT_100f05368,puVar14,0,0);
              *puVar14 = param_1;
              puVar14[1] = param_2;
              puVar14[3] = 0;
              puVar14[2] = 8;
              *(undefined1 *)(puVar14 + 4) = 1;
              _swift_willThrow();
              _swift_bridgeObjectRetain(param_2);
              _swift_release(puVar11);
              goto LAB_10083b9a4;
            }
          }
          uVar24 = 0;
        }
        uVar1 = puVar11[2];
        local_90 = puVar11;
        if ((ulong)puVar11[3] >> 1 <= uVar1) {
          FUN_100835538(1 < (ulong)puVar11[3],uVar1 + 1,1);
        }
        unaff_x20.unknown = (undefined *)local_90;
        uVar27 = uVar27 + 1;
        local_90[2] = uVar1 + 1;
        *(undefined1 *)((long)local_90 + uVar1 + 0x20) = uVar24;
        puVar25 = puVar25 + 2;
      } while (uVar22 != uVar27);
      _swift_bridgeObjectRelease(param_3.unknown);
    }
    break;
  case 9:
    unaff_x20.unknown = &DAT_100fe74f0;
    FUN_1000f7830(&DAT_100fe74f0,&DAT_100c7c628);
    _swift_allocObject();
    *(undefined8 *)((long)unaff_x20.unknown + 0x18) = 2;
    *(undefined8 *)((long)unaff_x20.unknown + 0x10) = 1;
    if (uVar19 >> 0x1e < 2) {
      if (uVar19 >> 0x1e == 0) {
        puVar26 = (undefined *)((ulong)param_4.unknown >> 0x30 & 0xff);
      }
      else {
        if (SBORROW4(iVar10,iVar20)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083ba30);
          (*pcVar3)();
        }
        puVar26 = (undefined *)(long)(iVar10 - iVar20);
LAB_10083b5a4:
        FUN_1001037b4(param_3.unknown,param_4.unknown);
      }
      if (puVar26 == (undefined *)0x0) goto LAB_10083b610;
      puVar6 = puVar26;
      FUN_100837588(puVar26,0);
      tVar29 = Foundation::Data::_copyContents(initializing,(Data)(puVar6 + 0x20));
      FUN_10003bf2c(param_3.unknown,param_4.unknown);
      (**(code **)(lVar18 + 8))(initializing.unknown,IVar5.unknown);
      if (tVar29._.unknown.unknown != puVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b610);
        (*pcVar3)();
      }
    }
    else {
      if (uVar19 >> 0x1e == 2) {
        puVar26 = (undefined *)
                  (*(long *)((long)param_3.unknown + 0x18) - *(long *)((long)param_3.unknown + 0x10)
                  );
        if (SBORROW8(*(long *)((long)param_3.unknown + 0x18),*(long *)((long)param_3.unknown + 0x10)
                    )) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10083b368);
          (*pcVar3)();
        }
        goto LAB_10083b5a4;
      }
LAB_10083b610:
      FUN_10003bf2c(param_3.unknown,param_4.unknown);
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    *(undefined **)((long)unaff_x20.unknown + 0x20) = puVar6;
  }
  return (undefined8 *)unaff_x20.unknown;
}



/* Address: 0x10083ba68 | FUN_10083ba68 */

String FUN_10083ba68(__DataStorage *param_1,void *param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  char *pcVar8;
  UnsafeBufferPointer<__int8> UVar9;
  undefined *puVar10;
  __DataStorage **pp_Var11;
  undefined *puVar12;
  char *pcVar13;
  void *pvVar14;
  uint uVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  tuple2_conflict1 tVar19;
  __DataStorage *local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  __DataStorage *local_68;
  void *pvStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar15 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar15 == 0) {
      local_a0 = SUB81(param_1,0);
      uStack_9f = (undefined1)((ulong)param_1 >> 8);
      uStack_9e = (undefined1)((ulong)param_1 >> 0x10);
      uStack_9d = (undefined1)((ulong)param_1 >> 0x18);
      uStack_9c = (undefined1)((ulong)param_1 >> 0x20);
      uStack_9b = (undefined1)((ulong)param_1 >> 0x28);
      uStack_9a = (undefined1)((ulong)param_1 >> 0x30);
      uStack_99 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_98 = SUB81(param_2,0);
      uStack_97 = (undefined1)((ulong)param_2 >> 8);
      uStack_96 = (undefined1)((ulong)param_2 >> 0x10);
      uStack_95 = (undefined1)((ulong)param_2 >> 0x18);
      uStack_94 = (undefined1)((ulong)param_2 >> 0x20);
      pcVar13 = (char *)((ulong)param_2 >> 0x30 & 0xff);
      uStack_93 = (undefined1)((ulong)param_2 >> 0x28);
LAB_10083bbc0:
      SVar17.bridgeObject = param_3;
      SVar17.str = pcVar13;
      tVar19 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)&local_a0,SVar17);
      pvVar14 = tVar19.result.bridgeObject;
      local_68 = tVar19.result.str;
      goto LAB_10083bcd4;
    }
    lVar16 = (long)(int)param_1;
    pcVar13 = (char *)(((long)param_1 >> 0x20) - lVar16);
    if ((long)param_1 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10083be20);
      (*pcVar4)();
    }
    p_Var6 = param_1;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),param_1);
    if (p_Var6 != (__DataStorage *)0x0) {
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),p_Var6);
      if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10083be28);
        (*pcVar4)();
      }
      UVar9.unknown = p_Var6 + (lVar16 - (long)p_Var7);
      goto LAB_10083bb94;
    }
    Foundation::__DataStorage::get__length
              ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_10083bbd0:
    UVar9.unknown = (undefined *)0x0;
    pcVar8 = (char *)0x0;
  }
  else {
    if (uVar15 != 2) {
      uStack_98 = 0;
      uStack_97 = 0;
      uStack_96 = 0;
      uStack_95 = 0;
      uStack_94 = 0;
      uStack_93 = 0;
      local_a0 = 0;
      uStack_9f = 0;
      uStack_9e = 0;
      uStack_9d = 0;
      uStack_9c = 0;
      uStack_9b = 0;
      uStack_9a = 0;
      uStack_99 = 0;
      pcVar13 = (char *)0x0;
      goto LAB_10083bbc0;
    }
    lVar16 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    UVar9.unknown = param_1;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),param_1);
    p_Var7 = (__DataStorage *)0x0;
    if ((__DataStorage *)UVar9.unknown != (__DataStorage *)0x0) {
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),
                          (__DataStorage *)UVar9.unknown);
      if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10083be24);
        (*pcVar4)();
      }
      UVar9.unknown = UVar9.unknown + (lVar16 - (long)p_Var7);
    }
    pcVar13 = (char *)(lVar1 - lVar16);
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10083bb60);
      (*pcVar4)();
    }
LAB_10083bb94:
    pcVar8 = (char *)Foundation::__DataStorage::get__length
                               ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),p_Var7);
    if ((__DataStorage *)UVar9.unknown == (__DataStorage *)0x0) goto LAB_10083bbd0;
    if ((long)pcVar13 <= (long)pcVar8) {
      pcVar8 = pcVar13;
    }
  }
  SVar18.bridgeObject = param_3;
  SVar18.str = pcVar8;
  tVar19 = Swift::String::_fromUTF8Repairing(UVar9,SVar18);
  local_68 = tVar19.result.str;
  pvVar14 = tVar19.result.bridgeObject;
  if (tVar19.result.bridgeObject == (void *)0x0) {
    local_68 = param_1;
    pvStack_60 = param_2;
    FUN_1001037b4(param_1,param_2,tVar19._16_8_);
    puVar10 = &DAT_100fe7560;
    FUN_1000f7830(&DAT_100fe7560,&DAT_100c7c680);
    pp_Var11 = &local_d0;
    _swift_dynamicCast(pp_Var11,&local_68,PTR___type_metadata_for_Foundation_Data_100ea7300,puVar10,
                       6);
    if (((ulong)pp_Var11 & 1) == 0) {
      local_b0 = 0;
      pvStack_c8 = (void *)0x0;
      local_d0 = (__DataStorage *)0x0;
      uStack_b8 = 0;
      local_c0 = 0;
      FUN_100838698(&local_d0);
    }
    else {
      FUN_100076508(&local_d0,&local_a0);
      FUN_100004640(&local_a0,local_88);
      bVar5 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
      if (bVar5) {
        FUN_100004640(&local_a0,local_88);
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100004594(&local_a0);
        local_68 = local_d0;
        pvVar14 = pvStack_c8;
        goto LAB_10083bcd4;
      }
      FUN_100004594(&local_a0);
    }
    FUN_10083c5f8();
    local_68 = param_1;
    pvVar14 = param_2;
  }
LAB_10083bcd4:
  pvStack_60 = pvVar14;
  FUN_1008322f8();
  (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
  uVar3 = uStack_b8;
  uStack_98 = SUB81(pvStack_c8,0);
  uStack_97 = (undefined1)((ulong)pvStack_c8 >> 8);
  uStack_96 = (undefined1)((ulong)pvStack_c8 >> 0x10);
  uStack_95 = (undefined1)((ulong)pvStack_c8 >> 0x18);
  uStack_94 = (undefined1)((ulong)pvStack_c8 >> 0x20);
  uStack_93 = (undefined1)((ulong)pvStack_c8 >> 0x28);
  uStack_92 = (undefined2)((ulong)pvStack_c8 >> 0x30);
  local_a0 = SUB81(local_d0,0);
  uStack_9f = (undefined1)((ulong)local_d0 >> 8);
  uStack_9e = (undefined1)((ulong)local_d0 >> 0x10);
  uStack_9d = (undefined1)((ulong)local_d0 >> 0x18);
  uStack_9c = (undefined1)((ulong)local_d0 >> 0x20);
  uStack_9b = (undefined1)((ulong)local_d0 >> 0x28);
  uStack_9a = (undefined1)((ulong)local_d0 >> 0x30);
  uStack_99 = (undefined1)((ulong)local_d0 >> 0x38);
  local_90 = local_c0;
  local_88 = uStack_b8;
  FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
  FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
  (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
  _swift_bridgeObjectRelease(uVar3);
  uStack_98 = SUB81(pvStack_c8,0);
  uStack_97 = (undefined1)((ulong)pvStack_c8 >> 8);
  uStack_96 = (undefined1)((ulong)pvStack_c8 >> 0x10);
  uStack_95 = (undefined1)((ulong)pvStack_c8 >> 0x18);
  uStack_94 = (undefined1)((ulong)pvStack_c8 >> 0x20);
  uStack_93 = (undefined1)((ulong)pvStack_c8 >> 0x28);
  uStack_92 = (undefined2)((ulong)pvStack_c8 >> 0x30);
  local_a0 = SUB81(local_d0,0);
  uStack_9f = (undefined1)((ulong)local_d0 >> 8);
  uStack_9e = (undefined1)((ulong)local_d0 >> 0x10);
  uStack_9d = (undefined1)((ulong)local_d0 >> 0x18);
  uStack_9c = (undefined1)((ulong)local_d0 >> 0x20);
  uStack_9b = (undefined1)((ulong)local_d0 >> 0x28);
  uStack_9a = (undefined1)((ulong)local_d0 >> 0x30);
  uStack_99 = (undefined1)((ulong)local_d0 >> 0x38);
  local_88 = uStack_b8;
  local_90 = local_c0;
  local_80 = local_b0;
  uStack_78 = uStack_a8;
  puVar10 = &DAT_100fe74a8;
  FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
  puVar12 = &DAT_100fe74b0;
  FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
  SVar17 = Swift::String::_init(&local_a0,puVar10,puVar12);
  _swift_bridgeObjectRelease(pvVar14);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return SVar17;
}



/* Address: 0x10083be2c | FUN_10083be2c */

void FUN_10083be2c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  FUN_10083be70(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined2 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x10083be70 | FUN_10083be70 */

void FUN_10083be70(long *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  FUN_100004640(unaff_x20 + 0x28,uVar1);
  (**(code **)(lVar7 + 8))(param_2,param_3,uVar1,lVar7);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = param_2;
    uVar8 = param_3;
    FUN_100071370();
    if ((uVar8 & 1) != 0) {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar3 * 0x18);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      FUN_1001037b4(uVar1,uVar2);
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = param_2;
      uVar8 = param_3;
      uVar4 = uVar1;
      FUN_10083a9e8();
      if (unaff_x21 != 0) {
        FUN_10003bf2c(uVar1,uVar2);
        _swift_bridgeObjectRelease(param_3);
        return;
      }
      FUN_10003bf2c(uVar1,uVar2);
      uVar5 = (ushort)uVar4 & 0x1ff;
      goto LAB_10083bf84;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  lVar7 = 0;
  uVar8 = 0;
  uVar5 = 0x200;
LAB_10083bf84:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = lVar7;
  param_1[3] = uVar8;
  *(ushort *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x10083bfd0 | FUN_10083bfd0 */

/* WARNING: Removing unreachable block (ram,0x00010083c0bc) */

void FUN_10083bfd0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  FUN_100004640(unaff_x20 + 0x28,uVar1);
  (**(code **)(lVar7 + 8))(param_4,param_5,uVar1,lVar7);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = param_4;
    uVar8 = param_5;
    FUN_100071370();
    if ((uVar8 & 1) != 0) {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar3 * 0x18);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      FUN_1001037b4(uVar1,uVar2);
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = param_4;
      uVar8 = param_5;
      uVar4 = uVar1;
      FUN_10083a9e8();
      FUN_10003bf2c(uVar1,uVar2);
      uVar5 = (ushort)uVar4 & 0x1ff;
      goto LAB_10083c0f0;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  lVar7 = 0;
  uVar8 = 0;
  uVar5 = 0x200;
LAB_10083c0f0:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = lVar7;
  param_1[3] = uVar8;
  *(ushort *)(param_1 + 4) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010083c120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10083c144 | FUN_10083c144 */

void FUN_10083c144(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100803754(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8,&DAT_100f05ba8,param_9);
  return;
}



/* Address: 0x10083c21c | FUN_10083c21c */

void FUN_10083c21c(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[3] = &DAT_100f05c28;
  param_1[4] = &PTR_PTR_100f05c68;
  puVar1 = &DAT_100f05af0;
  _swift_allocObject(&DAT_100f05af0,0x60,7);
  *param_1 = puVar1;
  FUN_10083d074();
  return;
}



/* Address: 0x10083c26c | FUN_10083c26c */

void FUN_10083c26c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100803b8c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,&DAT_100f05ba8,
                param_6,&PTR_PTR_100f05b08);
  return;
}



/* Address: 0x10083c318 | FUN_10083c318 */

void FUN_10083c318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100834cd8;
  FUN_10083bfd0(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x10083c390 | FUN_10083c390 */

void FUN_10083c390(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10083c144(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x10083c450 | FUN_10083c450 */

void FUN_10083c450(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10083c26c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6);
  return;
}



/* Address: 0x10083c4e8 | thunk_FUN_10083c660 */

void thunk_FUN_10083c660(void)

{
  FUN_10083c660();
  return;
}


