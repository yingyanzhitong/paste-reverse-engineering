/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002918a0 | FUN_1002918a0 */

void FUN_1002918a0(undefined8 param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  undefined1 *puVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar3 = 0;
  FUN_1002abb94();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  FUN_1002919dc();
  if ((param_2 & 0xff) != 1) {
    uVar5 = *(ulong *)(*unaff_x20 + 0x10);
    if (lVar3 < (long)(uVar5 - 1)) {
      if (lVar3 + 1U < uVar5) {
        FUN_1000c495c(*unaff_x20 +
                      ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x48) * (lVar3 + 1U),lVar7,FUN_1002abb94);
        lVar3 = 0;
        FUN_100291354();
        iVar1 = *(int *)(lVar3 + 0x14);
        FUN_1000c495c(lVar7,puVar6,FUN_1002abb94);
        puVar4 = &DAT_100fba878;
        FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
        SwiftUI::Binding::set_wrappedValue((Binding *)((long)unaff_x20 + (long)iVar1),puVar6,puVar4)
        ;
        FUN_10005241c(lVar7,FUN_1002abb94);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002919dc);
      (*pcVar2)();
    }
  }
  FUN_1002920b8(0);
  (extension_AppKit)::__C::NSSound::beep();
  return;
}



/* Address: 0x1002919dc | FUN_1002919dc */

undefined1  [16] FUN_1002919dc(void)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  Binding BVar5;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  lVar4 = 0;
  FUN_1002abb94();
  lVar4 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  pcVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_100291354();
  BVar5.unknown = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  SwiftUI::Binding::get_wrappedValue(BVar5);
  lVar9 = *unaff_x20;
  uVar10 = *(ulong *)(lVar9 + 0x10);
  if (uVar10 != 0) {
    uVar6 = 0;
    do {
      if (*(ulong *)(lVar9 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100291b34);
        (*pcVar3)();
      }
      FUN_1000c495c(lVar9 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar4 + 0x48) * uVar6,pcVar7,FUN_1002abb94);
      cVar1 = *pcVar7;
      cVar2 = pcVar7[-extraout_x12];
      FUN_10005241c(pcVar7,FUN_1002abb94);
      if (cVar1 == cVar2) {
        uVar8 = 0;
        goto LAB_100291af8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar6);
  }
  uVar6 = 0;
  uVar8 = 1;
LAB_100291af8:
  FUN_10005241c(pcVar7 + -extraout_x12,FUN_1002abb94);
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar6;
  return auVar11;
}



/* Address: 0x100291b34 | FUN_100291b34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100291d90 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100291b34(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  HorizontalAlignment HVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 auStack_b0 [2];
  long alStack_a0 [3];
  
  lVar12 = *(long *)(param_2 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)alStack_a0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fba918;
  FUN_1000037f0(&DAT_100fba918,&DAT_100c3b228);
  HVar2.unknown = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar15 - extraout_x8);
  HVar2 = SwiftUI::HorizontalAlignment::get_center(HVar2);
  *puVar14 = HVar2.unknown;
  puVar14[1] = 0x4028000000000000;
  *(undefined1 *)(puVar14 + 2) = 0;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0xe,
               UVar5.unknown,puVar4);
  }
  puVar7 = &DAT_100fba920;
  FUN_1000037f0(&DAT_100fba920,&DAT_100c3b230);
  alStack_a0[2] = (long)*(int *)(puVar7 + 0x2c);
  uVar18 = *unaff_x20;
  FUN_1000c495c();
  uVar16 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar17 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100ec5d18;
  _swift_allocObject(&DAT_100ec5d18,uVar17 + lVar13,uVar16 | 7);
  FUN_1000523d8(lVar15,puVar7 + uVar17,FUN_100291354);
  _swift_bridgeObjectRetain(uVar18);
  puVar8 = &DAT_100fb9040;
  FUN_1000037f0(&DAT_100fb9040,&DAT_100c38ce8);
  uVar18 = 0;
  alStack_a0[1] = lVar13;
  FUN_100291eb4(0);
  puVar9 = &DAT_100fb9048;
  FUN_100016eac(&DAT_100fb9048,&DAT_100fb9040,&DAT_100c38ce8,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar10 = &DAT_100fba928;
  FUN_100003a00(&DAT_100fba928,FUN_100291eb4,&TargetProtocolConformanceDescriptor_100c3b280);
  puVar11 = &DAT_100fb9058;
  FUN_100003a00(&DAT_100fb9058,FUN_1002abb94,&TargetProtocolConformanceDescriptor_100c3c440);
  puVar14[-2] = puVar11;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar14 + alStack_a0[2],puVar11,FUN_100291e68,puVar7,puVar8,&DAT_100ec6738,uVar18
             ,puVar9,puVar10);
  _swift_release(pMVar3);
  FUN_1000c495c(unaff_x20,lVar15,FUN_100291354);
  puVar7 = &DAT_100ec5d40;
  _swift_allocObject(&DAT_100ec5d40,uVar17 + alStack_a0[1],uVar16 | 7);
  FUN_1000523d8(lVar15,puVar7 + uVar17,FUN_100291354);
  puVar8 = &DAT_100fba930;
  FUN_100016eac(&DAT_100fba930,&DAT_100fba918,&DAT_100c3b228,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  FUN_10021ea3c(param_1,FUN_10029207c,puVar7,puVar1,puVar8);
  _swift_release(puVar7);
  FUN_100005808(puVar14,&DAT_100fba918,&DAT_100c3b228);
  return;
}



/* Address: 0x100291e64 | thunk_FUN_100291ec8 */

void thunk_FUN_100291ec8(void)

{
  FUN_100291ec8();
  return;
}



/* Address: 0x100291e68 | FUN_100291e68 */

void FUN_100291e68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100291354();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100291444(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100291eb4 | FUN_100291eb4 */

void FUN_100291eb4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fba990,&TargetStructDescriptor_100caa71c);
  return;
}



/* Address: 0x100291ec8 | FUN_100291ec8 */

