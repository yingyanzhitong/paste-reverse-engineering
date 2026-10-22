/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002ccb9c | FUN_1002ccb9c */

void FUN_1002ccb9c(void)

{
  FUN_100003a00(&DAT_100fbc500,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d188);
  return;
}



/* Address: 0x1002ccbc8 | FUN_1002ccbc8 */

void FUN_1002ccbc8(void)

{
  FUN_100003a00(&DAT_100fbc508,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d15c);
  return;
}



/* Address: 0x1002ccbf4 | FUN_1002ccbf4 */

void FUN_1002ccbf4(void)

{
  FUN_100003a00(&DAT_100fbc510,FUN_1002ccac4,&TargetProtocolConformanceDescriptor_100c3d1f8);
  return;
}



/* Address: 0x1002ccc20 | thunk_FUN_1002cc598 */

void thunk_FUN_1002cc598(void)

{
  FUN_1002cc598();
  return;
}



/* Address: 0x1002ccc24 | thunk_FUN_1002cc62c */

void thunk_FUN_1002cc62c(void)

{
  FUN_1002cc62c();
  return;
}



/* Address: 0x1002ccc28 | thunk_FUN_1002cc658 */

void thunk_FUN_1002cc658(void)

{
  FUN_1002cc658();
  return;
}



/* Address: 0x1002ccc2c | thunk_FUN_1002cc598 */

void thunk_FUN_1002cc598(void)

{
  FUN_1002cc598();
  return;
}



/* Address: 0x1002ccc30 | thunk_FUN_1002cc598 */

void thunk_FUN_1002cc598(void)

{
  FUN_1002cc598();
  return;
}



/* Address: 0x1002ccc34 | FUN_1002ccc34 */

void FUN_1002ccc34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  DisplayStyle DVar7;
  bool bVar8;
  undefined7 extraout_var;
  undefined *puVar10;
  undefined *puVar11;
  Mirror MVar12;
  AnyCollection<tuple2> AVar13;
  ObjectIdentifier OVar14;
  ObjectIdentifier OVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  Mirror MVar21;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  long lVar9;
  
  local_c0 = param_2;
  uStack_b8 = param_3;
  local_b0 = param_1;
  DVar7 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,DVar7.value);
  lVar18 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fbc528;
  local_d0 = lVar16;
  FUN_1000037f0(&DAT_100fbc528,&DAT_100c3d420);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar21.unknown = (undefined *)(lVar16 - extraout_x8_00);
  puVar11 = &DAT_100fbc530;
  FUN_1000037f0(&DAT_100fbc530,&DAT_100c3d2b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar16 = (long)MVar21.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_00;
  puStack_90 = (undefined *)Swift::Mirror::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar20 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_68 = param_5;
  FUN_10000cbb0(auStack_80);
  local_c8 = *(long *)(param_5 + -8);
  local_a8 = param_4;
  local_a0 = param_5;
  (**(code **)(local_c8 + 0x10))();
  MVar12 = Swift::Mirror::_init();
  Swift::Mirror::_get_displayStyle(MVar12);
  (**(code **)(lVar18 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___enum_case_for_Swift_Mirror_DisplayStyle_optional_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd98
             ,lVar9);
  (**(code **)(lVar18 + 0x38))(lVar16,0,1,lVar9);
  iVar3 = *(int *)(puVar10 + 0x30);
  FUN_1002cd0d8(lVar17,MVar21.unknown);
  FUN_1002cd0d8(lVar16,MVar21.unknown + iVar3);
  pcVar19 = *(code **)(lVar18 + 0x30);
  puVar10 = MVar21.unknown;
  (*pcVar19)(MVar21.unknown,1,lVar9);
  if ((int)puVar10 == 1) {
    FUN_100005808(lVar16,&DAT_100fbc530,&DAT_100c3d2b8);
    FUN_100005808(lVar17,&DAT_100fbc530,&DAT_100c3d2b8);
    puVar10 = MVar21.unknown + iVar3;
    (*pcVar19)(puVar10,1,lVar9);
    if ((int)puVar10 == 1) {
      FUN_100005808(MVar21.unknown,&DAT_100fbc530,&DAT_100c3d2b8);
LAB_1002ccfd0:
      AVar13 = Swift::Mirror::_get_children(MVar21);
      uVar1 = *(undefined8 *)(AVar13.unknown + 0x10);
      uVar2 = *(undefined8 *)(AVar13.unknown + 0x20);
      _swift_getObjectType(uVar1);
      _swift_unknownObjectRetain(uVar1);
      _swift_unknownObjectRetain(uVar2);
      OVar14 = Swift::_AnyIndexBox::get__typeID();
      _swift_getObjectType(uVar2);
      OVar15 = Swift::_AnyIndexBox::get__typeID();
      if (OVar14.unknown != OVar15.unknown) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1002cd0d4);
        (*pcVar19)();
      }
      bVar8 = Swift::_AnyIndexBox::__isEqual();
      _swift_release(AVar13.unknown);
      _swift_unknownObjectRelease(uVar1);
      _swift_unknownObjectRelease(uVar2);
      (**(code **)(local_98 + 8))(lVar20,puStack_90);
      if (!bVar8) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1002cd0d8);
        (*pcVar19)();
      }
      goto LAB_1002cd078;
    }
LAB_1002ccf08:
    FUN_100005808(MVar21.unknown,&DAT_100fbc528,&DAT_100c3d420);
  }
  else {
    FUN_1002cd0d8(MVar21.unknown,local_88);
    puVar10 = MVar21.unknown + iVar3;
    (*pcVar19)(puVar10,1,lVar9);
    lVar4 = local_d0;
    if ((int)puVar10 == 1) {
      FUN_100005808(lVar16,&DAT_100fbc530,&DAT_100c3d2b8);
      FUN_100005808(lVar17,&DAT_100fbc530,&DAT_100c3d2b8);
      (**(code **)(lVar18 + 8))(local_88,lVar9);
      goto LAB_1002ccf08;
    }
    (**(code **)(lVar18 + 0x20))(local_d0,MVar21.unknown + iVar3,lVar9);
    lVar6 = local_88;
    bVar8 = Swift::Equatable::___infix
                      (local_88,lVar4,lVar9,
                       PTR___protocol_witness_table_for_Swift_Mirror_DisplayStyle___Swift_Equatable_in_Swift_100eaddb0
                      );
    pcVar19 = *(code **)(lVar18 + 8);
    (*pcVar19)(lVar4,lVar9);
    FUN_100005808(lVar16,&DAT_100fbc530,&DAT_100c3d2b8);
    FUN_100005808(lVar17,&DAT_100fbc530,&DAT_100c3d2b8);
    (*pcVar19)(lVar6,lVar9);
    FUN_100005808(MVar21.unknown,&DAT_100fbc530,&DAT_100c3d2b8);
    if (bVar8) goto LAB_1002ccfd0;
  }
  (**(code **)(local_98 + 8))(lVar20,puStack_90);
