/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002701b0 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x1002701b4 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x1002701b8 | FUN_1002701b8 */

void FUN_1002701b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  ppuVar6 = &local_50;
  puVar1 = &DAT_100fb9638;
  FUN_100005c24(&DAT_100fb9638,&DAT_100c39518);
  puVar2 = &DAT_100fb96b8;
  FUN_100005c24(&DAT_100fb96b8,&DAT_100c39710);
  puVar3 = &DAT_100fb9640;
  FUN_100005c24(&DAT_100fb9640,&DAT_100c39520);
  puVar4 = puVar3;
  FUN_10026fdb4();
  puVar5 = puVar4;
  FUN_10026fe84();
  puStack_48 = &DAT_100ec4128;
  local_50 = puVar3;
  local_40 = puVar4;
  puStack_38 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  puVar7 = (undefined1 *)ppuVar6;
  FUN_10027027c();
  local_50 = puVar1;
  puStack_48 = puVar2;
  local_40 = (undefined *)ppuVar6;
  puStack_38 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  return;
}



/* Address: 0x10027027c | FUN_10027027c */

void FUN_10027027c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb96c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb96b8;
  FUN_100005c24(&DAT_100fb96b8,&DAT_100c39710);
  puVar2 = puVar1;
  FUN_10026ff40();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb96c0 = puVar3;
  return;
}



/* Address: 0x1002702f4 | thunk_FUN_10026ff14 */

void thunk_FUN_10026ff14(void)

{
  FUN_10026ff14();
  return;
}



/* Address: 0x1002702f8 | thunk_FUN_10026ff14 */

void thunk_FUN_10026ff14(void)

{
  FUN_10026ff14();
  return;
}



/* Address: 0x1002702fc | thunk_FUN_10026ff14 */

void thunk_FUN_10026ff14(void)

{
  FUN_10026ff14();
  return;
}



/* Address: 0x100270300 | thunk_FUN_10026ff14 */

void thunk_FUN_10026ff14(void)

{
  FUN_10026ff14();
  return;
}



/* Address: 0x100270304 | thunk_FUN_10026ffcc */

void thunk_FUN_10026ffcc(void)

{
  long unaff_x20;
  
  FUN_10026f8cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100270308 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10027030c | FUN_10027030c */

undefined1  [16] FUN_10027030c(void)

{
  return ZEXT816(0x100ec4bf8);
}



/* Address: 0x10027031c | FUN_10027031c */

void FUN_10027031c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9ef4,1);
  return;
}



