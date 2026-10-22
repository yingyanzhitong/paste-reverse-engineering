/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100028a40 | FUN_100028a40 */

undefined8 FUN_100028a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7968;
  FUN_1000037f0(&DAT_100fa7968,&DAT_100c247f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100028a90 | FUN_100028a90 */

undefined8 FUN_100028a90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7968;
  FUN_1000037f0(&DAT_100fa7968,&DAT_100c247f0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100028ad8 | FUN_100028ad8 */

void FUN_100028ad8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  
  uVar5 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar6 = param_2[0x28];
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SidebarView.swift",0x17,1,0xb,UVar10.unknown,puVar9)
    ;
  }
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_release(pMVar8);
  *param_1 = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  param_1[0x28] = uVar6;
  return;
}



/* Address: 0x100028bc0 | FUN_100028bc0 */

void FUN_100028bc0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100028be8 | FUN_100028be8 */

undefined1 * FUN_100028be8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_1[0x28] = param_2[0x28];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100028c34 | FUN_100028c34 */

undefined1 * FUN_100028c34(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Address: 0x100028cb0 | FUN_100028cb0 */

void FUN_100028cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100028cc4 | FUN_100028cc4 */

undefined1 * FUN_100028cc4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Address: 0x100028d18 | FUN_100028d18 */

int FUN_100028d18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100028d60 | FUN_100028d60 */

void FUN_100028d60(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100028dac | FUN_100028dac */

undefined1  [16] FUN_100028dac(void)

{
  return ZEXT816(0x100eb0f18);
}



/* Address: 0x100028dbc | thunk_FUN_100028dc0 */

void thunk_FUN_100028dc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa79d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7908;
  FUN_100005c24(&DAT_100fa7908,&DAT_100c24750);
  puVar2 = &DAT_100fa79e0;
  FUN_100016eac(&DAT_100fa79e0,&DAT_100fa79e8,&DAT_100c24848,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa79d8 = puVar3;
  return;
}



/* Address: 0x100028dc0 | FUN_100028dc0 */

void FUN_100028dc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa79d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7908;
  FUN_100005c24(&DAT_100fa7908,&DAT_100c24750);
  puVar2 = &DAT_100fa79e0;
  FUN_100016eac(&DAT_100fa79e0,&DAT_100fa79e8,&DAT_100c24848,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa79d8 = puVar3;
  return;
}



/* Address: 0x100028e58 | FUN_100028e58 */

void FUN_100028e58(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca089c,1);
  return;
}



/* Address: 0x100028e68 | FUN_100028e68 */

void FUN_100028e68(void)

{
  long unaff_x20;
  
  FUN_100027be0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100028e70 | FUN_100028e70 */

void FUN_100028e70(void)

{
  long unaff_x20;
  
  FUN_100027cdc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100028e78 | FUN_100028e78 */

void FUN_100028e78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    _swift_retain(param_5);
    _swift_retain(param_1);
    _swift_retain(param_2);
    _swift_retain(param_3);
    _swift_retain(param_4);
    return;
  }
  return;
}



/* Address: 0x100028ed4 | FUN_100028ed4 */

void FUN_100028ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_release(param_2);
    _swift_release(param_4);
    _swift_release(param_3);
    _swift_release(param_5);
    return;
  }
  return;
}



/* Address: 0x100028f2c | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100028f30 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100028f34 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100028f38 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100028f3c | FUN_100028f3c */

void FUN_100028f3c(void)

