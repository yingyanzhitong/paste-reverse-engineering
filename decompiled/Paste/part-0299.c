/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003c483c | FUN_1003c483c */

void FUN_1003c483c(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::analytics));
  return;
}



/* Address: 0x1003c484c | FUN_1003c484c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003c484c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [40];
  
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists) = 0;
  lVar2 = _TtC9PasteCore23ListCollectionViewModel::analytics;
  puVar3 = &DAT_100c44ea0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdc18;
  FUN_1000037f0(&DAT_100fbdc18,&DAT_100c44a80);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::cancellable);
  FUN_1003c4978();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  IVar6 = IVar5;
  FUN_1003c473c();
  IVar7 = IVar6;
  FUN_1001aeb1c();
  _swift_release(IVar6);
  FUN_1003c4528(auStack_68,IVar5,IVar7);
  _swift_release(IVar7);
  lVar2 = _TtC9PasteCore23ListCollectionViewModel::cancellable;
  _swift_beginAccess(IVar5 + _TtC9PasteCore23ListCollectionViewModel::cancellable,auStack_80,0x21,0)
  ;
  FUN_100364968(auStack_68,IVar5 + lVar2);
  _swift_endAccess(auStack_80);
  return IVar5;
}



/* Address: 0x1003c4974 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x1003c4978 | FUN_1003c4978 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c4978(void)

{
  return ZEXT816(0x100f98800);
}



/* Address: 0x1003c4998 | _TtC9PasteCore23ListCollectionViewModel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore23ListCollectionViewModel::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_10033d98c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCore/ListCollectionViewModel.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/ListCollectionViewModel.swift",0x27,1,0x13,UVar3.unknown,pMVar1);
  }
  FUN_1003c484c();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003c4a30 | FUN_1003c4a30 */

/* WARNING: Removing unreachable block (ram,0x0001003c4a60) */

void FUN_1003c4a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40 = param_3;
  uStack_38 = param_1;
  local_30 = param_2;
  FUN_1002ff310(FUN_1003c4b10,auStack_50);
  return;
}



/* Address: 0x1003c4a78 | FUN_1003c4a78 */

void FUN_1003c4a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100357e58(auStack_78);
  FUN_100004640(auStack_78,local_60);
  local_90 = param_3;
  uStack_88 = param_4;
  (**(code **)(*(long *)(lStack_58 + 0x10) + 0x20))(param_2,FUN_1003c5704,auStack_a0,local_60);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003c4b10 | FUN_1003c4b10 */

void FUN_1003c4b10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4a78(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003c4b2c | FUN_1003c4b2c */

void FUN_1003c4b2c(String *param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  LocalizedStringResource LVar2;
  long extraout_x8;
  String SVar3;
  
  SVar3.bridgeObject = param_3;
  SVar3.str = param_2;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  _swift_bridgeObjectRelease(param_1->bridgeObject);
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    FUN_1001c6aa4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar3 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)
                       (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  }
  else {
    _swift_bridgeObjectRetain(param_3);
  }
  *param_1 = SVar3;
  return;
}



/* Address: 0x1003c4bd4 | FUN_1003c4bd4 */

/* WARNING: Removing unreachable block (ram,0x0001003c4c04) */

void FUN_1003c4bd4(undefined1 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  FUN_1002ff310(FUN_1003c4ca8,auStack_40);
  return;
}



/* Address: 0x1003c4c1c | FUN_1003c4c1c */

void FUN_1003c4c1c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_80 [16];
  undefined1 local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  FUN_100004640(auStack_68,local_50);
  local_70 = param_3;
  (**(code **)(*(long *)(lStack_48 + 0x10) + 0x30))(param_2,FUN_1003c56fc,auStack_80,local_50);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003c4ca8 | FUN_1003c4ca8 */

void FUN_1003c4ca8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4c1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003c4cc4 | FUN_1003c4cc4 */

void FUN_1003c4cc4(undefined8 *param_1,ulong param_2)

{
  *param_1 = *(undefined8 *)(&DAT_100c44ef8 + (param_2 & 0xff) * 8);
  return;
}



/* Address: 0x1003c4cdc | FUN_1003c4cdc */

/* WARNING: Removing unreachable block (ram,0x0001003c4d08) */

void FUN_1003c4cdc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_1002ff310(FUN_1003c4da0,auStack_40);
  return;
}



/* Address: 0x1003c4d20 | FUN_1003c4d20 */

void FUN_1003c4d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(*(long *)(lStack_48 + 0x10) + 0x18))(param_2,param_3,local_50);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003c4da0 | FUN_1003c4da0 */

void FUN_1003c4da0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4d20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003c4db8 | FUN_1003c4db8 */

/* WARNING: Removing unreachable block (ram,0x0001003c4df8) */

void FUN_1003c4db8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  FUN_1002ff2ec(FUN_1003c4ee4,auStack_50);
  return;
}



/* Address: 0x1003c4e4c | FUN_1003c4e4c */

void FUN_1003c4e4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_100357e58(auStack_78);
  puVar1 = auStack_78;
  FUN_100004640(puVar1,local_60);
  FUN_100367c5c(param_3,param_4,param_5,local_60,uStack_58,puVar1);
  *param_1 = param_3;
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003c4ee4 | FUN_1003c4ee4 */

void FUN_1003c4ee4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4e4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003c4f00 | FUN_1003c4f00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c512c) */
/* WARNING: Removing unreachable block (ram,0x0001003c5168) */

void FUN_1003c4f00(ID param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  char *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  ID IVar6;
  __int64 _Var7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_1b0 [8];
  undefined8 local_1a8;
  code *pcStack_1a0;
  undefined1 auStack_198 [96];
  String local_138;
  String local_128;
  String SStack_118;
  code *pcStack_108;
  undefined *local_100;
  String SStack_f8;
  code *pcStack_e8;
  undefined8 local_e0;
  String local_d0;
  String local_c0;
  String local_b0;
  code *local_a0;
  undefined *puStack_98;
  String local_90;
  code *local_80;
  undefined8 uStack_78;
  
  puVar1 = &DAT_100fbfa58;
  local_1a8 = param_3;
  pcStack_1a0 = param_2;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_1b0 + -extraout_x8;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100ecf2a0;
  _swift_allocObject(&DAT_100ecf2a0,0x18,7);
  *(ID *)(puVar1 + 0x10) = param_1;
  IVar6 = param_1;
  FUN_10032a1ec();
  if ((IVar6 & 1) == 0) {
    FUN_1001c2d08(LVar2.unknown);
  }
  else {
    FUN_1001c1088();
  }
  SVar9 = (extension_Foundation)::Swift::String::init(LVar2);
  pcVar3 = SVar9.str;
  FUN_1003b4444();
  if (pcVar3 == (char *)0x0) {
    FUN_100325588();
    (**(code **)(*(long *)(pcVar3 + -8) + 0x38))(puVar8,1,1,pcVar3);
LAB_1003c50cc:
    FUN_100005808(puVar8,&DAT_100fbfa58,&DAT_100c44ed0);
    IVar6 = objc_stub::managedObjectContext(param_1);
    if (IVar6 != 0) {
      FUN_100329088();
      FUN_1003214a8(0);
      _Var7 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
      if (_Var7 != 0) {
        objc_stub::name(param_1);
        SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6ac8(LVar2.unknown,SVar10.str,SVar10.bridgeObject);
        _swift_bridgeObjectRelease(SVar10.bridgeObject);
        SVar10 = (extension_Foundation)::Swift::String::init(LVar2);
        FUN_1001bbf88(LVar2.unknown);
        SVar11 = (extension_Foundation)::Swift::String::init(LVar2);
        _swift_retain(puVar1);
        FUN_1001c0788(LVar2.unknown);
        SStack_f8 = (extension_Foundation)::Swift::String::init(LVar2);
        local_d0 = SVar10;
        local_c0 = SVar11;
        goto LAB_1003c52a4;
      }
    }
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    local_c0.str = (char *)param_1;
    FUN_1002ff310(FUN_1003c53f0,&local_d0);
    _swift_release(puVar1);
  }
  else {
    FUN_10032670c(puVar8);
    lVar4 = 0;
    FUN_100325588();
    puVar5 = puVar8;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar8,1,lVar4);
    if ((int)puVar5 == 1) goto LAB_1003c50cc;
    FUN_100005808(puVar8,&DAT_100fbfa58,&DAT_100c44ed0);
    objc_stub::name(param_1);
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    thunk_FUN_1001e6ad8(LVar2.unknown,SVar10.str,SVar10.bridgeObject);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar2);
    pcVar3 = SVar10.str;
    FUN_10032a1ec();
    if (((ulong)pcVar3 & 1) == 0) {
      FUN_1001bca08(LVar2.unknown);
    }
    else {
      FUN_1001bc888();
    }
    SVar11 = (extension_Foundation)::Swift::String::init(LVar2);
    _swift_retain(puVar1);
    FUN_1001c0788(LVar2.unknown);
    SStack_f8 = (extension_Foundation)::Swift::String::init(LVar2);
    local_d0 = SVar10;
    local_c0 = SVar11;