/* Address: 0x10027032c | FUN_10027032c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100270728 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027032c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,Set param_9
                  )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  KeyboardShortcut KVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ControlSize CVar10;
  undefined *puVar11;
  LocalizedStringResource LVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  UnownedSerialExecutor UVar15;
  UnownedSerialExecutor UVar16;
  Text TVar17;
  Font FVar18;
  Text TVar19;
  Set _all;
  KeyboardShortcut KVar20;
  void *pvVar21;
  Text TVar22;
  undefined *puVar23;
  void *pvVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar25;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar26;
  code *pcVar27;
  undefined8 uVar28;
  String SVar29;
  String SVar30;
  undefined auStack_2b0 [8];
  LocalizedStringResource local_2a8;
  void *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined *local_280;
  undefined *local_278;
  long local_270;
  MainActor *local_268;
  KeyboardShortcut local_260;
  long local_258;
  long local_250;
  undefined *local_248;
  undefined *local_240;
  long local_238;
  long local_230;
  undefined *local_228;
  undefined8 *local_220;
  long local_218;
  long local_210;
  long local_208;
  undefined1 auStack_200 [80];
  char *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  void *pvStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  char *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  void *local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined1 local_100;
  void *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  String local_c0;
  undefined8 uStack_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  local_298 = param_6;
  local_290 = param_7;
  local_220 = param_1;
  local_248 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_258 = *(long *)(local_248 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_258 + 0x40));
  puVar23 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fb96d0;
  local_260.unknown = puVar23;
  FUN_1000037f0(&DAT_100fb96d0,&DAT_100c39790);
  local_280 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fb96d8;
  local_288 = puVar23 + -extraout_x8_00;
  FUN_1000037f0(&DAT_100fb96d8,&DAT_100c39798);
  local_278 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)(puVar23 + -extraout_x8_00) - extraout_x8_01;
  puVar11 = &DAT_100fb96e0;
  local_270 = lVar25;
  FUN_1000037f0(&DAT_100fb96e0,&DAT_100c397a0);
  local_238 = *(long *)(puVar11 + -8);
  local_228 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_238 + 0x40));
  lVar25 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_230 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar25 - extraout_x12;
  puVar11 = &DAT_100fb96e8;
  local_208 = lVar25;
  FUN_1000037f0(&DAT_100fb96e8,&DAT_100c39be0);
  local_210 = *(long *)(puVar11 + -8);
  local_240 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_210 + 0x40));
  lVar25 = lVar25 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_250 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar25 - extraout_x12_00;
  local_218 = lVar25;
  LVar12 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar12.unknown + -8) + 0x40));
  LVar12.unknown = (undefined *)(lVar25 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  pMVar13 = Swift::MainActor::typeMetadataAccessor();
  pMVar14 = Swift::MainActor::get_shared(pMVar13,pMVar13);
  pMVar13 = pMVar14;
  FUN_100270a58();
  local_268 = pMVar14;
  UVar15 = Swift::Actor::get_unownedExecutor();
  UVar16 = UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar16.unknown & 1) == 0) {
    param_8 = &DAT_00000001;
    param_9.unknown = &DAT_00000009;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/RestorePurchasesView.swift",0x31,1,9,UVar15.unknown,pMVar13);
  }
  FUN_1001cb954(LVar12.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar12);
  pvVar21 = local_c0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar21);
  SVar29.bridgeObject = (void *)0xe300000000000000;
  SVar29.str = (char *)0x2e2e2e;
  SVar30.bridgeObject = param_9.unknown;
  SVar30.str = param_8;
  Swift::String::append(SVar29,SVar30);
  _swift_bridgeObjectRelease();
  FUN_1002538a0();
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  local_2a0 = pvVar21;
  TVar17 = SwiftUI::Text::_init();
  FVar18 = SwiftUI::Font::get_headline(TVar17.unknown);
  TVar22 = TVar17;
  puVar23 = puVar11;
  pvVar24 = pvVar21;
  TVar19 = SwiftUI::Text::_font(FVar18.unknown);
  local_2a8.unknown = LVar12.unknown;
  _swift_release(FVar18.unknown);
  FUN_100016d74(TVar17.unknown,puVar11,pvVar21);
  _swift_bridgeObjectRelease();
  _all = SwiftUI::Edge::Set::get_top(param_9);
  uVar28 = 0x4031000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_150 = SUB81(puVar23,0);
  local_140 = SUB81(_all.unknown,0);
  local_128 = (undefined1)param_4;
  uStack_127 = (undefined7)((ulong)param_4 >> 8);
  uStack_120 = (undefined1)param_5;
  uStack_11f = (undefined7)((ulong)param_5 >> 8);
  uStack_118 = 0;
  local_c8 = 0;
  local_160 = (char *)TVar19;
  puStack_158 = TVar22.unknown;
  local_148 = pvVar24;
  uStack_138 = uVar28;
  uStack_130 = param_3;
  local_110 = TVar19.unknown;
  puStack_108 = TVar22.unknown;
  local_100 = local_150;
  local_f8 = pvVar24;
  local_f0 = local_140;
  local_e8 = uVar28;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_100270a9c(&local_160,&local_c0);
  FUN_100005808(&local_110,&DAT_100fb90e8,&DAT_100c397b0);
  lVar5 = local_218;
  (extension_SwiftUI)::SwiftUI::ProgressView::_init();
  LVar12.unknown = local_2a8.unknown;
  FUN_1001c0788(local_2a8.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar12);
  puVar11 = &DAT_100ec4c20;
  _swift_allocObject(&DAT_100ec4c20,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = local_298;
  *(undefined8 *)(puVar11 + 0x18) = local_290;
  _swift_retain();
  KVar20.unknown = local_288;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (local_288,puVar11,FUN_100270b10,puVar11,PTR___type_metadata_for_Swift_String_100eac208,
             local_2a0);
  puVar23 = local_280;
  iVar2 = *(int *)(local_280 + 0x24);
  puVar11 = &DAT_100fb90a0;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar3 = *(int *)(puVar11 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar10 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar25 = CONCAT71((int7)((ulong)puVar11 >> 8),CVar10.value);
  (**(code **)(*(long *)(lVar25 + -8) + 0x68))
            ((long)(KVar20.unknown + iVar2) + (long)iVar3,uVar1,lVar25);
  puVar11 = &DAT_100c397c0;
  _swift_getKeyPath();
  *(undefined **)(KVar20.unknown + iVar2) = puVar11;
  FUN_100270b20();
  lVar25 = local_270;
  FUN_10020558c(local_270,3,puVar23,puVar11);
  FUN_100005808(KVar20.unknown,&DAT_100fb96d0,&DAT_100c39790);
  KVar4.unknown = local_260.unknown;
  SwiftUI::KeyboardShortcut::get_cancelAction(KVar20);
  FUN_100270bd8();
  lVar9 = local_208;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar4);
  (**(code **)(local_258 + 8))(KVar4.unknown,local_248);
  FUN_100005808(lVar25,&DAT_100fb96d8,&DAT_100c39798);
  puVar23 = local_240;
  lVar25 = local_250;
  local_190 = CONCAT71(uStack_13f,local_140);
  uStack_188 = uStack_138;
  uStack_178 = local_128;
  uStack_180 = uStack_130;
  uStack_16f = CONCAT17(uStack_118,uStack_11f);
  local_177 = uStack_127;
  uStack_170 = uStack_120;
  uStack_1a0 = CONCAT71(uStack_14f,local_150);
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  pvStack_198 = local_148;
  pcVar26 = *(code **)(local_210 + 0x10);
  (*pcVar26)(local_250,lVar5,local_240);
  puVar7 = local_228;
  lVar6 = local_230;
  lVar5 = local_238;
  pcVar27 = *(code **)(local_238 + 0x10);
  (*pcVar27)(local_230,lVar9,local_228);
  puVar8 = local_220;
  uStack_98 = uStack_188;
  local_a0 = local_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_7f = uStack_16f;
  local_87 = local_177;
  uStack_80 = uStack_170;
  local_c0.bridgeObject = puStack_1a8;
  local_c0.str = local_1b0;
  pvStack_a8 = pvStack_198;
  uStack_b0 = uStack_1a0;
  local_220[5] = uStack_188;
  local_220[4] = local_190;
  local_220[7] = CONCAT71(local_177,uStack_178);
  local_220[6] = uStack_180;
  *(undefined8 *)((long)local_220 + 0x41) = uStack_16f;
  *(ulong *)((long)local_220 + 0x39) = CONCAT17(uStack_170,local_177);
  local_220[1] = puStack_1a8;
  *local_220 = local_1b0;
  local_220[3] = pvStack_198;
  local_220[2] = uStack_1a0;
  puVar11 = &DAT_100fb9760;
  FUN_1000037f0(&DAT_100fb9760,&DAT_100c39820);
  (*pcVar26)((long)puVar8 + (long)*(int *)(puVar11 + 0x30),lVar25,puVar23);
  (*pcVar27)((long)puVar8 + (long)*(int *)(puVar11 + 0x40),lVar6,puVar7);
  FUN_100270a9c(&local_c0,auStack_200);
  pcVar26 = *(code **)(lVar5 + 8);
  (*pcVar26)(local_208,puVar7);
  pcVar27 = *(code **)(local_210 + 8);
  (*pcVar27)(local_218,puVar23);
  (*pcVar26)(lVar6,puVar7);
  (*pcVar27)(lVar25,puVar23);
  FUN_100005808(&local_1b0,&DAT_100fb90e8,&DAT_100c397b0);
  _swift_release(local_268);
  return;
}



/* Address: 0x100270960 | FUN_100270960 */

