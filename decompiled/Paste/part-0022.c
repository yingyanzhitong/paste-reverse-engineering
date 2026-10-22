/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000395c0 | FUN_1000395c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000395c0(void)

{
  return ZEXT816(0x100f902e8);
}



/* Address: 0x1000395e0 | FUN_1000395e0 */

void FUN_1000395e0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100039604 | FUN_100039604 */

void FUN_100039604(void)

{
  FUN_100039000();
  return;
}



/* Address: 0x10003960c | thunk_FUN_100025040 */

void thunk_FUN_100025040(void)

{
  FUN_100025040();
  return;
}



/* Address: 0x100039610 | FUN_100039610 */

void FUN_100039610(void)

{
  long unaff_x20;
  
  FUN_10003920c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100039618 | FUN_100039618 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100039618(void)

{
  undefined *puVar1;
  DispatchTime DVar2;
  LocalizedStringResource LVar3;
  DispatchQoS DVar4;
  char *pcVar5;
  OS_dispatch_queue *pOVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar11;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  DispatchTime deadline;
  DispatchTime DVar12;
  String SVar13;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  flags.unknown = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  local_c0 = DVar2.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  DVar12.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  deadline.unknown = DVar12.unknown + -extraout_x12;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  FUN_1001c6aa4(deadline.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  SVar13 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (deadline.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)));
  DVar4.unknown = SVar13.str;
  pcVar5 = DVar4.unknown;
  FUN_100324a80();
  FUN_1003c4db8(DVar4.unknown,SVar13.bridgeObject,pcVar5);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  pOVar6 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  local_d0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
  Dispatch::DispatchTime::now((DispatchTime)local_d0);
  Dispatch::__infix(DVar12,0.2);
  local_c8 = *(code **)(lVar11 + 8);
  (*local_c8)(DVar12.unknown,DVar2.unknown);
  puVar7 = &DAT_100eb1898;
  _swift_allocObject(&DAT_100eb1898,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  puVar8 = &DAT_100eb18c0;
  _swift_allocObject(&DAT_100eb18c0,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined **)(puVar8 + 0x18) = DVar4.unknown;
  local_70 = FUN_10003baf8;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb18d8;
  local_68 = puVar8;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar7);
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = &DAT_100fa82c0;
  FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar8 = &DAT_100fa7850;
  FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
  puVar10 = &DAT_100fa82d0;
  FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  puVar1 = local_b8;
  Swift::SetAlgebra::_init(flags.unknown,&local_98,puVar8,puVar10,local_b8,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(flags.unknown,puVar1);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  (*local_c8)(deadline.unknown,local_c0);
  puVar8 = local_68;
  _swift_release(puVar7);
  _swift_release(puVar8);
  return;
}



/* Address: 0x100039990 | FUN_100039990 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100039a30) */

void FUN_100039990(ID param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ID IVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  NSArray *pNVar8;
  uint uVar9;
  ID IVar10;
  undefined8 local_68;
  
  IVar5 = param_1;
  IVar10 = param_2;
  FUN_1000da768(&local_68);
  FUN_1003decbc();
  IVar2 = param_1;
  FUN_1003aeb84(param_1,IVar5,IVar10,param_3,param_4);
  _swift_bridgeObjectRelease(IVar10);
  FUN_10003bf18(param_3,param_4);
  _swift_release(local_68);
  puVar3 = (undefined8 *)&DAT_100fa82e0;
  FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
  uVar9 = 0x40;
  _swift_allocObject();
  puVar3[3] = 2;
  puVar3[2] = 1;
  puVar4 = puVar3;
  FUN_1003293c4();
  if ((uVar9 & 0xff) == 1) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  else {
    FUN_1001ff0d0();
    puVar4 = (undefined8 *)*puVar4;
  }
  thunk_FUN_1003ed58c();
  IVar5 = objc_stub::name(param_1);
  puVar6 = &_OBJC_CLASS___NSPreviewRepresentingActivityItem;
  _objc_allocWithZone();
  IVar5 = objc_stub::initWithItem_title_image_icon_((ID)puVar6,IVar2,IVar5,puVar4,puVar4);
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fa82f0,&PTR__OBJC_CLASS___NSPreviewRepresentingActivityItem_100f8d728);
  puVar3[7] = uVar7;
  puVar3[4] = IVar5;
  puVar6 = &_OBJC_CLASS___NSSharingServicePicker;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  IVar5 = objc_stub::initWithItems_((ID)puVar6,pNVar8);
  objc_stub::setDelegate_(IVar5);
  objc_stub::bounds(param_2);
  objc_stub::showRelativeToRect_ofView_preferredEdge_(IVar5,param_2,1);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100039c50);
  (*pcVar1)();
}