LAB_1003c52a4:
    uStack_78 = 0;
    local_80 = FUN_100004520;
    local_a0 = FUN_1003c5370;
    pcStack_108 = FUN_1003c5370;
    pcStack_e8 = FUN_100004520;
    local_e0 = 0;
    local_138 = local_d0;
    SStack_118 = SVar9;
    local_100 = puVar1;
    local_b0 = SVar9;
    puStack_98 = puVar1;
    local_90 = SStack_f8;
    local_128 = local_c0;
    FUN_10003c978(&local_d0,auStack_198);
    FUN_10003c9b4(&local_138);
    (*pcStack_1a0)(&local_d0);
    _swift_release(puVar1);
    FUN_10003c9b4(&local_d0);
  }
  return;
}



/* Address: 0x1003c5308 | FUN_1003c5308 */

/* WARNING: Removing unreachable block (ram,0x0001003c5334) */

void FUN_1003c5308(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_30 = param_1;
  FUN_1002ff310(FUN_1003c57d8,auStack_40);
  return;
}



/* Address: 0x1003c534c | FUN_1003c534c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c534c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c5370 | FUN_1003c5370 */

void FUN_1003c5370(void)

{
  long unaff_x20;
  
  FUN_1003c5308(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003c5378 | FUN_1003c5378 */

void FUN_1003c5378(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100357e58(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(*(long *)(lStack_48 + 0x10) + 0x10))(param_2,local_50);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1003c53f0 | FUN_1003c53f0 */

void FUN_1003c53f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c5378(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003c5408 | FUN_1003c5408 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c54c0) */
/* WARNING: Removing unreachable block (ram,0x0001003c54f0) */

String * FUN_1003c5408(code *param_1)

{
  LocalizedStringResource LVar1;
  code *self;
  ID IVar2;
  __int64 _Var3;
  String *pSVar4;
  long extraout_x8;
  String SVar5;
  String SVar6;
  String SVar7;
  undefined1 auStack_1a0 [8];
  code *local_198;
  undefined1 auStack_190 [96];
  String local_130;
  String local_120;
  String local_110;
  code *local_100;
  undefined8 uStack_f8;
  String local_f0;
  code *local_e0;
  undefined8 uStack_d8;
  String local_c8;
  String local_b8;
  String local_a8;
  code *local_98;
  undefined8 uStack_90;
  String local_88;
  code *local_78;
  undefined8 uStack_70;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = FUN_10035aca8;
  FUN_10035a72c(FUN_10035aca8,0);
  IVar2 = objc_stub::managedObjectContext((ID)self);
  if (IVar2 != 0) {
    FUN_100329088();
    FUN_1003214a8(0);
    _Var3 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
    if (_Var3 != 0) {
      FUN_1001bcd08(LVar1.unknown,0);
      SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
      FUN_1001bcb88(LVar1.unknown);
      SVar6 = (extension_Foundation)::Swift::String::init(LVar1);
      FUN_1001c1988(LVar1.unknown);
      SVar7 = (extension_Foundation)::Swift::String::init(LVar1);
      local_198 = param_1;
      FUN_1001c0788(LVar1.unknown);
      local_f0 = (extension_Foundation)::Swift::String::init(LVar1);
      local_98 = FUN_1003c5624;
      uStack_90 = 0;
      local_78 = FUN_100004520;
      uStack_70 = 0;
      local_100 = FUN_1003c5624;
      uStack_f8 = 0;
      local_e0 = FUN_100004520;
      uStack_d8 = 0;
      local_130 = SVar5;
      local_120 = SVar6;
      local_110 = SVar7;
      local_c8 = SVar5;
      local_b8 = SVar6;
      local_a8 = SVar7;
      local_88 = local_f0;
      FUN_10003c978(&local_c8,auStack_190);
      FUN_10003c9b4(&local_130);
      (*local_198)(&local_c8);
      pSVar4 = &local_c8;
      FUN_10003c9b4(pSVar4);
      return pSVar4;
    }
  }
  FUN_1002ff310(FUN_1000ad648,0);
  return (String *)0x0;
}



/* Address: 0x1003c5624 | FUN_1003c5624 */

/* WARNING: Removing unreachable block (ram,0x0001003c564c) */

void FUN_1003c5624(void)

{
  FUN_1002ff310(FUN_1000ad648,0);
  return;
}



/* Address: 0x1003c5670 | FUN_1003c5670 */

void FUN_1003c5670(void)

{
  FUN_1003c4978();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003c56a0 | _TtC9PasteCore23ListCollectionViewModel::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore23ListCollectionViewModel::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___lists));
  _swift_release(*(undefined8 *)(param_1 + analytics));
  FUN_100005808(param_1 + cancellable,&DAT_100fc07f0,&DAT_100c42950);
  return;
}



/* Address: 0x1003c56fc | FUN_1003c56fc */

void FUN_1003c56fc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4cc4(param_1,*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003c5704 | FUN_1003c5704 */

void FUN_1003c5704(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c4b2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003c570c | FUN_1003c570c */

void FUN_1003c570c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c5730 | FUN_1003c5730 */

void FUN_1003c5730(undefined8 param_1,long param_2)

{
  ObservableObjectPublisher *this;
  
  this = (ObservableObjectPublisher *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (this != (ObservableObjectPublisher *)0x0) {
    Combine::ObservableObjectPublisher::send(this);
    _swift_release(this);
    return;
  }
  return;
}



/* Address: 0x1003c576c | FUN_1003c576c */

void FUN_1003c576c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc07d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc07c8;
  FUN_100005c24(&DAT_100fc07c8,&DAT_100c425f0);
  puVar2 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             puVar1);
  DAT_100fc07d0 = puVar2;
  return;
}



/* Address: 0x1003c57bc | FUN_1003c57bc */

void FUN_1003c57bc(void)

{
  FUN_1003c5730();
  return;
}



/* Address: 0x1003c57d4 | thunk_FUN_1003c57bc */

void thunk_FUN_1003c57bc(void)

{
  FUN_1003c5730();
  return;
}



/* Address: 0x1003c57d8 | FUN_1003c57d8 */

void FUN_1003c57d8(void)

{
  FUN_1003c53f0();
  return;
}



/* Address: 0x1003c57ec | FUN_1003c57ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003c57ec(void)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ID self;
  _ArrayBuffer _Var7;
  ulong uVar8;
  long lVar9;
  NSString *pNVar10;
  undefined *puVar11;
  void *aBlock;
  ID unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  puVar6 = &_OBJC_CLASS___NSItemProvider;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar6);
  _Var7.unknown = (undefined *)objc_stub::data(unaff_x20);
  FUN_10031b218();
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___NSConcreteStackBlock_100ea82a0;
  }
  else {
    _Var1.unknown = _Var7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var1.unknown = _Var7.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar6 = PTR___NSConcreteStackBlock_100ea82a0;
  }
  PTR___NSConcreteStackBlock_100ea82a0 = puVar6;
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(_Var7.unknown);
  }
  else {
    uVar15 = 0;
    do {
      while( true ) {
        if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c5a18);
            (*pcVar4)();
          }
          uVar8 = *(ulong *)(_Var7.unknown + uVar15 * 8 + 0x20);
        }
        else {
          uVar8 = uVar15;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var7);
        }
        lVar12 = _TtC9PasteCore14PasteboardItem::types;
        bVar5 = SCARRY8(uVar15,1);
        uVar15 = uVar15 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003c5a14);
          (*pcVar4)();
        }
        _swift_beginAccess(uVar8 + _TtC9PasteCore14PasteboardItem::types,auStack_90,0,0);
        lVar9 = *(long *)(uVar8 + lVar12);
        lVar12 = *(long *)(lVar9 + 0x10);
        if (lVar12 == 0) break;
        _swift_bridgeObjectRetain();
        puVar13 = (undefined8 *)(lVar9 + 0x28);
        do {
          uVar2 = puVar13[-1];
          uVar3 = *puVar13;
          _swift_bridgeObjectRetain(uVar3);
          pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          puVar11 = &DAT_100ecf2f8;
          _swift_allocObject(&DAT_100ecf2f8,0x28,7);
          *(undefined8 *)(puVar11 + 0x10) = uVar2;
          *(undefined8 *)(puVar11 + 0x18) = uVar3;
          *(ulong *)(puVar11 + 0x20) = uVar8;
          local_a0 = FUN_1003c5fb4;
          local_b8 = 0x42000000;
          local_b0 = FUN_1003c5f0c;
          puStack_a8 = &DAT_100ecf310;
          local_c0 = puVar6;
          local_98 = puVar11;
          aBlock = __Block_copy(&local_c0);
          _swift_release(local_98);
          objc_stub::registerDataRepresentationForTypeIdentifier_visibility_loadHandler_
                    (self,pNVar10,0,aBlock);
          __Block_release(aBlock);
          puVar13 = puVar13 + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        _swift_bridgeObjectRelease(lVar9);
        if (uVar15 == uVar14) goto LAB_1003c5a00;
      }
    } while (uVar15 != uVar14);
LAB_1003c5a00:
    _swift_bridgeObjectRelease(_Var7.unknown);
  }
  return self;
}



/* Address: 0x1003c5a60 | FUN_1003c5a60 */

undefined8 FUN_1003c5a60(code *param_1,undefined8 param_2,_StringGuts param_3,_StringGuts param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  URL UVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined *puVar8;
  undefined auStack_70 [8];
  undefined8 local_68;
  
  puVar8 = (undefined *)0x752e63696c627570;
  puVar3 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  if (((param_3.unknown == (undefined *)0x752e63696c627570) &&
      (param_4.unknown == (undefined *)0xea00000000006c72)) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck(param_3,param_4,(_StringComparisonResult)0x70),
     bVar2)) {
    local_68 = param_2;
    FUN_10037ce0c(puVar3);
    UVar4 = Foundation::URL::typeMetadataAccessor();
    lVar7 = *(long *)(UVar4.unknown + -8);
    puVar5 = puVar3;
    (**(code **)(lVar7 + 0x30))(puVar3,1,UVar4.unknown);
    if ((int)puVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c5c44);
      (*pcVar1)();
    }
    uVar6 = 0xef656d616e2d6c72;
    FUN_10037e4b8(0x752e63696c627570,0xef656d616e2d6c72);
    puVar5 = puVar3;
    FUN_1003c5c44(puVar3,puVar8,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    (**(code **)(lVar7 + 8))(puVar3,UVar4.unknown);
    if ((ulong)puVar8 >> 0x3c < 0xf) {
      FUN_1001037b4(puVar5,puVar8);
      (*param_1)(puVar5,puVar8,0);
      FUN_10003bf18(puVar5,puVar8);
      goto LAB_1003c5c18;
    }
  }
  FUN_10037d810(param_3.unknown,param_4.unknown);
  (*param_1)();
  puVar5 = param_3.unknown;
  puVar8 = param_4.unknown;
LAB_1003c5c18:
  FUN_10003bf18(puVar5,puVar8);
  return 0;
}



/* Address: 0x1003c5c44 | FUN_1003c5c44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c5c44(URL param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  NSArray *pNVar8;
  Data DVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  String local_78;
  undefined *local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_78 = Foundation::URL::get_absoluteString(param_1);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  local_60 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar4 = 0;
  FUN_10037fe0c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar10 = *(ulong *)(uVar4 + 0x10);
  lVar1 = uVar10 + 1;
  uVar11 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10037fe0c(uVar11,lVar1,1,uVar4);
  }
  *(long *)(uVar11 + 0x10) = lVar1;
  FUN_100011080(&local_78,uVar11 + uVar10 * 0x20 + 0x20);
  if (param_3 != 0) {
    local_60 = puVar7;
    local_78 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    uVar4 = *(ulong *)(uVar11 + 0x18);
    lVar2 = uVar10 + 2;
    _swift_bridgeObjectRetain(param_3);
    uVar10 = uVar11;
    if ((long)(uVar4 >> 1) < lVar2) {
      uVar10 = (ulong)(1 < uVar4);
      FUN_10037fe0c(uVar10,lVar2,1,uVar11);
    }
    *(long *)(uVar10 + 0x10) = lVar2;
    FUN_100011080(&local_78,uVar10 + lVar1 * 0x20 + 0x20);
    pcVar5 = &DAT_100fbef68;
    FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
    _swift_initStackObject();
    pcVar5[0x18] = '\x02';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    pcVar13 = pcVar5 + 0x20;
    pcVar13[0] = 't';
    pcVar13[1] = 'i';
    pcVar13[2] = 't';
    pcVar13[3] = 'l';
    pcVar13[4] = 'e';
    pcVar13[5] = '\0';
    pcVar13[6] = '\0';
    pcVar13[7] = '\0';
    *(undefined1 **)(pcVar5 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(pcVar5 + 0x30) = param_2;
    *(long *)(pcVar5 + 0x38) = param_3;
    pcVar6 = pcVar5;
    FUN_1003c92b8();
    _swift_setDeallocating(pcVar5);
    FUN_100312044(pcVar13);
    puVar7 = &DAT_100fbef78;
    FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
    local_78.str = pcVar6;
    uVar4 = *(ulong *)(uVar10 + 0x10);
    uVar11 = uVar10;
    local_60 = puVar7;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_10037fe0c(uVar11,uVar4 + 1,1,uVar10);
    }
    *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
    FUN_100011080(&local_78,uVar11 + uVar4 * 0x20 + 0x20);
  }
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_78.bridgeObject;
  local_78 = (String)(auVar3 << 0x40);
  DVar9.unknown =
       (undefined *)
       objc_stub::FUN_100c00a40(&_OBJC_CLASS___NSPropertyListSerialization,pNVar8,200,0,&local_78);
  if (DVar9.unknown == (undefined *)0x0) {
    pcVar5 = local_78.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(pcVar5);
    _swift_bridgeObjectRelease(uVar11);
    DVar9.unknown = (undefined *)0x0;
    uVar12 = 0xf000000000000000;
  }
  else {
    uVar12 = extraout_x1;
    DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
    _swift_bridgeObjectRelease(uVar11);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    auVar14._8_8_ = uVar12;
    auVar14._0_8_ = DVar9.unknown;
    return auVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003c5f0c | FUN_1003c5f0c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

code * FUN_1003c5f0c(long param_1,void *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined *puVar4;
  code *pcVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  pvVar3 = __Block_copy(param_2);
  puVar4 = &DAT_100ecf348;
  _swift_allocObject(&DAT_100ecf348,0x18,7);
  *(void **)(puVar4 + 0x10) = pvVar3;
  _swift_retain(uVar2);
  pcVar5 = FUN_1003c6078;
  (*pcVar1)(FUN_1003c6078,puVar4);
  _swift_release(uVar2);
  _swift_release(puVar4);
  return pcVar5;
}



/* Address: 0x1003c5f88 | FUN_1003c5f88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c5f88(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c5fb4 | FUN_1003c5fb4 */

void FUN_1003c5fb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1003c5a60(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003c5fc0 | FUN_1003c5fc0 */

void FUN_1003c5fc0(long param_1,long param_2)

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



/* Address: 0x1003c5fd4 | FUN_1003c5fd4 */

void FUN_1003c5fd4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003c5fdc | FUN_1003c5fdc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003c5fdc(Data param_1,ulong param_2,long param_3,long param_4)

{
  NSError *pNVar1;
  NSData *pNVar2;
  
  if (param_2 >> 0x3c < 0xf) {
    pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
  }
  else {
    pNVar2 = (NSData *)0x0;
  }
  pNVar1 = (NSError *)0x0;
  if (param_3 != 0) {
    pNVar1 = Foundation::__convertErrorToNSError();
  }
  (**(code **)(param_4 + 0x10))(param_4,pNVar2,pNVar1);
  return 0;
}



/* Address: 0x1003c6054 | FUN_1003c6054 */

void FUN_1003c6054(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c6078 | FUN_1003c6078 */

void FUN_1003c6078(void)

{
  FUN_1003c5fdc();
  return;
}



/* Address: 0x1003c6080 | FUN_1003c6080 */

void FUN_1003c6080(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x270;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a7a2c;
  FUN_1003c69b0(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x1003c60f8 | FUN_1003c60f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c60f8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long local_38;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c61b0);
      (*pcVar1)();
    }
    local_38 = param_2;
    _swift_unknownObjectRetain(param_2);
    puVar2 = &DAT_100fc2f08;
    FUN_1000037f0(&DAT_100fc2f08,&DAT_100c44f60);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  else {
    puVar2 = &DAT_100fc2f08;
    local_38 = param_3;
    FUN_1000037f0(&DAT_100fc2f08,&DAT_100c44f60);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  return;
}



/* Address: 0x1003c61b0 | FUN_1003c61b0 */

void FUN_1003c61b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar1 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_68 = param_2;
  _swift_unknownObjectRetain(param_2);
  puVar1 = &DAT_100fc2f10;
  FUN_1000037f0(&DAT_100fc2f10,&DAT_100c44f68);
  puVar3 = puVar7;
  _swift_dynamicCast(puVar7,&local_68,puVar1,UVar2.unknown,6);
  pcVar9 = *(code **)(lVar10 + 0x38);
  if ((int)puVar3 == 0) {
    (*pcVar9)(puVar7,1,1,UVar2.unknown);
    FUN_100005808(puVar7,&DAT_100fc1a40,&DAT_100c40660);
    local_58 = param_2;
    _swift_unknownObjectRetain(param_2);
    puVar4 = &local_68;
    _swift_dynamicCast(puVar4,&local_58,puVar1,PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((int)puVar4 != 0) {
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uStack_60);
      return;
    }
    local_58 = param_2;
    _swift_unknownObjectRetain(param_2);
    puVar4 = &local_68;
    _swift_dynamicCast(puVar4,&local_58,puVar1,PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    uVar5 = local_68;
    if ((int)puVar4 != 0) {
      FUN_1003c66ec(param_1,local_68,uStack_60);
      FUN_10003bf2c(uVar5,uStack_60);
      return;
    }
    uVar5 = 1;
  }
  else {
    (*pcVar9)(puVar7,0,1,UVar2.unknown);
    pcVar6 = *(code **)(lVar10 + 0x20);
    (*pcVar6)(lVar8,puVar7,UVar2.unknown);
    (*pcVar6)(param_1,lVar8,UVar2.unknown);
    uVar5 = 0;
  }
  (*pcVar9)(param_1,uVar5,1,UVar2.unknown);
  return;
}



/* Address: 0x1003c63c4 | FUN_1003c63c4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c63c4(undefined8 param_1,ulong param_2,ID param_3)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  UTType UVar3;
  ulong uVar4;
  _ArrayBuffer _Var5;
  UTType self;
  UTType UVar6;
  NSString *pNVar7;
  ID IVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  undefined *puVar11;
  code *pcVar12;
  undefined *puVar13;
  String SVar14;
  
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x10) = uVar4;
  _Var5.unknown = (undefined *)objc_stub::attachments(param_3);
  if (_Var5.unknown != (undefined *)0x0) {
    FUN_1003c7bf0(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var5.unknown >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
        _Var2.unknown = _Var5.unknown;
      }
      puVar11 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (puVar11 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1003c662c);
            (*pcVar12)();
          }
                    /* WARNING: Load size is inaccurate */
          self.unknown = _Var5.unknown[(long)puVar13 * 8 + 0x20];
        }
        else {
          self.unknown = puVar13;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar13,_Var5);
        }
        puVar1 = puVar13 + 1;
        if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1003c6628);
          (*pcVar12)();
        }
        UVar6 = UniformTypeIdentifiers::UTType::get_url(self);
        SVar14 = UniformTypeIdentifiers::UTType::get_identifier(UVar6);
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        pcVar12 = *(code **)(lVar10 + 8);
        (*pcVar12)(uVar4,UVar3.unknown);
        IVar8 = objc_stub::hasItemConformingToTypeIdentifier_((ID)self.unknown,pNVar7);
        if ((int)IVar8 != 0) {
          UVar6 = UniformTypeIdentifiers::UTType::get_fileURL((UTType)0x0);
          SVar14 = UniformTypeIdentifiers::UTType::get_identifier(UVar6);
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar14.bridgeObject);
          (*pcVar12)(uVar4,UVar3.unknown);
          IVar8 = objc_stub::hasItemConformingToTypeIdentifier_((ID)self.unknown,pNVar7);
          if ((int)IVar8 == 0) goto LAB_1003c65b0;
        }
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar11);
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1003c6690);
          (*pcVar12)();
        }
                    /* WARNING: Load size is inaccurate */
        self.unknown = _Var5.unknown[0x20];
      }
      else {
        self.unknown = (undefined *)0x0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var5);
      }
