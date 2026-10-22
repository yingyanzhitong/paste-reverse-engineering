/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aeebfc | FUN_100aeebfc */

void FUN_100aeebfc(void)

{
  FUN_100016eac(&DAT_100ff8ee8,&DAT_100ff8ef0,&DAT_100c95768,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  return;
}



/* Address: 0x100aeec30 | FUN_100aeec30 */

undefined1 FUN_100aeec30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c959e0;
  _swift_getKeyPath(&DAT_100c959e0);
  puVar2 = &DAT_100c95a08;
  _swift_getKeyPath(&DAT_100c95a08);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x100aeeca0 | FUN_100aeeca0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100aeeca0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ID IVar6;
  undefined *puVar7;
  NSKeyValueObservingOptions for;
  AnyCancellable *this;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_e0 [88];
  undefined8 local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  FUN_1000da768(local_88);
  _swift_release(local_88[0]);
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0xf,4,0);
  if ((bVar5 & 1) != 0) {
    IVar6 = objc_stub::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
    IVar6 = objc_stub::FUN_100bfd260(IVar6);
    if (IVar6 == 0) {
      IVar6 = objc_stub::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
      objc_stub::pasteboardItems(IVar6);
    }
  }
  puVar7 = &DAT_100ff8db0;
  FUN_1000037f0(&DAT_100ff8db0,&DAT_100c95338);
  lVar9 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  for.rawValue = (__uint64)&DAT_100c959a8;
  _swift_getKeyPath();
  (extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::_publisher(for);
  _swift_release(for.rawValue);
  FUN_100016eac(&DAT_100ff8dc8,&DAT_100ff8db0,&DAT_100c95338,
                PTR__Foundation__KeyValueObservingPublisher<undefined,undefined>_>Combine__Publisher_100ea7a38
               );
  this = (extension_Combine)::Combine::Publisher::_sink();
  (**(code **)(lVar9 + 8))(auStack_e0 + -extraout_x8,puVar7);
  lVar9 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables;
  _swift_beginAccess(unaff_x20 +
                     _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables,
                     local_88,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar9));
  _swift_endAccess(local_88);
  _swift_release(this);
  FUN_100aef394();
  FUN_1000da768(local_88);
  FUN_100004640(local_88,local_70);
  cVar3 = *(char *)(unaff_x20 +
                   _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::configuration);
  puVar7 = &DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x20) = 0x72756769666e6f63;
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  bVar4 = cVar3 != '\x01';
  uVar1 = 0x72616c75676572;
  if (bVar4) {
    uVar1 = 0x696472616f626e6f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4) {
    puVar2 = (undefined1 *)0xea0000000000676e;
  }
  *(undefined **)(puVar7 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar7 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar7 + 0x28) = 0xed00006e6f697461;
  *(undefined8 *)(puVar7 + 0x30) = uVar1;
  *(undefined1 **)(puVar7 + 0x38) = puVar2;
  puVar8 = puVar7;
  FUN_100aec864();
  _swift_setDeallocating(puVar7);
  FUN_100af01b8(puVar7 + 0x20);
  (**(code **)(lStack_68 + 0x18))(0xd000000000000022,0x8000000100d976c0,puVar8,local_70,lStack_68);
  _swift_bridgeObjectRelease(puVar8);
  FUN_100004594(local_88);
  return;
}



/* Address: 0x100aeefc4 | FUN_100aeefc4 */

void FUN_100aeefc4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
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
  (**(code **)(lStack_58 + 0x18))(0xd000000000000022,0x8000000100d97690,puVar6,local_60,lStack_58);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100004594(auStack_78);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion
              ))(1);
  return;
}



/* Address: 0x100aef148 | thunk_FUN_100aef14c */

void thunk_FUN_100aef14c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8ef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c95770;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c95770,&DAT_100f324e8);
  DAT_100ff8ef8 = pTVar1;
  return;
}



/* Address: 0x100aef14c | FUN_100aef14c */

void FUN_100aef14c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8ef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c95770;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c95770,&DAT_100f324e8);
  DAT_100ff8ef8 = pTVar1;
  return;
}



/* Address: 0x100aef18c | FUN_100aef18c */

undefined1  [16] FUN_100aef18c(void)

{
  return ZEXT816(0x100f324e8);
}



/* Address: 0x100aef19c | FUN_100aef19c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100aef224 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100aef19c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  
  puVar3 = &DAT_100ff8e38;
  FUN_1000037f0(&DAT_100ff8e38,&DAT_100c95910);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::_isAccessEnabled;
  local_51 = 0;
  Combine::Published::init
            (auStack_60 + -extraout_x8,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  (**(code **)(lVar7 + 0x20))(unaff_x20 + lVar2,auStack_60 + -extraout_x8,puVar3);
  lVar2 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::pasteboardAccess;
  puVar3 = &DAT_100c95918;
  _swift_getKeyPath();
  puVar4 = &DAT_100ff9020;
  FUN_1000037f0(&DAT_100ff9020,&DAT_100c95940);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::analytics;
  puVar3 = &DAT_100c95948;
  _swift_getKeyPath();
  puVar4 = &DAT_100ff87d0;
  FUN_1000037f0(&DAT_100ff87d0,&DAT_100c94d50);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0xd00000000000001f;
  FUN_1000d4624(0xd00000000000001f,0x8000000100c957e0);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100aeff4c();
  }
  *(undefined **)
   (unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables) =
       puVar3;
  *(undefined1 *)
   (unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::configuration) =
       param_1;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Address: 0x100aef394 | FUN_100aef394 */

void FUN_100aef394(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  AnyCancellable *this;
  long unaff_x20;
  undefined8 local_60 [3];
  undefined8 local_48;
  
  FUN_1000da768(local_60);
  FUN_100ae73c4();
  _swift_release(local_60[0]);
  puVar2 = &DAT_100f32598;
  local_48 = param_1;
  _swift_allocObject(&DAT_100f32598,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_1000037f0(&DAT_100ff8df0,&DAT_100c959d0);
  FUN_100016eac(&DAT_100ff8df8,&DAT_100ff8df0,&DAT_100c959d0,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(param_1);
  _swift_release(puVar2);
  lVar1 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables;
  _swift_beginAccess(unaff_x20 +
                     _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables,
                     local_60,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_60);
  _swift_release(this);
  return;
}



/* Address: 0x100aef4b8 | FUN_100aef4b8 */

void FUN_100aef4b8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::_isAccessEnabled;
  puVar2 = &DAT_100ff8e38;
  FUN_1000037f0(&DAT_100ff8e38,&DAT_100c95910);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::pasteboardAccess));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::analytics));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::logger
                  ));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                   _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 +
              _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::cancellables));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100aef564 | FUN_100aef564 */

void FUN_100aef564(void)

{
  FUN_100aef56c(0);
  return;
}



/* Address: 0x100aef56c | FUN_100aef56c */

void FUN_100aef56c(undefined8 param_1)

{
  if (DAT_100ff8f60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccc020);
  return;
}



/* Address: 0x100aef5a4 | FUN_100aef5a4 */