LAB_1002cd078:
  lVar9 = local_a0;
  puVar5 = local_b0;
  *local_b0 = local_c0;
  local_b0[1] = uStack_b8;
  lVar16 = 0;
  FUN_1002cd128(0,local_a0);
  (**(code **)(local_c8 + 0x20))((long)puVar5 + (long)*(int *)(lVar16 + 0x1c),local_a8,lVar9);
  return;
}



/* Address: 0x1002cd0d8 | FUN_1002cd0d8 */

undefined8 FUN_1002cd0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbc530;
  FUN_1000037f0(&DAT_100fbc530,&DAT_100c3d2b8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002cd128 | FUN_1002cd128 */

void FUN_1002cd128(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002cd134 | FUN_1002cd134 */

void FUN_1002cd134(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  long extraout_x8;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,param_4)
  ;
  FUN_1002ccc34(param_1,param_2,param_3,&stack0xffffffffffffffc0 + -extraout_x8,
                CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1002cd1dc | FUN_1002cd1dc */

void FUN_1002cd1dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c3d2d8;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1002cd254 | FUN_1002cd254 */

ulong FUN_1002cd254(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1002cd2fc;
  uVar5 = (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_1002cd2fc;
      goto LAB_1002cd2bc;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1002cd2bc:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_1002cd2fc:
  if (-1 < (int)uVar2) {
    uVar7 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = (long)param_1 + uVar7 + 0x10 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001002cd334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x1002cd388 | FUN_1002cd388 */

void FUN_1002cd388(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar9 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar6 = 2;
    if (0xfffe < uVar4) {
      bVar6 = 4;
    }
    if (uVar4 < 0xff) {
      bVar6 = uVar4 != 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002cd518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 0x10 & ~uVar8);
        return;
      }
      if ((int)param_2 < 0) {
        *param_1 = (ulong)(param_2 & 0x7fffffff);
        param_1[1] = 0;
      }
      else {
        param_1[1] = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1002cd57c | FUN_1002cd57c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002cd57c(void)

{
  DAT_101057910 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  return;
}



/* Address: 0x1002cd5ac | FUN_1002cd5ac */

undefined8 * FUN_1002cd5ac(void)

{
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  return &DAT_101057910;
}



/* Address: 0x1002cd5ec | thunk_FUN_1002cd5f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_1002cd5f0(void)

{
  undefined1 auStack_38 [24];
  
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  _swift_beginAccess(&DAT_101057910,auStack_38,0,0);
  return DAT_101057910;
}



/* Address: 0x1002cd5f0 | FUN_1002cd5f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002cd5f0(void)

{
  undefined1 auStack_38 [24];
  
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  _swift_beginAccess(&DAT_101057910,auStack_38,0,0);
  return DAT_101057910;
}



/* Address: 0x1002cd658 | FUN_1002cd658 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002cd658(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  _swift_beginAccess(&DAT_101057910,auStack_38,1,0);
  DAT_101057910 = param_1;
  return 0;
}



/* Address: 0x1002cd6cc | FUN_1002cd6cc */

undefined1  [16] FUN_1002cd6cc(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  _swift_beginAccess(&DAT_101057910,param_1,0x21,0);
  auVar1._8_8_ = &DAT_101057910;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1002cd738 | FUN_1002cd738 */

void FUN_1002cd738(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002d038c();
  _swift_allocObject();
  FUN_1002d03ac();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002cd774 | FUN_1002cd774 */

undefined1  [16] FUN_1002cd774(void)

{
  return ZEXT816(0x100ec7378);
}



/* Address: 0x1002cd784 | thunk_FUN_1002cd5f0 */

void thunk_FUN_1002cd5f0(void)

{
  thunk_FUN_1002cd5f0();
  return;
}



/* Address: 0x1002cd788 | FUN_1002cd788 */

void FUN_1002cd788(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100fbcab0;
  FUN_1000037f0(&DAT_100fbcab0,&DAT_100c3d340);
  lVar11 = 4;
  Swift::_SetStorage::_allocate(this,4);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(&DAT_100fbcb08 + lVar17 * 2))->str;
    puVar6 = (&PTR_s_ctivationShortcut_100da0ab0_0x10_100fbcb10)[lVar17 * 2];
    SVar8 = *(String *)(&DAT_100fbcb08 + lVar17 * 2);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_1002cd7f0;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1002cd908);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_1002cd7f0:
    lVar17 = lVar17 + 1;
    if (lVar17 == 4) {
      _swift_arrayDestroy(&DAT_100fbcb08,4,PTR___type_metadata_for_Swift_String_100eac208);
      DAT_100fbcac0 = lVar11;
      return;
    }
  } while( true );
}



/* Address: 0x1002cd908 | FUN_1002cd908 */

void FUN_1002cd908(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100fbcab0;
  FUN_1000037f0(&DAT_100fbcab0,&DAT_100c3d340);
  lVar11 = 0xf;
  Swift::_SetStorage::_allocate(this,0xf);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(&DAT_100fbc9c0 + lVar17 * 2))->str;
    puVar6 = (&PTR_s_elcase_migration_completed_100da0a00_0x10_100fbc9c8)[lVar17 * 2];
    SVar8 = *(String *)(&DAT_100fbc9c0 + lVar17 * 2);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_1002cd970;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1002cda88);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_1002cd970:
    lVar17 = lVar17 + 1;
    if (lVar17 == 0xf) {
      _swift_arrayDestroy(&DAT_100fbc9c0,0xf,PTR___type_metadata_for_Swift_String_100eac208);
      DAT_100fbc990 = lVar11;
      return;
    }
  } while( true );
}



/* Address: 0x1002cda88 | FUN_1002cda88 */

void FUN_1002cda88(undefined8 param_1)

{
  FUN_1002ce3d0();
  FUN_1002ce768(param_1);
  return;
}



/* Address: 0x1002cdaac | FUN_1002cdaac */

undefined8 FUN_1002cdaac(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1002cdbf0(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1002cdbf0 | FUN_1002cdbf0 */

void FUN_1002cdbf0(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1002cdf7c();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1002cdd54(uVar6 + 1);
    }
    else {
      FUN_1002ce0d8();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cdd54);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002cdd44);
  (*pcVar4)();
}



/* Address: 0x1002cdd54 | FUN_1002cdd54 */

void FUN_1002cdd54(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbcab0;
  FUN_1000037f0(&DAT_100fbcab0,&DAT_100c3d340);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002cdf44:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002cdf78);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1002cdf44;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002cdf7c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
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
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x1002cdf7c | FUN_1002cdf7c */

void FUN_1002cdf7c(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fbcab0;
  FUN_1000037f0(&DAT_100fbcab0,&DAT_100c3d340);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_1002ce058;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_1002ce058:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002ce0d8);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1002ce0b0;
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
LAB_1002ce0b0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1002ce0d8 | FUN_1002ce0d8 */

void FUN_1002ce0d8(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbcab0;
  FUN_1000037f0(&DAT_100fbcab0,&DAT_100c3d340);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002ce308:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ce338);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002ce308;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ce33c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
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
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1002ce33c | FUN_1002ce33c */

Set<undefined> FUN_1002ce33c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1002cdaac(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1002ce3d0 | FUN_1002ce3d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ce6c8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002ce648 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1002ce3d0(ID param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  NSString *pNVar7;
  ID IVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  JSONEncoder *pJVar11;
  undefined8 uVar12;
  undefined *puVar13;
  Data DVar14;
  NSData *pNVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 auStack_80 [32];
  
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = objc_stub::boolForKey_(param_1,pNVar7);
  if ((IVar8 & 1) != 0) {
    return 0;
  }
  if (DAT_100fbcab8 != -1) {
    _swift_once(&DAT_100fbcab8,FUN_1002cd788);
  }
  lVar3 = DAT_100fbcac0;
  puVar18 = (ulong *)(DAT_100fbcac0 + 0x38);
  uVar16 = 1L << ((ulong)*(byte *)(DAT_100fbcac0 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(DAT_100fbcac0 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  _swift_bridgeObjectRetain();
  lVar17 = 0;
joined_r0x0001002ce4ac:
  do {
    while( true ) {
      while (uVar19 == 0) {
        bVar6 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002ce750);
          (*pcVar5)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar17) {
          _swift_release(lVar3);
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setBool_forKey_(param_1,1,pNVar7);
          return 0;
        }
        uVar19 = puVar18[lVar17];
      }
      uVar2 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar19 = uVar19 - 1 & uVar19;
      uVar1 = *(undefined8 *)
               (*(long *)(lVar3 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                lVar17 * 0x400 + 8);
      _swift_bridgeObjectRetain(uVar1);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar8 = objc_stub::objectForKey_(param_1,pNVar7);
      if (IVar8 != 0) break;
LAB_1002ce4a0:
      _swift_bridgeObjectRelease(uVar1);
    }
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar8);
    FUN_100011080(local_a0,auStack_80);
    FUN_10000cbfc(auStack_80,local_a0);
    puVar13 = PTR___type_metadata_for_Any_100eae0c0;
    puVar9 = &local_b0;
    _swift_dynamicCast(puVar9,local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    if (((ulong)puVar9 & 1) == 0) {
      FUN_10000cbfc(auStack_80,local_a0);
      puVar10 = &DAT_100fbcac8;
      FUN_1000037f0(&DAT_100fbcac8,&DAT_100c3d348);
      puVar9 = &local_b0;
      _swift_dynamicCast(puVar9,local_a0,puVar13 + 8,puVar10,6);
      uVar4 = local_b0;
      if (((ulong)puVar9 & 1) == 0) {
        FUN_100004594(auStack_80);
        goto LAB_1002ce4a0;
      }
      pJVar11 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
      pJVar11 = Foundation::JSONEncoder::init(pJVar11);
      uVar12 = uVar4;
      FUN_1002ce33c();
      _swift_bridgeObjectRelease(uVar4);
      puVar13 = &DAT_100fbcad0;
      FUN_1000037f0(&DAT_100fbcad0,&DAT_100c3d350);
      puVar10 = puVar13;
      FUN_1002cec60();
      DVar14 = Foundation::JSONEncoder::_encode(pJVar11,puVar10,puVar13,puVar10);
      _swift_release(pJVar11);
      _swift_bridgeObjectRelease(uVar12);
      pNVar15 = Foundation::Data::_bridgeToObjectiveC(DVar14);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar1);
      objc_stub::setObject_forKey_(param_1,pNVar15,pNVar7);
      FUN_10003bf2c(DVar14.unknown,puVar13);
      FUN_100004594(auStack_80);
      goto joined_r0x0001002ce4ac;
    }
    FUN_100004594(auStack_80);
    _swift_bridgeObjectRelease(uVar1);
    FUN_10003bf2c(local_b0,uStack_a8);
  } while( true );
}



/* Address: 0x1002ce768 | FUN_1002ce768 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002cea7c) */

undefined8 FUN_1002ce768(ID param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  NSString *pNVar12;
  ID IVar13;
  Hasher into;
  ulong uVar14;
  byte *pbVar15;
  JSONDecoder *pJVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  byte local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  ulong local_d0 [9];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar13 = objc_stub::boolForKey_(param_1,pNVar12);
  if ((IVar13 & 1) == 0) {
    lVar19 = 0;
    do {
      pcVar2 = ((String *)(&DAT_100fbc5e8 + lVar19 * 4))->str;
      puVar4 = (&PTR_s_elcase_migration_completed_100da0a00_0x10_100fbc5f0)[lVar19 * 4];
      SVar7 = *(String *)(&DAT_100fbc5e8 + lVar19 * 4);
      puVar5 = (&PTR_s_Paste_AppDelegate_Handoff_swift_100fbc600)[lVar19 * 4];
      _swift_bridgeObjectRetain(puVar4);
      _swift_bridgeObjectRetain(puVar5);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar13 = objc_stub::objectForKey_(param_1,pNVar12);
      if (IVar13 == 0) {
        _swift_bridgeObjectRelease(puVar4);
        _swift_bridgeObjectRelease(puVar5);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar13);
        FUN_100011080(local_d0,auStack_88);
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar13 = objc_stub::objectForKey_(param_1,pNVar12);
        if (IVar13 == 0) {
          local_d0[1] = 0;
          local_d0[0] = 0;
          local_d0[3] = 0;
          local_d0[2] = 0;
          FUN_1002cabd4(local_d0);
          if (DAT_100fbc988 != -1) {
            _swift_once(&DAT_100fbc988,FUN_1002cd908);
          }
          lVar9 = DAT_100fbc990;
          if (*(long *)(DAT_100fbc990 + 0x10) != 0) {
            Swift::Hasher::init(*(__int64 *)(DAT_100fbc990 + 0x28));
            into.unknown = (undefined *)local_d0;
            Swift::String::hash(into,SVar7);
            uVar14 = Swift::Hasher::_finalize(into);
            uVar18 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
            uVar14 = uVar14 & (uVar18 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar9 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
              do {
                puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
                _Var3.unknown = (undefined *)*puVar1;
                _Var6.unknown = (undefined *)puVar1[1];
                if ((_Var3.unknown == pcVar2 && _Var6.unknown == puVar4) ||
                   (bVar11 = Swift::_stringCompareWithSmolCheck
                                       (_Var3,_Var6,(_StringComparisonResult)(__int8)pcVar2), bVar11
                   )) {
                  FUN_10000cbfc(auStack_88,local_d0);
                  pbVar15 = &local_e0;
                  _swift_dynamicCast(pbVar15,local_d0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                     PTR___type_metadata_for_Foundation_Data_100ea7300,6);
                  uVar10 = uStack_d8;
                  if (((ulong)pbVar15 & 1) == 0) {
                    FUN_10000cbfc(auStack_88,local_d0);
                    pbVar15 = &local_e0;
                    _swift_dynamicCast(pbVar15,local_d0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                       PTR___type_metadata_for_Swift_Bool_100eac570,6);
                    if ((int)pbVar15 == 0) {
                      puVar17 = auStack_88;
                      FUN_100004640(puVar17,local_70);
                      Swift::__bridgeAnythingToObjectiveC();
                      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                      _swift_bridgeObjectRelease(puVar5);
                      objc_stub::setObject_forKey_(param_1,puVar17,pNVar12);
                      _swift_unknownObjectRelease(puVar17);
                    }
                    else {
                      uVar14 = (ulong)local_e0;
                      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                      _swift_bridgeObjectRelease(puVar5);
                      objc_stub::setBool_forKey_(param_1,uVar14,pNVar12);
                    }
                  }
                  else {
                    uVar8 = CONCAT71(uStack_df,local_e0);
                    pJVar16 = Foundation::JSONDecoder::typeMetadataAccessor();
                    _swift_allocObject(pJVar16,*(undefined4 *)(pJVar16 + 0x30),
                                       *(undefined2 *)(pJVar16 + 0x34));
                    pJVar16 = Foundation::JSONDecoder::init(pJVar16);
                    Foundation::JSONDecoder::_decode
                              (pJVar16,(Data)PTR___type_metadata_for_Swift_Bool_100eac570);
                    _swift_release(pJVar16);
                    uVar14 = local_d0[0] & 0xff;
                    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                    _swift_bridgeObjectRelease(puVar5);
                    objc_stub::setBool_forKey_(param_1,uVar14,pNVar12);
                    FUN_10003bf2c(uVar8,uVar10);
                  }
                  goto LAB_1002ceb64;
                }
                uVar14 = uVar14 + 1 & ~uVar18;
              } while ((*(ulong *)(lVar9 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
            }
          }
          puVar17 = auStack_88;
          FUN_100004640(puVar17,local_70);
          Swift::__bridgeAnythingToObjectiveC();
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar5);
          objc_stub::setObject_forKey_(param_1,puVar17,pNVar12);
          _swift_unknownObjectRelease(puVar17);
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar13);
          _swift_bridgeObjectRelease(puVar5);
          FUN_1002cabd4(local_d0);
        }
LAB_1002ceb64:
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar4);
        objc_stub::removeObjectForKey_(param_1,pNVar12);
        FUN_100004594(auStack_88);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x1d);
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setBool_forKey_(param_1,1,pNVar12);
  }
  return 0;
}



/* Address: 0x1002cec50 | FUN_1002cec50 */

undefined1  [16] FUN_1002cec50(void)

{
  return ZEXT816(0x100ec7398);
}



/* Address: 0x1002cec60 | FUN_1002cec60 */

void FUN_1002cec60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fbcad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbcad0;
  FUN_100005c24(&DAT_100fbcad0,&DAT_100c3d350);
  local_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar2 = PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8,puVar1,&local_18);
  DAT_100fbcad8 = puVar2;
  return;
}



/* Address: 0x1002cecc8 | FUN_1002cecc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002cecc8(void)

{
  undefined8 uVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_d0;
  undefined8 uVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  ID local_68;
  
  uVar4 = *unaff_x20;
  FUN_1000da768(&local_68);
  uVar7 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar5 = unaff_x20[4];
  uVar6 = unaff_x20[6];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  local_90 = unaff_x20[6];
  _swift_retain(uVar4);
  _swift_retain(uVar7);
  _swift_retain(uVar1);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_getAtKeyPath(local_80,&local_c0,uVar1);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar1);
  _swift_release(uVar7);
  _swift_release(uVar4);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uStack_78);
  IVar3 = objc_stub::objectForKey_(local_68,pNVar2);
  if (IVar3 == 0) {
    uVar7 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    uVar7 = extraout_d0;
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  FUN_1002cee34(&local_c0);
  FUN_100005808(&local_c0,&DAT_100fbc420,&DAT_100c3ce30);
  return uVar7;
}



/* Address: 0x1002cee34 | FUN_1002cee34 */

/* WARNING: Removing unreachable block (ram,0x0001002cee74) */

undefined8 FUN_1002cee34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  
  uVar2 = unaff_x20[4];
  (*(code *)unaff_x20[3])(&local_110);
  if ((char)uStack_108 == '\x01') {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    uVar5 = unaff_x20[6];
    uStack_108 = unaff_x20[1];
    local_110 = *unaff_x20;
    uStack_f8 = unaff_x20[3];
    uStack_100 = unaff_x20[2];
    uStack_e8 = unaff_x20[5];
    local_f0 = unaff_x20[4];
    local_e0 = unaff_x20[6];
    _swift_retain(uVar2);
    _swift_retain(uVar1);
    _swift_retain(uVar3);
    _swift_retain(uVar4);
    _swift_retain(uVar5);
    _swift_getAtKeyPath(auStack_a8,&local_110,uVar4);
    _swift_release(uVar5);
    _swift_release(uVar2);
    _swift_release(uVar4);
    _swift_release(uVar3);
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(local_a0);
    local_110 = local_98;
  }
  return local_110;
}



/* Address: 0x1002cf0a0 | FUN_1002cf0a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cf0a0(undefined8 param_1)

{
  undefined *puVar1;
  ID *pIVar2;
  NSString *pNVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e0 [8];
  undefined8 uStack_d8;
  ID local_c8;
  ID local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = &DAT_100fbc420;
  local_120 = param_1;
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  _swift_dynamicCast(&local_a0,&local_120,PTR___type_metadata_for_Swift_Double_100eac5d0,puVar1,7);
  FUN_100005808(&local_a0,&DAT_100fbc420,&DAT_100c3ce30);
  if (local_88 == 0) {
    uVar4 = *unaff_x20;
    FUN_1000da768(local_c0);
    uVar5 = unaff_x20[2];
    uStack_90 = unaff_x20[2];
    uVar8 = unaff_x20[1];
    uVar6 = unaff_x20[4];
    uStack_80 = unaff_x20[4];
    local_88 = unaff_x20[3];
    uVar7 = unaff_x20[6];
    uStack_70 = unaff_x20[6];
    uStack_78 = unaff_x20[5];
    local_a0 = uVar4;
    uStack_98 = uVar8;
    _swift_retain(uVar4);
    _swift_retain(uVar8);
    _swift_retain(uVar5);
    _swift_retain(uVar6);
    _swift_retain(uVar7);
    _swift_getAtKeyPath(&local_120,&local_a0,uVar5);
    _swift_release(uVar7);
    _swift_release(uVar6);
    _swift_release(uVar5);
    _swift_release(uVar8);
    _swift_release(uVar4);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uStack_118);
    objc_stub::removeObjectForKey_(local_c0[0],pNVar3);
  }
  else {
    uStack_98 = unaff_x20[1];
    local_a0 = *unaff_x20;
    local_88 = unaff_x20[3];
    uStack_90 = unaff_x20[2];
    uStack_78 = unaff_x20[5];
    uStack_80 = unaff_x20[4];
    uStack_70 = unaff_x20[6];
    FUN_1002cf368(&local_120,param_1);
    uVar4 = local_a0;
    if (local_108 == 0) {
      FUN_100005808(&local_120,&DAT_100fbc420,&DAT_100c3ce30);
    }
    else {
      FUN_100011080(&local_120,local_c0);
      FUN_1000da768(&local_c8);
      pIVar2 = local_c0;
      FUN_100004640(pIVar2,local_a8);
      Swift::__bridgeAnythingToObjectiveC();
      uVar8 = uStack_70;
      uVar7 = uStack_80;
      uVar6 = uStack_90;
      uVar5 = uStack_98;
      uStack_118 = uStack_98;
      local_120 = local_a0;
      local_108 = local_88;
      uStack_110 = uStack_90;
      uStack_f8 = uStack_78;
      local_100 = uStack_80;
      local_f0 = uStack_70;
      _swift_retain(uVar4);
      _swift_retain(uVar5);
      _swift_retain(uVar6);
      _swift_retain(uVar7);
      _swift_retain(uVar8);
      _swift_getAtKeyPath(local_e0,&local_120,uVar6);
      _swift_release(uVar8);
      _swift_release(uVar7);
      _swift_release(uVar6);
      _swift_release(uVar5);
      _swift_release(uVar4);
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uStack_d8);
      objc_stub::setObject_forKey_(local_c8,pIVar2,pNVar3);
      _swift_unknownObjectRelease(pIVar2);
      FUN_100004594(local_c0);
    }
  }
  return;
}



/* Address: 0x1002cf368 | FUN_1002cf368 */

/* WARNING: Removing unreachable block (ram,0x0001002cf3ac) */

void FUN_1002cf368(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_70 [2];
  
  local_70[0] = param_1;
  (**(code **)(unaff_x20 + 0x28))(local_70);
  return;
}



/* Address: 0x1002cf530 | FUN_1002cf530 */

undefined8 FUN_1002cf530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  DisplayStyle DVar6;
  bool bVar7;
  undefined7 extraout_var;
  undefined *puVar9;
  undefined *puVar10;
  Mirror MVar11;
  AnyCollection<tuple2> AVar12;
  ObjectIdentifier OVar13;
  ObjectIdentifier OVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  Mirror MVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined *local_78;
  long lVar8;
  
  local_b8 = param_2;
  uStack_b0 = param_3;
  DVar6 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,DVar6.value);
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fbc528;
  local_c0 = lVar15;
  FUN_1000037f0(&DAT_100fbc528,&DAT_100c3d420);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar17.unknown = (undefined *)(lVar15 - extraout_x8_00);
  puVar10 = &DAT_100fbc530;
  FUN_1000037f0(&DAT_100fbc530,&DAT_100c3d2b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar15 = (long)MVar17.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar15 - extraout_x12_00;
  puStack_a0 = (undefined *)Swift::Mirror::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  lVar16 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_78 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  local_90 = param_1;
  MVar11 = Swift::Mirror::_init();
  Swift::Mirror::_get_displayStyle(MVar11);
  (**(code **)(lVar19 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___enum_case_for_Swift_Mirror_DisplayStyle_optional_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd98
             ,lVar8);
  (**(code **)(lVar19 + 0x38))(lVar15,0,1,lVar8);
  iVar3 = *(int *)(puVar9 + 0x30);
  FUN_100011090(lVar20,MVar17.unknown,&DAT_100fbc530,&DAT_100c3d2b8);
  FUN_100011090(lVar15,MVar17.unknown + iVar3,&DAT_100fbc530,&DAT_100c3d2b8);
  pcVar18 = *(code **)(lVar19 + 0x30);
  puVar9 = MVar17.unknown;
  (*pcVar18)(MVar17.unknown,1,lVar8);
  if ((int)puVar9 == 1) {
    FUN_100005808(lVar15,&DAT_100fbc530,&DAT_100c3d2b8);
    FUN_100005808(lVar20,&DAT_100fbc530,&DAT_100c3d2b8);
    puVar9 = MVar17.unknown + iVar3;
    (*pcVar18)(puVar9,1,lVar8);
    if ((int)puVar9 == 1) {
      FUN_100005808(MVar17.unknown,&DAT_100fbc530,&DAT_100c3d2b8);
LAB_1002cf8cc:
      AVar12 = Swift::Mirror::_get_children(MVar17);
      uVar1 = *(undefined8 *)(AVar12.unknown + 0x10);
      uVar2 = *(undefined8 *)(AVar12.unknown + 0x20);
      _swift_getObjectType(uVar1);
      _swift_unknownObjectRetain(uVar1);
      _swift_unknownObjectRetain(uVar2);
      OVar13 = Swift::_AnyIndexBox::get__typeID();
      _swift_getObjectType(uVar2);
      OVar14 = Swift::_AnyIndexBox::get__typeID();
      if (OVar13.unknown != OVar14.unknown) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002cf9a4);
        (*pcVar18)();
      }
      bVar7 = Swift::_AnyIndexBox::__isEqual();
      _swift_release(AVar12.unknown);
      _swift_unknownObjectRelease(uVar1);
      _swift_unknownObjectRelease(uVar2);
      (**(code **)(local_a8 + 8))(lVar16,puStack_a0);
      if (bVar7) {
        return local_b8;
      }
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1002cf9a8);
      (*pcVar18)();
    }
  }
  else {
    FUN_100011090(MVar17.unknown,local_98,&DAT_100fbc530,&DAT_100c3d2b8);
    puVar9 = MVar17.unknown + iVar3;
    (*pcVar18)(puVar9,1,lVar8);
    lVar4 = local_c0;
    if ((int)puVar9 != 1) {
      (**(code **)(lVar19 + 0x20))(local_c0,MVar17.unknown + iVar3,lVar8);
      lVar5 = local_98;
      bVar7 = Swift::Equatable::___infix
                        (local_98,lVar4,lVar8,
                         PTR___protocol_witness_table_for_Swift_Mirror_DisplayStyle___Swift_Equatable_in_Swift_100eaddb0
                        );
      pcVar18 = *(code **)(lVar19 + 8);
      (*pcVar18)(lVar4,lVar8);
      FUN_100005808(lVar15,&DAT_100fbc530,&DAT_100c3d2b8);
      FUN_100005808(lVar20,&DAT_100fbc530,&DAT_100c3d2b8);
      (*pcVar18)(lVar5,lVar8);
      FUN_100005808(MVar17.unknown,&DAT_100fbc530,&DAT_100c3d2b8);
      if (bVar7) goto LAB_1002cf8cc;
      goto LAB_1002cf81c;
    }
    FUN_100005808(lVar15,&DAT_100fbc530,&DAT_100c3d2b8);
    FUN_100005808(lVar20,&DAT_100fbc530,&DAT_100c3d2b8);
    (**(code **)(lVar19 + 8))(local_98,lVar8);
  }
  FUN_100005808(MVar17.unknown,&DAT_100fbc528,&DAT_100c3d420);
