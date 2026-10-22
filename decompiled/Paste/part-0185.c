/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10021d644 | FUN_10021d644 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021d644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ID IVar2;
  undefined *self;
  ID self_00;
  ID unaff_x20;
  
  objc_stub::bounds(unaff_x20);
  IVar2 = objc_stub::bitmapImageRepForCachingDisplayInRect_(unaff_x20);
  objc_stub::bounds(unaff_x20);
  if (IVar2 != 0) {
    objc_stub::cacheDisplayInRect_toBitmapImageRep_(unaff_x20,IVar2);
    objc_stub::bounds(unaff_x20);
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    self_00 = objc_stub::initWithSize_((ID)self,param_3,param_4);
    objc_stub::addRepresentation_(self_00,IVar2);
    return self_00;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10021d6dc);
  (*pcVar1)();
}



/* Address: 0x10021d6dc | FUN_10021d6dc */

ID FUN_10021d6dc(ulong param_1,undefined8 param_2)

{
  ID self;
  
  self = 0x8003;
  if ((param_1 & 1) == 0) {
    self = 0x8001;
  }
  FUN_10021dd64(self,0x15,param_2);
  objc_stub::setMovableByWindowBackground_(self,1);
  objc_stub::setTitleVisibility_(self,1);
  return self;
}



/* Address: 0x10021d72c | FUN_10021d72c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021d72c(void)

{
  ID self;
  ID IVar1;
  
  self = 0x8001;
  FUN_10021dd64(0x8001,6,5);
  IVar1 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setBackgroundColor_(self,IVar1);
  objc_stub::setMovableByWindowBackground_(self,1);
  objc_stub::setTitleVisibility_(self,1);
  return self;
}



/* Address: 0x10021d7a4 | FUN_10021d7a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021d7a4(void)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  ID IVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined8 uVar13;
  long lVar14;
  ID unaff_x20;
  _ArrayBuffer _Var15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  
  IVar6 = objc_stub::contentView(unaff_x20);
  if ((IVar6 != 0) && (IVar6 = objc_stub::superview(IVar6), IVar6 != 0)) {
    _Var7.unknown = (undefined *)objc_stub::subviews(IVar6);
    FUN_100201e68(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar18 = _Var7.unknown & 0xffffffffffffff8;
    if ((ulong)_Var7.unknown >> 0x3e == 0) {
      uVar16 = *(ulong *)(puVar18 + 0x10);
    }
    else {
      _Var2.unknown = puVar18;
      if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
        _Var2.unknown = _Var7.unknown;
      }
      uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    _Var15.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        while( true ) {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar18 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10021d9ac);
              (*pcVar5)();
            }
            uVar8 = *(ulong *)(_Var7.unknown + uVar17 * 8 + 0x20);
          }
          else {
            uVar8 = uVar17;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var7);
          }
          uVar1 = uVar17 + 1;
          if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10021d9a8);
            (*pcVar5)();
          }
          pMVar9 = Swift::MainActor::typeMetadataAccessor();
          pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar9);
          pMVar9 = pMVar10;
          FUN_1001f7290();
          UVar11 = Swift::Actor::get_unownedExecutor();
          UVar12 = UVar11;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar12.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/NSWindow+VisualEffects.swift",0x24,1,0x2a,UVar11.unknown,pMVar9);
          }
          _swift_dynamicCastObjCClass(uVar8,&_OBJC_CLASS___NSVisualEffectView);
          _swift_release(pMVar10);
          if (uVar8 != 0) break;
          uVar17 = uVar17 + 1;
          if (uVar1 == uVar16) goto LAB_10021d9c8;
        }
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar17 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        uVar3 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x18);
        if (uVar3 >> 1 <= uVar17) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar17 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,uVar8);
        _Var15.unknown = puVar4;
        uVar17 = uVar1;
      } while (uVar1 != uVar16);
    }
LAB_10021d9c8:
    _swift_bridgeObjectRelease(_Var7.unknown);
    if ((ulong)_Var15.unknown >> 0x3e == 0) {
      lVar14 = *(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var15.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
        _Var2.unknown = _Var15.unknown;
      }
      lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar14 != 0) {
      if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10021da68);
          (*pcVar5)();
        }
        uVar13 = *(undefined8 *)(_Var15.unknown + 0x20);
      }
      else {
        uVar13 = 0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var15);
      }
      _swift_bridgeObjectRelease(_Var15.unknown);
      return uVar13;
    }
    _swift_bridgeObjectRelease(_Var15.unknown);
  }
  return 0;
}



/* Address: 0x10021da68 | FUN_10021da68 */