/* Address: 0x100039c50 | FUN_100039c50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100039c50(undefined *param_1,undefined *param_2,ulong param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [24];
  _StringGuts local_b0;
  _StringGuts local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  _swift_beginAccess(puVar1,auStack_c8,0,0);
  uVar7 = puVar1[1];
  uVar5 = *puVar1;
  uStack_88 = puVar1[3];
  uVar8 = puVar1[2];
  uStack_78 = puVar1[5];
  uVar6 = puVar1[4];
  uVar4 = puVar1[6];
  local_a0 = uVar5;
  uStack_98 = uVar7;
  local_90 = uVar8;
  local_80 = uVar6;
  local_70 = uVar4;
  _swift_retain(uVar5);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(&local_b0);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar8);
  _swift_release(uVar7);
  _swift_release(uVar5);
  _Var2.unknown = local_a8.unknown;
  if (local_a8.unknown != (undefined *)0x0) {
    if ((local_b0.unknown == param_1) && (local_a8.unknown == param_2)) {
      _swift_bridgeObjectRelease(local_a8.unknown);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (local_b0,local_a8,(_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(_Var2.unknown);
      if (!bVar3) goto LAB_100039dc8;
    }
    if ((param_3 & 1) != 0) {
      _swift_getKeyPath(&DAT_100c25380);
      _swift_getKeyPath(&DAT_100c253a8);
      local_b0.unknown = (undefined *)0x0;
      local_a8.unknown = (undefined *)0x0;
      FUN_1002cb5a0(&local_b0);
    }
  }
LAB_100039dc8:
  _swift_getKeyPath(&DAT_100c25380);
  _swift_getKeyPath(&DAT_100c253a8);
  local_b0.unknown = param_1;
  local_a8.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_1002cb5a0(&local_b0);
  return;
}



/* Address: 0x100039e34 | FUN_100039e34 */

undefined8 FUN_100039e34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c25318;
  _swift_getKeyPath(&DAT_100c25318);
  puVar2 = &DAT_100c25340;
  _swift_getKeyPath(&DAT_100c25340);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x100039ea4 | FUN_100039ea4 */

undefined1  [16] FUN_100039ea4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_68 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_58 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar6;
  local_60 = uVar4;
  local_50 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(local_90);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return local_90;
}



