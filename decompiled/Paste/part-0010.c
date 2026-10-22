/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000177bc | FUN_1000177bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long **** FUN_1000177bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long ***ppplVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  code *pcVar9;
  long ***local_b8 [3];
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100017a74);
    (*pcVar9)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
  if (DAT_100fa6f40 != -1) {
    _swift_once(&DAT_100fa6f40,FUN_1000177ac);
  }
  puVar3 = &DAT_100fa6f48;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar3 != (undefined *)0x0) {
    FUN_1001adce8();
    return (long ****)0x0;
  }
  FUN_100017a74();
  ppplVar4 = (long ***)0x1;
  FUN_10021d6dc(1,5,puVar3);
  uVar5 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar4 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100017ab8;
  puVar1[1] = 0;
  FUN_100004550(uVar6,uVar2);
  puVar3 = &DAT_100eb0698;
  _swift_allocObject(&DAT_100eb0698,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar1 = (undefined8 *)((long)ppplVar4 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100017ba8;
  puVar1[1] = puVar3;
  FUN_100011128(param_2,param_3);
  FUN_100004550(uVar6,uVar2);
  ppuStack_98 = &PTR_PTR_100ebe110;
  uVar6 = 0;
  local_b8[0] = ppplVar4;
  local_a0 = uVar5;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar7 = local_b8;
  FUN_1001ad514();
  FUN_100017bb0(0);
  _objc_allocWithZone();
  pppplVar8 = pppplVar7;
  _swift_retain(pppplVar7);
  FUN_10001809c();
  (*(code *)(*pppplVar7)[0xd])(pppplVar8);
  ppuStack_98 = &PTR_PTR_100ebe0e8;
  pcVar9 = *(code **)(param_6 + 0x20);
  local_b8[0] = (long ***)pppplVar7;
  local_a0 = uVar6;
  _swift_retain(pppplVar7);
  (*pcVar9)(local_b8,FUN_100004520,0,param_4,param_6);
  _swift_release(pppplVar7);
  pppplVar7 = local_b8;
  FUN_100004594(pppplVar7);
  return pppplVar7;
}



/* Address: 0x100017a74 | FUN_100017a74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100017a74(void)

{
  undefined *puVar1;
  
  if (DAT_100fa6f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSWindow;
  _swift_getObjCClassMetadata();
  DAT_100fa6f50 = puVar1;
  return;
}



/* Address: 0x100017ab8 | FUN_100017ab8 */

void FUN_100017ab8(ID param_1)

{
  objc_stub::center(param_1);
  if (DAT_100fa6f40 != -1) {
    _swift_once(&DAT_100fa6f40,FUN_1000177ac);
  }
  _swift_unknownObjectWeakAssign(&DAT_100fa6f48,param_1);
  return;
}



/* Address: 0x100017b0c | FUN_100017b0c */

void FUN_100017b0c(uint param_1,code *param_2)

{
  if (DAT_100fa6f40 != -1) {
    _swift_once(&DAT_100fa6f40,FUN_1000177ac);
  }
  _swift_unknownObjectWeakAssign(&DAT_100fa6f48,0);
  if (param_2 != (code *)0x0) {
    (*param_2)(param_1 & 1);
  }
  return;
}



/* Address: 0x100017b7c | FUN_100017b7c */

void FUN_100017b7c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100017ba8 | FUN_100017ba8 */

void FUN_100017ba8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100017b0c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100017bb0 | FUN_100017bb0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100017bb0(void)

{
  return ZEXT816(0x100f8f758);
}



/* Address: 0x100017bd0 | FUN_100017bd0 */

void FUN_100017bd0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100017be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))(param_1,0,0,param_2,param_3);
  return;
}



/* Address: 0x100017be8 | FUN_100017be8 */

void FUN_100017be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100017c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))(4,param_1,param_2,param_3);
  return;
}



/* Address: 0x100017c04 | _TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/Router+Licensing.swift",0x1c,1,0x5c,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8df30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100017cb8);
  (*pcVar1)();
}



/* Address: 0x100017cb8 | _TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController::initWithNibName:bundle: */

/* Function Stack Size: 0x20 bytes */

ID _TtC5PasteP33_0834BD6CB1CDAA1FA46B007E7F71175821PaywallViewController::initWithNibName_bundle_
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
              ("Paste/Router+Licensing.swift",0x1c,1,0x43,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.PaywallViewController",0x1b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100017d40);
  (*pcVar1)();
}



/* Address: 0x100017d40 | FUN_100017d40 */

void FUN_100017d40(void)

{
  FUN_1000177bc();
  return;
}



/* Address: 0x100017d4c | FUN_100017d4c */

void FUN_100017d4c(void)

