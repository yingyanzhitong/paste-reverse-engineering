/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100092948 | _TtCC5Paste10MainWindow12ResizeHandle::resetCursorRects */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste10MainWindow12ResizeHandle::resetCursorRects(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.ResizeHandle.swift",0x23,1,0x3a,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"resetCursorRects");
  FUN_100092d8c();
  if (IVar6 == 0) {
    _swift_release(pMVar3);
  }
  else {
    objc_stub::bounds(param_1);
    objc_stub::addCursorRect_cursor_(param_1,IVar6);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x100092a44 | _TtCC5Paste10MainWindow12ResizeHandle::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste10MainWindow12ResizeHandle::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.ResizeHandle.swift",0x23,1,5,UVar5.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + onLiveResize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + onEndResize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + onResetSize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + initialWindowSize);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(param_1 + initialLocation);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(param_1 + sizeResetClickCount) = 2;
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar4);
  return IVar7;
}



/* Address: 0x100092b98 | FUN_100092b98 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100092b98(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onLiveResize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onEndResize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onResetSize);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialWindowSize);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialLocation);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::sizeResetClickCount) = 2;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithCoder:",param_1);
  return IVar2;
}



/* Address: 0x100092c6c | _TtCC5Paste10MainWindow12ResizeHandle::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste10MainWindow12ResizeHandle::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.ResizeHandle.swift",0x23,1,5,UVar3.unknown,pMVar1);
  }
  FUN_100092b98();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100092d18 | _TtCC5Paste10MainWindow12ResizeHandle::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste10MainWindow12ResizeHandle::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onLiveResize),((undefined8 *)(param_1 + onLiveResize))[1])
  ;
  FUN_100004550(*(undefined8 *)(param_1 + onEndResize),((undefined8 *)(param_1 + onEndResize))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onResetSize),((undefined8 *)(param_1 + onResetSize))[1]);
  return;
}



/* Address: 0x100092d6c | FUN_100092d6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100092d6c(void)

{
  return ZEXT816(0x100f924d8);
}



/* Address: 0x100092d8c | FUN_100092d8c */

/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100092d8c(void)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  String SVar4;
  Selector SVar5;
  
  FUN_1000037f0(&DAT_100fa8ac8,&DAT_100c26e00);
  _swift_initStaticObject();
  FUN_1000037f0(&DAT_100fa9400,&DAT_100c263c0);
  FUN_100092e94();
  SVar4 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                    ((String)(ZEXT816(0xe000000000000000) << 0x40));
  SVar5 = ObjectiveC::Selector::init(SVar4);
  IVar2 = 0;
  FUN_100092ee4(0,SVar5.eventsCapacity);
  _swift_getObjCClassFromMetadata();
  IVar3 = objc_stub::respondsToSelector_(IVar2,SVar5.events.unknown.unknown);
  if ((int)IVar3 == 0) {
    NSCursor::resizeUpDownCursor((ID)&_OBJC_CLASS___NSCursor);
  }
  else {
    IVar2 = objc_stub::performSelector_(IVar2,SVar5.events.unknown.unknown);
    if (IVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100092e94);
      (*pcVar1)();
    }
    _swift_unknownObjectRetain(IVar2);
    IVar3 = IVar2;
    _swift_dynamicCastObjCClass(IVar2,&_OBJC_CLASS___NSCursor);
    if (IVar3 == 0) {
      _swift_unknownObjectRelease(IVar2);
    }
  }
  return;
}



/* Address: 0x100092e94 | FUN_100092e94 */

void FUN_100092e94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100faaa00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9400;
  FUN_100005c24(&DAT_100fa9400,&DAT_100c263c0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100faaa00 = puVar2;
  return;
}



/* Address: 0x100092ee4 | FUN_100092ee4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100092ee4(void)

{
  undefined *puVar1;
  
  if (DAT_100faaa08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSCursor;
  _swift_getObjCClassMetadata();
  DAT_100faaa08 = puVar1;
  return;
}



/* Address: 0x100092f28 | FUN_100092f28 */

bool FUN_100092f28(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return false;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return false;
  }
  if ((undefined *)*param_1 != (undefined *)*param_2 ||
      (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    return bVar1;
  }
  return true;
}



