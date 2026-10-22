/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001fbd10 | FUN_1001fbd10 */

undefined1  [16] FUN_1001fbd10(void)

{
  return ZEXT816(0x100ec0518);
}



/* Address: 0x1001fbd20 | FUN_1001fbd20 */

void FUN_1001fbd20(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7df4,1);
  return;
}



/* Address: 0x1001fbd30 | FUN_1001fbd30 */

void FUN_1001fbd30(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  Design DVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Label LVar10;
  Font FVar11;
  Font FVar12;
  undefined7 extraout_var;
  Set _all;
  Set SVar13;
  Alignment AVar14;
  long extraout_x8;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 auStack_f0 [2];
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
  
  puVar5 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "PasteUI/ActionButtonStyle.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ActionButtonStyle.swift",0x1f,1,100,UVar8.unknown,puVar7);
  }
  LVar10 = SwiftUI::PrimitiveButtonStyleConfiguration::get_label
                     ((PrimitiveButtonStyleConfiguration)pcVar9);
  if ((param_7 & 0xfe) == 0) {
    SwiftUI::Font::Weight::get_medium((Weight)LVar10.unknown);
    DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar4.value) + -8) + 0x38))
              ((long)&local_e0 + lVar3,1,1,CONCAT71(extraout_var,DVar4.value));
    FVar12 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_1001fab44((long)&local_e0 + lVar3);
  }
  else {
    FVar11 = SwiftUI::Font::get_body(LVar10.unknown);
    FVar12 = SwiftUI::Font::bold(FVar11);
    _swift_release(FVar11.unknown);
  }
  puVar5 = &DAT_100c35330;
  _swift_getKeyPath();
  SVar13.unknown = &DAT_100fb6328;
  FUN_1000037f0(&DAT_100fb6328,&DAT_100c35410);
  iVar2 = *(int *)(SVar13.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = puVar5;
  ((undefined8 *)(param_1 + iVar2))[1] = FVar12.unknown;
  _all = SwiftUI::Edge::Set::get_horizontal(SVar13);
  uVar15 = *(undefined8 *)(&DAT_100c35440 + (param_7 & 0xff) * 8);
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar13.unknown = &DAT_100fb6318;
  uVar16 = param_3;
  uVar17 = param_4;
  uVar18 = param_5;
  FUN_1000037f0(&DAT_100fb6318,&DAT_100c35408);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar13.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar13 = SwiftUI::Edge::Set::get_vertical(SVar13);
  uVar15 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  AVar14.unknown = &DAT_100fb6308;
  puVar5 = &DAT_100c35400;
  FUN_1000037f0();
  puVar1 = (undefined1 *)(param_1 + *(int *)(AVar14.unknown + 0x24));
  *puVar1 = (char)SVar13.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  *(undefined **)((long)auStack_f0 + lVar3) = AVar14.unknown;
  *(undefined **)((long)auStack_f0 + lVar3 + 8) = puVar5;
  auStack_f8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_100 + lVar3) = 0;
  auStack_108[lVar3] = 1;
  *(undefined8 *)((long)&uStack_110 + lVar3) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _swift_release(pMVar6);
  puVar5 = &DAT_100fb62f0;
  FUN_1000037f0(&DAT_100fb62f0,&DAT_100c353f8);
  puVar7 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  puVar7[9] = uStack_98;
  puVar7[8] = local_a0;
  puVar7[0xb] = uStack_88;
  puVar7[10] = uStack_90;
  puVar7[0xd] = uStack_78;
  puVar7[0xc] = local_80;
  puVar7[1] = uStack_d8;
  *puVar7 = local_e0;
  puVar7[3] = uStack_c8;
  puVar7[2] = uStack_d0;
  puVar7[5] = uStack_b8;
  puVar7[4] = local_c0;
  puVar7[7] = uStack_a8;
  puVar7[6] = uStack_b0;
  return;
}



/* Address: 0x1001fc020 | FUN_1001fc020 */

