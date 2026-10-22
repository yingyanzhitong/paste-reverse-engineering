/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10009d668 | FUN_10009d668 */

void FUN_10009d668(undefined8 param_1)

{
  if (DAT_100faaf80 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca1f30);
  return;
}



/* Address: 0x10009d6a0 | FUN_10009d6a0 */

void FUN_10009d6a0(long param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100007700();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10009d718 | thunk_FUN_100041a74 */

void thunk_FUN_100041a74(void)

{
  FUN_100041a74();
  return;
}



/* Address: 0x10009d71c | thunk_FUN_100041adc */

void thunk_FUN_100041adc(void)

{
  FUN_100041adc();
  return;
}



/* Address: 0x10009d720 | FUN_10009d720 */

void FUN_10009d720(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c289b8;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fa7840,&DAT_100c27c70);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_101057020 = puVar1;
  return;
}



/* Address: 0x10009d77c | FUN_10009d77c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009d77c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  String SVar7;
  String SVar8;
  undefined8 local_48;
  Selector SVar6;
  
  FUN_10021b6e8();
  puVar4 = param_1;
  if (DAT_100fab010 != -1) {
    puVar4 = &DAT_100fab010;
    _swift_once(&DAT_100fab010,FUN_10009d720);
  }
  FUN_1000da768(&local_48);
  FUN_10004bcb8();
  _swift_release(local_48);
  uVar5 = 0x6574736150;
  uVar3 = uVar5;
  FUN_10021b998(0x6574736150,&DAT_e500000000000000,0,puVar4,param_1);
  uVar2 = 0;
  FUN_10021b6e8();
  uVar1 = 0x65736f6c43;
  FUN_10021bce0(0x65736f6c43,&DAT_e500000000000000,0,0,0x77,0xe100000000000000,0x100000,0,0,
                "performClose:",uVar2);
  uVar2 = 0x656c6946;
  FUN_10021b998(0x656c6946,&DAT_e400000000000000,0,uVar1,uVar3);
  uVar1 = 0;
  FUN_10021b6e8();
  SVar7.bridgeObject = &DAT_e500000000000000;
  SVar7.str = (char *)0x3a6f646e75;
  SVar6 = ObjectiveC::Selector::init(SVar7);
  uVar3 = 0x6f646e55;
  FUN_10021bce0(0x6f646e55,&DAT_e400000000000000,0,0,0x7a,0xe100000000000000,0x100000,0,0,
                SVar6.events.unknown.unknown,uVar1);
  SVar8.bridgeObject = &DAT_e500000000000000;
  SVar8.str = (char *)0x3a6f646572;
  SVar6 = ObjectiveC::Selector::init(SVar8);
  uVar1 = 0x6f646552;
  FUN_10021bce0(0x6f646552,&DAT_e400000000000000,0,0,0x7a,0xe100000000000000,0x120000,0,0,
                SVar6.events.unknown.unknown,uVar3);
  FUN_10021b7b4();
  uVar3 = 0x747543;
  FUN_10021bce0(0x747543,0xe300000000000000,0,0,0x78,0xe100000000000000,0x100000,0,0,"cut:",uVar1);
  uVar1 = 0x79706f43;
  FUN_10021bce0(0x79706f43,&DAT_e400000000000000,0,0,99,0xe100000000000000,0x100000,0,0,"copy:",
                uVar3);
  FUN_10021bce0(0x6574736150,&DAT_e500000000000000,0,0,0x76,0xe100000000000000,0x100000,0,0,"paste:"
                ,uVar1);
  uVar3 = 0x41207463656c6553;
  FUN_10021bce0(0x41207463656c6553,0xea00000000006c6c,0,0,0x61,0xe100000000000000,0x100000,0,0,
                "selectAll:",uVar5);
  uVar1 = 0x74696445;
  FUN_10021b998(0x74696445,&DAT_e400000000000000,0,uVar3,uVar2);
  uVar3 = 0;
  FUN_10021b6e8();
  uVar2 = 0x657a696d696e694d;
  FUN_10021bce0(0x657a696d696e694d,&DAT_e800000000000000,0,0,0x6d,0xe100000000000000,0x100000,0,0,
                "miniaturize:",uVar3);
  uVar3 = 0x776f646e6957;
  FUN_10021b998(0x776f646e6957,&DAT_e600000000000000,0,uVar2,uVar1);
  return uVar3;
}



/* Address: 0x10009db5c | thunk_FUN_100025040 */

void thunk_FUN_100025040(void)

{
  FUN_100025040();
  return;
}



/* Address: 0x10009db60 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  FUN_10019fcf4(FUN_1001a1b7c,&PTR_PTR_100ebdaf8,0xb,FUN_10019fc10);
  return;
}



/* Address: 0x10009db64 | FUN_10009db64 */