LAB_1003c65b0:
      *(undefined **)(unaff_x22 + 0x18) = self.unknown;
      _swift_bridgeObjectRelease(_Var5.unknown);
      plVar9 = (long *)0x270;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x20) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1003c6690;
      FUN_1003c69b0(param_1,param_2 & 0xcfffffffffffffff,self.unknown);
      return;
    }
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001003c6678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1003c6690 | FUN_1003c6690 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c6690(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001003c66e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x1003c66ec | FUN_1003c66ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c66ec(undefined8 param_1,Data param_2,long param_3)

{
  undefined *puVar1;
  Encoding EVar2;
  NSData *pNVar3;
  ID IVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  URL UVar8;
  long local_c0 [2];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  EVar2 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar2.unknown + -8) + 0x40));
  pNVar3 = Foundation::Data::_bridgeToObjectiveC(param_2);
  local_b0 = (undefined *)0x0;
  IVar4 = objc_stub::propertyListWithData_options_format_error_
                    ((ID)&_OBJC_CLASS___NSPropertyListSerialization,pNVar3,0,0,&local_b0);
  if (IVar4 == 0) {
    EVar2.unknown = local_b0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    FUN_100011080(&local_90,auStack_68);
    FUN_10000cbfc(auStack_68,&local_90);
    puVar1 = PTR___type_metadata_for_Any_100eae0c0;
    ppuVar5 = &local_b0;
    _swift_dynamicCast(ppuVar5,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((int)ppuVar5 != 0) {
LAB_1003c6804:
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uStack_a8);
      FUN_100004594(auStack_68);
      goto LAB_1003c697c;
    }
    FUN_10000cbfc(auStack_68,&local_b0);
    puVar6 = &DAT_100fc2f18;
    FUN_1000037f0(&DAT_100fc2f18,&DAT_100c44f70);
    plVar7 = local_c0;
    _swift_dynamicCast(plVar7,&local_b0,puVar1 + 8,puVar6,6);
    if ((int)plVar7 == 0) {
      FUN_100004594(auStack_68);
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      if (*(long *)(local_c0[0] + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_c0[0]);
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        FUN_10000cbfc(local_c0[0] + 0x20,&local_90);
        _swift_bridgeObjectRelease(local_c0[0]);
        if (local_78 != 0) {
          ppuVar5 = &local_b0;
          _swift_dynamicCast(ppuVar5,&local_90,puVar1 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          if (((ulong)ppuVar5 & 1) == 0) {
            EVar2.unknown = auStack_68;
            FUN_100004594();
            goto LAB_1003c6924;
          }
          goto LAB_1003c6804;
        }
      }
      FUN_100004594(auStack_68);
    }
    EVar2.unknown = (undefined *)&local_90;
    FUN_100005808(EVar2.unknown,&DAT_100fbe6f0,&DAT_100c42750);
  }
LAB_1003c6924:
  Encoding::_get_utf8(EVar2);
  (extension_Foundation)::Swift::String::_init((Encoding)param_2.unknown);
  if (param_3 == 0) {
    UVar8 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(param_1,1,1,UVar8.unknown);
  }
  else {
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(param_3);
  }
LAB_1003c697c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003c69b0 | FUN_1003c69b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c69b0(undefined8 param_1,undefined8 param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  Encoding EVar9;
  ulong uVar10;
  undefined *puVar11;
  UTType UVar12;
  ulong uVar13;
  URL UVar14;
  ID IVar15;
  NSString *pNVar16;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_2;
  *(ID *)(unaff_x22 + 0x178) = param_3;
  *(undefined8 *)(unaff_x22 + 0x168) = param_1;
  EVar9 = Encoding::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = EVar9.unknown;
  lVar17 = *(long *)(EVar9.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar17;
  uVar10 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar10;
  puVar11 = &DAT_100fc2f00;
  FUN_1000037f0(&DAT_100fc2f00,&DAT_100c44f58);
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar10;
  UVar12 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1a0) = UVar12.unknown;
  lVar17 = *(long *)(UVar12.unknown + -8);
  *(long *)(unaff_x22 + 0x1a8) = lVar17;
  uVar10 = *(long *)(lVar17 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar13;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar10;
  puVar11 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  uVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar10;
  UVar14 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1d8) = UVar14.unknown;
  lVar17 = *(long *)(UVar14.unknown + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar17;
  uVar10 = *(long *)(lVar17 + 0x40) + 0xf;
  uVar13 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar13;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar10;
  puVar11 = &DAT_100fc2f08;
  FUN_1000037f0(&DAT_100fc2f08,&DAT_100c44f60);
  *(undefined **)(unaff_x22 + 0x1f8) = puVar11;
  lVar17 = *(long *)(puVar11 + -8);
  *(long *)(unaff_x22 + 0x200) = lVar17;
  uVar10 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar10;
  IVar15 = 0;
  FUN_100381740();
  _objc_allocWithZone();
  IVar15 = objc_stub::init(IVar15);
  *(ID *)(unaff_x22 + 0x210) = IVar15;
  IVar15 = objc_stub::registeredTypeIdentifiers(param_3);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  *(ID *)(unaff_x22 + 0x218) = IVar15;
  lVar17 = *(long *)(IVar15 + 0x10);
  *(long *)(unaff_x22 + 0x220) = lVar17;
  if (lVar17 == 0) {
    _swift_bridgeObjectRelease(IVar15);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 400);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003c6d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x228) = _TtC9PasteCore14PasteboardItem::types;
  *(undefined8 *)(unaff_x22 + 0x230) = _TtC9PasteCore14PasteboardItem::dataByType;
  *(undefined8 *)(unaff_x22 + 0x240) = 0;
  *(undefined8 *)(unaff_x22 + 0x238) = 0;
  lVar17 = *(long *)(unaff_x22 + 0x218);
  if (*(long *)(lVar17 + 0x10) != 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar3 = *(long *)(unaff_x22 + 0x200);
    IVar15 = *(ID *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(lVar17 + 0x20);
    uVar19 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x250) = uVar19;
    _swift_bridgeObjectRetain(uVar19);
    pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    *(NSString **)(unaff_x22 + 600) = pNVar16;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x140;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1003c6d88;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    lVar17 = unaff_x22 + 0x70;
    FUN_10000cbb0(lVar17);
    puVar11 = &DAT_100fc2f10;
    FUN_1000037f0(&DAT_100fc2f10,&DAT_100c44f68);
    *(undefined **)(unaff_x22 + 0x260) = puVar11;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    function.bridgeObject = (void *)0x8000000100da1040;
    function.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,function);
    (**(code **)(lVar3 + 0x20))(lVar17,uVar18,uVar1);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1003c60f8;
    *(undefined **)(unaff_x22 + 0x68) = &DAT_100ecf360;
    objc_stub::loadItemForTypeIdentifier_options_completionHandler_(IVar15,pNVar16,0);
    (**(code **)(lVar3 + 8))(lVar17,uVar1);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003c6d88);
  (*pcVar8)();
}