/* Address: 0x100092f88 | FUN_100092f88 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100093424 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100092f88(void)

{
  undefined *puVar1;
  long lVar2;
  Publisher to;
  Publisher PVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Published PVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar10;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined auStack_1b0 [8];
  undefined *local_1a8;
  long local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  undefined *local_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  Published local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  Publisher local_e0;
  long local_d8;
  Publisher local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88 [3];
  long local_70 [2];
  
  puVar6 = &DAT_100fa7c08;
  FUN_1000037f0(&DAT_100fa7c08,&DAT_100c24b00);
  local_c8 = *(long *)(puVar6 + -8);
  local_c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  puVar7 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = &DAT_100faaaf8;
  local_e0.unknown = puVar7 + -extraout_x12;
  FUN_1000037f0(&DAT_100faaaf8,&DAT_100c28370);
  local_f0 = *(long *)(puVar6 + -8);
  local_f8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(puVar7 + -extraout_x12) - extraout_x8_00;
  puVar6 = &DAT_100faab00;
  local_108 = lVar9;
  FUN_1000037f0(&DAT_100faab00,&DAT_100c28378);
  local_d8 = *(long *)(puVar6 + -8);
  local_e8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  puVar6 = &DAT_100fa6670;
  local_100 = lVar9;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  local_110 = *(long *)(puVar6 + -8);
  local_118 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar9 - extraout_x8_02;
  puVar6 = &DAT_100faab08;
  local_128 = lVar9;
  FUN_1000037f0(&DAT_100faab08,&DAT_100c28388);
  local_a0 = *(long *)(puVar6 + -8);
  local_90 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar9 = lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_00;
  puVar6 = &DAT_100faab10;
  local_a8 = lVar9;
  FUN_1000037f0(&DAT_100faab10,&DAT_100c28390);
  local_1a0 = *(long *)(puVar6 + -8);
  local_1a8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar9 - extraout_x8_04;
  puVar6 = &DAT_100faab18;
  FUN_1000037f0(&DAT_100faab18,&DAT_100c28398);
  local_190 = *(long *)(puVar6 + -8);
  local_198 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar6 = &DAT_100faab20;
  FUN_1000037f0(&DAT_100faab20,&DAT_100c283a0);
  local_178 = *(long *)(puVar6 + -8);
  local_180 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = (lVar9 - extraout_x8_05) - extraout_x8_06;
  puVar6 = &DAT_100faab28;
  FUN_1000037f0(&DAT_100faab28,&DAT_100c283a8);
  local_160 = *(long *)(puVar6 + -8);
  local_170 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = lVar13 - extraout_x8_07;
  puVar6 = &DAT_100faab30;
  FUN_1000037f0(&DAT_100faab30,&DAT_100c283b0);
  local_158 = *(long *)(puVar6 + -8);
  local_168 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = lVar12 - extraout_x8_08;
  puVar6 = &DAT_100faab38;
  FUN_1000037f0(&DAT_100faab38,&DAT_100c283b8);
  local_148 = *(long *)(puVar6 + -8);
  local_150 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar14 - extraout_x8_09;
  puVar6 = &DAT_100faab40;
  local_188 = lVar10;
  FUN_1000037f0(&DAT_100faab40,&DAT_100c283c0);
  local_98 = *(long *)(puVar6 + -8);
  local_b0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar10 = lVar10 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_01;
  puVar6 = &DAT_100fa7c10;
  local_b8 = lVar10;
  FUN_1000037f0(&DAT_100fa7c10,&DAT_100c28360);
  lVar15 = *(long *)(puVar6 + -8);
  local_130.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC5Paste24NotificationBarViewModel::_notifications;
  lVar10 = lVar10 - extraout_x8_11;
  local_88[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar7 = &DAT_100faaa68;
  FUN_1000037f0(&DAT_100faaa68,&DAT_100c28320);
  local_138 = puVar7;
  Combine::Published::init(lVar10,puVar7,puVar7);
  (**(code **)(lVar15 + 0x20))(unaff_x20 + lVar2,lVar10,puVar6);
  lVar2 = _TtC5Paste24NotificationBarViewModel::syncManager;
  puVar6 = &DAT_100c283c8;
  _swift_getKeyPath();
  puVar7 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar6,puVar7);
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _TtC5Paste24NotificationBarViewModel::pauseManager;
  puVar6 = &DAT_100c28400;
  _swift_getKeyPath();
  puVar7 = &DAT_100fa6950;
  FUN_1000037f0(&DAT_100fa6950,&DAT_100c23208);
  _swift_allocObject();
  FUN_1000da6e0(puVar6,puVar7);
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC5Paste24NotificationBarViewModel::syncManager);
  _swift_retain(uVar11);
  FUN_1000da768(local_88);
  _swift_release(uVar11);
  puVar6 = local_88[0];
  FUN_1003b21c4(lVar9);
  _swift_release(puVar6);
  puVar6 = &DAT_100c28430;
  _swift_getKeyPath(&DAT_100c28430);
  FUN_100016eac(&DAT_100faab48,&DAT_100faab10,&DAT_100c28390,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar7 = local_1a8;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar6);
  (**(code **)(local_1a0 + 8))(lVar9,puVar7);
  FUN_100016eac(&DAT_100faab50,&DAT_100faab18,&DAT_100c28398,
                PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
               );
  puVar6 = local_198;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_190 + 8))(lVar9 - extraout_x8_05,puVar6);
  FUN_1000037f0(&DAT_100fa7ac8,&DAT_100c28460);
  puVar6 = 
  PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680;
  FUN_100016eac(&DAT_100faab58,&DAT_100faab20,&DAT_100c283a0,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar7 = local_180;
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(local_178 + 8))(lVar13,puVar7);
  puVar1 = PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698;
  FUN_100016eac(&DAT_100faab60,&DAT_100faab28,&DAT_100c283a8,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  FUN_100016eac(&DAT_100fa7ad0,&DAT_100fa7ac8,&DAT_100c28460,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  puVar7 = local_170;
  (extension_Combine)::Combine::Publisher::_switchToLatest();
  (**(code **)(local_160 + 8))(lVar12,puVar7);
  FUN_100016eac(&DAT_100faab68,&DAT_100faab30,&DAT_100c283b0,
                PTR_Combine__Combine__Publishers__SwitchToLatest<undefined,undefined>_>Combine__Publisher_100ea9670
               );
  puVar7 = local_168;
  lVar2 = local_188;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_158 + 8))(lVar14,puVar7);
  FUN_1000037f0(&DAT_100faab70,&DAT_100c28468);
  FUN_100016eac(&DAT_100faab78,&DAT_100faab38,&DAT_100c283b8,puVar6);
  lVar9 = local_b8;
  puVar6 = local_150;
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(local_148 + 8))(lVar2,puVar6);
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC5Paste24NotificationBarViewModel::pauseManager);
  _swift_retain(uVar11);
  FUN_1000da768(local_70);
  _swift_release(uVar11);
  _swift_beginAccess(local_70[0] + _TtC5Paste17PausePasteManager::_isPaused,local_88,0x21,0);
  PVar8.unknown = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  lVar2 = local_128;
  Combine::Published::_get_projectedValue(PVar8);
  _swift_endAccess(local_88);
  _swift_release(local_70[0]);
  puVar6 = &DAT_100eb37e0;
  _swift_allocObject(&DAT_100eb37e0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  FUN_100016eac(&DAT_100fa7848,&DAT_100fa6670,&DAT_100c28380,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  lVar10 = local_a8;
  puVar7 = local_118;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar6);
  (**(code **)(local_110 + 8))(lVar2,puVar7);
  puVar4 = local_b0;
  (**(code **)(local_98 + 0x10))(local_140,lVar9,local_b0);
  puVar5 = local_90;
  lVar2 = local_120;
  (**(code **)(local_a0 + 0x10))(local_120,lVar10,local_90);
  puVar6 = &DAT_100faab80;
  FUN_100016eac(&DAT_100faab80,&DAT_100faab40,&DAT_100c283c0,puVar1);
  puVar7 = &DAT_100faab88;
  FUN_100016eac(&DAT_100faab88,&DAT_100faab08,&DAT_100c28388,puVar1);
  lVar9 = local_108;
  Combine::Publishers::CombineLatest::init(local_108,puVar7,lVar2,puVar4,puVar5,puVar6,puVar7);
  FUN_100016eac(&DAT_100faab90,&DAT_100faaaf8,&DAT_100c28370,
                PTR_Combine__Combine__Publishers__CombineLatest<undefined,undefined>_>Combine__Publisher_100ea9608
               );
  puVar6 = local_f8;
  lVar10 = local_100;
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(local_f0 + 8))(lVar9,puVar6);
  lVar2 = _TtC5Paste24NotificationBarViewModel::_notifications;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24NotificationBarViewModel::_notifications,local_88,0x21,
                     0);
  to.unknown = local_e0.unknown;
  Combine::Published::_get_projectedValue(local_130);
  _swift_endAccess(local_88);
  FUN_100016eac(&DAT_100faab98,&DAT_100faab00,&DAT_100c28378,puVar1);
  puVar6 = local_e8;
  (extension_Combine)::Combine::Publisher::_assign(to);
  puVar7 = local_c0;
  lVar9 = local_c8;
  PVar3.unknown = local_d0.unknown;
  (**(code **)(local_c8 + 0x10))(local_d0.unknown,to.unknown,local_c0);
  _swift_beginAccess(unaff_x20 + lVar2,local_88,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar2),PVar3);
  _swift_endAccess(local_88);
  (**(code **)(lVar9 + 8))(to.unknown,puVar7);
  (**(code **)(local_d8 + 8))(lVar10,puVar6);
  (**(code **)(local_a0 + 8))(local_a8,local_90);
  (**(code **)(local_98 + 8))(local_b8,local_b0);
  return;
}



/* Address: 0x100093b2c | FUN_100093b2c */

