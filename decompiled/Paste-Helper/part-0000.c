/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100001410 | entry */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 entry(void)

{
  __int32 _Var1;
  ID IVar2;
  UnsafeMutablePointer<static_Swift_CommandLine_unsafeArgv_getter_:_Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>>
  UVar3;
  
  DAT_10000c9d8 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  IVar2 = 0;
  FUN_100002278();
  _objc_allocWithZone();
  DAT_10000c9e0 = objc_stub::init(IVar2);
  IVar2 = objc_stub::setDelegate_(DAT_10000c9d8,DAT_10000c9e0);
  _Var1 = Swift::CommandLine::get_argc((CommandLine)(__int8)IVar2);
  UVar3 = Swift::CommandLine::_get_unsafeArgv((CommandLine)(__int8)_Var1);
  AppKit::_NSApplicationMain
            (_Var1,(UnsafeMutablePointer<AppKit_NSApplicationMain(Swift_Int32,Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>)__>_Swift_Int32>
                    )UVar3.unknown);
  return 0;
}



/* Address: 0x100001488 | FUN_100001488 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100001488(void)

{
  uint uVar1;
  URL UVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ID IVar8;
  URL UVar9;
  char *pcVar10;
  undefined *puVar11;
  NSString *pNVar12;
  Logger LVar13;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  code *pcVar15;
  Logger LVar16;
  undefined4 uVar17;
  long lVar18;
  String SVar19;
  undefined auStack_90 [4];
  undefined4 local_8c;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar2.unknown + -8);
  UVar9 = UVar2;
  (*(code *)PTR____chkstk_darwin_1000080d0)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  LVar16.unknown = puVar11 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  lVar18 = (long)LVar16.unknown - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  local_80 = _TtC6Helper17HelperAppDelegate::logger;
  pOVar3 = os::Logger::get_logObject((Logger)UVar9.unknown);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar5 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  local_88 = puVar11;
  local_78 = lVar18;
  if ((int)pOVar5 != 0) {
    puVar6 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar7 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar6 = 0x8200102;
    local_68 = uVar7;
    IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    UVar9.unknown = (undefined *)NSBundle::bundleURL(IVar8);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
    FUN_1000054a4(&DAT_10000c850,PTR_typeMetadataAccessor_100008048,
                  PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100008058);
    SVar19 = Swift::CustomStringConvertible::get_description();
    pcVar10 = SVar19.str;
    (**(code **)(lVar14 + 8))(lVar18 - extraout_x12_01,UVar2.unknown);
    FUN_1000045d0(pcVar10,SVar19.bridgeObject,&local_68);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    *(char **)(puVar6 + 1) = pcVar10;
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Paste Helper started at %s",puVar6,0xc);
    FUN_100004eb0(uVar7);
    _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
    lVar18 = local_78;
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  FUN_1000019f4(lVar18,0);
  puVar11 = &_OBJC_CLASS___NSUserDefaults;
  _objc_allocWithZone();
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = objc_stub::initWithSuiteName_((ID)puVar11,pNVar12);
  if (IVar8 == 0) {
    uVar17 = 0;
  }
  else {
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar8 = objc_stub::boolForKey_(IVar8,pNVar12);
    uVar17 = (undefined4)IVar8;
  }
  uVar1 = 0;
  FUN_100004c34();
  pcVar15 = *(code **)(lVar14 + 0x10);
  (*pcVar15)(LVar16.unknown,lVar18,UVar2.unknown);
  LVar13.unknown = local_88;
  (*pcVar15)(local_88,LVar16.unknown,UVar2.unknown);
  pcVar15 = *(code **)(lVar14 + 8);
  (*pcVar15)(LVar16.unknown,UVar2.unknown);
  pOVar3 = os::Logger::get_logObject(LVar16);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar5 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  if ((int)pOVar5 == 0) {
    (*pcVar15)(LVar13.unknown,UVar2.unknown);
  }
  else {
    puVar6 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar7 = 0x20;
    local_8c = uVar17;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar6 = 0x8200102;
    local_68 = uVar7;
    FUN_1000054a4(&DAT_10000c850,PTR_typeMetadataAccessor_100008048,
                  PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100008058);
    SVar19 = Swift::CustomStringConvertible::get_description();
    pcVar10 = SVar19.str;
    FUN_1000045d0(pcVar10,SVar19.bridgeObject,&local_68);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    uVar17 = local_8c;
    *(char **)(puVar6 + 1) = pcVar10;
    (*pcVar15)(LVar13.unknown,UVar2.unknown);
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Paste located at: %s",puVar6,0xc);
    FUN_100004eb0(uVar7);
    _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
    LVar13.unknown = (undefined *)0x0;
  }
  pOVar3 = os::Logger::get_logObject(LVar13);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar5 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  if ((int)pOVar5 != 0) {
    puVar6 = (undefined4 *)0x8;
    _swift_slowAlloc(8,0xffffffffffffffff);
    *puVar6 = 0x4000100;
    puVar6[1] = uVar17;
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Paste is marked as running: %{bool}d",
                  puVar6,8);
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  pOVar3 = os::Logger::get_logObject((Logger)0x0);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar5 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  if ((int)pOVar5 != 0) {
    puVar6 = (undefined4 *)0x8;
    _swift_slowAlloc(8,0xffffffffffffffff);
    *puVar6 = 0x4000100;
    puVar6[1] = uVar1 & 1;
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Paste is running: %{bool}d",puVar6,8);
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  FUN_100001db0(0);
  (*pcVar15)(local_78,UVar2.unknown);
  return;
}



/* Address: 0x1000019f4 | FUN_1000019f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000019f4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  ID IVar4;
  URL UVar5;
  NSString *pNVar6;
  undefined1 *puVar7;
  _StringGuts _Var8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar11;
  URL UVar12;
  long lVar13;
  code *pcVar14;
  undefined1 *puVar15;
  URL UVar16;
  URL UVar17;
  URL UVar18;
  String SVar19;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_10000c8d8;
  local_68 = param_1;
  FUN_100004f0c(&DAT_10000c8d8,&DAT_1000060e0);
  (*(code *)PTR____chkstk_darwin_1000080d0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  local_70 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  lVar10 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_78 = lVar10;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_1000080d0)(*(undefined8 *)(lVar13 + 0x40));
  UVar12.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  UVar18.unknown = UVar12.unknown + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  UVar17.unknown = UVar18.unknown + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  UVar16.unknown = UVar17.unknown + -extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_1000080d0)();
  puVar15 = UVar16.unknown + -extraout_x12_03;
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar5.unknown = (undefined *)NSBundle::bundleURL(IVar4);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  Foundation::URL::deletingLastPathComponent((URL)0x0);
  pcVar14 = *(code **)(lVar13 + 8);
  (*pcVar14)(UVar12.unknown,UVar3.unknown);
  Foundation::URL::deletingLastPathComponent(UVar12);
  (*pcVar14)(UVar18.unknown,UVar3.unknown);
  Foundation::URL::deletingLastPathComponent(UVar18);
  (*pcVar14)(UVar17.unknown,UVar3.unknown);
  Foundation::URL::deletingLastPathComponent(UVar17);
  (*pcVar14)(UVar16.unknown,UVar3.unknown);
  SVar19 = Foundation::URL::get_lastPathComponent(UVar16);
  _Var8.unknown = SVar19.bridgeObject;
  if ((SVar19.str == (undefined *)0x70612e6574736150) &&
     (_Var8.unknown == (undefined *)0xe900000000000070)) {
    _swift_bridgeObjectRelease(0xe900000000000070);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar19.str,_Var8,(_StringComparisonResult)0x50);
    _swift_bridgeObjectRelease(_Var8.unknown);
    if (!bVar1) {
      IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      UVar5.unknown = (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_(IVar4,pNVar6)
      ;
      lVar10 = local_78;
      if (UVar5.unknown != (undefined *)0x0) {
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
      }
      (**(code **)(lVar13 + 0x38))(lVar10,UVar5.unknown == (undefined *)0x0,1,UVar3.unknown);
      puVar9 = local_70;
      FUN_1000054e4(lVar10,local_70);
      pcVar11 = *(code **)(lVar13 + 0x30);
      puVar7 = puVar9;
      (*pcVar11)(puVar9,1,UVar3.unknown);
      if ((int)puVar7 == 1) {
        Foundation::URL::_init();
        (*pcVar14)(puVar15,UVar3.unknown);
        puVar15 = puVar9;
        (*pcVar11)(puVar9,1,UVar3.unknown);
        if ((int)puVar15 == 1) {
          return;
        }
        FUN_100005534(puVar9,&DAT_10000c8d8,&DAT_1000060e0);
        return;
      }
      (*pcVar14)(puVar15,UVar3.unknown);
      pcVar14 = *(code **)(lVar13 + 0x20);
      goto LAB_100001c38;
    }
  }
  pcVar14 = *(code **)(lVar13 + 0x20);
  puVar9 = puVar15;
LAB_100001c38:
  (*pcVar14)(local_68,puVar9,UVar3.unknown);
  return;
}



/* Address: 0x100001db0 | FUN_100001db0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100001db0(void)

{
  undefined *puVar1;
  Logger LVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  undefined2 *puVar6;
  NSKeyValueObservingOptions for;
  undefined *puVar7;
  AnyCancellable *this;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_10000c890;
  FUN_100004f0c(&DAT_10000c890,&DAT_100006008);
  lVar8 = *(long *)(puVar1 + -8);
  LVar2.unknown = puVar1;
  (*(code *)PTR____chkstk_darwin_1000080d0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pOVar3 = os::Logger::get_logObject(LVar2);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar5 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  if ((int)pOVar5 != 0) {
    puVar6 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar6 = 0;
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Starting to monitor running applications",
                  puVar6,2);
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  for.unknown = &DAT_100006028;
  _swift_getKeyPath();
  (extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::_publisher(for);
  _swift_release(for.unknown);
  puVar7 = &DAT_100008440;
  _swift_allocObject(&DAT_100008440,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  FUN_100004f98();
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar7);
  (**(code **)(lVar8 + 8))(auStack_70 + -extraout_x8,puVar1);
  lVar8 = _TtC6Helper17HelperAppDelegate::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC6Helper17HelperAppDelegate::cancellables,auStack_68,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar8));
  _swift_endAccess(auStack_68);
  _swift_release(this);
  return;
}



/* Address: 0x100001f84 | _TtC6Helper17HelperAppDelegate::applicationDidFinishLaunching: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Helper17HelperAppDelegate::applicationDidFinishLaunching_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Notification NVar2;
  MainActor *pMVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long extraout_x8;
  long lVar7;
  
  NVar2 = Foundation::Notification::typeMetadataAccessor();
  lVar7 = *(long *)(NVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_1000080d0)(*(undefined8 *)(lVar7 + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Helper/HelperAppDelegate.swift",0x1e,1,0x18,UVar5.unknown,puVar4);
  }
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  FUN_100001488(param_1);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar2.unknown);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000020b4 | _TtC6Helper17HelperAppDelegate::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Helper17HelperAppDelegate::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  String subsystem;
  String category;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Helper/HelperAppDelegate.swift",0x1e,1,0x10,UVar5.unknown,puVar4);
  }
  subsystem.bridgeObject = (void *)0x80000001000070f0;
  subsystem.str = (char *)0xd00000000000001c;
  category.bridgeObject = (void *)0xe700000000000000;
  category.str = (char *)0x6c6172656e6567;
  os::Logger::init(subsystem,category);
  *(undefined1 *)(param_1 + isLaunching) = 0;
  *(undefined8 *)(param_1 + retryCount) = 0;
  *(undefined **)(param_1 + cancellables) = PTR___swiftEmptySetSingleton_1000081c0;
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"init");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1000021f0 | FUN_1000021f0 */