/* Address: 0x1003c6d88 | FUN_1003c6d88 */

void FUN_1003c6d88(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x168);
  uVar3 = *(undefined8 *)(lVar4 + 0x170);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0x268) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_1003c6dec;
  }
  else {
    pcVar2 = FUN_1003c7980;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1003c6dec | FUN_1003c6dec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c6dec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Encoding using;
  bool bVar4;
  int iVar5;
  Data DVar6;
  NSString *pNVar7;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar8;
  UTType UVar9;
  UTType UVar10;
  UTType UVar11;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  ID self;
  undefined8 uVar16;
  URL UVar17;
  ulong uVar18;
  long lVar19;
  UTType UVar20;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  Encoding EVar32;
  long lVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String function;
  void *pvVar12;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar19 = *(long *)(unaff_x22 + 0x1e0);
  uVar23 = *(ulong *)(unaff_x22 + 0x1d0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar15;
  _swift_unknownObjectRetain(uVar15);
  _swift_dynamicCast(uVar23,unaff_x22 + 0x148,uVar16,uVar21,6);
  pcVar13 = *(code **)(lVar19 + 0x38);
  if ((uVar23 & 1) == 0) {
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d0);
    (*pcVar13)(uVar21,1,1,*(undefined8 *)(unaff_x22 + 0x1d8));
    FUN_100005808(uVar21,&DAT_100fc1a40,&DAT_100c40660);
  }
  else {
    UVar17.unknown = *(undefined **)(unaff_x22 + 0x1f0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar19 = *(long *)(unaff_x22 + 0x1e0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1d0);
    (*pcVar13)(uVar16,0,1,uVar21);
    (**(code **)(lVar19 + 0x20))(UVar17.unknown,uVar16,uVar21);
    bVar4 = Foundation::URL::get_isFileURL(UVar17);
    if ((bVar4) &&
       (((SVar35.bridgeObject = &DAT_e500000000000000, SVar35.str = (char *)0x6765706a2e,
         bVar4 = Swift::String::hasSuffix(SVar35,*(String *)(unaff_x22 + 0x248)), bVar4 ||
         (SVar36.bridgeObject = &DAT_e500000000000000, SVar36.str = (char *)0x666669742e,
         bVar4 = Swift::String::hasSuffix(SVar36,*(String *)(unaff_x22 + 0x248)), bVar4)) ||
        (SVar34.bridgeObject = &DAT_e400000000000000, SVar34.str = (char *)0x676e702e,
        bVar4 = Swift::String::hasSuffix(SVar34,*(String *)(unaff_x22 + 0x248)), bVar4)))) {
      lVar19 = *(long *)(unaff_x22 + 0x238);
      uVar23 = 0;
      DVar6 = Foundation::Data::_init(*(undefined **)(unaff_x22 + 0x1f0));
      if (lVar19 != 0) {
        _swift_errorRelease(lVar19);
        DVar6.unknown = (undefined *)0x0;
        uVar23 = 0xf000000000000000;
      }
      uVar21 = *(undefined8 *)(unaff_x22 + 0x250);
      lVar19 = *(long *)(unaff_x22 + 0x228);
      lVar29 = *(long *)(unaff_x22 + 0x210);
      _swift_beginAccess(lVar29 + lVar19,unaff_x22 + 0x100,0x21,0);
      uVar18 = *(ulong *)(lVar29 + lVar19);
      _swift_bridgeObjectRetain(uVar21);
      uVar22 = uVar18;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar29 + lVar19) = uVar18;
      uVar31 = uVar18;
      if ((uVar22 & 1) == 0) {
        lVar19 = *(long *)(unaff_x22 + 0x228);
        lVar29 = *(long *)(unaff_x22 + 0x210);
        uVar31 = 0;
        FUN_10037f834(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
        *(ulong *)(lVar29 + lVar19) = uVar31;
      }
      uVar22 = *(ulong *)(uVar31 + 0x10);
      uVar18 = uVar31;
      if (*(ulong *)(uVar31 + 0x18) >> 1 <= uVar22) {
        uVar18 = (ulong)(1 < *(ulong *)(uVar31 + 0x18));
        FUN_10037f834(uVar18,uVar22 + 1,1,uVar31);
      }
      uVar21 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
      lVar30 = *(long *)(unaff_x22 + 0x230);
      lVar29 = *(long *)(unaff_x22 + 0x228);
      lVar33 = *(long *)(unaff_x22 + 0x210);
      *(ulong *)(uVar18 + 0x10) = uVar22 + 1;
      lVar19 = uVar18 + uVar22 * 0x10;
      *(undefined8 *)(lVar19 + 0x20) = uVar16;
      *(undefined8 *)(lVar19 + 0x28) = uVar21;
      *(ulong *)(lVar33 + lVar29) = uVar18;
      _swift_endAccess(unaff_x22 + 0x100);
      _swift_beginAccess(lVar33 + lVar30,unaff_x22 + 0x118,0x21,0);
      uVar31 = *(ulong *)(unaff_x22 + 0x250);
      uVar22 = *(ulong *)(unaff_x22 + 0x248);
      lVar19 = *(long *)(unaff_x22 + 0x230);
      lVar29 = *(long *)(unaff_x22 + 0x210);
      if (uVar23 >> 0x3c < 0xf) {
        FUN_1001037b4(DVar6.unknown,uVar23);
        uVar18 = *(ulong *)(lVar29 + lVar19);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar30 = *(long *)(lVar29 + lVar19);
        *(long *)(unaff_x22 + 0x160) = lVar30;
        *(undefined8 *)(lVar29 + lVar19) = 0x8000000000000000;
        FUN_100071370();
        uVar14 = (ulong)~(uint)uVar31 & 1;
        lVar19 = *(long *)(lVar30 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(lVar30 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1003c78fc);
          (*pcVar13)();
        }
        if (*(long *)(lVar30 + 0x18) < lVar19) {
          uVar27 = (uint)*(undefined8 *)(unaff_x22 + 0x250);
          uVar22 = *(ulong *)(unaff_x22 + 0x248);
          FUN_10031d89c(lVar19,uVar18);
          FUN_100071370();
          if (((uint)uVar31 & 1) != (uVar27 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
            return;
          }
        }
        else if ((uVar18 & 1) == 0) {
          FUN_10031ca10();
        }
        lVar19 = *(long *)(unaff_x22 + 0x160);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x250);
        if ((uVar31 & 1) == 0) {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
          lVar29 = lVar19 + (uVar22 >> 6) * 8;
          *(ulong *)(lVar29 + 0x40) = *(ulong *)(lVar29 + 0x40) | 1L << (uVar22 & 0x3f);
          puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x30) + uVar22 * 0x10);
          *puVar1 = uVar16;
          puVar1[1] = uVar21;
          puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar22 * 0x10);
          *puVar1 = DVar6.unknown;
          puVar1[1] = uVar23;
          if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1003c7970);
            (*pcVar13)();
          }
          *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar22 * 0x10);
          uVar16 = *puVar1;
          uVar24 = puVar1[1];
          *puVar1 = DVar6.unknown;
          puVar1[1] = uVar23;
          FUN_10003bf2c(uVar16,uVar24);
          _swift_bridgeObjectRelease(uVar21);
        }
        *(long *)(*(long *)(unaff_x22 + 0x210) + *(long *)(unaff_x22 + 0x230)) = lVar19;
      }
      else {
        uVar21 = *(undefined8 *)(lVar29 + lVar19);
        _swift_bridgeObjectRetain(uVar21);
        FUN_100071370();
        _swift_bridgeObjectRelease(uVar21);
        if ((uVar31 & 1) == 0) {
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x250));
        }
        else {
          lVar29 = *(long *)(unaff_x22 + 0x230);
          lVar30 = *(long *)(unaff_x22 + 0x210);
          iVar5 = (int)*(undefined8 *)(lVar30 + lVar29);
          _swift_isUniquelyReferenced_nonNull_native();
          lVar19 = *(long *)(lVar30 + lVar29);
          *(long *)(unaff_x22 + 0x158) = lVar19;
          *(undefined8 *)(lVar30 + lVar29) = 0x8000000000000000;
          if (iVar5 == 0) {
            FUN_10031ca10();
            lVar19 = *(long *)(unaff_x22 + 0x158);
          }
          uVar21 = *(undefined8 *)(unaff_x22 + 0x250);
          lVar29 = *(long *)(unaff_x22 + 0x230);
          lVar30 = *(long *)(unaff_x22 + 0x210);
          _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar22 * 0x10 + 8));
          puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar22 * 0x10);
          FUN_10003bf2c(*puVar1,puVar1[1]);
          FUN_10031e9f4(uVar22,lVar19);
          _swift_bridgeObjectRelease(uVar21);
          *(long *)(lVar30 + lVar29) = lVar19;
        }
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x1d8);
      lVar19 = *(long *)(unaff_x22 + 0x1e0);
      _swift_endAccess(unaff_x22 + 0x118);
      FUN_10003bf18(DVar6.unknown,uVar23);
      _swift_unknownObjectRelease(uVar15);
      (**(code **)(lVar19 + 8))(uVar16,uVar21);
      uVar21 = 0;
      goto LAB_1003c7124;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1d8));
  }
  SVar35 = *(String *)(unaff_x22 + 0x248);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar19 = *(long *)(unaff_x22 + 0x1a8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x250));
  UniformTypeIdentifiers::UTType::_init(SVar35);
  (**(code **)(lVar19 + 0x30))(uVar16,1,uVar21);
  if ((int)uVar16 == 1) {
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0x198),&DAT_100fc2f00,&DAT_100c44f58);
LAB_1003c70d4:
    uVar16 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar21 = uVar15;
    _swift_getObjectType();
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
    _swift_unknownObjectRetain(uVar15);
    FUN_10037e6b0(unaff_x22 + 0x90,uVar24,uVar16);
    _swift_unknownObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar16);
    lVar19 = unaff_x22 + 0x90;