void FUN_100291ec8(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  DateComponents DVar7;
  long lVar8;
  long lVar9;
  Product PVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  
  lVar4 = 0;
  FUN_100291354();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  _swift_bridgeObjectRelease(*puVar1);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x14));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  puVar5 = &DAT_100fba878;
  FUN_1000037f0(&DAT_100fba878,&DAT_100c3b1b0);
  iVar2 = *(int *)(puVar5 + 0x20);
  lVar6 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar7.unknown + -8);
  lVar4 = (long)puVar1 + (long)iVar3 + (long)iVar2;
  (**(code **)(lVar12 + 0x30))(lVar4,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar12 + 8))((long)puVar1 + (long)iVar3 + (long)iVar2,DVar7.unknown);
  }
  lVar4 = (long)puVar1 + (long)*(int *)(lVar6 + 0x18) + (long)iVar2;
  lVar8 = 0;
  FUN_1002abbf0();
  lVar9 = lVar4;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar4,1,lVar8);
  if ((int)lVar9 == 0) {
    lVar9 = lVar4;
    _swift_getEnumCaseMultiPayload(lVar4,lVar8);
    iVar3 = (int)lVar9;
    if ((iVar3 == 2) || (iVar3 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      puVar5 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(lVar4 + *(int *)(puVar5 + 0x30),DVar7.unknown);
      (*pcVar13)(lVar4 + *(int *)(puVar5 + 0x40),DVar7.unknown);
    }
    else if (iVar3 == 0) {
      (**(code **)(lVar12 + 8))(lVar4,DVar7.unknown);
    }
  }
  iVar3 = *(int *)(lVar6 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 8))
            ((long)puVar1 + (long)iVar3 + (long)iVar2,PVar10.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10029207c | FUN_10029207c */

void FUN_10029207c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100291354();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100291700(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1002920b8 | FUN_1002920b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002920b8(void)

{
  undefined *puVar1;
  
  if (DAT_100fb90e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSSound;
  _swift_getObjCClassMetadata();
  DAT_100fb90e0 = puVar1;
  return;
}



/* Address: 0x1002920fc | FUN_1002920fc */

void FUN_1002920fc(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x42,
               UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_100291eb4();
  (**(code **)(param_1 + *(int *)(lVar6 + 0x18)))(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002921c0 | FUN_1002921c0 */

void FUN_1002921c0(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Set SVar7;
  CGFloat _all;
  undefined8 uVar8;
  undefined1 auStack_f90 [520];
  undefined1 auStack_d88 [472];
  undefined1 auStack_bb0 [448];
  undefined1 auStack_9f0 [448];
  undefined *local_830;
  undefined8 local_828;
  undefined1 local_820;
  undefined1 auStack_81f [455];
  undefined *local_658;
  undefined8 local_650;
  undefined1 local_648;
  undefined1 auStack_647 [455];
  undefined1 auStack_480 [472];
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined1 auStack_278 [472];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x44,
               UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_100292440(auStack_278,param_6);
  _memcpy(auStack_bb0,auStack_278,0x1c0);
  _memcpy(auStack_9f0,auStack_278,0x1c0);
  FUN_100011090(auStack_bb0,auStack_480,&DAT_100fbaa20,&DAT_100c3b2e8);
  FUN_100005808(auStack_9f0,&DAT_100fbaa20,&DAT_100c3b2e8);
  SVar7.unknown = _memcpy((void *)((ulong)auStack_480 | 7),auStack_bb0,0x1c0);
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar7);
  local_828 = 0;
  local_820 = 0;
  local_830 = VVar6.unknown;
  _all.unknown = _memcpy(auStack_81f,auStack_480,0x1c7);
  uVar8 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(_all);
  _memcpy(auStack_d88,&local_830,0x1d8);
  local_650 = 0;
  local_648 = 0;
  local_658 = VVar6.unknown;
  _memcpy(auStack_647,auStack_480,0x1c7);
  FUN_100011090(&local_830,auStack_278,&DAT_100fbaa08,&DAT_100c3b2e0);
  FUN_100005808(&local_658,&DAT_100fbaa08,&DAT_100c3b2e0);
  _memcpy(auStack_480,auStack_d88,0x1d8);
  local_280 = 0;
  local_2a8 = (char)SVar7.unknown;
  local_2a0 = uVar8;
  local_298 = param_3;
  local_290 = param_4;
  local_288 = param_5;
  _memcpy(auStack_278,auStack_d88,0x1d8);
  local_78 = 0;
  local_a0 = (char)SVar7.unknown;
  local_98 = uVar8;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  FUN_100011090(auStack_480,auStack_f90,&DAT_100fba9f0,&DAT_100c3b2d8);
  FUN_100005808(auStack_278,&DAT_100fba9f0,&DAT_100c3b2d8);
  _swift_release(pMVar2);
  _memcpy(param_1,auStack_480,0x201);
  return;
}



/* Address: 0x100292440 | FUN_100292440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100292568 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100292440(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Color CVar5;
  StrokeStyle SVar6;
  Alignment AVar7;
  Color CVar8;
  Alignment AVar9;
  Set SVar10;
  HorizontalAlignment HVar11;
  undefined8 uVar12;
  void *extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_10d0 [256];
  undefined7 uStack_fd0;
  undefined1 local_fc9;
  undefined7 uStack_fc8;
  undefined1 uStack_fc1;
  undefined7 uStack_fc0;
  undefined1 local_fb9;
  undefined7 uStack_fb8;
  undefined1 uStack_fb1;
  undefined7 uStack_fb0;
  undefined1 local_fa9;
  undefined7 uStack_fa8;
  undefined1 uStack_fa1;
  undefined7 uStack_fa0;
  undefined1 local_f99;
  undefined7 uStack_f98;
  undefined1 uStack_f91;
  undefined7 uStack_f90;
  undefined1 local_f89;
  undefined7 uStack_f88;
  undefined1 uStack_f81;
  undefined7 uStack_f80;
  undefined8 local_f79;
  double local_f70;
  double dStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined *puStack_f40;
  undefined8 uStack_f38;
  undefined *local_f30;
  undefined8 uStack_f28;
  undefined *puStack_f20;
  undefined8 uStack_f18;
  undefined *local_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  double local_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  double local_e90;
  undefined1 uStack_e88;
  undefined7 uStack_e87;
  undefined1 uStack_e80;
  undefined8 uStack_e7f;
  undefined *local_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined *local_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined7 uStack_db0;
  undefined1 local_da9;
  undefined7 uStack_da8;
  undefined1 uStack_da1;
  undefined7 uStack_da0;
  undefined1 local_d99;
  undefined7 uStack_d98;
  undefined1 uStack_d91;
  undefined7 uStack_d90;
  undefined1 local_d89;
  undefined7 uStack_d88;
  undefined1 uStack_d81;
  undefined7 uStack_d80;
  undefined1 local_d79;
  undefined7 uStack_d78;
  undefined1 uStack_d71;
  undefined7 uStack_d70;
  undefined1 uStack_d69;
  undefined8 uStack_d68;
  undefined *puStack_d60;
  undefined8 uStack_d58;
  undefined *local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  double local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  double local_cd0;
  undefined1 uStack_cc8;
  undefined7 uStack_cc7;
  undefined1 uStack_cc0;
  undefined8 uStack_cbf;
  double local_cb0;
  double dStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined *local_c80;
  undefined2 uStack_c78;
  undefined6 uStack_c76;
  undefined *local_c70;
  undefined8 uStack_c68;
  double local_c60;
  double local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined *local_c30;
  undefined2 local_c28;
  undefined *local_c20;
  undefined8 local_c18;
  double local_c10;
  double dStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined *local_be0;
  undefined8 uStack_bd8;
  undefined *local_bd0;
  undefined8 uStack_bc8;
  undefined *local_bc0;
  undefined2 uStack_bb8;
  undefined6 uStack_bb6;
  undefined *local_bb0;
  undefined8 uStack_ba8;
  double local_ba0;
  double dStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined *local_b70;
  undefined8 uStack_b68;
  undefined *local_b60;
  undefined8 uStack_b58;
  undefined *local_b50;
  undefined2 local_b48;
  undefined *local_b40;
  undefined8 local_b38;
  double local_b30;
  double dStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined *local_b00;
  undefined8 uStack_af8;
  undefined *local_af0;
  undefined8 uStack_ae8;
  undefined *local_ae0;
  undefined8 uStack_ad8;
  undefined *local_ad0;
  undefined8 uStack_ac8;
  undefined1 local_ac0;
  undefined7 uStack_abf;
  undefined8 uStack_ab8;
  double local_ab0;
  undefined1 uStack_aa8;
  undefined7 uStack_aa7;
  undefined1 local_aa0;
  undefined7 uStack_a9f;
  undefined1 local_a98;
  double local_a90;
  double dStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined *local_a60;
  undefined8 uStack_a58;
  undefined *local_a50;
  undefined8 uStack_a48;
  undefined *local_a40;
  undefined8 uStack_a38;
  undefined *local_a30;
  undefined8 uStack_a28;
  undefined1 local_a20;
  undefined8 local_a18;
  double local_a10;
  undefined *local_a00;
  undefined1 local_9f8;
  double local_9f0;
  double dStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined *local_9c0;
  undefined8 uStack_9b8;
  undefined *local_9b0;
  undefined8 uStack_9a8;
  undefined *local_9a0;
  undefined8 uStack_998;
  undefined *local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  double local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  double local_920;
  double dStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined *local_8f0;
  undefined8 uStack_8e8;
  undefined *local_8e0;
  undefined8 uStack_8d8;
  undefined *local_8d0;
  undefined8 uStack_8c8;
  undefined *local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  double local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  double local_850;
  double dStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined *local_820;
  undefined8 uStack_818;
  undefined *local_810;
  undefined8 uStack_808;
  undefined *local_800;
  undefined8 uStack_7f8;
  undefined *local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  double local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined1 local_780;
  undefined7 uStack_77f;
  undefined8 uStack_778;
  double local_770;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined1 local_760;
  undefined7 uStack_75f;
  undefined1 local_758;
  double local_750;
  double dStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined *local_720;
  undefined8 uStack_718;
  undefined *local_710;
  undefined8 uStack_708;
  undefined *local_700;
  undefined8 uStack_6f8;
  undefined *local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  double local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined8 local_678;
  double local_670;
  undefined8 local_668;
  undefined *local_660;
  undefined1 local_658;
  undefined1 local_650 [64];
  undefined *local_610;
  undefined8 uStack_608;
  undefined1 local_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 local_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 local_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined1 uStack_5d0;
  undefined7 local_5cf;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined1 uStack_5c0;
  undefined7 uStack_5bf;
  undefined *local_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8;
  undefined8 local_5a7;
  undefined8 uStack_59f;
  undefined8 local_597;
  undefined8 uStack_58f;
  undefined8 local_587;
  undefined8 uStack_57f;
  undefined8 local_577;
  undefined7 uStack_56f;
  undefined1 uStack_568;
  undefined7 uStack_567;
  undefined1 local_560 [64];
  undefined *local_520;
  undefined8 uStack_518;
  undefined1 local_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined1 uStack_500;
  undefined7 local_4ff;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 local_4ef;
  undefined1 uStack_4e8;
  undefined7 uStack_4e7;
  undefined1 uStack_4e0;
  undefined7 local_4df;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined *local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8;
  undefined8 local_4b7;
  undefined8 uStack_4af;
  undefined8 local_4a7;
  undefined8 uStack_49f;
  undefined8 local_497;
  undefined8 uStack_48f;
  undefined8 local_487;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined7 uStack_477;
  double local_470;
  double dStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined *local_440;
  undefined8 uStack_438;
  undefined *local_430;
  undefined8 uStack_428;
  undefined *local_420;
  undefined8 uStack_418;
  undefined *local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  double local_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  undefined *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined *local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  double local_250;
  double dStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 uStack_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x45,
               UVar3.unknown,puVar2);
  }
  CVar5.unknown = (undefined *)0x0;
  FUN_100291eb4();
  if ((*(byte *)(param_1 + *(int *)(CVar5.unknown + 0x14)) & 1) == 0) {
    FUN_100218ca8();
    CVar5 = SwiftUI::Color::init(*(NSColor **)CVar5.unknown);
    uVar16 = 0x3ff0000000000000;
  }
  else {
    uVar16 = 0x4010000000000000;
    CVar5 = SwiftUI::Color::get_accentColor(CVar5);
  }
  uVar12 = 0;
  SVar6 = SwiftUI::StrokeStyle::init
                    (&local_b8,uVar16,0x4024000000000000,0,CVar5.unknown,0,
                     PTR___swiftEmptyArrayStorage_100eae0d8);
  dVar17 = local_b8 * 0.5;
  AVar7 = SwiftUI::Alignment::get_center(SVar6.unknown);
  uVar16 = uVar12;
  CVar8 = SwiftUI::Color::get_white(AVar7.unknown);
  AVar9 = SwiftUI::Alignment::get_center(CVar8.unknown);
  uStack_ca0 = uStack_b0;
  dStack_ca8 = local_b8;
  uStack_c90 = uStack_a0;
  uStack_c98 = local_a8;
  local_c88 = local_98;
  uStack_c78 = 0x100;
  uStack_218 = CONCAT62(uStack_c76,0x100);
  uStack_228 = local_98;
  local_230 = uStack_a0;
  dStack_248 = local_b8;
  uStack_238 = local_a8;
  local_240 = uStack_b0;
  uStack_c40 = uStack_a0;
  local_c48 = local_a8;
  uStack_c50 = uStack_b0;
  local_c58 = local_b8;
  local_c38 = local_98;
  local_c28 = 0x100;
  local_cb0 = dVar17;
  local_c80 = CVar5.unknown;
  local_c70 = AVar7.unknown;
  uStack_c68 = uVar12;
  local_c60 = dVar17;
  local_c30 = CVar5.unknown;
  local_c20 = AVar7.unknown;
  local_c18 = uVar12;
  local_250 = dVar17;
  local_220 = CVar5.unknown;
  local_210 = AVar7.unknown;
  uStack_208 = uVar12;
  FUN_100011090(&local_cb0,&local_470,&DAT_100fbaa28,&DAT_100c3b2f0);
  SVar10.unknown = (undefined *)&local_c60;
  FUN_100005808(SVar10.unknown,&DAT_100fbaa28,&DAT_100c3b2f0);
  uStack_be8 = uStack_228;
  local_bf0 = local_230;
  uStack_bd8 = uStack_218;
  local_be0 = local_220;
  uStack_bc8 = uStack_208;
  local_bd0 = local_210;
  uStack_bf8 = uStack_238;
  local_c00 = local_240;
  dStack_c08 = dStack_248;
  local_c10 = local_250;
  uStack_bb8 = 0x100;
  dVar17 = local_250;
  local_bc0 = CVar8.unknown;
  local_bb0 = AVar9.unknown;
  uStack_ba8 = uVar16;
  SVar10 = SwiftUI::Edge::Set::get_all(SVar10);
  uVar13 = 0x3ff0000000000000;
  uVar12 = uStack_a0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  uStack_1a8 = CONCAT62(uStack_bb6,uStack_bb8);
  uStack_1b8 = uStack_bc8;
  local_1c0 = local_bd0;
  local_1b0 = local_bc0;
  uStack_198 = uStack_ba8;
  local_1a0 = local_bb0;
  dStack_1f8 = dStack_c08;
  local_200 = local_c10;
  uStack_1e8 = uStack_bf8;
  local_1f0 = local_c00;
  uStack_1c8 = uStack_bd8;
  local_1d0 = local_be0;
  uStack_1d8 = uStack_be8;
  local_1e0 = local_bf0;
  uStack_b58 = uStack_208;
  local_b60 = local_210;
  uStack_b68 = uStack_218;
  local_b70 = local_220;
  uStack_b78 = uStack_228;
  local_b80 = local_230;
  dStack_b98 = dStack_248;
  local_ba0 = local_250;
  uStack_b88 = uStack_238;
  local_b90 = local_240;
  local_b48 = 0x100;
  uVar14 = local_230;
  puVar15 = local_220;
  local_b50 = CVar8.unknown;
  local_b40 = AVar9.unknown;
  local_b38 = uVar16;
  FUN_100011090(&local_c10,&local_470,&DAT_100fbaa30,&DAT_100c3b2f8);
  AVar7.unknown = (undefined *)&local_ba0;
  FUN_100005808(AVar7.unknown,&DAT_100fbaa30,&DAT_100c3b2f8);
  SwiftUI::Alignment::get_center(AVar7);
  uStack_ae8 = uStack_1b8;
  local_af0 = local_1c0;
  uStack_ad8 = uStack_1a8;
  local_ae0 = local_1b0;
  uStack_ac8 = uStack_198;
  local_ad0 = local_1a0;
  dStack_b28 = dStack_1f8;
  local_b30 = local_200;
  uStack_b18 = uStack_1e8;
  local_b20 = local_1f0;
  uStack_af8 = uStack_1c8;
  local_b00 = local_1d0;
  uStack_b08 = uStack_1d8;
  local_b10 = local_1e0;
  uStack_aa8 = (undefined1)uVar12;
  uStack_aa7 = (undefined7)((ulong)uVar12 >> 8);
  local_aa0 = SUB81(CVar5.unknown,0);
  uStack_a9f = (undefined7)((ulong)CVar5.unknown >> 8);
  local_a98 = 0;
  local_ac0 = (char)SVar10.unknown;
  uStack_ab8 = uVar13;
  local_ab0 = dVar17;
  SwiftUI::_FrameLayout::_init((Alignment)0x4030000000000000);
  local_120 = CONCAT71(uStack_abf,local_ac0);
  uStack_128 = uStack_ac8;
  local_130 = local_ad0;
  uStack_118 = uStack_ab8;
  uStack_108 = uStack_aa8;
  local_110 = local_ab0;
  uStack_ff = uStack_a9f;
  uStack_f8 = local_a98;
  uStack_107 = uStack_aa7;
  local_100 = local_aa0;
  uStack_168 = uStack_b08;
  local_170 = local_b10;
  uStack_158 = uStack_af8;
  local_160 = local_b00;
  uStack_148 = uStack_ae8;
  local_150 = local_af0;
  uStack_138 = uStack_ad8;
  local_140 = local_ae0;
  dStack_188 = dStack_b28;
  local_190 = local_b30;
  uStack_178 = uStack_b18;
  local_180 = local_b20;
  uStack_a48 = uStack_1b8;
  local_a50 = local_1c0;
  uStack_a38 = uStack_1a8;
  local_a40 = local_1b0;
  uStack_a28 = uStack_198;
  local_a30 = local_1a0;
  dStack_a88 = dStack_1f8;
  local_a90 = local_200;
  uStack_a78 = uStack_1e8;
  local_a80 = local_1f0;
  uStack_a58 = uStack_1c8;
  local_a60 = local_1d0;
  uStack_a68 = uStack_1d8;
  local_a70 = local_1e0;
  local_9f8 = 0;
  local_a20 = (char)SVar10.unknown;
  local_a18 = uVar13;
  local_a10 = dVar17;
  local_a00 = CVar5.unknown;
  FUN_100011090(&local_b30,&local_470,&DAT_100fbaa38,&DAT_100c3b300);
  SVar10.unknown = (undefined *)&local_a90;
  FUN_100005808(SVar10.unknown,&DAT_100fbaa38,&DAT_100c3b300);
  SVar10 = SwiftUI::Edge::Set::get_trailing(SVar10);
  uStack_948 = uStack_e8;
  local_950 = local_f0;
  uStack_938 = uStack_d8;
  local_940 = local_e0;
  uStack_928 = uStack_c8;
  local_930 = local_d0;
  uStack_988 = uStack_128;
  local_990 = local_130;
  uStack_978 = uStack_118;
  local_980 = local_120;
  uStack_958 = CONCAT71(uStack_f7,uStack_f8);
  local_960 = CONCAT71(uStack_ff,local_100);
  uStack_968 = CONCAT71(uStack_107,uStack_108);
  local_970 = local_110;
  uStack_9c8 = uStack_168;
  local_9d0 = local_170;
  uStack_9b8 = uStack_158;
  local_9c0 = local_160;
  uStack_998 = uStack_138;
  local_9a0 = local_140;
  uStack_9a8 = uStack_148;
  local_9b0 = local_150;
  uStack_9d8 = uStack_178;
  local_9e0 = local_180;
  dStack_9e8 = dStack_188;
  local_9f0 = local_190;
  uVar16 = 0x4020000000000000;
  dVar17 = local_190;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  uStack_878 = uStack_e8;
  local_880 = local_f0;
  uStack_868 = uStack_d8;
  local_870 = local_e0;
  uStack_858 = uStack_c8;
  local_860 = local_d0;
  uStack_8b8 = uStack_128;
  local_8c0 = local_130;
  uStack_8a8 = uStack_118;
  local_8b0 = local_120;
  uStack_888 = CONCAT71(uStack_f7,uStack_f8);
  local_890 = CONCAT71(uStack_ff,local_100);
  uStack_898 = CONCAT71(uStack_107,uStack_108);
  local_8a0 = local_110;
  uStack_8f8 = uStack_168;
  local_900 = local_170;
  uStack_8e8 = uStack_158;
  local_8f0 = local_160;
  uStack_8c8 = uStack_138;
  local_8d0 = local_140;
  uStack_8d8 = uStack_148;
  local_8e0 = local_150;
  uStack_908 = uStack_178;
  local_910 = local_180;
  dStack_918 = dStack_188;
  local_920 = local_190;
  FUN_100011090(&local_9f0,&local_470,&DAT_100fbaa40,&DAT_100c3b308);
  FUN_100005808(&local_920,&DAT_100fbaa40,&DAT_100c3b308);
  uStack_7a8 = uStack_e8;
  local_7b0 = local_f0;
  uStack_798 = uStack_d8;
  local_7a0 = local_e0;
  uStack_788 = uStack_c8;
  local_790 = local_d0;
  uStack_7e8 = uStack_128;
  local_7f0 = local_130;
  uStack_7d8 = uStack_118;
  local_7e0 = local_120;
  uStack_7b8 = CONCAT71(uStack_f7,uStack_f8);
  local_7c0 = CONCAT71(uStack_ff,local_100);
  uStack_6b8 = CONCAT71(uStack_f7,uStack_f8);
  local_6c0 = CONCAT71(uStack_ff,local_100);
  uStack_7c8 = CONCAT71(uStack_107,uStack_108);
  uStack_6c8 = CONCAT71(uStack_107,uStack_108);
  local_7d0 = local_110;
  uStack_828 = uStack_168;
  local_830 = local_170;
  uStack_818 = uStack_158;
  local_820 = local_160;
  uStack_7f8 = uStack_138;
  local_800 = local_140;
  uStack_808 = uStack_148;
  local_810 = local_150;
  uStack_838 = uStack_178;
  local_840 = local_180;
  dStack_848 = dStack_188;
  local_850 = local_190;
  uStack_6a8 = uStack_e8;
  local_6b0 = local_f0;
  uStack_698 = uStack_d8;
  local_6a0 = local_e0;
  uStack_688 = uStack_c8;
  local_690 = local_d0;
  uStack_6e8 = uStack_128;
  local_6f0 = local_130;
  uStack_6d8 = uStack_118;
  local_6e0 = local_120;
  local_6d0 = local_110;
  uStack_728 = uStack_168;
  local_730 = local_170;
  uStack_718 = uStack_158;
  local_720 = local_160;
  uStack_6f8 = uStack_138;
  local_700 = local_140;
  uStack_708 = uStack_148;
  local_710 = local_150;
  local_780 = SUB81(SVar10.unknown,0);
  uStack_768 = (undefined1)uVar14;
  uStack_767 = (undefined7)((ulong)uVar14 >> 8);
  local_760 = SUB81(puVar15,0);
  uStack_75f = (undefined7)((ulong)puVar15 >> 8);
  local_758 = 0;
  uStack_738 = uStack_178;
  local_740 = local_180;
  dStack_748 = dStack_188;
  local_750 = local_190;
  local_658 = 0;
  uStack_778 = uVar16;
  local_770 = dVar17;
  local_680 = local_780;
  local_678 = uVar16;
  local_670 = dVar17;
  local_668 = uVar14;
  local_660 = puVar15;
  FUN_100011090(&local_850,&local_470,&DAT_100fbaa48,&DAT_100c3b310);
  HVar11.unknown = (undefined *)&local_750;
  FUN_100005808(HVar11.unknown,&DAT_100fbaa48,&DAT_100c3b310);
  HVar11 = SwiftUI::HorizontalAlignment::get_leading(HVar11);
  FUN_100292f7c(local_650,param_1);
  uStack_d91 = (undefined1)local_650._24_8_;
  uStack_d90 = SUB87(local_650._24_8_,1);
  local_d99 = (undefined1)local_650._16_8_;
  uStack_d98 = SUB87(local_650._16_8_,1);
  uStack_da1 = (undefined1)local_650._8_8_;
  uStack_da0 = SUB87(local_650._8_8_,1);
  local_da9 = (undefined1)local_650._0_8_;
  uStack_da8 = SUB87(local_650._0_8_,1);
  uStack_d81 = (undefined1)local_650._40_8_;
  uStack_d80 = SUB87(local_650._40_8_,1);
  local_d89 = (undefined1)local_650._32_8_;
  uStack_d88 = SUB87(local_650._32_8_,1);
  uStack_d71 = (undefined1)local_650._56_8_;
  uStack_d70 = SUB87(local_650._56_8_,1);
  local_d79 = (undefined1)local_650._48_8_;
  uStack_d78 = SUB87(local_650._48_8_,1);
  uStack_5e7 = uStack_d98;
  uStack_5e0 = uStack_d91;
  local_5ef = uStack_da0;
  uStack_5e8 = local_d99;
  uStack_58f = CONCAT17(uStack_d91,uStack_d98);
  local_597 = CONCAT17(local_d99,uStack_da0);
  uStack_57f = CONCAT17(uStack_d81,uStack_d88);
  local_587 = CONCAT17(local_d89,uStack_d90);
  uStack_5d7 = uStack_d88;
  uStack_5d0 = uStack_d81;
  local_5df = uStack_d90;
  uStack_5d8 = local_d89;
  local_577 = CONCAT17(local_d79,uStack_d80);
  uStack_5c7 = uStack_d78;
  local_5cf = uStack_d80;
  uStack_5c8 = local_d79;
  uStack_59f = CONCAT17(uStack_da1,uStack_da8);
  local_5a7 = CONCAT17(local_da9,uStack_db0);
  uStack_5f7 = uStack_da8;
  uStack_5f0 = uStack_da1;
  uStack_5ff = uStack_db0;
  uStack_5f8 = local_da9;
  uStack_56f = uStack_d78;
  uStack_608 = 0;
  local_600 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_610 = HVar11.unknown;
  uStack_5c0 = uStack_d71;
  uStack_5bf = uStack_d70;
  local_5b8 = HVar11.unknown;
  uStack_568 = uStack_d71;
  uStack_567 = uStack_d70;
  FUN_1002954f0(&local_610,&local_470);
  HVar11.unknown = (undefined *)&local_5b8;
  FUN_100005808(HVar11.unknown,&DAT_100fbaa50,&DAT_100c3b318);
  HVar11 = SwiftUI::HorizontalAlignment::get_trailing(HVar11);
  FUN_100293360(local_560,param_1);
  uStack_d91 = (undefined1)local_560._24_8_;
  uStack_d90 = SUB87(local_560._24_8_,1);
  local_d99 = (undefined1)local_560._16_8_;
  uStack_d98 = SUB87(local_560._16_8_,1);
  uStack_da1 = (undefined1)local_560._8_8_;
  uStack_da0 = SUB87(local_560._8_8_,1);
  local_da9 = (undefined1)local_560._0_8_;
  uStack_da8 = SUB87(local_560._0_8_,1);
  uStack_d81 = (undefined1)local_560._40_8_;
  uStack_d80 = SUB87(local_560._40_8_,1);
  local_d89 = (undefined1)local_560._32_8_;
  uStack_d88 = SUB87(local_560._32_8_,1);
  uStack_d71 = (undefined1)local_560._56_8_;
  uStack_d70 = SUB87(local_560._56_8_,1);
  local_d79 = (undefined1)local_560._48_8_;
  uStack_d78 = SUB87(local_560._48_8_,1);
  uStack_4f7 = uStack_d98;
  uStack_4f0 = uStack_d91;
  local_4ff = uStack_da0;
  uStack_4f8 = local_d99;
  uStack_49f = CONCAT17(uStack_d91,uStack_d98);
  local_4a7 = CONCAT17(local_d99,uStack_da0);
  uStack_48f = CONCAT17(uStack_d81,uStack_d88);
  local_497 = CONCAT17(local_d89,uStack_d90);
  uStack_4e7 = uStack_d88;
  uStack_4e0 = uStack_d81;
  local_4ef = uStack_d90;
  uStack_4e8 = local_d89;
  local_487 = CONCAT17(local_d79,uStack_d80);
  uStack_4d7 = uStack_d78;
  local_4df = uStack_d80;
  uStack_4d8 = local_d79;
  uStack_4af = CONCAT17(uStack_da1,uStack_da8);
  local_4b7 = CONCAT17(local_da9,uStack_db0);
  uStack_507 = uStack_da8;
  uStack_500 = uStack_da1;
  uStack_50f = uStack_db0;
  uStack_508 = local_da9;
  uStack_47f = uStack_d78;
  uStack_518 = 0;
  local_510 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_520 = HVar11.unknown;
  uStack_4d0 = uStack_d71;
  uStack_4cf = uStack_d70;
  local_4c8 = HVar11.unknown;
  uStack_478 = uStack_d71;
  uStack_477 = uStack_d70;
  FUN_1002954f0(&local_520,&local_470);
  FUN_100005808(&local_4c8,&DAT_100fbaa50,&DAT_100c3b318);
  local_ce0 = CONCAT71(uStack_77f,local_780);
  uStack_ce8 = uStack_788;
  local_cf0 = local_790;
  uStack_cd8 = uStack_778;
  uStack_cc8 = uStack_768;
  local_cd0 = local_770;
  uStack_cbf = CONCAT17(local_758,uStack_75f);
  uStack_cc7 = uStack_767;
  uStack_cc0 = local_760;
  uStack_d28 = uStack_7c8;
  local_d30 = local_7d0;
  uStack_d18 = uStack_7b8;
  uStack_d20 = local_7c0;
  uStack_d08 = uStack_7a8;
  local_d10 = local_7b0;
  uStack_cf8 = uStack_798;
  uStack_d00 = local_7a0;
  uStack_d68 = uStack_808;
  uStack_d70 = SUB87(local_810,0);
  uStack_d69 = (undefined1)((ulong)local_810 >> 0x38);
  uStack_d58 = uStack_7f8;
  puStack_d60 = local_800;
  uStack_d48 = uStack_7e8;
  local_d50 = local_7f0;
  uStack_d38 = uStack_7d8;
  uStack_d40 = local_7e0;
  uStack_da8 = SUB87(dStack_848,0);
  uStack_da1 = (undefined1)((ulong)dStack_848 >> 0x38);
  uStack_db0 = SUB87(local_850,0);
  local_da9 = (undefined1)((ulong)local_850 >> 0x38);
  uStack_d98 = (undefined7)uStack_838;
  uStack_d91 = (undefined1)((ulong)uStack_838 >> 0x38);
  uStack_da0 = (undefined7)local_840;
  local_d99 = (undefined1)((ulong)local_840 >> 0x38);
  uStack_d88 = (undefined7)uStack_828;
  uStack_d81 = (undefined1)((ulong)uStack_828 >> 0x38);
  uStack_d90 = (undefined7)local_830;
  local_d89 = (undefined1)((ulong)local_830 >> 0x38);
  uStack_d78 = (undefined7)uStack_818;
  uStack_d71 = (undefined1)((ulong)uStack_818 >> 0x38);
  uStack_d80 = SUB87(local_820,0);
  local_d79 = (undefined1)((ulong)local_820 >> 0x38);
  uStack_de8 = CONCAT71(uStack_5e7,uStack_5e8);
  local_df0 = CONCAT71(local_5ef,uStack_5f0);
  uStack_e48 = CONCAT71(uStack_5e7,uStack_5e8);
  local_e50 = CONCAT71(local_5ef,uStack_5f0);
  uStack_dd8 = CONCAT71(uStack_5d7,uStack_5d8);
  uStack_de0 = CONCAT71(local_5df,uStack_5e0);
  uStack_e38 = CONCAT71(uStack_5d7,uStack_5d8);
  local_e40 = CONCAT71(local_5df,uStack_5e0);
  uStack_dc8 = CONCAT71(uStack_5c7,uStack_5c8);
  local_dd0 = CONCAT71(local_5cf,uStack_5d0);
  uStack_e28 = CONCAT71(uStack_5c7,uStack_5c8);
  uStack_e30 = CONCAT71(local_5cf,uStack_5d0);
  uStack_df8 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_e00 = CONCAT71(uStack_5ff,local_600);
  uStack_e58 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_e60 = CONCAT71(uStack_5ff,local_600);
  uStack_e08 = uStack_608;
  local_e10 = local_610;
  uStack_278 = CONCAT71(uStack_4e7,uStack_4e8);
  local_280 = CONCAT71(local_4ef,uStack_4f0);
  uStack_2d8 = CONCAT71(uStack_4e7,uStack_4e8);
  local_2e0 = CONCAT71(local_4ef,uStack_4f0);
  local_290 = CONCAT71(local_4ff,uStack_500);
  uStack_288 = CONCAT71(uStack_4f7,uStack_4f8);
  uStack_2e8 = CONCAT71(uStack_4f7,uStack_4f8);
  local_2f0 = CONCAT71(local_4ff,uStack_500);
  local_270 = CONCAT71(local_4df,uStack_4e0);
  uStack_268 = CONCAT71(uStack_4d7,uStack_4d8);
  uStack_2c8 = CONCAT71(uStack_4d7,uStack_4d8);
  local_2d0 = CONCAT71(local_4df,uStack_4e0);
  uStack_298 = CONCAT71(uStack_507,uStack_508);
  local_2a0 = CONCAT71(uStack_50f,local_510);
  local_300 = CONCAT71(uStack_50f,local_510);
  uStack_2f8 = CONCAT71(uStack_507,uStack_508);
  uStack_2a8 = uStack_518;
  local_2b0 = local_520;
  local_3a0 = CONCAT71(uStack_77f,local_780);
  uStack_ea0 = CONCAT71(uStack_77f,local_780);
  uStack_3a8 = uStack_788;
  local_3b0 = local_790;
  uStack_398 = uStack_778;
  uStack_388 = uStack_768;
  local_390 = local_770;
  uStack_37f = CONCAT17(local_758,uStack_75f);
  uStack_387 = uStack_767;
  uStack_380 = local_760;
  uStack_3e8 = uStack_7c8;
  local_3f0 = local_7d0;
  uStack_3d8 = uStack_7b8;
  local_3e0 = local_7c0;
  uStack_3c8 = uStack_7a8;
  local_3d0 = local_7b0;
  uStack_3b8 = uStack_798;
  local_3c0 = local_7a0;
  uStack_428 = uStack_808;
  local_430 = local_810;
  uStack_418 = uStack_7f8;
  local_420 = local_800;
  uStack_408 = uStack_7e8;
  local_410 = local_7f0;
  uStack_3f8 = uStack_7d8;
  local_400 = local_7e0;
  dStack_468 = dStack_848;
  local_470 = local_850;
  uStack_458 = uStack_838;
  local_460 = local_840;
  uStack_448 = uStack_828;
  local_450 = local_830;
  uStack_438 = uStack_818;
  local_440 = local_820;
  uStack_ea8 = uStack_788;
  local_eb0 = local_790;
  uStack_e98 = uStack_778;
  uStack_e88 = uStack_768;
  local_e90 = local_770;
  uStack_e7f = CONCAT17(local_758,uStack_75f);
  uStack_e87 = uStack_767;
  uStack_e80 = local_760;
  uStack_ee8 = uStack_7c8;
  local_ef0 = local_7d0;
  uStack_ed8 = uStack_7b8;
  uStack_ee0 = local_7c0;
  uStack_ec8 = uStack_7a8;
  local_ed0 = local_7b0;
  uStack_eb8 = uStack_798;
  uStack_ec0 = local_7a0;
  uStack_f28 = uStack_808;
  local_f30 = local_810;
  uStack_f18 = uStack_7f8;
  puStack_f20 = local_800;
  uStack_f08 = uStack_7e8;
  local_f10 = local_7f0;
  uStack_ef8 = uStack_7d8;
  uStack_f00 = local_7e0;
  dStack_f68 = dStack_848;
  local_f70 = local_850;
  uStack_f58 = uStack_838;
  uStack_f60 = local_840;
  uStack_f48 = uStack_828;
  local_f50 = local_830;
  uStack_f38 = uStack_818;
  puStack_f40 = local_820;
  uStack_e68 = uStack_608;
  local_e70 = local_610;
  uStack_368 = uStack_608;
  local_370 = local_610;
  local_dc0 = CONCAT71(uStack_5bf,uStack_5c0);
  local_e20 = CONCAT71(uStack_5bf,uStack_5c0);
  local_260 = CONCAT71(uStack_4cf,uStack_4d0);
  local_f79 = CONCAT71(uStack_4cf,uStack_4d0);
  uStack_308 = uStack_518;
  local_310 = local_520;
  uStack_fa1 = uStack_4f8;
  uStack_fa0 = uStack_4f7;
  local_fa9 = uStack_500;
  uStack_fa8 = local_4ff;
  uStack_f91 = uStack_4e8;
  uStack_f90 = uStack_4e7;
  local_f99 = uStack_4f0;
  uStack_f98 = local_4ef;
  uStack_f81 = uStack_4d8;
  uStack_f80 = uStack_4d7;
  local_f89 = uStack_4e0;
  uStack_f88 = local_4df;
  local_fb9 = local_510;
  uStack_fb8 = uStack_50f;
  uStack_fb1 = uStack_508;
  uStack_fb0 = uStack_507;
  uStack_fc1 = (undefined1)uStack_518;
  uStack_fc0 = (undefined7)((ulong)uStack_518 >> 8);
  local_fc9 = SUB81(local_520,0);
  uStack_fc8 = (undefined7)((ulong)local_520 >> 8);
  local_360 = uStack_e60;
  uStack_358 = uStack_e58;
  local_350 = local_e50;
  uStack_348 = uStack_e48;
  local_340 = local_e40;
  uStack_338 = uStack_e38;
  local_330 = uStack_e30;
  uStack_328 = uStack_e28;
  local_320 = local_e20;
  local_2c0 = local_f79;
  _memcpy(extraout_x8,&local_f70,0x158);
  *(undefined8 *)((long)extraout_x8 + 0x158) = 0;
  *(undefined1 *)((long)extraout_x8 + 0x160) = 0;
  *(ulong *)((long)extraout_x8 + 0x189) = CONCAT17(uStack_fa1,uStack_fa8);
  *(ulong *)((long)extraout_x8 + 0x181) = CONCAT17(local_fa9,uStack_fb0);
  *(ulong *)((long)extraout_x8 + 0x199) = CONCAT17(uStack_f91,uStack_f98);
  *(ulong *)((long)extraout_x8 + 0x191) = CONCAT17(local_f99,uStack_fa0);
  *(ulong *)((long)extraout_x8 + 0x1a9) = CONCAT17(uStack_f81,uStack_f88);
  *(ulong *)((long)extraout_x8 + 0x1a1) = CONCAT17(local_f89,uStack_f90);
  *(undefined8 *)((long)extraout_x8 + 0x1b8) = local_f79;
  *(ulong *)((long)extraout_x8 + 0x1b0) = CONCAT71(uStack_f80,uStack_f81);
  *(ulong *)((long)extraout_x8 + 0x169) = CONCAT17(uStack_fc1,uStack_fc8);
  *(ulong *)((long)extraout_x8 + 0x161) = CONCAT17(local_fc9,uStack_fd0);
  *(ulong *)((long)extraout_x8 + 0x179) = CONCAT17(uStack_fb1,uStack_fb8);
  *(ulong *)((long)extraout_x8 + 0x171) = CONCAT17(local_fb9,uStack_fc0);
  FUN_100011090(&local_470,auStack_10d0,&DAT_100fbaa48,&DAT_100c3b310);
  FUN_1002954f0(&local_370,auStack_10d0);
  FUN_1002954f0(&local_310,auStack_10d0);
  FUN_100005808(&local_2b0,&DAT_100fbaa50,&DAT_100c3b318);
  FUN_100005808(&local_e10,&DAT_100fbaa50,&DAT_100c3b318);
  FUN_100005808(&uStack_db0,&DAT_100fbaa48,&DAT_100c3b310);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100292f7c | FUN_100292f7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002931b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100292f7c(undefined8 *param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  Text TVar5;
  Font FVar6;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Text TVar10;
  Text TVar11;
  Text TVar12;
  undefined8 *puVar13;
  Text TVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *in_x3;
  undefined *puVar20;
  ulong uVar21;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift";
    in_x3 = (undefined8 *)0x4d;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x4d,
               UVar3.unknown,puVar2);
  }
  FUN_1002538a0();
  puVar2 = (undefined8 *)PTR___type_metadata_for_Swift_String_100eac208;
  pcVar15 = pcVar4;
  TVar5 = SwiftUI::Text::_init();
  FVar6 = SwiftUI::Font::get_body(TVar5.unknown);
  FVar7 = SwiftUI::Font::bold(FVar6);
  _swift_release(FVar6.unknown);
  TVar11 = TVar5;
  puVar16 = puVar2;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar5.unknown,puVar2,pcVar15);
  _swift_bridgeObjectRelease();
  FUN_100218c68();
  CVar9 = SwiftUI::Color::init((NSColor *)*in_x3);
  TVar5 = TVar8;
  puVar17 = TVar11.unknown;
  puVar2 = puVar16;
  TVar10 = SwiftUI::Text::_foregroundColor(CVar9.unknown);
  puVar13 = puVar2;
  _swift_release(CVar9.unknown);
  FUN_100016d74(TVar8.unknown,TVar11.unknown,puVar16);
  _swift_bridgeObjectRelease();
  FUN_1002aa62c();
  if (TVar11.unknown == (undefined *)0x0) {
    TVar8.unknown = (undefined *)0x0;
    TVar11.unknown = (undefined *)0x0;
    uVar21 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar11 = SwiftUI::Text::_init
                       (TVar10.unknown,PTR___type_metadata_for_Swift_String_100eac208,pcVar4);
    FVar6 = SwiftUI::Font::get_callout(TVar11.unknown);
    TVar14 = TVar11;
    puVar18 = puVar20;
    pcVar15 = pcVar4;
    TVar12 = SwiftUI::Text::_font(FVar6.unknown);
    _swift_release(FVar6.unknown);
    FUN_100016d74(TVar11.unknown,puVar20,pcVar4);
    _swift_bridgeObjectRelease();
    FUN_1002199e8();
    CVar9 = SwiftUI::Color::init((NSColor *)*puVar13);
    TVar11 = TVar12;
    puVar19 = TVar14.unknown;
    puVar20 = puVar18;
    TVar8 = SwiftUI::Text::_foregroundColor(CVar9.unknown);
    _swift_release(CVar9.unknown);
    FUN_100016d74(TVar12.unknown,TVar14.unknown,puVar18);
    _swift_bridgeObjectRelease(pcVar15);
    uVar21 = (ulong)puVar19 & 0xff;
    FUN_100016d5c(TVar8.unknown,TVar11.unknown,puVar19);
    _swift_bridgeObjectRetain(puVar20);
  }
  FUN_100016d5c(TVar10.unknown,TVar5.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_bridgeObjectRetain(puVar2);
  FUN_100020200(TVar8.unknown,TVar11.unknown,uVar21,puVar20);
  FUN_10002022c(TVar8.unknown,TVar11.unknown,uVar21,puVar20);
  *param_1 = TVar10.unknown;
  param_1[1] = TVar5.unknown;
  *(char *)(param_1 + 2) = (char)puVar17;
  param_1[3] = puVar2;
  param_1[4] = TVar8.unknown;
  param_1[5] = TVar11.unknown;
  param_1[6] = uVar21;
  param_1[7] = puVar20;
  FUN_10002022c(TVar8.unknown,TVar11.unknown,uVar21,puVar20);
  FUN_100016d74(TVar10.unknown,TVar5.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_release(pMVar1);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100293360 | FUN_100293360 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100293360(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Text TVar6;
  Font FVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  LocalizedStringResource LVar11;
  Text TVar12;
  Text TVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  long extraout_x8;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  char *local_a0;
  uint local_94;
  char *local_90;
  LocalizedStringResource local_88;
  undefined8 *local_80;
  MainActor *local_78;
  String local_70;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  local_88.unknown = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar20 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar20,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_78 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  puVar15 = puVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift";
    puVar15 = (undefined8 *)0x46;
    param_5 = (undefined8 *)0x5b;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x5b,
               UVar4.unknown,puVar3);
  }
  FUN_1002aa6e0();
  local_70.bridgeObject = puVar15;
  local_70.str = pcVar5;
  FUN_1002538a0();
  puVar3 = (undefined8 *)PTR___type_metadata_for_Swift_String_100eac208;
  local_90 = pcVar5;
  TVar6 = SwiftUI::Text::_init();
  FVar7 = SwiftUI::Font::get_body(TVar6.unknown);
  FVar8 = SwiftUI::Font::bold(FVar7);
  local_80 = param_2;
  _swift_release(FVar7.unknown);
  TVar12 = TVar6;
  puVar15 = puVar3;
  pcVar19 = pcVar5;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar6.unknown,puVar3,pcVar5);
  _swift_bridgeObjectRelease();
  FUN_100218c68();
  CVar10 = SwiftUI::Color::init((NSColor *)*param_5);
  TVar6 = TVar9;
  puVar20 = TVar12.unknown;
  puVar3 = puVar15;
  LVar11.unknown = (undefined *)SwiftUI::Text::_foregroundColor(CVar10.unknown);
  puVar14 = puVar3;
  _swift_release(CVar10.unknown);
  FUN_100016d74(TVar9.unknown,TVar12.unknown,puVar15);
  _swift_bridgeObjectRelease(pcVar19);
  FUN_1002aaa04();
  LVar1.unknown = local_88.unknown;
  if (TVar12.unknown == (undefined *)0x0) {
    TVar9.unknown = (undefined *)0x0;
    TVar12.unknown = (undefined *)0x0;
    uVar22 = 0;
    puVar21 = (undefined *)0x0;
  }
  else {
    thunk_FUN_1001e6c58(local_88.unknown);
    _swift_bridgeObjectRelease(TVar12.unknown);
    local_70 = (extension_Foundation)::Swift::String::init(LVar1);
    puVar21 = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar5 = local_90;
    TVar12 = SwiftUI::Text::_init();
    FVar7 = SwiftUI::Font::get_callout(TVar12.unknown);
    TVar16 = TVar12;
    puVar17 = puVar21;
    pcVar19 = pcVar5;
    TVar13 = SwiftUI::Text::_font(FVar7.unknown);
    local_a0 = pcVar19;
    local_90 = TVar6.unknown;
    local_88.unknown = LVar11.unknown;
    local_80 = puVar3;
    _swift_release(FVar7.unknown);
    FUN_100016d74(TVar12.unknown,puVar21,pcVar5);
    _swift_bridgeObjectRelease();
    FUN_1002199e8();
    CVar10 = SwiftUI::Color::init((NSColor *)*puVar14);
    pcVar5 = local_a0;
    TVar12 = TVar13;
    puVar18 = TVar16.unknown;
    puVar21 = puVar17;
    TVar9 = SwiftUI::Text::_foregroundColor(CVar10.unknown);
    local_94 = (uint)puVar20;
    _swift_release(CVar10.unknown);
    puVar3 = local_80;
    LVar11.unknown = local_88.unknown;
    TVar6.unknown = local_90;
    FUN_100016d74(TVar13.unknown,TVar16.unknown,puVar17);
    _swift_bridgeObjectRelease(pcVar5);
    uVar22 = (ulong)puVar18 & 0xff;
    puVar20 = (undefined *)(ulong)local_94;
    FUN_100016d5c(TVar9.unknown,TVar12.unknown,puVar18);
    _swift_bridgeObjectRetain(puVar21);
  }
  FUN_100016d5c(LVar11.unknown,TVar6.unknown,puVar20);
  _swift_bridgeObjectRetain(puVar3);
  FUN_100020200(TVar9.unknown,TVar12.unknown,uVar22,puVar21);
  FUN_10002022c(TVar9.unknown,TVar12.unknown,uVar22,puVar21);
  *param_1 = LVar11.unknown;
  param_1[1] = TVar6.unknown;
  *(char *)(param_1 + 2) = (char)puVar20;
  param_1[3] = puVar3;
  param_1[4] = TVar9.unknown;
  param_1[5] = TVar12.unknown;
  param_1[6] = uVar22;
  param_1[7] = puVar21;
  FUN_10002022c(TVar9.unknown,TVar12.unknown,uVar22,puVar21);
  FUN_100016d74(LVar11.unknown,TVar6.unknown,puVar20);
  _swift_release(local_78);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x100293720 | FUN_100293720 */

void FUN_100293720(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_80 [8];
  undefined8 local_78;
  
  lVar6 = *(long *)(param_2 + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar1 = &DAT_100fba9e8;
  FUN_1000037f0(&DAT_100fba9e8,&DAT_100c3b2d0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000c495c();
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ec5d90;
  _swift_allocObject(&DAT_100ec5d90,uVar7 + lVar8,uVar4 | 7);
  FUN_1000523d8(local_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar7,FUN_100291eb4);
  FUN_1000037f0(&DAT_100fba9f0,&DAT_100c3b2d8);
  FUN_100295418();
  SwiftUI::Button::_init();
  local_80[0] = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  local_78 = 0x402c000000000000;
  puVar2 = &DAT_100fbaa10;
  FUN_100016eac(&DAT_100fbaa10,&DAT_100fba9e8,&DAT_100c3b2d0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_1002954b0();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,local_80,puVar1,&DAT_100ec5e10,puVar2,puVar3);
  (**(code **)(lVar5 + 8))
            ((long)(local_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8,puVar1);
  return;
}



/* Address: 0x1002938dc | FUN_1002938dc */

void FUN_1002938dc(long param_1,undefined8 param_2,ButtonStyleConfiguration param_3,
                  undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Label LVar4;
  ButtonStyleConfiguration BVar5;
  Alignment AVar6;
  undefined *puVar7;
  UnitPoint UVar8;
  Animation AVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 extraout_var;
  
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(param_3);
  SwiftUI::Alignment::get_center((Alignment)LVar4.unknown);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  BVar5.unknown = &DAT_100fb9268;
  FUN_1000037f0(&DAT_100fb9268,&DAT_100c38ff0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(BVar5.unknown + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = local_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = local_80;
  puVar1[1] = uStack_d8;
  *puVar1 = local_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = uStack_d0;
  puVar1[5] = uStack_b8;
  puVar1[4] = local_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar5);
  uVar11 = 0x3feccccccccccccd;
  if (!bVar3) {
    uVar11 = 0x3ff0000000000000;
  }
  AVar6.unknown = &DAT_100fb9270;
  puVar10 = &DAT_100c38ff8;
  FUN_1000037f0();
  *(undefined8 *)(param_1 + *(int *)(AVar6.unknown + 0x24)) = uVar11;
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  puVar7 = &DAT_100fbaa58;
  FUN_1000037f0(&DAT_100fbaa58,&DAT_100c3b370);
  iVar2 = *(int *)(puVar7 + 0x24);
  FUN_100293af0(param_1 + iVar2,param_2,param_4);
  BVar5.unknown = &DAT_100fbaa60;
  FUN_1000037f0(&DAT_100fbaa60,&DAT_100c3b378);
  puVar1 = (undefined8 *)(param_1 + iVar2 + (long)*(int *)(BVar5.unknown + 0x24));
  *puVar1 = AVar6.unknown;
  puVar1[1] = puVar10;
  UVar8.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar5);
  UVar8.unknown._1_7_ = extraout_var;
  uVar12 = 0x3fefae147ae147ae;
  uVar11 = uVar12;
  if (!UVar8.unknown._0_1_) {
    uVar11 = 0x3ff0000000000000;
  }
  SwiftUI::UnitPoint::get_center(UVar8);
  AVar9.unknown = &DAT_100fbaa68;
  FUN_1000037f0(&DAT_100fbaa68,&DAT_100c3b380);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar9.unknown + 0x24));
  *puVar1 = uVar11;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = local_c0;
  AVar9 = SwiftUI::Animation::spring(0.15,0.85,0.25,AVar9);
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)AVar9.unknown);
  puVar10 = &DAT_100fbaa70;
  FUN_1000037f0(&DAT_100fbaa70,&DAT_100c3b388);
  iVar2 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar9.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = bVar3;
  return;
}



/* Address: 0x100293af0 | FUN_100293af0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100293af0(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  RoundedCornerStyle RVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Color CVar8;
  Color CVar9;
  undefined *puVar10;
  RoundedRectangle RVar11;
  undefined7 extraout_var;
  Alignment AVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x77,
               UVar6.unknown,puVar5);
  }
  FUN_1001fe1dc();
  CVar8 = SwiftUI::Color::init(*(NSColor **)pcVar7);
  CVar9 = SwiftUI::Color::opacity(0.5,CVar8);
  _swift_release(CVar8.unknown);
  puVar10 = &DAT_100fbaa78;
  FUN_1000037f0(&DAT_100fbaa78,&DAT_100c3b390);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar2 = *(int *)(RVar11.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar3.value) + -8) + 0x68))
            ((long)puVar5 + (long)iVar2,uVar1,CONCAT71(extraout_var,RVar3.value));
  auVar14 = NEON_fmov(0x4018000000000000,8);
  puVar5[1] = auVar14._8_8_;
  *puVar5 = auVar14._0_8_;
  AVar12.unknown = &DAT_100fb94e8;
  puVar10 = &DAT_100c39280;
  FUN_1000037f0();
  *(undefined2 *)((long)puVar5 + (long)*(int *)(AVar12.unknown + 0x24)) = 0x100;
  *param_1 = CVar9.unknown;
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  puVar13 = &DAT_100fbaa80;
  FUN_1000037f0(&DAT_100fbaa80,&DAT_100c3b3a0);
  iVar2 = *(int *)(puVar13 + 0x24);
  FUN_100293cb0((long)param_1 + (long)iVar2,param_2 & 1);
  _swift_release(pMVar4);
  puVar13 = &DAT_100fb9500;
  FUN_1000037f0(&DAT_100fb9500,&DAT_100c392a0);
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar2 + (long)*(int *)(puVar13 + 0x24));
  *puVar5 = AVar12.unknown;
  puVar5[1] = puVar10;
  return;
}



/* Address: 0x100293cb0 | FUN_100293cb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100293e04 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100293cb0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  RoundedCornerStyle RVar4;
  RoundedRectangle RVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  Color CVar11;
  undefined *puVar12;
  Alignment AVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 auStack_90 [5];
  undefined8 local_68;
  long lVar10;
  
  RVar5 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar5.unknown + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)auStack_90 + lVar3);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.SubscriptionPicker.swift",0x46,1,0x7b,
               UVar8.unknown,puVar7);
  }
  iVar2 = *(int *)(RVar5.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)UVar9.unknown >> 8),RVar4.value);
  puVar7 = (undefined8 *)((long)puVar15 + (long)iVar2);
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))(puVar7,uVar1,lVar10);
  auVar16 = NEON_fmov(0x4018000000000000,8);
  *(long *)((long)auStack_90 + lVar3 + 8U) = auVar16._8_8_;
  *puVar15 = auVar16._0_8_;
  if ((param_2 & 1) == 0) {
    uVar17 = 0x3fe0000000000000;
    FUN_100218ce8();
  }
  else {
    uVar17 = 0x3ff8000000000000;
    FUN_100218d58();
  }
  CVar11 = SwiftUI::Color::init((NSColor *)*puVar7);
  SwiftUI::StrokeStyle::init
            (auStack_90 + 1,uVar17,0x4024000000000000,0,CVar11.unknown,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar14 = PTR_typeMetadataAccessor_100eaa9e0;
  FUN_1000c495c(puVar15,param_1,PTR_typeMetadataAccessor_100eaa9e0);
  puVar12 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar7 = (undefined8 *)(param_1 + *(int *)(puVar12 + 0x24));
  puVar7[1] = auStack_90[2];
  *puVar7 = auStack_90[1];
  puVar7[3] = auStack_90[4];
  puVar7[2] = auStack_90[3];
  puVar7[4] = local_68;
  AVar13.unknown = &DAT_100fb92b8;
  puVar12 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(param_1 + *(int *)(AVar13.unknown + 0x34)) = CVar11.unknown;
  *(undefined2 *)(param_1 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  FUN_10005241c(puVar15,puVar14);
  _swift_release(pMVar6);
  puVar14 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar2 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar13.unknown;
  ((undefined8 *)(param_1 + iVar2))[1] = puVar12;
  return;
}



/* Address: 0x100293ed8 | FUN_100293ed8 */

void FUN_100293ed8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1002938dc(*(undefined8 *)(unaff_x20 + 8),param_1,*unaff_x20);
  return;
}



/* Address: 0x100293ee4 | FUN_100293ee4 */

void FUN_100293ee4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100291354();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100291650(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100293f20 | FUN_100293f20 */

long * FUN_100293f20(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  DateComponents DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  Product PVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar5 = 0;
    FUN_1002abb94();
    lVar12 = (long)*(int *)(lVar5 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar14 = *(long *)(DVar6.unknown + -8);
    puVar7 = (undefined1 *)((long)param_2 + lVar12);
    (**(code **)(lVar14 + 0x30))(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar14 + 0x10))
                ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                 DVar6.unknown);
      (**(code **)(lVar14 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar12 = 0;
    FUN_1002abbf0();
    lVar13 = *(long *)(lVar12 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar13 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar9 == 0) {
      puVar9 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar12);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar16 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar16;
        _swift_bridgeObjectRetain();
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar15 = *(code **)(lVar14 + 0x10);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar6.unknown);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar6.unknown);
      }
      else {
        (**(code **)(lVar14 + 0x10))(puVar1,puVar2,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar12,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      puVar8 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(lVar5 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar4),
               (undefined1 *)((long)param_2 + (long)iVar4),PVar10.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar4);
    lVar5 = puVar1[1];
    uVar16 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar16;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar11 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar5);
  return param_1;
}



/* Address: 0x100294188 | FUN_100294188 */

void FUN_100294188(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  DateComponents DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  lVar2 = 0;
  FUN_1002abb94();
  iVar1 = *(int *)(lVar2 + 0x14);
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar9 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  lVar4 = param_1 + *(int *)(lVar2 + 0x18);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = lVar4;
    _swift_getEnumCaseMultiPayload(lVar4,lVar5);
    iVar1 = (int)lVar6;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x30),DVar3.unknown);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x40),DVar3.unknown);
    }
    else if (iVar1 == 0) {
      (**(code **)(lVar9 + 8))(lVar4,DVar3.unknown);
    }
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Address: 0x1002942dc | FUN_1002942dc */