{
  FUN_100016eac(&DAT_100fa7a10,&DAT_100fa7a18,&DAT_100c24918,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  return;
}



/* Address: 0x100028f70 | FUN_100028f70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100028f70(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID self;
  ID self_00;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::itemPreviewWindowManager;
  puVar3 = &DAT_100c24930;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa840;
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::router;
  puVar3 = &DAT_100c24958;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::screensharingPrivacyManager;
  puVar3 = &DAT_100c24980;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa6a70;
  FUN_1000037f0(&DAT_100fa6a70,&DAT_100c23430);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined **)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined1 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::isDisplayed) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::context) = param_1;
  FUN_10000444c(param_1);
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  objc_stub::setBehavior_(self,1);
  objc_stub::setAnimates_(self,1);
  objc_stub::setDelegate_(self,self);
  self_00 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fa7050 != -1) {
    _swift_once(&DAT_100fa7050,FUN_10001a1dc);
  }
  NSNotificationCenter::addObserver_selector_name_object_(self_00,self,"close",DAT_101056fd8,0);
  FUN_1000291b8(0);
  FUN_100021e40(param_1);
  return self;
}



/* Address: 0x1000291b8 | FUN_1000291b8 */

void FUN_1000291b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar6;
  AnyCancellable *this;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined *local_d0;
  long alStack_c8 [3];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100fa7aa0;
  FUN_1000037f0(&DAT_100fa7aa0,&DAT_100c28b50);
  local_d8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(alStack_c8);
  plVar3 = alStack_c8;
  FUN_100004640(plVar3,local_b0);
  lVar7 = *plVar3;
  uVar11 = *(undefined8 *)(lVar7 + 0x18);
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  uStack_88 = *(undefined8 *)(lVar7 + 0x28);
  uVar12 = *(undefined8 *)(lVar7 + 0x20);
  uStack_78 = *(undefined8 *)(lVar7 + 0x38);
  uVar10 = *(undefined8 *)(lVar7 + 0x30);
  uVar8 = *(undefined8 *)(lVar7 + 0x40);
  local_a0 = uVar9;
  uStack_98 = uVar11;
  local_90 = uVar12;
  local_80 = uVar10;
  local_70 = uVar8;
  _swift_retain(uVar9);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar8);
  puVar4 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar12);
  _swift_release(uVar11);
  _swift_release(uVar9);
  puVar5 = &DAT_100c249a8;
  local_d0 = puVar4;
  _swift_getKeyPath(&DAT_100c249a8);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  puVar1 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar4);
  _swift_release(puVar5);
  FUN_100016eac(&DAT_100fa7ac0,&DAT_100fa7aa0,&DAT_100c28b50,
                PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
               );
  AVar6 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_d8 + 8))(auStack_e0 + -extraout_x8,puVar2);
  puVar2 = &DAT_100eb0f90;
  local_d0 = AVar6.unknown;
  _swift_allocObject(&DAT_100eb0f90,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  FUN_1000037f0(&DAT_100fa7ac8,&DAT_100c28460);
  FUN_100016eac(&DAT_100fa7ad0,&DAT_100fa7ac8,&DAT_100c28460,puVar1);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(AVar6.unknown);
  _swift_release(puVar2);
  FUN_100004594(alStack_c8);
  lVar7 = _TtCC5Paste18ItemCollectionView14PreviewPopover::cancellables;
  _swift_beginAccess(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::cancellables,
                     alStack_c8,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar7));
  _swift_endAccess(alStack_c8);
  _swift_release(this);
  return;
}