void FUN_1000021f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100002224 | _TtC6Helper17HelperAppDelegate::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Helper17HelperAppDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  Logger LVar2;
  
  lVar1 = logger;
  LVar2 = os::Logger::typeMetadataAccessor();
  (**(code **)(*(long *)(LVar2.unknown + -8) + 8))(param_1 + lVar1,LVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x100002270 | FUN_100002270 */

void FUN_100002270(void)

{
  FUN_100002278(0);
  return;
}



/* Address: 0x100002278 | FUN_100002278 */

void FUN_100002278(undefined8 param_1)

{
  if (DAT_10000c838 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100006ed4);
  return;
}



/* Address: 0x1000022b0 | FUN_1000022b0 */

undefined1  [16] FUN_1000022b0(Logger param_1,ulong param_2)

{
  Logger LVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  LVar1 = os::Logger::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(LVar1.unknown + -8) + 0x40;
    puStack_38 = &DAT_100005fe8;
    local_30 = PTR___value_witness_table_for_Builtin_Int64_100008128 + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100008120 + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,4,&local_40,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = LVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100002340 | FUN_100002340 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100002340(ID *param_1,ID *param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::runningApplications(*param_2);
  FUN_100005424(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  *param_1 = IVar1;
  return 0;
}



/* Address: 0x10000239c | FUN_10000239c */

void FUN_10000239c(undefined8 param_1,MainActor *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  
  puVar1 = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  (*(code *)PTR____chkstk_darwin_1000080d0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_1000082e8;
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar1 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  puVar8 = puVar1;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Helper/HelperAppDelegate.swift",0x1e,1,0x2c,UVar4.unknown,puVar8);
  }
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar6.unknown);
  pMVar7 = param_2;
  _swift_retain();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar7);
  puVar8 = &DAT_100008468;
  _swift_allocObject(&DAT_100008468,0x28,7);
  *(MainActor **)(puVar8 + 0x10) = pMVar2;
  *(undefined **)(puVar8 + 0x18) = puVar1;
  *(MainActor **)(puVar8 + 0x20) = param_2;
  uVar9 = 0;
  FUN_100002a30(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100006060,puVar8);
  _swift_release(pMVar3);
  _swift_release(uVar9);
  return;
}



/* Address: 0x100002510 | FUN_100002510 */

void FUN_100002510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x38) = pMVar2;
  puVar3 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000025a0,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000025a0 | FUN_1000025a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000025a0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100002614();
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000100002610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100002614 | FUN_100002614 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100002614(void)