undefined1 * FUN_1002942dc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar3;
  (**(code **)(lVar13 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar12 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar12 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar11 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar11;
      _swift_bridgeObjectRetain();
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar14 = *(code **)(lVar13 + 0x10);
      (*pcVar14)((long)puVar1 + (long)*(int *)(puVar7 + 0x30),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x30),DVar5.unknown);
      (*pcVar14)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x40),DVar5.unknown);
    }
    else {
      (**(code **)(lVar13 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
            (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  puVar1 = (undefined8 *)(param_2 + iVar3);
  uVar11 = puVar1[1];
  uVar15 = *puVar1;
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = puVar1[1];
  *(undefined8 *)(param_1 + iVar3) = uVar15;
  _swift_retain(uVar11);
  return param_1;
}



/* Address: 0x100294524 | FUN_100294524 */

undefined1 * FUN_100294524(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *local_78;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar16)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar16)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar15 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_1002945f0;
    }
    (**(code **)(lVar15 + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar15 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar15 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_1002945f0:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar17 = *(long *)(lVar9 + -8);
  pcVar16 = *(code **)(lVar17 + 0x30);
  puVar10 = puVar1;
  (*pcVar16)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar16)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if ((int)puVar10 == 2) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar16 = *(code **)(lVar15 + 0x10);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar16 = *(code **)(lVar15 + 0x10);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar15 + 0x10))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_10029486c;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if ((int)puVar10 == 2) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      local_78 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar3 = *(int *)(local_78 + 0x30);
      pcVar16 = *(code **)(lVar15 + 0x10);