void FUN_100270960(code *param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/RestorePurchasesView.swift",0x31,1,0x10,UVar3.unknown,pMVar1)
    ;
  }
  (*param_1)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002709f8 | FUN_1002709f8 */

void FUN_1002709f8(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fb96c8;
  FUN_1000037f0(&DAT_100fb96c8,&DAT_100c39788);
  FUN_10027032c((long)param_1 + (long)*(int *)(puVar4 + 0x2c),uVar1,uVar2);
  return;
}



/* Address: 0x100270a58 | FUN_100270a58 */

void FUN_100270a58(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fb7f60 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fb7f60 = puVar2;
  return;
}



/* Address: 0x100270a9c | FUN_100270a9c */

undefined8 FUN_100270a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb90e8;
  FUN_1000037f0(&DAT_100fb90e8,&DAT_100c397b0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100270aec | FUN_100270aec */

void FUN_100270aec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100270b10 | FUN_100270b10 */

void FUN_100270b10(void)

{
  long unaff_x20;
  
  FUN_100270960(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100270b18 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x100270b1c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100270b20 | FUN_100270b20 */

void FUN_100270b20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb96f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb96d0;
  FUN_100005c24(&DAT_100fb96d0,&DAT_100c39790);
  puVar2 = &DAT_100fb96f8;
  FUN_100016eac(&DAT_100fb96f8,&DAT_100fb90b8,&DAT_100c38dd0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100fb9700;
  FUN_100016eac(&DAT_100fb9700,&DAT_100fb90a0,&DAT_100c396d0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb96f0 = puVar4;
  return;
}



/* Address: 0x100270bd8 | FUN_100270bd8 */

void FUN_100270bd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb96d8;
  FUN_100005c24(&DAT_100fb96d8,&DAT_100c39798);
  puVar2 = puVar1;
  FUN_100270c50();
  puVar3 = puVar2;
  FUN_100270d5c();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb9708 = puVar4;
  return;
}



/* Address: 0x100270c50 | FUN_100270c50 */

void FUN_100270c50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9718;
  FUN_100005c24(&DAT_100fb9718,&DAT_100c397f8);
  puVar2 = puVar1;
  FUN_100270cc0();
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb9710 = puVar3;
  return;
}



/* Address: 0x100270cc0 | FUN_100270cc0 */

void FUN_100270cc0(void)

{
  FUN_10026841c(&DAT_100fb9720,&DAT_100fb9728,&DAT_100c39800,FUN_100270ce4);
  return;
}



/* Address: 0x100270ce4 | FUN_100270ce4 */

void FUN_100270ce4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb9730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9738;
  FUN_100005c24(&DAT_100fb9738,&DAT_100c39808);
  puVar2 = puVar1;
  FUN_100270b20();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9730 = puVar3;
  return;
}



/* Address: 0x100270cf4 | FUN_100270cf4 */

void FUN_100270cf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100fb9738;
  FUN_100005c24(&DAT_100fb9738,&DAT_100c39808);
  puVar2 = puVar1;
  FUN_100270b20();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9730 = puVar3;
  return;
}