void FUN_100aef5a4(long param_1,ulong param_2)

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
  FUN_100aec124();
  if (param_2 < 0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    local_38 = &DAT_100c95820;
    local_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_48 = puStack_50;
    puStack_40 = puStack_50;
    _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100aef648 | FUN_100aef648 */

undefined1  [16] FUN_100aef648(void)

{
  return ZEXT816(0x100f32578);
}



/* Address: 0x100aef658 | thunk_FUN_100aef65c */

void thunk_FUN_100aef65c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9018 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c95888;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c95888,&DAT_100f32578);
  DAT_100ff9018 = pTVar1;
  return;
}



/* Address: 0x100aef65c | FUN_100aef65c */

void FUN_100aef65c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9018 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c95888;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c95888,&DAT_100f32578);
  DAT_100ff9018 = pTVar1;
  return;
}



/* Address: 0x100aef69c | FUN_100aef69c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100aef69c(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ID self;
  ID IVar8;
  long lVar9;
  
  lVar9 = *param_1;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessViewModel.swift",0x3c,1,0x38,
               UVar6.unknown,puVar5);
  }
  if (lVar9 != 0) {
    if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
      self = objc_stub::modalWindow(*(ID *)PTR__NSApp_100ea8fa0);
      if (self == 0) {
        _swift_release(pMVar4);
      }
      else {
        IVar8 = self;
        FUN_100ae71dc();
        uVar1 = 0;
        if ((IVar8 & 1) == 0) {
          uVar1 = 8;
        }
        objc_stub::setLevel_(self,uVar1);
        _swift_release(pMVar4);
      }
      return (MainActor *)0x0;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aef7cc);
    (*pcVar3)();
  }
  _swift_release(pMVar4);
  return pMVar4;
}



/* Address: 0x100aef7cc | FUN_100aef7cc */

void FUN_100aef7cc(char *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  
  cVar1 = *param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnablePasteboardAccessViewModel.swift",0x3c,1,0x43,
               UVar5.unknown,puVar4);
  }
  pMVar7 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar7 != (MainActor *)0x0) {
    if (cVar1 != '\0') {
      FUN_100aef8a0();
    }
    _swift_release(pMVar3);
    pMVar3 = pMVar7;
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100aef8a0 | FUN_100aef8a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100aef8a0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  MainActor MVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  Published *pPVar7;
  ID self;
  ID IVar8;
  TaskPriority TVar9;
  MainActor *this;
  MainActor *pMVar10;
  undefined8 *puVar11;
  long extraout_x8;
  MainActor *unaff_x20;
  undefined1 auStack_e0 [88];
  undefined1 local_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar5 = &DAT_100ff8e00;
  FUN_1000037f0(&DAT_100ff8e00,&DAT_100c953b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(local_88);
  FUN_100004640(local_88,local_70);
  MVar3 = unaff_x20[_TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::configuration];
  puVar5 = &DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x20) = 0x72756769666e6f63;
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  uVar1 = 0x72616c75676572;
  if (MVar3 != (MainActor)0x1) {
    uVar1 = 0x696472616f626e6f;
  }
  puVar2 = &DAT_e700000000000000;
  if (MVar3 != (MainActor)0x1) {
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
  (**(code **)(lStack_68 + 0x18))(0xd000000000000020,0x8000000100d97660,puVar6,local_70,lStack_68);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100004594(local_88);
  puVar5 = PTR__NSApp_100ea8fa0;
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    pPVar7 = (Published *)&DAT_100c959e0;
    _swift_getKeyPath(&DAT_100c959e0);
    _swift_getKeyPath(&DAT_100c95a08);
    local_88[0] = 1;
    _swift_retain();
    Combine::Published::_set_subscript(pPVar7,local_88);
    if (MVar3 == (MainActor)0x1) {
      if (*(ID *)puVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100aefb9c);
        (*pcVar4)();
      }
      self = objc_stub::modalWindow(*(ID *)puVar5);
      if (self != 0) {
        objc_stub::setLevel_(self,8);
        IVar8 = objc_stub::FUN_100c0fbc0(self);
        objc_stub::FUN_100c0df00(self,IVar8 & 0xfffffffffffffffd);
      }
    }
    TVar9 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(auStack_e0 + -extraout_x8,1,1,TVar9.unknown)
    ;
    this = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_100eaec10;
    pMVar10 = unaff_x20;
    _swift_retain();
    pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
    puVar11 = &DAT_100ff8920;
    FUN_100003a00(&DAT_100ff8920,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar5 = &DAT_100f325c0;
    _swift_allocObject(&DAT_100f325c0,0x28,7);
    *(MainActor **)(puVar5 + 0x10) = pMVar10;
    *(undefined8 **)(puVar5 + 0x18) = puVar11;
    *(MainActor **)(puVar5 + 0x20) = unaff_x20;
    FUN_100aeae28(0,0,auStack_e0 + -extraout_x8,&DAT_100c95a30,puVar5);
    _swift_release();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100aefb98);
  (*pcVar4)();
}



/* Address: 0x100aefb9c | FUN_100aefb9c */

void FUN_100aefb9c(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar4;
  puVar5 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x38) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar5;
  _swift_task_switch(FUN_100aefc54,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x100aefc54 | FUN_100aefc54 */

void FUN_100aefc54(void)

{
  long *plVar1;
  long unaff_x22;
  
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100aefcd8;
  FUN_100aec398(1000000000000000000,0,0,0,1);
  return;
}



/* Address: 0x100aefcd8 | FUN_100aefcd8 */

void FUN_100aefcd8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x20) + 8))
              (*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x18));
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_100aefd48;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_100aefda0;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100aefd48 | FUN_100aefd48 */

void FUN_100aefd48(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x10) +
              _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion))(0);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100aefd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aefda0 | FUN_100aefda0 */

void FUN_100aefda0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x10) +
              _TtC22PasteSystemPermissions31EnablePasteboardAccessViewModel::completion))(0);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100aefe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100aefe14 | FUN_100aefe14 */

void FUN_100aefe14(void)

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
  FUN_1000ce204(UVar3.unknown,&DAT_100ff9040);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_100ff9040);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aefef8);
  (*pcVar1)();
}



/* Address: 0x100aefef8 | FUN_100aefef8 */

void FUN_100aefef8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100ae7860(0);
  FUN_1000d80e0(param_1,"PasteSystemPermissions/DI+SystemPermissions.swift",0x31,2,0xf,0x13,
                FUN_100ae697c,0,uVar1);
  return;
}



/* Address: 0x100aeff48 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x100aeff4c | FUN_100aeff4c */

undefined * FUN_100aeff4c(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  ulong uVar5;
  AnyCancellable *pAVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  __int64 seed;
  undefined8 local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar14 = *(undefined **)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100ff9028;
    FUN_1000037f0(&DAT_100ff9028,&DAT_100c95980);
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar2 = puVar14;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar13 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      puVar14 = PTR_typeMetadataAccessor_100ea9780;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100af01b4);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1.unknown + uVar15 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar5 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,param_1);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100af01ac);
        (*pcVar3)();
      }
      uVar15 = uVar15 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar5;
      pAVar6 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_100003a00(&DAT_100ff9030,puVar14,
                    PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100ea9790);
      uVar7 = Swift::Hashable::_rawHashValue(seed);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar7 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar8 = &DAT_100ff9038;
        FUN_100003a00(&DAT_100ff9038,puVar14,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100ea9798);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar7 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar6,puVar8);
          if (bVar4) {
            _swift_release(uVar5);
            goto LAB_100af0034;
          }
          uVar7 = uVar7 + 1 & ~uVar12;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar7 * 8) = uVar5;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100af01b0);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_100af0034:
    } while (uVar15 != uVar13);
  }
  return puVar2;
}