LAB_1003c711c:
    FUN_100004594(lVar19);
  }
  else {
    UVar9.unknown = *(undefined **)(unaff_x22 + 0x1b8);
    UVar20.unknown = *(undefined **)(unaff_x22 + 0x1c0);
    UVar11.unknown = *(undefined **)(unaff_x22 + 0x1a0);
    lVar19 = *(long *)(unaff_x22 + 0x1a8);
    UVar10.unknown = *(undefined **)(unaff_x22 + 0x198);
    (**(code **)(lVar19 + 0x20))(UVar20.unknown,UVar10.unknown,UVar11.unknown);
    UniformTypeIdentifiers::UTType::get_url(UVar20);
    bVar4 = UniformTypeIdentifiers::UTType::conforms(UVar9,UVar10);
    pcVar13 = *(code **)(lVar19 + 8);
    (*pcVar13)();
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
    if (!bVar4) {
      (*pcVar13)(uVar21,*(undefined8 *)(unaff_x22 + 0x1a0));
      goto LAB_1003c70d4;
    }
    UVar20.unknown = *(undefined **)(unaff_x22 + 0x1b8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1a0);
    UniformTypeIdentifiers::UTType::get_fileURL(UVar9);
    bVar4 = UniformTypeIdentifiers::UTType::conforms(UVar20,UVar11);
    (*pcVar13)(UVar20.unknown,uVar16);
    (*pcVar13)(uVar21,uVar16);
    if (bVar4) goto LAB_1003c70d4;
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar19 = *(long *)(unaff_x22 + 0x1e0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
    FUN_1003c61b0(uVar16,uVar15);
    (**(code **)(lVar19 + 0x30))(uVar16,1,uVar21);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x250);
    if ((int)uVar16 == 1) {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x248);
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1c8),&DAT_100fc1a40,&DAT_100c40660);
      uVar16 = uVar15;
      _swift_getObjectType();
      *(undefined8 *)(unaff_x22 + 200) = uVar16;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar15;
      _swift_unknownObjectRetain(uVar15);
      FUN_10037e6b0(unaff_x22 + 0xb0,uVar24,uVar21);
      _swift_unknownObjectRelease(uVar15);
      _swift_bridgeObjectRelease(uVar21);
      lVar19 = unaff_x22 + 0xb0;
      goto LAB_1003c711c;
    }
    lVar33 = *(long *)(unaff_x22 + 0x228);
    lVar30 = *(long *)(unaff_x22 + 0x210);
    lVar19 = *(long *)(unaff_x22 + 0x1e0);
    UVar17.unknown = *(undefined **)(unaff_x22 + 0x1e8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
    EVar32.unknown = *(undefined **)(unaff_x22 + 0x1b0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar29 = *(long *)(unaff_x22 + 0x188);
    using.unknown = *(undefined **)(unaff_x22 + 400);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
    _swift_bridgeObjectRelease(uVar21);
    (**(code **)(lVar19 + 0x20))(UVar17.unknown,uVar26,uVar25);
    SVar35 = Foundation::URL::get_absoluteString(UVar17);
    UVar9 = UniformTypeIdentifiers::UTType::get_url((UTType)SVar35.str);
    SVar36 = UniformTypeIdentifiers::UTType::get_identifier(UVar9);
    pvVar12 = SVar36.bridgeObject;
    (*pcVar13)(EVar32.unknown,uVar16);
    *(String *)(unaff_x22 + 0x130) = SVar35;
    Encoding::_get_utf8(EVar32);
    FUN_10030cce0();
    uVar31 = 0;
    EVar32.unknown = using.unknown;
    (extension_Foundation)::Swift::StringProtocol::_data(using,false);
    (**(code **)(lVar29 + 8))(using.unknown,uVar24);
    _swift_beginAccess(lVar30 + lVar33,unaff_x22 + 0xd0,0x21,0);
    uVar18 = *(ulong *)(lVar30 + lVar33);
    _swift_bridgeObjectRetain(pvVar12);
    uVar23 = uVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar30 + lVar33) = uVar18;
    uVar22 = uVar18;
    if ((uVar23 & 1) == 0) {
      lVar19 = *(long *)(unaff_x22 + 0x228);
      lVar29 = *(long *)(unaff_x22 + 0x210);
      uVar22 = 0;
      FUN_10037f834(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
      *(ulong *)(lVar29 + lVar19) = uVar22;
    }
    uVar23 = *(ulong *)(uVar22 + 0x10);
    uVar18 = uVar22;
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar23) {
      uVar18 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      FUN_10037f834(uVar18,uVar23 + 1,1,uVar22);
    }
    lVar29 = *(long *)(unaff_x22 + 0x230);
    lVar19 = *(long *)(unaff_x22 + 0x228);
    lVar30 = *(long *)(unaff_x22 + 0x210);
    *(ulong *)(uVar18 + 0x10) = uVar23 + 1;
    *(String *)(uVar18 + uVar23 * 0x10 + 0x20) = SVar36;
    *(ulong *)(lVar30 + lVar19) = uVar18;
    _swift_endAccess(unaff_x22 + 0xd0);
    _swift_beginAccess(lVar30 + lVar29,unaff_x22 + 0xe8,0x21,0);
    lVar19 = *(long *)(unaff_x22 + 0x230);
    lVar29 = *(long *)(unaff_x22 + 0x210);
    if (uVar31 >> 0x3c < 0xf) {
      FUN_1001037b4(EVar32.unknown,uVar31);
      uVar21 = *(undefined8 *)(lVar29 + lVar19);
      _swift_isUniquelyReferenced_nonNull_native(uVar21);
      uVar16 = *(undefined8 *)(lVar29 + lVar19);
      *(undefined8 *)(lVar29 + lVar19) = 0x8000000000000000;
      FUN_100380ebc(EVar32.unknown,uVar31,SVar36.str,pvVar12,uVar21);
      _swift_bridgeObjectRelease(pvVar12);
      *(undefined8 *)(lVar29 + lVar19) = uVar16;
    }
    else {
      uVar21 = *(undefined8 *)(lVar29 + lVar19);
      _swift_bridgeObjectRetain(uVar21);
      FUN_100071370();
      _swift_bridgeObjectRelease(uVar21);
      if (((ulong)SVar36.bridgeObject & 1) == 0) {
        _swift_bridgeObjectRelease(pvVar12);
      }
      else {
        lVar19 = *(long *)(unaff_x22 + 0x230);
        lVar29 = *(long *)(unaff_x22 + 0x210);
        uVar23 = *(ulong *)(lVar29 + lVar19);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar19 = *(long *)(lVar29 + lVar19);
        *(long *)(unaff_x22 + 0x150) = lVar19;
        if ((uVar23 & 1) == 0) {
          FUN_10031ca10();
          lVar19 = *(long *)(unaff_x22 + 0x150);
        }
        lVar33 = *(long *)(unaff_x22 + 0x230);
        lVar30 = *(long *)(unaff_x22 + 0x210);
        lVar29 = (long)SVar36.str * 0x10;
        _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar19 + 0x30) + lVar29 + 8));
        puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar29);
        uVar21 = *puVar1;
        uVar16 = puVar1[1];
        FUN_10031e9f4(SVar36.str,lVar19);
        *(long *)(lVar30 + lVar33) = lVar19;
        _swift_bridgeObjectRelease(pvVar12);
        FUN_10003bf2c(uVar21,uVar16);
      }
    }
    lVar19 = *(long *)(unaff_x22 + 0x1e0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1d8);
    _swift_endAccess(unaff_x22 + 0xe8);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    FUN_10003bf18(EVar32.unknown,uVar31);
    _swift_unknownObjectRelease(uVar15);
    (**(code **)(lVar19 + 8))(uVar21,uVar16);
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x238);
LAB_1003c7124:
  uVar23 = *(long *)(unaff_x22 + 0x240) + 1;
  if (uVar23 == *(ulong *)(unaff_x22 + 0x220)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x218));
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 400);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x0001003c71c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
  *(ulong *)(unaff_x22 + 0x240) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar21;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x218) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1003c78ac);
    (*pcVar13)();
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar29 = *(long *)(unaff_x22 + 0x200);
  self = *(ID *)(unaff_x22 + 0x178);
  lVar19 = *(long *)(unaff_x22 + 0x218) + uVar23 * 0x10;
  *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(lVar19 + 0x20);
  uVar16 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x250) = uVar16;
  _swift_bridgeObjectRetain(uVar16);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  *(NSString **)(unaff_x22 + 600) = pNVar7;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x140;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1003c6d88;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar21;
  lVar19 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar19);
  puVar8 = &DAT_100fc2f10;
  FUN_1000037f0(&DAT_100fc2f10,&DAT_100c44f68);
  *(undefined **)(unaff_x22 + 0x260) = puVar8;
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar29 + 0x20))(lVar19,uVar15,uVar21);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1003c60f8;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ecf360;
  objc_stub::loadItemForTypeIdentifier_options_completionHandler_(self,pNVar7,0);
  (**(code **)(lVar29 + 8))(lVar19,uVar21);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1003c7980 | FUN_1003c7980 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c7980(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  NSString *pNVar9;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar10;
  undefined *puVar11;
  ID self;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String function;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x250);
  _swift_willThrow();
  _swift_bridgeObjectRelease(uVar13);
  _swift_errorRelease(uVar12);
  uVar1 = *(long *)(unaff_x22 + 0x240) + 1;
  if (uVar1 == *(ulong *)(unaff_x22 + 0x220)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x218));
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 400);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003c7a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
  *(ulong *)(unaff_x22 + 0x240) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x238) = 0;
  if (uVar1 < *(ulong *)(*(long *)(unaff_x22 + 0x218) + 0x10)) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar7 = *(long *)(unaff_x22 + 0x200);
    self = *(ID *)(unaff_x22 + 0x178);
    lVar10 = *(long *)(unaff_x22 + 0x218) + uVar1 * 0x10;
    *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(lVar10 + 0x20);
    uVar14 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x250) = uVar14;
    _swift_bridgeObjectRetain(uVar14);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    *(NSString **)(unaff_x22 + 600) = pNVar9;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x140;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1003c6d88;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
    lVar10 = unaff_x22 + 0x70;
    FUN_10000cbb0(lVar10);
    puVar11 = &DAT_100fc2f10;
    FUN_1000037f0(&DAT_100fc2f10,&DAT_100c44f68);
    *(undefined **)(unaff_x22 + 0x260) = puVar11;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    function.bridgeObject = (void *)0x8000000100da1040;
    function.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,function);
    (**(code **)(lVar7 + 0x20))(lVar10,uVar13,uVar12);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1003c60f8;
    *(undefined **)(unaff_x22 + 0x68) = &DAT_100ecf360;
    objc_stub::loadItemForTypeIdentifier_options_completionHandler_(self,pNVar9,0);
    (**(code **)(lVar7 + 8))(lVar10,uVar12);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1003c7bf0);
  (*pcVar8)();
}