LAB_100294804:
      (*pcVar16)((undefined1 *)((long)puVar1 + (long)iVar3),
                 (undefined1 *)((long)puVar2 + (long)iVar3),DVar5.unknown);
      (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(local_78 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(local_78 + 0x40)),DVar5.unknown);
    }
    else {
      if ((int)puVar10 == 1) {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        _swift_bridgeObjectRetain();
        local_78 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        iVar3 = *(int *)(local_78 + 0x30);
        pcVar16 = *(code **)(lVar15 + 0x10);
        goto LAB_100294804;
      }
      (**(code **)(lVar15 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_10029486c;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_10029486c:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x18))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar14 = puVar1[1];
  uVar13 = puVar2[1];
  uVar18 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar18;
  _swift_retain(uVar13);
  _swift_release(uVar14);
  return param_1;
}



/* Address: 0x100294984 | FUN_100294984 */

undefined1 * FUN_100294984(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar3;
  (**(code **)(lVar12 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar11 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar14 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 0x20);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar5.unknown);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar5.unknown);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
            (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  uVar14 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = uVar14;
  return param_1;
}



/* Address: 0x100294bbc | FUN_100294bbc */

undefined1 * FUN_100294bbc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *local_78;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar15)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar15)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar14 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_100294c88;
    }
    (**(code **)(lVar14 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar14 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_100294c88:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar16 = *(long *)(lVar9 + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  puVar10 = puVar1;
  (*pcVar15)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar15)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if ((int)puVar10 == 2) {
          uVar13 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar13;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar14 + 0x20);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          uVar13 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar13;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar14 + 0x20);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar14 + 0x20))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_100294ee0;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if ((int)puVar10 == 2) {
      uVar13 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      local_78 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar3 = *(int *)(local_78 + 0x30);
      pcVar15 = *(code **)(lVar14 + 0x20);
LAB_100294e78:
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)iVar3),
                 (undefined1 *)((long)puVar2 + (long)iVar3),DVar5.unknown);
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(local_78 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(local_78 + 0x40)),DVar5.unknown);
    }
    else {
      if ((int)puVar10 == 1) {
        uVar13 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar13;
        local_78 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        iVar3 = *(int *)(local_78 + 0x30);
        pcVar15 = *(code **)(lVar14 + 0x20);
        goto LAB_100294e78;
      }
      (**(code **)(lVar14 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_100294ee0;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_100294ee0:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x28))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  puVar1 = (undefined8 *)(param_1 + iVar3);
  uVar13 = puVar1[1];
  uVar17 = *(undefined8 *)(param_2 + iVar3);
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *puVar1 = uVar17;
  _swift_release(uVar13);
  return param_1;
}