void FUN_100093b2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10006313c(param_2,puVar3);
  puVar2 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
  FUN_1000629fc(puVar3);
  *(bool *)param_1 = (int)puVar2 == 2;
  return;
}



/* Address: 0x100093bbc | FUN_100093bbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100093dd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100093bbc(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  Stride SVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  SchedulerOptions SVar9;
  undefined8 uVar10;
  undefined *puVar11;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar12;
  Stride SVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long lVar17;
  long local_b0;
  MainActor *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined8 *local_78;
  ID local_70;
  char local_61;
  
  puVar3 = &DAT_100fa9d88;
  local_78 = param_1;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_b0 - extraout_x8;
  puVar3 = &DAT_100faaba0;
  FUN_1000037f0(&DAT_100faaba0,&DAT_100c28480);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar14 - extraout_x8_00;
  puVar3 = &DAT_100faaba8;
  FUN_1000037f0(&DAT_100faaba8,&DAT_100c28488);
  local_98 = *(long *)(puVar3 + -8);
  local_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_01;
  puVar3 = &DAT_100faabb0;
  FUN_1000037f0(&DAT_100faabb0,&DAT_100c28490);
  local_88 = *(long *)(puVar3 + -8);
  local_80 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar17 - extraout_x8_02;
  SVar4 = SchedulerTimeType::Stride::_typeMetadataAccessor();
  lVar16 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  cVar1 = *param_2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a8 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  SVar13.unknown = (undefined *)puVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/NotificationBarViewModel.swift";
    SVar13.unknown = &DAT_00000024;
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBarViewModel.swift",0x24,1,0x19,UVar7.unknown,puVar6);
  }
  if (cVar1 == '\0') {
    SchedulerTimeType::Stride::_seconds(1,SVar13);
  }
  else {
    SchedulerTimeType::Stride::_seconds(1.5,(Stride)pcVar8);
  }
  local_61 = cVar1;
  Combine::Just::init(lVar17,pcVar8,PTR___type_metadata_for_Swift_Bool_100eac570);
  local_b0 = lVar16;
  (**(code **)(lVar16 + 0x38))(lVar15,1,1,SVar4.unknown);
  local_70 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar9 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar9.unknown + -8) + 0x38))(lVar14,1,1,SVar9.unknown);
  uVar10 = 0;
  FUN_10007ed28(0);
  puVar3 = &DAT_100faabb8;
  FUN_100016eac(&DAT_100faabb8,&DAT_100faaba8,&DAT_100c28488,
                PTR_Combine__Combine__Just<undefined>_>Combine__Publisher_100ea9870);
  puVar11 = &DAT_100fa9da8;
  FUN_100003a00(&DAT_100fa9da8,FUN_10007ed28,
                PTR_Foundation____C__NSRunLoop_>Combine__Scheduler_100ea7ac8);
  puVar2 = local_90;
  lVar16 = local_a0;
  (extension_Combine)::Combine::Publisher::_delay
            (local_a0,puVar11,lVar15,&local_70,lVar14,local_90,uVar10,puVar3,puVar11);
  FUN_100005808(lVar14,&DAT_100fa9d88,&DAT_100c294f0);
  FUN_100005808(lVar15,&DAT_100faaba0,&DAT_100c28480);
  (**(code **)(local_98 + 8))(lVar17,puVar2);
  FUN_100016eac(&DAT_100faabc0,&DAT_100faabb0,&DAT_100c28490,
                PTR_Combine__Combine__Publishers__Delay<undefined,undefined>_>Combine__Publisher_100ea96c8
               );
  puVar3 = local_80;
  AVar12 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_88 + 8))(lVar16,puVar3);
  (**(code **)(local_b0 + 8))
            ((lVar17 - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0),SVar4.unknown)
  ;
  _swift_release(local_a8);
  *local_78 = AVar12.unknown;
  return;
}



/* Address: 0x100093fa0 | FUN_100093fa0 */