/* Address: 0x10002948c | _TtCC5Paste18ItemCollectionView14PreviewPopover::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste18ItemCollectionView14PreviewPopover::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x100029514 | _TtCC5Paste18ItemCollectionView14PreviewPopover::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste18ItemCollectionView14PreviewPopover::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onWillClose),((undefined8 *)(param_1 + onWillClose))[1]);
  _swift_release(*(undefined8 *)(param_1 + itemPreviewWindowManager));
  _swift_release(*(undefined8 *)(param_1 + router));
  _swift_release(*(undefined8 *)(param_1 + screensharingPrivacyManager));
  FUN_100021e40(*(undefined8 *)(param_1 + context));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x1000295a0 | _TtCC5Paste18ItemCollectionView14PreviewPopover::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste18ItemCollectionView14PreviewPopover::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/ItemCollectionView.PreviewPopover.swift",0x2d,1,0x24,UVar3.unknown,pMVar1);
  }
  FUN_10002a478();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10002964c | FUN_10002964c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10002964c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,ID param_6)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID self;
  ID IVar6;
  ID unaff_x20;
  undefined8 uVar7;
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined **ppuStack_68;
  undefined **local_60;
  undefined **ppuStack_58;
  
  *(ID *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item) = param_5;
  FUN_1000da768(local_88);
  IVar2 = param_5;
  FUN_10008747c();
  objc_stub::close(IVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::context);
  uVar3 = 0;
  FUN_1001adc9c();
  ppuStack_68 = &PTR_PTR_100eafe88;
  local_60 = &PTR_PTR_100ebe100;
  ppuStack_58 = &PTR_PTR_100ec6cd0;
  local_70 = uVar3;
  FUN_10000444c(uVar7);
  FUN_1000da768(local_88);
  FUN_1003c41f0();
  _swift_allocObject();
  IVar2 = param_5;
  FUN_1003c25dc(param_5,uVar7,local_88);
  FUN_10007c86c(0);
  _objc_allocWithZone();
  IVar6 = IVar2;
  FUN_10007c994();
  puVar5 = &DAT_100eb0f90;
  _swift_allocObject(&DAT_100eb0f90,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar4 = &DAT_100eb0fb8;
  _swift_allocObject(&DAT_100eb0fb8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar5;
  *(ID *)(puVar4 + 0x18) = param_5;
  puVar1 = (undefined8 *)(IVar6 + _TtC5Paste15ItemPreviewView::onBeginEditing);
  uVar3 = *puVar1;
  uVar7 = puVar1[1];
  *puVar1 = FUN_10002a3f8;
  puVar1[1] = puVar4;
  _swift_retain(puVar5);
  FUN_100004550(uVar3,uVar7);
  _swift_release(puVar5);
  puVar5 = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar5);
  objc_stub::frame(IVar6);
  objc_stub::setPreferredContentSize_(self,param_3,param_4);
  objc_stub::setView_(self,IVar6);
  objc_stub::setContentViewController_(unaff_x20,self);
  objc_stub::bounds(param_6);
  objc_stub::showRelativeToRect_ofView_preferredEdge_(unaff_x20,param_6,3);
  objc_stub::setAnimates_(unaff_x20,0);
  IVar6 = objc_stub::window(param_6);
  if (IVar6 != 0) {
    objc_stub::makeFirstResponder_(IVar6,0);
  }
  _swift_release(IVar2);
  return;
}



/* Address: 0x1000298b0 | FUN_1000298b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000298b0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_38 [8];
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)
             (lVar1 + _TtCC5Paste18ItemCollectionView14PreviewPopover::itemPreviewWindowManager);
    _swift_retain(uVar2);
    FUN_1000da768(local_38,0);
    _swift_release(uVar2);
    FUN_10008747c();
    if (param_2 != 0) {
      return;
    }
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100029958();
  }
  return;
}



/* Address: 0x100029958 | FUN_100029958 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_100029958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID self;
  ID unaff_x20;
  undefined8 extraout_d0;
  
  IVar1 = objc_stub::contentViewController(unaff_x20);
  if ((IVar1 != 0) && (IVar1 = objc_stub::view(IVar1), IVar1 != 0)) {
    self = objc_stub::window(IVar1);
    if (self != 0) {
      objc_stub::frame(IVar1);
      objc_stub::convertRectToScreen_(self);
      objc_stub::setAlphaValue_(self,0);
      objc_stub::close(unaff_x20);
      IVar1 = 1;
      FUN_100029a80(1,0);
      objc_stub::setFrame_display_(IVar1,extraout_d0,param_2,param_3,param_4,0);
      if (IVar1 != 0) {
        objc_stub::makeKeyAndOrderFront_(IVar1,0);
      }
    }
    return 0;
  }
  return 0;
}



/* Address: 0x100029a80 | FUN_100029a80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100029a80(uint param_1,byte param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID self;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined **ppuStack_78;
  undefined **local_70;
  undefined **ppuStack_68;
  
  lVar7 = *(long *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item);
  if (lVar7 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = 0;
    FUN_1000afc14();
    _objc_allocWithZone();
    IVar2 = objc_stub::init(IVar2);
    uVar8 = *(undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::context);
    uVar3 = 0;
    FUN_1001adc9c();
    ppuStack_78 = &PTR_PTR_100eafe88;
    local_70 = &PTR_PTR_100ebe100;
    ppuStack_68 = &PTR_PTR_100ec6cd0;
    local_80 = uVar3;
    FUN_10000444c(uVar8);
    FUN_1000da768(local_98);
    FUN_1003c41f0();
    _swift_allocObject();
    lVar4 = lVar7;
    FUN_1003c25dc(lVar7,uVar8,local_98);
    FUN_10007c86c(0);
    _objc_allocWithZone();
    lVar5 = lVar4;
    FUN_10007c994();
    puVar6 = &DAT_100eb0fe0;
    _swift_allocObject(&DAT_100eb0fe0,0x20,7);
    puVar6[0x10] = param_2 & 1;
    *(ID *)(puVar6 + 0x18) = IVar2;
    puVar1 = (undefined8 *)(lVar5 + _TtC5Paste15ItemPreviewView::onEndEditing);
    uVar3 = *puVar1;
    uVar8 = puVar1[1];
    *puVar1 = FUN_10002a424;
    puVar1[1] = puVar6;
    FUN_100004550(uVar3,uVar8);
    uVar9 = *(undefined8 *)
             (unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::itemPreviewWindowManager)
    ;
    puVar6 = &DAT_100eb1008;
    _swift_allocObject(&DAT_100eb1008,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar9;
    *(long *)(puVar6 + 0x18) = lVar7;
    puVar1 = (undefined8 *)(lVar5 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
    uVar3 = *puVar1;
    uVar8 = puVar1[1];
    *puVar1 = FUN_10000458c;
    puVar1[1] = puVar6;
    _swift_retain(uVar9);
    FUN_100004550(uVar3,uVar8);
    if ((param_1 & 1) != 0) {
      FUN_10007be8c();
    }
    puVar6 = &_OBJC_CLASS___NSViewController;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar6);
    objc_stub::setView_(self,lVar5);
    objc_stub::setContentViewController_(IVar2,self);
    FUN_1000da768(local_98);
    FUN_100086c10(IVar2,lVar7,param_1 & 1);
    _swift_release(lVar4);
  }
  return IVar2;
}



/* Address: 0x100029d00 | _TtCC5Paste18ItemCollectionView14PreviewPopover::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC5Paste18ItemCollectionView14PreviewPopover::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.PreviewPopover.swift",0x2d,1,8,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.PreviewPopover",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100029d88);
  (*pcVar1)();
}



/* Address: 0x100029d88 | FUN_100029d88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100029d88(void)

{
  return ZEXT816(0x100f8fbd0);
}



/* Address: 0x100029da8 | FUN_100029da8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100029da8(void)

{
  undefined8 *puVar1;
  ID unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  long local_38;
  
  objc_stub::setAnimates_(unaff_x20,1);
  *(undefined1 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::isDisplayed) = 0;
  pcVar3 = *(code **)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::onWillClose);
  if (pcVar3 != (code *)0x0) {
    uVar2 = ((undefined8 *)
            (unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::onWillClose))[1];
    _swift_retain(uVar2);
    (*pcVar3)();
    FUN_100004550(pcVar3,uVar2);
  }
  FUN_1000da768(&local_38);
  puVar1 = (undefined8 *)(local_38 + _TtC5Paste24ItemPreviewWindowManager::popoverItemIdentifier);
  if (puVar1[1] != 0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_bridgeObjectRelease();
    FUN_100087864();
  }
  return 0;
}



/* Address: 0x100029e5c | _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverWillClose: */