/* Address: 0x100270d5c | FUN_100270d5c */

void FUN_100270d5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9748;
  FUN_100005c24(&DAT_100fb9748,&DAT_100c39810);
  puVar2 = puVar1;
  FUN_100270cc0();
  puVar3 = &DAT_100fb9750;
  FUN_10026841c(&DAT_100fb9750,&DAT_100fb9758,&DAT_100c39818,FUN_100270cc0);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb9740 = puVar4;
  return;
}



/* Address: 0x100270df4 | FUN_100270df4 */

void FUN_100270df4(void)

{
  FUN_100016eac(&DAT_100fb9768,&DAT_100fb9770,&DAT_100c39828,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x100270e28 | FUN_100270e28 */

long * FUN_100270e28(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  DateComponents DVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  Product PVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar5 == 1) {
      *(char *)param_1 = (char)*param_2;
      lVar6 = 0;
      FUN_1002abb94();
      lVar14 = (long)*(int *)(lVar6 + 0x14);
      DVar7 = Foundation::DateComponents::typeMetadataAccessor();
      lVar15 = *(long *)(DVar7.unknown + -8);
      lVar9 = (long)param_2 + lVar14;
      (**(code **)(lVar15 + 0x30))(lVar9,1,DVar7.unknown);
      if ((int)lVar9 == 0) {
        (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar7.unknown);
        (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar7.unknown);
      }
      else {
        puVar8 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
                *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
      lVar9 = 0;
      FUN_1002abbf0();
      lVar14 = *(long *)(lVar9 + -8);
      puVar10 = puVar2;
      (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar10 == 0) {
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
          uVar12 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar12;
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar16 = *(code **)(lVar15 + 0x10);
          (*pcVar16)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                     (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar7.unknown);
          (*pcVar16)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                     (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar7.unknown);
        }
        else {
          (**(code **)(lVar15 + 0x10))(puVar1,puVar2,DVar7.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar9,(ulong)puVar10 & 0xffffffff);
        (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar9);
      }
      else {
        puVar8 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      iVar4 = *(int *)(lVar6 + 0x1c);
      PVar11 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar11.unknown + -8) + 0x10))
                ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,PVar11.unknown);
      uVar12 = 1;
    }
    else {
      lVar9 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar9;
      _swift_bridgeObjectRetain();
      uVar12 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar12);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar13 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar9 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002710b4 | FUN_1002710b4 */

void FUN_1002710b4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  DateComponents DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar2 == 1) {
    lVar3 = 0;
    FUN_1002abb94();
    iVar1 = *(int *)(lVar3 + 0x14);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    lVar9 = *(long *)(DVar4.unknown + -8);
    lVar2 = param_1 + iVar1;
    (**(code **)(lVar9 + 0x30))(lVar2,1,DVar4.unknown);
    if ((int)lVar2 == 0) {
      (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar4.unknown);
    }
    lVar2 = param_1 + *(int *)(lVar3 + 0x18);
    lVar5 = 0;
    FUN_1002abbf0();
    lVar6 = lVar2;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
    if ((int)lVar6 == 0) {
      lVar6 = lVar2;
      _swift_getEnumCaseMultiPayload(lVar2,lVar5);
      iVar1 = (int)lVar6;
      if ((iVar1 == 2) || (iVar1 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar2 + *(int *)(puVar7 + 0x30),DVar4.unknown);
        (*pcVar10)(lVar2 + *(int *)(puVar7 + 0x40),DVar4.unknown);
      }
      else if (iVar1 == 0) {
        (**(code **)(lVar9 + 8))(lVar2,DVar4.unknown);
      }
    }
    iVar1 = *(int *)(lVar3 + 0x1c);
    PVar8 = StoreKit::Product::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010027120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x100271210 | FUN_100271210 */

undefined8 * FUN_100271210(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  DateComponents DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  Product PVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    lVar4 = 0;
    FUN_1002abb94();
    lVar11 = (long)*(int *)(lVar4 + 0x14);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar5.unknown + -8);
    lVar7 = (long)param_2 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar7,1,DVar5.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar5.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
    lVar7 = 0;
    FUN_1002abbf0();
    lVar11 = *(long *)(lVar7 + -8);
    puVar8 = puVar1;
    (**(code **)(lVar11 + 0x30))(puVar1,1,lVar7);
    if ((int)puVar8 == 0) {
      puVar8 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar7);
      if (((int)puVar8 == 2) || ((int)puVar8 == 1)) {
        uVar10 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar10;
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 0x10);
        (*pcVar13)((long)puVar3 + (long)*(int *)(puVar6 + 0x30),
                   (long)puVar1 + (long)*(int *)(puVar6 + 0x30),DVar5.unknown);
        (*pcVar13)((long)puVar3 + (long)*(int *)(puVar6 + 0x40),
                   (long)puVar1 + (long)*(int *)(puVar6 + 0x40),DVar5.unknown);
      }
      else {
        (**(code **)(lVar12 + 0x10))(puVar3,puVar1,DVar5.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar7,(ulong)puVar8 & 0xffffffff);
      (**(code **)(lVar11 + 0x38))(puVar3,0,1,lVar7);
    }
    else {
      puVar6 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar1,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar2 = *(int *)(lVar4 + 0x1c);
    PVar9 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,PVar9.unknown);
    uVar10 = 1;
  }
  else {
    uVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    _swift_bridgeObjectRetain();
    uVar10 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}