void FUN_10009db64(undefined8 *param_1,undefined8 param_2)

{
  FUN_100ae6870();
  *param_1 = param_2;
  return;
}



/* Address: 0x10009db88 | FUN_10009db88 */

String FUN_10009db88(void)

{
  long lVar1;
  LocalizedStringResource LVar2;
  URL UVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  String SVar13;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)LVar2.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa8c68;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = (long *)(lVar9 - extraout_x8_01);
  FUN_10031ebc8(plVar11);
  lVar5 = 0;
  FUN_100317b10();
  plVar6 = plVar11;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(plVar11,1,lVar5);
  if ((int)plVar6 == 1) {
    FUN_100005808(plVar11,&DAT_100fa8c68,&DAT_100c25ae0);
  }
  else {
    plVar6 = plVar11;
    _swift_getEnumCaseMultiPayload(plVar11,lVar5);
    if ((int)plVar6 == 4) {
      lVar10 = *plVar11;
      lVar5 = plVar11[2];
      lVar1 = plVar11[3];
      if (*(long *)(lVar10 + 0x10) != 0) {
        lVar7 = *(long *)(lVar10 + 0x28);
        _swift_bridgeObjectRetain(lVar7);
        lVar8 = lVar7;
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(lVar7);
        lVar7 = lVar9;
        FUN_10009f034(lVar9);
        (**(code **)(lVar12 + 8))(lVar9,UVar3.unknown);
        if (lVar8 != 0) {
          thunk_FUN_1001e6ba8(LVar2.unknown,lVar7,lVar8);
          _swift_bridgeObjectRelease(lVar8);
          SVar13 = (extension_Foundation)::Swift::String::init(LVar2);
          _swift_bridgeObjectRelease(lVar10);
          FUN_10003bf18(lVar5,lVar1);
          return SVar13;
        }
      }
      _swift_bridgeObjectRelease(lVar10);
      FUN_10003bf18(lVar5,lVar1);
    }
    else {
      FUN_10009eff8(plVar11);
    }
  }
  FUN_1001c2408(LVar2.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(LVar2);
  return SVar13;
}



/* Address: 0x10009dda0 | FUN_10009dda0 */

void FUN_10009dda0(code *param_1,undefined8 param_2,undefined8 param_3)

{
  (*param_1)(param_3);
  return;
}



/* Address: 0x10009ddc8 | FUN_10009ddc8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10009ddc8(void)

{
  LocalizedStringResource LVar1;
  ID IVar2;
  long extraout_x8;
  long extraout_x12;
  String SVar3;
  String SVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar2 = NSWorkspace::menuBarOwningApplication(IVar2);
  if ((IVar2 == 0) || (IVar2 = NSWorkspace::localizedName(IVar2), IVar2 == 0)) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1001c4850(LVar1.unknown + -extraout_x12,0);
  SVar4 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)(LVar1.unknown + -extraout_x12));
  SVar5 = Swift::String::lowercased(SVar4);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if (SVar3.bridgeObject != (void *)0x0) {
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar5 = SVar3;
  }
  thunk_FUN_1001e6bb8(LVar1.unknown,SVar5.str,SVar5.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar3 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar3;
}



/* Address: 0x10009df20 | FUN_10009df20 */

void FUN_10009df20(code *param_1)

{
  (*param_1)();
  return;
}



/* Address: 0x10009df40 | FUN_10009df40 */

void FUN_10009df40(code *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (*param_1)();
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_1002160fc(&local_40);
  FUN_100005808(&local_40,&DAT_100fa8810,&DAT_100c23ce0);
  return;
}