/* Address: 0x1003c7bf0 | FUN_1003c7bf0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003c7bf0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc2ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSItemProvider;
  _swift_getObjCClassMetadata();
  DAT_100fc2ef8 = puVar1;
  return;
}



/* Address: 0x1003c7c34 | FUN_1003c7c34 */

void FUN_1003c7c34(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x1003c7c44 | FUN_1003c7c44 */

void FUN_1003c7c44(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x1003c7c4c | FUN_1003c7c4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003c7c4c(double param_1,double param_2)

{
  code *pcVar1;
  ID self;
  undefined *self_00;
  ID IVar2;
  ID self_01;
  ID unaff_x20;
  long lVar3;
  undefined8 uVar4;
  double extraout_d0;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = 0.0;
  self = objc_stub::FUN_100bfe5e0(unaff_x20,0,0,param_1,param_2,0,0);
  if (self == 0) {
    IVar2 = 0;
  }
  else {
    objc_stub::size(self);
    dVar7 = param_1;
    if (extraout_d0 <= param_1) {
      dVar7 = extraout_d0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e5c);
      (*pcVar1)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e60);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e64);
      (*pcVar1)();
    }
    objc_stub::size(self);
    dVar5 = param_2;
    if (dVar6 <= param_2) {
      dVar5 = dVar6;
    }
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e68);
      (*pcVar1)();
    }
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e6c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e70);
      (*pcVar1)();
    }
    lVar3 = (long)dVar7;
    if (lVar3 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c7e74);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)PTR__NSDeviceRGBColorSpace_100ea9030;
    self_00 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    IVar2 = objc_stub::FUN_100c03b40((ID)self_00,0,lVar3,(long)dVar5,8,4,1,0,uVar4,lVar3 << 2,0x20);
    if (IVar2 == 0) {
      IVar2 = 0;
    }
    else {
      self_01 = objc_stub::FUN_100c03120((ID)&_OBJC_CLASS___NSGraphicsContext,IVar2);
      if (self_01 == 0) {
        IVar2 = 0;
      }
      else {
        objc_stub::FUN_100c09a00((ID)&_OBJC_CLASS___NSGraphicsContext);
        objc_stub::FUN_100c0b2a0((ID)&_OBJC_CLASS___NSGraphicsContext,self_01);
        objc_stub::drawInRect_(self,0,0,param_1,param_2);
        objc_stub::FUN_100c028e0(self_01);
        objc_stub::FUN_100c09580((ID)&_OBJC_CLASS___NSGraphicsContext);
      }
    }
  }
  return IVar2;
}