{
  URL UVar1;
  URL UVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  URL UVar7;
  undefined8 uVar8;
  URL UVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar10;
  long extraout_x12;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  URL local_100;
  URL local_f8;
  undefined *local_f0;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  long lStack_c0;
  
  puVar4 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_100 - extraout_x8;
  local_f0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = (undefined *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_100.unknown = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = puVar10 + -extraout_x12;
  puVar4 = &DAT_100fa6fa0;
  local_f8.unknown = puVar10;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar10 - extraout_x8_01;
  lVar5 = 0;
  FUN_10019fee0();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100c23bf0;
  _swift_getKeyPath(&DAT_100c23bf0);
  puVar10 = &DAT_100faa360;
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_initStackObject();
  FUN_1000da6e0(puVar4,puVar10);
  FUN_1000da768(local_e0);
  FUN_100004640(local_e0,local_c8);
  (**(code **)(lStack_c0 + 8))(lVar16,local_c8,lStack_c0);
  lVar6 = lVar16;
  (**(code **)(lVar15 + 0x30))(lVar16,1,lVar5);
  if ((int)lVar6 == 1) {
    FUN_100005808(lVar16,&DAT_100fa6fa0,&DAT_100c284c0);
    FUN_100004594(local_e0);
  }
  else {
    FUN_1000182c8(lVar16,lVar13);
    FUN_100004594(local_e0);
    FUN_10001830c(lVar13 + *(int *)(lVar5 + 0x1c),lVar14);
    puVar10 = local_f0;
    lVar6 = lVar14;
    (**(code **)(lVar11 + 0x30))(lVar14,1,local_f0);
    UVar2.unknown = local_f8.unknown;
    if ((int)lVar6 != 1) {
      UVar7.unknown = local_f8.unknown;
      (**(code **)(lVar11 + 0x20))(local_f8.unknown,lVar14,puVar10);
      FUN_100247dd0();
      UVar1.unknown = local_100.unknown;
      UVar9.unknown = puVar10;
      (**(code **)(lVar11 + 0x10))(local_100.unknown,UVar7.unknown);
      bVar3 = Foundation::URL::___infix(UVar2,UVar1,UVar9);
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(UVar1.unknown,puVar10);
      if (bVar3) {
        FUN_1001adc9c(0);
        FUN_1002c85c4();
      }
      else {
        uVar8 = 0;
        FUN_1001adc9c(0);
        FUN_1001ad0d8(UVar2.unknown,uVar8,&PTR_PTR_100ebe0c0,&PTR_PTR_100ec6cd0);
      }
      _swift_release(puVar4);
      (*pcVar12)(UVar2.unknown,puVar10);
      FUN_10001835c(lVar13);
      return;
    }
    FUN_10001835c(lVar13);
    FUN_100005808(lVar14,&DAT_100fa6f98,&DAT_100c23be0);
  }
  FUN_100064afc(4,0,0);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10001809c | FUN_10001809c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10001809c(undefined8 param_1,undefined1 param_2,class_t *param_3)

{
  class_t *pcVar1;
  undefined8 uVar2;
  ID self;
  undefined *puVar3;
  Alignment AVar4;
  NSHostingView *pNVar5;
  undefined8 *puVar6;
  undefined8 local_128;
  code *pcStack_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0 [8];
  objc_super local_b0;
  undefined8 auStack_a0 [3];
  undefined8 local_88;
  undefined **local_80;
  undefined **ppuStack_78;
  code *local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pcVar1 = param_3;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_1001adc9c();
  local_80 = &PTR_PTR_100ebe100;
  ppuStack_78 = &PTR_PTR_100ec6cd0;
  local_b0.receiver = (ID)param_3;
  local_b0.super_class = pcVar1;
  auStack_a0[0] = param_1;
  local_88 = uVar2;
  self = _objc_msgSendSuper2(&local_b0,"initWithNibName:bundle:",0,0);
  puVar3 = &DAT_100c23b98;
  _swift_getKeyPath(&DAT_100c23b98);
  FUN_1000037f0(&DAT_100fa6f80,&DAT_100c23bc8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar3);
  FUN_100018280(auStack_a0,&local_128);
  uStack_f8 = CONCAT71(uStack_f8._1_7_,param_2);
  FUN_1000da768(&local_70);
  uVar2 = CONCAT71(uStack_67,local_68);
  (*local_70)(local_f0,&local_128);
  _swift_release(uVar2);
  AVar4.unknown = (undefined *)&local_128;
  FUN_100005808(AVar4.unknown,&DAT_100fa6f88,&DAT_100c23bd0);
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FrameLayout::_init((Alignment)0x4081000000000000);
  local_128 = local_f0[0];
  pcStack_120 = local_70;
  local_118 = local_68;
  local_110 = local_60;
  local_108 = local_58;
  uStack_f8 = uStack_48;
  local_100 = local_50;
  pNVar5 = (NSHostingView *)&DAT_100fa6f90;
  FUN_1000037f0(&DAT_100fa6f90,&DAT_100c23bd8);
  _objc_allocWithZone();
  _swift_retain(local_f0[0]);
  puVar6 = &local_128;
  SwiftUI::NSHostingView::_init(pNVar5,puVar6);
  objc_stub::setView_(self,puVar6);
  _swift_release(puVar3);
  _swift_release(local_f0[0]);
  FUN_100004594(auStack_a0);
  return self;
}



/* Address: 0x10001827c | thunk_FUN_100037f04 */

void thunk_FUN_100037f04(void)

{
  FUN_100037f04();
  return;
}



/* Address: 0x100018280 | FUN_100018280 */

long FUN_100018280(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Address: 0x1000182c4 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x1000182c8 | FUN_1000182c8 */

undefined8 FUN_1000182c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10001830c | FUN_10001830c */

undefined8 FUN_10001830c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10001835c | FUN_10001835c */

undefined8 FUN_10001835c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100018398 | thunk_FUN_1000177a0 */

void thunk_FUN_1000177a0(void)

{
  FUN_1000177a0();
  return;
}



/* Address: 0x10001839c | FUN_10001839c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10001839c(ID param_1)

{
  objc_stub::center(param_1);
  DAT_100fa6fa8 = param_1;
  return param_1;
}



/* Address: 0x1000183d0 | FUN_1000183d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000183d0(void)

{
  DAT_100fa6fa8 = 0;
  return 0;
}



/* Address: 0x1000183e0 | FUN_1000183e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000183e0(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSArray *pNVar7;
  ID IVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar11 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar5;
  if (lVar11 != 0) {
    uVar12 = 0;
    puVar6 = puVar5;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100018554);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1.unknown + uVar12 * 8 + 0x20);
      }
      else {
        uVar4 = uVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar12,param_1);
      }
      lVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100018550);
        (*pcVar3)();
      }
      FUN_1003202f0();
      uVar10 = *(ulong *)(uVar4 + 0x10);
      lVar13 = *(long *)(puVar6 + 0x10);
      if (SCARRY8(lVar13,uVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100018558);
        (*pcVar3)();
      }
      puVar5 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar5 == 0) ||
         (uVar9 = *(ulong *)(puVar6 + 0x18) >> 1, (long)uVar9 < (long)(lVar13 + uVar10))) {
        FUN_100088bec();
        uVar9 = *(ulong *)(puVar5 + 0x18) >> 1;
        puVar6 = puVar5;
        if (*(long *)(uVar4 + 0x10) == 0) goto LAB_100018438;
LAB_1000184ec:
        if (uVar9 - *(long *)(puVar5 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100018560);
          (*pcVar3)();
        }
        _swift_arrayInitWithCopy
                  (puVar5 + *(long *)(puVar5 + 0x10) * 0x20 + 0x20,uVar4 + 0x20,uVar10,
                   PTR___type_metadata_for_Any_100eae0c0 + 8);
        _swift_bridgeObjectRelease(uVar4);
        if (uVar10 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100018564);
            (*pcVar3)();
          }
          *(ulong *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + uVar10;
        }
      }
      else {
        puVar5 = puVar6;
        if (*(long *)(uVar4 + 0x10) != 0) goto LAB_1000184ec;
LAB_100018438:
        _swift_bridgeObjectRelease(uVar4);
        puVar5 = puVar6;
        if (uVar10 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001855c);
          (*pcVar3)();
        }
      }
      uVar12 = uVar12 + 1;
      puVar6 = puVar5;
    } while (lVar1 != lVar11);
  }
  _swift_bridgeObjectRelease(param_1.unknown);
  puVar6 = &_OBJC_CLASS___NSSharingServicePicker;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  IVar8 = objc_stub::initWithItems_((ID)puVar6,pNVar7);
  *(ID *)(unaff_x20 + 0x10) = IVar8;
  return;
}



/* Address: 0x1000185fc | FUN_1000185fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000185fc(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100018620 | FUN_100018620 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100018620(void)

{
  return ZEXT816(0x100fa6ff0);
}



/* Address: 0x100018640 | FUN_100018640 */

undefined8 * FUN_100018640(void)

{
  if (DAT_100fa7050 != -1) {
    _swift_once(&DAT_100fa7050,FUN_10001a1dc);
  }
  return &DAT_101056fd8;
}



/* Address: 0x100018680 | _TtC5Paste20MainWindowController::undoManager */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste20MainWindowController::undoManager(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID local_48;
  
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
              ("Paste/MainWindowController.swift",0x20,1,0xc,UVar4.unknown,puVar3);
  }
  FUN_1000da768(&local_48,param_1);
  _swift_release(pMVar2);
  return local_48;
}



/* Address: 0x100018760 | FUN_100018760 */

undefined1 FUN_100018760(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c23cf0;
  _swift_getKeyPath(&DAT_100c23cf0);
  puVar2 = &DAT_100c23d18;
  _swift_getKeyPath(&DAT_100c23d18);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x1000187d0 | FUN_1000187d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001887c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_1000187d0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID self;
  ID IVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  objc_super local_88;
  objc_super local_78;
  undefined1 local_61;
  
  _swift_getObjectType();
  puVar3 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::onDidShow);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC5Paste20MainWindowController::_isVisible;
  local_61 = 0;
  Combine::Published::init
            (auStack_a0 + -extraout_x8,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  (**(code **)(lVar10 + 0x20))(unaff_x20 + lVar2,auStack_a0 + -extraout_x8,puVar3);
  *(undefined1 *)(unaff_x20 + _TtC5Paste20MainWindowController::closing) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste20MainWindowController::pendingResignKeyCloseSuppression) =
       0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC5Paste20MainWindowController::originalScreen,0);
  lVar2 = _TtC5Paste20MainWindowController::contentUndoManager;
  puVar3 = &DAT_100c23d40;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa70f0;
  FUN_1000037f0(&DAT_100fa70f0,&DAT_100c23d70);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  uVar5 = 0;
  FUN_10007ec04();
  _swift_allocObject();
  FUN_10007e194();
  FUN_100037e6c(0);
  _objc_allocWithZone();
  uVar6 = uVar5;
  _swift_retain();
  FUN_100036318();
  pcVar7 = (class_t *)0x0;
  FUN_100077e28();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::defaultHeight) = 0x4074c00000000000;
  *(undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::minHeight) = 0x406f800000000000;
  *(undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::maxHeight) = 0x4079c00000000000;
  puVar1 = (undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::onDidResignKey);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::onDidChangeScreen);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)&pcVar8->isa + _TtC5Paste10MainWindow::onWillReturnUndoManager);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar11 = 0;
  uVar12 = 0;
  local_78.receiver = (ID)pcVar8;
  local_78.super_class = pcVar7;
  self = _objc_msgSendSuper2(&local_78,"initWithContentRect:styleMask:backing:defer:",0,0,0,0,0x88,2
                             ,1);
  objc_stub::setContentView_(self,uVar6);
  objc_stub::setAutorecalculatesKeyViewLoop_(self,1);
  objc_stub::setLevel_(self,0x18);
  objc_stub::setMovable_(self,0);
  objc_stub::setHasShadow_(self,0);
  objc_stub::setDelegate_(self,self);
  FUN_1000775a8();
  local_88.receiver = self;
  local_88.super_class = pcVar7;
  _objc_msgSendSuper2(&local_88,"layoutIfNeeded");
  objc_stub::frame(self);
  objc_stub::setMinSize_(self,uVar11,uVar12);
  objc_stub::frame(self);
  objc_stub::setMaxSize_(self,uVar11,uVar12);
  FUN_10007767c(uVar6);
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::mainView) = uVar6;
  FUN_100021cfc(0);
  _swift_allocObject();
  _swift_retain(uVar5);
  uVar11 = uVar5;
  FUN_100021e78(uVar5,uVar6);
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::closedWindowManager) = uVar11;
  IVar9 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff68,"initWithWindow:",self);
  _swift_release(uVar5);
  puVar3 = &DAT_100eb0740;
  puVar4 = puVar3;
  _swift_allocObject(&DAT_100eb0740,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar9);
  puVar1 = (undefined8 *)(self + _TtC5Paste10MainWindow::onDidResignKey);
  uVar6 = *puVar1;
  uVar11 = puVar1[1];
  *puVar1 = FUN_10001a77c;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar6,uVar11);
  _swift_release(puVar4);
  puVar4 = puVar3;
  _swift_allocObject(&DAT_100eb0740,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar9);
  puVar1 = (undefined8 *)(self + _TtC5Paste10MainWindow::onDidChangeScreen);
  uVar6 = *puVar1;
  uVar11 = puVar1[1];
  *puVar1 = FUN_10001a784;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar6,uVar11);
  _swift_release(puVar4);
  _swift_allocObject(&DAT_100eb0740,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,IVar9);
  puVar1 = (undefined8 *)(self + _TtC5Paste10MainWindow::onWillReturnUndoManager);
  uVar6 = *puVar1;
  uVar11 = puVar1[1];
  *puVar1 = FUN_10001a78c;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar6,uVar11);
  _swift_release(puVar3);
  return IVar9;
}