/* Address: 0x100039f8c | FUN_100039f8c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010003a068 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100039f8c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  PassthroughSubject *this;
  ID IVar6;
  ID IVar7;
  AnyCancellable *pAVar8;
  __int64 _Var9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_130 [8];
  undefined *local_128 [3];
  undefined1 auStack_110 [24];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  _swift_getObjectType();
  puVar3 = &DAT_100fa8348;
  FUN_1000037f0(&DAT_100fa8348,&DAT_100c253d0);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  lVar12 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC5Paste15TabBarViewModel::_selectedList;
  lVar11 = (long)(auStack_130 + -extraout_x8) - extraout_x8_00;
  local_b0 = 0;
  puVar5 = &DAT_100fa81f0;
  FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
  Combine::Published::init(lVar11,puVar5,puVar5);
  (**(code **)(lVar12 + 0x20))(unaff_x20 + lVar2,lVar11,puVar4);
  lVar2 = _TtC5Paste15TabBarViewModel::beginEditingListSubject;
  this = (PassthroughSubject *)&DAT_100fa8350;
  FUN_1000037f0(&DAT_100fa8350,&DAT_100c253d8);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(this);
  *(PassthroughSubject **)(unaff_x20 + lVar2) = this;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var9 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var9 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste15TabBarViewModel::cancellables) = puVar4;
  lVar2 = _TtC5Paste15TabBarViewModel::syncManager;
  puVar4 = &DAT_100c253e0;
  _swift_getKeyPath();
  puVar5 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _TtC5Paste15TabBarViewModel::telemetry;
  puVar4 = &DAT_100c25410;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa8360;
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  puVar4 = &DAT_100c25440;
  _swift_getKeyPath(&DAT_100c25440);
  puVar5 = puVar4;
  FUN_100009bac();
  FUN_1002cb7e0(&local_e8,puVar4,puVar5);
  puVar1[1] = uStack_e0;
  *puVar1 = local_e8;
  puVar1[3] = uStack_d0;
  puVar1[2] = local_d8;
  puVar1[5] = uStack_c0;
  puVar1[4] = local_c8;
  puVar1[6] = local_b8;
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff08,"init");
  FUN_10003a538();
  IVar7 = IVar6;
  FUN_1003c473c();
  uVar10 = 0;
  FUN_1001aeb1c();
  _swift_release(IVar7);
  local_b0 = uVar10;
  FUN_1000037f0(&DAT_100fa8370,&DAT_100c25468);
  FUN_100016eac(&DAT_100fa8378,&DAT_100fa8370,&DAT_100c25468,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(uVar10);
  puVar4 = &DAT_100eb1898;
  puVar5 = puVar4;
  _swift_allocObject(&DAT_100eb1898,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar6);
  FUN_100016eac(&DAT_100fa8380,&DAT_100fa8348,&DAT_100c253d0,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar5);
  (**(code **)(lVar13 + 8))(auStack_130 + -extraout_x8,puVar3);
  lVar2 = _TtC5Paste15TabBarViewModel::cancellables;
  _swift_beginAccess(IVar6 + _TtC5Paste15TabBarViewModel::cancellables,&local_b0,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(IVar6 + lVar2));
  _swift_endAccess(&local_b0);
  _swift_release(pAVar8);
  puVar1 = (undefined8 *)(IVar6 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  _swift_beginAccess(puVar1,auStack_110,0,0);
  uVar17 = puVar1[1];
  uVar14 = *puVar1;
  uStack_98 = puVar1[3];
  uVar15 = puVar1[2];
  uStack_88 = puVar1[5];
  uVar16 = puVar1[4];
  uVar10 = puVar1[6];
  local_b0 = uVar14;
  uStack_a8 = uVar17;
  local_a0 = uVar15;
  local_90 = uVar16;
  local_80 = uVar10;
  _swift_retain(uVar14);
  _swift_retain(uVar17);
  _swift_retain(uVar15);
  _swift_retain(uVar16);
  _swift_retain(uVar10);
  puVar3 = &DAT_100fa8320;
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002cb1ec();
  _swift_release(uVar10);
  _swift_release(uVar16);
  _swift_release(uVar15);
  _swift_release(uVar17);
  _swift_release(uVar14);
  local_128[0] = puVar3;
  _swift_allocObject(&DAT_100eb1898,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar6);
  puVar5 = &DAT_100eb1938;
  _swift_allocObject(&DAT_100eb1938,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10003ca44;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  FUN_1000037f0(&DAT_100fa8388,&DAT_100c25470);
  FUN_100016eac(&DAT_100fa8390,&DAT_100fa8388,&DAT_100c25470,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  _swift_release(puVar5);
  _swift_beginAccess(IVar6 + lVar2,local_128,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(IVar6 + lVar2));
  _swift_endAccess(local_128);
  _swift_release(pAVar8);
  return IVar6;
}



/* Address: 0x10003a538 | FUN_10003a538 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10003a538(void)

{
  long *plVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  long unaff_x20;
  __int64 _Var9;
  long lVar10;
  String SVar11;
  char *local_80;
  void *pvStack_78;
  String local_70;
  
  puVar5 = &DAT_100c25318;
  _swift_getKeyPath(&DAT_100c25318);
  puVar6 = &DAT_100c25340;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar5);
  _swift_release();
  pcVar7 = local_70.str;
  if ((local_70.str == (char *)0x0) ||
     (plVar1 = (long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex),
     (char)plVar1[1] == '\x01')) {
    FUN_100357f60(&local_70,FUN_10003b058,0,PTR___type_metadata_for_Swift_String_100eac208);
    _swift_getKeyPath(&DAT_100c25380);
    _swift_getKeyPath(&DAT_100c253a8);
    local_80 = local_70.str;
    pvStack_78 = local_70.bridgeObject;
    FUN_1002cb5a0(&local_80);
  }
  else {
    lVar10 = *plVar1;
    FUN_1003c473c();
    puVar5 = puVar6;
    FUN_1000386a0();
    _swift_release(puVar6);
    FUN_1003541f4();
    puVar6 = puVar5;
    FUN_100095040();
    _swift_bridgeObjectRelease(puVar5);
    pcVar8 = (char *)0x0;
    if (((uint)puVar6 & 0xff) == 1) {
      FUN_1003c473c();
      pcVar7 = pcVar8;
      FUN_1000386a0();
      if ((ulong)pcVar7 >> 0x3e == 0) {
        _Var9 = *(long *)(((ulong)pcVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var3.unknown = (undefined *)((ulong)pcVar7 & 0xffffffffffffff8);
        if ((char *)0x7fffffffffffffff < pcVar7) {
          _Var3.unknown = pcVar7;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      }
      _swift_release(pcVar8);
      _swift_bridgeObjectRelease();
      if (SBORROW8(_Var9,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10003a824);
        (*pcVar4)();
      }
      lVar2 = _Var9 + -1;
      if (lVar10 <= _Var9 + -1) {
        lVar2 = lVar10;
      }
      FUN_1003c473c();
      local_70.str = pcVar7;
      puVar5 = &DAT_100fa8328;
      FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
      puVar6 = &DAT_100fa8330;
      FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b8054(&local_80,lVar2,puVar5,puVar6);
      _swift_release(pcVar7);
      if (local_80 != (char *)0x0) {
        objc_stub::identifier((ID)local_80);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _swift_getKeyPath(&DAT_100c25380);
        _swift_getKeyPath(&DAT_100c253a8);
        local_70 = SVar11;
        FUN_1002cb5a0(&local_70);
      }
    }
    else {
      *plVar1 = (long)pcVar7;
      *(char *)(plVar1 + 1) = (char)puVar6;
    }
  }
  return;
}



/* Address: 0x10003a824 | FUN_10003a824 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_10003a824(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x20,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10003a538();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10003a900 | FUN_10003a900 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor *
FUN_10003a900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x24,UVar4.unknown,puVar3);
  }
  if (param_4 != 0) {
    param_5 = param_5 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_5 != 0) {
      FUN_10003a9fc(param_3,param_4);
      _swift_release(pMVar2);
      return (MainActor *)0x0;
    }
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10003a9fc | FUN_10003a9fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003a9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  plVar2 = local_70;
  puVar1 = &DAT_100fa81f0;
  local_60 = param_1;
  uStack_58 = param_2;
  FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
  FUN_100357f60(&local_48,FUN_10003ca9c,local_70,puVar1);
  if (local_48 != 0) {
    _swift_getKeyPath(&DAT_100c25318);
    _swift_getKeyPath(&DAT_100c25340);
    local_70[0] = local_48;
    Combine::Published::_set_subscript();
    FUN_1003c473c();
    puVar3 = (undefined1 *)plVar2;
    FUN_1000386a0();
    _swift_release(plVar2);
    FUN_1003541f4();
    lVar4 = local_48;
    puVar5 = puVar3;
    FUN_100095040();
    _swift_bridgeObjectRelease(puVar3);
    plVar2 = (long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex);
    *plVar2 = lVar4;
    *(char *)(plVar2 + 1) = (char)puVar5;
  }
  return;
}



/* Address: 0x10003ab2c | _TtC5Paste15TabBarViewModel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste15TabBarViewModel::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/TabBarViewModel.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x19,UVar4.unknown,puVar3);
  }
  FUN_100039f8c();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x10003abe8 | FUN_10003abe8 */