/* Address: 0x100294fd8 | FUN_100294fd8 */

void FUN_100294fd8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100294fe4 | FUN_100294fe4 */

ulong FUN_100294fe4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_1002abb94();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100295034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x100295060 | FUN_100295060 */

void FUN_100295060(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10029506c | FUN_10029506c */

void FUN_10029506c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abb94();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001002950c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1002950e4 | FUN_1002950e4 */

void FUN_1002950e4(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c3b258;
    local_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100295164 | thunk_FUN_100295168 */

void thunk_FUN_100295168(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fba9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba9d8;
  FUN_100005c24(&DAT_100fba9d8,&DAT_100c3b278);
  puVar2 = &DAT_100fba930;
  FUN_100016eac(&DAT_100fba930,&DAT_100fba918,&DAT_100c3b228,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar3 = puVar2;
  FUN_100295200();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fba9d0 = puVar4;
  return;
}



/* Address: 0x100295168 | FUN_100295168 */

void FUN_100295168(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba9d8;
  FUN_100005c24(&DAT_100fba9d8,&DAT_100c3b278);
  puVar2 = &DAT_100fba930;
  FUN_100016eac(&DAT_100fba930,&DAT_100fba918,&DAT_100c3b228,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar3 = puVar2;
  FUN_100295200();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba9d0 = puVar4;
  return;
}



/* Address: 0x100295200 | FUN_100295200 */

void FUN_100295200(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fba9e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36a40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36a40,&DAT_100ec2580);
  DAT_100fba9e0 = pTVar1;
  return;
}



/* Address: 0x100295240 | FUN_100295240 */

void FUN_100295240(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa790,1);
  return;
}



/* Address: 0x100295250 | FUN_100295250 */

void FUN_100295250(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar3 = 0;
  FUN_100291eb4();
  lVar15 = *(long *)(lVar3 + -8);
  uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  lVar4 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  lVar12 = lVar1 + iVar2;
  (**(code **)(lVar10 + 0x30))(lVar12,1,DVar5.unknown);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  lVar12 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar6 = 0;
  FUN_1002abbf0();
  lVar7 = lVar12;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar12,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = lVar12;
    _swift_getEnumCaseMultiPayload(lVar12,lVar6);
    iVar2 = (int)lVar7;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 8));
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar12 + *(int *)(puVar8 + 0x30),DVar5.unknown);
      (*pcVar11)(lVar12 + *(int *)(puVar8 + 0x40),DVar5.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar10 + 8))(lVar12,DVar5.unknown);
    }
  }
  lVar12 = *(long *)(lVar15 + 0x40);
  iVar2 = *(int *)(lVar4 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_deallocObject(unaff_x20,lVar12 + uVar14,uVar13 | 7);
  return;
}