{
  long lVar1;
  uint uVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined2 *puVar5;
  OS_os_log *pOVar6;
  undefined *puVar7;
  NSString *pNVar8;
  ID IVar9;
  Logger LVar10;
  TaskPriority TVar11;
  MainActor *pMVar12;
  MainActor *this;
  MainActor *pMVar13;
  undefined *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  long extraout_x8;
  long unaff_x20;
  
  LVar10.unknown = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  (*(code *)PTR____chkstk_darwin_1000080d0)
            (*(long *)(*(long *)(LVar10.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pOVar3 = os::Logger::get_logObject(LVar10);
  pOVar4 = pOVar3;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar6 = pOVar3;
  _os_log_type_enabled(pOVar3,(uint)pOVar4 & 0xff);
  if ((int)pOVar6 != 0) {
    puVar5 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar5 = 0;
    __os_log_impl(0x100000000,pOVar3,(uint)pOVar4 & 0xff,"Checking if Paste needs to be launched..."
                  ,puVar5,2);
    _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  }
  lVar1 = _TtC6Helper17HelperAppDelegate::isLaunching;
  if ((*(byte *)(unaff_x20 + _TtC6Helper17HelperAppDelegate::isLaunching) & 1) == 0) {
    puVar7 = &_OBJC_CLASS___NSUserDefaults;
    _objc_allocWithZone();
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar9 = objc_stub::initWithSuiteName_((ID)puVar7,pNVar8);
    if (IVar9 != 0) {
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar9 = objc_stub::boolForKey_(IVar9,pNVar8);
      LVar10.unknown = (undefined *)0x0;
      if ((int)IVar9 != 0) {
        FUN_100004c34();
        pOVar6 = os::Logger::get_logObject(LVar10);
        pOVar4 = pOVar6;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        uVar2 = (uint)pOVar4;
        pOVar4 = pOVar6;
        _os_log_type_enabled(pOVar6,uVar2 & 0xff);
        if (((ulong)LVar10.unknown & 1) == 0) {
          if ((int)pOVar4 != 0) {
            puVar5 = (undefined2 *)0x2;
            _swift_slowAlloc(2,0xffffffffffffffff);
            *puVar5 = 0;
            __os_log_impl(0x100000000,pOVar6,uVar2 & 0xff,
                          s_Paste_not_running_will_launch_in_1000072c0,puVar5,2);
            _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
          }
          *(undefined1 *)(unaff_x20 + lVar1) = 1;
          TVar11 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))
                    (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar11.unknown);
          pMVar12 = (MainActor *)&DAT_100008440;
          _swift_allocObject(&DAT_100008440,0x18,7);
          _swift_unknownObjectWeakInit(pMVar12 + 0x10);
          this = Swift::MainActor::typeMetadataAccessor();
          puVar14 = PTR_typeMetadataAccessor_1000082e8;
          pMVar13 = pMVar12;
          _swift_retain();
          pMVar13 = Swift::MainActor::get_shared(this,pMVar13);
          puVar7 = &DAT_10000c848;
          FUN_1000054a4(&DAT_10000c848,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
          puVar14 = &DAT_1000084e0;
          _swift_allocObject(&DAT_1000084e0,0x28,7);
          *(MainActor **)(puVar14 + 0x10) = pMVar13;
          *(undefined **)(puVar14 + 0x18) = puVar7;
          *(MainActor **)(puVar14 + 0x20) = pMVar12;
          _swift_release(pMVar12);
          uVar15 = 0;
          FUN_100002cd0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100006090,puVar14);
          _swift_release();
          return uVar15;
        }
        if ((int)pOVar4 == 0) {
          return 0;
        }
        puVar5 = (undefined2 *)0x2;
        _swift_slowAlloc(2,0xffffffffffffffff);
        *puVar5 = 0;
        __os_log_impl(0x100000000,pOVar6,uVar2 & 0xff,"Paste is already running",puVar5,2);
        _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
        return 0;
      }
    }
    pOVar6 = os::Logger::get_logObject((Logger)0x0);
    pOVar4 = pOVar6;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    uVar2 = (uint)pOVar4;
    pOVar4 = pOVar6;
    _os_log_type_enabled(pOVar6,uVar2 & 0xff);
    if ((int)pOVar4 == 0) {
      return 0;
    }
    puVar5 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar5 = 0;
    pcVar16 = "Paste is not marked as running";
  }
  else {
    pOVar6 = os::Logger::get_logObject((Logger)0x0);
    pOVar4 = pOVar6;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    uVar2 = (uint)pOVar4;
    pOVar4 = pOVar6;
    _os_log_type_enabled(pOVar6,uVar2 & 0xff);
    if ((int)pOVar4 == 0) {
      return 0;
    }
    puVar5 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar5 = 0;
    pcVar16 = "Launch already in progress";
  }
  __os_log_impl(0x100000000,pOVar6,uVar2 & 0xff,pcVar16,puVar5,2);
  _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  return 0;
}



/* Address: 0x100002a30 | FUN_100002a30 */

void FUN_100002a30(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  (*(code *)PTR____chkstk_darwin_1000080d0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_1000050a8(param_3,puVar10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005534(puVar10,&DAT_10000c8a0,&DAT_100006050);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005534(param_3,&DAT_10000c8a0,&DAT_100006050);
    puVar2 = &DAT_100008490;
    _swift_allocObject(&DAT_100008490,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_10000c8a8;
    FUN_100004f0c(&DAT_10000c8a8,&DAT_100006078);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100006070,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_1000084b8;
    _swift_allocObject(&DAT_1000084b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_10000c8a8;
    FUN_100004f0c(&DAT_10000c8a8,&DAT_100006078);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100006080,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_100005534(param_3,&DAT_10000c8a0,&DAT_100006050);
  }
  return;
}



/* Address: 0x100002cd0 | FUN_100002cd0 */

void FUN_100002cd0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  (*(code *)PTR____chkstk_darwin_1000080d0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1000050a8(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005534(puVar9,&DAT_10000c8a0,&DAT_100006050);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005534(param_3,&DAT_10000c8a0,&DAT_100006050);
    puVar2 = &DAT_100008508;
    _swift_allocObject(&DAT_100008508,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____1000081b0 + 8,&DAT_1000060a0,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100008530;
    _swift_allocObject(&DAT_100008530,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____1000081b0 + 8,&DAT_1000060a8,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005534(param_3,&DAT_10000c8a0,&DAT_100006050);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x100002f5c | FUN_100002f5c */

void FUN_100002f5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  Logger LVar4;
  ulong uVar5;
  ContinuousClock CVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  puVar2 = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  LVar4 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = LVar4.unknown;
  lVar9 = *(long *)(LVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  CVar6 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = CVar6.unknown;
  lVar9 = *(long *)(CVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  *(MainActor **)(unaff_x22 + 0x70) = pMVar7;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar7;
  puVar2 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  UVar8 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x88) = UVar8.unknown;
  *(undefined **)(unaff_x22 + 0x90) = puVar2;
  _swift_task_switch(FUN_10000307c,UVar8.unknown,puVar2);
  return;
}



/* Address: 0x10000307c | FUN_10000307c */

void FUN_10000307c(void)

{
  long *plVar1;
  long unaff_x22;
  
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100003100;
  FUN_10000434c(3000000000000000000,0,0,0,1);
  return;
}



/* Address: 0x100003100 | FUN_100003100 */

void FUN_100003100(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x98));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x60) + 8))
              (*(undefined8 *)(lVar4 + 0x68),*(undefined8 *)(lVar4 + 0x58));
    uVar2 = *(undefined8 *)(lVar4 + 0x88);
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    pcVar1 = FUN_100003170;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x88);
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    pcVar1 = FUN_100003314;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100003170 | FUN_100003170 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003170(void)

{
  ulong uVar1;
  ulong uVar2;
  Logger LVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  OS_os_log *pOVar6;
  undefined2 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  uVar1 = lVar9 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  if (uVar1 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  }
  else {
    uVar2 = uVar1;
    FUN_100004c34();
    if ((uVar2 & 1) == 0) {
      plVar8 = (long *)0x150;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1000034c8;
      FUN_100003758();
      return;
    }
    lVar9 = *(long *)(unaff_x22 + 0x40);
    LVar3.unknown = *(undefined **)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar9 + 0x10))(LVar3.unknown,uVar1 + _TtC6Helper17HelperAppDelegate::logger,uVar10)
    ;
    pOVar4 = os::Logger::get_logObject(LVar3);
    pOVar5 = pOVar4;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    pOVar6 = pOVar4;
    _os_log_type_enabled(pOVar4,(uint)pOVar5 & 0xff);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    if ((int)pOVar6 != 0) {
      puVar7 = (undefined2 *)0x2;
      _swift_slowAlloc(2,0xffffffffffffffff);
      *puVar7 = 0;
      __os_log_impl(0x100000000,pOVar4,(uint)pOVar5 & 0xff,"Paste is already running",puVar7,2);
      _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar9 + 8))(uVar10,uVar11);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001000032d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100003314 | FUN_100003314 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003314(void)

{
  ulong uVar1;
  ulong uVar2;
  Logger LVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  OS_os_log *pOVar6;
  undefined2 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
  lVar9 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  uVar1 = lVar9 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  if (uVar1 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  }
  else {
    uVar2 = uVar1;
    FUN_100004c34();
    if ((uVar2 & 1) == 0) {
      plVar8 = (long *)0x150;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1000034c8;
      FUN_100003758();
      return;
    }
    lVar9 = *(long *)(unaff_x22 + 0x40);
    LVar3.unknown = *(undefined **)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
    (**(code **)(lVar9 + 0x10))(LVar3.unknown,uVar1 + _TtC6Helper17HelperAppDelegate::logger,uVar10)
    ;
    pOVar4 = os::Logger::get_logObject(LVar3);
    pOVar5 = pOVar4;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    pOVar6 = pOVar4;
    _os_log_type_enabled(pOVar4,(uint)pOVar5 & 0xff);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    if ((int)pOVar6 != 0) {
      puVar7 = (undefined2 *)0x2;
      _swift_slowAlloc(2,0xffffffffffffffff);
      *puVar7 = 0;
      __os_log_impl(0x100000000,pOVar4,(uint)pOVar5 & 0xff,"Paste is already running",puVar7,2);
      _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar9 + 8))(uVar10,uVar11);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100003484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000034c8 | FUN_1000034c8 */

void FUN_1000034c8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xb0) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa8));
  _swift_task_switch(FUN_100003514,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
  return;
}