/* Address: 0x10009df90 | _TtCC5Paste18ItemCollectionView11ContextMenu::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste18ItemCollectionView11ContextMenu::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  String SVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar4 = (undefined8 *)(param_1 + _isPasteAsPlainTextEnabled);
  _swift_getKeyPath(&DAT_100c28a80);
  FUN_1002cb7e0(&local_90);
  puVar4[1] = uStack_88;
  *puVar4 = local_90;
  puVar4[3] = uStack_78;
  puVar4[2] = uStack_80;
  puVar4[5] = uStack_68;
  puVar4[4] = local_70;
  puVar4[6] = local_60;
  puVar1 = (undefined8 *)(param_1 + _plainTextModifierFlags);
  puVar3 = &DAT_100c28aa8;
  _swift_getKeyPath(&DAT_100c28aa8);
  puVar4 = &DAT_100fa64a0;
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  FUN_1002cbe78(&local_58,puVar3,puVar4);
  puVar1[1] = uStack_50;
  *puVar1 = local_58;
  puVar1[3] = uStack_40;
  puVar1[2] = local_48;
  puVar1[5] = uStack_30;
  puVar1[4] = local_38;
  puVar1[6] = local_28;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8f3a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e094);
  (*pcVar2)();
}



/* Address: 0x10009e094 | FUN_10009e094 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10009e094(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  LocalizedStringResource LVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  String SVar9;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  FUN_1001c3f08(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar9 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  plVar5 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020d8f8();
  lVar8 = *plVar5;
  lVar1 = plVar5[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar6 = lVar8;
  FUN_1000f653c(lVar8,lVar1);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar8 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e24c);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar8,lVar1);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009e158);
      (*pcVar2)();
    }
  }
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    lVar8 = 0;
  }
  puVar7 = &DAT_100eb3b40;
  _swift_allocObject(&DAT_100eb3b40,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_1;
  FUN_100236550(0);
  _objc_allocWithZone();
  pcVar2 = FUN_10009f4f0;
  FUN_1002364ac(FUN_10009f4f0,puVar7);
  FUN_10021b998(SVar9.str,SVar9.bridgeObject,lVar8,pcVar2);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  return 0;
}



/* Address: 0x10009e24c | FUN_10009e24c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009e24c(undefined8 param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  undefined8 uVar4;
  NSArray *pNVar5;
  _ArrayBuffer _Var6;
  ID IVar7;
  undefined *puVar8;
  ulong self;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  long lVar13;
  ulong uVar14;
  String SVar15;
  
  uVar4 = param_1;
  FUN_1003202f0();
  pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _Var6.unknown =
       (undefined *)
       NSSharingService::sharingServicesForItems_(&_OBJC_CLASS___NSSharingService,pNVar5);
  FUN_10000ec2c(0,&DAT_100fa8338,&PTR__OBJC_CLASS___NSSharingService_100f8d718);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e4cc);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var6.unknown + uVar14 * 8 + 0x20);
      }
      else {
        self = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var6);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10009e4c8);
        (*pcVar3)();
      }
      pMVar9 = Swift::MainActor::typeMetadataAccessor();
      pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
      puVar10 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.ContextMenu.swift",0x2a,1,0xb1,UVar11.unknown,puVar10);
      }
      objc_stub::menuItemTitle(self);
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar7 = objc_stub::image(self);
      puVar8 = &DAT_100eb3b68;
      _swift_allocObject(&DAT_100eb3b68,0x20,7);
      *(ulong *)(puVar8 + 0x10) = self;
      *(undefined8 *)(puVar8 + 0x18) = uVar4;
      _swift_bridgeObjectRetain(uVar4);
      FUN_10021bafc(SVar15.str,SVar15.bridgeObject,IVar7,0,0,0xe000000000000000,0,0,FUN_10009f524,
                    puVar8,param_1);
      _swift_release(pMVar9);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      _swift_release(puVar8);
      uVar14 = uVar14 + 1;
    } while (lVar1 != lVar13);
  }
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(_Var6.unknown);
  return;
}



/* Address: 0x10009e510 | FUN_10009e510 */

undefined * FUN_10009e510(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1003b8c94();
  puVar1 = &DAT_100fa8328;
  FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
  puVar2 = &DAT_100fa8330;
  FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b85f0(puVar1,puVar2);
  _swift_release(param_1);
  return puVar1;
}



/* Address: 0x10009e5a4 | FUN_10009e5a4 */

void FUN_10009e5a4(long param_1)

{
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1003b9a78();
  return;
}



/* Address: 0x10009e5fc | FUN_10009e5fc */

void FUN_10009e5fc(undefined8 param_1,undefined8 param_2)

{
  FUN_10009e614(param_1,param_2,FUN_1000538b4);
  return;
}



/* Address: 0x10009e608 | FUN_10009e608 */

void FUN_10009e608(undefined8 param_1,undefined8 param_2)

{
  FUN_10009e614(param_1,param_2,FUN_1003ba1e4);
  return;
}



/* Address: 0x10009e614 | FUN_10009e614 */

void FUN_10009e614(long param_1,undefined8 param_2,code *param_3)

{
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*param_3)();
  return;
}



/* Address: 0x10009e654 | _TtCC5Paste18ItemCollectionView11ContextMenu::initWithTitle: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste18ItemCollectionView11ContextMenu::initWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Paste.ContextMenu",0x11,"init(title:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009e680);
  (*pcVar1)();
}



/* Address: 0x10009e680 | FUN_10009e680 */

void FUN_10009e680(void)

{
  FUN_10009e888();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10009e6b0 | _TtCC5Paste18ItemCollectionView11ContextMenu::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste18ItemCollectionView11ContextMenu::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _isPasteAsPlainTextEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(param_1 + _plainTextModifierFlags);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10009e758 | FUN_10009e758 */

void FUN_10009e758(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c28a10;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fab090 = puVar1;
  return;
}



/* Address: 0x10009e7b4 | FUN_10009e7b4 */

void FUN_10009e7b4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c28a48;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fab080 = puVar1;
  return;
}