LAB_1002cf81c:
  (**(code **)(local_a8 + 8))(lVar16,puStack_a0);
  return local_b8;
}



/* Address: 0x1002cf9a8 | FUN_1002cf9a8 */

void FUN_1002cf9a8(void)

{
  FUN_1002cf530(0,0xd000000000000015,0x8000000100da0ee0);
  return;
}



/* Address: 0x1002cf9c8 | FUN_1002cf9c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cf9c8(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_88 = param_5;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_90 = CONCAT71(extraout_var,OVar3.value);
  lVar13 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_98 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar11 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_01;
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = PTR__swift_isaMask_100eae3b0;
  lVar9 = lVar9 - extraout_x12_02;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(unaff_x20 + 0x48)) + 0x5a0))
            (param_2,param_3);
  if (param_2 != (ulong *)0x0) {
    (**(code **)((*(ulong *)puVar5 & *param_2) + 0x78))(lVar8,param_4,param_4,local_88);
    lVar4 = lVar8;
    (**(code **)(lVar11 + 0x30))(lVar8,1,param_4);
    lVar2 = local_90;
    if ((int)lVar4 == 1) {
      pcVar12 = *(code **)(lVar13 + 8);
      (*pcVar12)(lVar8,local_90);
      puVar5 = &DAT_100fbc420;
      FUN_100011090((long)param_2 + PostHogFeatureFlagResult::payload,&local_80,&DAT_100fbc420,
                    &DAT_100c3ce30);
      FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
      lVar8 = local_98;
      lVar9 = local_98;
      _swift_dynamicCast(local_98,&local_80,puVar5,param_4,6);
      if ((int)lVar9 == 0) {
        pcVar10 = *(code **)(lVar11 + 0x38);
        (*pcVar10)(lVar8,1,1,param_4);
        (*pcVar12)(lVar8,lVar2);
        puVar1 = (undefined8 *)((long)param_2 + PostHogFeatureFlagResult::variant);
        uStack_78 = puVar1[1];
        local_80 = *puVar1;
        _swift_bridgeObjectRetain(puVar1[1]);
        puVar5 = &DAT_100fbcc18;
        FUN_1000037f0(&DAT_100fbcc18,&DAT_100c3d3b8);
        lVar8 = local_a0;
        lVar9 = local_a0;
        _swift_dynamicCast(local_a0,&local_80,puVar5,param_4,6);
        if ((int)lVar9 == 0) {
          (*pcVar10)(lVar8,1,1,param_4);
          (*pcVar12)(lVar8,lVar2);
          local_80 = CONCAT71(local_80._1_7_,
                              *(undefined1 *)((long)param_2 + PostHogFeatureFlagResult::enabled));
          uVar6 = param_1;
          _swift_dynamicCast(param_1,&local_80,PTR___type_metadata_for_Swift_Bool_100eac570,param_4,
                             6);
          uVar7 = (uint)uVar6 ^ 1;
        }
        else {
          (*pcVar10)(lVar8,0,1,param_4);
          lVar9 = local_b0;
          pcVar12 = *(code **)(lVar11 + 0x20);
          (*pcVar12)(local_b0,lVar8,param_4);
          (*pcVar12)(param_1,lVar9,param_4);
          uVar7 = 0;
        }
        (*pcVar10)(param_1,uVar7,1,param_4);
      }
      else {
        pcVar12 = *(code **)(lVar11 + 0x38);
        (*pcVar12)(lVar8,0,1,param_4);
        lVar9 = local_a8;
        pcVar10 = *(code **)(lVar11 + 0x20);
        (*pcVar10)(local_a8,lVar8,param_4);
        (*pcVar10)(param_1,lVar9,param_4);
        (*pcVar12)(param_1,0,1,param_4);
      }
    }
    else {
      pcVar12 = *(code **)(lVar11 + 0x20);
      (*pcVar12)(lVar9,lVar8,param_4);
      (*pcVar12)(param_1,lVar9,param_4);
      (**(code **)(lVar11 + 0x38))(param_1,0,1,param_4);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002cfc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x38))(param_1,1,1,param_4);
  return;
}



/* Address: 0x1002cfdf4 | FUN_1002cfdf4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002cfe8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002cfdf4(void)

{
  undefined *puVar1;
  Publisher PVar2;
  undefined *puVar3;
  AnyCancellable *this;
  undefined *puVar4;
  void *aBlock;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  PVar2 = Publisher::_typeMetadataAccessor();
  puVar1 = PTR__typeMetadataAccessor_100ea79b0;
  lVar6 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1002d000c();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_100126a10();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(lVar5,PVar2.unknown,0);
  puVar4 = &DAT_100ec73d8;
  puVar3 = puVar4;
  _swift_allocObject(&DAT_100ec73d8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_100003a00(&DAT_100fbcc00,puVar1,PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(lVar6 + 8))(lVar5,PVar2.unknown);
  _swift_beginAccess(unaff_x20 + 0x58,&local_80,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x58));
  _swift_endAccess(&local_80);
  _swift_release(this);
  _swift_allocObject(&DAT_100ec73d8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  local_60 = FUN_1002d05b8;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100136224;
  puStack_68 = &DAT_100ec73f0;
  local_58 = puVar4;
  aBlock = __Block_copy(&local_80);
  _swift_release(local_58);
  NSTimer::scheduledTimerWithTimeInterval_repeats_block_
            ((ID)&_OBJC_CLASS___NSTimer,0x4105180000000000,1,aBlock);
  __Block_release(aBlock);
  return;
}



/* Address: 0x1002d000c | FUN_1002d000c */