void FUN_1001fc020(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  PrimitiveButtonStyleConfiguration PVar4;
  undefined *puVar5;
  PrimitiveButtonStyleConfiguration PVar6;
  GlassButtonStyle GVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  long extraout_x8_01;
  undefined1 *unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  
  local_88 = param_1;
  PVar4 = SwiftUI::PrimitiveButtonStyleConfiguration::typeMetadataAccessor();
  lVar13 = *(long *)(PVar4.unknown + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)&local_a0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fb62e0;
  FUN_1000037f0(&DAT_100fb62e0,&DAT_100c353e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar6.unknown = &DAT_100fb62e8;
  FUN_1000037f0(&DAT_100fb62e8,&DAT_100c353f0);
  local_90 = *(long *)(PVar6.unknown + -8);
  local_98 = PVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (lVar11 - extraout_x8) - extraout_x8_00;
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  local_a0 = lVar9;
  SwiftUI::PrimitiveButtonStyleConfiguration::_get_role(PVar6);
  (**(code **)(lVar13 + 0x10))(lVar11,param_2,PVar4.unknown);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100ec0548;
  _swift_allocObject(&DAT_100ec0548,uVar12 + lVar14,uVar10 | 7);
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar12,lVar11,PVar4.unknown);
  local_70 = param_2;
  local_68 = uVar1;
  local_67 = uVar2;
  FUN_1000037f0(&DAT_100fb62f0,&DAT_100c353f8);
  FUN_1001fd0d0();
  lVar13 = local_a0;
  SwiftUI::Button::_init();
  GVar7 = SwiftUI::GlassButtonStyle::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaa998;
  lVar11 = *(long *)(GVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::GlassButtonStyle::init();
  puVar5 = &DAT_100fb6338;
  FUN_100016eac(&DAT_100fb6338,&DAT_100fb62e8,&DAT_100c353f0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar8 = &DAT_100fb6340;
  FUN_100003a00(&DAT_100fb6340,puVar3,
                PTR_SwiftUI__SwiftUI__GlassButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa988);
  puVar3 = local_98;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_88,lVar9,local_98,GVar7.unknown,puVar5,puVar8);
  (**(code **)(lVar11 + 8))(lVar9,GVar7.unknown);
  (**(code **)(local_90 + 8))(lVar13,puVar3);
  return;
}



/* Address: 0x1001fc2a8 | FUN_1001fc2a8 */

void FUN_1001fc2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/ActionButtonStyle.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ActionButtonStyle.swift",0x1f,1,param_2,UVar4.unknown,puVar3);
  }
  SwiftUI::PrimitiveButtonStyleConfiguration::trigger((PrimitiveButtonStyleConfiguration)pcVar5);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001fc35c | FUN_1001fc35c */

void FUN_1001fc35c(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  Design DVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Label LVar10;
  Font FVar11;
  Font FVar12;
  undefined7 extraout_var;
  Set _all;
  Set SVar13;
  Alignment AVar14;
  long extraout_x8;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 auStack_f0 [2];
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
  
  puVar5 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "PasteUI/ActionButtonStyle.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/ActionButtonStyle.swift",0x1f,1,0x77,UVar8.unknown,puVar7);
  }
  LVar10 = SwiftUI::PrimitiveButtonStyleConfiguration::get_label
                     ((PrimitiveButtonStyleConfiguration)pcVar9);
  if ((param_7 & 0xfe) == 0) {
    SwiftUI::Font::Weight::get_medium((Weight)LVar10.unknown);
    DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar4.value) + -8) + 0x38))
              ((long)&local_e0 + lVar3,1,1,CONCAT71(extraout_var,DVar4.value));
    FVar12 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_1001fab44((long)&local_e0 + lVar3);
  }
  else {
    FVar11 = SwiftUI::Font::get_body(LVar10.unknown);
    FVar12 = SwiftUI::Font::bold(FVar11);
    _swift_release(FVar11.unknown);
  }
  puVar5 = &DAT_100c35330;
  _swift_getKeyPath();
  SVar13.unknown = &DAT_100fb6328;
  FUN_1000037f0(&DAT_100fb6328,&DAT_100c35410);
  iVar2 = *(int *)(SVar13.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = puVar5;
  ((undefined8 *)(param_1 + iVar2))[1] = FVar12.unknown;
  _all = SwiftUI::Edge::Set::get_horizontal(SVar13);
  uVar15 = *(undefined8 *)(&DAT_100c35440 + (param_7 & 0xff) * 8);
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar13.unknown = &DAT_100fb6318;
  uVar16 = param_3;
  uVar17 = param_4;
  uVar18 = param_5;
  FUN_1000037f0(&DAT_100fb6318,&DAT_100c35408);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar13.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar13 = SwiftUI::Edge::Set::get_vertical(SVar13);
  uVar15 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  AVar14.unknown = &DAT_100fb6308;
  puVar5 = &DAT_100c35400;
  FUN_1000037f0();
  puVar1 = (undefined1 *)(param_1 + *(int *)(AVar14.unknown + 0x24));
  *puVar1 = (char)SVar13.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  *(undefined **)((long)auStack_f0 + lVar3) = AVar14.unknown;
  *(undefined **)((long)auStack_f0 + lVar3 + 8) = puVar5;
  auStack_f8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_100 + lVar3) = 0;
  auStack_108[lVar3] = 1;
  *(undefined8 *)((long)&uStack_110 + lVar3) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _swift_release(pMVar6);
  puVar5 = &DAT_100fb62f0;
  FUN_1000037f0(&DAT_100fb62f0,&DAT_100c353f8);
  puVar7 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  puVar7[9] = uStack_98;
  puVar7[8] = local_a0;
  puVar7[0xb] = uStack_88;
  puVar7[10] = uStack_90;
  puVar7[0xd] = uStack_78;
  puVar7[0xc] = local_80;
  puVar7[1] = uStack_d8;
  *puVar7 = local_e0;
  puVar7[3] = uStack_c8;
  puVar7[2] = uStack_d0;
  puVar7[5] = uStack_b8;
  puVar7[4] = local_c0;
  puVar7[7] = uStack_a8;
  puVar7[6] = uStack_b0;
  return;
}