/* Address: 0x10009e810 | FUN_10009e810 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ulong FUN_10009e810(ID param_1,uint param_2)

{
  ID IVar1;
  ulong uVar2;
  
  FUN_100328e60();
  IVar1 = param_1;
  FUN_1003293c4();
  if ((param_2 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  else {
    IVar1 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  uVar2 = (ulong)((uint)param_1 & 1);
  thunk_FUN_1003ed158(0x4028000000000000,uVar2,IVar1);
  return uVar2;
}



/* Address: 0x10009e888 | FUN_10009e888 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10009e888(void)

{
  return ZEXT816(0x100f927d0);
}



/* Address: 0x10009e8a8 | FUN_10009e8a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8
FUN_10009e8a8(undefined8 param_1,code *param_2,char *param_3,undefined *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
             undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  NSObject *pNVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  LocalizedStringResource LVar8;
  undefined *puVar9;
  NSObject *pNVar10;
  NSObject *pNVar11;
  ID IVar12;
  ID IVar13;
  undefined8 uVar14;
  ContiguousArray CVar15;
  void *pvVar17;
  uint uVar18;
  long extraout_x8;
  long lVar19;
  NSObject *pNVar20;
  NSObject *pNVar21;
  _CocoaArrayWrapper _Var22;
  __int64 _Var23;
  NSObject *pNVar24;
  __int64 _Var25;
  __int64 _Var26;
  undefined *puVar27;
  _ArrayBuffer _Var28;
  ContiguousArray oldCount;
  ulong uVar29;
  String SVar30;
  String SVar31;
  undefined8 auStack_120 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  LocalizedStringResource local_f0;
  _ArrayBuffer local_e8;
  _CocoaArrayWrapper local_e0;
  NSObject *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  char *local_98;
  NSObject *local_90;
  ulong local_88;
  undefined *local_80;
  String local_78;
  void *pvVar16;
  
  local_100 = param_7;
  uStack_f8 = param_8;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_80 = param_4;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*param_2)();
  local_f0.unknown = (undefined *)((long)&local_100 + lVar2);
  local_e8.unknown = LVar8.unknown;
  if ((ulong)LVar8.unknown >> 0x3e == 0) {
    pNVar20 = *(NSObject **)(((ulong)LVar8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var22.unknown = LVar8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < LVar8.unknown) {
      _Var22.unknown = LVar8.unknown;
    }
    pNVar20 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
  }
  if (pNVar20 != (NSObject *)0x0) {
    local_b8 = (ulong)local_e8.unknown & 0xc000000000000001;
    local_c0 = (ulong)local_e8.unknown & 0xffffffffffffff8;
    local_c8 = local_e8.unknown + 0x20;
    puVar27 = (undefined *)((ulong)local_80 & 0xffffffffffffff8);
    local_e0.unknown = puVar27;
    if ((undefined *)0x7fffffffffffffff < local_80) {
      local_e0.unknown = local_80;
    }
    uVar29 = (ulong)local_80 & 0xc000000000000001;
    local_88 = (ulong)local_80 >> 0x3e;
    pNVar24 = (NSObject *)0x0;
    local_d8 = pNVar20;
    local_d0 = param_1;
    do {
      if (local_b8 == 0) {
        if (*(NSObject **)(local_c0 + 0x10) <= pNVar24) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009ecc8);
          (*pcVar6)();
        }
        pNVar20 = *(NSObject **)(local_c8 + (long)pNVar24 * 8);
        _Var28.unknown = local_80;
      }
      else {
        pNVar20 = pNVar24;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar24,local_e8);
        _Var28.unknown = local_80;
      }
      local_80 = _Var28.unknown;
      if (SCARRY8((long)pNVar24,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009ecc4);
        (*pcVar6)();
      }
      local_90 = pNVar24 + 1;
      local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (local_88 == 0) {
        pNVar24 = *(NSObject **)(puVar27 + 0x10);
        _Var22.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        pNVar24 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(local_e0);
        _Var22.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      PTR___swiftEmptyArrayStorage_100eae0d8 = _Var22.unknown;
      if (pNVar24 != (NSObject *)0x0) {
        pNVar21 = (NSObject *)0x0;
        do {
          if (uVar29 == 0) {
            if (*(NSObject **)(puVar27 + 0x10) <= pNVar21) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10009ecc0);
              (*pcVar6)();
            }
            pNVar10 = *(NSObject **)(_Var28.unknown + (long)pNVar21 * 8 + 0x20);
          }
          else {
            pNVar10 = pNVar21;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar21,_Var28);
          }
          pNVar1 = pNVar21 + 1;
          if (SCARRY8((long)pNVar21,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009ecbc);
            (*pcVar6)();
          }
          pNVar11 = pNVar10;
          FUN_10031bc94();
          if (pNVar11 != (NSObject *)0x0) {
            FUN_10032b0c8(0);
            CVar15.unknown = pNVar20;
            bVar7 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar11,pNVar20);
            _Var28.unknown = local_80;
            if (bVar7) {
              Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                        ((ContiguousArray)0x0);
              oldCount.unknown = *(undefined **)((long)local_78.str + 0x10);
              Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                        ((__int64)oldCount.unknown,CVar15);
              Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity
                        (oldCount.unknown,pNVar10);
              Swift::ContiguousArray::__endMutation(oldCount);
              _Var28.unknown = local_80;
            }
          }
          pNVar21 = pNVar21 + 1;
        } while (pNVar1 != pNVar24);
        _Var22.unknown = local_78.str;
      }
      uVar18 = (uint)((ulong)_Var22.unknown >> 0x3e) & 1;
      if ((long)_Var22.unknown < 0) {
        uVar18 = 1;
      }
      if (uVar18 == 1) {
        _Var25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
        if (local_88 != 0) goto LAB_10009ec20;
LAB_10009ebfc:
        _Var26 = *(__int64 *)(puVar27 + 0x10);
        if (uVar18 == 0) goto LAB_10009ec04;
LAB_10009ec30:
        _Var23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
      }
      else {
        _Var25 = *(__int64 *)(_Var22.unknown + 0x10);
        if (local_88 == 0) goto LAB_10009ebfc;
LAB_10009ec20:
        _Var26 = Swift::_CocoaArrayWrapper::get_endIndex(local_e0);
        if (uVar18 != 0) goto LAB_10009ec30;
LAB_10009ec04:
        _Var23 = *(__int64 *)(_Var22.unknown + 0x10);
      }
      _swift_release(_Var22.unknown);
      local_a0 = (ulong)(_Var23 != 0 && _Var25 != _Var26);
      objc_stub::name((ID)pNVar20);
      SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar16 = SVar30.bridgeObject;
      IVar12 = 0;
      pvVar17 = pvVar16;
      FUN_100328e60();
      uVar18 = (uint)pvVar17;
      IVar13 = IVar12;
      FUN_1003293c4();
      local_98 = SVar30.str;
      if ((uVar18 & 0xff) == 1) {
        thunk_FUN_100324cb0();
        FUN_1003de9a0();
      }
      else {
        IVar13 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
      }
      param_3 = (char *)(ulong)((uint)IVar12 & 1);
      thunk_FUN_1003ed158(0x4028000000000000,param_3,IVar13);
      lVar19 = -(local_a0 & 1);
      if (_Var25 == _Var26) {
        lVar19 = 1;
      }
      puVar9 = &DAT_100eb3ac8;
      _swift_allocObject(&DAT_100eb3ac8,0x30,7);
      puVar4 = local_80;
      *(undefined8 *)(puVar9 + 0x10) = local_b0;
      *(undefined8 *)(puVar9 + 0x18) = uStack_a8;
      *(undefined **)(puVar9 + 0x20) = local_80;
      *(NSObject **)(puVar9 + 0x28) = pNVar20;
      _swift_retain(uStack_a8);
      _swift_bridgeObjectRetain(puVar4);
      param_1 = local_d0;
      *(undefined **)((long)auStack_120 + lVar2 + 8) = puVar9;
      *(undefined8 *)((long)auStack_120 + lVar2 + 0x10) = param_1;
      *(code **)((long)auStack_120 + lVar2) = FUN_10009f240;
      param_4 = (undefined *)0x0;
      FUN_10021bafc(local_98,pvVar16,param_3,0,0,0xe000000000000000,0,lVar19);
      _swift_bridgeObjectRelease(pvVar16);
      _swift_release(puVar9);
      pNVar24 = local_90;
    } while (local_90 != local_d8);
  }
  _swift_bridgeObjectRelease(local_e8.unknown);
  uVar14 = param_1;
  FUN_10021b7b4();
  LVar8.unknown = local_f0.unknown;
  FUN_1001c0f08(local_f0.unknown);
  local_78 = (extension_Foundation)::Swift::String::init(LVar8);
  pvVar17 = local_78.bridgeObject;
  _swift_bridgeObjectRetain(pvVar17);
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x2e2e2e;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar30,SVar31);
  _swift_bridgeObjectRelease(pvVar17);
  pcVar5 = local_78.str;
  pvVar17 = local_78.bridgeObject;
  puVar27 = &DAT_100eb3af0;
  _swift_allocObject(&DAT_100eb3af0,0x28,7);
  puVar9 = local_80;
  uVar3 = uStack_f8;
  *(undefined8 *)(puVar27 + 0x10) = local_100;
  *(undefined8 *)(puVar27 + 0x18) = uStack_f8;
  *(undefined **)(puVar27 + 0x20) = local_80;
  _swift_bridgeObjectRetain(local_80);
  _swift_retain(uVar3);
  *(undefined **)((long)auStack_120 + lVar2 + 8) = puVar27;
  *(undefined8 *)((long)auStack_120 + lVar2 + 0x10) = uVar14;
  *(code **)((long)auStack_120 + lVar2) = FUN_10009f250;
  FUN_10021bafc(pcVar5,pvVar17,0,0,0,0xe000000000000000,0,0);
  _swift_bridgeObjectRelease(pvVar17);
  _swift_release(puVar27);
  if ((param_9 & 1) != 0) {
    FUN_1001c4208(LVar8.unknown,0);
    SVar30 = (extension_Foundation)::Swift::String::init(LVar8);
    puVar27 = &DAT_100eb3b18;
    _swift_allocObject(&DAT_100eb3b18,0x28,7);
    *(undefined8 *)(puVar27 + 0x10) = param_11;
    *(undefined8 *)(puVar27 + 0x18) = param_12;
    *(undefined **)(puVar27 + 0x20) = puVar9;
    _swift_bridgeObjectRetain(puVar9);
    _swift_retain(param_12);
    *(undefined **)((long)auStack_120 + lVar2 + 8) = puVar27;
    *(undefined8 *)((long)auStack_120 + lVar2 + 0x10) = param_1;
    *(code **)((long)auStack_120 + lVar2) = thunk_FUN_10009f250;
    FUN_10021bafc(SVar30.str,SVar30.bridgeObject,0,0,0,0xe000000000000000,0,0);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    _swift_release(puVar27);
  }
  return 0;
}



/* Address: 0x10009ee9c | FUN_10009ee9c */