/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverWillClose_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_10002a0cc();
  return;
}



/* Address: 0x100029e6c | FUN_100029e6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100029e6c(void)

{
  String *pSVar1;
  String SVar2;
  bool bVar3;
  long unaff_x20;
  _StringGuts _Var4;
  String SVar5;
  long local_48;
  
  *(undefined1 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::isDisplayed) = 1;
  FUN_100029f60();
  if (*(ID *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item) != 0) {
    objc_stub::identifier
              (*(ID *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item));
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_1000da768(&local_48,0);
    pSVar1 = (String *)(local_48 + _TtC5Paste24ItemPreviewWindowManager::popoverItemIdentifier);
    _Var4.unknown = pSVar1->bridgeObject;
    if ((_Var4.unknown == (undefined *)0x0) ||
       ((SVar2.bridgeObject = _Var4.unknown, SVar2.str = pSVar1->str, SVar5 != SVar2 &&
        (bVar3 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)pSVar1->str,_Var4,
                            (_StringComparisonResult)(__int8)SVar5.str), !bVar3)))) {
      *pSVar1 = SVar5;
      _swift_bridgeObjectRetain(SVar5.bridgeObject);
      _swift_bridgeObjectRelease(_Var4.unknown);
      FUN_100087864();
    }
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  return 0;
}



/* Address: 0x100029f60 | FUN_100029f60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100029f60(void)

{
  ID IVar1;
  long *plVar2;
  long lVar3;
  ID unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte local_b9;
  long alStack_b8 [3];
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  IVar1 = objc_stub::contentViewController(unaff_x20);
  if (IVar1 != 0) {
    IVar1 = objc_stub::view(IVar1);
    IVar1 = objc_stub::window(IVar1);
    if (IVar1 != 0) {
      FUN_1000da768(alStack_b8,0);
      plVar2 = alStack_b8;
      FUN_100004640(plVar2,local_a0);
      lVar3 = *plVar2;
      uVar7 = *(undefined8 *)(lVar3 + 0x18);
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      uStack_78 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      uStack_68 = *(undefined8 *)(lVar3 + 0x38);
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      local_90 = uVar5;
      uStack_88 = uVar7;
      local_80 = uVar8;
      local_70 = uVar6;
      local_60 = uVar4;
      _swift_retain(uVar5);
      _swift_retain(uVar7);
      _swift_retain(uVar8);
      _swift_retain(uVar6);
      _swift_retain(uVar4);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(&local_b9);
      _swift_release(uVar4);
      _swift_release(uVar6);
      _swift_release(uVar8);
      _swift_release(uVar7);
      _swift_release(uVar5);
      objc_stub::setSharingType_(IVar1,(ulong)local_b9);
      FUN_100004594(alStack_b8);
    }
  }
  return;
}



/* Address: 0x10002a0bc | _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverWillShow: */