/* Address: 0x100018c84 | FUN_100018c84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100018c84(long param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  __int64 _Var5;
  
  IVar3 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar3 == 0) {
    return 0;
  }
  if (*(char *)(IVar3 + _TtC5Paste20MainWindowController::pendingResignKeyCloseSuppression) ==
      '\x01') {
    *(undefined1 *)(IVar3 + _TtC5Paste20MainWindowController::pendingResignKeyCloseSuppression) = 0;
  }
  else {
    IVar3 = objc_stub::window(IVar3);
    if (IVar3 != 0) {
      puVar4 = (undefined *)objc_stub::sheets(IVar3);
      FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)puVar4 >> 0x3e == 0) {
        _Var5 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          _Var1.unknown = puVar4;
        }
        _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      _swift_bridgeObjectRelease(puVar4);
      if (_Var5 == 0) {
        if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100018da8);
          (*pcVar2)();
        }
        IVar3 = objc_stub::modalWindow(*(ID *)PTR__NSApp_100ea8fa0);
        if (IVar3 == 0) {
          FUN_100019a84();
        }
      }
    }
  }
  return 0;
}



/* Address: 0x100018da8 | FUN_100018da8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100018da8(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100018de4();
    return 0;
  }
  return 0;
}



/* Address: 0x100018de4 | FUN_100018de4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100018de4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  ID self;
  ID self_00;
  NSObject *self_01;
  NSObject *pNVar3;
  ID unaff_x20;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar4;
  undefined8 extraout_d0_01;
  undefined8 uVar5;
  
  self = objc_stub::window(unaff_x20);
  if (self != 0) {
    self_00 = objc_stub::contentView(self);
    if ((self_00 != 0) &&
       (self_01 = (NSObject *)objc_stub::screen(self),
       lVar1 = _TtC5Paste20MainWindowController::originalScreen, self_01 != (NSObject *)0x0)) {
      pNVar3 = (NSObject *)(unaff_x20 + _TtC5Paste20MainWindowController::originalScreen);
      _swift_unknownObjectWeakLoadStrong();
      if (pNVar3 != (NSObject *)0x0) {
        FUN_10000ec2c(0,&DAT_100fa70f8,&PTR__OBJC_CLASS___NSScreen_100f8d6d8);
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(self_01,pNVar3);
        if (!bVar2) {
          objc_stub::frame((ID)self_01);
          objc_stub::frame((ID)self_01);
          uVar4 = extraout_d0_00;
          _CGRectGetWidth();
          objc_stub::frame(self_00);
          uVar5 = extraout_d0_01;
          _CGRectGetHeight();
          objc_stub::setFrame_display_(self,extraout_d0,param_2,uVar4,uVar5,1);
          _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,self_01);
        }
      }
    }
    return 0;
  }
  return 0;
}



/* Address: 0x100018f70 | FUN_100018f70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100018f70(long param_1)

{
  undefined1 local_28 [8];
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1000da768(local_28);
  }
  return;
}



/* Address: 0x100018fc0 | _TtC5Paste20MainWindowController::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste20MainWindowController::init(ID param_1,SEL param_2)

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
    pcVar5 = "Paste/MainWindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindowController.swift",0x20,1,0x1f,UVar4.unknown,puVar3);
  }
  FUN_1000187d0();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x10001907c | FUN_10001907c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100019120 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001907c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  String SVar8;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined1 auStack_50 [15];
  undefined1 local_41;
  
  puVar5 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  lVar7 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::onDidShow);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _TtC5Paste20MainWindowController::_isVisible;
  local_41 = 0;
  Combine::Published::init(auStack_50 + lVar2,puVar5,PTR___type_metadata_for_Swift_Bool_100eac570);
  (**(code **)(lVar7 + 0x20))(unaff_x20 + lVar3,auStack_50 + lVar2,puVar5);
  *(undefined1 *)(unaff_x20 + _TtC5Paste20MainWindowController::closing) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste20MainWindowController::pendingResignKeyCloseSuppression) =
       0;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC5Paste20MainWindowController::originalScreen,0);
  lVar3 = _TtC5Paste20MainWindowController::contentUndoManager;
  puVar5 = &DAT_100c23d40;
  _swift_getKeyPath();
  puVar6 = &DAT_100fa70f0;
  FUN_1000037f0(&DAT_100fa70f0,&DAT_100c23d70);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  *(undefined4 *)((long)auStack_58 + lVar2) = 0;
  *(undefined8 *)((long)&uStack_60 + lVar2) = 0x31;
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8df90);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100019210);
  (*pcVar4)();
}



/* Address: 0x100019210 | _TtC5Paste20MainWindowController::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste20MainWindowController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  MainActor *this;
  SEL pcVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  class_t *pcVar6;
  ID IVar7;
  ID self;
  ID self_00;
  ID IVar8;
  undefined8 uVar9;
  undefined *puVar10;
  __int64 _Var11;
  SEL op;
  SEL op_00;
  SEL extraout_x1;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 extraout_d0;
  undefined8 uVar15;
  undefined8 extraout_d0_00;
  undefined8 uVar16;
  double extraout_d0_01;
  double dVar17;
  undefined8 in_d1;
  undefined1 auStack_120 [8];
  undefined1 *puStack_118;
  objc_super oStack_110;
  undefined1 auStack_100 [16];
  ID IStack_f0;
  long lStack_e8;
  undefined1 auStack_d8 [24];
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  pcVar3 = (SEL)&DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  op = pcVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    op = (SEL)0x20;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindowController.swift",0x20,1,0x30,UVar4.unknown,pcVar3);
  }
  FUN_10001907c(param_3);
  pcVar6 = (class_t *)param_1;
  _swift_getObjectType();
  IVar7 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,op);
  puVar10 = (undefined *)0x0;
  if (IVar7 != 0) {
    self = objc_stub::window(param_1);
    if ((self == 0) || (self_00 = objc_stub::contentView(self), self_00 == 0)) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + transitionGeneration) + 1;
    if (SCARRY8(*(long *)(param_1 + transitionGeneration),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000196b8);
      (*pcVar2)();
    }
    *(long *)(param_1 + transitionGeneration) = lVar1;
    *(undefined1 *)(param_1 + closing) = 0;
    pcVar3 = op_00;
    uVar9 = extraout_d0;
    NSScreen::frame(IVar7,op_00);
    uVar15 = uVar9;
    NSScreen::frame(IVar7,pcVar3);
    _CGRectGetWidth();
    objc_stub::frame(self_00);
    pcVar3 = extraout_x1;
    uVar16 = extraout_d0_00;
    _CGRectGetHeight();
    IVar8 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor,pcVar3);
    objc_stub::setBackgroundColor_(self,IVar8);
    objc_stub::setFrame_display_(self,uVar9,in_d1,uVar15,uVar16,0);
    objc_stub::makeFirstResponder_(self,0);
    lVar13 = *(long *)(param_1 + closedWindowManager);
    puVar10 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
       (_Var11 = Swift::_CocoaArrayWrapper::get_endIndex
                           ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
       puVar10 = PTR___swiftEmptySetSingleton_100eae0e8, _Var11 != 0)) {
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10001a4b0();
    }
    _swift_beginAccess(lVar13 + 0x10,auStack_d8,1,0);
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    *(undefined **)(lVar13 + 0x10) = puVar10;
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
    _swift_release(uVar9);
    FUN_10001a348(param_3,auStack_100);
    if (lStack_e8 == 0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      FUN_100004640(auStack_100,lStack_e8);
      lVar13 = *(long *)(lStack_e8 + -8);
      puStack_118 = auStack_120;
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
      puVar14 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar13 + 0x10))(puVar14);
      puVar12 = puVar14;
      Swift::__bridgeAnythingToObjectiveC(puVar14,lStack_e8);
      (**(code **)(lVar13 + 8))(puVar14,lStack_e8);
      FUN_100004594(auStack_100);
    }
    oStack_110.receiver = param_1;
    oStack_110.super_class = pcVar6;
    _objc_msgSendSuper2(&oStack_110,"showWindow:",puVar12);
    _swift_unknownObjectRelease(puVar12);
    _swift_unknownObjectWeakAssign(param_1 + originalScreen,IVar7);
    IVar7 = objc_stub::superview(self_00);
    if (IVar7 != 0) {
      objc_stub::setClipsToBounds_(IVar7,1);
    }
    objc_stub::frame(self);
    objc_stub::setFrame_(self_00);
    objc_stub::frame(self_00);
    dVar17 = extraout_d0_01;
    _CGRectGetHeight();
    objc_stub::frame(self_00);
    objc_stub::setFrame_(self_00,0,-dVar17);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    puVar10 = &_OBJC_CLASS___CAMediaTimingFunction;
    _objc_allocWithZone();
    IVar7 = objc_stub::initWithControlPoints____
                      ((ID)puVar10,0x3e4ccccd,0x3f4ccccd,0x3e4ccccd,0x3f800000);
    puVar10 = &DAT_100eb06f0;
    IStack_f0 = self_00;
    _swift_allocObject(&DAT_100eb06f0,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar1;
    *(ID *)(puVar10 + 0x18) = param_1;
    *(ID *)(puVar10 + 0x20) = self;
    FUN_10021cadc(0x3fc3333333333333,0,IVar7,1,FUN_10001a398,auStack_100,FUN_10001a3cc,puVar10);
    _swift_release();
  }
  return (ID)puVar10;
}



/* Address: 0x1000192b0 | FUN_1000192b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000192b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID self;
  ID self_00;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  __int64 _Var7;
  long extraout_x8;
  ID unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 uVar11;
  double extraout_d0_02;
  double dVar12;
  undefined1 auStack_e0 [8];
  undefined1 *local_d8;
  undefined1 auStack_c0 [16];
  ID local_b0;
  long local_a8;
  undefined1 auStack_98 [24];
  
  _swift_getObjectType();
  IVar3 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  puVar6 = (undefined *)0x0;
  if (IVar3 != 0) {
    self = objc_stub::window(unaff_x20);
    if ((self == 0) || (self_00 = objc_stub::contentView(self), self_00 == 0)) {
      return (undefined *)0x0;
    }
    lVar1 = *(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000196b8);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) = lVar1;
    *(undefined1 *)(unaff_x20 + _TtC5Paste20MainWindowController::closing) = 0;
    NSScreen::frame(IVar3);
    NSScreen::frame(IVar3);
    uVar5 = extraout_d0_00;
    _CGRectGetWidth();
    objc_stub::frame(self_00);
    uVar11 = extraout_d0_01;
    _CGRectGetHeight();
    IVar4 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    objc_stub::setBackgroundColor_(self,IVar4);
    objc_stub::setFrame_display_(self,extraout_d0,param_2,uVar5,uVar11,0);
    objc_stub::makeFirstResponder_(self,0);
    lVar9 = *(long *)(unaff_x20 + _TtC5Paste20MainWindowController::closedWindowManager);
    puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
       (_Var7 = Swift::_CocoaArrayWrapper::get_endIndex
                          ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
       puVar6 = PTR___swiftEmptySetSingleton_100eae0e8, _Var7 != 0)) {
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10001a4b0();
    }
    _swift_beginAccess(lVar9 + 0x10,auStack_98,1,0);
    uVar5 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined **)(lVar9 + 0x10) = puVar6;
    _swift_bridgeObjectRelease(uVar5);
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    _swift_release(uVar5);
    FUN_10001a348(param_3,auStack_c0);
    if (local_a8 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      FUN_100004640(auStack_c0,local_a8);
      lVar9 = *(long *)(local_a8 + -8);
      local_d8 = auStack_e0;
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
      puVar10 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar9 + 0x10))(puVar10);
      puVar8 = puVar10;
      Swift::__bridgeAnythingToObjectiveC(puVar10,local_a8);
      (**(code **)(lVar9 + 8))(puVar10,local_a8);
      FUN_100004594(auStack_c0);
    }
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"showWindow:",puVar8);
    _swift_unknownObjectRelease(puVar8);
    _swift_unknownObjectWeakAssign
              (unaff_x20 + _TtC5Paste20MainWindowController::originalScreen,IVar3);
    IVar3 = objc_stub::superview(self_00);
    if (IVar3 != 0) {
      objc_stub::setClipsToBounds_(IVar3,1);
    }
    objc_stub::frame(self);
    objc_stub::setFrame_(self_00);
    objc_stub::frame(self_00);
    dVar12 = extraout_d0_02;
    _CGRectGetHeight();
    objc_stub::frame(self_00);
    objc_stub::setFrame_(self_00,0,-dVar12);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    puVar6 = &_OBJC_CLASS___CAMediaTimingFunction;
    _objc_allocWithZone();
    IVar3 = objc_stub::initWithControlPoints____
                      ((ID)puVar6,0x3e4ccccd,0x3f4ccccd,0x3e4ccccd,0x3f800000);
    puVar6 = &DAT_100eb06f0;
    local_b0 = self_00;
    _swift_allocObject(&DAT_100eb06f0,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar1;
    *(ID *)(puVar6 + 0x18) = unaff_x20;
    *(ID *)(puVar6 + 0x20) = self;
    FUN_10021cadc(0x3fc3333333333333,0,IVar3,1,FUN_10001a398,auStack_c0,FUN_10001a3cc,puVar6);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x1000196dc | FUN_1000196dc */

