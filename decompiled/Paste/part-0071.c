/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d6c8c | FUN_1000d6c8c */

void FUN_1000d6c8c(undefined8 param_1,char *param_2,void *param_3)

{
  undefined *puVar1;
  Logger LVar2;
  char *pcVar3;
  void *pvVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  String subsystem;
  String category;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100facc90;
  FUN_1000037f0(&DAT_100facc90,&DAT_100c2bb68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar9 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    pcVar3 = param_2;
    pvVar4 = param_3;
    FUN_100071370(param_2);
    if (((ulong)pvVar4 & 1) != 0) {
      (**(code **)(lVar9 + 0x10))
                (lVar8,*(long *)(lVar6 + 0x38) + *(long *)(lVar9 + 0x48) * (long)pcVar3,
                 LVar2.unknown);
      pcVar5 = *(code **)(lVar9 + 0x20);
      (*pcVar5)(lVar8 - extraout_x12,lVar8,LVar2.unknown);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar6);
      (*pcVar5)(param_1,lVar8 - extraout_x12,LVar2.unknown);
      return;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(auStack_78);
  _swift_bridgeObjectRetain_n(param_3,2);
  subsystem.bridgeObject = param_3;
  subsystem.str = param_2;
  category.bridgeObject = param_3;
  category.str = param_2;
  os::Logger::init(subsystem,category);
  (**(code **)(lVar9 + 0x10))(puVar7,param_1,LVar2.unknown);
  (**(code **)(lVar9 + 0x38))(puVar7,0,1,LVar2.unknown);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  FUN_1000d6e90(puVar7,param_2,param_3);
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x1000d6e90 | FUN_1000d6e90 */

void FUN_1000d6e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Logger LVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100facc90;
  FUN_1000037f0(&DAT_100facc90,&DAT_100c2bb68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar5 - extraout_x12;
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar8 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000d7654(param_1,lVar6);
  lVar3 = lVar6;
  (**(code **)(lVar8 + 0x30))(lVar6,1,LVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_1000d76a4(lVar6);
    FUN_1000d76ec(puVar5,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000d76a4(puVar5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar7,lVar6,LVar2.unknown);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_1000d780c(lVar7,param_2,param_3,uVar4);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x1000d7014 | FUN_1000d7014 */

void FUN_1000d7014(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000d7030 | FUN_1000d7030 */

void FUN_1000d7030(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d7054 | FUN_1000d7054 */

void FUN_1000d7054(void)

{
  FUN_1000d6ad0();
  return;
}



/* Address: 0x1000d7074 | FUN_1000d7074 */

undefined * FUN_1000d7074(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  ppuVar2 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_1000d713c(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100eace60;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    local_60 = (undefined *)ppuVar2;
    local_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_10000cbfc(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100004594(&local_60);
  return puVar1;
}



/* Address: 0x1000d713c | FUN_1000d713c */

void FUN_1000d713c(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
                  ulong param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  undefined *local_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if (((ulong)param_5.unknown >> 0x3c & 1) == 0) {
        UVar2 = Swift::_StringObject::get_sharedUTF8(param_5);
        if (UVar2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d724c);
          (*pcVar1)();
        }
      }
      else {
        UVar2.unknown = (undefined *)((param_6 & 0xfffffffffffffff) + 0x20);
      }
      *param_1 = (ulong)UVar2.unknown;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != (void *)0x0)) &&
          (uVar3 = param_6 >> 0x38 & 0xf, uVar3 < (ulong)(param_3 - (long)param_2))) {
    uStack_38 = param_6 & 0xffffffffffffff;
    local_40 = param_5.unknown;
    _memcpy(param_2,&local_40,uVar3);
    *(undefined1 *)((long)param_2 + uVar3) = 0;
    *param_1 = (ulong)param_2;
    return;
  }
  FUN_1000d724c(param_5.unknown);
  *param_1 = param_6;
  return;
}



/* Address: 0x1000d724c | FUN_1000d724c */

void FUN_1000d724c(void)

{
  FUN_1000d72b0();
  FUN_1000037f0(&DAT_100facc88,&DAT_100c2bb60);
  _swift_initStaticObject();
  FUN_1000d73e4();
  return;
}



/* Address: 0x1000d72b0 | FUN_1000d72b0 */

undefined * FUN_1000d72b0(UTF8View param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  UnsafeMutableBufferPointer<__int8> into;
  UnsafeBufferPointer<__int8> UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar7 = param_1.unknown & 0xffffffffffff;
    puVar8 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar7;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar8;
    }
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      FUN_1000d74d4(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_1000d73e0;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_1000d73e0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d73e4);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_1000d734c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d7350);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        local_50 = param_1.unknown;
        _memcpy(puVar2 + 0x20,&local_50,(size_t)puVar8);
      }
    }
  }
  else {
    _Var3.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_1000d74d4(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_1000d73e0;
      if (into.unknown != _Var3.unknown) goto LAB_1000d734c;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x1000d73e4 | FUN_1000d73e4 */

void FUN_1000d73e4(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d74c8);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1000d7544();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d74cc);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d74d0);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d74d4);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1000d74d4 | FUN_1000d74d4 */