/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverWillShow_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_10002a0cc();
  return;
}



/* Address: 0x10002a0cc | FUN_10002a0cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002a0cc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,code *param_5)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  long extraout_x8;
  long lVar7;
  Notification NVar8;
  void *pvVar6;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar8.syncInProgress.bridgeObject;
  pcVar5 = NVar8.syncInProgress.str;
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar7 + 0x40),pcVar1,NVar8.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x2d;
    pcVar5 = &DAT_00000001;
    _swift_task_reportUnexpectedExecutor("Paste/ItemCollectionView.PreviewPopover.swift");
    pvVar6 = param_4;
  }
  NVar8.pastePaused.bridgeObject = pMVar2;
  NVar8.pastePaused.str = param_3;
  NVar8.syncInProgress.bridgeObject = pvVar6;
  NVar8.syncInProgress.str = pcVar5;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  (*param_5)(param_1,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
             NVar8.syncInProgress.bridgeObject);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10002a1e8 | _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverShouldDetach: */

/* Function Stack Size: 0x18 bytes */

bool _TtCC5Paste18ItemCollectionView14PreviewPopover::popoverShouldDetach_
               (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/ItemCollectionView.PreviewPopover.swift",0x2d,1,0x81,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x10002a26c | _TtCC5Paste18ItemCollectionView14PreviewPopover::detachableWindowForPopover: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste18ItemCollectionView14PreviewPopover::detachableWindowForPopover_
             (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.PreviewPopover.swift",0x2d,1,0x85,UVar3.unknown,pMVar1);
  }
  IVar5 = 0;
  FUN_100029a80(0,1);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x10002a31c | FUN_10002a31c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_10002a31c(undefined8 param_1,long param_2)

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
              ("Paste/ItemCollectionView.PreviewPopover.swift",0x2d,1,0x8d,UVar3.unknown,pMVar1);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100029f60();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10002a3d0 | FUN_10002a3d0 */

void FUN_10002a3d0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10002a3f4 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  FUN_10002a438();
  return;
}