/* Address: 0x1003c7e74 | FUN_1003c7e74 */

void FUN_1003c7e74(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_100381388();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fc1ba0;
      FUN_1000037f0(&DAT_100fc1ba0,&DAT_100c40730);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1003c8054(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_10020123c(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x1003c7f84 | FUN_1003c7f84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003c7f84(void)

{
  ID IVar1;
  double dVar2;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  double dVar3;
  
  objc_stub::saturationComponent(unaff_x20);
  objc_stub::brightnessComponent(unaff_x20);
  objc_stub::brightnessComponent(unaff_x20);
  dVar2 = 0.96;
  if (extraout_d0_01 <= 0.96) {
    dVar2 = extraout_d0_01;
  }
  if (dVar2 <= 0.75) {
    dVar2 = 0.75;
  }
  dVar3 = extraout_d0_01;
  if (0.4 < extraout_d0_00) {
    dVar3 = dVar2;
  }
  dVar2 = 0.85;
  if (0.85 < extraout_d0) {
    dVar2 = extraout_d0;
  }
  objc_stub::hueComponent(unaff_x20);
  objc_stub::alphaComponent(unaff_x20);
  IVar1 = objc_stub::FUN_100bff720
                    ((ID)&_OBJC_CLASS___NSColor,extraout_d0_02,dVar2,dVar3,extraout_d0_03);
  return IVar1;
}