void FUN_100093fa0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  char cVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  void *pvVar8;
  char *pcVar9;
  long extraout_x8;
  undefined1 uVar10;
  String SVar11;
  String SVar12;
  String local_60;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  cVar1 = *param_2;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  pcVar9 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar2);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    pcVar9 = &DAT_00000001;
    param_5 = (void *)0x21;
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBarViewModel.swift",0x24,1,0x21,UVar6.unknown,puVar5);
  }
  if (cVar1 == '\0') {
    _swift_release(pMVar4);
    local_60.str = (char *)0x0;
    local_60.bridgeObject = (void *)0x0;
    uVar10 = 0xff;
  }
  else {
    FUN_1001e3f54(LVar3.unknown);
    local_60 = (extension_Foundation)::Swift::String::init(LVar3);
    pvVar8 = local_60.bridgeObject;
    _swift_bridgeObjectRetain(pvVar8);
    SVar11.bridgeObject = (void *)0xe300000000000000;
    SVar11.str = (char *)0x2e2e2e;
    SVar12.bridgeObject = param_5;
    SVar12.str = pcVar9;
    Swift::String::append(SVar11,SVar12);
    _swift_release(pMVar4);
    _swift_bridgeObjectRelease(pvVar8);
    uVar10 = 1;
  }
  *param_1 = local_60.str;
  param_1[1] = local_60.bridgeObject;
  *(undefined1 *)(param_1 + 2) = uVar10;
  return;
}



/* Address: 0x100094100 | FUN_100094100 */

void FUN_100094100(undefined8 *param_1,char *param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_58;
  
  cVar1 = *param_2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  puVar8 = puVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    puVar8 = (undefined8 *)0x24;
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBarViewModel.swift",0x24,1,0x28,UVar5.unknown,puVar4);
  }
  pMVar7 = (MainActor *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar7 != (MainActor *)0x0) {
    if (cVar1 != '\0') {
      uVar9 = *(undefined8 *)(pMVar7 + _TtC5Paste24NotificationBarViewModel::pauseManager);
      _swift_retain(uVar9);
      FUN_1000da768(&local_58);
      _swift_release();
      FUN_1000058c4();
      _swift_release(pMVar3);
      _swift_release(local_58);
      _swift_release(pMVar7);
      *param_1 = uVar9;
      param_1[1] = puVar8;
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    _swift_release(pMVar3);
    pMVar3 = pMVar7;
  }
  _swift_release(pMVar3);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  return;
}



/* Address: 0x100094250 | FUN_100094250 */

undefined *
FUN_100094250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  MainActor *pMVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  MainActor *pMVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  undefined *local_b8;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(this,this);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar12 = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBarViewModel.swift",0x24,1,0x2e,UVar8.unknown,puVar12);
  }
  local_80[0] = (char)param_3;
  local_68 = (undefined1)param_6;
  local_90 = param_1;
  uStack_88 = param_2;
  local_78 = param_4;
  uStack_70 = param_5;
  FUN_100094868(param_1,param_2,param_3);
  FUN_100094868(param_4,param_5,param_6);
  lVar13 = 0;
  local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    pcVar14 = local_80 + lVar13 * 0x18;
    do {
      lVar13 = lVar13 + 1;
      if (lVar13 == 3) {
        puVar11 = &DAT_100faab70;
        FUN_1000037f0(&DAT_100faab70,&DAT_100c28468);
        _swift_arrayDestroy(&local_90,2,puVar11);
        _swift_release(pMVar6);
        return local_b8;
      }
      pMVar2 = *(MainActor **)(pcVar14 + -0x10);
      uVar4 = *(undefined8 *)(pcVar14 + -8);
      cVar5 = *pcVar14;
      pMVar10 = pMVar2;
      FUN_100094868(pMVar2,uVar4,cVar5);
      pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
      puVar12 = puVar7;
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/NotificationBarViewModel.swift",0x24,1,0x2e,UVar8.unknown,puVar12);
      }
      pcVar14 = pcVar14 + 0x18;
      _swift_release(pMVar10);
    } while (cVar5 == -1);
    puVar11 = local_b8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar11 & 1) == 0) {
      plVar1 = (long *)(local_b8 + 0x10);
      local_b8 = (undefined *)0x0;
      FUN_100089540(0,*plVar1 + 1,1);
    }
    uVar3 = *(ulong *)(local_b8 + 0x10);
    if (*(ulong *)(local_b8 + 0x18) >> 1 <= uVar3) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(local_b8 + 0x18));
      FUN_100089540(puVar11,uVar3 + 1,1,local_b8);
      local_b8 = puVar11;
    }
    *(ulong *)(local_b8 + 0x10) = uVar3 + 1;
    *(MainActor **)(local_b8 + uVar3 * 0x18 + 0x20) = pMVar2;
    *(undefined8 *)(local_b8 + uVar3 * 0x18 + 0x28) = uVar4;
    local_b8[uVar3 * 0x18 + 0x30] = cVar5;
  } while( true );
}



/* Address: 0x1000944bc | FUN_1000944bc */

void FUN_1000944bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100094250(uVar1,param_2[1],*(undefined1 *)(param_2 + 2),param_2[3],param_2[4],
                *(undefined1 *)(param_2 + 5));
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000944f4 | FUN_1000944f4 */

void FUN_1000944f4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste24NotificationBarViewModel::_notifications;
  puVar2 = &DAT_100fa7c10;
  FUN_1000037f0(&DAT_100fa7c10,&DAT_100c28360);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24NotificationBarViewModel::syncManager));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste24NotificationBarViewModel::pauseManager));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10009456c | FUN_10009456c */

void FUN_10009456c(void)

{
  FUN_100094574(0);
  return;
}



/* Address: 0x100094574 | FUN_100094574 */

void FUN_100094574(undefined8 param_1)

{
  if (DAT_100faaa50 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca1dc8);
  return;
}



/* Address: 0x1000945ac | FUN_1000945ac */

void FUN_1000945ac(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_100094628();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = puStack_30;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100094628 | FUN_100094628 */

void FUN_100094628(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100faaa60.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100faaa68;
    FUN_100005c24(&DAT_100faaa68,&DAT_100c28320);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100faaa60 = PVar2;
    }
  }
  return;
}



/* Address: 0x100094688 | thunk_FUN_1000946a4 */

void thunk_FUN_1000946a4(void)

{
  FUN_1000946a4();
  return;
}



/* Address: 0x10009468c | FUN_10009468c */