void FUN_10009ee9c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_68 [3];
  undefined *local_50;
  undefined *local_48;
  
  puVar1 = &DAT_100fa8310;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar2 = &DAT_100fa9830;
  local_50 = puVar1;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  local_68[0] = param_3;
  local_48 = puVar2;
  _swift_bridgeObjectRetain(param_3);
  (*param_1)(local_68,param_4);
  FUN_100004594(local_68);
  return;
}



/* Address: 0x10009ef40 | FUN_10009ef40 */

void FUN_10009ef40(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_68 [3];
  undefined *local_50;
  undefined *local_48;
  
  puVar1 = &DAT_100fa8310;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar2 = &DAT_100fa9830;
  local_50 = puVar1;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  local_68[0] = param_3;
  local_48 = puVar2;
  _swift_bridgeObjectRetain(param_3);
  (*param_1)(local_68);
  FUN_100004594(local_68);
  return;
}



/* Address: 0x10009efd8 | FUN_10009efd8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10009efd8(void)

{
  return ZEXT816(0x100f928e8);
}



/* Address: 0x10009eff8 | FUN_10009eff8 */

undefined8 FUN_10009eff8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100317b10();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10009f034 | FUN_10009f034 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10009f034(void)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  ID IVar4;
  NSString *pNVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  String SVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar2.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  IVar4 = NSWorkspace::URLsForApplicationsToOpenURL_((ID)UVar2.unknown,pNVar3);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar4 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar4);
    SVar8 = (String)ZEXT816(0);
  }
  else {
    (**(code **)(lVar7 + 0x10))
              (puVar6,IVar4 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),UVar1.unknown);
    _swift_bridgeObjectRelease(IVar4);
    (**(code **)(lVar7 + 0x20))((long)puVar6 - extraout_x12,puVar6,UVar1.unknown);
    UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar8 = Foundation::URL::get_path(UVar2);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    NSFileManager::displayNameAtPath_((ID)UVar2.unknown,pNVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(lVar7 + 8))((long)puVar6 - extraout_x12,UVar1.unknown);
  }
  return SVar8;
}