/* Address: 0x1001fc64c | FUN_1001fc64c */

void FUN_1001fc64c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  PrimitiveButtonStyleConfiguration PVar4;
  undefined *puVar5;
  PrimitiveButtonStyleConfiguration PVar6;
  GlassProminentButtonStyle GVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  long extraout_x8_01;
  undefined1 *unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  
  local_88 = param_1;
  PVar4 = SwiftUI::PrimitiveButtonStyleConfiguration::typeMetadataAccessor();
  lVar13 = *(long *)(PVar4.unknown + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)&local_a0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fb62e0;
  FUN_1000037f0(&DAT_100fb62e0,&DAT_100c353e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar6.unknown = &DAT_100fb62e8;
  FUN_1000037f0(&DAT_100fb62e8,&DAT_100c353f0);
  local_90 = *(long *)(PVar6.unknown + -8);
  local_98 = PVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (lVar11 - extraout_x8) - extraout_x8_00;
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  local_a0 = lVar9;
  SwiftUI::PrimitiveButtonStyleConfiguration::_get_role(PVar6);
  (**(code **)(lVar13 + 0x10))(lVar11,param_2,PVar4.unknown);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100ec0570;
  _swift_allocObject(&DAT_100ec0570,uVar12 + lVar14,uVar10 | 7);
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar12,lVar11,PVar4.unknown);
  local_70 = param_2;
  local_68 = uVar1;
  local_67 = uVar2;
  FUN_1000037f0(&DAT_100fb62f0,&DAT_100c353f8);
  FUN_1001fd0d0();
  lVar13 = local_a0;
  SwiftUI::Button::_init();
  GVar7 = SwiftUI::GlassProminentButtonStyle::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eab050;
  lVar11 = *(long *)(GVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::GlassProminentButtonStyle::init();
  puVar5 = &DAT_100fb6338;
  FUN_100016eac(&DAT_100fb6338,&DAT_100fb62e8,&DAT_100c353f0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar8 = &DAT_100fb6348;
  FUN_100003a00(&DAT_100fb6348,puVar3,
                PTR_SwiftUI__SwiftUI__GlassProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab040
               );
  puVar3 = local_98;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_88,lVar9,local_98,GVar7.unknown,puVar5,puVar8);
  (**(code **)(lVar11 + 8))(lVar9,GVar7.unknown);
  (**(code **)(local_90 + 8))(lVar13,puVar3);
  return;
}



/* Address: 0x1001fc8d4 | FUN_1001fc8d4 */

void FUN_1001fc8d4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7dcc,1);
  return;
}



/* Address: 0x1001fc8e4 | FUN_1001fc8e4 */

void FUN_1001fc8e4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7da4,1);
  return;
}



