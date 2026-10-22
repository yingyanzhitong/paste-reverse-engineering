/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aec07c | FUN_100aec07c */

void FUN_100aec07c(long param_1,ulong param_2)

{
  long lVar1;
  long local_70;
  long lStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100aec124();
  if (param_2 < 0x40) {
    local_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_38 = &DAT_100c95248;
    local_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    lStack_68 = local_70;
    local_60 = local_70;
    local_50 = puStack_58;
    puStack_48 = puStack_58;
    local_40 = puStack_58;
    _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100aec124 | FUN_100aec124 */

void FUN_100aec124(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100ff8ce0 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for_Swift_Bool_100eac570;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100ff8ce0 = PVar1.unknown;
  return;
}



/* Address: 0x100aec174 | FUN_100aec174 */

undefined1  [16] FUN_100aec174(void)

{
  return ZEXT816(0x100f321f8);
}



/* Address: 0x100aec184 | thunk_FUN_100aec188 */

void thunk_FUN_100aec188(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8da8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c952b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c952b0,&DAT_100f321f8);
  DAT_100ff8da8 = pTVar1;
  return;
}



/* Address: 0x100aec188 | FUN_100aec188 */

void FUN_100aec188(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8da8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c952b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c952b0,&DAT_100f321f8);
  DAT_100ff8da8 = pTVar1;
  return;
}



/* Address: 0x100aec1c8 | FUN_100aec1c8 */

void FUN_100aec1c8(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_100ff8e20);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_100ff8e20);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aec2ac);
  (*pcVar1)();
}



/* Address: 0x100aec2ac | FUN_100aec2ac */

undefined1  [16] FUN_100aec2ac(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x72616c75676572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x696472616f626e6f;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xea0000000000676e;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100aec2ec | FUN_100aec2ec */

char * FUN_100aec2ec(void)

{
  return "frontmostApplication";
}



/* Address: 0x100aec2f8 | FUN_100aec2f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100aec2f8(ID *param_1,ID *param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::frontmostApplication(*param_2);
  *param_1 = IVar1;
  return;
}



/* Address: 0x100aec328 | FUN_100aec328 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100aec328(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSRunningApplication;
  _swift_getObjCClassMetadata();
  DAT_100ff8dc0 = puVar1;
  return;
}



/* Address: 0x100aec36c | FUN_100aec36c */

void FUN_100aec36c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100aec390 | FUN_100aec390 */

void FUN_100aec390(void)

{
  FUN_100aeb47c();
  return;
}



/* Address: 0x100aec398 | FUN_100aec398 */

void FUN_100aec398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_100aec434,0,0);
  return;
}



/* Address: 0x100aec434 | FUN_100aec434 */

void FUN_100aec434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100ff8e08,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100ff8e10,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100aec53c | FUN_100aec53c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aec5cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100aec53c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  Published *pPVar6;
  __int64 _Var7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  undefined8 local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  puVar3 = &DAT_100ff8e38;
  FUN_1000037f0(&DAT_100ff8e38,&DAT_100c95910);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::_isAccessRequested;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100eac570;
  puVar8 = auStack_80 + -extraout_x8;
  local_61 = 0;
  Combine::Published::init(puVar8,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  pcVar10 = *(code **)(lVar9 + 0x20);
  (*pcVar10)(unaff_x20 + lVar2,puVar8,puVar3);
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::_isAccessEnabled;
  local_62 = 0;
  Combine::Published::init(puVar8,puVar3,puVar4);
  (*pcVar10)(unaff_x20 + lVar2,puVar8,puVar3);
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::
          _isPotentialIssueDetected;
  local_63 = 0;
  Combine::Published::init(puVar8,puVar3,puVar4);
  (*pcVar10)(unaff_x20 + lVar2,puVar8,puVar3);
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::accessibilityService;
  puVar3 = &DAT_100c954f0;
  _swift_getKeyPath();
  puVar4 = &DAT_100ff8e40;
  FUN_1000037f0(&DAT_100ff8e40,&DAT_100c95518);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::analytics;
  puVar3 = &DAT_100c95520;
  _swift_getKeyPath();
  puVar4 = &DAT_100ff87d0;
  FUN_1000037f0(&DAT_100ff87d0,&DAT_100c94d50);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::router;
  puVar3 = &DAT_100c95558;
  _swift_getKeyPath();
  puVar4 = &DAT_100ff8e48;
  FUN_1000037f0(&DAT_100ff8e48,&DAT_100c95580);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0xd000000000000022;
  FUN_1000d4624(0xd000000000000022,0x8000000100c95200);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var7 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var7 != 0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100aeff4c();
  }
  *(undefined **)
   (unaff_x20 + _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::cancellables) =
       puVar3;
  *(undefined1 *)
   (unaff_x20 + _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::configuration) =
       param_1;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::completion
           );
  *puVar1 = param_2;
  puVar1[1] = param_3;
  uVar5 = *(undefined8 *)
           (unaff_x20 +
           _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::accessibilityService);
  _swift_retain(param_3);
  _swift_retain(uVar5);
  FUN_1000da768(&local_70);
  _swift_release(uVar5);
  _swift_release(local_70);
  _IOHIDCheckAccess();
  pPVar6 = (Published *)&DAT_100c95430;
  _swift_getKeyPath(&DAT_100c95430);
  _swift_getKeyPath(&DAT_100c95458);
  local_71 = 1;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar6,&local_71);
  return;
}



/* Address: 0x100aec864 | FUN_100aec864 */

undefined * FUN_100aec864(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff8de8;
    FUN_1000037f0(&DAT_100ff8de8,&DAT_100c953a0);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100ff8de0,&DAT_100c95398);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100aec994);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100aec998);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100aec998 | FUN_100aec998 */

void FUN_100aec998(void)

{
  FUN_100aeb730();
  return;
}



/* Address: 0x100aec9a0 | thunk_FUN_100ae9984 */