void FUN_1002d000c(void)

{
  Date DVar1;
  Date DVar2;
  undefined *puVar3;
  long extraout_x8;
  code *pcVar4;
  long unaff_x20;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  _swift_beginAccess(unaff_x20 + 0x10,auStack_108,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  dVar10 = *(double *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  dVar9 = dVar10;
  local_b0 = uVar8;
  uStack_a8 = uVar12;
  local_a0 = uVar13;
  local_90 = dVar10;
  local_80 = uVar6;
  _swift_retain(uVar8);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(dVar10);
  _swift_retain(uVar6);
  FUN_1002cecc8();
  _swift_release(uVar6);
  _swift_release(dVar10);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar8);
  if (dVar9 != 0.0) {
    DVar2 = Foundation::Date::init();
    dVar10 = Foundation::Date::get_timeIntervalSince1970(DVar2);
    (**(code **)(lVar7 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown)
    ;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x38);
    dVar11 = *(double *)(unaff_x20 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    dVar9 = dVar11;
    local_f0 = uVar8;
    uStack_e8 = uVar12;
    local_e0 = uVar13;
    local_d0 = dVar11;
    local_c0 = uVar6;
    _swift_retain(uVar8);
    _swift_retain(uVar12);
    _swift_retain(uVar13);
    _swift_retain(dVar11);
    _swift_retain(uVar6);
    FUN_1002cecc8();
    _swift_release(uVar6);
    _swift_release(dVar11);
    _swift_release(uVar13);
    _swift_release(uVar12);
    _swift_release(uVar8);
    if (dVar10 - dVar9 < 172800.0) {
      return;
    }
  }
  puVar5 = *(ulong **)(unaff_x20 + 0x48);
  puVar3 = &DAT_100ec73d8;
  _swift_allocObject(&DAT_100ec73d8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar5) + 0x580);
  _swift_retain(puVar3);
  (*pcVar4)(FUN_1002d079c,puVar3);
  _swift_release_n(puVar3,2);
  return;
}



/* Address: 0x1002d024c | FUN_1002d024c */

void FUN_1002d024c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    _swift_retain(uVar1);
    _swift_release(param_2);
    FUN_1000037f0(&DAT_100fbcc08,&DAT_100c3d3b0);
    FUN_1002d07a4(&DAT_100fbcc10,
                  PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Subject_in_Combine_>Combine__Subject_100ea97f8
                 );
    (extension_Combine)::Combine::Subject::_send();
    _swift_release(uVar1);
    return;
  }
  return;
}