/* Address: 0x100003514 | FUN_100003514 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003514(void)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  OS_os_log *pOVar6;
  undefined4 *puVar7;
  TaskPriority TVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  Logger LVar14;
  MainActor *this;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0xb0);
  lVar13 = *(long *)(unaff_x22 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  if (cVar2 == '\x01') {
    *(undefined8 *)(lVar13 + _TtC6Helper17HelperAppDelegate::retryCount) = 0;
  }
  else {
    lVar1 = *(long *)(lVar13 + _TtC6Helper17HelperAppDelegate::retryCount) + 1;
    if (SCARRY8(*(long *)(lVar13 + _TtC6Helper17HelperAppDelegate::retryCount),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100003754);
      (*pcVar3)();
    }
    *(long *)(lVar13 + _TtC6Helper17HelperAppDelegate::retryCount) = lVar1;
    lVar13 = lVar1 * 10;
    if (SUB168(SEXT816(lVar1) * SEXT816(10),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100003758);
      (*pcVar3)();
    }
    LVar14.unknown = *(undefined **)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x10))
              (LVar14.unknown,*(long *)(unaff_x22 + 0xa0) + _TtC6Helper17HelperAppDelegate::logger,
               *(undefined8 *)(unaff_x22 + 0x38));
    pOVar4 = os::Logger::get_logObject(LVar14);
    pOVar5 = pOVar4;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    pOVar6 = pOVar4;
    _os_log_type_enabled(pOVar4,(uint)pOVar5 & 0xff);
    if ((int)pOVar6 != 0) {
      puVar7 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      *puVar7 = 0x8000100;
      *(long *)(puVar7 + 1) = lVar13;
      __os_log_impl(0x100000000,pOVar4,(uint)pOVar5 & 0xff,"Retry in %ld seconds...",puVar7,0xc);
      _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    this = *(MainActor **)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
              (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38));
    TVar8 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(uVar12,1,1,TVar8.unknown);
    pMVar9 = (MainActor *)&DAT_100008440;
    _swift_allocObject(&DAT_100008440,0x18,7);
    _swift_unknownObjectWeakInit(pMVar9 + 0x10,uVar15);
    pMVar10 = pMVar9;
    _swift_retain();
    pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
    puVar11 = &DAT_100008558;
    _swift_allocObject(&DAT_100008558,0x30,7);
    *(MainActor **)(puVar11 + 0x10) = pMVar10;
    *(undefined8 *)(puVar11 + 0x18) = uVar16;
    *(long *)(puVar11 + 0x20) = lVar13;
    *(MainActor **)(puVar11 + 0x28) = pMVar9;
    _swift_release(pMVar9);
    FUN_100002cd0(0,0,uVar12,&DAT_1000060c8,puVar11);
    _swift_release();
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0xa0) + _TtC6Helper17HelperAppDelegate::isLaunching) = 0;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010000374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100003758 | FUN_100003758 */