/* Address: 0x1001fc8f4 | FUN_1001fc8f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001fc8f4(undefined8 *param_1,char param_2)

{
  NSColor *pNVar1;
  undefined8 local_70;
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  
  if (param_2 == '\0') {
    pNVar1 = (NSColor *)NSColor::systemBlueColor((ID)&_OBJC_CLASS___NSColor);
    local_50 = (undefined *)SwiftUI::Color::init(pNVar1);
    local_48 = 0;
  }
  else {
    if (param_2 != '\x01') {
      if (DAT_100fb7170 != -1) {
        _swift_once(&DAT_100fb7170,FUN_100219318);
      }
      SwiftUI::Color::init(DAT_101057888);
      FUN_1000037f0(&DAT_100fb62d0,&DAT_100c353e0);
      FUN_1001fd050();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)0xa0);
      goto LAB_1001fca80;
    }
    pNVar1 = (NSColor *)NSColor::windowBackgroundColor((ID)&_OBJC_CLASS___NSColor);
    local_50 = (undefined *)SwiftUI::Color::init(pNVar1);
    local_48 = 1;
  }
  _swift_retain();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)0xb0);
  _swift_retain(local_70);
  FUN_1000037f0(&DAT_100fb62d0,&DAT_100c353e0);
  FUN_1001fd050();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)0xa0);
  _swift_release(local_70);
  _swift_release(local_50);
LAB_1001fca80:
  *param_1 = local_50;
  *(undefined1 *)(param_1 + 1) = local_48;
  *(undefined1 *)((long)param_1 + 9) = local_47;
  return;
}



/* Address: 0x1001fcac8 | FUN_1001fcac8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fcac8(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ButtonStyleConfiguration param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  Design DVar6;
  bool bVar7;
  byte bVar8;
  RoundedCornerStyle RVar9;
  Label LVar10;
  Font FVar11;
  Font FVar12;
  undefined *puVar13;
  undefined7 extraout_var;
  Set SVar14;
  undefined7 extraout_var_00;
  Color CVar15;
  Color CVar16;
  undefined *puVar17;
  ButtonStyleConfiguration BVar18;
  RoundedRectangle RVar19;
  undefined7 extraout_var_01;
  Alignment AVar20;
  NSColor *pNVar21;
  UnitPoint UVar22;
  long extraout_x8;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined7 extraout_var_02;
  
  LVar10 = SwiftUI::ButtonStyleConfiguration::get_label(param_6);
  if ((param_7 & 0xfe00) == 0) {
    SwiftUI::Font::Weight::get_medium((Weight)LVar10.unknown);
    puVar13 = &DAT_100fb6248;
    FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar6.value) + -8) + 0x38))
              (auStack_110 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar6.value));
    FVar12 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_1001fab44(auStack_110 + -extraout_x8);
  }
  else {
    FVar11 = SwiftUI::Font::get_body(LVar10.unknown);
    FVar12 = SwiftUI::Font::bold(FVar11);
    _swift_release(FVar11.unknown);
  }
  puVar13 = &DAT_100c35330;
  _swift_getKeyPath();
  SVar14.unknown = &DAT_100fb6280;
  FUN_1000037f0(&DAT_100fb6280,&DAT_100c35360);
  iVar5 = *(int *)(SVar14.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar5) = puVar13;
  ((undefined8 *)(param_1 + iVar5))[1] = FVar12.unknown;
  SVar14 = SwiftUI::Edge::Set::get_horizontal(SVar14);
  uVar23 = *(undefined8 *)(&DAT_100c35440 + (ulong)(param_7 >> 8 & 0xff) * 8);
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  AVar20.unknown = &DAT_100fb6288;
  FUN_1000037f0();
  puVar1 = (undefined1 *)(param_1 + *(int *)(AVar20.unknown + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar23;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  BVar18.unknown = &DAT_100fb6290;
  FUN_1000037f0(&DAT_100fb6290,&DAT_100c35370);
  puVar2 = (undefined8 *)(param_1 + *(int *)(BVar18.unknown + 0x24));
  puVar2[9] = uStack_b0;
  puVar2[8] = local_b8;
  puVar2[0xb] = uStack_a0;
  puVar2[10] = local_a8;
  puVar2[0xd] = uStack_90;
  puVar2[0xc] = local_98;
  puVar2[1] = uStack_f0;
  *puVar2 = local_f8;
  puVar2[3] = uStack_e0;
  puVar2[2] = local_e8;
  puVar2[5] = uStack_d0;
  puVar2[4] = local_d8;
  puVar2[7] = uStack_c0;
  puVar2[6] = local_c8;
  CVar16.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar18);
  CVar16.unknown._1_7_ = extraout_var_00;
  if ((param_7 & 0xff) == 0) {
    dVar25 = 0.9;
    CVar15 = SwiftUI::Color::get_white(CVar16);
  }
  else {
    if (DAT_100fb7178 != -1) {
      _swift_once(&DAT_100fb7178,FUN_100218db4);
    }
    CVar15 = SwiftUI::Color::init(DAT_101057860);
    dVar25 = 0.5;
  }
  if (!CVar16.unknown._0_1_) {
    dVar25 = 1.0;
  }
  CVar16 = SwiftUI::Color::opacity(dVar25,CVar15);
  _swift_release(CVar15.unknown);
  puVar13 = &DAT_100c35378;
  _swift_getKeyPath();
  puVar17 = &DAT_100fb6298;
  FUN_1000037f0(&DAT_100fb6298,&DAT_100c353a8);
  iVar5 = *(int *)(puVar17 + 0x24);
  *(undefined8 *)(param_1 + iVar5) = puVar13;
  ((undefined8 *)(param_1 + iVar5))[1] = CVar16.unknown;
  BVar18.unknown = (undefined *)(ulong)(param_7 & 0x1ffff);
  FUN_1001fc8f4(&local_108);
  bVar7 = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar18);
  uVar23 = 0xbfb999999999999a;
  if (!bVar7) {
    uVar23 = 0;
  }
  if ((param_7 & 0xfe00) == 0) {
    uVar26 = 0x4059000000000000;
  }
  else {
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    uVar26 = 0x4034000000000000;
    if ((bVar8 & 1) == 0) {
      uVar26 = 0x4024000000000000;
    }
  }
  puVar13 = &DAT_100fb62a0;
  FUN_1000037f0(&DAT_100fb62a0,&DAT_100c353b0);
  puVar2 = (undefined8 *)(param_1 + *(int *)(puVar13 + 0x24));
  puVar13 = &DAT_100fb62a8;
  FUN_1000037f0(&DAT_100fb62a8,&DAT_100c353b8);
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x24));
  RVar19 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar5 = *(int *)(RVar19.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar9 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_01,RVar9.value) + -8) + 0x68))
            ((long)puVar3 + (long)iVar5,uVar4,CONCAT71(extraout_var_01,RVar9.value));
  *puVar3 = uVar26;
  puVar3[1] = uVar26;
  AVar20.unknown = &DAT_100fb62b0;
  puVar13 = &DAT_100c353c0;
  FUN_1000037f0();
  *(undefined2 *)((long)puVar3 + (long)*(int *)(AVar20.unknown + 0x24)) = 0x100;
  *puVar2 = local_108;
  *(undefined1 *)(puVar2 + 1) = local_100;
  *(undefined1 *)((long)puVar2 + 9) = local_ff;
  puVar2[2] = uVar23;
  AVar20 = SwiftUI::Alignment::get_center(AVar20);
  CVar16.unknown = &DAT_100fb62b8;
  FUN_1000037f0(&DAT_100fb62b8,&DAT_100c353c8);
  iVar5 = *(int *)(CVar16.unknown + 0x24);
  *(undefined8 *)((long)puVar2 + (long)iVar5) = AVar20.unknown;
  ((undefined8 *)((long)puVar2 + (long)iVar5))[1] = puVar13;
  if ((param_7 & 0xff) == 0) {
    pNVar21 = (NSColor *)NSColor::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
    CVar15 = SwiftUI::Color::init(pNVar21);
    CVar16 = SwiftUI::Color::opacity(0.25,CVar15);
    _swift_release(CVar15.unknown);
  }
  else {
    CVar16 = SwiftUI::Color::get_clear(CVar16);
  }
  BVar18.unknown = &DAT_100fb62c0;
  FUN_1000037f0(&DAT_100fb62c0,&DAT_100c353d0);
  puVar2 = (undefined8 *)(param_1 + *(int *)(BVar18.unknown + 0x24));
  *puVar2 = CVar16.unknown;
  puVar2[2] = 0;
  puVar2[1] = 0x3ff0000000000000;
  puVar2[3] = 0x3fe8000000000000;
  UVar22.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar18);
  UVar22.unknown._1_7_ = extraout_var_02;
  uVar26 = 0x3fefae147ae147ae;
  uVar24 = 0x3ff0000000000000;
  uVar23 = uVar26;
  if (!UVar22.unknown._0_1_) {
    uVar23 = 0x3ff0000000000000;
  }
  SwiftUI::UnitPoint::get_center(UVar22);
  puVar13 = &DAT_100fb62c8;
  FUN_1000037f0(&DAT_100fb62c8,&DAT_100c353d8);
  puVar2 = (undefined8 *)(param_1 + *(int *)(puVar13 + 0x24));
  *puVar2 = uVar23;
  puVar2[1] = uVar23;
  puVar2[2] = uVar26;
  puVar2[3] = uVar24;
  return;
}



/* Address: 0x1001fcfd4 | FUN_1001fcfd4 */