/* Address: 0x100af01b4 | thunk_FUN_100aeb394 */

void thunk_FUN_100aeb394(void)

{
  FUN_100aeb394();
  return;
}



/* Address: 0x100af01b8 | FUN_100af01b8 */

undefined8 FUN_100af01b8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff8de0;
  FUN_1000037f0(&DAT_100ff8de0,&DAT_100c95398);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100af0200 | FUN_100af0200 */

void FUN_100af0200(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100af0224 | FUN_100af0224 */

void FUN_100af0224(void)

{
  FUN_100aef7cc();
  return;
}



/* Address: 0x100af022c | thunk_FUN_100aee92c */

void thunk_FUN_100aee92c(void)

{
  FUN_100aee92c();
  return;
}



/* Address: 0x100af0230 | thunk_FUN_100aee998 */

void thunk_FUN_100aee998(void)

{
  FUN_100aee998();
  return;
}



/* Address: 0x100af0234 | FUN_100af0234 */

void FUN_100af0234(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100af0260 | FUN_100af0260 */

void FUN_100af0260(undefined8 param_1)

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
  FUN_100aefb9c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100af02cc | FUN_100af02cc */

void FUN_100af02cc(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_101058330 + 0x10);
  return;
}



/* Address: 0x100af030c | FUN_100af030c */

undefined8 FUN_100af030c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_100af0624(param_1);
  (**(code **)(*(long *)(*(long *)(unaff_x20 + DAT_101058330) + -8) + 8))(param_1);
  return uVar1;
}



/* Address: 0x100af036c | FUN_100af036c */

undefined8 FUN_100af036c(void)

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
              ("PasteSystemPermissions/NoSafeAreaHostingView.swift",0x32,1,6,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100af03fc | FUN_100af03fc */

void FUN_100af03fc(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100af043c(param_1,param_2);
  return;
}



/* Address: 0x100af043c | FUN_100af043c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100af043c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  NSHostingView *unaff_x20;
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)unaff_x20) + DAT_101058330);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(&stack0xffffffffffffffc0 + -extraout_x8);
  SwiftUI::NSHostingView::_init(unaff_x20,param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar2 + 8))(param_2,lVar1);
  return param_1;
}



/* Address: 0x100af0500 | FUN_100af0500 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100af0500(undefined8 param_1)

{
  ID IVar1;
  
  _swift_getObjectType();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithCoder:",param_1);
  return IVar1;
}



/* Address: 0x100af056c | FUN_100af056c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100af056c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
              ("PasteSystemPermissions/NoSafeAreaHostingView.swift",0x32,1,4,UVar3.unknown,pMVar1);
  }
  FUN_100af0500(param_3);
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100af0618 | FUN_100af0618 */

void FUN_100af0618(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100af0624 | FUN_100af0624 */

void FUN_100af0624(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x12;
  NSHostingView *unaff_x20;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffe0 + -extraout_x12);
  SwiftUI::NSHostingView::_init(unaff_x20,&stack0xffffffffffffffe0 + -extraout_x12);
  return;
}



/* Address: 0x100af06a0 | FUN_100af06a0 */

undefined1  [16] FUN_100af06a0(void)

{
  return ZEXT816(0x100f32788);
}



/* Address: 0x100af06b0 | FUN_100af06b0 */

void FUN_100af06b0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccc10c,1);
  return;
}



/* Address: 0x100af06c0 | FUN_100af06c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100af06c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  Image IVar7;
  HorizontalAlignment HVar8;
  undefined *puVar9;
  Set SVar10;
  Set SVar11;
  Set SVar12;
  Set SVar13;
  Set SVar14;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  String SVar18;
  
  puVar2 = &DAT_100ff90f0;
  FUN_1000037f0(&DAT_100ff90f0,&DAT_100c95af8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar15 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined8 *)(puVar15 + -extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,10,UVar5.unknown,puVar4);
  }
  if (DAT_100ff87c8 != -1) {
    _swift_once(&DAT_100ff87c8,FUN_100ae43c8);
  }
  SVar18.bridgeObject = (void *)0x8000000100dbbac0;
  SVar18.str = (char *)0xd000000000000013;
  IVar7 = SwiftUI::Image::_init(SVar18);
  HVar8 = SwiftUI::HorizontalAlignment::get_center(IVar7.unknown);
  *puVar16 = HVar8.unknown;
  puVar16[1] = 0x4040000000000000;
  *(undefined1 *)(puVar16 + 2) = 0;
  puVar9 = &DAT_100ff90f8;
  FUN_1000037f0(&DAT_100ff90f8,&DAT_100c95b00);
  FUN_100af0994((undefined1 *)((long)puVar16 + (long)*(int *)(puVar9 + 0x2c)),param_6.unknown,
                param_7);
  SVar10 = SwiftUI::Edge::Set::get_leading(param_6);
  SVar11 = SwiftUI::Edge::Set::get_bottom(SVar10);
  SVar12 = SwiftUI::Edge::Set::get_trailing(SVar11);
  SVar13 = SwiftUI::Edge::Set::init(0);
  SVar14 = SwiftUI::Edge::Set::init((byte)SVar10.unknown);
  SwiftUI::Edge::Set::init((byte)SVar14.unknown & (byte)SVar13.unknown);
  SVar10 = SwiftUI::Edge::Set::init((byte)SVar13.unknown | (byte)SVar10.unknown);
  SVar13 = SwiftUI::Edge::Set::init((byte)SVar11.unknown);
  SwiftUI::Edge::Set::init((byte)SVar13.unknown & (byte)SVar10.unknown);
  SVar10 = SwiftUI::Edge::Set::init((byte)SVar10.unknown | (byte)SVar11.unknown);
  SVar11 = SwiftUI::Edge::Set::init((byte)SVar12.unknown);
  SwiftUI::Edge::Set::init((byte)SVar11.unknown & (byte)SVar10.unknown);
  SVar10 = SwiftUI::Edge::Set::init((byte)SVar10.unknown | (byte)SVar12.unknown);
  uVar17 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar1 = (undefined1 *)((long)puVar16 + (long)*(int *)(puVar2 + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_100011090(puVar16,puVar15,&DAT_100ff90f0,&DAT_100c95af8);
  *param_1 = IVar7.unknown;
  puVar2 = &DAT_100ff9100;
  FUN_1000037f0(&DAT_100ff9100,&DAT_100c95b08);
  FUN_100011090(puVar15,(long)param_1 + (long)*(int *)(puVar2 + 0x30),&DAT_100ff90f0,&DAT_100c95af8)
  ;
  _swift_retain(IVar7.unknown);
  FUN_100005808(puVar16,&DAT_100ff90f0,&DAT_100c95af8);
  FUN_100005808(puVar15,&DAT_100ff90f0,&DAT_100c95af8);
  _swift_release(pMVar3);
  _swift_release(IVar7.unknown);
  return;
}



/* Address: 0x100af0994 | FUN_100af0994 */