void FUN_100003758(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  URL UVar4;
  ulong uVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  puVar2 = &DAT_10000c8b0;
  FUN_100004f0c(&DAT_10000c8b0,&DAT_1000060d0);
  *(undefined **)(unaff_x22 + 0xc0) = puVar2;
  lVar8 = *(long *)(puVar2 + -8);
  *(long *)(unaff_x22 + 200) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = UVar4.unknown;
  lVar8 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x100) = pMVar6;
  puVar2 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x108) = UVar7.unknown;
  *(undefined **)(unaff_x22 + 0x110) = puVar2;
  _swift_task_switch(FUN_10000385c,UVar7.unknown,puVar2);
  return;
}



/* Address: 0x10000385c | FUN_10000385c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10000385c(void)

{
  long lVar1;
  undefined *puVar2;
  NSString *pNVar3;
  ID IVar4;
  Logger LVar5;
  OS_os_log *pOVar6;
  OS_os_log *pOVar7;
  OS_os_log *pOVar8;
  undefined4 *puVar9;
  URL UVar10;
  char *pcVar11;
  NSURL *pNVar12;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  String SVar18;
  undefined *local_60;
  
  puVar2 = &_OBJC_CLASS___NSUserDefaults;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = objc_stub::initWithSuiteName_((ID)puVar2,pNVar3);
  if (IVar4 != 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setBool_forKey_(IVar4,1,pNVar3);
  }
  LVar5.unknown = *(undefined **)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar13 = *(long *)(unaff_x22 + 0xe0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_1000019f4(uVar14,0);
  puVar2 = &_OBJC_CLASS___NSWorkspaceOpenConfiguration;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x22 + 0x118) = IVar4;
  objc_stub::setActivates_(IVar4,0);
  *(undefined8 *)(unaff_x22 + 0x120) = _TtC6Helper17HelperAppDelegate::logger;
  pcVar17 = *(code **)(lVar13 + 0x10);
  (*pcVar17)(LVar5.unknown,uVar14,uVar15);
  (*pcVar17)(uVar16,LVar5.unknown,uVar15);
  pcVar17 = *(code **)(lVar13 + 8);
  *(code **)(unaff_x22 + 0x128) = pcVar17;
  (*pcVar17)(LVar5.unknown,uVar15);
  pOVar6 = os::Logger::get_logObject(LVar5);
  pOVar7 = pOVar6;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar8 = pOVar6;
  _os_log_type_enabled(pOVar6,(uint)pOVar7 & 0xff);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)pOVar8 == 0) {
    (*pcVar17)(uVar14,uVar16);
  }
  else {
    puVar9 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    UVar10.unknown = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar9 = 0x8200102;
    local_60 = UVar10.unknown;
    SVar18 = Foundation::URL::get_path(UVar10);
    pcVar11 = SVar18.str;
    FUN_1000045d0(pcVar11,SVar18.bridgeObject,&local_60);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    *(char **)(puVar9 + 1) = pcVar11;
    (*pcVar17)(uVar14,uVar16);
    __os_log_impl(0x100000000,pOVar6,(uint)pOVar7 & 0xff,"Launching Paste at %s",puVar9,0xc);
    FUN_100004eb0(UVar10.unknown);
    _swift_slowDealloc(UVar10.unknown,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
  }
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  UVar10.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
  *(undefined **)(unaff_x22 + 0x130) = UVar10.unknown;
  pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar10);
  *(NSURL **)(unaff_x22 + 0x138) = pNVar12;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100003bcc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar16;
  lVar13 = unaff_x22 + 0x70;
  FUN_1000053e8(lVar13);
  FUN_100005424(0);
  FUN_100004f0c(&DAT_10000c8c0,&DAT_1000060d8);
  SVar18.bridgeObject = (void *)0x8000000100007130;
  SVar18.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,SVar18);
  (**(code **)(lVar1 + 0x20))(lVar13,uVar14,uVar16);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_1000080c8;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100004230;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100008570;
  NSWorkspace::openApplicationAtURL_configuration_completionHandler_
            ((ID)UVar10.unknown,pNVar12,IVar4);
  (**(code **)(lVar1 + 8))(lVar13,uVar16);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100003bcc | FUN_100003bcc */