/* Address: 0x100271468 | FUN_100271468 */

undefined8 * FUN_100271468(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Product PVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1002716e8);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar3 == 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      lVar4 = 0;
      FUN_1002abb94();
      lVar11 = (long)*(int *)(lVar4 + 0x14);
      DVar5 = Foundation::DateComponents::typeMetadataAccessor();
      lVar13 = *(long *)(DVar5.unknown + -8);
      puVar6 = (undefined1 *)((long)param_2 + lVar11);
      (**(code **)(lVar13 + 0x30))(puVar6,1,DVar5.unknown);
      if ((int)puVar6 == 0) {
        (**(code **)(lVar13 + 0x10))
                  ((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                   DVar5.unknown);
        (**(code **)(lVar13 + 0x38))((undefined1 *)((long)param_1 + lVar11),0,1,DVar5.unknown);
      }
      else {
        puVar7 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
      lVar11 = 0;
      FUN_1002abbf0();
      lVar12 = *(long *)(lVar11 + -8);
      puVar8 = puVar1;
      (**(code **)(lVar12 + 0x30))(puVar1,1,lVar11);
      if ((int)puVar8 == 0) {
        puVar8 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar11);
        if (((int)puVar8 == 2) || ((int)puVar8 == 1)) {
          *puVar3 = *puVar1;
          puVar3[1] = puVar1[1];
          _swift_bridgeObjectRetain();
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar14 = *(code **)(lVar13 + 0x10);
          (*pcVar14)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),DVar5.unknown);
          (*pcVar14)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),DVar5.unknown);
        }
        else {
          (**(code **)(lVar13 + 0x10))(puVar3,puVar1,DVar5.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar3,lVar11,(ulong)puVar8 & 0xffffffff);
        (**(code **)(lVar12 + 0x38))(puVar3,0,1,lVar11);
      }
      else {
        puVar7 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar3,puVar1,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      iVar2 = *(int *)(lVar4 + 0x1c);
      PVar9 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar9.unknown + -8) + 0x10))
                ((undefined1 *)((long)param_1 + (long)iVar2),
                 (undefined1 *)((long)param_2 + (long)iVar2),PVar9.unknown);
      uVar10 = 1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      uVar10 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  }
  return param_1;
}



/* Address: 0x1002716e8 | FUN_1002716e8 */

void FUN_1002716e8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb97e8,&TargetEnumDescriptor_100ca9f1c);
  return;
}



/* Address: 0x1002716fc | FUN_1002716fc */

undefined1 * FUN_1002716fc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  puVar7 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar7 == 1) {
    *param_1 = *param_2;
    lVar4 = 0;
    FUN_1002abb94();
    iVar3 = *(int *)(lVar4 + 0x14);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar5.unknown + -8);
    puVar7 = param_2 + iVar3;
    (**(code **)(lVar12 + 0x30))(puVar7,1,DVar5.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
      (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
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
        puVar6 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 0x20);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar5.unknown);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar5.unknown);
      }
      else {
        (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar5.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      puVar6 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar4 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
              (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return puVar7;
}



/* Address: 0x10027196c | FUN_10027196c */

undefined1 * FUN_10027196c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1002716e8);
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar7 != 1) {
      puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar7;
    }
    *param_1 = *param_2;
    lVar4 = 0;
    FUN_1002abb94();
    iVar3 = *(int *)(lVar4 + 0x14);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar5.unknown + -8);
    puVar7 = param_2 + iVar3;
    (**(code **)(lVar12 + 0x30))(puVar7,1,DVar5.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
      (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
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
        puVar6 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 0x20);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar5.unknown);
        (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar5.unknown);
      }
      else {
        (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar5.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      puVar6 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar4 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
              (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x100271bf4 | FUN_100271bf4 */

void FUN_100271bf4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c39840;
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
  }
  return;
}



/* Address: 0x100271c64 | FUN_100271c64 */

long * FUN_100271c64(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  Product PVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar6 = 0;
    FUN_1002abb94();
    lVar13 = (long)*(int *)(lVar6 + 0x14);
    DVar7 = Foundation::DateComponents::typeMetadataAccessor();
    lVar15 = *(long *)(DVar7.unknown + -8);
    puVar8 = (undefined1 *)((long)param_2 + lVar13);
    (**(code **)(lVar15 + 0x30))(puVar8,1,DVar7.unknown);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar15 + 0x10))
                ((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                 DVar7.unknown);
      (**(code **)(lVar15 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar7.unknown);
    }
    else {
      puVar9 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
    lVar13 = 0;
    FUN_1002abbf0();
    lVar14 = *(long *)(lVar13 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar14 + 0x30))(puVar2,1,lVar13);
    if ((int)puVar10 == 0) {
      puVar10 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar13);
      if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        _swift_bridgeObjectRetain();
        puVar9 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar16 = *(code **)(lVar15 + 0x10);
        (*pcVar16)((long)puVar1 + (long)*(int *)(puVar9 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar9 + 0x30),DVar7.unknown);
        (*pcVar16)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar9 + 0x40),DVar7.unknown);
      }
      else {
        (**(code **)(lVar15 + 0x10))(puVar1,puVar2,DVar7.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,(ulong)puVar10 & 0xffffffff);
      (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar13);
    }
    else {
      puVar9 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    iVar5 = *(int *)(lVar6 + 0x1c);
    PVar11 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar11.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar5),
               (undefined1 *)((long)param_2 + (long)iVar5),PVar11.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar12 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100271ebc | FUN_100271ebc */