void FUN_100af0994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  HorizontalAlignment HVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  undefined8 *puVar8;
  MainActor *apMStack_430 [4];
  long local_410;
  undefined1 auStack_408 [136];
  undefined7 uStack_380;
  undefined1 local_379;
  undefined7 uStack_378;
  undefined1 uStack_371;
  undefined7 uStack_370;
  undefined1 local_369;
  undefined7 uStack_368;
  undefined1 uStack_361;
  undefined7 uStack_360;
  undefined1 local_359;
  undefined7 uStack_358;
  undefined1 uStack_351;
  undefined7 uStack_350;
  undefined1 local_349;
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined7 uStack_340;
  undefined1 local_339;
  undefined7 uStack_338;
  undefined1 uStack_331;
  undefined7 uStack_330;
  undefined1 local_329;
  undefined7 uStack_328;
  undefined1 uStack_321;
  undefined7 uStack_320;
  undefined1 uStack_319;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 local_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 local_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 local_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined *local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar1 = &DAT_100ff9108;
  apMStack_430[2] = (MainActor *)param_2;
  FUN_1000037f0(&DAT_100ff9108,&DAT_100c95b10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar7 = (long)apMStack_430 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_410 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = (undefined8 *)(lVar7 - extraout_x12);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  apMStack_430[3] = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteSystemPermissions/PasteToOtherAppsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,0xd,UVar4.unknown,puVar3);
  }
  HVar6 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar5);
  pMVar2 = apMStack_430[2];
  FUN_100af0d90(&local_100,apMStack_430[2],param_3);
  uStack_2a8 = uStack_b8;
  local_2b0 = local_c0;
  uStack_298 = uStack_a8;
  uStack_2a0 = local_b0;
  uStack_28f = uStack_9f;
  uStack_288 = uStack_98;
  local_297 = uStack_a7;
  uStack_290 = local_a0;
  uStack_2e8 = uStack_f8;
  local_2f0 = local_100;
  uStack_2d8 = uStack_e8;
  uStack_2e0 = local_f0;
  uStack_2c8 = uStack_d8;
  local_2d0 = local_e0;
  uStack_2b8 = uStack_c8;
  uStack_2c0 = local_d0;
  uStack_278 = uStack_f8;
  local_280 = local_100;
  uStack_268 = uStack_e8;
  uStack_270 = local_f0;
  uStack_258 = uStack_d8;
  local_260 = local_e0;
  uStack_248 = uStack_c8;
  uStack_250 = local_d0;
  uStack_238 = uStack_b8;
  local_240 = local_c0;
  uStack_230 = local_b0;
  apMStack_430[1] = (MainActor *)param_3;
  FUN_100011090(&local_2f0,&local_188,&DAT_100ff9110,&DAT_100c95b18);
  FUN_100005808(&local_280,&DAT_100ff9110,&DAT_100c95b18);
  uStack_361 = (undefined1)uStack_2d8;
  uStack_360 = (undefined7)((ulong)uStack_2d8 >> 8);
  local_369 = (undefined1)uStack_2e0;
  uStack_368 = (undefined7)((ulong)uStack_2e0 >> 8);
  uStack_371 = (undefined1)uStack_2e8;
  uStack_370 = (undefined7)((ulong)uStack_2e8 >> 8);
  local_379 = (undefined1)local_2f0;
  uStack_378 = (undefined7)((ulong)local_2f0 >> 8);
  uStack_331 = (undefined1)uStack_2a8;
  uStack_330 = (undefined7)((ulong)uStack_2a8 >> 8);
  local_339 = (undefined1)local_2b0;
  uStack_338 = (undefined7)((ulong)local_2b0 >> 8);
  uStack_341 = (undefined1)uStack_2b8;
  uStack_340 = (undefined7)((ulong)uStack_2b8 >> 8);
  local_349 = (undefined1)uStack_2c0;
  uStack_348 = (undefined7)((ulong)uStack_2c0 >> 8);
  local_329 = (undefined1)uStack_2a0;
  uStack_328 = (undefined7)((ulong)uStack_2a0 >> 8);
  uStack_351 = (undefined1)uStack_2c8;
  uStack_350 = (undefined7)((ulong)uStack_2c8 >> 8);
  local_359 = (undefined1)local_2d0;
  uStack_358 = (undefined7)((ulong)local_2d0 >> 8);
  uStack_14f = CONCAT17(uStack_351,uStack_358);
  local_157 = CONCAT17(local_359,uStack_360);
  uStack_1c7 = uStack_348;
  uStack_1c0 = uStack_341;
  local_1cf = uStack_350;
  uStack_1c8 = local_349;
  uStack_13f = CONCAT17(uStack_341,uStack_348);
  local_147 = CONCAT17(local_349,uStack_350);
  uStack_1b7 = uStack_338;
  uStack_1b0 = uStack_331;
  local_1bf = uStack_340;
  uStack_1b8 = local_339;
  uStack_12f = CONCAT17(uStack_331,uStack_338);
  local_137 = CONCAT17(local_339,uStack_340);
  uStack_1a7 = uStack_328;
  uStack_1a0 = uStack_298;
  local_1af = uStack_330;
  uStack_1a8 = local_329;
  uStack_11f = CONCAT17(uStack_298,uStack_328);
  local_127 = CONCAT17(local_329,uStack_330);
  uStack_197 = uStack_28f;
  uStack_190 = uStack_288;
  local_19f = local_297;
  uStack_198 = uStack_290;
  uStack_1f7 = uStack_378;
  uStack_1f0 = uStack_371;
  local_1ff = uStack_380;
  uStack_1f8 = local_379;
  uStack_16f = CONCAT17(uStack_371,uStack_378);
  local_177 = CONCAT17(local_379,uStack_380);
  uStack_15f = CONCAT17(uStack_361,uStack_368);
  local_167 = CONCAT17(local_369,uStack_370);
  uStack_1e7 = uStack_368;
  uStack_1e0 = uStack_361;
  local_1ef = uStack_370;
  uStack_1e8 = local_369;
  uStack_1d7 = uStack_358;
  uStack_1d0 = uStack_351;
  local_1df = uStack_360;
  uStack_1d8 = local_359;
  uStack_208 = 0x4020000000000000;
  local_200 = 0;
  local_180 = 0x4020000000000000;
  local_178 = 0;
  local_210 = HVar6.unknown;
  local_188 = HVar6.unknown;
  FUN_100011090(&local_210,&local_100,&DAT_100ff9118,&DAT_100c95b20);
  HVar6.unknown = (undefined *)&local_188;
  FUN_100005808(HVar6.unknown,&DAT_100ff9118,&DAT_100c95b20);
  HVar6 = SwiftUI::HorizontalAlignment::get_center(HVar6);
  *puVar8 = HVar6.unknown;
  puVar8[1] = 0x4030000000000000;
  *(undefined1 *)(puVar8 + 2) = 0;
  puVar1 = &DAT_100ff9120;
  FUN_1000037f0(&DAT_100ff9120,&DAT_100c95b28);
  FUN_100af1298((long)puVar8 + (long)*(int *)(puVar1 + 0x2c),pMVar2,apMStack_430[1]);
  lVar7 = local_410;
  uStack_318 = CONCAT71(uStack_1a7,uStack_1a8);
  uStack_308 = CONCAT71(uStack_197,uStack_198);
  local_310 = CONCAT71(local_19f,uStack_1a0);
  uStack_320 = (undefined7)CONCAT71(local_1af,uStack_1b0);
  uStack_319 = (undefined1)((uint7)local_1af >> 0x30);
  local_300 = uStack_190;
  uStack_358 = (undefined7)CONCAT71(uStack_1e7,uStack_1e8);
  uStack_351 = (undefined1)((uint7)uStack_1e7 >> 0x30);
  uStack_360 = (undefined7)CONCAT71(local_1ef,uStack_1f0);
  local_359 = (undefined1)((uint7)local_1ef >> 0x30);
  uStack_348 = (undefined7)CONCAT71(uStack_1d7,uStack_1d8);
  uStack_341 = (undefined1)((uint7)uStack_1d7 >> 0x30);
  uStack_350 = (undefined7)CONCAT71(local_1df,uStack_1e0);
  local_349 = (undefined1)((uint7)local_1df >> 0x30);
  uStack_338 = (undefined7)CONCAT71(uStack_1c7,uStack_1c8);
  uStack_331 = (undefined1)((uint7)uStack_1c7 >> 0x30);
  uStack_340 = (undefined7)CONCAT71(local_1cf,uStack_1d0);
  local_339 = (undefined1)((uint7)local_1cf >> 0x30);
  uStack_328 = (undefined7)CONCAT71(uStack_1b7,uStack_1b8);
  uStack_321 = (undefined1)((uint7)uStack_1b7 >> 0x30);
  uStack_330 = (undefined7)CONCAT71(local_1bf,uStack_1c0);
  local_329 = (undefined1)((uint7)local_1bf >> 0x30);
  uStack_378 = (undefined7)uStack_208;
  uStack_371 = (undefined1)((ulong)uStack_208 >> 0x38);
  uStack_380 = SUB87(local_210,0);
  local_379 = (undefined1)((ulong)local_210 >> 0x38);
  uStack_368 = (undefined7)CONCAT71(uStack_1f7,uStack_1f8);
  uStack_361 = (undefined1)((uint7)uStack_1f7 >> 0x30);
  uStack_370 = (undefined7)CONCAT71(local_1ff,local_200);
  local_369 = (undefined1)((uint7)local_1ff >> 0x30);
  FUN_100011090(puVar8,local_410,&DAT_100ff9108,&DAT_100c95b10);
  local_b0 = CONCAT17(local_329,uStack_330);
  uStack_a8 = (undefined1)uStack_328;
  uStack_a7 = (undefined7)(CONCAT17(uStack_321,uStack_328) >> 8);
  uStack_98 = (undefined1)uStack_318;
  uStack_97 = (undefined7)((ulong)uStack_318 >> 8);
  local_a0 = (undefined1)uStack_320;
  uStack_9f = (undefined7)(CONCAT17(uStack_319,uStack_320) >> 8);
  uStack_88 = uStack_308;
  local_90 = local_310;
  uStack_e8 = CONCAT17(uStack_361,uStack_368);
  local_f0 = CONCAT17(local_369,uStack_370);
  uStack_d8 = CONCAT17(uStack_351,uStack_358);
  local_e0 = CONCAT17(local_359,uStack_360);
  uStack_c8 = CONCAT17(uStack_341,uStack_348);
  local_d0 = CONCAT17(local_349,uStack_350);
  uStack_b8 = CONCAT17(uStack_331,uStack_338);
  local_c0 = CONCAT17(local_339,uStack_340);
  uStack_f8 = CONCAT17(uStack_371,uStack_378);
  local_100 = CONCAT17(local_379,uStack_380);
  param_1[0xd] = uStack_318;
  param_1[0xc] = CONCAT17(uStack_319,uStack_320);
  param_1[0xf] = uStack_308;
  param_1[0xe] = local_310;
  param_1[5] = CONCAT17(uStack_351,uStack_358);
  param_1[4] = CONCAT17(local_359,uStack_360);
  param_1[7] = CONCAT17(uStack_341,uStack_348);
  param_1[6] = CONCAT17(local_349,uStack_350);
  param_1[9] = CONCAT17(uStack_331,uStack_338);
  param_1[8] = CONCAT17(local_339,uStack_340);
  param_1[0xb] = CONCAT17(uStack_321,uStack_328);
  param_1[10] = CONCAT17(local_329,uStack_330);
  local_80 = local_300;
  *(undefined1 *)(param_1 + 0x10) = local_300;
  param_1[1] = CONCAT17(uStack_371,uStack_378);
  *param_1 = CONCAT17(local_379,uStack_380);
  param_1[3] = CONCAT17(uStack_361,uStack_368);
  param_1[2] = CONCAT17(local_369,uStack_370);
  puVar1 = &DAT_100ff9128;
  FUN_1000037f0(&DAT_100ff9128,&DAT_100c95b30);
  FUN_100011090(lVar7,(long)param_1 + (long)*(int *)(puVar1 + 0x30),&DAT_100ff9108,&DAT_100c95b10);
  FUN_100011090(&local_100,auStack_408,&DAT_100ff9118,&DAT_100c95b20);
  FUN_100005808(puVar8,&DAT_100ff9108,&DAT_100c95b10);
  FUN_100005808(lVar7,&DAT_100ff9108,&DAT_100c95b10);
  FUN_100005808(&uStack_380,&DAT_100ff9118,&DAT_100c95b20);
  _swift_release(apMStack_430[3]);
  return;
}