void FUN_10009468c(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100094694 | FUN_100094694 */

void FUN_100094694(undefined8 *param_1)

{
  FUN_10002cca0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1000946a4 | FUN_1000946a4 */

undefined8 * FUN_1000946a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10009468c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1000946ec | FUN_1000946ec */

undefined8 * FUN_1000946ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_10009468c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10002cca0(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100094740 | FUN_100094740 */

undefined8 * FUN_100094740(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10002cca0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100094784 | FUN_100094784 */

int FUN_100094784(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1000947cc | FUN_1000947cc */

void FUN_1000947cc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x100094810 | FUN_100094810 */

undefined1 FUN_100094810(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Address: 0x100094818 | FUN_100094818 */

void FUN_100094818(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}



/* Address: 0x100094820 | FUN_100094820 */

undefined1  [16] FUN_100094820(void)

{
  return ZEXT816(0x100eb37c0);
}



/* Address: 0x100094830 | thunk_FUN_10008d74c */

void thunk_FUN_10008d74c(void)

{
  FUN_10008d74c();
  return;
}



/* Address: 0x100094834 | thunk_FUN_100025090 */

void thunk_FUN_100025090(void)

{
  FUN_100025090();
  return;
}



/* Address: 0x100094838 | thunk_FUN_100093b2c */

void thunk_FUN_100093b2c(void)

{
  FUN_100093b2c();
  return;
}



/* Address: 0x10009483c | FUN_10009483c */

void FUN_10009483c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100094860 | FUN_100094860 */

void FUN_100094860(void)

{
  FUN_100094100();
  return;
}



/* Address: 0x100094868 | FUN_100094868 */

void FUN_100094868(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_10009468c();
    return;
  }
  return;
}



/* Address: 0x10009487c | thunk_FUN_1000946a4 */

void thunk_FUN_1000946a4(void)

{
  thunk_FUN_1000946a4();
  return;
}



/* Address: 0x100094880 | FUN_100094880 */

void FUN_100094880(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c28570;
  _swift_getKeyPath(&DAT_100c28570);
  puVar2 = &DAT_100c28598;
  _swift_getKeyPath(&DAT_100c28598);
  Combine::Published::_get_subscript(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000948e4 | FUN_1000948e4 */

bool FUN_1000948e4(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar2 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar3 = 0;
  FUN_10019fee0();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = (undefined8 *)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100c28570;
  _swift_getKeyPath(&DAT_100c28570);
  puVar4 = &DAT_100c28598;
  _swift_getKeyPath(&DAT_100c28598);
  Combine::Published::_get_subscript(puVar7);
  _swift_release(puVar2);
  _swift_release(puVar4);
  puVar5 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar5 == 1) {
    FUN_100094f98(puVar7);
    bVar1 = false;
  }
  else {
    FUN_1000182c8(puVar7,puVar6);
    if ((undefined *)*puVar6 == (undefined *)0xd00000000000002d &&
        (undefined *)puVar6[1] == (undefined *)0x8000000100d8f1e0) {
      bVar1 = false;
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar6,(undefined *)puVar6[1],(_StringComparisonResult)0x2d);
      bVar1 = !bVar1;
    }
    FUN_10001835c(puVar6);
  }
  return bVar1;
}



/* Address: 0x100094a5c | FUN_100094a5c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100094bc4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100094a5c(void)

{
  long lVar1;
  undefined *puVar2;
  Published PVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  Publisher to;
  Publisher PVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar2 = &DAT_100faacb0;
  FUN_1000037f0(&DAT_100faacb0,&DAT_100c28508);
  local_b8 = *(long *)(puVar2 + -8);
  puStack_b0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  PVar9.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = PVar9.unknown + -extraout_x12;
  PVar3.unknown = &DAT_100faaca8;
  FUN_1000037f0(&DAT_100faaca8,&DAT_100c28500);
  lVar8 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)to.unknown - extraout_x8_00;
  puVar2 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar10 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar1 = _TtC5Paste29SubscriptionSettingsViewModel::_activeLicense;
  lVar11 = lVar10 - extraout_x12_00;
  lVar4 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar11,1,1,lVar4);
  FUN_100094f48(lVar11,lVar10);
  Combine::Published::init(lVar6,lVar4,puVar2);
  FUN_100094f98(lVar11);
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar1,lVar6,PVar3.unknown);
  lVar1 = _TtC5Paste29SubscriptionSettingsViewModel::licenseManager;
  puVar2 = &DAT_100c28510;
  _swift_getKeyPath();
  puVar5 = &DAT_100faa360;
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC5Paste29SubscriptionSettingsViewModel::router;
  puVar2 = &DAT_100c28548;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC5Paste29SubscriptionSettingsViewModel::licenseManager);
  _swift_retain(uVar7);
  FUN_1000da768(auStack_88);
  _swift_release(uVar7);
  FUN_100004640(auStack_88,local_70);
  uVar7 = local_70;
  (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
  lVar1 = _TtC5Paste29SubscriptionSettingsViewModel::_activeLicense;
  _swift_beginAccess(unaff_x20 + _TtC5Paste29SubscriptionSettingsViewModel::_activeLicense,
                     auStack_a8,0x21,0);
  Combine::Published::_get_projectedValue(PVar3);
  _swift_endAccess(auStack_a8);
  FUN_1000037f0(&DAT_100fa98a8,&DAT_100c26e88);
  FUN_100094fe8();
  (extension_Combine)::Combine::Publisher::_assign(to);
  puVar2 = puStack_b0;
  lVar4 = local_b8;
  (**(code **)(local_b8 + 0x10))(PVar9.unknown,to.unknown,puStack_b0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_a8,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar1),PVar9);
  _swift_endAccess(auStack_a8);
  (**(code **)(lVar4 + 8))(to.unknown,puVar2);
  _swift_release(uVar7);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x100094db4 | FUN_100094db4 */

void FUN_100094db4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste29SubscriptionSettingsViewModel::_activeLicense;
  puVar2 = &DAT_100faaca8;
  FUN_1000037f0(&DAT_100faaca8,&DAT_100c28500);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC5Paste29SubscriptionSettingsViewModel::licenseManager));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste29SubscriptionSettingsViewModel::router));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100094e2c | FUN_100094e2c */

void FUN_100094e2c(void)

{
  FUN_100094e34(0);
  return;
}



/* Address: 0x100094e34 | FUN_100094e34 */

void FUN_100094e34(undefined8 param_1)

{
  if (DAT_100faac08 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca1e2c);
  return;
}



/* Address: 0x100094e6c | FUN_100094e6c */

void FUN_100094e6c(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_100094ee8();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = puStack_30;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100094ee8 | FUN_100094ee8 */

void FUN_100094ee8(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100faac18.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fa6fa0;
    FUN_100005c24(&DAT_100fa6fa0,&DAT_100c284c0);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100faac18 = PVar2;
    }
  }
  return;
}