void FUN_10003abe8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = _TtC5Paste15TabBarViewModel::_selectedList;
  puVar5 = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(unaff_x20 + lVar4,puVar5);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::beginEditingListSubject));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::cancellables))
  ;
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::syncManager));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::telemetry));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10003acb4 | _TtC5Paste15TabBarViewModel::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste15TabBarViewModel::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = _selectedList;
  puVar5 = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(param_1 + lVar4,puVar5);
  _swift_release(*(undefined8 *)(param_1 + beginEditingListSubject));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_release(*(undefined8 *)(param_1 + syncManager));
  _swift_release(*(undefined8 *)(param_1 + telemetry));
  puVar1 = (undefined8 *)(param_1 + _selectedListIdentifier);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10003ad84 | _TtC5Paste15TabBarViewModel::sharingServicePicker:sharingServicesForItems:proposedSharingServices: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC5Paste15TabBarViewModel::
   sharingServicePicker_sharingServicesForItems_proposedSharingServices_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  NSArray *pNVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x61,UVar4.unknown,puVar3);
  }
  FUN_10000ec2c(0,&DAT_100fa8338,&PTR__OBJC_CLASS___NSSharingService_100f8d718);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  IVar6 = param_5;
  FUN_10003bf6c(param_5);
  _swift_bridgeObjectRelease(param_5);
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(IVar6);
  return (ID)pNVar7;
}



/* Address: 0x10003aeb8 | _TtC5Paste15TabBarViewModel::sharingServicePicker:delegateForSharingService: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC5Paste15TabBarViewModel::sharingServicePicker_delegateForSharingService_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x7b,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return param_1;
}



/* Address: 0x10003af68 | _TtC5Paste15TabBarViewModel::sharingService:didFailToShareItems:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC5Paste15TabBarViewModel::sharingService_didFailToShareItems_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  NSError *pNVar6;
  ID self;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0x82,UVar4.unknown,puVar3);
  }
  pNVar6 = Foundation::__convertErrorToNSError();
  self = NSAlert::alertWithError_((ID)&_OBJC_CLASS___NSAlert,pNVar6);
  NSAlert::runModal(self);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10003b058 | FUN_10003b058 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003b058(String *param_1)

{
  String SVar1;
  undefined1 auStack_58 [24];
  ID local_40;
  long lStack_38;
  
  FUN_1003595f8(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x28))(local_40,lStack_38);
  objc_stub::identifier(local_40);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x10003b0f4 | FUN_10003b0f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003b0f4(char *param_1)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  __int64 _Var9;
  String SVar10;
  String local_58;
  ID local_48;
  
  if ((char)((long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex))[1] != '\x01') {
    lVar8 = *(long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex);
    lVar2 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b2cc);
      (*pcVar3)();
    }
    FUN_1003c473c();
    pcVar4 = param_1;
    FUN_1000386a0();
    if ((ulong)pcVar4 >> 0x3e == 0) {
      _Var9 = *(long *)(((ulong)pcVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)pcVar4 & 0xffffffffffffff8);
      if ((char *)0x7fffffffffffffff < pcVar4) {
        _Var1.unknown = pcVar4;
      }
      _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease();
    lVar8 = lVar2 + _Var9;
    if (SCARRY8(lVar2,_Var9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b2e8);
      (*pcVar3)();
    }
    FUN_1003c473c();
    pcVar5 = pcVar4;
    FUN_1000386a0();
    if ((ulong)pcVar5 >> 0x3e == 0) {
      _Var9 = *(long *)(((ulong)pcVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)pcVar5 & 0xffffffffffffff8);
      if ((char *)0x7fffffffffffffff < pcVar5) {
        _Var1.unknown = pcVar5;
      }
      _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_release(pcVar4);
    _swift_bridgeObjectRelease();
    if (_Var9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b304);
      (*pcVar3)();
    }
    if ((lVar8 == -0x8000000000000000) && (_Var9 == -1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b308);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (_Var9 != 0) {
      lVar2 = lVar8 / _Var9;
    }
    FUN_1003c473c();
    local_58.str = pcVar5;
    puVar6 = &DAT_100fa8328;
    FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
    puVar7 = &DAT_100fa8330;
    FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b8054(&local_48,lVar8 - lVar2 * _Var9,puVar6,puVar7);
    _swift_release(pcVar5);
    if (local_48 == 0) {
      SVar10 = (String)ZEXT816(0);
    }
    else {
      objc_stub::identifier(local_48);
      SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    _swift_getKeyPath(&DAT_100c25380);
    _swift_getKeyPath(&DAT_100c253a8);
    local_58 = SVar10;
    FUN_1002cb5a0(&local_58);
  }
  return;
}



/* Address: 0x10003b308 | FUN_10003b308 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003b308(char *param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  __int64 _Var8;
  String SVar9;
  String local_58;
  ID local_48;
  
  if ((char)((long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex))[1] != '\x01') {
    lVar7 = *(long *)(unaff_x20 + _TtC5Paste15TabBarViewModel::selectedIndex);
    lVar1 = lVar7 + 1;
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b4a0);
      (*pcVar3)();
    }
    FUN_1003c473c();
    pcVar4 = param_1;
    FUN_1000386a0();
    if ((ulong)pcVar4 >> 0x3e == 0) {
      _Var8 = *(long *)(((ulong)pcVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)pcVar4 & 0xffffffffffffff8);
      if ((char *)0x7fffffffffffffff < pcVar4) {
        _Var2.unknown = pcVar4;
      }
      _Var8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease();
    if (_Var8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b4bc);
      (*pcVar3)();
    }
    if (lVar1 == -0x8000000000000000 && _Var8 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003b4c0);
      (*pcVar3)();
    }
    lVar7 = 0;
    if (_Var8 != 0) {
      lVar7 = lVar1 / _Var8;
    }
    FUN_1003c473c();
    local_58.str = pcVar4;
    puVar5 = &DAT_100fa8328;
    FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
    puVar6 = &DAT_100fa8330;
    FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b8054(&local_48,lVar1 - lVar7 * _Var8,puVar5,puVar6);
    _swift_release(pcVar4);
    if (local_48 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      objc_stub::identifier(local_48);
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    _swift_getKeyPath(&DAT_100c25380);
    _swift_getKeyPath(&DAT_100c253a8);
    local_58 = SVar9;
    FUN_1002cb5a0(&local_58);
  }
  return;
}



/* Address: 0x10003b4c0 | FUN_10003b4c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_10003b4c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarViewModel.swift",0x1b,1,0xab,UVar4.unknown,puVar3);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    local_48 = param_2;
    Combine::PassthroughSubject::send
              (*(PassthroughSubject **)
                (param_1 + _TtC5Paste15TabBarViewModel::beginEditingListSubject),&local_48);
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10003b5c4 | FUN_10003b5c4 */