/* Address: 0x100af0d90 | FUN_100af0d90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100af0f4c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100af0d90(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  char *pcVar7;
  Text TVar8;
  Font FVar9;
  Font FVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined8 in_x3;
  long extraout_x8;
  long extraout_x12;
  String SVar17;
  undefined8 local_370;
  char *local_368;
  LocalizedStringResource local_360;
  MainActor *local_358;
  undefined8 *local_350;
  undefined1 auStack_348 [56];
  char *local_310;
  void *pvStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined7 uStack_2df;
  char *local_2d8;
  void *pvStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 local_2a8;
  char *local_2a0;
  void *pvStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  char *local_260;
  void *pvStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  char *local_220;
  void *pvStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  char *local_1e0;
  void *pvStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  char *local_1a0;
  void *pvStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  char *local_160;
  void *pvStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
  char *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  String local_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  String local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  local_350 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_370 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_358 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0xe;
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,0xe,UVar4.unknown,puVar3);
  }
  IVar6 = objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar6 = objc_stub::menuBarOwningApplication(IVar6);
  local_360.unknown = LVar1.unknown;
  if (IVar6 != 0) {
    IVar6 = objc_stub::localizedName(IVar6);
    if (IVar6 != 0) {
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      goto LAB_100af0f14;
    }
  }
  FUN_1001c4850(LVar1.unknown,0);
  SVar17 = (extension_Foundation)::Swift::String::init(LVar1);
LAB_100af0f14:
  thunk_FUN_1001e6ab8(LVar1.unknown + -extraout_x12,SVar17.str,SVar17.bridgeObject);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar17 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)(LVar1.unknown + -extraout_x12));
  local_a8 = SVar17;
  FUN_100ae9d44();
  pcVar7 = SVar17.str;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  local_368 = pcVar7;
  TVar8 = SwiftUI::Text::_init(pcVar7,PTR___type_metadata_for_Swift_String_100eac208,pcVar7);
  local_370 = in_x3;
  FVar9 = SwiftUI::Font::get_title2(TVar8.unknown);
  FVar10 = SwiftUI::Font::bold(FVar9);
  _swift_release(FVar9.unknown);
  TVar13 = TVar8;
  puVar14 = puVar12;
  pcVar15 = pcVar7;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100016d74(TVar8.unknown,puVar12,pcVar7);
  _swift_bridgeObjectRelease(local_370);
  FUN_100205044(&local_a8,1,TVar11.unknown,TVar13.unknown,puVar14,pcVar15);
  FUN_100016d74(TVar11.unknown,TVar13.unknown,puVar14);
  _swift_bridgeObjectRelease(pcVar15);
  pvStack_258 = local_a8.bridgeObject;
  local_260 = local_a8.str;
  uStack_248 = uStack_90;
  uStack_250 = local_98;
  uStack_238 = uStack_80;
  local_240 = local_88;
  local_230 = local_78;
  pvStack_218 = local_a8.bridgeObject;
  local_220 = local_a8.str;
  uStack_208 = uStack_90;
  uStack_210 = local_98;
  uStack_1f8 = uStack_80;
  local_200 = local_88;
  local_1f0 = local_78;
  puVar12 = &DAT_100c95c00;
  FUN_100011090(&local_260,&local_e0,&DAT_100ff8bc8,&DAT_100c95c00);
  FUN_100005808(&local_220,&DAT_100ff8bc8,&DAT_100c95c00);
  LVar1.unknown = local_360.unknown;
  FUN_1001bb988(local_360.unknown);
  local_e0 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar15 = local_368;
  TVar8 = SwiftUI::Text::_init(TVar11.unknown,PTR___type_metadata_for_Swift_String_100eac208);
  FVar9 = SwiftUI::Font::get_body(TVar8.unknown);
  TVar13 = TVar8;
  puVar16 = puVar14;
  pcVar7 = pcVar15;
  TVar11 = SwiftUI::Text::_font(FVar9.unknown);
  local_360.unknown = pcVar7;
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar8.unknown,puVar14,pcVar15);
  _swift_bridgeObjectRelease(puVar12);
  LVar1.unknown = local_360.unknown;
  FUN_100205044(&local_e0,1,TVar11.unknown,TVar13.unknown,puVar16,local_360.unknown);
  FUN_100016d74(TVar11.unknown,TVar13.unknown,puVar16);
  _swift_bridgeObjectRelease(LVar1.unknown);
  pvStack_1d8 = local_e0.bridgeObject;
  local_1e0 = local_e0.str;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  uStack_1b8 = uStack_b8;
  local_1c0 = local_c0;
  local_1b0 = local_b0;
  pvStack_198 = local_e0.bridgeObject;
  local_1a0 = local_e0.str;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_178 = uStack_b8;
  local_180 = local_c0;
  local_170 = local_b0;
  FUN_100011090(&local_1e0,&local_120,&DAT_100ff8bc8,&DAT_100c95c00);
  FUN_100005808(&local_1a0,&DAT_100ff8bc8,&DAT_100c95c00);
  pvStack_298 = pvStack_258;
  local_2a0 = local_260;
  uStack_288 = uStack_248;
  uStack_290 = uStack_250;
  uStack_278 = uStack_238;
  local_280 = local_240;
  local_e0.bridgeObject = pvStack_1d8;
  local_e0.str = local_1e0;
  uStack_c8 = uStack_1c8;
  uStack_d0 = uStack_1d0;
  uStack_b8 = uStack_1b8;
  local_c0 = local_1c0;
  uStack_148 = uStack_248;
  local_150 = uStack_250;
  uStack_138 = uStack_238;
  uStack_140 = local_240;
  pvStack_158 = pvStack_258;
  local_160 = local_260;
  uStack_2f8 = uStack_248;
  local_300 = uStack_250;
  uStack_2e8 = uStack_238;
  local_2f0 = local_240;
  local_270 = local_230;
  local_b0 = local_1b0;
  local_130 = local_230;
  local_2e0 = local_230;
  pvStack_308 = pvStack_258;
  local_310 = local_260;
  local_f0 = local_1b0;
  uStack_108 = uStack_1c8;
  local_110 = uStack_1d0;
  uStack_f8 = uStack_1b8;
  uStack_100 = local_1c0;
  pvStack_118 = pvStack_1d8;
  local_120 = local_1e0;
  local_2a8 = local_1b0;
  uStack_2b0 = (undefined1)uStack_1b8;
  uStack_2af = (undefined7)((ulong)uStack_1b8 >> 8);
  local_2b8 = (undefined1)local_1c0;
  uStack_2b7 = (undefined7)((ulong)local_1c0 >> 8);
  uStack_2c0 = uStack_1c8;
  local_2c8 = uStack_1d0;
  pvStack_2d0 = pvStack_1d8;
  local_2d8 = local_1e0;
  local_350[1] = pvStack_258;
  *local_350 = local_260;
  local_350[3] = uStack_248;
  local_350[2] = uStack_250;
  *(ulong *)((long)local_350 + 0x61) = CONCAT17(local_1b0,uStack_2af);
  *(ulong *)((long)local_350 + 0x59) = CONCAT17(uStack_2b0,uStack_2b7);
  local_350[9] = uStack_1d0;
  local_350[8] = pvStack_1d8;
  local_350[0xb] = local_1c0;
  local_350[10] = uStack_1c8;
  local_350[5] = uStack_238;
  local_350[4] = local_240;
  local_350[7] = local_1e0;
  local_350[6] = CONCAT71(uStack_2df,local_230);
  FUN_100011090(&local_160,auStack_348,&DAT_100ff8bc8,&DAT_100c95c00);
  FUN_100011090(&local_120,auStack_348,&DAT_100ff8bc8,&DAT_100c95c00);
  FUN_100005808(&local_e0,&DAT_100ff8bc8,&DAT_100c95c00);
  FUN_100005808(&local_2a0,&DAT_100ff8bc8,&DAT_100c95c00);
  _swift_release(local_358);
  return;
}



/* Address: 0x100af1298 | FUN_100af1298 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100af16b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100af1298(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ControlSize CVar8;
  LocalizedStringResource LVar9;
  undefined *puVar10;
  BorderedButtonStyle BVar11;
  undefined *puVar12;
  MainActor *pMVar13;
  undefined8 *puVar14;
  UnownedSerialExecutor UVar15;
  char *pcVar16;
  HorizontalAlignment HVar17;
  undefined *puVar18;
  undefined *puVar19;
  Wrapper WVar20;
  Wrapper dynamicMember;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar23;
  undefined8 *puVar24;
  ObservedObject local_e0;
  long local_d8;
  LocalizedStringResource local_d0;
  MainActor *local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  String local_70;
  
  local_b8 = param_3;
  local_90 = param_1;
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  puVar12 = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100ff9130;
  local_d0.unknown = puVar12;
  FUN_1000037f0(&DAT_100ff9130,&DAT_100c95b38);
  local_a8 = *(long *)(puVar10 + -8);
  local_98 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  lVar21 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12;
  local_b0 = lVar21;
  BVar11 = SwiftUI::BorderedButtonStyle::typeMetadataAccessor();
  local_d8 = *(long *)(BVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100ff9138;
  FUN_1000037f0(&DAT_100ff9138,&DAT_100c95b40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(lVar21 - extraout_x8_02);
  puVar12 = &DAT_100ff9140;
  FUN_1000037f0(&DAT_100ff9140,&DAT_100c95b48);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar22 = (long)puVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar22 - extraout_x12_00;
  pMVar13 = Swift::MainActor::typeMetadataAccessor();
  puVar18 = PTR_typeMetadataAccessor_100eaec10;
  pMVar13 = Swift::MainActor::get_shared(pMVar13,pMVar13);
  puVar14 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar18,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar13;
  UVar15 = Swift::Actor::get_unownedExecutor();
  pcVar16 = (char *)UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar16 & 1) == 0) {
    pcVar16 = "PasteSystemPermissions/PasteToOtherAppsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,0x1e,UVar15.unknown,
               puVar14);
  }
  HVar17 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar16);
  *puVar24 = HVar17.unknown;
  puVar24[1] = 0x4020000000000000;
  *(undefined1 *)(puVar24 + 2) = 0;
  puVar18 = &DAT_100ff9148;
  FUN_1000037f0(&DAT_100ff9148,&DAT_100c95b50);
  local_e0.unknown = param_2;
  FUN_100af179c((long)puVar24 + (long)*(int *)(puVar18 + 0x2c),param_2,local_b8);
  SwiftUI::BorderedButtonStyle::init();
  puVar18 = &DAT_100ff9150;
  FUN_100016eac(&DAT_100ff9150,&DAT_100ff9138,&DAT_100c95b40,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar19 = &DAT_100ff9158;
  FUN_100003a00(&DAT_100ff9158,PTR_typeMetadataAccessor_100eaaca8,
                PTR_SwiftUI__SwiftUI__BorderedButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaac98);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar22,lVar21,puVar10,BVar11.unknown,puVar18,puVar19);
  (**(code **)(local_d8 + 8))(lVar21,BVar11.unknown);
  FUN_100005808(puVar24,&DAT_100ff9138,&DAT_100c95b40);
  iVar2 = *(int *)(puVar12 + 0x24);
  puVar10 = &DAT_100ff8ec0;
  FUN_1000037f0(&DAT_100ff8ec0,&DAT_100c95720);
  iVar3 = *(int *)(puVar10 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar8 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar21 = CONCAT71((int7)((ulong)puVar10 >> 8),CVar8.value);
  (**(code **)(*(long *)(lVar21 + -8) + 0x68))(lVar22 + iVar2 + (long)iVar3,uVar1,lVar21);
  puVar10 = &DAT_100c95b60;
  _swift_getKeyPath();
  *(undefined **)(lVar22 + iVar2) = puVar10;
  LVar9.unknown = local_d0.unknown;
  FUN_1001c49d0(local_d0.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar9);
  FUN_100af2584(0);
  FUN_100003a00(&DAT_100ff87d8,FUN_100af2584,&TargetProtocolConformanceDescriptor_100c95c7c);
  WVar20 = SwiftUI::ObservedObject::_get_projectedValue(local_e0);
  dynamicMember.unknown = &DAT_100c95b90;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar20.unknown);
  _swift_release(dynamicMember.unknown);
  FUN_100ae9d44();
  lVar4 = local_b0;
  (extension_SwiftUI)::SwiftUI::Toggle::_init
            (local_b0,dynamicMember.unknown,local_88,uStack_80,local_78,
             PTR___type_metadata_for_Swift_String_100eac208,dynamicMember.unknown);
  lVar21 = local_c0;
  FUN_100011090(lVar22,local_c0,&DAT_100ff9140,&DAT_100c95b48);
  puVar12 = local_98;
  lVar6 = local_a0;
  lVar5 = local_a8;
  pcVar23 = *(code **)(local_a8 + 0x10);
  (*pcVar23)(local_a0,lVar4,local_98);
  lVar7 = local_90;
  FUN_100011090(lVar21,local_90,&DAT_100ff9140,&DAT_100c95b48);
  puVar10 = &DAT_100ff9160;
  FUN_1000037f0(&DAT_100ff9160,&DAT_100c95bb8);
  (*pcVar23)(lVar7 + *(int *)(puVar10 + 0x30),lVar6,puVar12);
  pcVar23 = *(code **)(lVar5 + 8);
  (*pcVar23)(lVar4,puVar12);
  FUN_100005808(lVar22,&DAT_100ff9140,&DAT_100c95b48);
  (*pcVar23)(lVar6,puVar12);
  FUN_100005808(lVar21,&DAT_100ff9140,&DAT_100c95b48);
  _swift_release(local_c8);
  return;
}



/* Address: 0x100af179c | FUN_100af179c */