void FUN_100003bcc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_100003c20;
  }
  else {
    pcVar1 = FUN_100003d58;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x108),*(undefined8 *)(lVar2 + 0x110));
  return;
}



/* Address: 0x100003c20 | FUN_100003c20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003c20(void)

{
  OS_os_log *pOVar1;
  OS_os_log *pOVar2;
  OS_os_log *pOVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  code *pcVar8;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  pOVar1 = os::Logger::get_logObject((Logger)0x0);
  pOVar2 = pOVar1;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar3 = pOVar1;
  _os_log_type_enabled(pOVar1,(uint)pOVar2 & 0xff);
  pcVar8 = *(code **)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)pOVar3 != 0) {
    puVar4 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar4 = 0;
    __os_log_impl(0x100000000,pOVar1,(uint)pOVar2 & 0xff,"Paste launched successfully.",puVar4,2);
    _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
  }
  (*pcVar8)(uVar5,uVar6);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100003d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(long *)(unaff_x22 + 0x140) == 0);
  return;
}



/* Address: 0x100003d58 | FUN_100003d58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100003d58(void)

{
  Logger LVar1;
  OS_os_log *pOVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  String SVar12;
  undefined8 local_68 [2];
  
  LVar1.unknown = *(undefined **)(unaff_x22 + 0x140);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_willThrow();
  _swift_errorRetain();
  pOVar2 = os::Logger::get_logObject(LVar1);
  pOVar3 = pOVar2;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  pOVar4 = pOVar2;
  _os_log_type_enabled(pOVar2,(uint)pOVar3 & 0xff);
  if (((ulong)pOVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
    pcVar9 = *(code **)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_errorRelease(uVar6);
    _swift_errorRelease(uVar6);
    (*pcVar9)(uVar8,uVar10);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
    pcVar9 = *(code **)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
    puVar5 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar6 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar5 = 0x8200102;
    local_68[0] = uVar6;
    _swift_getErrorValue(uVar11,unaff_x22 + 0xb0,unaff_x22 + 0x90);
    SVar12 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pcVar7 = SVar12.str;
    FUN_1000045d0(pcVar7,SVar12.bridgeObject,local_68);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    *(char **)(puVar5 + 1) = pcVar7;
    _swift_errorRelease(uVar11);
    __os_log_impl(0x100000000,pOVar2,(uint)pOVar3 & 0xff,"Failed to launch Paste: %s",puVar5,0xc);
    FUN_100004eb0(uVar6);
    _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    _swift_errorRelease(uVar11);
    (*pcVar9)(uVar8,uVar10);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100003f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(long *)(unaff_x22 + 0x140) == 0);
  return;
}



/* Address: 0x100003f68 | FUN_100003f68 */