/* WARNING: Removing unreachable block (ram,0x00010003b61c) */

void FUN_10003b5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_70 [16];
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  puStack_58 = auStack_50;
  local_60 = thunk_FUN_10003c9e8;
  puVar1 = &DAT_100fa8308;
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
  FUN_100357d14(&uStack_21,FUN_10003cabc,auStack_70,puVar1);
  return;
}



/* Address: 0x10003b634 | FUN_10003b634 */

void FUN_10003b634(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  MainActor *pMVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  uVar17 = 0;
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar15 = *(ulong *)(param_2 + 0x10);
  do {
    puVar6 = local_68;
    uVar1 = uVar17;
    if (uVar17 <= uVar15) {
      uVar1 = uVar15;
    }
    puVar16 = (undefined8 *)(param_2 + 0x28 + uVar17 * 0x10);
    do {
      if (uVar15 == uVar17) {
        FUN_100357cf0(auStack_90);
        FUN_100004640(auStack_90,local_78);
        lVar14 = *(long *)(lStack_70 + 0x10);
        pcVar7 = *(code **)(lVar14 + 0x28);
        puVar12 = &DAT_100fa8310;
        local_68 = puVar6;
        FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
        puVar13 = &DAT_100fa8318;
        FUN_100016eac(&DAT_100fa8318,&DAT_100fa8310,&DAT_100c26d10,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
        (*pcVar7)(&local_68,param_3,puVar12,puVar13,local_78,lVar14);
        _swift_bridgeObjectRelease(puVar6);
        FUN_100004594(auStack_90);
        return;
      }
      uVar17 = uVar17 + 1;
      if (uVar1 + 1 == uVar17) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10003b8a0);
        (*pcVar7)();
      }
      lVar14 = puVar16[-1];
      pMVar2 = (MainActor *)*puVar16;
      this = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = pMVar2;
      _swift_bridgeObjectRetain();
      pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
      puVar9 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBarViewModel.swift",0x1b,1,0xb9,UVar10.unknown,puVar9);
      }
      puVar16 = puVar16 + 2;
      FUN_100357cf0(auStack_90);
      lVar5 = lStack_70;
      uVar4 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(*(long *)(lVar5 + 8) + 0x20))(lVar14,pMVar2,uVar4);
      _swift_bridgeObjectRelease(pMVar2);
      FUN_100004594(auStack_90);
      _swift_release(pMVar8);
    } while (lVar14 == 0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
    uVar3 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
    if (uVar3 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,lVar14);
  } while( true );
}



/* Address: 0x10003b8a0 | FUN_10003b8a0 */

void FUN_10003b8a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  (*param_5)(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_3,param_4,local_50,lStack_48);
  *param_1 = param_3;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10003b920 | FUN_10003b920 */

undefined8 FUN_10003b920(void)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [4];
  
  local_50 = 0;
  uStack_48 = 0;
  puVar1 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  FUN_1002ccc34(local_40,0xd000000000000016,0x8000000100d8e530,&local_50,puVar1);
  return local_40[0];
}



/* Address: 0x10003b988 | FUN_10003b988 */

void FUN_10003b988(void)

{
  FUN_10003b990(0);
  return;
}



/* Address: 0x10003b990 | FUN_10003b990 */

void FUN_10003b990(undefined8 param_1)

{
  if (DAT_100fa81d8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca0c88);
  return;
}



/* Address: 0x10003b9c8 | FUN_10003b9c8 */

void FUN_10003b9c8(long param_1,ulong param_2)

{
  long lVar1;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_10003ba68();
  if (param_2 < 0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_48 = &DAT_100c252e8;
    local_28 = &DAT_100c25300;
    local_38 = puStack_50;
    puStack_30 = puStack_50;
    _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 200);
  }
  return;
}



/* Address: 0x10003ba68 | FUN_10003ba68 */

void FUN_10003ba68(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fa81e8.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fa81f0;
    FUN_100005c24(&DAT_100fa81f0,&DAT_100c2ae00);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fa81e8 = PVar2;
    }
  }
  return;
}