void FUN_1000196dc(ID param_1)

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
              ("Paste/MainWindowController.swift",0x20,1,0x51,UVar4.unknown,puVar3);
  }
  objc_stub::frame(param_1);
  objc_stub::setFrame_(param_1,0,0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100019790 | FUN_100019790 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100019790(long param_1,long param_2,ID param_3)

{
  byte bVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  Published *pPVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 local_51;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindowController.swift",0x20,1,0x53,UVar4.unknown,puVar3);
  }
  if (param_1 == *(long *)(param_2 + _TtC5Paste20MainWindowController::transitionGeneration)) {
    bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar1 & 1) == 0) {
      IVar6 = NSColor::windowBackgroundColor((ID)&_OBJC_CLASS___NSColor);
      objc_stub::setBackgroundColor_(param_3,IVar6);
    }
    pPVar7 = (Published *)&DAT_100c23cf0;
    _swift_getKeyPath(&DAT_100c23cf0);
    puVar8 = &DAT_100c23d18;
    _swift_getKeyPath(&DAT_100c23d18);
    local_51 = 1;
    Combine::Published::_set_subscript(pPVar7,&local_51,param_2,pPVar7,puVar8);
    FUN_1000361a8();
    FUN_10000cd7c();
    FUN_10003e290();
    pcVar10 = *(code **)(param_2 + _TtC5Paste20MainWindowController::onDidShow);
    if (pcVar10 != (code *)0x0) {
      uVar9 = ((undefined8 *)(param_2 + _TtC5Paste20MainWindowController::onDidShow))[1];
      _swift_retain(uVar9);
      (*pcVar10)();
      FUN_100004550(pcVar10,uVar9);
    }
    _swift_release(pMVar2);
    return;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100019978 | _TtC5Paste20MainWindowController::showWindow: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste20MainWindowController::showWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
              ("Paste/MainWindowController.swift",0x20,1,0x34,UVar4.unknown,puVar3);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1000192b0(&local_60);
  FUN_100013954(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100019a84 | FUN_100019a84 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100019a84(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ID IVar4;
  ID self;
  ID IVar5;
  undefined *puVar6;
  ID unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_70 [16];
  ID local_60;
  
  IVar4 = objc_stub::window(unaff_x20);
  puVar6 = (undefined *)0x0;
  if (IVar4 != 0) {
    self = objc_stub::contentView(IVar4);
    if (((self == 0) ||
        (IVar5 = objc_stub::isVisible(IVar4), lVar2 = _TtC5Paste20MainWindowController::closing,
        (IVar5 & 1) == 0)) ||
       ((*(byte *)(unaff_x20 + _TtC5Paste20MainWindowController::closing) & 1) != 0)) {
      return (undefined *)0x0;
    }
    lVar1 = *(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration),1)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100019d2c);
      (*pcVar8)();
    }
    *(long *)(unaff_x20 + _TtC5Paste20MainWindowController::transitionGeneration) = lVar1;
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar3 & 1) == 0) {
      IVar5 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
      objc_stub::setBackgroundColor_(IVar4,IVar5);
    }
    objc_stub::makeFirstResponder_(IVar4,0);
    FUN_100021518();
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
    IVar4 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100fa7050 != -1) {
      _swift_once(&DAT_100fa7050,FUN_10001a1dc);
    }
    NSNotificationCenter::postNotificationName_object_(IVar4,DAT_101056fd8);
    pcVar8 = *(code **)(unaff_x20 + _TtC5Paste20MainWindowController::onWillClose);
    if (pcVar8 != (code *)0x0) {
      uVar7 = ((undefined8 *)(unaff_x20 + _TtC5Paste20MainWindowController::onWillClose))[1];
      _swift_retain(uVar7);
      (*pcVar8)();
      FUN_100004550(pcVar8,uVar7);
    }
    IVar4 = objc_stub::superview(self);
    if (IVar4 != 0) {
      objc_stub::setClipsToBounds_(IVar4,0);
    }
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    uVar7 = 0;
    FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021cf38();
    puVar6 = &DAT_100eb0718;
    local_60 = self;
    _swift_allocObject(&DAT_100eb0718,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar1;
    *(ID *)(puVar6 + 0x18) = unaff_x20;
    *(ID *)(puVar6 + 0x20) = self;
    FUN_10021cadc(0x3fc999999999999a,0,uVar7,1,FUN_10001a720,auStack_70,FUN_10001a728,puVar6);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x100019d44 | FUN_100019d44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100019d44(ID param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  double extraout_d0;
  double dVar6;
  
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
              ("Paste/MainWindowController.swift",0x20,1,0x75,UVar4.unknown,puVar3);
  }
  self = objc_stub::animator(param_1);
  objc_stub::frame(param_1);
  dVar6 = extraout_d0;
  _CGRectGetHeight();
  objc_stub::frame(self);
  objc_stub::setFrame_(self,0,-dVar6);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100019e2c | FUN_100019e2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100019e2c(long param_1,ID param_2,ID param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  class_t *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID self;
  undefined1 local_51;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindowController.swift",0x20,1,0x77,UVar3.unknown,puVar2);
  }
  if (param_1 == *(long *)(param_2 + _TtC5Paste20MainWindowController::transitionGeneration)) {
    pcVar5 = (class_t *)0x0;
    FUN_10001a258();
    local_50.receiver = param_2;
    local_50.super_class = pcVar5;
    _objc_msgSendSuper2(&local_50,"close");
    _swift_unknownObjectWeakAssign(param_2 + _TtC5Paste20MainWindowController::originalScreen,0);
    *(undefined1 *)(param_2 + _TtC5Paste20MainWindowController::closing) = 0;
    puVar6 = &DAT_100c23cf0;
    _swift_getKeyPath(&DAT_100c23cf0);
    puVar7 = &DAT_100c23d18;
    _swift_getKeyPath(&DAT_100c23d18);
    local_51 = 0;
    Combine::Published::_set_subscript((Published *)pMVar1,&local_51,param_2,puVar6,puVar7);
    self = objc_stub::superview(param_3);
    if (self == 0) {
      _swift_release(pMVar1);
    }
    else {
      objc_stub::setClipsToBounds_(self,1);
      _swift_release(pMVar1);
    }
    return;
  }
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100019fc4 | _TtC5Paste20MainWindowController::close */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int _TtC5Paste20MainWindowController::close(int param_1)

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
              ("Paste/MainWindowController.swift",0x20,1,0x5f,UVar4.unknown,puVar3);
  }
  FUN_100019a84(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10001a084 | _TtC5Paste20MainWindowController::initWithWindow: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste20MainWindowController::initWithWindow_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindowController.swift",0x20,1,4,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.MainWindowController",0x1a,"init(window:)",0xd,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001a12c);
  (*pcVar2)();
}