undefined * FUN_1000d74d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100facc88;
    FUN_1000037f0(&DAT_100facc88,&DAT_100c2bb60);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1000d7544 | FUN_1000d7544 */

undefined * FUN_1000d7544(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d7634);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100facc88;
    FUN_1000037f0(&DAT_100facc88,&DAT_100c2bb60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1000d7634 | FUN_1000d7634 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d7634(void)

{
  return ZEXT816(0x100facbf8);
}



/* Address: 0x1000d7654 | FUN_1000d7654 */

undefined8 FUN_1000d7654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100facc90;
  FUN_1000037f0(&DAT_100facc90,&DAT_100c2bb68);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000d76a4 | FUN_1000d76a4 */

undefined8 FUN_1000d76a4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100facc90;
  FUN_1000037f0(&DAT_100facc90,&DAT_100c2bb68);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000d76ec | FUN_1000d76ec */

void FUN_1000d76ec(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  Logger LVar2;
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
    LVar2 = os::Logger::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(LVar2.unknown + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1000d79d0();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar4 + 0x38);
    LVar2 = os::Logger::typeMetadataAccessor();
    lVar6 = *(long *)(LVar2.unknown + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,LVar2.unknown);
    FUN_1000d7f10(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000d77f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,LVar2.unknown);
  return;
}



/* Address: 0x1000d780c | FUN_1000d780c */

void FUN_1000d780c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  Logger LVar3;
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d78fc);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_1000d7bf0(lVar5,param_4 & 1);
    uVar7 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d78ac);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1000d79d0();
    lVar5 = *unaff_x20;
    goto joined_r0x0001000d7910;
  }
  lVar5 = *unaff_x20;
joined_r0x0001000d7910:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    LVar3 = os::Logger::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000d78f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(LVar3.unknown + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(LVar3.unknown + -8) + 0x48) * lVar2,param_1,LVar3.unknown
              );
    return;
  }
  FUN_1000d7940();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1000d7940 | FUN_1000d7940 */

void FUN_1000d7940(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  Logger LVar3;
  long lVar4;
  
  lVar4 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  LVar3 = os::Logger::typeMetadataAccessor();
  (**(code **)(*(long *)(LVar3.unknown + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(LVar3.unknown + -8) + 0x48) * param_1,param_4,LVar3.unknown
            );
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d79d0);
  (*pcVar2)();
}



/* Address: 0x1000d79d0 | FUN_1000d79d0 */

void FUN_1000d79d0(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  Logger LVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  __RawDictionaryStorage *original;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  LVar6 = os::Logger::typeMetadataAccessor();
  lVar8 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  this = (_DictionaryStorage *)&DAT_100facc98;
  FUN_1000037f0(&DAT_100facc98,&DAT_100c2bb70);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1000d7bc8:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var7 != original) || (p_Var1 + uVar9 * 8 <= p_Var7 + 0x40)) {
    _memmove(p_Var7 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1000d7b00;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar8 + 0x48) * uVar10;
      (**(code **)(lVar8 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x38) + lVar12,LVar6.unknown);
      puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      (**(code **)(lVar8 + 0x20))
                (*(long *)(p_Var7 + 0x38) + lVar12,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),LVar6.unknown);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_1000d7b00:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000d7bf0);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          _swift_release(original);
          goto LAB_1000d7bc8;
        }
        local_68 = *(ulong *)(p_Var1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar13 = lVar11;
    }
  } while( true );
}