/* Address: 0x10003bac8 | FUN_10003bac8 */

void FUN_10003bac8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10003baec | FUN_10003baec */

void FUN_10003baec(void)

{
  FUN_10003c920(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10003baf8 | FUN_10003baf8 */

void FUN_10003baf8(void)

{
  long unaff_x20;
  
  FUN_10003b4c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10003bb00 | FUN_10003bb00 */

void FUN_10003bb00(long param_1,long param_2)

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



/* Address: 0x10003bb14 | FUN_10003bb14 */

void FUN_10003bb14(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10003bb1c | thunk_FUN_100099d50 */

void thunk_FUN_100099d50(void)

{
  FUN_100099d50();
  return;
}



/* Address: 0x10003bb20 | thunk_FUN_100099db8 */

void thunk_FUN_100099db8(void)

{
  FUN_100099db8();
  return;
}



/* Address: 0x10003bb24 | FUN_10003bb24 */

void FUN_10003bb24(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + _TtC5Paste15TabBarViewModel::_selectedListIdentifier);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10003bc18 | FUN_10003bc18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003bc18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &DAT_100c25380;
  _swift_getKeyPath(&DAT_100c25380);
  puVar4 = &DAT_100c253a8;
  _swift_getKeyPath(&DAT_100c253a8);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1002cb5a0(&local_50,uVar5,puVar3,puVar4);
  return;
}



/* Address: 0x10003bc98 | FUN_10003bc98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010003bd10) */

void FUN_10003bc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  NSArray *pNVar5;
  ID IVar6;
  undefined8 local_68;
  
  uVar4 = param_1;
  FUN_1003decbc();
  FUN_1000da768(&local_68);
  FUN_1003aeb84(param_1,uVar4,param_2,param_3,param_4);
  _swift_release(local_68);
  self = NSSharingService::sharingServiceNamed_
                   ((ID)&_OBJC_CLASS___NSSharingService,
                    *(undefined8 *)PTR__NSSharingServiceNameCloudSharing_100ea9118);
  if (self == 0) {
    _swift_bridgeObjectRelease(param_2);
    FUN_10003bf18(param_3,param_4);
  }
  else {
    puVar2 = &DAT_100fa82e0;
    FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
    puVar3 = puVar2;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    uVar4 = 0;
    FUN_10000ec2c(0,&DAT_100fa82e8,&PTR__OBJC_CLASS___NSItemProvider_100f8d720);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar3);
    IVar6 = NSSharingService::canPerformWithItems_(self,pNVar5);
    if ((IVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      FUN_10003bf18(param_3,param_4);
    }
    else {
      if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10003bf18);
        (*pcVar1)();
      }
      objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
      _swift_allocObject(puVar2,0x40,7);
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x38) = uVar4;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar2);
      NSSharingService::performWithItems_(self,pNVar5);
      _swift_bridgeObjectRelease(param_2);
      FUN_10003bf18(param_3,param_4);
    }
  }
  return;
}



/* Address: 0x10003bf18 | FUN_10003bf18 */

void FUN_10003bf18(undefined8 param_1,ulong param_2)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  FUN_10003bf2c();
  return;
}



/* Address: 0x10003bf2c | FUN_10003bf2c */

void FUN_10003bf2c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
  _swift_release(param_2 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10003bf6c | FUN_10003bf6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_10003bf6c(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ulong self;
  MainActor *this;
  ContiguousArray CVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ContiguousArray CVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  String local_e8;
  String local_d8;
  undefined *local_c8;
  NSString *local_a0 [4];
  NSString *local_80;
  NSString *local_78;
  NSString *local_70;
  
  local_a0[0] = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_a0[1] = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_a0[2] = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_a0[3] = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_80 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_78 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_70 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar17 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar17 != 0) {
    uVar19 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10003c398);
          (*pcVar2)();
        }
        self = *(ulong *)(param_1.unknown + uVar19 * 8 + 0x20);
      }
      else {
        self = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,param_1);
      }
      bVar3 = SCARRY8(uVar19,1);
      uVar19 = uVar19 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10003c394);
        (*pcVar2)();
      }
      this = Swift::MainActor::typeMetadataAccessor();
      CVar4.unknown = Swift::MainActor::get_shared(this,this);
      puVar5 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar13 = puVar5;
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      CVar14.unknown = (undefined *)puVar13;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        CVar14.unknown = (undefined *)0x1b;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBarViewModel.swift",0x1b,1,0x70,UVar6.unknown,puVar13);
      }
      lVar18 = 0;
      do {
        if (lVar18 == 0x38) {
          _swift_release();
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar4);
                    /* WARNING: Load size is inaccurate */
          CVar4.unknown = local_c8[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar4.unknown,CVar14);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar4.unknown,self);
          Swift::ContiguousArray::__endMutation(CVar4);
          goto LAB_10003c0f8;
        }
        pMVar9 = Swift::MainActor::get_shared(this,*(MainActor **)((long)local_a0 + lVar18));
        puVar13 = puVar5;
        UVar6 = Swift::Actor::get_unownedExecutor();
        UVar7 = UVar6;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar7.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBarViewModel.swift",0x1b,1,0x71,UVar6.unknown,puVar13);
        }
        objc_stub::description(self);
        local_d8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar15 = local_d8.bridgeObject;
        local_e8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar16 = local_e8.bridgeObject;
        pcVar8 = local_e8.str;
        FUN_100008378();
        CVar14.unknown = puVar12;
        bVar3 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_e8,puVar12,puVar12,pcVar8,pcVar8);
        _swift_release(pMVar9);
        _swift_bridgeObjectRelease(pvVar15);
        _swift_bridgeObjectRelease(pvVar16);
        lVar18 = lVar18 + 8;
      } while (!bVar3);
      _swift_release(CVar4.unknown);