/* Address: 0x10002a3f8 | FUN_10002a3f8 */

void FUN_10002a3f8(void)

{
  long unaff_x20;
  
  FUN_1000298b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10002a400 | FUN_10002a400 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002a400(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10002a424 | FUN_10002a424 */

void FUN_10002a424(void)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    return;
  }
  objc_stub::close(*(ID *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10002a438 | FUN_10002a438 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002a438(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10002a464 | thunk_FUN_100004214 */

void thunk_FUN_100004214(void)

{
  FUN_100004214();
  return;
}



/* Address: 0x10002a468 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x10002a46c | thunk_FUN_100009208 */

void thunk_FUN_100009208(void)

{
  FUN_100009208();
  return;
}



/* Address: 0x10002a470 | FUN_10002a470 */

void FUN_10002a470(void)

{
  FUN_10002a31c();
  return;
}



/* Address: 0x10002a478 | FUN_10002a478 */

void FUN_10002a478(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  String SVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::itemPreviewWindowManager;
  puVar4 = &DAT_100c24930;
  _swift_getKeyPath();
  puVar5 = &DAT_100faa840;
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::router;
  puVar4 = &DAT_100c24958;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _TtCC5Paste18ItemCollectionView14PreviewPopover::screensharingPrivacyManager;
  puVar4 = &DAT_100c24980;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa6a70;
  FUN_1000037f0(&DAT_100fa6a70,&DAT_100c23430);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined **)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined1 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::isDisplayed) = 0;
  *(undefined8 *)(unaff_x20 + _TtCC5Paste18ItemCollectionView14PreviewPopover::item) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e270);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10002a5fc);
  (*pcVar3)();
}