/* Address: 0x1000d7bf0 | FUN_1000d7bf0 */

void FUN_1000d7bf0(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  Logger LVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar19;
  long lVar20;
  __RawDictionaryStorage *p_Var21;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  LVar8 = os::Logger::typeMetadataAccessor();
  lVar12 = *(long *)(LVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100facc98;
  FUN_1000037f0(&DAT_100facc98,&DAT_100c2bb70);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1000d7edc:
    _swift_release(original);
LAB_1000d7ee4:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var21 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var21;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d7f0c);
          (*pcVar7)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1000d7ee4;
          }
          uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var21 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(p_Var21,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1000d7edc;
        }
        uVar18 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar19 = *(long *)(lVar12 + 0x48);
    lVar11 = *(long *)(original + 0x38) + lVar19 * uVar14;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar12 + 0x10))(puVar13,lVar11,LVar8.unknown);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar13,lVar11,LVar8.unknown);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar10 >> 6;
    uVar14 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar6 = false;
      uVar14 = 0x3f - uVar17 >> 6;
      do {
        uVar10 = uVar15 + 1;
        if ((uVar10 == uVar14) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d7f10);
          (*pcVar7)();
        }
        uVar15 = 0;
        if (uVar10 != uVar14) {
          uVar15 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar14 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var9 + uVar15 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar15 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar15 + 0x40) = 1L << (uVar14 & 0x3f) | *(ulong *)(p_Var9 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar14 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    (**(code **)(lVar12 + 0x20))(*(long *)(p_Var9 + 0x38) + lVar19 * uVar14,puVar13,LVar8.unknown);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Address: 0x1000d7f10 | FUN_1000d7f10 */

void FUN_1000d7f10(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  Logger LVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar16 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar17 = BVar8.offset + 1U & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar17) {
        if (uVar9 < uVar17) {
LAB_1000d8004:
          if (param_1.offset < (long)uVar9) goto LAB_1000d7f8c;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
        if ((param_1.offset != uVar16) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        LVar10 = os::Logger::typeMetadataAccessor();
        lVar14 = *(long *)(*(long *)(LVar10.unknown + -8) + 0x48);
        lVar12 = lVar14 * param_1.offset;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * uVar16;
        lVar15 = lVar15 + lVar13;
        param_1.offset = uVar16;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,LVar10.unknown);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar17 <= uVar9) goto LAB_1000d8004;
LAB_1000d7f8c:
      uVar16 = uVar16 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d80e0);
  (*pcVar7)();
}



/* Address: 0x1000d80e0 | FUN_1000d80e0 */

void FUN_1000d80e0(undefined8 param_1,StaticString param_2,undefined8 param_3,char *param_4,
                  void *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  char *local_70;
  void *pvStack_68;
  
  SVar1 = Swift::StaticString::get_description(param_2);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2d;
  SVar4.bridgeObject = param_5;
  SVar4.str = param_4;
  Swift::String::append(SVar2,SVar4);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar2,SVar5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x2d;
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar3,SVar6);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar7.bridgeObject = param_5;
  SVar7.str = param_4;
  Swift::String::append(SVar2,SVar7);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  local_70 = SVar1.str;
  pvStack_68 = SVar1.bridgeObject;
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  Swift::TaskLocal::get(DAT_101057158);
  if (local_70 == (char *)0x0) {
    if (DAT_100facca0 != -1) {
      _swift_once(&DAT_100facca0,FUN_1000d8280);
    }
    FUN_1000daac0(param_1,0,pvStack_68,param_7,param_8,param_9);
  }
  else {
    FUN_1000d8388(param_1,local_70,pvStack_68,param_7,param_8,param_9);
    _swift_release(local_70);
  }
  _swift_bridgeObjectRelease(pvStack_68);
  return;
}



/* Address: 0x1000d8280 | FUN_1000d8280 */