LAB_10003c0f8:
      pcVar8 = local_c8;
    } while (uVar19 != uVar17);
  }
  uVar10 = 0;
  FUN_100003b1c(0);
  _swift_arrayDestroy(local_a0,7,uVar10);
  IVar11 = NSSharingService::sharingServiceNamed_
                     ((ID)&_OBJC_CLASS___NSSharingService,
                      *(undefined8 *)PTR__NSSharingServiceNameComposeMessage_100ea9120);
  if (IVar11 != 0) {
    puVar12 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    *(undefined8 *)(puVar12 + 0x18) = 3;
    *(undefined8 *)(puVar12 + 0x10) = 1;
    *(ID *)(puVar12 + 0x20) = IVar11;
    local_d8.str = puVar12;
    FUN_10008bd50(pcVar8);
    pcVar8 = local_d8.str;
  }
  return pcVar8;
}



/* Address: 0x10003c3b0 | FUN_10003c3b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010003c750) */

void FUN_10003c3b0(long param_1,ID param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  code *pcVar8;
  LocalizedStringResource LVar9;
  MainActor *this;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  _ArrayBuffer _Var16;
  long extraout_x8;
  ID self;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  ulong local_1d0;
  long local_1c8;
  LocalizedStringResource local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  char *local_1a8;
  long local_1a0;
  long local_190 [12];
  String local_130;
  String local_120;
  String local_110;
  code *local_100;
  undefined *puStack_f8;
  String local_f0;
  code *local_e0;
  undefined8 uStack_d8;
  String local_d0;
  String local_c0;
  String local_b0;
  code *local_a0;
  undefined *puStack_98;
  String local_90;
  code *local_80;
  undefined8 uStack_78;
  
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  local_1c0.unknown = (undefined *)((long)&local_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar18 = &DAT_100eb1910;
  _swift_allocObject(&DAT_100eb1910,0x20,7);
  *(long *)(puVar18 + 0x10) = param_1;
  *(ID *)(puVar18 + 0x18) = param_2;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_130.str = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar17 = *(ulong *)(param_1 + 0x10);
  local_1b8 = param_2;
  local_1b0 = puVar18;
  _swift_bridgeObjectRetain(param_1);
  local_1c8 = param_1;
  if (uVar17 == 0) {
    local_1a8 = puVar5;
  }
  else {
    uVar19 = 0;
    local_1a0 = -uVar17;
    local_1a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_1d0 = uVar17;
    do {
      uVar17 = uVar19;
      if (uVar19 <= local_1d0) {
        uVar17 = local_1d0;
      }
      puVar15 = (undefined8 *)(param_1 + 0x28 + uVar19 * 0x10);
      uVar19 = uVar19 + 1;
      while( true ) {
        if (uVar19 - uVar17 == 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10003c8f0);
          (*pcVar8)();
        }
        uVar3 = puVar15[-1];
        pMVar14 = (MainActor *)*puVar15;
        this = Swift::MainActor::typeMetadataAccessor();
        pMVar10 = pMVar14;
        _swift_bridgeObjectRetain();
        pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
        puVar11 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar12 = Swift::Actor::get_unownedExecutor();
        UVar13 = UVar12;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar13.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBarViewModel.swift",0x1b,1,0xbe,UVar12.unknown,puVar11);
        }
        local_c0.bridgeObject = pMVar14;
        local_c0.str = (char *)uVar3;
        puVar18 = &DAT_100fa82f8;
        FUN_1000037f0(&DAT_100fa82f8,&DAT_100c25368);
        FUN_100357f60(local_190,FUN_10003c958,&local_d0,puVar18);
        _swift_bridgeObjectRelease(pMVar14);
        _swift_release(pMVar10);
        lVar7 = local_190[0];
        if (local_190[0] != 0) break;
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 2;
        if (local_1a0 + uVar19 == 1) goto LAB_10003c5ec;
      }
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar17 = *(ulong *)(((ulong)local_130.str & 0xffffffffffffff8) + 0x10);
      uVar4 = *(ulong *)(((ulong)local_130.str & 0xffffffffffffff8) + 0x18);
      if (uVar4 >> 1 <= uVar17) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar17 + 1,1);
      }
      lVar1 = local_1a0 + uVar19;
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,lVar7);
      local_1a8 = local_130.str;
    } while (lVar1 != 0);
  }