/* Address: 0x10009f20c | FUN_10009f20c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009f20c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10009f240 | FUN_10009f240 */

void FUN_10009f240(void)

{
  long unaff_x20;
  
  FUN_10009ee9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10009f24c | thunk_FUN_10009f26c */

void thunk_FUN_10009f26c(void)

{
  FUN_10009f26c();
  return;
}



/* Address: 0x10009f250 | FUN_10009f250 */

void FUN_10009f250(void)

{
  long unaff_x20;
  
  FUN_10009ef40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10009f26c | FUN_10009f26c */

void FUN_10009f26c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10009f298 | FUN_10009f298 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10009f298(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_58 [3];
  ulong local_40;
  undefined8 uStack_38;
  
  if (DAT_100fab078 != -1) {
    _swift_once(&DAT_100fab078,FUN_10009e7b4);
  }
  FUN_1000da768(local_58);
  puVar3 = local_58;
  FUN_100004640(puVar3,local_40);
  uVar4 = local_40;
  FUN_1001a15c4(local_40,uStack_38,puVar3);
  uVar5 = 0;
  FUN_100004594();
  if ((uVar4 & 1) == 0) {
    plVar7 = (long *)0x0;
    FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    FUN_10020d3cc();
    param_2 = *plVar7;
    lVar1 = plVar7[1];
    _swift_bridgeObjectRetain_n(lVar1,2);
    lVar6 = param_2;
    FUN_1000f653c(param_2,lVar1);
    if (lVar6 == 0) {
      _swift_bridgeObjectRelease(lVar1);
      param_2 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f3d4);
        (*pcVar2)();
      }
    }
    else {
      FUN_1000f653c(param_2,lVar1);
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f3a8);
        (*pcVar2)();
      }
    }
  }
  else if ((param_1 & 1) != 0) {
    if (DAT_100fab088 != -1) {
      uVar5 = 0;
      _swift_once(&DAT_100fab088,FUN_10009e758);
    }
    FUN_1000da768(local_58);
    FUN_100ae5e74();
    _swift_release(local_58[0]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)0x0;
      FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
      FUN_10020cf18();
      param_2 = *plVar7;
      lVar1 = plVar7[1];
      _swift_bridgeObjectRetain_n(lVar1,2);
      lVar6 = param_2;
      FUN_1000f653c(param_2,lVar1);
      if (lVar6 == 0) {
        _swift_bridgeObjectRelease(lVar1);
        param_2 = -0x2fffffffffffffed;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (param_2 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f4a4);
          (*pcVar2)();
        }
      }
      else {
        FUN_1000f653c(param_2,lVar1);
        if (param_2 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10009f42c);
          (*pcVar2)();
        }
      }
    }
  }
  return param_2;
}