void FUN_1000d8280(void)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  
  lVar1 = 0;
  FUN_1000dadf0();
  _swift_allocObject();
  puVar2 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  *(ID *)(lVar1 + 0x10) = IVar3;
  *(undefined **)(lVar1 + 0x18) = puVar2;
  DAT_100facca8 = lVar1;
  return;
}



/* Address: 0x1000d82d4 | FUN_1000d82d4 */

void FUN_1000d82d4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faccb0;
  FUN_1000037f0(&DAT_100faccb0,&DAT_100c2bb80);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1000d8308 | FUN_1000d8308 */

void FUN_1000d8308(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d8320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1);
  return;
}



/* Address: 0x1000d8324 | FUN_1000d8324 */

void FUN_1000d8324(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000d8330 | FUN_1000d8330 */

void FUN_1000d8330(void)

{
  return;
}



/* Address: 0x1000d8334 | FUN_1000d8334 */

void FUN_1000d8334(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100faccb8 != 0) {
    return;
  }
  puVar1 = &DAT_100eb5b78;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100faccb8 = param_1;
  return;
}



/* Address: 0x1000d8384 | thunk_FUN_1000d8308 */

void thunk_FUN_1000d8308(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d8320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1);
  return;
}



/* Address: 0x1000d8388 | FUN_1000d8388 */

void FUN_1000d8388(void)

{
  FUN_1000daac0();
  return;
}



/* Address: 0x1000d83a8 | FUN_1000d83a8 */

void FUN_1000d83a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID self;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  
  lVar4 = *param_1;
  self = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(self);
  puVar1 = &DAT_100eb5ba0;
  _swift_allocObject(&DAT_100eb5ba0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) =
       *(undefined8 *)
        (lVar4 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28 + 8);
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_68,0x21,0);
  _swift_retain(param_3);
  _swift_retain(param_1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
  FUN_1000d92a8(FUN_1000da3c4,puVar1,param_1,uVar2);
  _swift_release(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  _swift_endAccess(auStack_68);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1000d84ac | FUN_1000d84ac */

void FUN_1000d84ac(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ID self;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar7 = *param_2;
  self = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x18,&local_60,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    FUN_1000d8f84();
    if ((uVar3 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)param_2 * 0x10);
      pcVar5 = (code *)*puVar1;
      uVar4 = puVar1[1];
      _swift_retain(uVar4);
      _swift_bridgeObjectRelease(lVar6);
      goto LAB_1000d8544;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  pcVar5 = (code *)0x0;
  uVar4 = 0;
LAB_1000d8544:
  _swift_endAccess(&local_60);
  objc_stub::unlock(self);
  if (pcVar5 == (code *)0x0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_retain(uVar4);
    (*pcVar5)(&local_60);
    FUN_100004550(pcVar5,uVar4);
    FUN_100004550(pcVar5,uVar4);
  }
  puVar2 = &DAT_100facd80;
  FUN_1000037f0(&DAT_100facd80,&DAT_100c2bbf8);
  lVar6 = *(long *)(lVar7 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28 +
                   8);
  uVar4 = param_1;
  _swift_dynamicCast(param_1,&local_60,puVar2,lVar6,6);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,(uint)uVar4 ^ 1,1,lVar6);
  return;
}



/* Address: 0x1000d8600 | FUN_1000d8600 */

void FUN_1000d8600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  ID self;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(self);
  puVar2 = auStack_48;
  _swift_beginAccess(unaff_x20 + 0x18,puVar2,0x21,0);
  uVar1 = param_1;
  _swift_retain(param_1);
  FUN_1000d90c0();
  _swift_endAccess(auStack_48);
  FUN_100004550(uVar1,puVar2);
  _swift_release(param_1);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1000d8688 | FUN_1000d8688 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d8688(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d86bc | FUN_1000d86bc */

void FUN_1000d86bc(code *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  code *local_48;
  
  pcVar2 = param_1;
  FUN_1000d87ec();
  _swift_allocObject();
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(pcVar2 + 0x10) = IVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000da1f8();
  *(undefined **)(pcVar2 + 0x18) = puVar6;
  lVar5 = 0;
  FUN_1000dadf0();
  _swift_allocObject();
  puVar6 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar6);
  *(ID *)(lVar5 + 0x10) = IVar4;
  FUN_1000da0ec();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(long *)(pcVar2 + 0x20) = lVar5;
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  uVar1 = DAT_101057158;
  local_48 = pcVar2;
  _swift_retain(pcVar2);
  puVar3 = &DAT_100faccc8;
  FUN_1000037f0(&DAT_100faccc8,&DAT_100c2bba8);
  _swift_task_localValuePush(uVar1,&local_48,puVar3);
  (*param_1)();
  _swift_task_localValuePop();
  _swift_release(pcVar2);
  return;
}



/* Address: 0x1000d87ec | FUN_1000d87ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d87ec(void)

{
  return ZEXT816(0x100facd10);
}



/* Address: 0x1000d880c | FUN_1000d880c */

void FUN_1000d880c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  long unaff_x22;
  long *plVar8;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(long *)(unaff_x22 + 0x40) = param_1;
  *(ulong *)(unaff_x22 + 0x48) = param_2;
  lVar2 = param_1;
  FUN_1000d87ec();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(lVar2 + 0x10) = IVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000da1f8();
  *(undefined **)(lVar2 + 0x18) = puVar6;
  lVar5 = 0;
  FUN_1000dadf0();
  _swift_allocObject();
  puVar6 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar6);
  *(ID *)(lVar5 + 0x10) = IVar4;
  FUN_1000da0ec();
  *(undefined **)(lVar5 + 0x18) = puVar3;
  *(long *)(lVar2 + 0x20) = lVar5;
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  *(undefined8 *)(unaff_x22 + 0x68) = DAT_101057158;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long *)(unaff_x22 + 0x30) = lVar2;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_retain(lVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1000d8a0c;
    Swift::TaskLocal::_withValue();
    return;
  }
  _swift_retain(lVar2);
  if (param_1 == 0) {
    UVar7.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType(param_1);
    param_2 = param_2 & 0xcfffffffffffffff;
    UVar7 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x78) = UVar7.unknown;
  *(ulong *)(unaff_x22 + 0x80) = param_2;
  _swift_task_switch(FUN_1000d8a98,UVar7.unknown);
  return;
}