void FUN_100003f68(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1000082e8;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar4;
  puVar5 = &DAT_10000c848;
  FUN_1000054a4(&DAT_10000c848,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x58) = UVar6.unknown;
  *(undefined **)(unaff_x22 + 0x60) = puVar5;
  _swift_task_switch(FUN_100004020,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x100004020 | FUN_100004020 */

void FUN_100004020(void)

{
  undefined1 auVar1 [16];
  long *plVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x28);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000040cc;
  FUN_10000434c(uVar3 * 1000000000000000000,
                ((long)uVar3 >> 0x3f & 0xf21f494c589c0000U) +
                SUB168(auVar1 * ZEXT816(1000000000000000000),8),0,0,1);
  return;
}



/* Address: 0x1000040cc | FUN_1000040cc */

void FUN_1000040cc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x40) + 8))
              (*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x38));
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_10000413c;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_1000041a8;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x10000413c | FUN_10000413c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000413c(void)

{
  long lVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  lVar1 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100002614();
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001000041a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000041a8 | FUN_1000041a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000041a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_100002614();
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010000422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100004230 | FUN_100004230 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100004230(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long local_38;
  
  FUN_100005480(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000042e8);
      (*pcVar1)();
    }
    puVar2 = &DAT_10000c8b0;
    local_38 = param_2;
    FUN_100004f0c(&DAT_10000c8b0,&DAT_1000060d0);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  else {
    puVar2 = &DAT_10000c8b0;
    local_38 = param_3;
    FUN_100004f0c(&DAT_10000c8b0,&DAT_1000060d0);
    Swift::CheckedContinuation::resume(&local_38,puVar2);
  }
  return;
}



/* Address: 0x1000042e8 | FUN_1000042e8 */

void FUN_1000042e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100004bf4;
                    /* WARNING: Could not recover jumptable at 0x000100004348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x10000434c | FUN_10000434c */

void FUN_10000434c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_1000043e8,0,0);
  return;
}



/* Address: 0x1000043e8 | FUN_1000043e8 */

void FUN_1000043e8(void)

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
  FUN_1000054a4(&DAT_10000c8c8,PTR_typeMetadataAccessor_100008318,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100008320);
  Swift::Clock::_get_now();
  FUN_1000054a4(&DAT_10000c8d0,PTR_typeMetadataAccessor_100008308,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100008310);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100008338 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000044f0;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1000044f0 | FUN_1000044f0 */

void FUN_1000044f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  pcVar1 = *(code **)(lVar5 + 0x60);
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  lVar4 = *unaff_x22;
  *(long *)(lVar5 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x68));
  (*pcVar1)(uVar2,uVar3);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100004594,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x58));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100004590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100004594 | FUN_100004594 */