/* Address: 0x1002953e4 | FUN_1002953e4 */

void FUN_1002953e4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100291eb4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1002920fc(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100295410 | FUN_100295410 */

void FUN_100295410(void)

{
  long unaff_x20;
  
  FUN_1002921c0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100295418 | FUN_100295418 */

void FUN_100295418(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba9f0;
  FUN_100005c24(&DAT_100fba9f0,&DAT_100c3b2d8);
  puVar2 = &DAT_100fbaa00;
  FUN_100016eac(&DAT_100fbaa00,&DAT_100fbaa08,&DAT_100c3b2e0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba9f8 = puVar3;
  return;
}



/* Address: 0x1002954b0 | FUN_1002954b0 */

void FUN_1002954b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbaa18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b338;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b338,&DAT_100ec5e10);
  DAT_100fbaa18 = pTVar1;
  return;
}



/* Address: 0x1002954f0 | FUN_1002954f0 */

undefined8 FUN_1002954f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbaa50;
  FUN_1000037f0(&DAT_100fbaa50,&DAT_100c3b318);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100295540 | FUN_100295540 */

undefined1  [16] FUN_100295540(void)

{
  return ZEXT816(0x100ec5e10);
}



/* Address: 0x100295550 | FUN_100295550 */

void FUN_100295550(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fba9e8;
  FUN_100005c24(&DAT_100fba9e8,&DAT_100c3b2d0);
  puVar2 = &DAT_100fbaa10;
  FUN_100016eac(&DAT_100fbaa10,&DAT_100fba9e8,&DAT_100c3b2d0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_1002954b0();
  puStack_48 = &DAT_100ec5e10;
  local_50 = puVar1;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  return;
}



/* Address: 0x1002955e0 | FUN_1002955e0 */

void FUN_1002955e0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa7b8,1);
  return;
}