/* Address: 0x1000d8a0c | FUN_1000d8a0c */

void FUN_1000d8a0c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    _swift_release(*(undefined8 *)(lVar4 + 0x60));
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1000d8c60;
  }
  else {
    *(long *)(lVar4 + 0x98) = unaff_x20;
    uVar1 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1000d8c94;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1000d8a98 | FUN_1000d8a98 */

void FUN_1000d8a98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_retain();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  puVar3 = &DAT_100faccc8;
  FUN_1000037f0(&DAT_100faccc8,&DAT_100c2bba8);
  _swift_task_localValuePush(uVar1,(undefined8 *)(unaff_x22 + 0x38),puVar3);
  _swift_task_switch(FUN_1000d8b00,0,0);
  return;
}



/* Address: 0x1000d8b00 | FUN_1000d8b00 */

void FUN_1000d8b00(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x50);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000d8b60;
                    /* WARNING: Could not recover jumptable at 0x0001000d8b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0);
  return;
}



/* Address: 0x1000d8b60 | FUN_1000d8b60 */

void FUN_1000d8b60(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000d8bb8;
  }
  else {
    pcVar1 = FUN_1000d8c10;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x80));
  return;
}



/* Address: 0x1000d8bb8 | FUN_1000d8bb8 */

void FUN_1000d8bb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_localValuePop();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1000d8c60,uVar1,uVar2);
  return;
}



/* Address: 0x1000d8c10 | FUN_1000d8c10 */

void FUN_1000d8c10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_localValuePop();
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1000d8c94,uVar1,uVar2);
  return;
}



/* Address: 0x1000d8c60 | FUN_1000d8c60 */