void thunk_FUN_100ae9984(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100aec9a4 | thunk_FUN_100ae99bc */

void thunk_FUN_100ae99bc(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x100aec9a8 | FUN_100aec9a8 */

void FUN_100aec9a8(undefined8 param_1)

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
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100aebc6c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aeca14 | FUN_100aeca14 */

void FUN_100aeca14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aeca38 | FUN_100aeca38 */

void FUN_100aeca38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100aecaa8 | FUN_100aecaa8 */

void FUN_100aecaa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100aecb18 | thunk_FUN_100ae995c */

void thunk_FUN_100ae995c(void)

{
  FUN_100ae995c();
  return;
}



/* Address: 0x100aecb1c | thunk_FUN_100ae9970 */

void thunk_FUN_100ae9970(void)

{
  FUN_100ae9970();
  return;
}



/* Address: 0x100aecb20 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x100aecb24 | FUN_100aecb24 */

void FUN_100aecb24(undefined8 param_1)

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
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100aeace4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aecb90 | FUN_100aecb90 */

void FUN_100aecb90(undefined8 param_1)

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
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100aeb0c4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100aecbfc | thunk_FUN_100ae9c38 */

void thunk_FUN_100ae9c38(void)

{
  FUN_100ae9c38();
  return;
}



/* Address: 0x100aecc00 | thunk_FUN_100ae9c4c */

void thunk_FUN_100ae9c4c(void)

{
  FUN_100ae9c4c();
  return;
}



/* Address: 0x100aecc04 | FUN_100aecc04 */

void FUN_100aecc04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100ae6658(0);
  FUN_1000d80e0(param_1,"PasteSystemPermissions/DI+SystemPermissions.swift",0x31,2,9,0x13,
                FUN_100ae6888,0,uVar1);
  return;
}



/* Address: 0x100aecc54 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x100aecc58 | thunk_FUN_100aeab34 */

void thunk_FUN_100aeab34(void)

{
  FUN_100aeab34();
  return;
}



/* Address: 0x100aecc5c | thunk_FUN_100aeca14 */

void thunk_FUN_100aeca14(void)

{
  FUN_100aeca14();
  return;
}



/* Address: 0x100aecc60 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x100aecc64 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x100aecc68 | FUN_100aecc68 */

undefined1  [16] FUN_100aecc68(void)

{
  return ZEXT816(0x100f323d0);
}



/* Address: 0x100aecc78 | FUN_100aecc78 */

void FUN_100aecc78(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccbfdc,1);
  return;
}



/* Address: 0x100aecc88 | FUN_100aecc88 */

void FUN_100aecc88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  String systemName;
  undefined8 uVar4;
  Design DVar5;
  undefined *puVar6;
  undefined *puVar7;
  Image IVar8;
  undefined7 extraout_var;
  Font FVar9;
  Color CVar10;
  Color CVar11;
  HorizontalAlignment HVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 auStack_80 [2];
  undefined *local_70;
  char local_61;
  
  puVar6 = &DAT_100ff8e50;
  auStack_80[1] = param_2;
  FUN_1000037f0(&DAT_100ff8e50,&DAT_100c95600);
  local_70 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar15 = (undefined8 *)((long)auStack_80 + lVar3);
  puVar6 = &DAT_100ff8e58;
  FUN_1000037f0(&DAT_100ff8e58,&DAT_100c95608);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)puVar15 - extraout_x8_00);
  puVar7 = &DAT_100ff8b30;
  FUN_1000037f0(&DAT_100ff8b30,&DAT_100c94f80);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar14 - extraout_x8_01;
  puVar7 = &DAT_100ff8e60;
  FUN_1000037f0(&DAT_100ff8e60,&DAT_100c95618);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar13 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = &DAT_100c95620;
  _swift_getKeyPath(&DAT_100c95620);
  HVar12.unknown = &DAT_100c95648;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_61,param_3,puVar7,HVar12.unknown);
  _swift_release(puVar7);
  _swift_release();
  if (local_61 == '\x01') {
    FUN_10020c9a8();
    systemName = *(String *)HVar12.unknown;
    _swift_bridgeObjectRetain(((String *)HVar12.unknown)->bridgeObject);
    IVar8 = SwiftUI::Image::init(systemName);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
              (lVar16,1,1,CONCAT71(extraout_var,DVar5.value));
    FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_100005808(lVar16,&DAT_100ff8b30,&DAT_100c94f80);
    CVar10.unknown = &DAT_100c95680;
    _swift_getKeyPath();
    CVar11 = SwiftUI::Color::get_green(CVar10);
    puVar7 = &DAT_100c956b0;
    _swift_getKeyPath();
    *puVar14 = IVar8.unknown;
    puVar14[1] = CVar10.unknown;
    puVar14[2] = FVar9.unknown;
    puVar14[3] = puVar7;
    puVar14[4] = CVar11.unknown;
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,0);
    FUN_1000037f0(&DAT_100ff8b48,&DAT_100c94fe0);
    FUN_100ae9a70();
    FUN_100aeea88();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  }
  else {
    HVar12 = SwiftUI::HorizontalAlignment::get_center(HVar12);
    *puVar15 = HVar12.unknown;
    *(undefined8 *)((long)auStack_80 + lVar3 + 8) = 0;
    *(undefined1 *)((long)&local_70 + lVar3) = 0;
    puVar7 = &DAT_100ff8e68;
    FUN_1000037f0(&DAT_100ff8e68,&DAT_100c95668);
    uVar4 = auStack_80[1];
    FUN_100aed13c((long)puVar15 + (long)*(int *)(puVar7 + 0x2c),auStack_80[1],param_3);
    puVar7 = &DAT_100f323f8;
    _swift_allocObject(&DAT_100f323f8,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(local_70 + 0x24));
    *puVar1 = FUN_100aeea30;
    puVar1[1] = puVar7;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_100aeea38(puVar15,puVar14);
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,1);
    _swift_retain(param_3);
    FUN_1000037f0(&DAT_100ff8b48,&DAT_100c94fe0);
    FUN_100ae9a70();
    FUN_100aeea88();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    FUN_100005808(puVar15,&DAT_100ff8e50,&DAT_100c95600);
  }
  FUN_100011090(lVar13 - extraout_x12,lVar13,&DAT_100ff8e60,&DAT_100c95618);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar6 = &DAT_100ff8e88;
  FUN_1000037f0(&DAT_100ff8e88,&DAT_100c95678);
  FUN_100011090(lVar13,(long)param_1 + (long)*(int *)(puVar6 + 0x30),&DAT_100ff8e60,&DAT_100c95618);
  iVar2 = *(int *)(puVar6 + 0x40);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 1;
  FUN_100005808(lVar13 - extraout_x12,&DAT_100ff8e60,&DAT_100c95618);
  FUN_100005808(lVar13,&DAT_100ff8e60,&DAT_100c95618);
  return;
}



/* Address: 0x100aed0b0 | FUN_100aed0b0 */