LAB_10003c5ec:
  pcVar6 = local_1a8;
  puVar18 = (undefined *)((ulong)local_1a8 & 0xffffffffffffff8);
  if ((ulong)local_1a8 >> 0x3e == 0) {
    uVar17 = *(ulong *)(puVar18 + 0x10);
  }
  else {
    _Var2.unknown = puVar18;
    if ((char *)0x7fffffffffffffff < local_1a8) {
      _Var2.unknown = local_1a8;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  uVar19 = 0;
  _Var16.unknown = pcVar6;
  do {
    if (uVar17 == uVar19) {
      _swift_bridgeObjectRelease();
      self = local_1b8;
      FUN_100328e60();
      if (((ulong)_Var16.unknown & 1) == 0) {
        local_c0.bridgeObject = (void *)self;
        local_c0.str = (char *)local_1c8;
        local_120.bridgeObject = &local_d0;
        local_120.str = (char *)FUN_10003c9e8;
        puVar18 = &DAT_100fa8308;
        FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
        FUN_100357d14(local_190,FUN_10003c9f0,&local_130,puVar18);
        _swift_release(local_1b0);
        return;
      }
      goto LAB_10003c76c;
    }
    if (((ulong)pcVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar18 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10003c8f8);
        (*pcVar8)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var16);
    }
    if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10003c8f4);
      (*pcVar8)();
    }
    pMVar14 = Swift::MainActor::typeMetadataAccessor();
    pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
    puVar15 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar12 = Swift::Actor::get_unownedExecutor();
    UVar13 = UVar12;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar13.unknown & 1) == 0) {
      UVar13.unknown = (undefined *)0x0;
      _swift_task_reportUnexpectedExecutor
                ("Paste/TabBarViewModel.swift",0x1b,1,0xbf,UVar12.unknown,puVar15);
    }
    FUN_100321210();
    _swift_release(pMVar14);
    uVar19 = uVar19 + 1;
    _Var16.unknown = local_1a8;
  } while (((ulong)UVar13.unknown & 1) == 0);
  _swift_bridgeObjectRelease();
  self = local_1b8;
LAB_10003c76c:
  objc_stub::name(self);
  SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  LVar9.unknown = local_1c0.unknown;
  thunk_FUN_1001e6b18(local_1c0.unknown,SVar20.str,SVar20.bridgeObject);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar20 = (extension_Foundation)::Swift::String::init(LVar9);
  objc_stub::name(self);
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  thunk_FUN_1001e6b08(LVar9.unknown,SVar21.str,SVar21.bridgeObject);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar9);
  FUN_1001c1508(LVar9.unknown);
  SVar22 = (extension_Foundation)::Swift::String::init(LVar9);
  puVar18 = local_1b0;
  _swift_retain(local_1b0);
  FUN_1001c0788(LVar9.unknown);
  local_f0 = (extension_Foundation)::Swift::String::init(LVar9);
  local_a0 = FUN_10003c950;
  puStack_98 = puVar18;
  local_80 = FUN_100004520;
  uStack_78 = 0;
  local_100 = FUN_10003c950;
  puStack_f8 = puVar18;
  local_e0 = FUN_100004520;
  uStack_d8 = 0;
  local_130 = SVar20;
  local_120 = SVar21;
  local_110 = SVar22;
  local_d0 = SVar20;
  local_c0 = SVar21;
  local_b0 = SVar22;
  local_90 = local_f0;
  FUN_10003c978(&local_d0,local_190);
  FUN_10003c9b4(&local_130);
  FUN_10000ec2c(0,&DAT_100fa8300,&PTR__OBJC_CLASS___NSAlert_100f8d6f0);
  FUN_1003b6cfc(&local_d0);
  _swift_release(puVar18);
  FUN_10003c9b4(&local_d0);
  return;
}



/* Address: 0x10003c914 | FUN_10003c914 */

void FUN_10003c914(void)

{
  FUN_10003c920(PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x10003c920 | FUN_10003c920 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003c920(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10003c950 | FUN_10003c950 */

void FUN_10003c950(void)

{
  long unaff_x20;
  
  FUN_10003b5c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10003c958 | FUN_10003c958 */

void FUN_10003c958(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10003b8a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_1003594c0);
  return;
}



/* Address: 0x10003c978 | FUN_10003c978 */

undefined8 FUN_10003c978(undefined8 param_1,undefined8 param_2)

{
  FUN_1003b7028(param_2,param_1);
  return param_2;
}



/* Address: 0x10003c9b4 | FUN_10003c9b4 */

undefined8 FUN_10003c9b4(undefined8 param_1)

{
  FUN_1003b6fd0();
  return param_1;
}



/* Address: 0x10003c9e8 | FUN_10003c9e8 */

void FUN_10003c9e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10003b634(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10003c9f0 | FUN_10003c9f0 */

void FUN_10003c9f0(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = 0;
  return;
}



/* Address: 0x10003ca28 | thunk_FUN_10003bb24 */

void thunk_FUN_10003bb24(void)

{
  FUN_10003bb24();
  return;
}



/* Address: 0x10003ca2c | thunk_FUN_10003bc18 */

void thunk_FUN_10003bc18(void)

{
  FUN_10003bc18();
  return;
}



/* Address: 0x10003ca30 | thunk_FUN_10008d74c */

void thunk_FUN_10008d74c(void)

{
  FUN_10008d74c();
  return;
}



/* Address: 0x10003ca34 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10003ca38 | thunk_FUN_1000b0718 */

void thunk_FUN_1000b0718(void)

{
  FUN_1000b0718();
  return;
}



/* Address: 0x10003ca3c | FUN_10003ca3c */

void FUN_10003ca3c(void)

{
  FUN_10003a824();
  return;
}



/* Address: 0x10003ca44 | FUN_10003ca44 */

void FUN_10003ca44(void)

{
  FUN_10003a900();
  return;
}



/* Address: 0x10003ca4c | FUN_10003ca4c */

void FUN_10003ca4c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10003ca70 | FUN_10003ca70 */

void FUN_10003ca70(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}