/* Address: 0x1002955f0 | thunk_FUN_1002955f4 */

void thunk_FUN_1002955f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbaa88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbaa70;
  FUN_100005c24(&DAT_100fbaa70,&DAT_100c3b388);
  puVar2 = puVar1;
  FUN_10029568c();
  puVar3 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbaa88 = puVar4;
  return;
}



/* Address: 0x1002955f4 | FUN_1002955f4 */

void FUN_1002955f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbaa88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbaa70;
  FUN_100005c24(&DAT_100fbaa70,&DAT_100c3b388);
  puVar2 = puVar1;
  FUN_10029568c();
  puVar3 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbaa88 = puVar4;
  return;
}



/* Address: 0x10029568c | FUN_10029568c */

void FUN_10029568c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbaa90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbaa68;
  FUN_100005c24(&DAT_100fbaa68,&DAT_100c3b380);
  puVar2 = puVar1;
  FUN_100295704();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ScaleEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa6e8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbaa90 = puVar3;
  return;
}



/* Address: 0x100295704 | FUN_100295704 */

void FUN_100295704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbaa98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbaa58;
  FUN_100005c24(&DAT_100fbaa58,&DAT_100c3b370);
  puVar2 = puVar1;
  FUN_100268b58();
  puVar3 = &DAT_100fbaaa0;
  FUN_100016eac(&DAT_100fbaaa0,&DAT_100fbaa60,&DAT_100c3b378,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbaa98 = puVar4;
  return;
}