void FUN_1000d8c60(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001000d8c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000d8c94 | FUN_1000d8c94 */

void FUN_1000d8c94(void)

{
  long unaff_x22;
  
  _swift_release_n(*(undefined8 *)(unaff_x22 + 0x60),2);
                    /* WARNING: Could not recover jumptable at 0x0001000d8cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000d8ccc | FUN_1000d8ccc */

void FUN_1000d8ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  _swift_task_switch(FUN_1000d8ce4,0,0);
  return;
}



/* Address: 0x1000d8ce4 | FUN_1000d8ce4 */

void FUN_1000d8ce4(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000d8d44;
                    /* WARNING: Could not recover jumptable at 0x0001000d8d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0);
  return;
}



/* Address: 0x1000d8d44 | FUN_1000d8d44 */

void FUN_1000d8d44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001000d8d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1000d8d80 | FUN_1000d8d80 */

void FUN_1000d8d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long local_38;
  
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  Swift::TaskLocal::get(DAT_101057158);
  if (local_38 != 0) {
    FUN_1000d83a8(param_1,param_2,param_3);
    _swift_release(local_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d8e10);
  (*pcVar1)();
}



/* Address: 0x1000d8e10 | FUN_1000d8e10 */

void FUN_1000d8e10(undefined8 param_1)

{
  code *pcVar1;
  long local_28;
  
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  Swift::TaskLocal::get(DAT_101057158);
  if (local_28 != 0) {
    FUN_1000d8600(param_1);
    _swift_release(local_28);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d8e88);
  (*pcVar1)();
}



/* Address: 0x1000d8e88 | FUN_1000d8e88 */

void FUN_1000d8e88(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long local_38 [3];
  
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  Swift::TaskLocal::get(DAT_101057158);
  if (local_38[0] != 0) {
    objc_stub::lock(*(ID *)(local_38[0] + 0x10));
    _swift_beginAccess(local_38[0] + 0x18,local_38,1,0);
    uVar2 = *(undefined8 *)(local_38[0] + 0x18);
    *(undefined **)(local_38[0] + 0x18) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    _swift_bridgeObjectRelease(uVar2);
    objc_stub::unlock(*(ID *)(local_38[0] + 0x10));
    _swift_release(local_38[0]);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d8f2c);
  (*pcVar1)();
}



/* Address: 0x1000d8f2c | FUN_1000d8f2c */

void FUN_1000d8f2c(void)

{
  TaskLocal *pTVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  local_28 = 0;
  pTVar1 = (TaskLocal *)&DAT_100facda0;
  FUN_1000037f0(&DAT_100facda0,&DAT_100c2bc18);
  _swift_allocObject();
  puVar2 = &local_28;
  Swift::TaskLocal::_init(pTVar1);
  DAT_101057158 = puVar2;
  return;
}



/* Address: 0x1000d8f84 | FUN_1000d8f84 */

void FUN_1000d8f84(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Swift::AnyKeyPath::typeMetadataAccessor();
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_1000d9458(param_1,_Var1);
  return;
}



/* Address: 0x1000d8ff0 | FUN_1000d8ff0 */

void FUN_1000d8ff0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1000d9518();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1000d9d9c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x1000d90c0 | FUN_1000d90c0 */

undefined1  [16] FUN_1000d90c0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_1000d8f84();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1000d96bc();
    }
    _swift_release(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_1000d9f4c(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1000d9184 | FUN_1000d9184 */

void FUN_1000d9184(undefined8 param_1,long param_2,ulong param_3,uint param_4)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d9264);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1000d982c(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d9224);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1000d9518();
    lVar4 = *unaff_x20;
    goto joined_r0x0001000d9278;
  }
  lVar4 = *unaff_x20;
joined_r0x0001000d9278:
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



/* Address: 0x1000d92a8 | FUN_1000d92a8 */

void FUN_1000d92a8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_1000d8f84();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9378);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_1000d9ae8(lVar7);
    uVar3 = param_3;
    FUN_1000d8f84();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      Swift::AnyKeyPath::typeMetadataAccessor();
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9340);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1000d96bc();
    lVar7 = *unaff_x20;
    goto joined_r0x0001000d938c;
  }
  lVar7 = *unaff_x20;
joined_r0x0001000d938c:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_release(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d93f0);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  _swift_retain(param_3);
  return;
}



/* Address: 0x1000d93f0 | FUN_1000d93f0 */

void FUN_1000d93f0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_100011080(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d9458);
  (*pcVar3)();
}



/* Address: 0x1000d9458 | FUN_1000d9458 */