/* Address: 0x100094f48 | FUN_100094f48 */

undefined8 FUN_100094f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100094f98 | FUN_100094f98 */

undefined8 FUN_100094f98(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100094fe0 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x100094fe4 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x100094fe8 | FUN_100094fe8 */

void FUN_100094fe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa98b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa98a8;
  FUN_100005c24(&DAT_100fa98a8,&DAT_100c26e88);
  puVar2 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             puVar1);
  DAT_100fa98b0 = puVar2;
  return;
}



/* Address: 0x100095038 | thunk_FUN_1000aafa8 */

void thunk_FUN_1000aafa8(void)

{
  FUN_1000aafa8();
  return;
}



/* Address: 0x10009503c | thunk_FUN_1000ab010 */

void thunk_FUN_1000ab010(void)

{
  FUN_1000ab010();
  return;
}



/* Address: 0x100095040 | FUN_100095040 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100095040(NSObject *param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  NSObject *pNVar4;
  undefined8 uVar5;
  NSObject *pNVar6;
  NSObject *pNVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = param_2.unknown & 0xffffffffffffff8;
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    pNVar7 = *(NSObject **)(puVar8 + 0x10);
  }
  else {
    _Var1.unknown = puVar8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    pNVar7 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  pNVar6 = (NSObject *)0x0;
  do {
    if (pNVar7 == pNVar6) {
      pNVar6 = (NSObject *)0x0;
      uVar5 = 1;
LAB_100095114:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = pNVar6;
      return auVar9;
    }
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(NSObject **)(puVar8 + 0x10) <= pNVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100095138);
        (*pcVar2)();
      }
      pNVar4 = *(NSObject **)(param_2.unknown + (long)pNVar6 * 8 + 0x20);
    }
    else {
      pNVar4 = pNVar6;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar6,param_2);
    }
    FUN_10000ec2c(0,&DAT_100fa8f48,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
    bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,param_1);
    if (bVar3) {
      uVar5 = 0;
      goto LAB_100095114;
    }
    bVar3 = SCARRY8((long)pNVar6,1);
    pNVar6 = pNVar6 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009513c);
      (*pcVar2)();
    }
  } while( true );
}



/* Address: 0x100095150 | FUN_100095150 */

void FUN_100095150(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000014,0x8000000100d8f230,&local_38,puVar1);
  return;
}



/* Address: 0x1000951bc | FUN_1000951bc */

void FUN_1000951bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000018,0x8000000100d8f250,&local_38,puVar1);
  return;
}