/* Address: 0x10029579c | thunk_FUN_100291ec8 */

void thunk_FUN_100291ec8(void)

{
  thunk_FUN_100291ec8();
  return;
}



/* Address: 0x1002957a0 | thunk_FUN_100291ec8 */

void thunk_FUN_100291ec8(void)

{
  thunk_FUN_100291ec8();
  return;
}



/* Address: 0x1002957a4 | FUN_1002957a4 */

long * FUN_1002957a4(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  DateComponents DVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  Product PVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    lVar8 = 0;
    FUN_1002abb94();
    iVar7 = *(int *)(lVar8 + 0x14);
    DVar9 = Foundation::DateComponents::typeMetadataAccessor();
    lVar18 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar18 + 0x30);
    _swift_retain(lVar12);
    puVar10 = puVar2 + iVar7;
    (*pcVar16)(puVar10,1,DVar9.unknown);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar1 + iVar7,puVar2 + iVar7,DVar9.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1 + iVar7,0,1,DVar9.unknown);
    }
    else {
      puVar11 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar8 + 0x18));
    puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar8 + 0x18));
    lVar12 = 0;
    FUN_1002abbf0();
    lVar17 = *(long *)(lVar12 + -8);
    puVar13 = puVar4;
    (**(code **)(lVar17 + 0x30))(puVar4,1,lVar12);
    if ((int)puVar13 == 0) {
      puVar13 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,lVar12);
      if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
        uVar5 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        _swift_bridgeObjectRetain();
        puVar11 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar16 = *(code **)(lVar18 + 0x10);
        (*pcVar16)((long)puVar3 + (long)*(int *)(puVar11 + 0x30),
                   (long)puVar4 + (long)*(int *)(puVar11 + 0x30),DVar9.unknown);
        (*pcVar16)((long)puVar3 + (long)*(int *)(puVar11 + 0x40),
                   (long)puVar4 + (long)*(int *)(puVar11 + 0x40),DVar9.unknown);
      }
      else {
        (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar9.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar12,(ulong)puVar13 & 0xffffffff);
      (**(code **)(lVar17 + 0x38))(puVar3,0,1,lVar12);
    }
    else {
      puVar11 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar8 + 0x1c);
    PVar14 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar14.unknown + -8) + 0x10))
              (puVar1 + iVar7,puVar2 + iVar7,PVar14.unknown);
    puVar11 = &DAT_100fbaaa8;
    FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
    *(undefined8 *)(puVar1 + *(int *)(puVar11 + 0x1c)) =
         *(undefined8 *)(puVar2 + *(int *)(puVar11 + 0x1c));
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar15 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar12 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100295a24 | FUN_100295a24 */

void FUN_100295a24(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  DateComponents DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  lVar2 = 0;
  FUN_1002abb94();
  iVar1 = *(int *)(lVar2 + 0x14);
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar9 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  lVar4 = param_1 + *(int *)(lVar2 + 0x18);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = lVar4;
    _swift_getEnumCaseMultiPayload(lVar4,lVar5);
    iVar1 = (int)lVar6;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x30),DVar3.unknown);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x40),DVar3.unknown);
    }
    else if (iVar1 == 0) {
      (**(code **)(lVar9 + 8))(lVar4,DVar3.unknown);
    }
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  puVar7 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(puVar7 + 0x1c)));
  return;
}



/* Address: 0x100295b90 | FUN_100295b90 */

undefined8 * FUN_100295b90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  Product PVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar6 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar8.unknown + -8);
  pcVar14 = *(code **)(lVar16 + 0x30);
  _swift_retain(uVar5);
  puVar9 = puVar2 + iVar6;
  (*pcVar14)(puVar9,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    (**(code **)(lVar16 + 0x10))(puVar1 + iVar6,puVar2 + iVar6,DVar8.unknown);
    (**(code **)(lVar16 + 0x38))(puVar1 + iVar6,0,1,DVar8.unknown);
  }
  else {
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  puVar12 = puVar4;
  (**(code **)(lVar15 + 0x30))(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar14 = *(code **)(lVar16 + 0x10);
      (*pcVar14)((long)puVar3 + (long)*(int *)(puVar10 + 0x30),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x30),DVar8.unknown);
      (*pcVar14)((long)puVar3 + (long)*(int *)(puVar10 + 0x40),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x40),DVar8.unknown);
    }
    else {
      (**(code **)(lVar16 + 0x10))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,(ulong)puVar12 & 0xffffffff);
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar11);
  }
  else {
    puVar10 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar7 + 0x1c);
  PVar13 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar13.unknown + -8) + 0x10))(puVar1 + iVar6,puVar2 + iVar6,PVar13.unknown)
  ;
  puVar10 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  *(undefined8 *)(puVar1 + *(int *)(puVar10 + 0x1c)) =
       *(undefined8 *)(puVar2 + *(int *)(puVar10 + 0x1c));
  _swift_retain();
  return param_1;
}



/* Address: 0x100295de8 | FUN_100295de8 */

undefined8 * FUN_100295de8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Product PVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  
  *param_1 = *param_2;
  uVar16 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar8 = puVar1 + iVar5;
  (*pcVar17)(puVar8,1,DVar7.unknown);
  puVar9 = puVar2 + iVar5;
  (*pcVar17)(puVar9,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 != 0) {
      (**(code **)(lVar18 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_100295ee4;
    }
    (**(code **)(lVar18 + 0x18))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar9 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_100295ee4:
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  puVar12 = puVar3;
  (*pcVar17)(puVar3,1,lVar11);
  puVar13 = puVar4;
  (*pcVar17)(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar12 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar11);
        if ((int)puVar12 == 2) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,2);
        }
        else if ((int)puVar12 == 1) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,1);
        }
        else {
          (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,0);
        }
      }
      goto LAB_100296124;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar13 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x10);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,puVar12);
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar11);
    goto LAB_100296124;
  }
  puVar10 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_100296124:
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x18))(puVar1 + iVar5,puVar2 + iVar5,PVar14.unknown)
  ;
  puVar10 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  iVar5 = *(int *)(puVar10 + 0x1c);
  uVar16 = *(undefined8 *)(puVar1 + iVar5);
  *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
  _swift_retain();
  _swift_release(uVar16);
  return param_1;
}



/* Address: 0x10029623c | FUN_10029623c */

undefined8 * FUN_10029623c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  puVar8 = puVar2 + iVar5;
  (**(code **)(lVar14 + 0x30))(puVar8,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar10 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    puVar11 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar10);
    if (((int)puVar11 == 2) || ((int)puVar11 == 1)) {
      uVar16 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar9 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x30)),DVar7.unknown);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x20))(puVar3,puVar4,DVar7.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar10,(ulong)puVar11 & 0xffffffff);
    (**(code **)(lVar13 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    puVar9 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x20))(puVar1 + iVar5,puVar2 + iVar5,PVar12.unknown)
  ;
  puVar9 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  *(undefined8 *)(puVar1 + *(int *)(puVar9 + 0x1c)) =
       *(undefined8 *)(puVar2 + *(int *)(puVar9 + 0x1c));
  return param_1;
}



/* Address: 0x100296484 | FUN_100296484 */

undefined8 * FUN_100296484(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Product PVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  
  uVar16 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar16;
  _swift_release(uVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar19 = *(long *)(DVar8.unknown + -8);
  pcVar18 = *(code **)(lVar19 + 0x30);
  puVar9 = puVar1 + iVar5;
  (*pcVar18)(puVar9,1,DVar8.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar18)(puVar10,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar19 + 8))(puVar1 + iVar5,DVar8.unknown);
      goto LAB_100296570;
    }
    (**(code **)(lVar19 + 0x28))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar19 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
    (**(code **)(lVar19 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
  }
  else {
LAB_100296570:
    puVar11 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar12 = 0;
  FUN_1002abbf0();
  lVar17 = *(long *)(lVar12 + -8);
  pcVar18 = *(code **)(lVar17 + 0x30);
  puVar13 = puVar3;
  (*pcVar18)(puVar3,1,lVar12);
  puVar14 = puVar4;
  (*pcVar18)(puVar4,1,lVar12);
  if ((int)puVar13 == 0) {
    if ((int)puVar14 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar13 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar12);
        if ((int)puVar13 == 2) {
          uVar16 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar16;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar18 = *(code **)(lVar19 + 0x20);
          (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,2);
        }
        else if ((int)puVar13 == 1) {
          uVar16 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar16;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar18 = *(code **)(lVar19 + 0x20);
          (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,1);
        }
        else {
          (**(code **)(lVar19 + 0x20))(puVar3,puVar4,DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,0);
        }
      }
      goto LAB_100296794;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar14 == 0) {
    puVar13 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar12);
    if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
      uVar16 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar11 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar18 = *(code **)(lVar19 + 0x20);
      (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
      (*pcVar18)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
    }
    else {
      (**(code **)(lVar19 + 0x20))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar12,puVar13);
    (**(code **)(lVar17 + 0x38))(puVar3,0,1,lVar12);
    goto LAB_100296794;
  }
  puVar11 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_100296794:
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar15 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar15.unknown + -8) + 0x28))(puVar1 + iVar5,puVar2 + iVar5,PVar15.unknown)
  ;
  puVar11 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  iVar5 = *(int *)(puVar11 + 0x1c);
  uVar16 = *(undefined8 *)(puVar1 + iVar5);
  *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
  _swift_release(uVar16);
  return param_1;
}



/* Address: 0x100296898 | FUN_100296898 */

void FUN_100296898(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002968a4 | FUN_1002968a4 */

ulong FUN_1002968a4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00010029692c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x100296930 | FUN_100296930 */

void FUN_100296930(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10029693c | FUN_10029693c */

void FUN_10029693c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
                    /* WARNING: Could not recover jumptable at 0x0001002969b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1002969bc | FUN_1002969bc */

void FUN_1002969bc(undefined8 param_1)

{
  if (DAT_100fbab08 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caa7e0);
  return;
}



/* Address: 0x1002969f4 | FUN_1002969f4 */

void FUN_1002969f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c3b3c8;
  lVar1 = 0x13f;
  FUN_100296a68();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100296a68 | FUN_100296a68 */

void FUN_100296a68(void)

{
  long lVar1;
  State SVar2;
  
  if (DAT_100fbab18.unknown == (undefined *)0x0) {
    lVar1 = 0xff;
    FUN_1002abb94();
    SVar2 = SwiftUI::State::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fbab18 = SVar2;
    }
  }
  return;
}



/* Address: 0x100296abc | FUN_100296abc */

void FUN_100296abc(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa808,1);
  return;
}