ID FUN_10021da68(undefined8 param_1,undefined8 param_2)

{
  ID self;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = objc_stub::initWithContentRect_styleMask_backing_defer_
                   (unaff_x20,0,0,0x4059000000000000,0x4059000000000000,param_1,2,0);
  objc_stub::setAnimationBehavior_(self,param_2);
  return self;
}



/* Address: 0x10021dad0 | _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::contentView */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::contentView
             (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSWindow+VisualEffects.swift",0x24,1,0x5a,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::contentView(*(ID *)(param_1 + glassView));
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x10021db74 | _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::setContentView: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSWindow+VisualEffects.swift",0x24,1,0x5b,UVar3.unknown,pMVar1);
  }
  objc_stub::setContentView_(*(ID *)(param_1 + glassView),param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10021dc14 | _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::
   initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

{
  long lVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *self;
  ID IVar7;
  objc_super local_90;
  objc_super local_80;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001f7290();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSWindow+VisualEffects.swift",0x24,1,0x5e,UVar5.unknown,pMVar3);
  }
  lVar1 = glassView;
  self = &_OBJC_CLASS___NSGlassEffectView;
  _objc_allocWithZone();
  IVar7 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar1) = IVar7;
  local_80.receiver = param_1;
  local_80.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_80,"initWithContentRect:styleMask:backing:defer:",
                              param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                              param_3.field1_0x10.field0_0x0);
  local_90.receiver = IVar7;
  local_90.super_class = pcVar2;
  _objc_msgSendSuper2(&local_90,"setContentView:",*(undefined8 *)(IVar7 + glassView));
  _swift_release(pMVar4);
  return IVar7;
}



/* Address: 0x10021dd54 | _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x10021dd64 | FUN_10021dd64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021dd64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar1 & 1) == 0) {
    puVar4 = &_OBJC_CLASS___NSWindow;
    _objc_allocWithZone();
    IVar3 = objc_stub::initWithContentRect_styleMask_backing_defer_
                      ((ID)puVar4,0,0,0x4059000000000000,0x4059000000000000,param_1,2,0);
    IVar2 = objc_stub::setAnimationBehavior_(IVar3,param_3);
    FUN_10021d7a4();
    objc_stub::setMaterial_(IVar2,param_2);
    IVar2 = 0;
    FUN_10021d7a4();
    if (IVar2 != 0) {
      objc_stub::setBlendingMode_(IVar2,0);
    }
    IVar2 = 0;
    FUN_10021d7a4();
    if (IVar2 != 0) {
      objc_stub::setState_(IVar2,1);
    }
  }
  else {
    IVar2 = 0;
    FUN_10021df8c();
    IVar3 = IVar2;
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    IVar3 = objc_stub::initWithContentRect_styleMask_backing_defer_
                      (IVar3,0,0,0x4059000000000000,0x4059000000000000,param_1,2,0);
    objc_stub::setAnimationBehavior_(IVar3,param_3);
    puVar4 = &_OBJC_CLASS___NSToolbar;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar4);
    objc_stub::setToolbar_(IVar3,IVar5);
    IVar5 = objc_stub::toolbar(IVar3);
    objc_stub::setAllowsDisplayModeCustomization_(IVar5,0);
    IVar5 = objc_stub::toolbar(IVar3);
    objc_stub::setAllowsUserCustomization_(IVar5,0);
    IVar5 = objc_stub::toolbar(IVar3);
    if (IVar5 != 0) {
      objc_stub::setDisplayMode_(IVar5,3);
    }
    objc_stub::setToolbarStyle_(IVar3,3);
    IVar5 = IVar3;
    _swift_dynamicCastClass(IVar3,IVar2);
    if (IVar5 != 0) {
      objc_stub::setCornerRadius_
                (*(ID *)(IVar5 + _TtC7PasteUIP33_28797A8F2A43D3DCFE4371F74D9C5FF021GlassBackgroundWindow
                                 ::glassView),0x403a000000000000);
    }
  }
  objc_stub::setTitlebarAppearsTransparent_(IVar3,1);
  return IVar3;
}



/* Address: 0x10021df8c | FUN_10021df8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10021df8c(void)

{
  return ZEXT816(0x100f966e8);
}



/* Address: 0x10021dfac | FUN_10021dfac */