/* Address: 0x10009f4a4 | FUN_10009f4a4 */

void FUN_10009f4a4(undefined8 *param_1,undefined8 param_2)

{
  FUN_100ae6870();
  *param_1 = param_2;
  return;
}



/* Address: 0x10009f4c8 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  FUN_10019fbf0();
  return;
}



/* Address: 0x10009f4cc | FUN_10009f4cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009f4cc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10009f4f0 | FUN_10009f4f0 */

void FUN_10009f4f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10009e24c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10009f4f8 | FUN_10009f4f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009f4f8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10009f524 | FUN_10009f524 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009f524(void)

{
  ID self;
  NSArray *pNVar1;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x10);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::performWithItems_(self,pNVar1);
  return 0;
}



/* Address: 0x10009f564 | thunk_FUN_100070eb8 */

void thunk_FUN_100070eb8(void)

{
  FUN_100070eb8();
  return;
}



/* Address: 0x10009f568 | thunk_FUN_10006f364 */

void thunk_FUN_10006f364(void)

{
  FUN_10006f364();
  return;
}



/* Address: 0x10009f56c | thunk_FUN_10009df20 */

void thunk_FUN_10009df20(void)

{
  FUN_10009df20();
  return;
}



/* Address: 0x10009f570 | thunk_FUN_10009f26c */

void thunk_FUN_10009f26c(void)

{
  thunk_FUN_10009f26c();
  return;
}



/* Address: 0x10009f574 | thunk_FUN_10009f250 */

void thunk_FUN_10009f250(void)

{
  long unaff_x20;
  
  FUN_10009ef40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10009f578 | FUN_10009f578 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009f578(undefined8 param_1)

{
  long lVar1;
  __uint64 line;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  StaticString SVar6;
  char *pcVar7;
  void *pvVar8;
  _StringGuts _Var9;
  URL UVar10;
  long extraout_x8;
  code *pcVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  StaticString local_80;
  __uint64 local_78;
  ID local_70;
  undefined *local_68 [2];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_80.unknown = (undefined *)0x0;
  UVar10.unknown = &DAT_00000001;
  UVar4.unknown =
       (undefined *)
       NSFileManager::URLForDirectory_inDomain_appropriateForURL_create_error_
                 (IVar3,0xe,1,0,1,&local_80);
  if (UVar4.unknown == (undefined *)0x0) {
    SVar6.unknown = local_80.unknown;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
    SVar13.bridgeObject = &DAT_e500000000000000;
    SVar13.str = (char *)0x6574736150;
    Foundation::URL::appendingPathComponent(SVar13,true,UVar10);
    UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    local_80.unknown = (undefined *)0x0;
    IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      ((ID)UVar4.unknown,pNVar5,1,0,&local_80);
    if ((int)IVar3 != 0) {
      (**(code **)(lVar12 + 8))((long)&local_80 + lVar1,UVar2.unknown);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    SVar6.unknown = local_80.unknown;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar11 = *(code **)(lVar12 + 8);
    (*pcVar11)(param_1,UVar2.unknown);
    (*pcVar11)((long)&local_80 + lVar1,UVar2.unknown);
  }
  pcVar7 = &DAT_100fab098;
  local_68[0] = SVar6.unknown;
  FUN_1000037f0(&DAT_100fab098,&DAT_100c28ad0);
  pvVar8 = (void *)0x0;
  FUN_10009f87c();
  _Var9.unknown = (undefined *)local_68;
  _swift_dynamicCast(&local_70);
  local_80.unknown = (undefined *)0x0;
  local_78 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var9);
  _swift_bridgeObjectRelease(local_78);
  local_80.unknown = (undefined *)0xd00000000000001a;
  local_78 = 0x8000000100d8f3f0;
  objc_stub::localizedDescription(local_70);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar15.bridgeObject = pvVar8;
  SVar15.str = pcVar7;
  Swift::String::append(SVar13,SVar15);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  line = local_78;
  SVar6.unknown = local_80.unknown;
  *(undefined4 *)((long)auStack_88 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_90 + lVar1) = 0x48;
  SVar14.bridgeObject = (void *)0x2;
  SVar14.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar14,SVar6,line,0xd8f3f0);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10009f87c);
  (*pcVar11)();
}