/* Address: 0x100095228 | FUN_100095228 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

_ArrayBuffer FUN_100095228(ID param_1)

{
  ulong uVar1;
  undefined *puVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  byte bVar5;
  code *pcVar6;
  byte bVar7;
  _ArrayBuffer _Var8;
  ulong uVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  undefined8 uVar13;
  ID IVar14;
  ulong uVar15;
  MainActor *pMVar16;
  UnownedSerialExecutor UVar17;
  char *self;
  DispatchQoS DVar18;
  OS_dispatch_queue *pOVar19;
  void *aBlock;
  DispatchQoS DVar20;
  DispatchWorkItemFlags DVar21;
  undefined8 *puVar22;
  long lVar23;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar24;
  long lVar25;
  long unaff_x20;
  undefined *puVar26;
  ulong uVar27;
  DispatchWorkItemFlags qos;
  long lVar28;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  _ArrayBuffer local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  FUN_1000959e4();
  _Var8.unknown = (undefined *)objc_stub::arrangedSubviews(param_1);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar26 = _Var8.unknown & 0xffffffffffffff8;
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar27 = *(ulong *)(puVar26 + 0x10);
  }
  else {
    _Var3.unknown = puVar26;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var3.unknown = _Var8.unknown;
    }
    uVar27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (uVar27 == 0) {
    local_b0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_b0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar15 = 0;
    do {
      while( true ) {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar26 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000959a0);
            (*pcVar6)();
          }
          uVar9 = *(ulong *)(_Var8.unknown + uVar15 * 8 + 0x20);
        }
        else {
          uVar9 = uVar15;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var8);
        }
        uVar1 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009599c);
          (*pcVar6)();
        }
        pMVar10 = Swift::MainActor::typeMetadataAccessor();
        pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
        puVar11 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar12 = Swift::Actor::get_unownedExecutor();
        UVar17 = UVar12;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar17.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBar.swift",0x12,1,0xf,UVar12.unknown,puVar11);
        }
        uVar13 = 0;
        FUN_10007a448(0);
        _swift_dynamicCastClass(uVar9,uVar13);
        _swift_release(pMVar10);
        if (uVar9 != 0) break;
        uVar15 = uVar15 + 1;
        if (uVar1 == uVar27) goto LAB_10009541c;
      }
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar15 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
      uVar4 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
      if (uVar4 >> 1 <= uVar15) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar15 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar15,uVar9);
      local_b0.unknown = local_a0;
      uVar15 = uVar1;
    } while (uVar1 != uVar27);
  }
LAB_10009541c:
  _swift_bridgeObjectRelease(_Var8.unknown);
  if ((ulong)local_b0.unknown >> 0x3e == 0) {
    puVar26 = *(undefined **)(((ulong)local_b0.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = local_b0.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_b0.unknown) {
      _Var3.unknown = local_b0.unknown;
    }
    puVar26 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  lVar23 = _TtC5Paste6TabBar::isCollapsed;
  if (puVar26 == (undefined *)0x0) {
    if (*(char *)(unaff_x20 + _TtC5Paste6TabBar::isCollapsed) == '\x01') goto LAB_1000956c0;
  }
  else {
    uVar27 = 0;
    do {
      if (((ulong)local_b0.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)local_b0.unknown & 0xffffffffffffff8) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000959a8);
          (*pcVar6)();
        }
        uVar15 = *(ulong *)(local_b0.unknown + uVar27 * 8 + 0x20);
      }
      else {
        uVar15 = uVar27;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar27,local_b0);
      }
      puVar24 = (undefined *)(uVar27 + 1);
      if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000959a4);
        (*pcVar6)();
      }
      pMVar10 = Swift::MainActor::typeMetadataAccessor();
      pMVar16 = Swift::MainActor::get_shared(pMVar10,pMVar10);
      puVar11 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar22 = puVar11;
      UVar17 = Swift::Actor::get_unownedExecutor();
      self = (char *)UVar17;
      _swift_task_isCurrentExecutor();
      if (((ulong)self & 1) == 0) {
        self = "Paste/TabBar.swift";
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBar.swift",0x12,1,0x11,UVar17.unknown,puVar22);
      }
      lVar25 = _TtC5Paste10TabBarCell::isCollapsed;
      *(undefined1 *)(uVar15 + _TtC5Paste10TabBarCell::isCollapsed) =
           *(undefined1 *)(unaff_x20 + lVar23);
      FUN_100078aa4();
      bVar5 = *(byte *)(uVar15 + lVar25);
      bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      objc_stub::setActive_((ID)self,(ulong)((bVar7 & bVar5) & 1));
      IVar14 = 0;
      FUN_1000789dc();
      objc_stub::setActive_(IVar14,(ulong)((*(byte *)(uVar15 + lVar25) ^ 0xffffffff) & 1));
      IVar14 = 0;
      FUN_100078734();
      uVar13 = 0;
      if (*(char *)(uVar15 + lVar25) == '\0') {
        uVar13 = 0x3ff0000000000000;
      }
      objc_stub::setAlphaValue_(IVar14,uVar13);
      _swift_release(pMVar16);
      uVar27 = uVar27 + 1;
    } while (puVar24 != puVar26);
    if ((*(byte *)(unaff_x20 + lVar23) & 1) != 0) {
LAB_1000956c0:
      _swift_bridgeObjectRelease();
      FUN_100095a7c();
      objc_stub::scrollRectToVisible_((ID)local_b0.unknown,0,0,0,0);
      return (_ArrayBuffer)(undefined *)0x0;
    }
    puVar24 = (undefined *)0x0;
    do {
      if (((ulong)local_b0.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)local_b0.unknown & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000959b0);
          (*pcVar6)();
        }
                    /* WARNING: Load size is inaccurate */
        DVar18.unknown = local_b0.unknown[(long)puVar24 * 8 + 0x20];
      }
      else {
        DVar18.unknown = puVar24;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar24,local_b0);
      }
      puVar2 = puVar24 + 1;
      if (SCARRY8((long)puVar24,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000959ac);
        (*pcVar6)();
      }
      pMVar16 = Swift::MainActor::get_shared(pMVar10,(MainActor *)DVar18.unknown);
      puVar22 = puVar11;
      UVar12 = Swift::Actor::get_unownedExecutor();
      UVar17 = UVar12;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar17.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBar.swift",0x12,1,0x15,UVar12.unknown,puVar22);
      }
      bVar5 = DVar18.unknown[_TtC5Paste10TabBarCell::isSelected];
      _swift_release(pMVar16);
      if ((bVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(local_b0.unknown);
        pOVar19 = (OS_dispatch_queue *)0x0;
        FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
        (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar19);
        puVar26 = &DAT_100eb3850;
        _swift_allocObject(&DAT_100eb3850,0x18,7);
        _swift_unknownObjectWeakInit(puVar26 + 0x10,unaff_x20);
        puVar24 = &DAT_100eb3878;
        _swift_allocObject(&DAT_100eb3878,0x20,7);
        *(undefined **)(puVar24 + 0x10) = puVar26;
        *(undefined **)(puVar24 + 0x18) = DVar18.unknown;
        local_80 = FUN_100096f14;
        local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
        local_98 = 0x42000000;
        local_90 = FUN_100030410;
        puStack_88 = &DAT_100eb3890;
        local_78 = puVar24;
        aBlock = __Block_copy(&local_a0);
        DVar20 = Dispatch::DispatchQoS::typeMetadataAccessor();
        lVar23 = *(long *)(DVar20.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
        qos.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        _swift_retain(puVar26);
        local_d8 = DVar18.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar18);
        DVar21 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
        lVar25 = *(long *)(DVar21.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(undefined8 *)(lVar25 + 0x40),DVar21.unknown,PTR_typeMetadataAccessor_100eae670)
        ;
        lVar28 = (long)qos.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        puVar11 = &DAT_100fa82c0;
        FUN_100003a00(&DAT_100fa82c0);
        puVar24 = &DAT_100fa7850;
        FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
        puVar22 = &DAT_100fa82d0;
        FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
        Swift::SetAlgebra::_init(lVar28,&local_a8,puVar24,puVar22,DVar21.unknown,puVar11);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar25 + 8))(lVar28,DVar21.unknown);
        (**(code **)(lVar23 + 8))(qos.unknown,DVar20.unknown);
        puVar24 = local_78;
        _swift_release(puVar26);
        _swift_release(puVar24);
        return (_ArrayBuffer)puVar24;
      }
      puVar24 = puVar24 + 1;
    } while (puVar2 != puVar26);
  }
  _swift_bridgeObjectRelease();
  return (_ArrayBuffer)local_b0.unknown;
}