void FUN_10021dfac(Binding<bool> param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ModifiedContent MVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar1 = &DAT_100ec23e0;
  _swift_allocObject(&DAT_100ec23e0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = in_stack_00000000;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000008;
  *(undefined8 *)(puVar1 + 0x20) = in_stack_00000010;
  *(undefined8 *)(puVar1 + 0x28) = in_stack_00000018;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_70 = in_stack_00000018;
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  _swift_retain(param_5);
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_70);
  (extension_SwiftUI)::SwiftUI::View::_sheet(param_1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x10021e0b4 | FUN_10021e0b4 */

void FUN_10021e0b4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  lVar9 = *(long *)(param_5 + -8);
  local_90 = param_3;
  local_88 = param_2;
  local_80 = param_7;
  local_78 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar13 = *(long *)(MVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar11 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001f7290();
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteUI/View+BottomSheet.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/View+BottomSheet.swift",0x1e,1,0xb,UVar5.unknown,pMVar3);
  }
  (*local_88)(lVar12);
  SwiftUI::Alignment::get_center((Alignment)pcVar6);
  uVar1 = local_80;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x407e000000000000);
  (**(code **)(lVar9 + 8))(lVar12,param_5);
  local_70 = uVar1;
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_70);
  thunk_FUN_10003cc94(lVar10,lVar11,MVar2.unknown,puVar7);
  pcVar8 = *(code **)(lVar13 + 8);
  (*pcVar8)(lVar11,MVar2.unknown);
  thunk_FUN_10003cc94(local_78,lVar10,MVar2.unknown,puVar7);
  (*pcVar8)(lVar10,MVar2.unknown);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x10021e2ac | FUN_10021e2ac */

void FUN_10021e2ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021e2d0 | FUN_10021e2d0 */

void FUN_10021e2d0(void)

{
  long unaff_x20;
  
  FUN_10021e0b4(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10021e2e0 | FUN_10021e2e0 */

void FUN_10021e2e0(undefined8 param_1)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010021e2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10021e2f8 | FUN_10021e2f8 */

void FUN_10021e2f8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010021e30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10021e310 | FUN_10021e310 */

void FUN_10021e310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puStack_38 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_40 = uVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_40);
  local_60 = uVar1;
  puStack_58 = MVar4.unknown;
  local_50 = uVar2;
  puStack_48 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  return;
}



/* Address: 0x10021e390 | FUN_10021e390 */

undefined8 FUN_10021e390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x10021e398 | FUN_10021e398 */

void FUN_10021e398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x10021e3e8 | FUN_10021e3e8 */

void FUN_10021e3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x10021e404 | FUN_10021e404 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10021e404(void)

{
  undefined8 uVar1;
  void *aBlock;
  ID IVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_58,0,0);
  FUN_100201b24(unaff_x20 + 0x28,&local_90);
  FUN_100201adc(&local_90);
  if (local_78 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x20);
    local_70 = *(undefined8 *)(unaff_x20 + 0x18);
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    uStack_88 = 0x42000000;
    local_80 = FUN_100059c14;
    local_78 = &DAT_100ec2400;
    aBlock = __Block_copy(&local_90);
    uVar1 = uStack_68;
    _swift_retain(uVar4);
    _swift_release(uVar1);
    IVar2 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                      ((ID)&_OBJC_CLASS___NSEvent,uVar3,aBlock);
    __Block_release(aBlock);
    if (IVar2 == 0) {
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      local_80 = (code *)0x0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar2);
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_a8,0x21,0);
    FUN_10021e55c(&local_90,unaff_x20 + 0x28);
    _swift_endAccess(auStack_a8);
  }
  return;
}



/* Address: 0x10021e540 | FUN_10021e540 */

void FUN_10021e540(long param_1,long param_2)

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



/* Address: 0x10021e554 | FUN_10021e554 */

void FUN_10021e554(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10021e55c | FUN_10021e55c */

undefined8 FUN_10021e55c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7000;
  FUN_1000037f0(&DAT_100fb7000,&DAT_100c36720);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10021e5ac | FUN_10021e5ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10021e5ac(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_88,0,0);
  FUN_100201b24(unaff_x20 + 0x28,&local_70);
  if (local_58 == 0) {
    FUN_100201adc(&local_70);
  }
  else {
    FUN_100011080(&local_70,auStack_50);
    puVar1 = auStack_50;
    FUN_100004640(puVar1,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar1);
    _swift_unknownObjectRelease(puVar1);
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
    _swift_beginAccess(unaff_x20 + 0x28,auStack_a0,0x21,0);
    FUN_10021e55c(&local_70,unaff_x20 + 0x28);
    _swift_endAccess(auStack_a0);
    FUN_100004594(auStack_50);
  }
  return;
}



/* Address: 0x10021e68c | FUN_10021e68c */

void FUN_10021e68c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100201adc(unaff_x20 + 0x28);
  return;
}



/* Address: 0x10021e6b0 | FUN_10021e6b0 */