undefined1  [16] FUN_1000d9458(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  AnyKeyPath *pAVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 local_50;
  undefined8 local_48;
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    local_48 = param_1;
    pAVar3 = Swift::AnyKeyPath::typeMetadataAccessor();
    puVar1 = PTR___protocol_witness_table_for_Swift_AnyKeyPath___Swift_Equatable_in_Swift_100eacc18;
    do {
      local_50 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      bVar2 = Swift::Equatable::___infix(&local_50,&local_48,pAVar3,puVar1);
      uVar4 = (ulong)bVar2;
      if (bVar2) break;
      param_2 = param_2 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Address: 0x1000d9518 | FUN_1000d9518 */

void FUN_1000d9518(void)

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
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100facd90;
  FUN_1000037f0(&DAT_100facd90,&DAT_100c2bc08);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1000d9694:
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
  if (uVar7 == 0) goto LAB_1000d9600;
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
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1000d9600:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000d96bc);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1000d9694;
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



/* Address: 0x1000d96bc | FUN_1000d96bc */

void FUN_1000d96bc(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  this = (_DictionaryStorage *)&DAT_100facd88;
  FUN_1000037f0(&DAT_100facd88,&DAT_100c2bc00);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_1000d9798;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
        uVar9 = puVar3[1];
        uVar12 = puVar3[1];
        uVar11 = *puVar3;
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
        puVar3[1] = uVar12;
        *puVar3 = uVar11;
        _swift_retain();
        _swift_retain(uVar9);
        if (uVar6 != 0) break;
LAB_1000d9798:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d982c);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1000d9804;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1000d9804:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x1000d982c | FUN_1000d982c */

void FUN_1000d982c(long param_1,bool param_2)

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
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100facd90;
  FUN_1000037f0(&DAT_100facd90,&DAT_100c2bc08);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1000d9ab4:
    _swift_release(original);
LAB_1000d9abc:
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
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d9ae4);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1000d9abc;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1000d9ab4;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d9ae8);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x1000d9ae8 | FUN_1000d9ae8 */

void FUN_1000d9ae8(long param_1,bool param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  __RawDictionaryStorage *original;
  ulong uVar12;
  __RawDictionaryStorage *p_Var13;
  undefined8 uVar14;
  __int64 _Var15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var15 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var15 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100facd88;
  FUN_1000037f0(&DAT_100facd88,&DAT_100c2bc00);
  p_Var4 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var15,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1000d9d68:
    _swift_release(original);
LAB_1000d9d70:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var13 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var13;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d9d98);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1000d9d70;
          }
          uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1000d9d68;
        }
        uVar12 = *(ulong *)(p_Var13 + lVar16 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar16 << 6;
    uVar14 = *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar6 * 0x10);
    uVar18 = puVar1[1];
    uVar17 = *puVar1;
    if ((param_2 & 1U) == 0) {
      uVar11 = puVar1[1];
      _swift_retain(uVar14);
      _swift_retain(uVar11);
    }
    _Var15 = *(__int64 *)(p_Var4 + 0x28);
    Swift::AnyKeyPath::typeMetadataAccessor();
    uVar5 = Swift::Hashable::_rawHashValue(_Var15);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d9d9c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x40);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x40);
    *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar6 * 8) = uVar14;
    puVar1 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar6 * 0x10);
    puVar1[1] = uVar18;
    *puVar1 = uVar17;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Address: 0x1000d9d9c | FUN_1000d9d9c */

void FUN_1000d9d9c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar8.offset + 1U & uVar10;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar10;
      if (param_1.offset < (long)uVar12) {
        if (uVar9 < uVar12) {
LAB_1000d9e90:
          if (param_1.offset < (long)uVar9) goto LAB_1000d9e18;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar4 + 2 <= puVar3 || param_1.offset != uVar11)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x20);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x20);
        if (((param_1.offset < (long)uVar11) || (puVar4 + 4 <= puVar3)) ||
           (param_1.offset != uVar11)) {
          uVar13 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar9) goto LAB_1000d9e90;
LAB_1000d9e18:
      uVar11 = uVar11 + 1 & uVar10;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar10 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar10) =
       *(ulong *)(_Var1.unknown + uVar10) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000d9f4c);
  (*pcVar7)();
}