void FUN_100aed0b0(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100ae9d00();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessView.swift",0x37,1,0x10,UVar3.unknown,
               pMVar1);
  }
  FUN_100aeeca0();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100aed13c | FUN_100aed13c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aed4a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100aed13c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ResizingMode RVar6;
  RoundedCornerStyle RVar7;
  LocalizedStringResource LVar8;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  NSImage *nsImage;
  Image IVar14;
  Image IVar15;
  EdgeInsets EVar16;
  _FrameLayout _Var17;
  Set SVar18;
  char *pcVar19;
  Text TVar20;
  Font FVar21;
  Font FVar22;
  Text TVar23;
  Alignment AVar24;
  RoundedRectangle RVar25;
  VerticalAlignment VVar26;
  Text TVar27;
  undefined *puVar28;
  char *pcVar29;
  long extraout_x8;
  undefined8 *puVar30;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar31;
  long extraout_x8_02;
  long lVar32;
  long extraout_x12;
  long extraout_x12_00;
  long lVar33;
  EdgeInsets EVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  String SVar43;
  undefined8 uStack_1060;
  undefined1 auStack_1058 [8];
  undefined8 uStack_1050;
  undefined1 auStack_1048 [8];
  undefined8 auStack_1040 [2];
  char *apcStack_1030 [4];
  MainActor *local_1010;
  undefined8 *local_1008;
  long local_1000;
  undefined *local_ff8;
  undefined8 local_ff0;
  long local_fe8;
  LocalizedStringResource local_fe0;
  undefined8 *local_fd8;
  undefined8 *local_fd0;
  undefined1 auStack_fc8 [216];
  char *local_ef0;
  void *pvStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined1 local_e20;
  char *local_e10;
  void *pvStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined1 local_d40;
  undefined *local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined1 local_cd0;
  char *local_cc0;
  void *pvStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined1 local_c90;
  char *local_c80;
  void *pvStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  char *local_bd0;
  void *pvStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  char *local_b20;
  void *pvStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined1 uStack_a78;
  undefined7 uStack_a77;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined1 local_a50;
  char *local_a40;
  void *pvStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined1 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined1 local_970;
  undefined *local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined1 local_900;
  char *local_8f0;
  void *pvStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined1 local_820;
  char *local_818;
  void *pvStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e8;
  char *local_7e0;
  void *pvStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined1 local_7b0;
  undefined7 uStack_7af;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  String local_730;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined1 local_660;
  char *local_650;
  void *pvStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined1 local_620;
  char *local_610;
  void *pvStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  char *local_560;
  void *pvStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  char *local_4b0;
  void *pvStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined1 local_3e0;
  String local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300;
  char *local_2f0;
  void *pvStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  char *local_2b8;
  void *pvStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  char *local_280;
  void *pvStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  char *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *puVar9;
  
  puVar9 = &DAT_100ff8e90;
  local_ff0 = param_2;
  FUN_1000037f0(&DAT_100ff8e90,&DAT_100c956e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar33 = (long)apcStack_1030 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined8 *)(lVar33 - extraout_x12);
  puVar9 = &DAT_100ff8bb0;
  local_fd0 = puVar30;
  FUN_1000037f0(&DAT_100ff8bb0,&DAT_100c95078);
  local_ff8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar32 = (long)puVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_fe8 = lVar32;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined8 *)(lVar32 - extraout_x12_00);
  local_fd8 = puVar30;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar31 = (undefined *)((long)puVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_fe0.unknown = puVar31;
  RVar6 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar9 = (undefined *)CONCAT71((int7)((ulong)LVar8.unknown >> 8),RVar6.value);
  lVar32 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar32 + 0x40));
  EVar34.unknown = puVar31 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100ae9d00();
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessView.swift",0x37,1,0x17,UVar12.unknown,
               pMVar10);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    apcStack_1030[3] = (char *)param_3;
    local_1010 = pMVar11;
    local_1008 = param_1;
    local_1000 = lVar33;
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage != (NSImage *)0x0) {
      IVar14 = SwiftUI::Image::init(nsImage);
      IVar15.unknown = puVar9;
      (**(code **)(lVar32 + 0x68))
                (EVar34.unknown,
                 *(undefined4 *)
                  PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
                );
      uVar37 = 0;
      uVar39 = 0;
      uVar40 = 0;
      IVar15 = SwiftUI::Image::resizable(EVar34,(ResizingMode)(__int8)IVar14.unknown,IVar15);
      _swift_release(IVar14.unknown);
      EVar16.unknown = EVar34.unknown;
      (**(code **)(lVar32 + 8))(EVar34.unknown,puVar9);
      SwiftUI::Alignment::get_center((Alignment)EVar16.unknown);
      _Var17 = SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
      SVar18 = SwiftUI::Edge::Set::get_bottom(_Var17.unknown);
      uVar38 = 0x4020000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_1c8 = local_c0;
      local_1c0 = local_b8;
      uStack_1b8 = local_b0;
      local_1b0 = local_a8;
      uStack_1a8 = local_a0;
      local_1a0 = uStack_98;
      uStack_198 = SUB81(SVar18.unknown,0);
      local_170 = 0;
      local_160 = local_c0;
      local_158 = local_b8;
      local_150 = local_b0;
      local_148 = local_a8;
      local_140 = local_a0;
      local_138 = uStack_98;
      local_108 = 0;
      puVar9 = &DAT_100c95080;
      local_1d0 = IVar15.unknown;
      local_190 = uVar38;
      uStack_188 = uVar37;
      local_180 = uVar39;
      uStack_178 = uVar40;
      local_168 = IVar15.unknown;
      local_130 = uStack_198;
      local_128 = uVar38;
      local_120 = uVar37;
      local_118 = uVar39;
      local_110 = uVar40;
      FUN_100011090(&local_1d0,&local_3d0,&DAT_100ff8bb8);
      FUN_100005808(&local_168,&DAT_100ff8bb8,&DAT_100c95080);
      LVar8.unknown = local_fe0.unknown;
      FUN_1001bb688(local_fe0.unknown);
      SVar43 = (extension_Foundation)::Swift::String::init(LVar8);
      local_3d0 = SVar43;
      FUN_100ae9d44();
      pcVar19 = SVar43.str;
      puVar31 = PTR___type_metadata_for_Swift_String_100eac208;
      apcStack_1030[2] = pcVar19;
      TVar20 = SwiftUI::Text::_init(pcVar19,PTR___type_metadata_for_Swift_String_100eac208);
      apcStack_1030[1] = puVar9;
      FVar21 = SwiftUI::Font::get_title(TVar20.unknown);
      FVar22 = SwiftUI::Font::bold(FVar21);
      _swift_release(FVar21.unknown);
      TVar27 = TVar20;
      puVar9 = puVar31;
      AVar24.unknown = pcVar19;
      TVar23 = SwiftUI::Text::_font(FVar22.unknown);
      _swift_release(FVar22.unknown);
      FUN_100016d74(TVar20.unknown,puVar31,pcVar19);
      _swift_bridgeObjectRelease(apcStack_1030[1]);
      FUN_100205044(&local_2b8,1,TVar23.unknown,TVar27.unknown,puVar9,AVar24.unknown);
      FUN_100016d74(TVar23.unknown,TVar27.unknown,puVar9);
      _swift_bridgeObjectRelease();
      AVar24 = SwiftUI::Alignment::get_center(AVar24);
      pvStack_f8 = pvStack_2b0;
      local_100 = local_2b8;
      uStack_e8 = uStack_2a0;
      local_f0 = local_2a8;
      uStack_d8 = uStack_290;
      local_e0 = local_298;
      local_d0 = local_288;
      *(undefined **)(EVar34.unknown + -0x10) = AVar24.unknown;
      *(undefined **)(EVar34.unknown + -8) = TVar27.unknown;
      EVar34.unknown[-0x18] = 1;
      *(undefined8 *)(EVar34.unknown + -0x20) = 0;
      EVar34.unknown[-0x28] = 1;
      *(undefined8 *)(EVar34.unknown + -0x30) = 0;
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
      pvStack_278 = pvStack_f8;
      local_280 = local_100;
      uStack_268 = uStack_e8;
      local_270 = local_f0;
      uStack_258 = uStack_d8;
      local_260 = local_e0;
      pvStack_648 = pvStack_2b0;
      local_650 = local_2b8;
      local_250 = local_d0;
      uStack_638 = uStack_2a0;
      local_640 = local_2a8;
      uStack_628 = uStack_290;
      local_630 = local_298;
      local_620 = local_288;
      FUN_100011090(&local_100,&local_3d0,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18.unknown = (undefined *)&local_650;
      FUN_100005808(SVar18.unknown,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uStack_598 = uStack_208;
      local_5a0 = local_210;
      uStack_588 = uStack_1f8;
      local_590 = local_200;
      uStack_578 = uStack_1e8;
      local_580 = local_1f0;
      local_570 = local_1e0;
      local_5e0 = CONCAT71(uStack_24f,local_250);
      uStack_5d8 = uStack_248;
      uStack_5c8 = uStack_238;
      local_5d0 = local_240;
      uStack_5b8 = uStack_228;
      local_5c0 = local_230;
      uStack_5a8 = uStack_218;
      local_5b0 = local_220;
      pvStack_608 = pvStack_278;
      local_610 = local_280;
      uStack_5f8 = uStack_268;
      local_600 = local_270;
      uStack_5e8 = uStack_258;
      local_5f0 = local_260;
      uVar37 = 0x4010000000000000;
      uVar38 = local_2a8;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_4e8 = uStack_208;
      local_4f0 = local_210;
      uStack_4d8 = uStack_1f8;
      local_4e0 = local_200;
      uStack_4c8 = uStack_1e8;
      local_4d0 = local_1f0;
      local_4c0 = local_1e0;
      local_530 = CONCAT71(uStack_24f,local_250);
      uStack_528 = uStack_248;
      uStack_518 = uStack_238;
      local_520 = local_240;
      uStack_508 = uStack_228;
      local_510 = local_230;
      uStack_4f8 = uStack_218;
      local_500 = local_220;
      pvStack_558 = pvStack_278;
      local_560 = local_280;
      uStack_548 = uStack_268;
      local_550 = local_270;
      uStack_538 = uStack_258;
      local_540 = local_260;
      FUN_100011090(&local_610,&local_3d0,&DAT_100ff8bd0,&DAT_100c95090);
      FUN_100005808(&local_560,&DAT_100ff8bd0,&DAT_100c95090);
      local_410 = local_1e0;
      uStack_438 = uStack_208;
      local_440 = local_210;
      uStack_428 = uStack_1f8;
      local_430 = local_200;
      uStack_418 = uStack_1e8;
      local_420 = local_1f0;
      local_480 = CONCAT71(uStack_24f,local_250);
      uStack_478 = uStack_248;
      uStack_468 = uStack_238;
      local_470 = local_240;
      uStack_458 = uStack_228;
      local_460 = local_230;
      uStack_448 = uStack_218;
      local_450 = local_220;
      pvStack_4a8 = pvStack_278;
      local_4b0 = local_280;
      uStack_498 = uStack_268;
      local_4a0 = local_270;
      uStack_488 = uStack_258;
      local_490 = local_260;
      uStack_408 = SUB81(SVar18.unknown,0);
      local_3e0 = 0;
      uStack_358 = uStack_208;
      local_360 = local_210;
      uStack_348 = uStack_1f8;
      local_350 = local_200;
      uStack_338 = uStack_1e8;
      local_340 = local_1f0;
      local_330 = local_1e0;
      local_3a0 = CONCAT71(uStack_24f,local_250);
      uStack_398 = uStack_248;
      uStack_388 = uStack_238;
      local_390 = local_240;
      uStack_378 = uStack_228;
      local_380 = local_230;
      uStack_368 = uStack_218;
      local_370 = local_220;
      local_3d0.bridgeObject = pvStack_278;
      local_3d0.str = local_280;
      uStack_3b8 = uStack_268;
      local_3c0 = local_270;
      uStack_3a8 = uStack_258;
      local_3b0 = local_260;
      local_300 = 0;
      puVar9 = &DAT_100c95098;
      local_400 = uVar37;
      uStack_3f8 = uVar38;
      local_3f0 = uVar39;
      uStack_3e8 = uVar40;
      local_328 = uStack_408;
      local_320 = uVar37;
      local_310 = uVar39;
      local_308 = uVar40;
      FUN_100011090(&local_4b0,&local_730,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_3d0,&DAT_100ff8bd8,&DAT_100c95098);
      LVar8.unknown = local_fe0.unknown;
      FUN_1001bb508(local_fe0.unknown);
      local_730 = (extension_Foundation)::Swift::String::init(LVar8);
      puVar31 = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar19 = apcStack_1030[2];
      TVar20 = SwiftUI::Text::_init();
      FVar21 = SwiftUI::Font::get_body(TVar20.unknown);
      TVar27 = TVar20;
      puVar28 = puVar31;
      pcVar29 = pcVar19;
      TVar23 = SwiftUI::Text::_font(FVar21.unknown);
      local_fe0.unknown = pcVar29;
      _swift_release(FVar21.unknown);
      FUN_100016d74(TVar20.unknown,puVar31,pcVar19);
      _swift_bridgeObjectRelease(puVar9);
      LVar8.unknown = local_fe0.unknown;
      FUN_100205044(&local_818,1,TVar23.unknown,TVar27.unknown,puVar28,local_fe0.unknown);
      FUN_100016d74(TVar23.unknown,TVar27.unknown,puVar28);
      _swift_bridgeObjectRelease();
      AVar24 = SwiftUI::Alignment::get_center(LVar8.unknown);
      pvStack_2e8 = pvStack_810;
      local_2f0 = local_818;
      uStack_2d8 = uStack_800;
      local_2e0 = local_808;
      uStack_2c8 = uStack_7f0;
      local_2d0 = local_7f8;
      local_2c0 = local_7e8;
      *(undefined **)(EVar34.unknown + -0x10) = AVar24.unknown;
      *(undefined **)(EVar34.unknown + -8) = TVar27.unknown;
      EVar34.unknown[-0x18] = 1;
      *(undefined8 *)(EVar34.unknown + -0x20) = 0;
      EVar34.unknown[-0x28] = 1;
      *(undefined8 *)(EVar34.unknown + -0x30) = 0;
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
      pvStack_7d8 = pvStack_2e8;
      local_7e0 = local_2f0;
      uStack_7c8 = uStack_2d8;
      local_7d0 = local_2e0;
      uStack_7b8 = uStack_2c8;
      local_7c0 = local_2d0;
      local_7b0 = local_2c0;
      pvStack_cb8 = pvStack_810;
      local_cc0 = local_818;
      uStack_ca8 = uStack_800;
      uStack_cb0 = local_808;
      uStack_c98 = uStack_7f0;
      local_ca0 = local_7f8;
      local_c90 = local_7e8;
      FUN_100011090(&local_2f0,&local_730,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18.unknown = (undefined *)&local_cc0;
      FUN_100005808(SVar18.unknown,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uStack_bf8 = uStack_758;
      local_c00 = local_760;
      uStack_be8 = uStack_748;
      uStack_bf0 = local_750;
      local_be0 = local_740;
      uVar38 = CONCAT71(uStack_7af,local_7b0);
      uStack_c38 = uStack_798;
      local_c40 = local_7a0;
      uStack_c28 = uStack_788;
      uStack_c30 = local_790;
      uStack_c18 = uStack_778;
      local_c20 = local_780;
      uStack_c08 = uStack_768;
      uStack_c10 = local_770;
      pvStack_c78 = pvStack_7d8;
      local_c80 = local_7e0;
      uStack_c68 = uStack_7c8;
      uStack_c70 = local_7d0;
      uStack_c58 = uStack_7b8;
      local_c60 = local_7c0;
      uStack_c48 = uStack_7a8;
      uVar35 = 0x403c000000000000;
      uVar39 = local_7d0;
      uVar41 = local_790;
      uStack_c50 = uVar38;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_b48 = uStack_758;
      local_b50 = local_760;
      uStack_b38 = uStack_748;
      uStack_b40 = local_750;
      local_b30 = local_740;
      uStack_ba0 = CONCAT71(uStack_7af,local_7b0);
      uStack_b88 = uStack_798;
      local_b90 = local_7a0;
      uStack_b78 = uStack_788;
      uStack_b80 = local_790;
      uStack_b68 = uStack_778;
      local_b70 = local_780;
      uStack_b58 = uStack_768;
      uStack_b60 = local_770;
      pvStack_bc8 = pvStack_7d8;
      local_bd0 = local_7e0;
      uStack_bb8 = uStack_7c8;
      uStack_bc0 = local_7d0;
      uStack_ba8 = uStack_7b8;
      local_bb0 = local_7c0;
      uStack_b98 = uStack_7a8;
      uVar42 = local_790;
      FUN_100011090(&local_c80,&local_730,&DAT_100ff8bd0,&DAT_100c95090);
      FUN_100005808(&local_bd0,&DAT_100ff8bd0,&DAT_100c95090);
      local_a80 = local_740;
      uStack_aa8 = uStack_768;
      local_ab0 = local_770;
      uStack_a98 = uStack_758;
      local_aa0 = local_760;
      uStack_a88 = uStack_748;
      local_a90 = local_750;
      uStack_af0 = CONCAT71(uStack_7af,local_7b0);
      uStack_ad8 = uStack_798;
      local_ae0 = local_7a0;
      uStack_ac8 = uStack_788;
      local_ad0 = local_790;
      uStack_ab8 = uStack_778;
      local_ac0 = local_780;
      pvStack_b18 = pvStack_7d8;
      local_b20 = local_7e0;
      uStack_b08 = uStack_7c8;
      uStack_b10 = local_7d0;
      uStack_af8 = uStack_7b8;
      local_b00 = local_7c0;
      uStack_ae8 = uStack_7a8;
      uStack_a78 = SUB81(SVar18.unknown,0);
      local_a50 = 0;
      uStack_9c8 = uStack_768;
      local_9d0 = local_770;
      uStack_9b8 = uStack_758;
      local_9c0 = local_760;
      uStack_9a8 = uStack_748;
      local_9b0 = local_750;
      local_9a0 = local_740;
      local_a10 = CONCAT71(uStack_7af,local_7b0);
      uStack_a08 = uStack_7a8;
      uStack_9f8 = uStack_798;
      local_a00 = local_7a0;
      uStack_9e8 = uStack_788;
      local_9f0 = local_790;
      uStack_9d8 = uStack_778;
      local_9e0 = local_780;
      pvStack_a38 = pvStack_7d8;
      local_a40 = local_7e0;
      uStack_a28 = uStack_7c8;
      local_a30 = local_7d0;
      uStack_a18 = uStack_7b8;
      local_a20 = local_7c0;
      local_970 = 0;
      uVar37 = local_7c0;
      uVar40 = local_7d0;
      local_a70 = uVar35;
      uStack_a68 = uVar38;
      local_a60 = uVar39;
      uStack_a58 = uVar41;
      local_998 = uStack_a78;
      local_990 = uVar35;
      local_988 = uVar38;
      local_980 = uVar39;
      FUN_100011090(&local_b20,&local_730,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_a40,&DAT_100ff8bd8,&DAT_100c95098);
      if (DAT_100ff87c8 != -1) {
        _swift_once(&DAT_100ff87c8,FUN_100ae43c8);
      }
      SVar43.bridgeObject = (void *)0x8000000100dbb990;
      SVar43.str = (char *)0xd000000000000018;
      IVar15 = SwiftUI::Image::_init(SVar43);
      puVar9 = &DAT_100ff8be0;
      FUN_1000037f0(&DAT_100ff8be0,&DAT_100c950a0);
      puVar4 = local_fd8;
      puVar30 = (undefined8 *)((long)local_fd8 + (long)*(int *)(puVar9 + 0x24));
      RVar25 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar3 = *(int *)(RVar25.unknown + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar32 = CONCAT71((int7)((ulong)RVar25.unknown >> 8),RVar7.value);
      (**(code **)(*(long *)(lVar32 + -8) + 0x68))((long)puVar30 + (long)iVar3,uVar2,lVar32);
      auVar36 = NEON_fmov(0x4024000000000000,8);
      puVar30[1] = auVar36._8_8_;
      *puVar30 = auVar36._0_8_;
      SVar18.unknown = &DAT_100ff8be8;
      FUN_1000037f0(&DAT_100ff8be8,&DAT_100c950a8);
      *(undefined2 *)((long)puVar30 + (long)*(int *)(SVar18.unknown + 0x24)) = 0x100;
      *puVar4 = IVar15.unknown;
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uVar38 = 0x403c000000000000;
      EVar34 = SwiftUI::EdgeInsets::init(SVar18.unknown);
      puVar1 = (undefined1 *)((long)puVar4 + (long)*(int *)(local_ff8 + 0x24));
      *puVar1 = (char)SVar18.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar38;
      *(undefined8 *)(puVar1 + 0x10) = uVar37;
      *(undefined8 *)(puVar1 + 0x18) = uVar40;
      *(undefined8 *)(puVar1 + 0x20) = uVar42;
      puVar1[0x28] = 0;
      VVar26 = SwiftUI::VerticalAlignment::get_center(EVar34.unknown);
      puVar30 = local_fd0;
      *local_fd0 = VVar26.unknown;
      puVar30[1] = 0x4030000000000000;
      *(undefined1 *)(puVar30 + 2) = 0;
      puVar9 = &DAT_100ff8e98;
      FUN_1000037f0(&DAT_100ff8e98,&DAT_100c956f0);
      FUN_100aee158((long)puVar30 + (long)*(int *)(puVar9 + 0x2c),local_ff0,apcStack_1030[3]);
      lVar33 = local_fe8;
      uStack_cf8 = CONCAT71(uStack_197,uStack_198);
      uStack_ce8 = uStack_188;
      local_cf0 = local_190;
      uStack_cd8 = uStack_178;
      uStack_ce0 = local_180;
      local_cd0 = local_170;
      uStack_d20 = CONCAT71(uStack_1bf,local_1c0);
      uStack_d28 = uStack_1c8;
      local_d30 = local_1d0;
      uStack_d18 = uStack_1b8;
      local_d10 = CONCAT71(uStack_1af,local_1b0);
      uStack_d08 = uStack_1a8;
      uStack_d00 = local_1a0;
      uStack_d68 = CONCAT71(uStack_407,uStack_408);
      local_d70 = local_410;
      uStack_d58 = uStack_3f8;
      local_d60 = local_400;
      uStack_d48 = uStack_3e8;
      local_d50 = local_3f0;
      local_d40 = local_3e0;
      uStack_da8 = uStack_448;
      local_db0 = local_450;
      uStack_d98 = uStack_438;
      local_da0 = local_440;
      uStack_d88 = uStack_428;
      local_d90 = local_430;
      uStack_d78 = uStack_418;
      local_d80 = local_420;
      uStack_de8 = uStack_488;
      local_df0 = local_490;
      uStack_dd8 = uStack_478;
      local_de0 = local_480;
      uStack_dc8 = uStack_468;
      local_dd0 = local_470;
      uStack_db8 = uStack_458;
      local_dc0 = local_460;
      pvStack_e08 = pvStack_4a8;
      local_e10 = local_4b0;
      uStack_df8 = uStack_498;
      uStack_e00 = local_4a0;
      uStack_e48 = CONCAT71(uStack_a77,uStack_a78);
      local_e50 = local_a80;
      uStack_e38 = uStack_a68;
      local_e40 = local_a70;
      uStack_e28 = uStack_a58;
      local_e30 = local_a60;
      local_e20 = local_a50;
      uStack_e88 = uStack_ab8;
      local_e90 = local_ac0;
      uStack_e78 = uStack_aa8;
      local_e80 = local_ab0;
      uStack_e68 = uStack_a98;
      local_e70 = local_aa0;
      uStack_e58 = uStack_a88;
      local_e60 = local_a90;
      uStack_ec8 = uStack_af8;
      local_ed0 = local_b00;
      uStack_eb8 = uStack_ae8;
      local_ec0 = uStack_af0;
      uStack_ea8 = uStack_ad8;
      local_eb0 = local_ae0;
      uStack_e98 = uStack_ac8;
      local_ea0 = local_ad0;
      pvStack_ee8 = pvStack_b18;
      local_ef0 = local_b20;
      uStack_ed8 = uStack_b08;
      local_ee0 = uStack_b10;
      FUN_100011090(puVar4,local_fe8);
      lVar32 = local_1000;
      FUN_100011090(puVar30,local_1000,&DAT_100ff8e90,&DAT_100c956e0);
      puVar30 = local_1008;
      uStack_928 = uStack_cf8;
      local_930 = uStack_d00;
      uStack_918 = uStack_ce8;
      local_920 = local_cf0;
      uStack_908 = uStack_cd8;
      local_910 = uStack_ce0;
      uStack_958 = uStack_d28;
      local_960 = local_d30;
      uStack_948 = uStack_d18;
      local_950 = uStack_d20;
      uStack_938 = uStack_d08;
      local_940 = local_d10;
      local_1008[1] = uStack_d28;
      *local_1008 = local_d30;
      local_1008[3] = uStack_d18;
      local_1008[2] = uStack_d20;
      local_1008[5] = uStack_d08;
      local_1008[4] = local_d10;
      local_1008[7] = uStack_cf8;
      local_1008[6] = uStack_d00;
      local_1008[9] = uStack_ce8;
      local_1008[8] = local_cf0;
      local_1008[0xb] = uStack_cd8;
      local_1008[10] = uStack_ce0;
      pvStack_8e8 = pvStack_e08;
      local_8f0 = local_e10;
      uStack_898 = uStack_db8;
      local_8a0 = local_dc0;
      uStack_8a8 = uStack_dc8;
      local_8b0 = local_dd0;
      uStack_8b8 = uStack_dd8;
      local_8c0 = local_de0;
      uStack_8c8 = uStack_de8;
      local_8d0 = local_df0;
      uStack_858 = uStack_d78;
      local_860 = local_d80;
      uStack_868 = uStack_d88;
      local_870 = local_d90;
      uStack_878 = uStack_d98;
      local_880 = local_da0;
      uStack_888 = uStack_da8;
      local_890 = local_db0;
      uStack_828 = uStack_d48;
      local_830 = local_d50;
      uStack_838 = uStack_d58;
      local_840 = local_d60;
      uStack_848 = uStack_d68;
      local_850 = local_d70;
      uStack_8d8 = uStack_df8;
      local_8e0 = uStack_e00;
      local_1008[0x22] = uStack_d68;
      local_1008[0x21] = local_d70;
      local_1008[0x24] = uStack_d58;
      local_1008[0x23] = local_d60;
      local_1008[0x26] = uStack_d48;
      local_1008[0x25] = local_d50;
      local_1008[0x1a] = uStack_da8;
      local_1008[0x19] = local_db0;
      local_1008[0x1c] = uStack_d98;
      local_1008[0x1b] = local_da0;
      local_1008[0x1e] = uStack_d88;
      local_1008[0x1d] = local_d90;
      local_1008[0x20] = uStack_d78;
      local_1008[0x1f] = local_d80;
      local_1008[0x12] = uStack_de8;
      local_1008[0x11] = local_df0;
      local_1008[0x14] = uStack_dd8;
      local_1008[0x13] = local_de0;
      local_1008[0x16] = uStack_dc8;
      local_1008[0x15] = local_dd0;
      local_1008[0x18] = uStack_db8;
      local_1008[0x17] = local_dc0;
      local_1008[0xe] = pvStack_e08;
      local_1008[0xd] = local_e10;
      local_1008[0x10] = uStack_df8;
      local_1008[0xf] = uStack_e00;
      uStack_688 = uStack_e48;
      local_690 = local_e50;
      uStack_678 = uStack_e38;
      local_680 = local_e40;
      uStack_668 = uStack_e28;
      local_670 = local_e30;
      uStack_6c8 = uStack_e88;
      local_6d0 = local_e90;
      uStack_6b8 = uStack_e78;
      local_6c0 = local_e80;
      uStack_6a8 = uStack_e68;
      local_6b0 = local_e70;
      uStack_698 = uStack_e58;
      local_6a0 = local_e60;
      uStack_708 = uStack_ec8;
      local_710 = local_ed0;
      uStack_6f8 = uStack_eb8;
      local_700 = local_ec0;
      uStack_6e8 = uStack_ea8;
      local_6f0 = local_eb0;
      uStack_6d8 = uStack_e98;
      local_6e0 = local_ea0;
      local_730.bridgeObject = pvStack_ee8;
      local_730.str = local_ef0;
      uStack_718 = uStack_ed8;
      local_720 = local_ee0;
      local_1008[0x3d] = uStack_e48;
      local_1008[0x3c] = local_e50;
      local_1008[0x3f] = uStack_e38;
      local_1008[0x3e] = local_e40;
      local_1008[0x41] = uStack_e28;
      local_1008[0x40] = local_e30;
      local_1008[0x35] = uStack_e88;
      local_1008[0x34] = local_e90;
      local_1008[0x37] = uStack_e78;
      local_1008[0x36] = local_e80;
      local_1008[0x39] = uStack_e68;
      local_1008[0x38] = local_e70;
      local_1008[0x3b] = uStack_e58;
      local_1008[0x3a] = local_e60;
      local_900 = local_cd0;
      *(undefined1 *)(local_1008 + 0xc) = local_cd0;
      local_820 = local_d40;
      *(undefined1 *)(local_1008 + 0x27) = local_d40;
      local_660 = local_e20;
      *(undefined1 *)(local_1008 + 0x42) = local_e20;
      local_1008[0x2d] = uStack_ec8;
      local_1008[0x2c] = local_ed0;
      local_1008[0x2f] = uStack_eb8;
      local_1008[0x2e] = local_ec0;
      local_1008[0x31] = uStack_ea8;
      local_1008[0x30] = local_eb0;
      local_1008[0x33] = uStack_e98;
      local_1008[0x32] = local_ea0;
      local_1008[0x29] = pvStack_ee8;
      local_1008[0x28] = local_ef0;
      local_1008[0x2b] = uStack_ed8;
      local_1008[0x2a] = local_ee0;
      puVar9 = &DAT_100ff8ea0;
      FUN_1000037f0(&DAT_100ff8ea0,&DAT_100c956f8);
      FUN_100011090(lVar33,(long)puVar30 + (long)*(int *)(puVar9 + 0x50),&DAT_100ff8bb0,
                    &DAT_100c95078);
      FUN_100011090(lVar32,(long)puVar30 + (long)*(int *)(puVar9 + 0x60),&DAT_100ff8e90,
                    &DAT_100c956e0);
      FUN_100011090(&local_960,auStack_fc8,&DAT_100ff8bb8,&DAT_100c95080);
      FUN_100011090(&local_8f0,auStack_fc8,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100011090(&local_730,auStack_fc8,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(local_fd0,&DAT_100ff8e90,&DAT_100c956e0);
      FUN_100005808(local_fd8,&DAT_100ff8bb0,&DAT_100c95078);
      FUN_100005808(lVar32,&DAT_100ff8e90,&DAT_100c956e0);
      FUN_100005808(lVar33,&DAT_100ff8bb0,&DAT_100c95078);
      FUN_100005808(&local_ef0,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_e10,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_d30,&DAT_100ff8bb8,&DAT_100c95080);
      _swift_release(local_1010);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aee158);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100aee154);
  (*pcVar5)();
}



/* Address: 0x100aee158 | FUN_100aee158 */

void FUN_100aee158(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ControlSize CVar6;
  undefined *puVar7;
  KeyboardShortcut KVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  undefined7 extraout_var;
  KeyboardShortcut KVar14;
  undefined7 extraout_var_00;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  KeyboardShortcut KVar20;
  undefined8 uStack_b0;
  undefined4 local_a4;
  long local_a0;
  undefined *local_98;
  long local_90;
  MainActor *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar7 = &DAT_100ff8ea8;
  local_70 = param_1;
  FUN_1000037f0(&DAT_100ff8ea8,&DAT_100c95700);
  lVar19 = *(long *)(puVar7 + -8);
  local_98 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  local_78 = lVar15;
  KVar8 = SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_90 = *(long *)(KVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  KVar20.unknown = (undefined *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100ff8eb0;
  FUN_1000037f0(&DAT_100ff8eb0,&DAT_100c95708);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)KVar20.unknown - extraout_x8_01;
  puVar9 = &DAT_100ff8eb8;
  FUN_1000037f0(&DAT_100ff8eb8,&DAT_100c95710);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar15 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_00;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100ae9d00();
  local_88 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessView.swift",0x37,1,0x2d,UVar12.unknown,
               pMVar10);
  }
  puVar9 = local_98;
  local_a0 = lVar19;
  if (*(char *)(param_3 +
               _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::configuration) == '\0'
     ) {
    _swift_retain(param_3);
    FUN_1000037f0(&DAT_100ff8c28,&DAT_100c95130);
    FUN_100ae9dd8();
    SwiftUI::Button::_init();
    iVar2 = *(int *)(puVar7 + 0x24);
    puVar9 = &DAT_100ff8ec0;
    FUN_1000037f0(&DAT_100ff8ec0,&DAT_100c95720);
    iVar3 = *(int *)(puVar9 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
    ;
    CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
    local_a4 = uVar1;
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar6.value) + -8) + 0x68))
              (lVar17 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar6.value));
    KVar14.unknown = &DAT_100c95728;
    _swift_getKeyPath();
    *(undefined **)(lVar17 + iVar2) = KVar14.unknown;
    SwiftUI::KeyboardShortcut::get_cancelAction(KVar14);
    FUN_100aeeb40();
    (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar20);
    lVar16 = local_90;
    (**(code **)(local_90 + 8))(KVar20.unknown,KVar8.unknown);
    FUN_100005808(lVar17,&DAT_100ff8eb0,&DAT_100c95708);
    puVar9 = local_98;
    (**(code **)(lVar19 + 0x38))(lVar15,0,1,local_98);
  }
  else {
    (**(code **)(lVar19 + 0x38))(lVar15,1,1,local_98);
    local_a4 = *(undefined4 *)
                PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
    ;
    lVar16 = local_90;
  }
  _swift_retain(param_3);
  FUN_1000037f0(&DAT_100ff8c28,&DAT_100c95130);
  FUN_100ae9dd8();
  SwiftUI::Button::_init();
  iVar2 = *(int *)(puVar7 + 0x24);
  puVar7 = &DAT_100ff8ec0;
  FUN_1000037f0(&DAT_100ff8ec0,&DAT_100c95720);
  iVar3 = *(int *)(puVar7 + 0x1c);
  CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,CVar6.value) + -8) + 0x68))
            (lVar17 + iVar2 + (long)iVar3,local_a4,CONCAT71(extraout_var_00,CVar6.value));
  KVar14.unknown = &DAT_100c95728;
  _swift_getKeyPath();
  *(undefined **)(lVar17 + iVar2) = KVar14.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar14);
  FUN_100aeeb40();
  lVar4 = local_78;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar20);
  (**(code **)(lVar16 + 8))(KVar20.unknown,KVar8.unknown);
  FUN_100005808(lVar17,&DAT_100ff8eb0,&DAT_100c95708);
  lVar19 = local_80;
  FUN_100011090(lVar15,local_80,&DAT_100ff8eb8,&DAT_100c95710);
  lVar5 = local_68;
  lVar17 = local_a0;
  pcVar18 = *(code **)(local_a0 + 0x10);
  (*pcVar18)(local_68,lVar4,puVar9);
  lVar16 = local_70;
  FUN_100011090(lVar19,local_70,&DAT_100ff8eb8,&DAT_100c95710);
  puVar7 = &DAT_100ff8ee0;
  FUN_1000037f0(&DAT_100ff8ee0,&DAT_100c95760);
  (*pcVar18)(lVar16 + *(int *)(puVar7 + 0x30),lVar5,puVar9);
  pcVar18 = *(code **)(lVar17 + 8);
  (*pcVar18)(lVar4,puVar9);
  FUN_100005808(lVar15,&DAT_100ff8eb8,&DAT_100c95710);
  (*pcVar18)(lVar5,puVar9);
  FUN_100005808(lVar19,&DAT_100ff8eb8,&DAT_100c95710);
  _swift_release(local_88);
  return;
}