void FUN_100271ebc(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000100271ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  return;
}



/* Address: 0x100271ff4 | FUN_100271ff4 */

undefined1 * FUN_100271ff4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  DateComponents DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  Product PVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  *param_1 = *param_2;
  lVar5 = 0;
  FUN_1002abb94();
  iVar4 = *(int *)(lVar5 + 0x14);
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  puVar7 = param_2 + iVar4;
  (**(code **)(lVar12 + 0x30))(puVar7,1,DVar6.unknown);
  if ((int)puVar7 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1 + iVar4,param_2 + iVar4,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(param_1 + iVar4,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar14 = *(long *)(lVar9 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      _swift_bridgeObjectRetain();
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 0x10);
      (*pcVar13)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                 (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar6.unknown);
      (*pcVar13)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                 (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar6.unknown);
    }
    else {
      (**(code **)(lVar12 + 0x10))(puVar1,puVar2,DVar6.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar8 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar4 = *(int *)(lVar5 + 0x1c);
  PVar11 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar11.unknown + -8) + 0x10))
            (param_1 + iVar4,param_2 + iVar4,PVar11.unknown);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  return param_1;
}



/* Address: 0x100272228 | FUN_100272228 */

undefined1 * FUN_100272228(undefined1 *param_1,undefined1 *param_2,long param_3)

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
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined *local_78;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar14)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar14)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar13 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_1002722f4;
    }
    (**(code **)(lVar13 + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_1002722f4:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar9 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  puVar10 = puVar1;
  (*pcVar14)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar14)(puVar2,1,lVar9);
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
          pcVar14 = *(code **)(lVar13 + 0x10);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar14 = *(code **)(lVar13 + 0x10);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar13 + 0x10))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_100272570;
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
      pcVar14 = *(code **)(lVar13 + 0x10);
LAB_100272508:
      (*pcVar14)((undefined1 *)((long)puVar1 + (long)iVar3),
                 (undefined1 *)((long)puVar2 + (long)iVar3),DVar5.unknown);
      (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(local_78 + 0x40)),
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
        pcVar14 = *(code **)(lVar13 + 0x10);
        goto LAB_100272508;
      }
      (**(code **)(lVar13 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_100272570;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_100272570:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x18))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  return param_1;
}



/* Address: 0x100272660 | FUN_100272660 */

undefined1 * FUN_100272660(undefined1 *param_1,undefined1 *param_2,long param_3)

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
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar3;
  (**(code **)(lVar11 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
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
  lVar13 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar13 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar14 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar11 + 0x20);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar5.unknown);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar5.unknown);
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
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
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  return param_1;
}



/* Address: 0x100272890 | FUN_100272890 */

undefined1 * FUN_100272890(undefined1 *param_1,undefined1 *param_2,long param_3)

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
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_78;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar14)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar14)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar13 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_10027295c;
    }
    (**(code **)(lVar13 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar13 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_10027295c:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar9 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  puVar10 = puVar1;
  (*pcVar14)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar14)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if ((int)puVar10 == 2) {
          uVar16 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar16;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar14 = *(code **)(lVar13 + 0x20);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          uVar16 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar16;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar14 = *(code **)(lVar13 + 0x20);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar13 + 0x20))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_100272bb4;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if ((int)puVar10 == 2) {
      uVar16 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar16;
      local_78 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar3 = *(int *)(local_78 + 0x30);
      pcVar14 = *(code **)(lVar13 + 0x20);
LAB_100272b4c:
      (*pcVar14)((undefined1 *)((long)puVar1 + (long)iVar3),
                 (undefined1 *)((long)puVar2 + (long)iVar3),DVar5.unknown);
      (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(local_78 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(local_78 + 0x40)),DVar5.unknown);
    }
    else {
      if ((int)puVar10 == 1) {
        uVar16 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar16;
        local_78 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        iVar3 = *(int *)(local_78 + 0x30);
        pcVar14 = *(code **)(lVar13 + 0x20);
        goto LAB_100272b4c;
      }
      (**(code **)(lVar13 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_100272bb4;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_100272bb4:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x28))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  return param_1;
}