/* Address: 0x1002d02d0 | FUN_1002d02d0 */

void FUN_1002d02d0(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_1002d000c();
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1002d030c | FUN_1002d030c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d030c(void)

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
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002d038c | FUN_1002d038c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002d038c(void)

{
  return ZEXT816(0x100fbcb88);
}



/* Address: 0x1002d03ac | FUN_1002d03ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002d03ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  PassthroughSubject *this;
  __int64 _Var5;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = &DAT_100c3d3c0;
  _swift_getKeyPath();
  puVar2 = &DAT_100c3d3e8;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbc418;
  FUN_1000037f0(&DAT_100fbc418,&DAT_100c3d410);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  FUN_1000d4ca4(0);
  _swift_allocObject();
  puVar4 = (undefined8 *)0x6769666e6f43;
  FUN_1000d4624(0x6769666e6f43,&DAT_e600000000000000);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  *(undefined8 **)(unaff_x20 + 0x18) = puVar4;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(code **)(unaff_x20 + 0x28) = FUN_1002d0834;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(code **)(unaff_x20 + 0x38) = FUN_1002d08c8;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  FUN_1001396ac();
  uVar6 = *puVar4;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar6;
  this = (PassthroughSubject *)&DAT_100fbcc08;
  FUN_1000037f0(&DAT_100fbcc08,&DAT_100c3d3b0);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(this);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var5 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar1 = PTR___swiftEmptySetSingleton_100eae0e8, _Var5 != 0)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002d08e4();
  }
  *(undefined **)(unaff_x20 + 0x58) = puVar1;
  return;
}



/* Address: 0x1002d04f4 | FUN_1002d04f4 */

void FUN_1002d04f4(void)

{
  FUN_1000037f0(&DAT_100fbcc08,&DAT_100c3d3b0);
  FUN_1002d07a4(&DAT_100fbcc20,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9800
               );
  (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  return;
}



/* Address: 0x1002d054c | FUN_1002d054c */

void FUN_1002d054c(void)

{
  FUN_1002cf9c8();
  return;
}



/* Address: 0x1002d056c | FUN_1002d056c */

void FUN_1002d056c(void)

{
  FUN_1002cfdf4();
  return;
}



/* Address: 0x1002d058c | FUN_1002d058c */

void FUN_1002d058c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d05b0 | FUN_1002d05b0 */

void FUN_1002d05b0(void)

{
  FUN_1002d024c();
  return;
}



/* Address: 0x1002d05b8 | FUN_1002d05b8 */

void FUN_1002d05b8(void)

{
  FUN_1002d02d0();
  return;
}



/* Address: 0x1002d05c0 | FUN_1002d05c0 */

void FUN_1002d05c0(long param_1,long param_2)

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



/* Address: 0x1002d05d4 | FUN_1002d05d4 */

void FUN_1002d05d4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002d05dc | FUN_1002d05dc */

void FUN_1002d05dc(long param_1)

{
  Date DVar1;
  long *plVar2;
  Date DVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ObservableObjectPublisher *pOVar7;
  ObservableObjectPublisher **ppOVar8;
  long extraout_x8;
  long lVar9;
  double dVar10;
  ObservableObjectPublisher *local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long local_48;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  plVar2 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    DVar3 = Foundation::Date::init();
    dVar10 = Foundation::Date::get_timeIntervalSince1970(DVar3);
    (**(code **)(lVar9 + 8))
              (auStack_68 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),DVar1.unknown);
    lVar9 = *plVar2;
    _swift_conformsToProtocol2(lVar9,PTR_Combine__ObservableObject_100ea97b0);
    if (lVar9 != 0) {
      plVar4 = plVar2;
      _swift_getObjectType(plVar2);
      puVar6 = PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0;
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,lVar9,plVar4,
                 PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0,
                 PTR___associated_type_descriptor_for_Combine_ObservableObject_ObjectWillChangePublisher_100ea95e0
                );
      local_50 = uVar5;
      _swift_getAssociatedConformanceWitness
                (lVar9,plVar4,uVar5,puVar6,
                 PTR___associated_conformance_descriptor_for_Combine_ObservableObject_Combine_ObservableObject_ObjectWillChangePublisher__Combine_Publisher_100ea97b8
                );
      local_48 = lVar9;
      FUN_10000cbb0(auStack_68);
      _swift_retain(plVar2);
      Combine::ObservableObject::_get_objectWillChange();
      _swift_release(plVar2);
      puVar6 = &DAT_100fbc4c8;
      FUN_1000037f0(&DAT_100fbc4c8,&DAT_100c3cf58);
      pOVar7 = Combine::ObservableObjectPublisher::typeMetadataAccessor();
      ppOVar8 = &local_70;
      _swift_dynamicCast(ppOVar8,auStack_68,puVar6,pOVar7,6);
      if (((ulong)ppOVar8 & 1) != 0) {
        Combine::ObservableObjectPublisher::send(local_70);
        _swift_release(local_70);
      }
    }
    _swift_beginAccess(plVar2 + 2,auStack_68,0x21,0);
    _swift_retain(plVar2);
    FUN_1002cf0a0(dVar10);
    _swift_endAccess(auStack_68);
    _swift_release_n(plVar2,2);
  }
  return;
}



/* Address: 0x1002d079c | FUN_1002d079c */

void FUN_1002d079c(void)

{
  FUN_1002d05dc();
  return;
}



/* Address: 0x1002d07a4 | FUN_1002d07a4 */

void FUN_1002d07a4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fbcc08;
    FUN_100005c24(&DAT_100fbcc08,&DAT_100c3d3b0);
    _swift_getWitnessTable(param_2,puVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1002d07f0 | FUN_1002d07f0 */

void FUN_1002d07f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x8000000100da0ee0;
  uVar3 = 0;
  uVar1 = 0xd000000000000015;
  FUN_1002cf530();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1002d0834 | FUN_1002d0834 */

void FUN_1002d0834(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [32];
  
  puVar2 = &DAT_100fbc420;
  FUN_100011090(param_2,auStack_50,&DAT_100fbc420,&DAT_100c3ce30);
  FUN_1000037f0(&DAT_100fbc420,&DAT_100c3ce30);
  puVar3 = param_1;
  _swift_dynamicCast(param_1,auStack_50,puVar2,PTR___type_metadata_for_Swift_Double_100eac5d0,6);
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    *param_1 = 0;
  }
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