/* Address: 0x100aee65c | FUN_100aee65c */

void FUN_100aee65c(void)

{
  FUN_100aee77c(0x2f,FUN_1001bb088);
  return;
}



/* Address: 0x100aee66c | FUN_100aee66c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100aee66c(void)

{
  URL UVar1;
  ID self;
  URL UVar2;
  URL UVar3;
  NSURL *pNVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  if (DAT_100ff9058 != -1) {
    _swift_once(&DAT_100ff9058,FUN_100aefe14);
  }
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_100ff9040);
  UVar3.unknown = puVar5;
  (**(code **)(lVar6 + 0x10))(puVar5,UVar2.unknown,UVar1.unknown);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  (**(code **)(lVar6 + 8))(puVar5,UVar1.unknown);
  NSWorkspace::openURL_(self,pNVar4);
  return 0;
}



/* Address: 0x100aee76c | FUN_100aee76c */

void FUN_100aee76c(void)

{
  FUN_100aee77c(0x37,FUN_1001baf08);
  return;
}



/* Address: 0x100aee77c | FUN_100aee77c */

void FUN_100aee77c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  Set _all;
  undefined *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined1 auStack_140 [80];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100ae9d00();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessView.swift",0x37,1,param_6,
               UVar4.unknown,pMVar2);
    param_9 = param_6;
  }
  (*param_7)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  uVar8 = local_a0.str._0_1_;
  FUN_100ae9d44();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _all = SwiftUI::Edge::Set::get_horizontal(TVar6.unknown);
  uVar9 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (undefined7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_a0.bridgeObject = puVar7;
  local_a0.str = TVar6.unknown;
  local_58 = 0;
  local_f0 = TVar6.unknown;
  puStack_e8 = puVar7;
  local_e0 = uVar8;
  local_d8 = param_9;
  uStack_c8 = uVar9;
  uStack_c0 = param_3;
  local_90 = uVar8;
  local_88 = param_9;
  local_80 = local_d0;
  local_78 = uVar9;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_100011090(&local_f0,auStack_140,&DAT_100ff8c28,&DAT_100c95130);
  FUN_100005808(&local_a0,&DAT_100ff8c28,&DAT_100c95130);
  _swift_release(pMVar3);
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,local_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x100aee924 | FUN_100aee924 */

void FUN_100aee924(void)

{
  undefined8 *unaff_x20;
  
  FUN_100aecc88(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100aee92c | FUN_100aee92c */

void FUN_100aee92c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c95620;
  _swift_getKeyPath(&DAT_100c95620);
  puVar2 = &DAT_100c95648;
  _swift_getKeyPath(&DAT_100c95648);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100aee994 | thunk_FUN_100aee92c */

void thunk_FUN_100aee92c(void)

{
  FUN_100aee92c();
  return;
}



/* Address: 0x100aee998 | FUN_100aee998 */

void FUN_100aee998(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c95620;
  _swift_getKeyPath(&DAT_100c95620);
  puVar3 = &DAT_100c95648;
  _swift_getKeyPath(&DAT_100c95648);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x100aeea08 | thunk_FUN_100aee998 */

void thunk_FUN_100aee998(void)

{
  FUN_100aee998();
  return;
}



/* Address: 0x100aeea0c | FUN_100aeea0c */

void FUN_100aeea0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aeea30 | FUN_100aeea30 */

void FUN_100aeea30(void)

{
  long unaff_x20;
  
  FUN_100aed0b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100aeea38 | FUN_100aeea38 */

undefined8 FUN_100aeea38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff8e50;
  FUN_1000037f0(&DAT_100ff8e50,&DAT_100c95600);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100aeea88 | FUN_100aeea88 */

void FUN_100aeea88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ff8e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff8e50;
  FUN_100005c24(&DAT_100ff8e50,&DAT_100c95600);
  puVar2 = &DAT_100ff8e78;
  FUN_100016eac(&DAT_100ff8e78,&DAT_100ff8e80,&DAT_100c95670,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ff8e70 = puVar3;
  return;
}



/* Address: 0x100aeeb20 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100aeeb24 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100aeeb28 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100aeeb2c | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100aeeb30 | FUN_100aeeb30 */

void FUN_100aeeb30(void)

{
  FUN_100aee66c();
  return;
}



/* Address: 0x100aeeb38 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x100aeeb3c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100aeeb40 | FUN_100aeeb40 */

void FUN_100aeeb40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ff8ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff8eb0;
  FUN_100005c24(&DAT_100ff8eb0,&DAT_100c95708);
  puVar2 = &DAT_100ff8ed0;
  FUN_100016eac(&DAT_100ff8ed0,&DAT_100ff8c10,&DAT_100c950d0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100ff8ed8;
  FUN_100016eac(&DAT_100ff8ed8,&DAT_100ff8ec0,&DAT_100c95720,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ff8ec8 = puVar4;
  return;
}



/* Address: 0x100aeebf8 | thunk_FUN_100aeefc4 */

void thunk_FUN_100aeefc4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,uStack_60);
  cVar3 = *(char *)(unaff_x20 +
                   _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::configuration);
  puVar5 = &DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x20) = 0x72756769666e6f63;
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  bVar4 = cVar3 != '\x01';
  uVar1 = 0x72616c75676572;
  if (bVar4) {
    uVar1 = 0x696472616f626e6f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4) {
    puVar2 = (undefined1 *)0xea0000000000676e;
  }
  *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar5 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar5 + 0x28) = 0xed00006e6f697461;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined1 **)(puVar5 + 0x38) = puVar2;
  puVar6 = puVar5;
  FUN_100aec864();
  _swift_setDeallocating(puVar5);
  FUN_100af01b8(puVar5 + 0x20);
  (**(code **)(lStack_58 + 0x18))(0xd000000000000022,0x8000000100d97690,puVar6,uStack_60,lStack_58);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100004594(auStack_78);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion
              ))(1);
  return;
}