/* Address: 0x10009f87c | FUN_10009f87c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10009f87c(void)

{
  undefined *puVar1;
  
  if (DAT_100fab0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSError;
  _swift_getObjCClassMetadata();
  DAT_100fab0a0 = puVar1;
  return;
}



/* Address: 0x10009f8c0 | FUN_10009f8c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10009f8c0(void)

{
  code *pcVar1;
  ID IVar2;
  NSString *pNVar3;
  undefined1 local_80 [16];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = NSBundle::objectForInfoDictionaryKey_(IVar2,pNVar3);
  if (IVar2 != 0) {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
    FUN_100011080(auStack_70,auStack_50);
    _swift_dynamicCast(local_80,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,7);
    return local_80;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f9a4);
  (*pcVar1)();
}



/* Address: 0x10009f9a4 | FUN_10009f9a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10009f9a4(void)

{
  ID IVar1;
  NSString *pNVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar3 = 0;
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar1 = NSBundle::objectForInfoDictionaryKey_(IVar1,pNVar2);
  if (IVar1 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_100013954(&local_50);
  }
  else {
    _swift_dynamicCast(&local_80,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar3 & 1) != 0) goto LAB_10009fa90;
  }
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
LAB_10009fa90:
  auVar4._8_8_ = uStack_78;
  auVar4._0_8_ = local_80;
  return auVar4;
}



/* Address: 0x10009faa4 | FUN_10009faa4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10009faa4(ID param_1)

{
  objc_stub::center(param_1);
  DAT_100fab0a8 = param_1;
  return param_1;
}



/* Address: 0x10009fad8 | FUN_10009fad8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009fad8(void)

{
  DAT_100fab0a8 = 0;
  return 0;
}



/* Address: 0x10009fae8 | FUN_10009fae8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009fae8(void)

{
  undefined *self;
  NSViewController *in;
  AppStore extraout_w1;
  
  self = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  in = (NSViewController *)objc_stub::init((ID)self);
  StoreKit::AppStore::requestReview(in,extraout_w1);
  return 0;
}



/* Address: 0x10009fb1c | FUN_10009fb1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009fb1c(undefined8 param_1,code *param_2)

{
  DAT_100fab0a8 = 0;
  (*param_2)(0);
  return;
}



/* Address: 0x10009fb50 | FUN_10009fb50 */

void FUN_10009fb50(void)

{
  FUN_1001ad9dc(0,0);
  return;
}



/* Address: 0x10009fb78 | thunk_FUN_10009faa4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID thunk_FUN_10009faa4(ID param_1)

{
  objc_stub::center(param_1);
  DAT_100fab0a8 = param_1;
  return param_1;
}



/* Address: 0x10009fb7c | _TtC5Paste16NotificationItem::intrinsicContentSize */

/* Function Stack Size: 0x10 bytes */

CGSize _TtC5Paste16NotificationItem::intrinsicContentSize(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  CGSize CVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationItem.swift",0x1c,1,5,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  CVar5.field1_0x8 = 28.0;
  CVar5.field0_0x0 = 28.0;
  return CVar5;
}



/* Address: 0x10009fc04 | _TtC5Paste16NotificationItem::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste16NotificationItem::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_60;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/NotificationItem.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationItem.swift",0x1c,1,4,UVar3.unknown,pMVar1);
  }
  FUN_10009fdf4();
  local_60.receiver = param_1;
  local_60.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  _swift_release(pMVar2);
  return IVar5;
}