void FUN_100af179c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  KeyboardShortcut KVar5;
  undefined *puVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  Button<undefined> BVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  KeyboardShortcut KVar18;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  MainActor *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_70 = param_1;
  KVar5 = SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_a0 = *(undefined **)(KVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_a0 + 0x40));
  KVar18.unknown = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100ff9168;
  FUN_1000037f0(&DAT_100ff9168,&DAT_100c95be0);
  local_a8 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)KVar18.unknown - extraout_x8_00;
  puVar7 = &DAT_100ff9170;
  FUN_1000037f0(&DAT_100ff9170,&DAT_100c95be8);
  local_80 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  local_88 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_00;
  local_90 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = lVar14 - extraout_x12_01;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_98 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,0x1f,UVar10.unknown,puVar9
              );
  }
  _swift_retain(param_3);
  puVar12 = &DAT_100ff9178;
  FUN_1000037f0(&DAT_100ff9178,&DAT_100c95bf0);
  local_b0 = puVar12;
  FUN_100af1f7c();
  BVar13 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar13.unknown);
  FUN_100016eac(&DAT_100ff9188,&DAT_100ff9168,&DAT_100c95be0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar18);
  pcVar17 = *(code **)((long)local_a0 + 8);
  (*pcVar17)(KVar18.unknown,KVar5.unknown);
  pcVar16 = *(code **)(local_a8 + 8);
  local_a0 = KVar5.unknown;
  (*pcVar16)(lVar15,puVar6);
  _swift_retain(param_3);
  BVar13 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar13.unknown);
  lVar14 = local_90;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar18);
  (*pcVar17)(KVar18.unknown,local_a0);
  (*pcVar16)(lVar15,puVar6);
  lVar4 = local_68;
  lVar1 = local_80;
  lVar15 = local_88;
  pcVar16 = *(code **)(local_80 + 0x10);
  (*pcVar16)(local_88,local_68,puVar7);
  lVar2 = local_78;
  (*pcVar16)(local_78,lVar14,puVar7);
  lVar3 = local_70;
  (*pcVar16)(local_70,lVar15,puVar7);
  puVar6 = &DAT_100ff9190;
  FUN_1000037f0(&DAT_100ff9190,&DAT_100c95bf8);
  (*pcVar16)(lVar3 + *(int *)(puVar6 + 0x30),lVar2,puVar7);
  pcVar16 = *(code **)(lVar1 + 8);
  (*pcVar16)(lVar14,puVar7);
  (*pcVar16)(lVar4,puVar7);
  (*pcVar16)(lVar2,puVar7);
  (*pcVar16)(lVar15,puVar7);
  _swift_release(local_98);
  return;
}