/* Address: 0x100272c98 | FUN_100272c98 */

void FUN_100272c98(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100272ca4 | FUN_100272ca4 */

ulong FUN_100272ca4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  lVar1 = 0;
  FUN_1002abb94();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100272cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Address: 0x100272d30 | FUN_100272d30 */

void FUN_100272d30(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100272d3c | FUN_100272d3c */

void FUN_100272d3c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abb94();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100272d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14)) = (char)param_2 + '\x01';
  return;
}



/* Address: 0x100272db4 | FUN_100272db4 */

void FUN_100272db4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb9878,&TargetStructDescriptor_100ca9f44);
  return;
}



/* Address: 0x100272dc8 | FUN_100272dc8 */

void FUN_100272dc8(void)

{
  FUN_100274494();
  return;
}



/* Address: 0x100272ddc | FUN_100272ddc */

void FUN_100272ddc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c39840;
  puStack_30 = &DAT_100c39878;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100272e5c | FUN_100272e5c */

long * FUN_100272e5c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 0x12 | uVar4) - *(long *)(lVar2 + 0x40)) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    *(char *)(param_1 + 2) = (char)param_2[2];
    pcVar5 = *(code **)(lVar2 + 0x10);
    _swift_retain();
    (*pcVar5)((long)param_1 + uVar4 + 0x11 & (uVar4 ^ 0xffffffffffffffff),
              (long)param_2 + uVar4 + 0x11 & (uVar4 ^ 0xffffffffffffffff),lVar3);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100272f20 | FUN_100272f20 */

void FUN_100272f20(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100272f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1 + uVar2 + 0x11 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x100272f64 | FUN_100272f64 */

undefined8 * FUN_100272f64(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  pcVar5 = *(code **)(lVar2 + 0x10);
  _swift_retain();
  (*pcVar5)(uVar4 + 0x11 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff),
            uVar4 + 0x11 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff),lVar3);
  return param_1;
}



/* Address: 0x100272fd4 | FUN_100272fd4 */

undefined8 * FUN_100272fd4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x18))
            (uVar2 + 0x11 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x11 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100273054 | FUN_100273054 */

undefined8 * FUN_100273054(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x20))
            (uVar2 + 0x11 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x11 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1002730ac | FUN_1002730ac */

undefined8 * FUN_1002730ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x28))
            (uVar4 + 0x11 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 0x11 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10027311c | FUN_10027311c */

ulong FUN_10027311c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1002731c4;
  uVar5 = (uVar7 + 0x11 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_1002731c4;
      goto LAB_100273184;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_100273184:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_1002731c4:
  if (-1 < (int)uVar2) {
    uVar7 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (ulong)((int)uVar7 + 1);
  }
  uVar7 = (long)param_1 + uVar7 + 0x11 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001002731fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x100273250 | FUN_100273250 */

void FUN_100273250(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 0x11 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar9 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar6 = 2;
    if (0xfffe < uVar4) {
      bVar6 = 4;
    }
    if (uVar4 < 0xff) {
      bVar6 = uVar4 != 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002733e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 0x11 & ~uVar8);
        return;
      }
      if ((int)param_2 < 0) {
        *param_1 = (ulong)(param_2 & 0x7fffffff);
        param_1[1] = 0;
      }
      else {
        param_1[1] = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x100273444 | FUN_100273444 */

void FUN_100273444(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100273450 | FUN_100273450 */

undefined1  [16] FUN_100273450(void)

{
  return ZEXT816(0x100ec4d38);
}



/* Address: 0x100273460 | FUN_100273460 */

undefined1  [16] FUN_100273460(void)

{
  return ZEXT816(0x100ec4db8);
}



/* Address: 0x100273470 | FUN_100273470 */

long * FUN_100273470(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  DateComponents DVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    uVar5 = 0;
    FUN_1002716e8(0);
    plVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar5);
    if ((int)plVar6 == 1) {
      *(char *)param_1 = (char)*param_2;
      lVar7 = 0;
      FUN_1002abb94();
      lVar15 = (long)*(int *)(lVar7 + 0x14);
      DVar8 = Foundation::DateComponents::typeMetadataAccessor();
      lVar16 = *(long *)(DVar8.unknown + -8);
      lVar10 = (long)param_2 + lVar15;
      (**(code **)(lVar16 + 0x30))(lVar10,1,DVar8.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar16 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar8.unknown);
        (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18));
      lVar10 = 0;
      FUN_1002abbf0();
      lVar15 = *(long *)(lVar10 + -8);
      puVar11 = puVar2;
      (**(code **)(lVar15 + 0x30))(puVar2,1,lVar10);
      if ((int)puVar11 == 0) {
        puVar11 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar10);
        if ((int)puVar11 == 2) {
          uVar13 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar13;
          _swift_bridgeObjectRetain();
          puVar9 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar16 + 0x10);
          (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x30),
                     (long)puVar2 + (long)*(int *)(puVar9 + 0x30),DVar8.unknown);
          (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
                     (long)puVar2 + (long)*(int *)(puVar9 + 0x40),DVar8.unknown);
        }
        else if ((int)puVar11 == 1) {
          uVar13 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar13;
          _swift_bridgeObjectRetain();
          puVar9 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar16 + 0x10);
          (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x30),
                     (long)puVar2 + (long)*(int *)(puVar9 + 0x30),DVar8.unknown);
          (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
                     (long)puVar2 + (long)*(int *)(puVar9 + 0x40),DVar8.unknown);
        }
        else {
          (**(code **)(lVar16 + 0x10))(puVar1,puVar2,DVar8.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar10,(ulong)puVar11 & 0xffffffff);
        (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar10);
      }
      else {
        puVar9 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      iVar4 = *(int *)(lVar7 + 0x1c);
      PVar12 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar12.unknown + -8) + 0x10))
                ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,PVar12.unknown);
      uVar13 = 1;
    }
    else {
      lVar10 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar10;
      _swift_bridgeObjectRetain();
      uVar13 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar5,uVar13);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar14 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar10 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100273780 | FUN_100273780 */