void FUN_100004594(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000045cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000045d0 | FUN_1000045d0 */

undefined * FUN_1000045d0(undefined *param_1,undefined8 param_2,long *param_3)

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
  FUN_100004698(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100008158;
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
    FUN_100004ed0(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100004eb0(&local_60);
  return puVar1;
}



/* Address: 0x100004698 | FUN_100004698 */

void FUN_100004698(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000047a8);
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
  FUN_1000047a8(param_5.unknown);
  *param_1 = param_6;
  return;
}



/* Address: 0x1000047a8 | FUN_1000047a8 */

void FUN_1000047a8(void)

{
  FUN_10000480c();
  FUN_100004f0c(&DAT_10000c888,&DAT_100006000);
  _swift_initStaticObject();
  FUN_100004940();
  return;
}



/* Address: 0x10000480c | FUN_10000480c */

undefined * FUN_10000480c(UTF8View param_1,undefined *param_2)

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
    _Var4.unknown = PTR___swiftEmptyArrayStorage_1000081b8;
    if (puVar2 != (undefined *)0x0) {
      FUN_100004a30(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_10000493c;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_10000493c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100004940);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_1000048a8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000048ac);
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
    _Var4.unknown = PTR___swiftEmptyArrayStorage_1000081b8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_100004a30(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_10000493c;
      if (into.unknown != _Var3.unknown) goto LAB_1000048a8;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x100004940 | FUN_100004940 */

void FUN_100004940(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100004a24);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100004aa0();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100004a28);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100004a2c);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100004a30);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100004a30 | FUN_100004a30 */

undefined * FUN_100004a30(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_1000081b8;
  if (param_2 != 0) {
    puVar1 = &DAT_10000c888;
    FUN_100004f0c(&DAT_10000c888,&DAT_100006000);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x100004aa0 | FUN_100004aa0 */

undefined * FUN_100004aa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100004b90);
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
  puVar3 = PTR___swiftEmptyArrayStorage_1000081b8;
  if (uVar5 != 0) {
    puVar3 = &DAT_10000c888;
    FUN_100004f0c(&DAT_10000c888,&DAT_100006000);
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



/* Address: 0x100004b90 | FUN_100004b90 */

void FUN_100004b90(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100004bf4;
                    /* WARNING: Could not recover jumptable at 0x000100004bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x100004bf4 | FUN_100004bf4 */

void FUN_100004bf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100004c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100004c34 | FUN_100004c34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100004c34(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  ulong self;
  MainActor *pMVar7;
  undefined *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  _StringGuts _Var11;
  long lVar12;
  ulong uVar13;
  String SVar14;
  
  IVar5 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  _Var6.unknown = (undefined *)NSWorkspace::runningApplications(IVar5);
  FUN_100005424(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar12 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar12 != 0) {
    uVar13 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100004e6c);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var6.unknown + uVar13 * 8 + 0x20);
      }
      else {
        self = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,_Var6);
      }
      lVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100004e68);
        (*pcVar3)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      puVar8 = &DAT_10000c848;
      FUN_1000054a4(&DAT_10000c848,PTR_typeMetadataAccessor_1000082e8,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_1000082f0);
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Helper/HelperAppDelegate.swift",0x1e,1,0x79,UVar9.unknown,puVar8);
      }
      IVar5 = objc_stub::bundleIdentifier(self);
      if (IVar5 == 0) {
        _swift_release(pMVar7);
      }
      else {
        SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var11.unknown = SVar14.bridgeObject;
        if ((SVar14.str == (undefined *)0xd000000000000011) &&
           (_Var11.unknown == (undefined *)0x8000000100007180)) {
          _swift_bridgeObjectRelease(_Var6.unknown);
          _swift_release(pMVar7);
          _swift_bridgeObjectRelease(0x8000000100007180);
          return 1;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar14.str,_Var11,(_StringComparisonResult)0x11);
        _swift_release(pMVar7);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (bVar4) {
          _swift_bridgeObjectRelease(_Var6.unknown);
          return 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (lVar1 != lVar12);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  return 0;
}



/* Address: 0x100004eb0 | FUN_100004eb0 */

void FUN_100004eb0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100004ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x100004ed0 | FUN_100004ed0 */

long FUN_100004ed0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Address: 0x100004f0c | FUN_100004f0c */

void FUN_100004f0c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext2(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100004f5c | FUN_100004f5c */

char * FUN_100004f5c(void)

{
  return "runningApplications";
}



/* Address: 0x100004f68 | thunk_FUN_100002340 */

void thunk_FUN_100002340(void)

{
  FUN_100002340();
  return;
}



/* Address: 0x100004f6c | FUN_100004f6c */

void FUN_100004f6c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100004f90 | FUN_100004f90 */

void FUN_100004f90(void)

{
  FUN_10000239c();
  return;
}



/* Address: 0x100004f98 | FUN_100004f98 */

void FUN_100004f98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_10000c898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10000c890;
  FUN_100004fe8(&DAT_10000c890,&DAT_100006008);
  puVar2 = 
  PTR__Foundation__KeyValueObservingPublisher<undefined,undefined>_>Combine__Publisher_100008080;
  _swift_getWitnessTable
            (PTR__Foundation__KeyValueObservingPublisher<undefined,undefined>_>Combine__Publisher_100008080
             ,puVar1);
  DAT_10000c898 = puVar2;
  return;
}



/* Address: 0x100004fe8 | FUN_100004fe8 */

ulong FUN_100004fe8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState2
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Address: 0x10000503c | FUN_10000503c */

void FUN_10000503c(undefined8 param_1)

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
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1000051fc;
  FUN_100002510(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000050a8 | FUN_1000050a8 */

undefined8 FUN_1000050a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10000c8a0;
  FUN_100004f0c(&DAT_10000c8a0,&DAT_100006050);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000050f8 | FUN_1000050f8 */

void FUN_1000050f8(undefined8 param_1)

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
  plVar3[1] = (long)thunk_FUN_1000051fc;
  FUN_100004b90(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100005168 | FUN_100005168 */

void FUN_100005168(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