void FUN_1001fcfd4(undefined8 param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = 0x10000;
  if (unaff_x20[2] == 0) {
    uVar1 = 0;
  }
  FUN_1001fcac8(param_1,uVar1 | (uint)unaff_x20[1] << 8 | (uint)*unaff_x20);
  return;
}



/* Address: 0x1001fcff8 | FUN_1001fcff8 */

void FUN_1001fcff8(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1001fd020 | FUN_1001fd020 */

void FUN_1001fd020(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x1001fd048 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x1001fd04c | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x1001fd050 | FUN_1001fd050 */

void FUN_1001fd050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fb62d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62d0;
  FUN_100005c24(&DAT_100fb62d0,&DAT_100c353e0);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100eab708;
  puStack_18 = PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100eab708;
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_20);
  DAT_100fb62d8 = puVar2;
  return;
}



/* Address: 0x1001fd0b8 | thunk_FUN_1001fd2e8 */

void thunk_FUN_1001fd2e8(void)

{
  FUN_1001fd2e8();
  return;
}



/* Address: 0x1001fd0bc | FUN_1001fd0bc */

void FUN_1001fd0bc(void)

{
  FUN_1001fd348(0x62);
  return;
}



/* Address: 0x1001fd0c4 | FUN_1001fd0c4 */

void FUN_1001fd0c4(void)

{
  FUN_1001fd394(FUN_1001fbd30);
  return;
}



/* Address: 0x1001fd0d0 | FUN_1001fd0d0 */

void FUN_1001fd0d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb62f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62f0;
  FUN_100005c24(&DAT_100fb62f0,&DAT_100c353f8);
  puVar2 = puVar1;
  FUN_1001fd148();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb62f8 = puVar3;
  return;
}



/* Address: 0x1001fd148 | FUN_1001fd148 */

void FUN_1001fd148(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6308;
  FUN_100005c24(&DAT_100fb6308,&DAT_100c35400);
  puVar2 = puVar1;
  FUN_1001fd1c0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6300 = puVar3;
  return;
}



/* Address: 0x1001fd1c0 | FUN_1001fd1c0 */