/* Address: 0x100af1b60 | FUN_100af1b60 */

void FUN_100af1b60(void)

{
  FUN_100af1b80(0x20,FUN_1001bbb08);
  return;
}



/* Address: 0x100af1b70 | FUN_100af1b70 */

void FUN_100af1b70(void)

{
  FUN_100af1b80(0x26,FUN_1001bb808);
  return;
}



/* Address: 0x100af1b80 | FUN_100af1b80 */

void FUN_100af1b80(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  Text TVar7;
  Alignment AVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long extraout_x8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 auStack_290 [2];
  undefined1 auStack_280 [144];
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  String local_160;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/PasteToOtherAppsView.swift",0x31,1,param_2,UVar5.unknown,
               puVar4);
    param_5 = param_2;
  }
  (*param_3)(auStack_280 + lVar1);
  local_160 = (extension_Foundation)::Swift::String::init
                        ((LocalizedStringResource)(auStack_280 + lVar1));
  uVar11 = local_160.str._0_1_;
  FUN_100ae9d44();
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  puVar10 = puVar9;
  AVar8 = SwiftUI::Alignment::get_center(TVar7.unknown);
  *(undefined **)((long)auStack_290 + lVar1) = AVar8.unknown;
  *(undefined **)((long)auStack_290 + lVar1 + 8) = puVar10;
  auStack_298[lVar1] = 1;
  *(undefined8 *)((long)&uStack_2a0 + lVar1) = 0;
  auStack_2a8[lVar1] = 1;
  *(undefined8 *)((long)&uStack_2b0 + lVar1) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_188 = uStack_88;
  local_190 = local_90;
  uStack_178 = uStack_78;
  uStack_180 = uStack_80;
  uStack_168 = uStack_68;
  local_170 = local_70;
  uStack_1c8 = uStack_c8;
  local_1d0 = local_d0;
  uStack_1b8 = uStack_b8;
  uStack_1c0 = uStack_c0;
  uStack_1a8 = uStack_a8;
  local_1b0 = local_b0;
  uStack_198 = uStack_98;
  uStack_1a0 = uStack_a0;
  uStack_f8 = uStack_88;
  local_100 = local_90;
  uStack_e8 = uStack_78;
  uStack_f0 = uStack_80;
  uStack_d8 = uStack_68;
  local_e0 = local_70;
  uStack_138 = uStack_c8;
  local_140 = local_d0;
  uStack_128 = uStack_b8;
  uStack_130 = uStack_c0;
  local_160.bridgeObject = puVar9;
  local_160.str = TVar7.unknown;
  uStack_118 = uStack_a8;
  local_120 = local_b0;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  local_1f0 = TVar7.unknown;
  puStack_1e8 = puVar9;
  local_1e0 = uVar11;
  local_1d8 = param_5;
  local_150 = uVar11;
  local_148 = param_5;
  FUN_100011090(&local_1f0,auStack_280,&DAT_100ff9178,&DAT_100c95bf0);
  FUN_100005808(&local_160,&DAT_100ff9178,&DAT_100c95bf0);
  _swift_release(pMVar3);
  param_1[0xd] = uStack_188;
  param_1[0xc] = local_190;
  param_1[0xf] = uStack_178;
  param_1[0xe] = uStack_180;
  param_1[0x11] = uStack_168;
  param_1[0x10] = local_170;
  param_1[5] = uStack_1c8;
  param_1[4] = local_1d0;
  param_1[7] = uStack_1b8;
  param_1[6] = uStack_1c0;
  param_1[9] = uStack_1a8;
  param_1[8] = local_1b0;
  param_1[0xb] = uStack_198;
  param_1[10] = uStack_1a0;
  param_1[1] = puStack_1e8;
  *param_1 = local_1f0;
  param_1[3] = local_1d8;
  param_1[2] = CONCAT71(uStack_1df,local_1e0);
  return;
}