/* Address: 0x10002a5fc | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  FUN_10002a438();
  return;
}



/* Address: 0x10002a600 | FUN_10002a600 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002a600(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste27PaneContainerViewController::___lazy_storage___titleView;
  self = *(ID *)(unaff_x20 + _TtC5Paste27PaneContainerViewController::___lazy_storage___titleView);
  if (self == 0) {
    FUN_10002b6e4();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002a668 | FUN_10002a668 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002a668(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  ID self_01;
  long unaff_x20;
  
  lVar1 = _TtC5Paste27PaneContainerViewController::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC5Paste27PaneContainerViewController::___lazy_storage___scrollView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSScrollView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setDrawsBackground_(self,0);
    objc_stub::setHasVerticalScroller_(self,1);
    self_01 = objc_stub::contentView(self);
    objc_stub::setPostsBoundsChangedNotifications_(self_01,1);
    objc_stub::setBorderType_(self,0);
    objc_stub::setAutomaticallyAdjustsContentInsets_(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002a72c | FUN_10002a72c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10002a72c(void)

{
  ID self;
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC5Paste27PaneContainerViewController::___lazy_storage___titleView)
       = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste27PaneContainerViewController::___lazy_storage___scrollView)
       = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithNibName:bundle:",0,0);
  IVar1 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  objc_stub::setView_(self,IVar1);
  objc_stub::view(self);
  puVar2 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  puVar3 = puVar2;
  FUN_10002a668();
  *(undefined **)(puVar2 + 0x20) = puVar3;
  FUN_10002a600();
  *(undefined **)(puVar2 + 0x28) = puVar3;
  local_90 = self;
  FUN_1001fa150(puVar2,FUN_10002b7d8,auStack_a0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return self;
}



/* Address: 0x10002a890 | FUN_10002a890 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10002a890(ID param_1)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID *pIVar5;
  ID *pIVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID local_a0 [3];
  undefined8 local_88;
  undefined **ppuStack_80;
  ID local_78;
  
  IVar2 = param_1;
  FUN_10002a668();
  local_78 = IVar2;
  IVar2 = objc_stub::view(param_1);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_80 = &PTR_PTR_100ec00e8;
  uVar4 = 0;
  local_a0[0] = IVar2;
  local_88 = uVar3;
  FUN_10000ec2c(0,&DAT_100fa7b60,&PTR__OBJC_CLASS___NSScrollView_100f8d700);
  pIVar5 = local_a0;
  FUN_1001f97b4(0x404a000000000000,0,0,0,pIVar5,uVar4,&PTR_PTR_100ec00e8);
  pIVar6 = local_a0;
  FUN_100004594();
  FUN_10002a600();
  IVar2 = objc_stub::heightAnchor((ID)pIVar6);
  IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x404a000000000000);
  lVar1 = _TtC5Paste27PaneContainerViewController::___lazy_storage___titleView;
  IVar7 = objc_stub::topAnchor
                    (*(ID *)(param_1 +
                            _TtC5Paste27PaneContainerViewController::___lazy_storage___titleView));
  IVar8 = objc_stub::view(param_1);
  IVar8 = objc_stub::topAnchor(IVar8);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar7,IVar8);
  local_78 = *(undefined8 *)(param_1 + lVar1);
  local_a0[0] = objc_stub::view(param_1);
  ppuStack_80 = &PTR_PTR_100ec00e8;
  uVar4 = 0;
  local_88 = uVar3;
  FUN_10002b6e4(0);
  pIVar6 = local_a0;
  FUN_1001f9b74(0,pIVar6,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a0);
  puVar9 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 8;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  puVar10 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined ***)(puVar9 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar9 + 0x20) = pIVar5;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar9 + 0x60) = uVar3;
  *(undefined ***)(puVar9 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x48) = IVar2;
  *(undefined8 *)(puVar9 + 0x88) = uVar3;
  *(undefined ***)(puVar9 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar9 + 0x70) = IVar7;
  *(undefined **)(puVar9 + 0xb0) = puVar10;
  *(undefined ***)(puVar9 + 0xb8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar9 + 0x98) = pIVar6;
  _swift_bridgeObjectRetain(pIVar5);
  puVar11 = puVar9;
  FUN_1001f8d60(puVar9);
  _swift_bridgeObjectRelease(pIVar5);
  _swift_setDeallocating(puVar9);
  uVar3 = *(undefined8 *)(puVar9 + 0x10);
  puVar10 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar9 + 0x20,uVar3,puVar10);
  return puVar11;
}



/* Address: 0x10002aba4 | _TtC5Paste27PaneContainerViewController::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste27PaneContainerViewController::init(ID param_1,SEL param_2)

{
  FUN_10002b550(param_1,param_2,0x11,FUN_10002a72c);
  return param_1;
}



/* Address: 0x10002abb4 | _TtC5Paste27PaneContainerViewController::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste27PaneContainerViewController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PaneContainerViewController.swift",0x27,1,0x22,UVar3.unknown,pMVar2);
  }
  *(undefined8 *)(param_1 + ___lazy_storage___titleView) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___scrollView) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e2c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ac88);
  (*pcVar1)();
}



/* Address: 0x10002ac88 | FUN_10002ac88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010002ad44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_10002ac88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  AnyView AVar2;
  Set _all;
  Alignment AVar3;
  NSHostingView *pNVar4;
  undefined **self;
  ID self_00;
  undefined8 *self_01;
  NSString *pNVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined *local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined2 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  uint7 uStack_1b8;
  undefined1 local_1b1;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  undefined1 local_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 local_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  
  AVar3.unknown = (undefined *)&local_290;
  self = &local_290;
  uVar6 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar6);
  (**(code **)(lVar1 + 0x20))(&local_290,uVar6,lVar1);
  FUN_100004640(&local_290,local_278);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(local_278 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))((long)&local_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar2 = SwiftUI::AnyView::_init(param_5,local_278,local_270);
  _all = SwiftUI::Edge::Set::get_horizontal(AVar2.unknown);
  uVar6 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  FUN_100004594();
  SwiftUI::Alignment::get_center(AVar3);
  SwiftUI::_FrameLayout::_init((Alignment)0x407b800000000000);
  uStack_1a9 = (undefined1)uStack_178;
  uStack_1a8 = (undefined7)((ulong)uStack_178 >> 8);
  local_1b1 = (undefined1)local_180;
  uStack_1b0 = (undefined7)((ulong)local_180 >> 8);
  uStack_199 = (undefined1)uStack_168;
  uStack_198 = (undefined7)((ulong)uStack_168 >> 8);
  local_1a1 = (undefined1)uStack_170;
  uStack_1a0 = (undefined7)((ulong)uStack_170 >> 8);
  uStack_189 = (undefined1)uStack_158;
  uStack_188 = (undefined7)((ulong)uStack_158 >> 8);
  local_191 = (undefined1)local_160;
  uStack_190 = (undefined7)((ulong)local_160 >> 8);
  uStack_148 = SUB81(_all.unknown,0);
  local_120 = 0;
  uStack_9f = CONCAT17(uStack_199,uStack_1a0);
  local_a7 = CONCAT17(local_1a1,uStack_1a8);
  uStack_f7 = uStack_190;
  uStack_f0 = uStack_189;
  local_ff = uStack_198;
  uStack_f8 = local_191;
  uStack_af = CONCAT17(uStack_1a9,uStack_1b0);
  local_b7 = CONCAT17(local_1b1,uStack_1b8);
  uStack_107 = uStack_1a0;
  uStack_100 = uStack_199;
  local_10f = uStack_1a8;
  uStack_108 = local_1a1;
  uStack_117 = uStack_1b0;
  uStack_110 = uStack_1a9;
  uStack_118 = local_1b1;
  uStack_288 = CONCAT71(uStack_147,uStack_148);
  lStack_260 = (ulong)uStack_1b8 << 8;
  local_b8 = 0;
  local_97 = CONCAT17(local_191,uStack_198);
  uStack_8f = uStack_190;
  uStack_88 = uStack_189;
  local_290 = AVar2.unknown;
  uStack_280 = uVar6;
  local_278 = param_2;
  local_270 = param_3;
  uStack_268 = param_4;
  local_150 = AVar2.unknown;
  local_140 = uVar6;
  uStack_138 = param_2;
  local_130 = param_3;
  uStack_128 = param_4;
  uStack_ef = uStack_188;
  local_e8 = AVar2.unknown;
  local_e0 = uStack_148;
  local_d8 = uVar6;
  uStack_d0 = param_2;
  local_c8 = param_3;
  uStack_c0 = param_4;
  uStack_87 = uStack_188;
  FUN_10002b704(&local_150,&local_220);
  FUN_10002b754(&local_e8);
  local_228 = 0x101;
  pNVar4 = (NSHostingView *)&DAT_100fa7b50;
  FUN_1000037f0(&DAT_100fa7b50,&DAT_100c24a10);
  _objc_allocWithZone();
  SwiftUI::NSHostingView::_init(pNVar4);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_((ID)self,0);
  self_00 = objc_stub::layoutSubtreeIfNeeded((ID)self);
  FUN_10002a668();
  objc_stub::setDocumentView_(self_00,self);
  FUN_10002a600(0);
  uVar6 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar6);
  (**(code **)(lVar1 + 0x10))(&local_290,uVar6,lVar1);
  uVar6 = local_270;
  uStack_218 = uStack_280;
  local_220 = uStack_288;
  self_01 = &local_220;
  FUN_10002b79c();
  FUN_10002b040();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setText_((ID)self_01,pNVar5);
  _swift_bridgeObjectRelease(uVar6);
  return 0;
}



/* Address: 0x10002af60 | _TtC5Paste27PaneContainerViewController::initWithNibName:bundle: */

/* Function Stack Size: 0x20 bytes */

ID _TtC5Paste27PaneContainerViewController::initWithNibName_bundle_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PaneContainerViewController.swift",0x27,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.PaneContainerViewController",0x21,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002afe8);
  (*pcVar1)();
}



/* Address: 0x10002afe8 | _TtC5Paste27PaneContainerViewController::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste27PaneContainerViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}