void FUN_1001fd1c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6318;
  FUN_100005c24(&DAT_100fb6318,&DAT_100c35408);
  puVar2 = puVar1;
  FUN_1001fd238();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6310 = puVar3;
  return;
}



/* Address: 0x1001fd238 | FUN_1001fd238 */

void FUN_1001fd238(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6328;
  FUN_100005c24(&DAT_100fb6328,&DAT_100c35410);
  puVar2 = &DAT_100fb6330;
  FUN_100003a00(&DAT_100fb6330,PTR_typeMetadataAccessor_100eab120,
                PTR_SwiftUI__SwiftUI__PrimitiveButtonStyleConfiguration__Label_>SwiftUI__View_100eab118
               );
  puVar3 = &DAT_100fb6258;
  FUN_100016eac(&DAT_100fb6258,&DAT_100fb6250,&DAT_100c35108,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6320 = puVar4;
  return;
}



/* Address: 0x1001fd2e8 | FUN_1001fd2e8 */

void FUN_1001fd2e8(void)

{
  PrimitiveButtonStyleConfiguration PVar1;
  ulong uVar2;
  long unaff_x20;
  
  PVar1 = SwiftUI::PrimitiveButtonStyleConfiguration::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(PVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(PVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),PVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001fd340 | FUN_1001fd340 */

void FUN_1001fd340(void)

{
  FUN_1001fd348(0x75);
  return;
}



/* Address: 0x1001fd348 | FUN_1001fd348 */

void FUN_1001fd348(undefined8 param_1)

{
  PrimitiveButtonStyleConfiguration PVar1;
  long unaff_x20;
  
  PVar1 = SwiftUI::PrimitiveButtonStyleConfiguration::typeMetadataAccessor();
  FUN_1001fc2a8(unaff_x20 +
                ((ulong)*(byte *)(*(long *)(PVar1.unknown + -8) + 0x50) + 0x10 &
                ((ulong)*(byte *)(*(long *)(PVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)),
                param_1);
  return;
}



/* Address: 0x1001fd388 | FUN_1001fd388 */

void FUN_1001fd388(void)

{
  FUN_1001fd394(FUN_1001fc35c);
  return;
}



/* Address: 0x1001fd394 | FUN_1001fd394 */

void FUN_1001fd394(code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001fd3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x20 + 0x10),uVar1 | *(byte *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1001fd3b8 | thunk_FUN_1001fd3bc */

void thunk_FUN_1001fd3bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb6350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62c8;
  FUN_100005c24(&DAT_100fb62c8,&DAT_100c353d8);
  puVar2 = puVar1;
  FUN_1001fd434();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ScaleEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa6e8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb6350 = puVar3;
  return;
}



/* Address: 0x1001fd3bc | FUN_1001fd3bc */

void FUN_1001fd3bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62c8;
  FUN_100005c24(&DAT_100fb62c8,&DAT_100c353d8);
  puVar2 = puVar1;
  FUN_1001fd434();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ScaleEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa6e8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6350 = puVar3;
  return;
}



/* Address: 0x1001fd434 | FUN_1001fd434 */

void FUN_1001fd434(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62c0;
  FUN_100005c24(&DAT_100fb62c0,&DAT_100c353d0);
  puVar2 = puVar1;
  FUN_1001fd4ac();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ShadowEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa7b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6358 = puVar3;
  return;
}



/* Address: 0x1001fd4ac | FUN_1001fd4ac */

void FUN_1001fd4ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb62a0;
  FUN_100005c24(&DAT_100fb62a0,&DAT_100c353b0);
  puVar2 = puVar1;
  FUN_1001fd544();
  puVar3 = &DAT_100fb63a0;
  FUN_100016eac(&DAT_100fb63a0,&DAT_100fb62b8,&DAT_100c353c8,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6360 = puVar4;
  return;
}



/* Address: 0x1001fd544 | FUN_1001fd544 */

void FUN_1001fd544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined8 *puStack_28;
  
  if (DAT_100fb6368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6298;
  FUN_100005c24(&DAT_100fb6298,&DAT_100c353a8);
  puVar2 = puVar1;
  FUN_1001fd5dc();
  puVar3 = &DAT_100fb6390;
  FUN_100016eac(&DAT_100fb6390,&DAT_100fb6398,&DAT_100c35418,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6368 = puVar4;
  return;
}



/* Address: 0x1001fd5dc | FUN_1001fd5dc */

void FUN_1001fd5dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6290;
  FUN_100005c24(&DAT_100fb6290,&DAT_100c35370);
  puVar2 = puVar1;
  FUN_1001fd654();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6370 = puVar3;
  return;
}



/* Address: 0x1001fd654 | FUN_1001fd654 */

void FUN_1001fd654(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6288;
  FUN_100005c24(&DAT_100fb6288,&DAT_100c35368);
  puVar2 = puVar1;
  FUN_1001fd6cc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6378 = puVar3;
  return;
}



/* Address: 0x1001fd6cc | FUN_1001fd6cc */

void FUN_1001fd6cc(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6280;
  FUN_100005c24(&DAT_100fb6280,&DAT_100c35360);
  puVar2 = &DAT_100fb6388;
  FUN_100003a00(&DAT_100fb6388,PTR_typeMetadataAccessor_100eaaf98,
                PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90);
  puVar3 = &DAT_100fb6258;
  FUN_100016eac(&DAT_100fb6258,&DAT_100fb6250,&DAT_100c35108,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6380 = puVar4;
  return;
}



/* Address: 0x1001fd77c | FUN_1001fd77c */

void FUN_1001fd77c(undefined8 param_1)

{
  FUN_1001fd7b4(param_1,PTR_typeMetadataAccessor_100eaa998,&DAT_100fb6340,
                PTR_SwiftUI__SwiftUI__GlassButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa988);
  return;
}



/* Address: 0x1001fd798 | FUN_1001fd798 */

void FUN_1001fd798(undefined8 param_1)

{
  FUN_1001fd7b4(param_1,PTR_typeMetadataAccessor_100eab050,&DAT_100fb6348,
                PTR_SwiftUI__SwiftUI__GlassProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab040
               );
  return;
}



/* Address: 0x1001fd7b4 | FUN_1001fd7b4 */

void FUN_1001fd7b4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100fb62e8;
  FUN_100005c24(&DAT_100fb62e8,&DAT_100c353f0);
  uVar2 = 0xff;
  (*param_2)();
  puVar3 = &DAT_100fb6338;
  FUN_100016eac(&DAT_100fb6338,&DAT_100fb62e8,&DAT_100c353f0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  FUN_100003a00(param_3,param_2,param_4);
  local_70 = puVar1;
  uStack_68 = uVar2;
  local_60 = puVar3;
  uStack_58 = param_3;
  _swift_getOpaqueTypeConformance2
            (&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  return;
}



/* Address: 0x1001fd870 | thunk_FUN_1001a7d78 */

void thunk_FUN_1001a7d78(void)

{
  FUN_1001a7d78();
  return;
}



/* Address: 0x1001fd874 | thunk_FUN_1001fbb34 */

void thunk_FUN_1001fbb34(void)

{
  thunk_FUN_1001fbb34();
  return;
}



/* Address: 0x1001fd878 | thunk_FUN_1001a7d88 */

void thunk_FUN_1001a7d88(void)

{
  FUN_1001a7d88();
  return;
}



/* Address: 0x1001fd87c | thunk_FUN_1000d13b8 */

void thunk_FUN_1000d13b8(void)

{
  thunk_FUN_1000d13b8();
  return;
}



/* Address: 0x1001fd880 | thunk_FUN_1001fba90 */

void thunk_FUN_1001fba90(void)

{
  thunk_FUN_1001fba90();
  return;
}



/* Address: 0x1001fd884 | thunk_FUN_1001a7dac */

void thunk_FUN_1001a7dac(void)

{
  thunk_FUN_1001a7dac();
  return;
}



/* Address: 0x1001fd888 | thunk_FUN_1001fd2e8 */

void thunk_FUN_1001fd2e8(void)

{
  thunk_FUN_1001fd2e8();
  return;
}



/* Address: 0x1001fd88c | FUN_1001fd88c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001fd88c(long param_1,ButtonStyleConfiguration param_2)

{
  int iVar1;
  bool bVar2;
  Color CVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  bVar2 = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_2);
  if (bVar2) {
    if (DAT_100fb63e0 != -1) {
      _swift_once(&DAT_100fb63e0,FUN_1001feab8);
    }
    puVar6 = &DAT_1010577c8;
  }
  else {
    if (DAT_100fb63e8 != -1) {
      _swift_once(&DAT_100fb63e8,FUN_1001fec34);
    }
    puVar6 = &DAT_1010577d0;
  }
  CVar3 = SwiftUI::Color::init((NSColor *)*puVar6);
  SwiftUI::ButtonStyleConfiguration::get_label((ButtonStyleConfiguration)CVar3.unknown);
  puVar4 = &DAT_100c35470;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb63a8;
  FUN_1000037f0(&DAT_100fb63a8,&DAT_100c354a0);
  iVar1 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = puVar4;
  ((undefined8 *)(param_1 + iVar1))[1] = CVar3.unknown;
  return;
}



/* Address: 0x1001fd968 | FUN_1001fd968 */

void FUN_1001fd968(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_foregroundColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1001fd990 | FUN_1001fd990 */

void FUN_1001fd990(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_foregroundColor(param_2);
  return;
}



/* Address: 0x1001fd9b8 | FUN_1001fd9b8 */

void FUN_1001fd9b8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca7e38,1);
  return;
}



/* Address: 0x1001fd9c8 | FUN_1001fd9c8 */

undefined1  [16] FUN_1001fd9c8(void)

{
  return ZEXT816(0x100ec0628);
}



/* Address: 0x1001fd9d8 | thunk_FUN_1001fd9dc */

void thunk_FUN_1001fd9dc(void)

{
  FUN_1001fd9dc();
  return;
}



/* Address: 0x1001fd9dc | FUN_1001fd9dc */

void FUN_1001fd9dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb63b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb63a8;
  FUN_100005c24(&DAT_100fb63a8,&DAT_100c354a0);
  puVar2 = puVar1;
  FUN_1001fda54();
  puVar3 = puVar2;
  FUN_1001fda98();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb63b0 = puVar4;
  return;
}



/* Address: 0x1001fda54 | FUN_1001fda54 */

void FUN_1001fda54(void)

{
  Label LVar1;
  undefined *puVar2;
  
  if (DAT_100fb6388 != (undefined *)0x0) {
    return;
  }
  LVar1 = SwiftUI::ButtonStyleConfiguration::Label::typeMetadataAccessor();
  puVar2 = PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90,
             LVar1.unknown);
  DAT_100fb6388 = puVar2;
  return;
}



/* Address: 0x1001fda98 | FUN_1001fda98 */

void FUN_1001fda98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb6390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6398;
  FUN_100005c24(&DAT_100fb6398,&DAT_100c35418);
  puVar2 = 
  PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
             ,puVar1);
  DAT_100fb6390 = puVar2;
  return;
}



/* Address: 0x1001fdae8 | FUN_1001fdae8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001fdae8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  ID unaff_x20;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"layout");
  if (DAT_100fb63f0 != -1) {
    _swift_once(&DAT_100fb63f0,FUN_1001ff12c);
  }
  uVar3 = DAT_1010577e8;
  FUN_1001fe000(0x4020000000000000,0x4020000000000000,DAT_1010577e8);
  IVar4 = NSColor::colorWithPatternImage_((ID)&_OBJC_CLASS___NSColor,uVar3);
  lVar1 = _TtC7PasteUI15LayerBackedView::backgroundColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor,auStack_78,1,0);
  *(ID *)(unaff_x20 + lVar1) = IVar4;
  IVar4 = objc_stub::effectiveAppearance(unaff_x20);
  puVar5 = &DAT_100ec0678;
  _swift_allocObject(&DAT_100ec0678,0x18,7);
  *(ID *)(puVar5 + 0x10) = unaff_x20;
  puVar6 = &DAT_100ec06a0;
  _swift_allocObject(&DAT_100ec06a0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1001fe108;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  local_88 = FUN_1000386a0;
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_1000d5218;
  puStack_90 = &DAT_100ec06b8;
  local_80 = puVar6;
  aBlock = __Block_copy(&local_a8);
  puVar7 = local_80;
  _swift_retain(puVar6);
  _swift_release(puVar7);
  objc_stub::performAsCurrentDrawingAppearance_(IVar4,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x7e,0x21,0x3f,1);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    IVar4 = objc_stub::layer(unaff_x20);
    if (IVar4 != 0) {
      objc_stub::setContentsGravity_(IVar4,*(undefined8 *)PTR__kCAGravityResizeAspectFill_100eaa3a8)
      ;
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001fdd2c);
  (*pcVar2)();
}



/* Address: 0x1001fdd2c | _TtC7PasteUI16CheckerboardView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI16CheckerboardView::layout(ID param_1,SEL param_2)

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
              ("PasteUI/CheckerboardView.swift",0x1e,1,10,UVar3.unknown,pMVar1);
  }
  FUN_1001fdae8(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001fddc8 | FUN_1001fddc8 */

void FUN_1001fddc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x1001fddfc | _TtC7PasteUI16CheckerboardView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI16CheckerboardView::init(ID param_1,SEL param_2)

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
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CheckerboardView.swift",0x1e,1,8,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"init");
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1001fdeb4 | FUN_1001fdeb4 */

void FUN_1001fdeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",param_1,param_2,
                      param_3,param_4);
  return;
}



/* Address: 0x1001fdf18 | _TtC7PasteUI16CheckerboardView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI16CheckerboardView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_70;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CheckerboardView.swift",0x1e,1,8,UVar4.unknown,pMVar2);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1001fe000 | FUN_1001fe000 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001fe000(double param_1,double param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithSize_((ID)self,param_1 + param_1,param_2 + param_2);
  objc_stub::lockFocus(self_00);
  objc_stub::setFill(param_3);
  IVar1 = NSBezierPath::bezierPathWithRect_((ID)&_OBJC_CLASS___NSBezierPath,0,0,param_1,param_2);
  NSBezierPath::fill(IVar1);
  IVar1 = NSBezierPath::bezierPathWithRect_
                    ((ID)&_OBJC_CLASS___NSBezierPath,param_1,param_2,param_1,param_2);
  NSBezierPath::fill(IVar1);
  objc_stub::unlockFocus(self_00);
  return self_00;
}



/* Address: 0x1001fe0e4 | FUN_1001fe0e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fe0e4(void)

{
  _swift_deallocObject();
  return;
}