/* Address: 0x1000959e4 | FUN_1000959e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000959e4(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste6TabBar::___lazy_storage___stackView;
  self = *(ID *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___stackView);
  if (self == 0) {
    FUN_1002393c4();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    objc_stub::setOrientation_(self,0);
    objc_stub::setSpacing_(self,0x4020000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100095a7c | FUN_100095a7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100095a7c(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste6TabBar::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___scrollView);
  if (self == 0) {
    FUN_10005142c();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100095ae8 | FUN_100095ae8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor *
FUN_100095ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,ID param_6)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0x17,UVar4.unknown,puVar3);
  }
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_5 != 0) {
    objc_stub::frame(param_6);
    _CGRectInset();
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    uVar6 = 0;
    local_90 = param_5;
    uStack_80 = param_2;
    local_78 = param_3;
    uStack_70 = param_4;
    FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021ccd4();
    FUN_10021cadc(0x3fc3333333333333,0,uVar6,1,thunk_FUN_10009ac24,auStack_a0,0,0);
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100095c94 | FUN_100095c94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100095c94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  __int64 _Var5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtC5Paste6TabBar::isCollapsed) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___stackView) = 0;
  puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var5 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar6 = PTR___swiftEmptySetSingleton_100eae0e8, _Var5 != 0)) {
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste6TabBar::cancellables) = puVar6;
  *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::applier) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_previousPinboardShortcut);
  puVar6 = &DAT_100c285c8;
  _swift_getKeyPath(&DAT_100c285c8);
  puVar2 = &DAT_100fa80e0;
  FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar3 = &DAT_100faa900;
  FUN_100038704(&DAT_100faa900,FUN_100038774,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_c0,puVar6,puVar2,puVar3);
  puVar1[1] = uStack_b8;
  *puVar1 = local_c0;
  puVar1[3] = uStack_a8;
  puVar1[2] = uStack_b0;
  puVar1[5] = uStack_98;
  puVar1[4] = local_a0;
  puVar1[6] = local_90;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_nextPinboardShortcut);
  _swift_getKeyPath(&DAT_100c285f0);
  FUN_1002cb88c(&local_88);
  puVar1[6] = local_58;
  puVar1[3] = uStack_70;
  puVar1[2] = local_78;
  puVar1[5] = uStack_60;
  puVar1[4] = local_68;
  puVar1[1] = uStack_80;
  *puVar1 = local_88;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::isSearchActive);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::viewModel) = param_1;
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"initWithFrame:",0,0,0,0);
  FUN_100095e94();
  FUN_100096430();
  return IVar4;
}



/* Address: 0x100095e94 | FUN_100095e94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100095e94(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  AnyCancellable *pAVar8;
  long extraout_x8;
  long unaff_x20;
  ulong *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_130 [8];
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  code *local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar4 = &DAT_100faad58;
  FUN_1000037f0(&DAT_100faad58,&DAT_100c28678);
  local_110 = *(code **)(puVar4 + -8);
  local_108 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_100 = auStack_130 + -extraout_x8;
  FUN_100095a7c();
  FUN_1000959e4();
  FUN_100050034();
  FUN_1001fa09c(puVar4,FUN_10009abc4,&local_a0);
  _swift_bridgeObjectRelease(puVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___scrollView);
  FUN_1001fa09c(uVar5,FUN_10009abcc,&local_a0);
  _swift_bridgeObjectRelease(uVar5);
  lVar2 = _TtC5Paste6TabBar::___lazy_storage___stackView;
  puVar9 = *(ulong **)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___stackView);
  puVar4 = &DAT_100eb3850;
  puVar6 = puVar4;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar13 = PTR__swift_isaMask_100eae3b0;
  pcVar10 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar9) + 0x88);
  _swift_retain(puVar6);
  (*pcVar10)(FUN_10009abd4,puVar6);
  _swift_release(puVar6);
  puVar9 = *(ulong **)(unaff_x20 + lVar2);
  puVar6 = puVar4;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  pcVar10 = *(code **)((*(ulong *)puVar13 & *puVar9) + 0xa0);
  _swift_retain(puVar6);
  (*pcVar10)(FUN_10009abdc,puVar6);
  _swift_release(puVar6);
  puVar9 = *(ulong **)(unaff_x20 + lVar2);
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pcVar10 = *(code **)((*(ulong *)puVar13 & *puVar9) + 0xb8);
  _swift_retain(puVar4);
  (*pcVar10)(FUN_10009abe4,puVar4);
  _swift_release(puVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_previousPinboardShortcut);
  uVar14 = puVar1[1];
  uVar11 = *puVar1;
  uVar15 = puVar1[2];
  uVar12 = puVar1[4];
  uVar5 = puVar1[6];
  local_a0 = uVar11;
  uStack_98 = uVar14;
  _swift_retain(uVar11);
  _swift_retain(uVar14);
  _swift_retain(uVar15);
  _swift_retain(uVar12);
  _swift_retain(uVar5);
  puVar4 = &DAT_100faa910;
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  puVar7 = puVar4;
  FUN_1002cb1ec();
  _swift_release(uVar5);
  _swift_release(uVar12);
  _swift_release(uVar15);
  _swift_release(uVar14);
  _swift_release(uVar11);
  puVar13 = &DAT_100faad60;
  local_e0 = puVar7;
  FUN_1000037f0(&DAT_100faad60,&DAT_100c28680);
  puVar6 = &DAT_100faad68;
  local_118 = puVar13;
  FUN_100016eac(&DAT_100faad68,&DAT_100faad60,&DAT_100c28680,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  puVar3 = local_100;
  local_120 = puVar6;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(puVar7);
  puVar13 = &DAT_100eb3850;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar13 + 0x10);
  puVar6 = &DAT_100faad70;
  FUN_100016eac(&DAT_100faad70,&DAT_100faad58,&DAT_100c28678,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  puVar7 = local_108;
  local_128 = puVar6;
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar13);
  local_110 = *(code **)((long)local_110 + 8);
  (*local_110)(puVar3,puVar7);
  lVar2 = _TtC5Paste6TabBar::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste6TabBar::cancellables,&local_e0,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(unaff_x20 + lVar2));
  _swift_endAccess(&local_e0);
  _swift_release(pAVar8);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_nextPinboardShortcut);
  uVar12 = puVar1[1];
  puVar13 = (undefined *)*puVar1;
  uStack_c8 = puVar1[3];
  uVar14 = puVar1[2];
  uStack_b8 = puVar1[5];
  uVar11 = puVar1[4];
  uVar5 = puVar1[6];
  local_e0 = puVar13;
  uStack_d8 = uVar12;
  local_d0 = uVar14;
  local_c0 = uVar11;
  local_b0 = uVar5;
  _swift_retain(puVar13);
  _swift_retain(uVar12);
  _swift_retain(uVar14);
  _swift_retain(uVar11);
  _swift_retain(uVar5);
  FUN_1002cb1ec();
  _swift_release(uVar5);
  _swift_release(uVar11);
  _swift_release(uVar14);
  _swift_release(uVar12);
  _swift_release(puVar13);
  puVar3 = local_100;
  local_f8[0] = puVar4;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(puVar4);
  puVar4 = &DAT_100eb3850;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (*local_110)(puVar3,puVar7);
  _swift_beginAccess(unaff_x20 + lVar2,local_f8,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(unaff_x20 + lVar2));
  _swift_endAccess(local_f8);
  _swift_release(pAVar8);
  return;
}