void FUN_10021e6b0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100201adc(unaff_x20 + 0x28);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10021e6dc | FUN_10021e6dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10021e6dc(void)

{
  return ZEXT816(0x100fb7380);
}



/* Address: 0x10021e6fc | FUN_10021e6fc */

void FUN_10021e6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_100ec2438;
  _swift_allocObject(&DAT_100ec2438,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar3 = &DAT_100fb7300;
  FUN_1000037f0(&DAT_100fb7300,&DAT_100c36a18);
  (**(code **)(*(long *)(puVar3 + -8) + 0x10))(param_1,param_2,puVar3);
  puVar3 = &DAT_100fb7308;
  FUN_1000037f0(&DAT_100fb7308,&DAT_100c36a20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  *puVar1 = FUN_10021e80c;
  puVar1[1] = puVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = &DAT_100ec2460;
  _swift_allocObject(&DAT_100ec2460,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar3 = &DAT_100fb7310;
  FUN_1000037f0(&DAT_100fb7310,&DAT_100c36a28);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_10021e910;
  puVar1[3] = puVar2;
  _swift_retain_n(param_4,2);
  _swift_retain_n(param_3,2);
  return;
}



/* Address: 0x10021e808 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x10021e80c | FUN_10021e80c */

void FUN_10021e80c(void)

{
  long unaff_x20;
  
  FUN_10021e830(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x30,
                FUN_10021e404);
  return;
}



/* Address: 0x10021e830 | FUN_10021e830 */

void FUN_10021e830(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  State SVar5;
  undefined8 local_68;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/View+Events.swift",0x19,1,param_3,UVar3.unknown,pMVar1);
  }
  SVar5.unknown = &DAT_100fb7500;
  FUN_1000037f0(&DAT_100fb7500,&DAT_100c36bc8);
  SwiftUI::State::get_wrappedValue(SVar5);
  (*param_4)();
  _swift_release(pMVar2);
  _swift_release(local_68);
  return;
}



/* Address: 0x10021e910 | FUN_10021e910 */

void FUN_10021e910(void)

{
  long unaff_x20;
  
  FUN_10021e830(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x31,
                FUN_10021e5ac);
  return;
}



/* Address: 0x10021e934 | FUN_10021e934 */

void FUN_10021e934(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  puVar4 = &DAT_100ec26e0;
  _swift_allocObject(&DAT_100ec26e0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  puVar5 = &DAT_100fb7300;
  FUN_1000037f0(&DAT_100fb7300,&DAT_100c36a18);
  (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
  puVar5 = &DAT_100fb7308;
  FUN_1000037f0(&DAT_100fb7308,&DAT_100c36a20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = thunk_FUN_10021e80c;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar4 = &DAT_100ec2708;
  _swift_allocObject(&DAT_100ec2708,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  puVar5 = &DAT_100fb7310;
  FUN_1000037f0(&DAT_100fb7310,&DAT_100c36a28);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = thunk_FUN_10021e910;
  puVar1[3] = puVar4;
  _swift_retain_n(uVar3,2);
  _swift_retain_n(uVar2,2);
  return;
}



/* Address: 0x10021ea3c | FUN_10021ea3c */

void FUN_10021ea3c(void)

{
  FUN_10021f61c();
  return;
}



/* Address: 0x10021ea4c | FUN_10021ea4c */

void FUN_10021ea4c(void)

{
  FUN_10021f61c();
  return;
}



/* Address: 0x10021ea5c | FUN_10021ea5c */

void FUN_10021ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ec2488;
  _swift_allocObject(&DAT_100ec2488,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  _swift_retain(param_6);
  FUN_10021eb04(param_1,param_2,param_3,param_4,FUN_1000386a0,puVar1,param_7,param_8);
  _swift_release(puVar1);
  return;
}



/* Address: 0x10021eb04 | FUN_10021eb04 */

void FUN_10021eb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ec24b0;
  _swift_allocObject(&DAT_100ec24b0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar1[0x20] = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(param_6);
  FUN_10021ea3c(param_1,FUN_10021f1b4,puVar1,param_7,param_8);
  _swift_release(puVar1);
  return;
}



/* Address: 0x10021ebb0 | FUN_10021ebb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021ebb0(ID param_1,long param_2,undefined *param_3,uint param_4,code *param_5,void *param_6
                )

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Character *pCVar4;
  ID IVar5;
  EventModifiers EVar6;
  EventModifiers EVar7;
  KeyEquivalent KVar8;
  _StringGuts _Var9;
  void *pvVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  Character *pCVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  Character CVar18;
  String SVar19;
  Character CVar20;
  Character CStack_c0;
  code *pcStack_b0;
  undefined *local_a8;
  uint local_9c;
  long local_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  CStack_c0.bridgeObject = param_6;
  pcStack_b0 = param_5;
  local_a8 = param_3;
  local_9c = param_4;
  puStack_88 = (undefined *)SwiftUI::KeyEquivalent::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar15 = (long)&CStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10021fcf0();
  local_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pCVar12 = (Character *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = (long)pCVar12 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_70 = *(long *)(param_2 + 0x10);
  if (local_70 != 0) {
    lVar17 = 0;
    local_78 = param_2 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(extraout_x12 + 0x48);
    local_98 = lVar15;
    do {
      FUN_10022038c(local_78 + local_80 * lVar17,lVar3 - extraout_x13_00);
      FUN_1002203d0(lVar3 - extraout_x13_00,lVar3);
      FUN_10022038c(lVar3,pCVar12);
      pCVar4 = pCVar12;
      _swift_getEnumCaseMultiPayload(pCVar12,local_68);
      if ((int)pCVar4 == 0) {
        (**(code **)(local_90 + 0x20))(lVar15,pCVar12,puStack_88);
        IVar5 = objc_stub::charactersIgnoringModifiers(param_1);
        KVar8.unknown = (undefined *)0x0;
        if (IVar5 == 0) {
LAB_10021ef0c:
          CVar18 = SwiftUI::KeyEquivalent::get_character(KVar8);
          pvVar10 = CVar18.bridgeObject;
LAB_10021ef14:
          _swift_bridgeObjectRelease(pvVar10);
        }
        else {
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          KVar8.unknown = SVar19.bridgeObject;
          uVar14 = (ulong)SVar19.str & 0xffffffffffff;
          if (((ulong)KVar8.unknown & 0x2000000000000000) != 0) {
            uVar14 = (ulong)KVar8.unknown >> 0x38 & 0xf;
          }
          if (uVar14 == 0) {
            _swift_bridgeObjectRelease();
            goto LAB_10021ef0c;
          }
          CVar18 = Swift::String::get_subscript((Index)0xf,SVar19);
          _Var9.unknown = CVar18.bridgeObject;
          _swift_bridgeObjectRelease();
          CVar20 = SwiftUI::KeyEquivalent::get_character(KVar8);
          pvVar10 = CVar20.bridgeObject;
          if (_Var9.unknown == (undefined *)0x0) goto LAB_10021ef14;
          if (CVar18 == CVar20) {
            _swift_bridgeObjectRelease(_Var9.unknown);
            _swift_bridgeObjectRelease(pvVar10);
LAB_10021f038:
            uVar1 = local_9c & 0xff;
            IVar5 = objc_stub::modifierFlags(param_1);
            if (uVar1 != 1) {
              EVar6 = SwiftUI::EventModifiers::init(0);
              if (DAT_100fb7318 != -1) {
                _swift_once(&DAT_100fb7318,FUN_10021f89c);
              }
              lVar15 = *(long *)(DAT_100fb7320 + 0x10);
              if (lVar15 != 0) {
                puVar16 = (ulong *)(DAT_100fb7320 + 0x28);
                do {
                  if ((puVar16[-1] & (IVar5 ^ 0xffffffffffffffff)) == 0) {
                    uVar14 = *puVar16;
                    EVar7 = SwiftUI::EventModifiers::init(uVar14);
                    SwiftUI::EventModifiers::init((ulong)EVar7.unknown & (ulong)EVar6.unknown);
                    EVar6 = SwiftUI::EventModifiers::init(uVar14 | (ulong)EVar6.unknown);
                  }
                  puVar16 = puVar16 + 2;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              lVar15 = local_98;
              if (EVar6.unknown != local_a8) goto LAB_10021ef1c;
            }
            (*pcStack_b0)(lVar3);
            (**(code **)(local_90 + 8))(lVar15,puStack_88);
LAB_10021f138:
            FUN_10021fcb4(lVar3);
            return 0;
          }
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar18.str,_Var9,
                             (_StringComparisonResult)(__int8)CVar20.str);
          _swift_bridgeObjectRelease(_Var9.unknown);
          _swift_bridgeObjectRelease(pvVar10);
          if (bVar2) goto LAB_10021f038;
        }
LAB_10021ef1c:
        (**(code **)(local_90 + 8))(lVar15,puStack_88);
      }
      else if ((int)pCVar4 == 1) {
        pcVar13 = pCVar12->str;
        IVar5 = objc_stub::keyCode(param_1);
        if (pcVar13 == (char *)(IVar5 & 0xffffffff)) {
          uVar1 = local_9c & 0xff;
          IVar5 = objc_stub::modifierFlags(param_1);
          if (uVar1 != 1) {
            EVar6 = SwiftUI::EventModifiers::init(0);
            if (DAT_100fb7318 != -1) {
              _swift_once(&DAT_100fb7318,FUN_10021f89c);
            }
            lVar15 = *(long *)(DAT_100fb7320 + 0x10);
            if (lVar15 != 0) {
              puVar16 = (ulong *)(DAT_100fb7320 + 0x28);
              do {
                if ((puVar16[-1] & (IVar5 ^ 0xffffffffffffffff)) == 0) {
                  uVar14 = *puVar16;
                  EVar7 = SwiftUI::EventModifiers::init(uVar14);
                  SwiftUI::EventModifiers::init((ulong)EVar7.unknown & (ulong)EVar6.unknown);
                  EVar6 = SwiftUI::EventModifiers::init(uVar14 | (ulong)EVar6.unknown);
                }
                puVar16 = puVar16 + 2;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
LAB_10021ecc0:
            lVar15 = local_98;
            if (EVar6.unknown != local_a8) goto LAB_10021ecd0;
          }
LAB_10021f12c:
          (*pcStack_b0)(lVar3);
          goto LAB_10021f138;
        }
      }
      else {
        pcVar13 = pCVar12->str;
        pvVar10 = pCVar12->bridgeObject;
        CVar18 = *pCVar12;
        IVar5 = objc_stub::charactersIgnoringModifiers(param_1);
        if (IVar5 != 0) {
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar11 = SVar19.bridgeObject;
          uVar14 = (ulong)SVar19.str & 0xffffffffffff;
          if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
            uVar14 = (ulong)pvVar11 >> 0x38 & 0xf;
          }
          if (uVar14 != 0) {
            CVar20 = Swift::String::get_subscript((Index)0xf,SVar19);
            _Var9.unknown = CVar20.bridgeObject;
            _swift_bridgeObjectRelease(pvVar11);
            if (CVar20 == CVar18) {
              _swift_bridgeObjectRelease(_Var9.unknown);
              _swift_bridgeObjectRelease(pvVar10);
            }
            else {
              bVar2 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)CVar20.str,_Var9,
                                 (_StringComparisonResult)(__int8)pcVar13);
              _swift_bridgeObjectRelease(_Var9.unknown);
              _swift_bridgeObjectRelease(pvVar10);
              lVar15 = local_98;
              if (!bVar2) goto LAB_10021ecd0;
            }
            uVar1 = local_9c & 0xff;
            IVar5 = objc_stub::modifierFlags(param_1);
            if (uVar1 != 1) {
              EVar6 = SwiftUI::EventModifiers::init(0);
              if (DAT_100fb7318 != -1) {
                _swift_once(&DAT_100fb7318,FUN_10021f89c);
              }
              lVar15 = *(long *)(DAT_100fb7320 + 0x10);
              if (lVar15 != 0) {
                puVar16 = (ulong *)(DAT_100fb7320 + 0x28);
                do {
                  if ((puVar16[-1] & (IVar5 ^ 0xffffffffffffffff)) == 0) {
                    uVar14 = *puVar16;
                    EVar7 = SwiftUI::EventModifiers::init(uVar14);
                    SwiftUI::EventModifiers::init((ulong)EVar7.unknown & (ulong)EVar6.unknown);
                    EVar6 = SwiftUI::EventModifiers::init(uVar14 | (ulong)EVar6.unknown);
                  }
                  puVar16 = puVar16 + 2;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              goto LAB_10021ecc0;
            }
            goto LAB_10021f12c;
          }
          _swift_bridgeObjectRelease(pvVar10);
          pvVar10 = pvVar11;
          lVar15 = local_98;
        }
        _swift_bridgeObjectRelease(pvVar10);
      }
LAB_10021ecd0:
      lVar17 = lVar17 + 1;
      FUN_10021fcb4(lVar3);
    } while (lVar17 != local_70);
  }
  return param_1;
}



/* Address: 0x10021f188 | FUN_10021f188 */

void FUN_10021f188(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021f1b4 | FUN_10021f1b4 */

void FUN_10021f1b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10021ebb0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10021f1c4 | FUN_10021f1c4 */

undefined * FUN_10021f1c4(ulong param_1)

{
  EventModifiers EVar1;
  EventModifiers EVar2;
  ulong rawValue;
  long lVar3;
  ulong *puVar4;
  
  EVar1 = SwiftUI::EventModifiers::init(0);
  if (DAT_100fb7318 != -1) {
    _swift_once(&DAT_100fb7318,FUN_10021f89c);
  }
  lVar3 = *(long *)(DAT_100fb7320 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (ulong *)(DAT_100fb7320 + 0x28);
    do {
      if ((puVar4[-1] & (param_1 ^ 0xffffffffffffffff)) == 0) {
        rawValue = *puVar4;
        EVar2 = SwiftUI::EventModifiers::init(rawValue);
        SwiftUI::EventModifiers::init((ulong)EVar2.unknown & (ulong)EVar1.unknown);
        EVar1 = SwiftUI::EventModifiers::init(rawValue | (ulong)EVar1.unknown);
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return EVar1.unknown;
}



/* Address: 0x10021f27c | FUN_10021f27c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f314 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10021f27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100ec24d8;
  _swift_allocObject(&DAT_100ec24d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = puVar1;
  FUN_10021e6dc();
  puVar3 = puVar2;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0x1000;
  *(code **)(puVar3 + 0x18) = FUN_10021f950;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  _swift_retain(param_3);
  SwiftUI::State::init(&local_60,puVar3,puVar2);
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,puVar3,param_4,&DAT_100ec2580,param_5);
  _swift_release(local_60);
  _swift_release(uStack_58);
  return;
}



/* Address: 0x10021f368 | thunk_FUN_10021f36c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f38c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] thunk_FUN_10021f36c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10021e6dc();
  SwiftUI::State::init(&uStack_20,param_1,param_1);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Address: 0x10021f36c | FUN_10021f36c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f38c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10021f36c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_10021e6dc();
  SwiftUI::State::init(&local_20,param_1,param_1);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}



/* Address: 0x10021f3a0 | FUN_10021f3a0 */

void FUN_10021f3a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_100ec2500;
  _swift_allocObject(&DAT_100ec2500,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar3 = &DAT_100fb7328;
  FUN_1000037f0(&DAT_100fb7328,&DAT_100c36a30);
  (**(code **)(*(long *)(puVar3 + -8) + 0x10))(param_1,param_2,puVar3);
  puVar3 = &DAT_100fb7330;
  FUN_1000037f0(&DAT_100fb7330,&DAT_100c36a38);
  iVar1 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = FUN_10021f97c;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar2;
  _swift_retain(param_4);
  _swift_retain(param_3);
  return;
}



/* Address: 0x10021f454 | FUN_10021f454 */

void FUN_10021f454(ulong param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  State SVar5;
  undefined8 local_58;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/View+Events.swift",0x19,1,0x7c,UVar3.unknown,pMVar1);
  }
  if ((param_1 & 1) == 0) {
    SVar5.unknown = &DAT_100fb7500;
    FUN_1000037f0(&DAT_100fb7500,&DAT_100c36bc8);
    SwiftUI::State::get_wrappedValue(SVar5);
    FUN_10021e5ac();
  }
  else {
    SVar5.unknown = &DAT_100fb7500;
    FUN_1000037f0(&DAT_100fb7500,&DAT_100c36bc8);
    SwiftUI::State::get_wrappedValue(SVar5);
    FUN_10021e404();
  }
  _swift_release(pMVar2);
  _swift_release(local_58);
  return;
}



/* Address: 0x10021f55c | FUN_10021f55c */

void FUN_10021f55c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  puVar4 = &DAT_100ec26b8;
  _swift_allocObject(&DAT_100ec26b8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  puVar5 = &DAT_100fb7328;
  FUN_1000037f0(&DAT_100fb7328,&DAT_100c36a30);
  (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
  puVar5 = &DAT_100fb7330;
  FUN_1000037f0(&DAT_100fb7330,&DAT_100c36a38);
  iVar3 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar3) = thunk_FUN_10021f97c;
  ((undefined8 *)(param_1 + iVar3))[1] = puVar4;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10021f60c | FUN_10021f60c */

void FUN_10021f60c(void)

{
  FUN_10021f61c();
  return;
}



/* Address: 0x10021f61c | FUN_10021f61c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f698 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10021f61c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = param_2;
  FUN_10021e6dc();
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x10) = param_6;
  *(long *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  _swift_retain(param_3);
  SwiftUI::State::init(&local_70,lVar2,lVar1);
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,lVar2,param_4,param_7,param_5);
  _swift_release(local_70);
  _swift_release(uStack_68);
  return;
}



/* Address: 0x10021f6ec | FUN_10021f6ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f770 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10021f6ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = 8;
  if (((uint)param_2 & 0xff) != 1) {
    uVar1 = 2;
  }
  FUN_10021e6dc();
  lVar2 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  _swift_retain(param_4);
  SwiftUI::State::init(&local_60,lVar2,param_2);
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,lVar2,param_5,&DAT_100ec2600,param_6);
  _swift_release(local_60);
  _swift_release(uStack_58);
  return;
}



/* Address: 0x10021f7c4 | FUN_10021f7c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f848 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10021f7c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = 0x10;
  if (((uint)param_2 & 0xff) != 1) {
    uVar1 = 4;
  }
  FUN_10021e6dc();
  lVar2 = param_2;
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  _swift_retain(param_4);
  SwiftUI::State::init(&local_60,lVar2,param_2);
  (extension_SwiftUI)::SwiftUI::View::_modifier(param_1,lVar2,param_5,&DAT_100ec2600,param_6);
  _swift_release(local_60);
  _swift_release(uStack_58);
  return;
}



/* Address: 0x10021f89c | FUN_10021f89c */

void FUN_10021f89c(void)

{
  EventModifiers EVar1;
  EventModifiers EVar2;
  
  EVar1.unknown = &DAT_100fb7508;
  FUN_1000037f0(&DAT_100fb7508,&DAT_100c36bd0);
  _swift_allocObject();
  *(undefined8 *)(EVar1.unknown + 0x18) = 10;
  *(undefined8 *)(EVar1.unknown + 0x10) = 5;
  *(undefined8 *)(EVar1.unknown + 0x20) = 0x10000;
  EVar2 = SwiftUI::EventModifiers::get_capsLock(EVar1);
  *(undefined **)(EVar1.unknown + 0x28) = EVar2.unknown;
  *(undefined8 *)(EVar1.unknown + 0x30) = 0x20000;
  EVar2 = SwiftUI::EventModifiers::get_shift(EVar2);
  *(undefined **)(EVar1.unknown + 0x38) = EVar2.unknown;
  *(undefined8 *)(EVar1.unknown + 0x40) = 0x40000;
  EVar2 = SwiftUI::EventModifiers::get_control(EVar2);
  *(undefined **)(EVar1.unknown + 0x48) = EVar2.unknown;
  *(undefined8 *)(EVar1.unknown + 0x50) = 0x80000;
  EVar2 = SwiftUI::EventModifiers::get_option(EVar2);
  *(undefined **)(EVar1.unknown + 0x58) = EVar2.unknown;
  *(undefined8 *)(EVar1.unknown + 0x60) = 0x100000;
  EVar2 = SwiftUI::EventModifiers::get_command(EVar2);
  *(undefined **)(EVar1.unknown + 0x68) = EVar2.unknown;
  DAT_100fb7320 = EVar1.unknown;
  return;
}



/* Address: 0x10021f92c | FUN_10021f92c */

void FUN_10021f92c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021f950 | FUN_10021f950 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021f950(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002202b4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return param_1;
}



/* Address: 0x10021f97c | FUN_10021f97c */

void FUN_10021f97c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10021f454(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10021f984 | FUN_10021f984 */

void FUN_10021f984(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca88e8,1);
  return;
}



/* Address: 0x10021f994 | thunk_FUN_10021f998 */

void thunk_FUN_10021f998(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7338 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36a90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36a90,&DAT_100ec2698);
  DAT_100fb7338 = pTVar1;
  return;
}



/* Address: 0x10021f998 | FUN_10021f998 */

void FUN_10021f998(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7338 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36a90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36a90,&DAT_100ec2698);
  DAT_100fb7338 = pTVar1;
  return;
}



/* Address: 0x10021f9d8 | FUN_10021f9d8 */

void FUN_10021f9d8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca8ab4,1);
  return;
}



/* Address: 0x10021f9e8 | FUN_10021f9e8 */

undefined1  [16] FUN_10021f9e8(void)

{
  return ZEXT816(0x100ec2580);
}



/* Address: 0x10021f9f8 | FUN_10021f9f8 */

long * FUN_10021f9f8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  KeyEquivalent KVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 2) {
      lVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar6;
      _swift_bridgeObjectRetain();
      uVar4 = 2;
    }
    else {
      if ((int)plVar3 != 0) {
        plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
        return plVar3;
      }
      KVar2 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
      (**(code **)(*(long *)(KVar2.unknown + -8) + 0x10))(param_1,param_2,KVar2.unknown);
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10021fad4 | FUN_10021fad4 */

void FUN_10021fad4(long param_1)

{
  long lVar1;
  KeyEquivalent KVar2;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar1 == 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    return;
  }
  if ((int)lVar1 == 0) {
    KVar2 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010021fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(KVar2.unknown + -8) + 8))(param_1,KVar2.unknown);
    return;
  }
  return;
}