/* Address: 0x10001a12c | _TtC5Paste20MainWindowController::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste20MainWindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_100004550(*(undefined8 *)(param_1 + onDidShow),((undefined8 *)(param_1 + onDidShow))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onWillClose),((undefined8 *)(param_1 + onWillClose))[1]);
  lVar1 = _isVisible;
  puVar2 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1 + lVar1,puVar2);
  _swift_unknownObjectWeakDestroy(param_1 + originalScreen);
  _swift_release(*(undefined8 *)(param_1 + contentUndoManager));
  _swift_release(*(undefined8 *)(param_1 + closedWindowManager));
  return;
}



/* Address: 0x10001a1dc | FUN_10001a1dc */

void FUN_10001a1dc(void)

{
  DAT_101056fd8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10001a210 | FUN_10001a210 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10001a210(void)

{
  if (DAT_100fa7050 != -1) {
    _swift_once(&DAT_100fa7050,FUN_10001a1dc);
  }
  return DAT_101056fd8;
}



/* Address: 0x10001a250 | FUN_10001a250 */

void FUN_10001a250(void)

{
  FUN_10001a258(0);
  return;
}



/* Address: 0x10001a258 | FUN_10001a258 */

void FUN_10001a258(undefined8 param_1)

{
  if (DAT_100fa70c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca0490);
  return;
}



/* Address: 0x10001a290 | FUN_10001a290 */

void FUN_10001a290(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_70 = &DAT_100c23c98;
  puStack_68 = &DAT_100c23c98;
  lVar1 = 0x13f;
  FUN_1000056c4();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &DAT_100c23cb0;
    local_50 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_48 = &DAT_100c23cb0;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_40 = &DAT_100c23cc8;
    puStack_28 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    local_30 = puStack_38;
    _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10001a348 | FUN_10001a348 */

undefined8 FUN_10001a348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa8810;
  FUN_1000037f0(&DAT_100fa8810,&DAT_100c23ce0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10001a398 | FUN_10001a398 */

void FUN_10001a398(void)

{
  long unaff_x20;
  
  FUN_1000196dc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10001a3a0 | FUN_10001a3a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001a3a0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10001a3cc | FUN_10001a3cc */

void FUN_10001a3cc(void)

{
  long unaff_x20;
  
  FUN_100019790(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10001a3d8 | FUN_10001a3d8 */

void FUN_10001a3d8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c23cf0;
  _swift_getKeyPath(&DAT_100c23cf0);
  puVar2 = &DAT_100c23d18;
  _swift_getKeyPath(&DAT_100c23d18);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10001a440 | FUN_10001a440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001a440(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c23cf0;
  _swift_getKeyPath(&DAT_100c23cf0);
  puVar3 = &DAT_100c23d18;
  _swift_getKeyPath(&DAT_100c23d18);
  local_31 = uVar1;
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x10001a4b0 | FUN_10001a4b0 */

undefined * FUN_10001a4b0(_ArrayBuffer param_1)

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
    this = (_SetStorage *)&DAT_100fa70d8;
    FUN_1000037f0(&DAT_100fa70d8,&DAT_100c23ce8);
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a718);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a710);
        (*pcVar3)();
      }
      uVar15 = uVar15 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar5;
      pAVar6 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fa70e0,puVar14,
                    PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100ea9790);
      uVar7 = Swift::Hashable::_rawHashValue(seed);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar7 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar8 = &DAT_100fa70e8;
        FUN_100003a00(&DAT_100fa70e8,puVar14,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100ea9798);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar7 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar6,puVar8);
          if (bVar4) {
            _swift_release(uVar5);
            goto LAB_10001a598;
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a714);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_10001a598:
    } while (uVar15 != uVar13);
  }
  return puVar2;
}



/* Address: 0x10001a718 | thunk_FUN_10001a3d8 */

void thunk_FUN_10001a3d8(void)

{
  FUN_10001a3d8();
  return;
}



/* Address: 0x10001a71c | thunk_FUN_10001a440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_10001a440(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c23cf0;
  _swift_getKeyPath(&DAT_100c23cf0);
  puVar3 = &DAT_100c23d18;
  _swift_getKeyPath(&DAT_100c23d18);
  uStack_31 = uVar1;
  Combine::Published::_set_subscript(pPVar2,&uStack_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x10001a720 | FUN_10001a720 */

void FUN_10001a720(void)

{
  long unaff_x20;
  
  FUN_100019d44(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10001a728 | FUN_10001a728 */

void FUN_10001a728(void)

{
  long unaff_x20;
  
  FUN_100019e2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10001a734 | FUN_10001a734 */

void FUN_10001a734(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002fd5cc();
  *param_1 = param_2;
  return;
}