void FUN_100273780(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long lVar10;
  code *pcVar11;
  
  uVar2 = 0;
  FUN_1002716e8(0);
  lVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  if ((int)lVar3 == 1) {
    lVar4 = 0;
    FUN_1002abb94();
    iVar1 = *(int *)(lVar4 + 0x14);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    lVar10 = *(long *)(DVar5.unknown + -8);
    lVar3 = param_1 + iVar1;
    (**(code **)(lVar10 + 0x30))(lVar3,1,DVar5.unknown);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar10 + 8))(param_1 + iVar1,DVar5.unknown);
    }
    lVar3 = param_1 + *(int *)(lVar4 + 0x18);
    lVar6 = 0;
    FUN_1002abbf0();
    lVar7 = lVar3;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
    if ((int)lVar7 == 0) {
      lVar7 = lVar3;
      _swift_getEnumCaseMultiPayload(lVar3,lVar6);
      iVar1 = (int)lVar7;
      if ((iVar1 == 2) || (iVar1 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar11 = *(code **)(lVar10 + 8);
        (*pcVar11)(lVar3 + *(int *)(puVar8 + 0x30),DVar5.unknown);
        (*pcVar11)(lVar3 + *(int *)(puVar8 + 0x40),DVar5.unknown);
      }
      else if (iVar1 == 0) {
        (**(code **)(lVar10 + 8))(lVar3,DVar5.unknown);
      }
    }
    iVar1 = *(int *)(lVar4 + 0x1c);
    PVar9 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(param_1 + iVar1,PVar9.unknown);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Address: 0x1002738fc | FUN_1002738fc */

undefined8 * FUN_1002738fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  DateComponents DVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar3 = 0;
  FUN_1002716e8(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar3);
  if ((int)puVar4 == 1) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    lVar5 = 0;
    FUN_1002abb94();
    lVar12 = (long)*(int *)(lVar5 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar13 = *(long *)(DVar6.unknown + -8);
    lVar8 = (long)param_2 + lVar12;
    (**(code **)(lVar13 + 0x30))(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar8 = 0;
    FUN_1002abbf0();
    lVar12 = *(long *)(lVar8 + -8);
    puVar9 = puVar1;
    (**(code **)(lVar12 + 0x30))(puVar1,1,lVar8);
    if ((int)puVar9 == 0) {
      puVar9 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar8);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar11 = puVar1[1];
        *puVar4 = *puVar1;
        puVar4[1] = uVar11;
        _swift_bridgeObjectRetain();
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar14 = *(code **)(lVar13 + 0x10);
        (*pcVar14)((long)puVar4 + (long)*(int *)(puVar7 + 0x30),
                   (long)puVar1 + (long)*(int *)(puVar7 + 0x30),DVar6.unknown);
        (*pcVar14)((long)puVar4 + (long)*(int *)(puVar7 + 0x40),
                   (long)puVar1 + (long)*(int *)(puVar7 + 0x40),DVar6.unknown);
      }
      else {
        (**(code **)(lVar13 + 0x10))(puVar4,puVar1,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar4,lVar8,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar12 + 0x38))(puVar4,0,1,lVar8);
    }
    else {
      puVar7 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar4,puVar1,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar2 = *(int *)(lVar5 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,PVar10.unknown);
    uVar11 = 1;
  }
  else {
    uVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar11;
    _swift_bridgeObjectRetain();
    uVar11 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar3,uVar11);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar3 = param_2[1];
  *puVar4 = *param_2;
  puVar4[1] = uVar3;
  _swift_retain();
  return param_1;
}