/* Address: 0x100af1dbc | FUN_100af1dbc */

void FUN_100af1dbc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c95b90;
  _swift_getKeyPath(&DAT_100c95b90);
  puVar2 = &DAT_100c95bc0;
  _swift_getKeyPath(&DAT_100c95bc0);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100af1e24 | FUN_100af1e24 */

void FUN_100af1e24(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c95b90;
  _swift_getKeyPath(&DAT_100c95b90);
  puVar3 = &DAT_100c95bc0;
  _swift_getKeyPath(&DAT_100c95bc0);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x100af1e94 | FUN_100af1e94 */

void FUN_100af1e94(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Alignment AVar4;
  undefined8 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  AVar4.unknown = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100ff90e0;
  FUN_1000037f0(&DAT_100ff90e0,&DAT_100c95ae8);
  FUN_100af06c0((long)param_1 + (long)*(int *)(puVar3 + 0x2c),AVar4.unknown,uVar1);
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FrameLayout::_init((Alignment)0x4071800000000000);
  puVar3 = &DAT_100ff90e8;
  FUN_1000037f0(&DAT_100ff90e8,&DAT_100c95af0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  return;
}



/* Address: 0x100af1f4c | FUN_100af1f4c */

void FUN_100af1f4c(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x100af1f6c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100af1f70 | thunk_FUN_100af1dbc */

void thunk_FUN_100af1dbc(void)

{
  FUN_100af1dbc();
  return;
}



/* Address: 0x100af1f74 | thunk_FUN_100af1e24 */

void thunk_FUN_100af1e24(void)

{
  FUN_100af1e24();
  return;
}



/* Address: 0x100af1f78 | thunk_FUN_100af208c */

void thunk_FUN_100af208c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,uStack_60);
  puVar2 = (undefined8 *)&DAT_100ff8dd8;
  FUN_1000037f0(&DAT_100ff8dd8,&DAT_100c95390);
  _swift_initStackObject();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  FUN_1001949b4();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2[10] = &PTR_PTR_100ebcc60;
  puVar2[5] = uVar1;
  puVar2[6] = 0xd00000000000001b;
  puVar2[7] = 0x8000000100dbbb30;
  _swift_bridgeObjectRetain();
  puVar3 = puVar2;
  FUN_100aec864(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100af01b8(puVar2 + 4);
  (**(code **)(lStack_58 + 0x18))(0xd00000000000001a,0x8000000100d975b0,puVar3,uStack_60,lStack_58);
  _swift_bridgeObjectRelease(puVar3);
  FUN_100004594(auStack_78);
  (**(code **)(unaff_x20 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion))(2);
  return;
}



/* Address: 0x100af1f7c | FUN_100af1f7c */

void FUN_100af1f7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100ff9180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9178;
  FUN_100005c24(&DAT_100ff9178,&DAT_100c95bf0);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100ff9180 = puVar2;
  return;
}


